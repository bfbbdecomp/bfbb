#include "xMemMgr.h"

#include <types.h>

// func_80033554
#pragma GLOBAL_ASM("asm/Core/x/xMemMgr.s", "xMemDebug_SoakLog__FPCc")

// func_80033558
#pragma GLOBAL_ASM("asm/Core/x/xMemMgr.s", "xMemInit__Fv")

// func_8003361C
#pragma GLOBAL_ASM("asm/Core/x/xMemMgr.s", "xMemExit__Fv")

// func_8003363C
#pragma GLOBAL_ASM("asm/Core/x/xMemMgr.s", "xMemInitHeap__FP12xMemHeap_tagUiUiUi")

// func_80033734
#pragma GLOBAL_ASM("asm/Core/x/xMemMgr.s", "xMemGetBlockInfo__FP12xMemHeap_tagUiiP15xMemBlkInfo_tag")

// func_80033864
#pragma GLOBAL_ASM("asm/Core/x/xMemMgr.s", "xMemGrowAlloc__FUiUi")

// func_80033940
#pragma GLOBAL_ASM("asm/Core/x/xMemMgr.s", "xMemAlloc__FUiUii")

// func_80033A58
#pragma GLOBAL_ASM("asm/Core/x/xMemMgr.s", "xMemPushTemp__FUi")

// func_80033A84
#pragma GLOBAL_ASM("asm/Core/x/xMemMgr.s", "xMemPopTemp__FPv")

// func_80033AB0
#pragma GLOBAL_ASM("asm/Core/x/xMemMgr.s", "xMemPushBase__FUi")

// func_80033B24
#pragma GLOBAL_ASM("asm/Core/x/xMemMgr.s", "__as__14xHeapState_tagFRC14xHeapState_tag")

// func_80033B50
#pragma GLOBAL_ASM("asm/Core/x/xMemMgr.s", "xMemPushBase__Fv")

// func_80033B74
#pragma GLOBAL_ASM("asm/Core/x/xMemMgr.s", "xMemPopBase__FUii")

// func_80033BD4
#pragma GLOBAL_ASM("asm/Core/x/xMemMgr.s", "xMemPopBase__Fi")

// func_80033BFC
#pragma GLOBAL_ASM("asm/Core/x/xMemMgr.s", "xMemGetBase__FUi")

// func_80033C14
#pragma GLOBAL_ASM("asm/Core/x/xMemMgr.s", "xMemRegisterBaseNotifyFunc__FPFv_v")

// func_80033C1C
#pragma GLOBAL_ASM("asm/Core/x/xMemMgr.s", "xMemGetBase__Fv")

// func_80033C40
#pragma GLOBAL_ASM("asm/Core/x/xMemMgr.s", "xMemPoolAddElements__FP8xMemPoolPvUi")

// func_80033CE8
#pragma GLOBAL_ASM("asm/Core/x/xMemMgr.s", "xMemPoolSetup__FP8xMemPoolPvUiUiPFP8xMemPoolPv_vUiUiUi")

// func_80033D34
#pragma GLOBAL_ASM("asm/Core/x/xMemMgr.s", "xMemPoolAlloc__FP8xMemPool")

// func_80033DD0
#pragma GLOBAL_ASM("asm/Core/x/xMemMgr.s", "xMemPoolFree__FP8xMemPoolPv")
