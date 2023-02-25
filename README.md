# SpongeBob SquarePants: Battle for Bikini Bottom

![OK](https://github.com/bfbbdecomp/bfbb/workflows/build/badge.svg)
<a href="https://discord.gg/dVbGFdYU6A">
<img src="https://img.shields.io/discord/829152115322257436?logo=discord"
            alt="chat on Discord"></a>

This repo contains a WIP decompilation of SpongeBob SquarePants: Battle for Bikini Bottom (US) for Nintendo GameCube.

It builds the following DOL:

main.dol: `sha1: 306526d90b48e99894c3138f5fc8f2716d9fecf6`

## Progress

View our progress and answers to frequently asked questions on the ~~project tracking website~~ *(currently down, will be updated soon).*

Join the discussion on the [BFBB Decompilation Discord](https://discord.gg/dVbGFdYU6A).

## Building

### Requirements

- [devkitPro](https://devkitpro.org/wiki/Getting_Started)
  - During installation, only the 'GameCube Development' component is required.
- Python 3 
- gcc
- Metrowerks CodeWarrior 2.0 and 2.7 compiler and linker for Embedded PowerPC (`mwcceppc.exe` and `mwldeppc.exe`)
  - Follow the instructions [here](https://pastebin.com/raw/CmeG2iDP).

### Instructions

1. Extract the downloaded `mwcc_compiler` folder from the zip file into `tools/mwcc_compiler`.
2. Run the `make` command.

### Instructions using Docker

1. Build the Docker image: `docker build . -t bfbb`
2. Compile BFBB: `docker run -v $(pwd):/bfbbdecomp bfbb make --jobs`

## Project Structure

    bfbb
    ├── .github/workflows: build script for the website and CI
    ├── .vscode: settings and tasks for VS Code
    ├── asm: disassembled source code and linker code
    ├── include: global include headers
    │   ├── CodeWarrior: C/C++ standard library
    │   ├── dolphin: Dolphin SDK
    │   ├── inline: utility inline asm macros
    │   └── rwsdk: RenderWare SDK
    ├── src: decompiled C/C++ source code for BFBB
    │   ├── Core: core game engine code
    │   │   ├── gc: platform-specific code for GameCube
    │   │   └── x: game engine code
    │   └── Game: game-specific code
    ├── tools: helper scripts and tools
    │   ├── mwcc_compiler: Metrowerks compiler and linker
    └   └── dtk: GameCube/Wii decompilation project tools.

## Contributions

Contributions and PRs are welcome.

We recommend joining the [BFBB Decompilation Discord](https://discord.gg/dVbGFdYU6A) as most of our discussion about this project occurs there. It's also the best place to get help if you need it.

## Special Thanks
* [@encounter](https://github.com/encounter) for creating a [full disassembly](https://github.com/bfbbdecomp/bfbb/pull/257),
[dtk](https://github.com/encounter/decomp-toolkit), and [objdiff](https://github.com/encounter/objdiff).

* All other contributors

<a href="https://github.com/bfbbdecomp/bfbb/graphs/contributors">
  <img src="https://contrib.rocks/image?repo=bfbbdecomp/bfbb" />
</a>