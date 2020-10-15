#include "xModelBucket.h"

#include <types.h>

#pragma GLOBAL_ASM("asm/Core/x/xModelBucket.s", "CmpAlphaBucket__FPCvPCv")

// xModelBucket_PreCountReset()
#pragma GLOBAL_ASM("asm/Core/x/xModelBucket.s", "xModelBucket_PreCountReset__Fv")

#pragma GLOBAL_ASM("asm/Core/x/xModelBucket.s", "xModelBucket_PreCountBucket__FP8RpAtomicUiUi")

// xModelBucket_PreCountAlloc(int)
#pragma GLOBAL_ASM("asm/Core/x/xModelBucket.s", "xModelBucket_PreCountAlloc__Fi")

// FullAtomicDupe(RpAtomic*,int,RpAtomic**)
#pragma GLOBAL_ASM("asm/Core/x/xModelBucket.s", "FullAtomicDupe__FP8RpAtomiciPP8RpAtomic")

#pragma GLOBAL_ASM("asm/Core/x/xModelBucket.s", "xModelBucket_InsertBucket__FP8RpAtomicUiUi")

// xModelBucket_Init()
#pragma GLOBAL_ASM("asm/Core/x/xModelBucket.s", "xModelBucket_Init__Fv")

// xModelBucket_GetBuckets(RpAtomic*)
#pragma GLOBAL_ASM("asm/Core/x/xModelBucket.s", "xModelBucket_GetBuckets__FP8RpAtomic")

// xModelBucket_Begin()
#pragma GLOBAL_ASM("asm/Core/x/xModelBucket.s", "xModelBucket_Begin__Fv")

// xModelBucket_Add(xModelInstance*)
#pragma GLOBAL_ASM("asm/Core/x/xModelBucket.s", "xModelBucket_Add__FP14xModelInstance")

// xModelBucket_RenderOpaque()
#pragma GLOBAL_ASM("asm/Core/x/xModelBucket.s", "xModelBucket_RenderOpaque__Fv")

// xModelBucket_RenderAlphaBegin()
#pragma GLOBAL_ASM("asm/Core/x/xModelBucket.s", "xModelBucket_RenderAlphaBegin__Fv")

// xModelBucket_RenderAlphaLayer(int)
#pragma GLOBAL_ASM("asm/Core/x/xModelBucket.s", "xModelBucket_RenderAlphaLayer__Fi")

// xModelBucket_RenderAlphaEnd()
#pragma GLOBAL_ASM("asm/Core/x/xModelBucket.s", "xModelBucket_RenderAlphaEnd__Fv")

// xModelBucket_Deinit()
#pragma GLOBAL_ASM("asm/Core/x/xModelBucket.s", "xModelBucket_Deinit__Fv")
