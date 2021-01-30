# Reverse Engineering a Function

## Name Mangling Translation

The first thing you will have to do when reverse engineering a function is understand what name the function has / what arguments it takes. To do this, you need to understand name mangling.

Functions in C++ can be overloaded, having different variants, each with different argument types. However, there are multiple ways to write a function signature which really means the same thing, for instance:

* `float32 const* foobar(void);`
* `const float *foobar();`

Those two signatures mean the exact same thing on a 32 bit architecture. In order to match these up when linking an execubale, the compiler has to normalize all the function names into a "mangled" form, unique to the type that they have. E.g:

* C++ declaration: `void foo(bar::baz&);`
* Mangled symbol name: `foo__FRQ23bar3baz`

It can seem daunting to read these mangled names at first, but they actually follow a set of fairly simple rules. First, note that every compiler has a different way of mangling symbol names, so the rules described here are for the specific CodeWarrior toolchain we are using.

* Function name always comes first followed by two underscores: `funcname__rest`
    * `void foo()` → `foo__Fv`

* Next comes any namespacing:
    * If there is only one level of namespacing, the underscores are followed by the length of the namespace as a number, then by the namespace name. This applies for classes and namespaces:
        * `void class::foo()` → `foo__5classFv`
        * `void namespace::foo()` → `foo__9namespaceFv`

    * If there are two or more levels of namespacing, then the `Q` (standing for "qualified") is followed by the number of namespacing levels before the individual namespaces are listed:
        * `void class::innerclass::foo()` → `foo__Q25class10innerclassFv`
        * `void a::b::c::foo()` → `foo_Q31a1b1cFv`

* Next comes the constant `F`, standing for "function". Any method / free function will have this in the symbol.

* Next comes the list of argument types. If the function has no arguments, this is just `v`, standing for "void":
    * `void foo()` → `foo__Fv`
    * `void foo(void)` → `foo__Fv` (the void is always implicitly there)

* If the function has arguments, they are listed on after another after the `F`. These are the other argument types:
    * float is `f` and double is `d`:
        * `void foo(float)` → `foo__Ff`
        * `void foo(double, double)` → `foo__Fdd`

    * The integer types are `c`, `s`, `i`, `l`, `x` standing for char, short, int, long, and long long:
        * `void foo(int8, int32)` → `foo__Fci`
        * `void foo(long, int64)` → `foo__Flx`
    
    * Note that even though `i` and `l` are both 32 bits long in the PowerPC ABI, as far as the linker is concerned they are still distinct types, so you still have to use the correct one.

    * Unsigned types are created by placing a `U` in front of an integer type:
        * `void foo(uint32)` → `foo__FUi`

    * Pointers are created by placing a `P` in front of a type, and references are created by placing an `R` in front of a type:
        * `void foo(uint16*)` → `foo__FPUs`
        * `void foo(int32&)` → `foo__FRi`
    
    * Constantness is encoded by a `C` in front of a type:
        * `void foo(const char*)` → `foo__FPCc`

    * Structs/classes are given by a number equal to their length followed by their name:
        * `void foo(MyStruct)` → `foo__F8MyStruct`
        * `void foo(const MyClass*)` → `foo__FPC7MyClass`

* Return types are not included! You can't overload based on the return type, so the return type is not present at all in the mangled function name, you will have to work it out in other ways.

* Note on anonymous namespaces: Anonymous unions / structs inside of other structs will show up as `@unnamed@<file>` in the mangled namespacing.

* Putting it all together:
    * `void memcpy(void* dest, const void* src, size_t len)` → `memcpy__FPvPCvUi`
    * `void SomeType::Init(const assets::Asset& data)` → `Init__8SomeTypeFRCQ26assets5Asset`

## What to do with your Function

Okay, you de-mangled the name of a function in one of the assembly (`.s`, standing for a**S**sembler) files. What do you do with it now?

Every translation unit (thing that gets compiled into a `.o` file) in the project has four files associated with it:

* A `.h` and `.cpp` file in the `src` directory. These are the C++ sources that get compiled into the final executable.

* A `.s` file in the `asm` directory containing untranslated assembly code.

* `.cpp` file in the `dwarf/SB` directory. This code is *not compiled* and should **not be edited**. It is information collected from the Playstation 2 executable's debug info, only intended to be used as a reference while doing translation.

Somewhat confusingly, the assembly code in the `.s` files is not actually compiled there. Instead, it is wrapped in a `.if 0` block so that it has no effect there. Instead, it is included in the `.cpp` files via `#pragma GLOBAL_ASM(...)` statements. The purpose of this is that if the untranslated assembly were placed directly in the C++ files, modern C++ tooling would not work on those files, making it more awkward to work on the project.

This means that your next step is to:

1. Comment out the `#pragma GLOBAL_ASM` statement for the function you are going to translate.

2. Add a C++ definition based on the unmangled function name. The order of functions in the `.cpp` file *must remain the same!* Thus you have to place the new function in the same place in the file as the original assembly variant you commented out.

## Translating the Assembly Code

Your next step is to figure out what the C++ code in the function is, such that compiling it will match the original assembly that was in the `.s` file.

* TODO: Write the rest of this section.

## Understanding Assembly Patterns Generated by CodeWarrior (CW)

### Branching

CW attempts to keep code in sections of if statements / switch statements in the order which you wrote it.

That means that if you write `if (condition)`, the generated assembly code will be `branch if not condition: <address after if body>`, such that the instructions for the else block appear after the instructions for the if block in the assembly code.

Note how below, the condition is `value > 137`, but the generated assembly code does the opposite, branching *if less or equal*, to preserve the order of the If vs Else block:

```C++
if (value > 137)
    // If Body
else
    // Else Body
```
```C++
    cmpi value, 137
    ble ELSE_BODY
    // If Body
    b AFTER_IF
ELSE_BODY:
    // Else Body
AFTER_IF:
```

This applies to switch statements as well. CW will try to generate a prelude which decides what label to jump to, followed by a block corresponding to each case body, in the order which they were written in the original code:

```C
    // prelude code jumping to the labels below
CASE_1:
    // Case 1 body
    j AFTER_SWITCH
CASE_2_WITH_FALLTHROUGH:
    // Case 2 body
CASE_3:
    // Case 3 body
    j AFTER_SWITCH
CASE_4:
    // Case 3 body
AFTER_SWITCH:
```

### Boolean Coercion

When casting an integer value to a boolean, CW uses a branchless solution, which can be fairly hard to understand at first. This is done to improve the speed of the generated code, because banches may cost as much as a dozen cheaper instructions due to branch misprediction.

* If you see a `clz[w/s]...` "**C**ount **L**eading **Z**eros" instruction, this is likely what it is being used for. A `clz` in combination with a shift-right instruction can be used to determine whether value is equal to zero or not without branching.

* The following instruction sequences are for coercing the result of a comparison. (E.g.: `bool a = b > c;`):
    * `srwi`-`subf`-`swri`
    * `subf`-`subf`-`or`-`swri`
    * `subf`-`orc`-`srwi`-`subf`-`srwi`

* `zConditional_Evaluate` is a very nice function demonstrating all of the variants of this boolean coercion code.

### The rlwinm instruction

This instruction is the "**R**otate **L**eft **W**ord by **I**mmediate then a**N**d **M**ask" instruction. It is important for many different purposes in CW code generation, so you should read the documentation on it to understand how it works as it is an extremely versatile instruction:

https://www.ibm.com/support/knowledgecenter/ssw_aix_72/assembler/idalangref_rlwinm_rlinm_rtlwrdimm_instrs.html

For example:

* In loops, it is used to iterate over arrays of items, by multiplying the loop index up into a stride (the difference in memory address between subsequent array entries)

* It is used to mask away portions of a value and shift it down when extracting values from bitfields.

* It is used to cast downcast integers to narrower integer types.

# Links

* PowerPC assembly cheat-sheet: https://www.cs.uaf.edu/2011/fall/cs301/lecture/11_21_PowerPC.html
* PowerPC assembly nice readable docs: https://www.ibm.com/support/knowledgecenter/ssw_aix_72/assembler/idalangref_rlwinm_rlinm_rtlwrdimm_instrs.html
* PowerPC ABI register usage (detailed): https://www.ibm.com/support/knowledgecenter/en/ssw_aix_72/assembler/idalangref_reg_use_conv.html, 
* PowerPC API register usage (shorter): http://math-atlas.sourceforge.net/devel/atlas_contrib/node96.html
* PowerPC assembly full reference manual: https://www.ibm.com/support/knowledgecenter/ssw_aix_72/assembler/assembler_pdf.pdf
* Paired-Single floating point hardware: https://wiibrew.org/wiki/Paired_single
* Compiler reference: https://www.nxp.com/docs/en/user-guide/CWPABTR.pdf





