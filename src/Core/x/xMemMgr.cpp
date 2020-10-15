#include "xMemMgr.h"

#include <types.h>

// xMemDebug_SoakLog(const char*)
#pragma GLOBAL_ASM("asm/Core/x/xMemMgr.s", "xMemDebug_SoakLog__FPCc")

// xMemInit()
#pragma GLOBAL_ASM("asm/Core/x/xMemMgr.s", "xMemInit__Fv")

// xMemExit()
#pragma GLOBAL_ASM("asm/Core/x/xMemMgr.s", "xMemExit__Fv")

// xMemInitHeap(xMemHeap_tag*,unsigned int,unsigned int,unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xMemMgr.s", "xMemInitHeap__FP12xMemHeap_tagUiUiUi")

// xMemGetBlockInfo(xMemHeap_tag*,unsigned int,int,xMemBlkInfo_tag*)
#pragma GLOBAL_ASM("asm/Core/x/xMemMgr.s", "xMemGetBlockInfo__FP12xMemHeap_tagUiiP15xMemBlkInfo_tag")

// xMemGrowAlloc(unsigned int,unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xMemMgr.s", "xMemGrowAlloc__FUiUi")

// xMemAlloc(unsigned int,unsigned int,int)
#pragma GLOBAL_ASM("asm/Core/x/xMemMgr.s", "xMemAlloc__FUiUii")

// xMemPushTemp(unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xMemMgr.s", "xMemPushTemp__FUi")

// xMemPopTemp(void*)
#pragma GLOBAL_ASM("asm/Core/x/xMemMgr.s", "xMemPopTemp__FPv")

// xMemPushBase(unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xMemMgr.s", "xMemPushBase__FUi")

// xHeapState_tag::operator =(const xHeapState_tag&)
#pragma GLOBAL_ASM("asm/Core/x/xMemMgr.s", "__as__14xHeapState_tagFRC14xHeapState_tag")

// xMemPushBase()
#pragma GLOBAL_ASM("asm/Core/x/xMemMgr.s", "xMemPushBase__Fv")

// xMemPopBase(unsigned int,int)
#pragma GLOBAL_ASM("asm/Core/x/xMemMgr.s", "xMemPopBase__FUii")

// xMemPopBase(int)
#pragma GLOBAL_ASM("asm/Core/x/xMemMgr.s", "xMemPopBase__Fi")

// xMemGetBase(unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xMemMgr.s", "xMemGetBase__FUi")

// xMemRegisterBaseNotifyFunc(void (*)(void))
#pragma GLOBAL_ASM("asm/Core/x/xMemMgr.s", "xMemRegisterBaseNotifyFunc__FPFv_v")

// xMemGetBase()
#pragma GLOBAL_ASM("asm/Core/x/xMemMgr.s", "xMemGetBase__Fv")

// xMemPoolAddElements(xMemPool*,void*,unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xMemMgr.s", "xMemPoolAddElements__FP8xMemPoolPvUi")

// xMemPoolSetup(xMemPool*,void*,unsigned int,unsigned int,void (*)(xMemPool*, void*),unsigned int,unsigned int,unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xMemMgr.s", "xMemPoolSetup__FP8xMemPoolPvUiUiPFP8xMemPoolPv_vUiUiUi")

// xMemPoolAlloc(xMemPool*)
#pragma GLOBAL_ASM("asm/Core/x/xMemMgr.s", "xMemPoolAlloc__FP8xMemPool")

// xMemPoolFree(xMemPool*,void*)
#pragma GLOBAL_ASM("asm/Core/x/xMemMgr.s", "xMemPoolFree__FP8xMemPoolPv")
