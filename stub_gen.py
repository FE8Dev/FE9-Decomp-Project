#!/usr/bin/env python3
"""
stub_gen.py — Auto-generate NonMatching .cpp stubs from dtk .s files.

Usage:
    python tools/stub_gen.py build/GFEP01/asm/auto_03_*.s [--dry-run] [--apply]

What it does:
  1. Parses each .s file for functions, address ranges, sections, and
     referenced symbols (extern calls and data labels).
  2. Writes a minimal NonMatching .cpp stub to src/.
  3. Appends the splits.txt entry to config/GFEP01/splits.txt.
  4. Appends Object(NonMatching, ...) to configure.py in the correct lib.

Flags:
  --dry-run   Print what would be done without writing any files.
  --apply     Actually write files (default is dry-run if flag omitted).
  --force     Overwrite existing .cpp stubs.

Lib routing:
  Files whose .s path contains 'auto_00' go into Runtime.PPCEABI.H (SDK).
  Everything else goes into the game lib.
"""

import re
import sys
import argparse
from pathlib import Path

# ---------------------------------------------------------------------------
# Configuration — adjust these to match your project layout
# ---------------------------------------------------------------------------
PROJECT_ROOT   = Path(__file__).parent.parent
SRC_DIR        = PROJECT_ROOT / "src"
SPLITS_FILE    = PROJECT_ROOT / "config" / "GFEP01" / "splits.txt"
CONFIGURE_FILE = PROJECT_ROOT / "configure.py"

# Marker strings in configure.py that we insert after
GAME_LIB_MARKER   = '"progress_category": "game"'
SDK_LIB_MARKER    = '"progress_category": "sdk"'

# ---------------------------------------------------------------------------
# Helpers
# ---------------------------------------------------------------------------

def parse_s_file(path: Path):
    """
    Parse a dtk-generated .s file and return a dict with:
      - filename:   base name without extension
      - section:    '.text' or '.init' etc.
      - text_start: start address (int)
      - text_end:   end address (int)
      - ctors_start / ctors_end: if .ctors present (int or None)
      - functions:  list of (name, size) tuples in order
      - calls:      set of function names called via bl/bctr
      - data_labels: set of lbl_XXXXXXXX names referenced
      - sda_labels:  set of lbl_XXXXXXXX accessed via @sda21
    """
    text = path.read_text(encoding='utf-8', errors='replace')
    lines = text.splitlines()

    result = {
        'filename': path.stem,
        'section': '.text',
        'text_start': None,
        'text_end': None,
        'ctors_start': None,
        'ctors_end': None,
        'functions': [],
        'calls': set(),
        'data_labels': set(),
        'sda_labels': set(),
    }

    # Range from file header comment: # 0xSTART..0xEND | size: ...
    range_pat = re.compile(r'#\s+(0x[0-9A-Fa-f]+)\.\.(0x[0-9A-Fa-f]+)\s+\|\s+size:')
    # Section declaration
    sec_pat = re.compile(r'^\.(text|init|ctors|dtors|rodata|data|bss)\b')
    # Function declarations
    fn_pat = re.compile(r'^\.fn\s+(\S+),\s*(global|local|weak)')
    # Size comment inside fn header: # .text:0xOFFSET | 0xADDR | size: 0xSIZE
    size_pat = re.compile(r'#\s+\.\w+:0x[0-9A-Fa-f]+\s+\|\s+0x[0-9A-Fa-f]+\s+\|\s+size:\s+(0x[0-9A-Fa-f]+)')
    # bl / bctr calls
    call_pat = re.compile(r'\bbl\s+(\w+)')
    # Data label references (lis/addi or li sda21)
    lbl_pat = re.compile(r'\b(lbl_[0-9A-Fa-f]{8}|fn_[0-9A-Fa-f]{8}|[A-Za-z]\w+_[0-9A-Fa-f]{8})\b')
    sda_pat  = re.compile(r'(lbl_[0-9A-Fa-f]{8})@sda21')
    jump_pat = re.compile(r'\b(jumptable_[0-9A-Fa-f]{8})\b')

    current_section = '.text'
    # Track ranges per section
    section_ranges = {}   # section -> (start, end)
    in_fn = False
    current_fn_name = None
    current_fn_size = None

    for i, line in enumerate(lines):
        # File-level range comment
        m = range_pat.search(line)
        if m and result['text_start'] is None:
            result['text_start'] = int(m.group(1), 16)
            result['text_end']   = int(m.group(2), 16)

        # Section changes
        m = sec_pat.match(line.strip())
        if m:
            current_section = '.' + m.group(1)
            result['section'] = current_section
            continue

        # .ctors range comes from a later range comment after section change
        if current_section == '.ctors':
            m2 = range_pat.search(line)
            if m2:
                result['ctors_start'] = int(m2.group(1), 16)
                result['ctors_end']   = int(m2.group(2), 16)

        # Function start
        m = fn_pat.match(line.strip())
        if m:
            in_fn = True
            current_fn_name = m.group(1)
            current_fn_size = None
            # Look ahead for size comment on next line
            if i + 1 < len(lines):
                ms = size_pat.search(lines[i + 1])
                if ms:
                    current_fn_size = int(ms.group(1), 16)
            continue

        if line.strip().startswith('.endfn'):
            if current_fn_name and current_section == '.text':
                result['functions'].append((current_fn_name, current_fn_size))
            in_fn = False
            current_fn_name = None
            continue

        if in_fn:
            # Collect bl calls
            for m in call_pat.finditer(line):
                name = m.group(1)
                # Skip local labels
                if not name.startswith('.L_') and not name.startswith('0x'):
                    result['calls'].add(name)

            # Collect data label refs
            for m in lbl_pat.finditer(line):
                lbl = m.group(1)
                if lbl.startswith('lbl_'):
                    # Check if sda21
                    if '@sda21' in line:
                        result['sda_labels'].add(lbl)
                    else:
                        result['data_labels'].add(lbl)
                elif lbl.startswith('fn_') or '_' in lbl:
                    pass  # handled as calls

            for m in sda_pat.finditer(line):
                result['sda_labels'].add(m.group(1))

            for m in jump_pat.finditer(line):
                result['data_labels'].add(m.group(1))

    # Remove self-references from calls (functions defined in this file)
    own_names = {fn for fn, _ in result['functions']}
    result['calls'] -= own_names

    # Remove lbl_ names that appear in calls (they're data, not functions)
    result['calls'] = {c for c in result['calls'] if not c.startswith('lbl_')}

    return result


def infer_return_type(fn_name: str, s_text: str, fn_size: int) -> str:
    """Guess a return type from context clues."""
    name_lower = fn_name.lower()
    if 'getinfo' in name_lower or 'getweight' in name_lower:
        return 'void*'
    if name_lower.startswith('lexicalcast') or name_lower.startswith('comupdate'):
        return 's32'
    if fn_size and fn_size <= 8:
        # Tiny functions — likely returning a value
        return 's32'
    return 'void'


def infer_args(fn_name: str, s_text: str) -> str:
    """Guess argument list. Default to void for safety."""
    return 'void'


def classify_label(lbl: str, is_sda: bool) -> tuple:
    """Return (type_str, is_array) for a label."""
    # Float SDA constants are f32
    if is_sda and re.match(r'lbl_8037[6-9]', lbl):
        return 'f32', False
    # jumptable
    if lbl.startswith('jumptable_'):
        return 'u32', True
    # Default: u8[]
    return 'u8', True


def generate_stub(info: dict) -> str:
    """Generate a .cpp stub string from parsed .s info."""
    lines = ['#include <dolphin/types.h>', '']

    # Forward declarations for called functions
    seen_calls = set()
    for call in sorted(info['calls']):
        if call in seen_calls:
            continue
        seen_calls.add(call)
        lines.append(f'extern "C" void {call}(void*, ...);')

    if seen_calls:
        lines.append('')

    # External data labels (non-SDA, need u8[])
    seen_labels = set()
    for lbl in sorted(info['data_labels']):
        if lbl in seen_labels:
            continue
        seen_labels.add(lbl)
        typ, is_arr = classify_label(lbl, False)
        suffix = '[]' if is_arr else ''
        lines.append(f'extern {typ} {lbl}{suffix};')

    # SDA labels
    for lbl in sorted(info['sda_labels']):
        if lbl in seen_labels:
            continue
        seen_labels.add(lbl)
        typ, is_arr = classify_label(lbl, True)
        suffix = '[]' if is_arr else ''
        lines.append(f'extern {typ} {lbl}{suffix};')

    if seen_labels:
        lines.append('')

    # Function stubs
    for fn_name, fn_size in info['functions']:
        ret = infer_return_type(fn_name, '', fn_size or 0)
        if ret == 'void':
            lines.append(f'void {fn_name}(void) {{}}')
        elif ret == 'void*':
            lines.append(f'void* {fn_name}(void) {{ return 0; }}')
        else:
            lines.append(f'{ret} {fn_name}(void) {{ return 0; }}')

    lines.append('')
    return '\n'.join(lines)


def generate_splits_entry(info: dict) -> str:
    """Generate the splits.txt block for this file."""
    cpp_name = info['filename'] + '.cpp'
    section = info['section']
    start = info['text_start']
    end = info['text_end']

    lines = [f'{cpp_name}:']
    lines.append(f'\t{section:<12}start:0x{start:08X} end:0x{end:08X}')

    if info['ctors_start'] is not None:
        lines.append(f'\t.ctors      start:0x{info["ctors_start"]:08X} end:0x{info["ctors_end"]:08X}')

    return '\n'.join(lines)


def already_in_splits(splits_text: str, cpp_name: str) -> bool:
    return cpp_name in splits_text


def already_in_configure(configure_text: str, cpp_name: str) -> bool:
    return f'"{cpp_name}"' in configure_text


def insert_into_configure(configure_text: str, cpp_name: str, lib_marker: str) -> str:
    """Insert Object(NonMatching, "name.cpp") after the last existing Object() in the target lib."""
    # Find the marker, then find the last Object( entry in that lib block
    marker_pos = configure_text.find(lib_marker)
    if marker_pos == -1:
        print(f"  WARNING: Could not find lib marker '{lib_marker}' in configure.py")
        return configure_text

    # Find next closing ], which ends the objects list for this lib
    search_from = marker_pos
    # Look for Object( lines after the marker, find the last one before the closing ]
    obj_pattern = re.compile(r'Object\((Matching|NonMatching),\s*"[^"]+"\)')
    bracket_pattern = re.compile(r'^\s*\],', re.MULTILINE)

    # Find the closing bracket of this lib's objects list
    bracket_match = bracket_pattern.search(configure_text, marker_pos)
    if not bracket_match:
        print(f"  WARNING: Could not find closing ], for lib after marker")
        return configure_text

    lib_block = configure_text[marker_pos:bracket_match.start()]

    # Find last Object() in lib_block
    last_obj = None
    for m in obj_pattern.finditer(lib_block):
        last_obj = m

    if last_obj is None:
        # No existing objects — insert before the closing ]
        insert_pos = bracket_match.start()
        indent = '        '
        new_line = f'{indent}Object(NonMatching, "{cpp_name}"),\n'
        return configure_text[:insert_pos] + new_line + configure_text[insert_pos:]

    # Insert after the last Object() line
    abs_pos = marker_pos + last_obj.end()
    # Find end of that line
    eol = configure_text.find('\n', abs_pos)
    if eol == -1:
        eol = len(configure_text)

    # Detect indentation from last object line
    line_start = configure_text.rfind('\n', marker_pos, abs_pos) + 1
    indent_match = re.match(r'(\s*)', configure_text[line_start:])
    indent = indent_match.group(1) if indent_match else '        '

    new_line = f'\n{indent}Object(NonMatching, "{cpp_name}"),'
    return configure_text[:eol] + new_line + configure_text[eol:]


# ---------------------------------------------------------------------------
# Main
# ---------------------------------------------------------------------------

def main():
    parser = argparse.ArgumentParser(description='Generate NonMatching stubs from dtk .s files.')
    parser.add_argument('files', nargs='+', help='.s files to process')
    parser.add_argument('--dry-run', action='store_true', help='Print actions without writing files')
    parser.add_argument('--apply', action='store_true', help='Write files (required to actually apply changes)')
    parser.add_argument('--force', action='store_true', help='Overwrite existing .cpp stubs')
    args = parser.parse_args()

    dry_run = not args.apply or args.dry_run

    if dry_run:
        print("[DRY RUN] No files will be written. Pass --apply to apply changes.\n")

    splits_text    = SPLITS_FILE.read_text(encoding='utf-8') if SPLITS_FILE.exists() else ''
    configure_text = CONFIGURE_FILE.read_text(encoding='utf-8') if CONFIGURE_FILE.exists() else ''

    new_splits_entries    = []
    new_configure_entries = []
    cpp_files_to_write    = []
    skipped               = []

    for s_path_str in args.files:
        s_path = Path(s_path_str)
        if not s_path.exists():
            print(f"  SKIP (not found): {s_path}")
            continue

        info = parse_s_file(s_path)
        cpp_name = info['filename'] + '.cpp'
        cpp_path = SRC_DIR / cpp_name

        print(f"\n{'='*60}")
        print(f"Processing: {s_path.name}")
        print(f"  Section:   {info['section']}")
        print(f"  Range:     0x{info['text_start']:08X}..0x{info['text_end']:08X}")
        print(f"  Functions: {[fn for fn, _ in info['functions']]}")

        # Check splits
        if already_in_splits(splits_text, cpp_name):
            print(f"  splits.txt: ALREADY PRESENT — skipping")
            skipped.append(cpp_name)
        else:
            entry = generate_splits_entry(info)
            new_splits_entries.append(entry)
            print(f"  splits.txt: will add entry")

        # Check configure
        if already_in_configure(configure_text, cpp_name):
            print(f"  configure.py: ALREADY PRESENT — skipping")
        else:
            # Determine lib
            is_sdk = 'auto_00' in info['filename'] or 'init' in info['section']
            lib_marker = SDK_LIB_MARKER if is_sdk else GAME_LIB_MARKER
            lib_name = 'SDK' if is_sdk else 'game'
            configure_text = insert_into_configure(configure_text, cpp_name, lib_marker)
            print(f"  configure.py: will add to {lib_name} lib")

        # Check .cpp
        if cpp_path.exists() and not args.force:
            print(f"  src/{cpp_name}: ALREADY EXISTS — skipping (use --force to overwrite)")
        else:
            stub = generate_stub(info)
            cpp_files_to_write.append((cpp_path, stub))
            print(f"  src/{cpp_name}: will write")

    # --- Summary ---
    print(f"\n{'='*60}")
    print(f"Summary:")
    print(f"  .cpp stubs to write:        {len(cpp_files_to_write)}")
    print(f"  splits.txt entries to add:  {len(new_splits_entries)}")
    print(f"  Already in splits (skipped): {len(skipped)}")

    if dry_run:
        print("\n[DRY RUN] No changes written. Pass --apply to apply.")
        if new_splits_entries:
            print("\n--- splits.txt additions ---")
            for e in new_splits_entries:
                print(e)
        return

    # --- Write .cpp files ---
    for cpp_path, stub in cpp_files_to_write:
        cpp_path.write_text(stub, encoding='utf-8')
        print(f"  Wrote: {cpp_path}")

    # --- Append to splits.txt ---
    if new_splits_entries:
        with open(SPLITS_FILE, 'a', encoding='utf-8') as f:
            for entry in new_splits_entries:
                f.write('\n' + entry + '\n')
        print(f"  Updated: {SPLITS_FILE}")

    # --- Write configure.py ---
    CONFIGURE_FILE.write_text(configure_text, encoding='utf-8')
    print(f"  Updated: {CONFIGURE_FILE}")

    print("\nDone! Run: python configure.py && ninja")


if __name__ == '__main__':
    main()
