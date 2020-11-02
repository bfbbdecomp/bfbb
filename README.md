# SpongeBob SquarePants: Battle for Bikini Bottom

This repo contains a WIP decompilation of SpongeBob SquarePants: Battle for Bikini Bottom (US).

It builds the following DOL:

main.dol: `sha1: 306526d90b48e99894c3138f5fc8f2716d9fecf6`

Join us on the [BFBB Modding Discord](https://discord.gg/Dvu2UAS) under `#decomp-discussion`

## Progress

View our progress here: https://pslehisl.github.io/bfbbdecomp

Thanks to [@mattbruv](https://github.com/mattbruv) for setting this up!

## Building

### Required tools

* [devkitPro](https://devkitpro.org/wiki/Getting_Started)
* Python3 (`pacman -S msys/python3`)
* gcc (`pacman -S gcc`)

### Instructions

1. Obtain a clean DOL of BFBB and place it in the base working directory and name it `baserom.dol`.
2. Obtain a copy of the MWCC (Build 92) PowerPC and place it in tools/mwcc_compiler/2.0/ folder in tools/.
3. Obtain a copy of the MWCC (Build 108) PowerPC and place it in tools/mwcc_compiler/2.7/ folder in tools/.
* (NOTE: These compilers' executables [mwcceppc.exe mwasmeppc.exe and mwldeppc.exe] can be installed with Codewarrior 2.0 for Gamecube and Codewarrior 2.7 for Gamecube, but no license or crack is provided with this project. Please obtain access to the compiler on your own.) If you are in the Gamecube/Wii Decompilation discord (not public at this time, but if you are interested and have the skillset to contribute, please DM Revo#7090 on Discord for access), download GC_COMPILERS.zip and extract it to tools/mwcc_compiler/.
4. Run the `make` command

### Notes

The following environment variables must be set in order to prevent some common errors and warnings during the compiling and linking process:

* `Path` - A folder containing mwldeppc.exe must be added to this variable (either the 2.0 or 2.7 folder will work)
* `MWCIncludes` - Can be set to any folder (for example `C:/`)
* `MWLibraries` - Can be set to any folder (for example `C:/`)
* `MWLibraryFiles` - Unsure what this should be set to yet.

## Contributions

Contributions and PRs are welcome.
