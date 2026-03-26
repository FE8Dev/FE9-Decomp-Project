#!/usr/bin/env python3
"""
Import function names from a Dolphin MAP file into symbols.txt.
Usage: python tools/import_map.py <path_to_map_file> [--dry-run]

This script will:
1. Parse the MAP file for named functions
2. Find matching fn_ADDR entries in symbols.txt
3. Rename them to their real names
4. Report what was changed
"""

import re
import sys
import shutil
from pathlib import Path


def sanitize_name(name):
    """Convert a C++ name to a valid symbol identifier."""
    # Remove argument lists: "foo::bar(int, float)" -> "foo::bar"
    if '(' in name:
        name = name[:name.index('(')]
    # Replace :: with __
    name = name.replace('::', '__')
    # Remove template parameters
    name = re.sub(r'<[^>]*>', '', name)
    # Replace spaces and other invalid chars with _
    name = re.sub(r'[^a-zA-Z0-9_]', '_', name)
    # Remove leading/trailing underscores from substitution (but keep intentional ones)
    name = name.strip('_') if not name.startswith('__') else name
    return name


def process_map(map_file_path, symbols_file_path, dry_run=False):
    map_file = Path(map_file_path)
    symbols_file = Path(symbols_file_path)

    if not map_file.exists():
        print(f"ERROR: MAP file not found: {map_file}")
        return
    if not symbols_file.exists():
        print(f"ERROR: symbols.txt not found: {symbols_file}")
        return

    # --- Parse MAP file ---
    map_entries = {}
    with open(map_file, 'r', encoding='utf-8', errors='replace') as f:
        for line in f:
            line = line.strip()
            if not line or 'section layout' in line or '.note' in line:
                continue
            parts = line.split()
            if len(parts) < 5:
                continue
            try:
                addr = int(parts[0], 16)
                name = parts[4]
                if name.startswith('zz_'):
                    continue
                if '_restgpr_' in name or '__restore_gpr' in name:
                    continue
                if name == 'DBClose':
                    continue
                map_entries[addr] = name
            except (ValueError, IndexError):
                continue

    print(f"Found {len(map_entries)} named functions in MAP file")

    # --- Read symbols.txt ---
    with open(symbols_file, 'r') as f:
        lines = f.readlines()

    # --- Process each line ---
    # Only touch lines where the symbol name is fn_XXXXXXXX
    # Handles both formats:
    #   fn_XXXXXXXX = .section:0xADDR;
    #   fn_XXXXXXXX = .section:0xADDR:0xADDR;   (double-address / alias format)
    fn_pattern = re.compile(
        r'^(fn_([0-9a-fA-F]{8}))'              # group1=symbol name, group2=addr hex
        r'(\s*=\s*)'                             # group3=equals (with optional spaces)
        r'(\.[a-z]+:0x[0-9a-fA-F]+'            # group4=section:0xADDR
        r'(?::0x[0-9a-fA-F]+)?;)'               #   optional :0xADDR (double-address format)
        r'(.*)'                                  # group5=rest of line (comments, flags, etc.)
    )

    renames = {}
    new_lines = []

    for line in lines:
        m = fn_pattern.match(line)
        if m:
            symbol_name  = m.group(1)   # e.g. fn_80003140
            addr_hex     = m.group(2)   # e.g. 80003140
            equals       = m.group(3)   # e.g. " = "
            section_decl = m.group(4)   # e.g. .init:0x80003140; or .init:0x80003140:0x80003140;
            rest         = m.group(5)   # e.g. " // type:function size:0x30 scope:global"

            addr = int(addr_hex, 16)

            if addr in map_entries:
                map_name  = map_entries[addr]
                safe_name = sanitize_name(map_name)

                if safe_name and safe_name != symbol_name:
                    renames[addr] = (symbol_name, safe_name, map_name)
                    # Reconstruct the line with the new name, keeping everything else identical
                    new_line = f"{safe_name}{equals}{section_decl}{rest}"
                    if not new_line.endswith('\n'):
                        new_line += '\n'
                    new_lines.append(new_line)
                    continue

        new_lines.append(line)

    print(f"Functions to rename: {len(renames)}")
    print("\n=== RENAMES ===")
    for addr, (old_name, new_name, original) in sorted(renames.items()):
        print(f"  0x{addr:08X}: {old_name} -> {new_name}  (original: {original})")

    if dry_run:
        print("\n[DRY RUN] No changes made. Remove --dry-run to apply.")
        return

    # Backup original before writing
    backup = symbols_file.with_suffix('.txt.bak')
    shutil.copy2(symbols_file, backup)
    print(f"\nBackup saved to: {backup}")

    # Write updated symbols.txt
    with open(symbols_file, 'w') as f:
        f.writelines(new_lines)

    print(f"Done! Renamed {len(renames)} symbols in {symbols_file}")
    print("\nNext steps:")
    print("  python configure.py")
    print("  ninja")


if __name__ == '__main__':
    if len(sys.argv) < 2:
        print("Usage: python tools/import_map.py <map_file> [--dry-run]")
        sys.exit(1)

    dry_run = '--dry-run' in sys.argv
    process_map(sys.argv[1], "config/GFEP01/symbols.txt", dry_run=dry_run)