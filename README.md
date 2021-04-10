# SpongeBob SquarePants: Battle for Bikini Bottom

![OK](https://github.com/bfbbdecomp/bfbb/workflows/build/badge.svg)
<a href="https://bfbbdecomp.github.io/bfbb/progress" alt="Percentage Decompiled">
<img src="https://img.shields.io/badge/dynamic/json?color=blue&label=decompiled&query=linesPercent&url=https%3A%2F%2Fbfbbdecomp.github.io%2Fbfbb%2Fapi.json" />
</a>
<a href="https://discord.gg/dVbGFdYU6A">
<img src="https://img.shields.io/discord/829152115322257436?logo=discord"
            alt="chat on Discord"></a>

This repo contains a WIP decompilation of SpongeBob SquarePants: Battle for Bikini Bottom (US) for Nintendo GameCube.

It builds the following DOL:

main.dol: `sha1: 306526d90b48e99894c3138f5fc8f2716d9fecf6`

## Progress

View our progress and answers to frequently asked questions on the [project tracking website](https://bfbbdecomp.github.io/bfbb/progress).

Join the discussion on the [BFBB Decompilation Discord](https://discord.gg/dVbGFdYU6A).

## Building

### Requirements

- [devkitPro](https://devkitpro.org/wiki/Getting_Started)
  - During installation, only the 'GameCube Development' component is required.
- Python3 (`pacman -S msys/python3`)
- gcc (`pacman -S gcc`)
- Metrowerks CodeWarrior 2.0 and 2.7 compiler and linker for Embedded PowerPC (`mwcceppc.exe` and `mwldeppc.exe`)
  - These can be installed with CodeWarrior 2.0 and 2.7 for GameCube. Please obtain access to these tools on your own, or if you are interested in contributing, please join the [BFBB Decompilation Discord](https://discord.gg/dVbGFdYU6A) and DM either `Seil#3565` or `mp#8248` for access.
- A clean DOL of Battle for Bikini Bottom
  - This is usually named `main.dol` (or something similar) and must be extracted from the GameCube disc for the game. See [this guide](https://battlepedia.org/Setting_up_Dolphin_for_modding) for instructions.

### Instructions

1. Copy your clean DOL of Battle for Bikini Bottom to the base working directory and rename it `baserom.dol`.
2. Create a `2.0` and `2.7` folder in `tools/mwcc_compiler`.
3. Copy the CW 2.0 `mwcceppc.exe` and `mwldeppc.exe` into the `2.0` folder.
4. Copy the CW 2.7 `mwcceppc.exe` and `mwldeppc.exe` into the `2.7` folder.
5. Run the `make` command.

## Project Structure

    bfbb
    ├── .github/workflows: build script for the website and CI
    ├── .vscode: settings and tasks for VS Code
    ├── asm: disassembled source code and linker code
    │   ├── CodeWarrior: Metrowerks Standard Library and C/C++ Runtime
    │   ├── Core: asm for src/Core
    │   ├── Game: asm for src/Game
    │   ├── ODEGdev: Debugger SDK
    │   ├── bink: Bink SDK
    │   ├── dolphin: Dolphin SDK
    │   └── rwsdk: RenderWare SDK
    ├── docs: useful decompilation guides
    ├── dwarf: C++ definitions generated from the PS2 BFBB executable
    ├── include: global include headers
    │   ├── CodeWarrior: C/C++ standard library
    │   ├── dolphin: Dolphin SDK
    │   ├── inline: utility inline asm macros
    │   └── rwsdk: RenderWare SDK
    ├── src: decompiled C/C++ source code for BFBB
    │   ├── Core: core game engine code
    │   │   ├── p2: platform-specific code
    │   │   └── x: game engine code
    │   └── Game: game-specific code
    ├── tools: helper scripts and tools
    │   ├── inlineasm: inserts raw assembly into C++ source code
    │   ├── mwcc_compiler: Metrowerks compiler and linker
    └   └── symbol_ripper: converts a mangled symbol name into a C++ function

## Contributions

Contributions and PRs are welcome.

We recommend joining the [BFBB Decompilation Discord](https://discord.gg/dVbGFdYU6A) as most of our discussion about this project occurs there. It's also the best place to get help if you need it.

## Special Thanks

**[@Seil](https://github.com/pslehisl)** -
Starting the project, working on tools, decompilation, support, etc. (too many things to list).

**[@mattbruv](https://github.com/mattbruv)** -
Creating the [project tracking website](https://bfbbdecomp.github.io/bfbb/), [inlineasm](tools/inlineasm/README.md), decompilation.

**[@DarkRTA](https://github.com/DarkRTA)** -
Exporting datatypes for Ghidra, creating the formatting rules, splitting data files, improving the build process, decompilation.

**[@stravant](https://github.com/stravant)** -
writing [documentation](https://github.com/bfbbdecomp/bfbb/blob/master/docs/WalkthroughAndTips.md), decompilation.

**[@mkst](https://github.com/mkst)** ([conker](https://github.com/mkst/conker)) -
Continuous Integration.

And to [everyone else](https://github.com/bfbbdecomp/bfbb/graphs/contributors) who has contributed to the project in any way.
