#include "iAnimSKB.h"

#include <types.h>

// iAnimEvalSKB(iAnimSKBHeader*,float,unsigned int,xVec3*,xQuat*)
#pragma GLOBAL_ASM("asm/Core/p2/iAnimSKB.s", "iAnimEvalSKB__FP14iAnimSKBHeaderfUiP5xVec3P5xQuat")

// iAnimDurationSKB(iAnimSKBHeader*)
#pragma GLOBAL_ASM("asm/Core/p2/iAnimSKB.s", "iAnimDurationSKB__FP14iAnimSKBHeader")

// std::fabsf(float)
#pragma GLOBAL_ASM("asm/Core/p2/iAnimSKB.s", "fabsf__3stdFf")

#pragma GLOBAL_ASM("asm/Core/p2/iAnimSKB.s", "fabs")

// _iAnimSKBAdjustTranslate(iAnimSKBHeader*,unsigned int,float*,float*)
#pragma GLOBAL_ASM("asm/Core/p2/iAnimSKB.s", "_iAnimSKBAdjustTranslate__FP14iAnimSKBHeaderUiPfPf")

// _iAnimSKBExtractTranslate(iAnimSKBHeader*,unsigned int,xVec3*,int)
#pragma GLOBAL_ASM("asm/Core/p2/iAnimSKB.s", "_iAnimSKBExtractTranslate__FP14iAnimSKBHeaderUiP5xVec3i")
