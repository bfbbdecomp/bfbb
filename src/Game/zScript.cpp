#include "zScript.h"

#include <types.h>

// zScriptInit(void*,void*)
#pragma GLOBAL_ASM("asm/Game/zScript.s", "zScriptInit__FPvPv")

// zScriptInit(xBase*,xScriptAsset*)
#pragma GLOBAL_ASM("asm/Game/zScript.s", "zScriptInit__FP5xBaseP12xScriptAsset")

// zScriptReset(_zScript*)
#pragma GLOBAL_ASM("asm/Game/zScript.s", "zScriptReset__FP8_zScript")

// zScriptSave(_zScript*,xSerial*)
#pragma GLOBAL_ASM("asm/Game/zScript.s", "zScriptSave__FP8_zScriptP7xSerial")

// zScriptLoad(_zScript*,xSerial*)
#pragma GLOBAL_ASM("asm/Game/zScript.s", "zScriptLoad__FP8_zScriptP7xSerial")

// zScriptExecuteEvents(_zScript*,float,float)
#pragma GLOBAL_ASM("asm/Game/zScript.s", "zScriptExecuteEvents__FP8_zScriptff")

// zScriptUpdate(xBase*,xScene*,float)
#pragma GLOBAL_ASM("asm/Game/zScript.s", "zScriptUpdate__FP5xBaseP6xScenef")
