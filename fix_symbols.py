#!/usr/bin/env python3
"""
Fix technical issues in symbols.txt for GFEP01 decomp project.
Applies four fixes:
1. Unaligned @62 entries (size:0x1B -> size:0x1C)
2. Overlapping symbols (size exceeds next symbol's address)
3. Split boundary overflow (lbl_802A41AF)
4. Multiply-defined symbols (add scope:local)
"""

import re
import sys

INPUT = "config/GFEP01/symbols.txt"
OUTPUT = "config/GFEP01/symbols.txt"

def parse_address(sym_line):
    m = re.search(r':0x([0-9A-Fa-f]+)', sym_line)
    if m:
        return int(m.group(1), 16)
    return None

def parse_size(sym_line):
    m = re.search(r'size:0x([0-9A-Fa-f]+)', sym_line)
    if m:
        return int(m.group(1), 16)
    return None

def get_section(sym_line):
    m = re.search(r'=\s+(\S+):0x', sym_line)
    if m:
        return m.group(1)
    return None

with open(INPUT, 'r', encoding='utf-8') as f:
    lines = f.readlines()

print(f"Loaded {len(lines)} lines from {INPUT}")

# ── Fix 1: Unaligned @62 string entries (size:0x1B -> size:0x1C) ──────────────
fix1_count = 0
for i, line in enumerate(lines):
    if '@62' in line and 'size:0x1B' in line:
        lines[i] = line.replace('size:0x1B', 'size:0x1C')
        fix1_count += 1
print(f"Fix 1: {fix1_count} unaligned @62 entries corrected")

# ── Fix 2: Overlapping symbols ─────────────────────────────────────────────────
# Group symbols by section, then check if addr+size > next_addr
fix2_count = 0
# Parse all symbol lines with address, size, section
sym_data = []
for i, line in enumerate(lines):
    if '= ' not in line or 'type:' not in line:
        continue
    addr = parse_address(line)
    size = parse_size(line)
    section = get_section(line)
    if addr and size and section:
        sym_data.append((i, addr, size, section))

# Check each symbol against the next one in the same section
for idx in range(len(sym_data) - 1):
    li, addr, size, section = sym_data[idx]
    nli, naddr, nsize, nsection = sym_data[idx + 1]
    if section != nsection:
        continue
    if addr + size > naddr:
        correct_size = naddr - addr
        if correct_size > 0:
            old = f'size:0x{size:X}'
            new = f'size:0x{correct_size:X}'
            if old in lines[li]:
                lines[li] = lines[li].replace(old, new)
                fix2_count += 1

print(f"Fix 2: {fix2_count} overlapping symbols corrected")

# ── Fix 3: lbl_802A41AF split boundary overflow ────────────────────────────────
fix3_count = 0
for i, line in enumerate(lines):
    if 'lbl_802A41AF' in line and 'size:0x15' in line:
        lines[i] = line.replace('size:0x15', 'size:0x14')
        fix3_count += 1
print(f"Fix 3: {fix3_count} split boundary overflows corrected")

# ── Fix 4: Multiply-defined symbols (same name, multiple addresses) ────────────
fix4_count = 0
name_seen = {}
# First pass: find all names and how many times they appear
for line in lines:
    m = re.match(r'^(\S+)\s*=', line)
    if m:
        name = m.group(1)
        name_seen[name] = name_seen.get(name, 0) + 1

# Second pass: for names seen more than once, add scope:local if no scope set
for i, line in enumerate(lines):
    m = re.match(r'^(\S+)\s*=', line)
    if not m:
        continue
    name = m.group(1)
    if name_seen.get(name, 0) > 1 and 'scope:' not in line:
        # Add scope:local before the comment or at end
        lines[i] = line.rstrip('\n').rstrip() + ' scope:local\n'
        fix4_count += 1

print(f"Fix 4: {fix4_count} multiply-defined symbols given scope:local")

with open(OUTPUT, 'w', encoding='utf-8') as f:
    f.writelines(lines)

print(f"\nDone! Fixed symbols.txt written to {OUTPUT}")
print("Run 'python configure.py && ninja' to rebuild.")
