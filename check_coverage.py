# run from repo root
import os, re

asm_dir = "build/GFEP01/asm"
splits_file = "config/GFEP01/splits.txt"

with open(splits_file) as f:
    splits_content = f.read()

uncovered = []
for fname in sorted(os.listdir(asm_dir)):
    if not fname.endswith(".s"):
        continue
    stem = fname[:-2] # strip .s
    if stem not in splits_content:
        uncovered.append(fname)

print(f"{len(uncovered)} uncovered .s files:")
for f in uncovered:
    print(f" {f}")