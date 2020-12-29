# inlineasm

**inlineasm** (a.k.a. globalasm) is a Python script that's used during the build process to insert raw assembly instructions directly into our C++ source files.

## Purpose

This script enables us to decompile functions **in any order that we choose**.
This is very important for productivity and ease of decompilation.

### Why is this important?

When attempting to recreate a piece of software perfectly, every single byte of the final program must be in the exact same spot as the original for it to match.

C++ source code is compiled into bytes of assembly code that are stored in the final executable.
Functions are defined in a C++/assembly source file from top to bottom.
If a function or a file is out of place, the build will not match.
You can see the order that the files are included in [here](../../obj_files.mk).

This means that if you want to decompile a function from assembly to C++ (assuming this script doesn't exist), you have two options:

1. Decompile each function in a file from top to bottom.
2. Decompile each function in a file from bottom to top.

This is often not desireable because the functions at the beginning or end of a file could be very large and complicated, meaning that they **must** be decompiled before starting to decompile a smaller or easier function.

It _is_ possible to decompile functions out of order, but you have to:

1. Split the assembly file into two, so that the function you want to decompile is at the beginning or end of one of the files.
2. Split the C++ source file into two, similarly.
3. Update the makefile to include the split assembly file and C++ source files, and make sure they are included in the correct order.

This gets messy really fast, and you would need to split the files further every single time you wanted to decompile something out of order.
This would leave you with a ton of fragments of the original file, and would look very ugly and be hard to follow.

## How it works

This script enables us to use a custom [pragma directive](<https://en.wikipedia.org/wiki/Directive_(programming)>) called `GLOBAL_ASM`:

```cpp
#pragma GLOBAL_ASM([assembly file], [function])
```

Now when a C++ source file is compiled, our script runs behind the scenes during the compilation process.
It searches for all instances of the `#pragma GLOBAL_ASM()` directive, and substitutes it with the function it is referencing.

For example, in our C++ source file we can put:

```cpp
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "IsShield__9zNPCSlickCFv")
```

This tells the script to look in the assembly file `zNPCTypeRobot.s` for a function named `IsShield__9zNPCSlickCFv`:

```as
.global IsShield__9zNPCSlickCFv
IsShield__9zNPCSlickCFv:
/* 80100B8C 000FD98C  C0 22 9C 64 */	lfs f1, lbl_803CE5E4-_SDA2_BASE_(r2)
/* 80100B90 000FD990  C0 03 03 8C */	lfs f0, 0x38c(r3)
/* 80100B94 000FD994  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 80100B98 000FD998  7C 00 00 26 */	mfcr r0
/* 80100B9C 000FD99C  54 03 1F FE */	rlwinm r3, r0, 3, 0x1f, 0x1f
/* 80100BA0 000FD9A0  4E 80 00 20 */	blr
```

Then, this function is processed and the raw assembly instructions are inserted into an intermediate C++ source file:

```cpp
extern "C" {
asm void IsShield__9zNPCSlickCFv() {
nofralloc
opword 0xC0229C64
opword 0xC003038C
opword 0xFC010000
opword 0x7C000026
opword 0x54031FFE
opword 0x4E800020
}}
```

The intermediate C++ file which has all of the pragma substitutions is then compiled into an object file which is used by the linker to create the final build.

The intermediate C++ files and the compiled object files are located in the `obj` folder in the root of the project.
They are build artifacts and are not tracked in source control.

---

When every function in a file is included in the correct order using this pragma, they will all be inserted into the C++ source file **without needing to be decompiled**.

Now we are free to decompile any function we want, in any order we please.
All that you need to do is simply comment out or remove the pragma line for that function and write your own.

This keeps our source files very clean, and we no longer have to decompile out of order or split up the files.
