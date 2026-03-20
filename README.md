# Fire Emblem: Path of Radiance Decompilation


A work-in-progress matching decompilation of **Fire Emblem: Path of Radiance** (GameCube, 2005).

> **Target version:** `GFEP01` — European (En, Fr, De, Es, It)

This repository does not contain any game assets or assembly. An original copy of the game is required to build.

---

## Dependencies

### Windows
- [Python](https://www.python.org/downloads/) — add to `%PATH%` during install (also available from the Windows Store)
- [Ninja](https://github.com/ninja-build/ninja/releases) — download and add to `%PATH%`

### macOS
```sh
brew install python ninja
```

After OS upgrades, if macOS complains about Wine being unverified, run:
```sh
sudo xattr -rd com.apple.quarantine '/Applications/Wine Crossover.app'
```

### Linux
```sh
# Debian/Ubuntu
sudo apt install python3 ninja-build

# For non-x86_64 platforms, also install Wine:
sudo apt install wine
# On x86_64, wibo (a minimal 32-bit Windows wrapper) will be downloaded automatically.
```

---

## Building

### 1. Clone the repository

```sh
git clone https://github.com/YOUR_USERNAME/FE9-Decomp-Project.git
cd FE9-Decomp-Project
```

### 2. Provide your game disc

Copy your game disc image to `orig/GFEP01/`. Supported formats: ISO (GCM), RVZ, WIA, WBFS, CISO, NFS, GCZ, TGC.

```
orig/
  GFEP01/
    game.iso  ← place your disc image here
```

> The SHA-1 of the target `main.dol` is `1cf18d42d52c745d533715895c3a6649802324e9`.

### 3. Configure and build

```sh
python configure.py
ninja
```

The build system will automatically download all required tools (decomp-toolkit, compilers, objdiff) on the first run. No manual tool installation is needed.

---

## Project Structure

```
config/GFEP01/    - Build configuration, symbols, and splits
src/              - Decompiled C/C++ source files
include/          - C/C++ header files
orig/GFEP01/      - Original game files (not committed)
build/            - Build artifacts (not committed)
tools/            - Build scripts and tool downloader
```

---

## Contributing

All contributions are welcome! Here's how to get started:

1. Build the project following the steps above
2. Install [objdiff](https://github.com/encounter/objdiff) for local function diffing
3. Use [decomp.me](https://decomp.me) to collaborate on matching functions
4. Submit a pull request with your changes

For help and discussion, join the **[GC/Wii Decompilation Discord](https://discord.gg/hKx3FJJgrV)** and head to the `#dtk` channel.

---

## References

- [decomp-toolkit](https://github.com/encounter/decomp-toolkit) — the core build tooling powering this project
- [dtk-template](https://github.com/encounter/dtk-template) — the project template this is based on
- [objdiff](https://github.com/encounter/objdiff) — local function diffing tool
- [decomp.me](https://decomp.me) — collaborative online decompilation sandbox
- [decomp.dev](https://decomp.dev) — decompilation progress tracker
- [GC/Wii Splitting Guide](https://celestialamber.github.io/GC-Wii-Decomp-Splitting-Guide/) — guide for splitting and labeling code

---

*This project is not affiliated with Nintendo or Intelligent Systems.*