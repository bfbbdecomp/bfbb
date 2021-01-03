# SpongeBob SquarePants: Battle for Bikini Bottom
<a href="https://pslehisl.github.io/bfbbdecomp/progress" alt="Percentage Decompiled">
        <img src="https://img.shields.io/badge/dynamic/json?color=green&label=Decompiled&query=percentage&url=https%3A%2F%2Fpslehisl.github.io%2Fbfbbdecomp%2Fapi.json" /></a>
<a href="https://discord.gg/Dvu2UAS">
        <img src="https://img.shields.io/discord/446321271635050506?logo=discord"
            alt="chat on Discord"></a>


This repo contains a WIP decompilation of SpongeBob SquarePants: Battle for Bikini Bottom (US) for Nintendo GameCube.

It builds the following DOL:

main.dol: `sha1: 306526d90b48e99894c3138f5fc8f2716d9fecf6`

Join us on the [BFBB Modding Discord](https://discord.gg/Dvu2UAS) under `#decomp-discussion`

## Progress

View our progress and other statistics [here](https://pslehisl.github.io/bfbbdecomp/progress).
Thanks to [@mattbruv](https://github.com/mattbruv) for setting this up!

## Building

### Requirements

* [devkitPro](https://devkitpro.org/wiki/Getting_Started)
    * During installation, only the 'GameCube Development' component is required.
* Python3 (`pacman -S msys/python3`)
* gcc (`pacman -S gcc`)
* Metrowerks CodeWarrior 2.0 and 2.7 compiler and linker for Embedded PowerPC (`mwcceppc.exe` and `mwldeppc.exe`)
    * These can be installed with CodeWarrior 2.0 and 2.7 for GameCube. Please obtain access to these tools on your own, or if you are interested in contributing, please join the [BFBB Modding Discord](https://discord.gg/Dvu2UAS) and DM either `Seil#3565` or `mp#8248` for access.
* A clean DOL of Battle for Bikini Bottom
    * This is usually named `main.dol` (or something similar) and must be extracted from the GameCube disc for the game. See [this guide](https://battlepedia.org/Setting_up_Dolphin_for_modding) for instructions.

### Instructions

1. Copy your clean DOL of Battle for Bikini Bottom to the base working directory and rename it `baserom.dol`.
2. Create a `2.0` and `2.7` folder in `tools/mwcc_compiler`.
3. Copy the CW 2.0 `mwcceppc.exe` and `mwldeppc.exe` into the `2.0` folder.
4. Copy the CW 2.7 `mwcceppc.exe` and `mwldeppc.exe` into the `2.7` folder.
5. Run the `make` command.

## Contributions

Contributions and PRs are welcome.
