#include "zConditional.h"

#include <types.h>

// zConditionalInit(void*,void*)
#pragma GLOBAL_ASM("asm/Game/zConditional.s", "zConditionalInit__FPvPv")

// zConditionalInit(xBase*,zCondAsset*)
#pragma GLOBAL_ASM("asm/Game/zConditional.s", "zConditionalInit__FP5xBaseP10zCondAsset")

// zConditionalReset(_zConditional*)
#pragma GLOBAL_ASM("asm/Game/zConditional.s", "zConditionalReset__FP13_zConditional")

// zConditionalSave(_zConditional*,xSerial*)
#pragma GLOBAL_ASM("asm/Game/zConditional.s", "zConditionalSave__FP13_zConditionalP7xSerial")

// zConditionalLoad(_zConditional*,xSerial*)
#pragma GLOBAL_ASM("asm/Game/zConditional.s", "zConditionalLoad__FP13_zConditionalP7xSerial")

// zConditional_Evaluate(_zConditional*)
#pragma GLOBAL_ASM("asm/Game/zConditional.s", "zConditional_Evaluate__FP13_zConditional")
