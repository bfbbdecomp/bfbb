#include "xPar.h"

#include <types.h>

// xParMemInit()
#pragma GLOBAL_ASM("asm/Core/x/xPar.s", "xParMemInit__Fv")

// xParAlloc()
#pragma GLOBAL_ASM("asm/Core/x/xPar.s", "xParAlloc__Fv")

// xParFree(xPar*)
#pragma GLOBAL_ASM("asm/Core/x/xPar.s", "xParFree__FP4xPar")

// xParInit(xPar*)
#pragma GLOBAL_ASM("asm/Core/x/xPar.s", "xParInit__FP4xPar")
