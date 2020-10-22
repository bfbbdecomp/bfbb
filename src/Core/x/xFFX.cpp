#include "xFFX.h"

#include <types.h>

// xFFXPoolInit(unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xFFX.s", "xFFXPoolInit__FUi")

// xFFXAlloc()
#pragma GLOBAL_ASM("asm/Core/x/xFFX.s", "xFFXAlloc__Fv")

// xFFXFree(xFFX*)
#pragma GLOBAL_ASM("asm/Core/x/xFFX.s", "xFFXFree__FP4xFFX")

// xFFXTurnOn(xFFX*)
#pragma GLOBAL_ASM("asm/Core/x/xFFX.s", "xFFXTurnOn__FP4xFFX")

// xFFXTurnOff(xFFX*)
#pragma GLOBAL_ASM("asm/Core/x/xFFX.s", "xFFXTurnOff__FP4xFFX")

// xFFXAddEffect(xEnt*,xFFX*)
#pragma GLOBAL_ASM("asm/Core/x/xFFX.s", "xFFXAddEffect__FP4xEntP4xFFX")

// xFFXAddEffect(xEnt*,void (*)(xEnt*, xScene*, float, void*),void*)
#pragma GLOBAL_ASM("asm/Core/x/xFFX.s", "xFFXAddEffect__FP4xEntPFP4xEntP6xScenefPv_vPv")

// xFFXRemoveEffectByFData(xEnt*,void*)
#pragma GLOBAL_ASM("asm/Core/x/xFFX.s", "xFFXRemoveEffectByFData__FP4xEntPv")

// xFFXApplyOne(xFFX*,xEnt*,xScene*,float)
#pragma GLOBAL_ASM("asm/Core/x/xFFX.s", "xFFXApplyOne__FP4xFFXP4xEntP6xScenef")

// xFFXApply(xEnt*,xScene*,float)
#pragma GLOBAL_ASM("asm/Core/x/xFFX.s", "xFFXApply__FP4xEntP6xScenef")

#pragma GLOBAL_ASM("asm/Core/x/xFFX.s", "xffx_rename_me")

// xFFXShakePoolInit(unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xFFX.s", "xFFXShakePoolInit__FUi")

// xFFXShakeAlloc()
#pragma GLOBAL_ASM("asm/Core/x/xFFX.s", "xFFXShakeAlloc__Fv")

// xFFXShakeFree(xFFXShakeState*)
#pragma GLOBAL_ASM("asm/Core/x/xFFX.s", "xFFXShakeFree__FP14xFFXShakeState")

// xFFXRotMatchPoolInit(unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xFFX.s", "xFFXRotMatchPoolInit__FUi")

// xFFXRotMatchAlloc()
#pragma GLOBAL_ASM("asm/Core/x/xFFX.s", "xFFXRotMatchAlloc__Fv")
