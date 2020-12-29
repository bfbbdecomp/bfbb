# inlineasm

**inlineasm** (a.k.a. globalasm) is a Python script that is used during the build process to insert raw assembly instructions directly into our C++ source files.

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

Note: This is a quick overview. If you want to know more, see the [techincal details](#technical-details).

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

When every function in a file is included in the correct order using this pragma, they will all be inserted into the C++ source file **without needing to be decompiled**.

Now we are free to decompile any function we want, in any order we please.
All that you need to do is simply comment out or remove the pragma line for that function and write your own function in its place.

This keeps our source files very clean, and we no longer have to decompile out of order or split up the files.

## Technical Details

This section is for anyone who wants to better understand how the script works, the optimizations I made, or for anyone who may need to modify the code in the future.

The script is invoked on every C++ file during the build process.
It does the following:

#### 1. Search for pragmas

```py
pragmaRegex = r"(#pragma\sGLOBAL_ASM\((.*?)\))"

def getPragmaMatches(fileText):
    matches = re.findall(pragmaRegex, fileText, flags=re.DOTALL)
    return matches
```

The regular expression searches for any matches, also using `flags=re.DOTALL`.
This flag is needed because pragmas can sometime span multiple lines if the names are long
due to our `clang-format` rules.

The regular expression matches _anything_ within the parenthesis. This keeps the regex simple.
The arguments are processed later, and it's easier to deal
with the arguments in Python than to capture them with regex.

If no pragma directives are found in the file, then there's nothing to do, and the script ends.

#### 2. Confirm the functions exist

Before we do anything computationally intensive, we need to make sure the functions that the user is wanting to include exist in the first place.
For example, it would suck if we were processing a file with hundreds of pragmas, substituting each one, only to reach the end and find one that doesn't exist, and have the program throw an error.

Note: this isn't really a problem considering we already have generated all the pragmas, and they are all in the right spot, but in general it's still a good thing to check for in our program.

We store the names/files of each pragma definition in a dictionary. Right now we check to make sure the assembly file exists, and it has the function.
Storing this information on the first pass prevents us from having to run the same regex search again.

#### 3. Substitute the pragmas

**Cache**

Since the substition process needs to be done many many times on every file for a clean build, and for every subsequent change to a C++ file, it runs a lot.
On huge files such as `zEntPlayer.cpp` with hundreds and hundreds of substitions that are thousands of lines of assembly long, it can take some time.
For this reason, [I added a cache](https://github.com/pslehisl/bfbbdecomp/pull/31).

Essentially it creates a `.pragma` folder in the root of the project and stores the results of its computation for each file in that folder.
I use hashes of the file's name and function names as lookup keys to get the pre-computed results.
This greatly speeds up the substition process in large files.

---

Now we loop through all the matches which we saved earlier.

We hash the file name and function name, and check to see if it exists in our cahce.

If it does exist, we simply substitute it with the pre-computed value.
If it doesn't exist, we [process the function](#processing-the-functions) in the assembly file, and then substitue it, and save it in the cache too.

After each function is substituted, we save the file and we're done.

### Processing the functions

**It is very important that the assembly source format doesn't change**.

The script relies on a few assumptions about how the assembly is structured to work properly:

```py
labelRegex = r"\b.+:"

def getAsmFunctionBlock(fileText, label):
    data = []
    found = False
    for line in fileText.splitlines():
        if ":" in line:
            match = re.match(labelRegex, line)
            if match and match.group(0) == label:
                found = True
                continue
        if found:
            data.append(line.strip())
            if len(line) == 0:
                break
    return data
```

### Assumption 1.

The function block is defined when it first encounters a label (a line with `:`) and it ends when it encounters an empty line.

No newlines should ever be added within the body of an assembly function. No two functions should "touch", and should always have a newline between them.

Good:

```diff
.global zCollGeom_CamEnable__FP4xEnt
zCollGeom_CamEnable__FP4xEnt:
/* 801168C8 001136C8  80 03 00 2C */	lwz r0, 0x2c(r3)
/* 801168CC 001136CC  28 00 00 00 */	cmplwi r0, 0
/* 801168D0 001136D0  4C 82 00 20 */	bnelr
/* 801168D4 001136D4  80 03 00 24 */	lwz r0, 0x24(r3)
/* 801168D8 001136D8  90 03 00 2C */	stw r0, 0x2c(r3)
/* 801168DC 001136DC  4E 80 00 20 */	blr
+
.global zCollGeom_CamDisable__FP4xEnt
zCollGeom_CamDisable__FP4xEnt:
/* 801168E0 001136E0  38 00 00 00 */	li r0, 0
/* 801168E4 001136E4  90 03 00 2C */	stw r0, 0x2c(r3)
/* 801168E8 001136E8  4E 80 00 20 */	blr
```

Bad:

```diff
.global zCollGeom_CamEnable__FP4xEnt
zCollGeom_CamEnable__FP4xEnt:
/* 801168C8 001136C8  80 03 00 2C */	lwz r0, 0x2c(r3)
/* 801168CC 001136CC  28 00 00 00 */	cmplwi r0, 0
+
- /* newlines between instructions break it! */
/* 801168D0 001136D0  4C 82 00 20 */	bnelr
/* 801168D4 001136D4  80 03 00 24 */	lwz r0, 0x24(r3)
/* 801168D8 001136D8  90 03 00 2C */	stw r0, 0x2c(r3)
/* 801168DC 001136DC  4E 80 00 20 */	blr
- /* removing this newline will break it! */
.global zCollGeom_CamDisable__FP4xEnt
zCollGeom_CamDisable__FP4xEnt:
/* 801168E0 001136E0  38 00 00 00 */	li r0, 0
/* 801168E4 001136E4  90 03 00 2C */	stw r0, 0x2c(r3)
/* 801168E8 001136E8  4E 80 00 20 */	blr
```

Secondly, the function label is checked against a regex instead of a quick `==` or `in` comparison. Why?
Well, we ran into a dirty bug which took a while to figure out.
Consider the following labels:

```
1. presetup__Q24xhud6widgetFv
2. setup__Q24xhud6widgetFv
```

`2` is a substring of `1`, so if you were substituting `2`, and did a simple `in` check against the current label of `1`, it would return `true`, and it would substitute the wrong function!
This is why we use a regex here:

```py
if ":" in line:
    match = re.match(labelRegex, line)
```

### Assumption 2.

**The comments must never be changed**.

Next, the bytes from the assembly instruction are mapped into a string to insert.

```py
def filterBlockCode(block):
    return list(filter(lambda x: "/*" in x, block))

def codeLineToBytes(line):
    d = line.split()
    b = "0x" + "".join(d[3:7])
    return b
```

This relies on the comments generated by the disassembly script.
Because it outputted the exact assembly instructions, we can just piggyback off of that data.

**If any of these comments are modified, it will break the script.**

`/* 801168DC 001136DC 4E 80 00 20 */ blr`
becomes
`opword 0x4E800020`.

### Assumption 3.

The assembly file's text section needs to be wrapped in a `.if 0` and `.endif` block.
This allows us to include the assembly file and its data sections without including the program code.
However, the program code must exist somewhere in order for our script to know what to insert.
This simple little hack solves the problem of not inserting the code twice, but still allowing it to exist in the assembly files.

## Output

Let's finally take a look at the final function and understand the parts, and why each one is there:

```cpp
extern "C" {
asm static void Model_Unload__FPvUi() {
nofralloc
opword 0x9421FFF0
opword 0x7C0802A6
opword 0x28030000
opword 0x90010014
opword 0x41820008
opword 0x480790A1
opword 0x80010014
opword 0x7C0803A6
opword 0x38210010
opword 0x4E800020
}}
```

---

`asm static void Model_Unload__FPvUi() { }`

Is the function definition.
The `asm` keyword is recognized by the CodeWarrior compiler. It basically tells it "Hey, assembly is in this function".

`static` is added in the case the function is not defined as a global function.
A statically scoped function will not have a `.global` label in the assembly.
Defining functions as static helps avoid multiply defined functions from already being declared during the link process.

```py
isGlobal = True
if args.scope and ".global " + funcToImport not in asmFileText:
    isGlobal = False
```

`void Model_Unload__FPvUi()`

Every function included by the script will always be void, take no arguments, and will be named exactly the same as it's called in the assembly.

`extern "C" { .. }`

The extern "C" block is added to prevent the compiler from mangling the name of the function. The function name is already mangled, so we don't want it to happen twice.

`nofralloc`

nofralloc is needed to prevent the compiler from setting up the function's prologue/epilogue automatically.
Since we are inserting literally every assembly instruction in the function ourselves, we will be doing this on our own naturally.

`opword [data]`

`opword` is a command recognized by the compiler which simply inserts bytes.
