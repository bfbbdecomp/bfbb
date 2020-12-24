#include "iAnimSKB.h"

#include <types.h>

// func_800BF1C0
#pragma GLOBAL_ASM("asm/Core/p2/iAnimSKB.s", "iAnimEvalSKB__FP14iAnimSKBHeaderfUiP5xVec3P5xQuat")

float32 iAnimDurationSKB(iAnimSKBHeader* data)
{
    return ((float32*)((iAnimSKBKey*)(data + 1) + data->KeyCount))[data->TimeCount - 1];
}

// func_800BF7D0
#pragma GLOBAL_ASM("asm/Core/p2/iAnimSKB.s", "fabsf__3stdFf")

// func_800BF7F4
#pragma GLOBAL_ASM("asm/Core/p2/iAnimSKB.s", "fabs")

// func_800BF7FC
#pragma GLOBAL_ASM("asm/Core/p2/iAnimSKB.s", "_iAnimSKBAdjustTranslate__FP14iAnimSKBHeaderUiPfPf")

// func_800BFC20
#pragma GLOBAL_ASM("asm/Core/p2/iAnimSKB.s",                                                       \
                   "_iAnimSKBExtractTranslate__FP14iAnimSKBHeaderUiP5xVec3i")
