#include "xJSP.h"

#include <types.h>

#pragma GLOBAL_ASM("asm/Core/x/xJSP.s", "CountAtomicCB__FP8RpAtomicPv")

// xJSP_MultiStreamRead(void*,unsigned int,xJSPHeader**)
#pragma GLOBAL_ASM("asm/Core/x/xJSP.s", "xJSP_MultiStreamRead__FPvUiPP10xJSPHeader")

// xJSP_Destroy(xJSPHeader*)
#pragma GLOBAL_ASM("asm/Core/x/xJSP.s", "xJSP_Destroy__FP10xJSPHeader")
