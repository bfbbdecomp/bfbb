#include "xFog.h"

#include <types.h>

// xFogClearFog()
#pragma GLOBAL_ASM("asm/Core/x/xFog.s", "xFogClearFog__Fv")

// xFogInit(xBase*,xFogAsset*)
#pragma GLOBAL_ASM("asm/Core/x/xFog.s", "xFogInit__FP5xBaseP9xFogAsset")

// xFogReset(_xFog*)
#pragma GLOBAL_ASM("asm/Core/x/xFog.s", "xFogReset__FP5_xFog")

// xFogSave(_xFog*,xSerial*)
#pragma GLOBAL_ASM("asm/Core/x/xFog.s", "xFogSave__FP5_xFogP7xSerial")

// xFogLoad(_xFog*,xSerial*)
#pragma GLOBAL_ASM("asm/Core/x/xFog.s", "xFogLoad__FP5_xFogP7xSerial")

// xFogUpdate(xBase*,xScene*,float)
#pragma GLOBAL_ASM("asm/Core/x/xFog.s", "xFogUpdate__FP5xBaseP6xScenef")
