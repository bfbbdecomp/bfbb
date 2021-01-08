#include "xMemMgr.h"

#include <types.h>
#include <string.h>

#include "../p2/iSystem.h"
#include "../p2/iMemMgr.h"

// Size: 0x10
struct xHeapState_tag
{
    uint32 curr;
    uint16 blk_ct;
    uint16 pad;
    uint32 used;
    uint32 wasted;
};

struct xMemBlock_tag
{
    uint32 addr;
    uint32 size;
    int32 align;
};

struct xMemBlkInfo_tag
{
    xMemBlock_tag* header;
    uint32 pre;
    uint32 block;
    uint32 post;
    uint32 curr;
    uint32 waste;
    uint32 total;
};

struct xMemHeap_tag
{
    uint32 flags;
    uint32 hard_base;
    uint32 size;
    int16 opp_heap[2];

    // Offset: 0x10
    xHeapState_tag state[12];

    // Offset: 0xD0
    uint16 state_idx;
    uint16 max_blks;
    xMemBlock_tag* blk;
    xMemBlock_tag* lastblk;
};

extern xMemInfo_tag gMemInfo;
extern xMemHeap_tag gxHeap[3];

void xMemInitHeap(xMemHeap_tag* heap, uint32 base, uint32 size, uint32 flags);

// func_80033554
void xMemDebug_SoakLog(const int8*)
{
}

// func_80033558
#ifndef NON_MATCHING
#pragma GLOBAL_ASM("asm/Core/x/xMemMgr.s", "xMemInit__Fv")
#else
// The instructions putting 0/1/2 into registers happen in the wrong order.
void xMemInit()
{
    iMemInit();
    xMemInitHeap(&gxHeap[0], gMemInfo.DRAM.addr, gMemInfo.DRAM.size, 0x8826);
    xMemInitHeap(&gxHeap[1], gMemInfo.DRAM.addr + gMemInfo.DRAM.size, gMemInfo.DRAM.size, 0x8925);
    xMemInitHeap(&gxHeap[2], gMemInfo.DRAM.addr + gMemInfo.DRAM.size, gMemInfo.DRAM.size, 0x892A);
    gxHeap[0].opp_heap[0] = 1;
    gxHeap[0].opp_heap[1] = 2;
    gxHeap[1].opp_heap[0] = 0;
    gxHeap[1].opp_heap[1] = 2;
    gxHeap[2].opp_heap[0] = 0;
    gxHeap[2].opp_heap[1] = 1;
    gActiveHeap = 0;
}
#endif

// func_8003361C
void xMemExit()
{
    iMemExit();
}

// func_8003363C
void xMemInitHeap(xMemHeap_tag* heap, uint32 base, uint32 size, uint32 flags)
{
    uint32 old_base = base;
    int32 align = 1 << ((flags >> 9) & 0x1F);
    if (flags & 0x100)
    {
        base = base & -align;
        size -= (old_base - base);
    }
    else
    {
        base = (old_base + align - 1) & -align;
        size -= (base - old_base);
    }

    heap->state_idx = 0;
    heap->hard_base = base;
    heap->size = size;
    heap->flags = flags;
    heap->lastblk = NULL;
    xHeapState_tag* sp = &heap->state[heap->state_idx];
    sp->curr = base;
    sp->blk_ct = 0;

    if (flags & 0x10000)
    {
        heap->max_blks = (1 << ((flags >> 14) & 0x1));
        heap->blk = (xMemBlock_tag*)malloc(heap->max_blks * sizeof(xMemBlock_tag));
        memset(heap->blk, 0, heap->max_blks * sizeof(xMemBlock_tag));
    }
    else
    {
        heap->max_blks = -1;
        heap->blk = 0;
    }
    heap->opp_heap[0] = -1;
    heap->opp_heap[1] = -1;
}

// func_80033734
#if 1
#pragma GLOBAL_ASM("asm/Core/x/xMemMgr.s",                                                         \
                   "xMemGetBlockInfo__FP12xMemHeap_tagUiiP15xMemBlkInfo_tag")
#else
// Not particularly close. This function is a nightmare, it has so many
// variables to untangle.
void xMemGetBlockInfo(xMemHeap_tag* heap, uint32 size, int32 align, xMemBlkInfo_tag* info)
{
    int32 hdr = 1;
    xHeapState_tag* sp = &heap->state[heap->state_idx];
    if (heap->flags & 0x100)
    {
        hdr = -1;
    }

    int32 remainder = 0xc & -(heap->flags & 0x10000);
    int32 pre;
    int32 post;
    int32 block;
    int32 r8;
    if (heap->flags & 0x100)
    {
        block = -remainder;
        pre = -(remainder + size + ((sp->curr - remainder - size) & (align - 1)));
        post = pre + size;
        r8 = -pre;
    }
    else
    {
        block = 0;
        if (r8 = (align - 1) & (sp->curr + remainder))
        {
            r8 = align;
        }
        pre = (align + remainder) - r8;
        post = pre + size;
        r8 = post;
    }

    int32 total = (r8 + 3) & 0xFFFFFFFE;
    if (heap->flags & 0x10000)
    {
        info->header = &heap->blk[sp->curr];
    }
    else
    {
        info->header = (xMemBlock_tag*)(sp->curr + block);
    }
    info->pre = sp->curr + pre;
    info->block = sp->curr + pre;
    info->post = sp->curr + post;
    info->curr = sp->curr + hdr * total;
    info->waste = total - (remainder + size);
    info->total = total;
}
#endif

// func_80033864
#if 1
#pragma GLOBAL_ASM("asm/Core/x/xMemMgr.s", "xMemGrowAlloc__FUiUi")
#else
// Not particularly close. Not 100% confident that I understand what's going on,
// in particular the bit that goes:
// (heap->lastblk->size + size) - heap->lastblk->size;
// It really seems like the assembly code is adding and then immediately
// subtracting again, and I don't see why it would want to do that.
#undef xMemGrowAlloc
void* xMemGrowAlloc(uint32 heapID, uint32 size)
{
    size = (size + 3) & 0xFFFFFFFC;
    xMemHeap_tag* heap = &gxHeap[heapID];
    xHeapState_tag* sp = &heap->state[heap->state_idx];
    // pad size to multiple of 4 bytes
    xMemBlock_tag* hdr = heap->lastblk;
    uint32 anotherVar = (heap->lastblk->size + size) - heap->lastblk->size;
    if (sp->used + anotherVar > heap->size)
    {
        return 0;
    }
    else
    {
        void* memptr;
        if (heap->flags & 0x100)
        {
            memptr = (void*)(hdr->addr - size);
            hdr->addr = (uint32)memptr;
            sp->curr -= anotherVar;
        }
        else
        {
            sp->curr += anotherVar;
            memptr = (void*)(hdr->addr + heap->lastblk->size);
        }
        sp->used += anotherVar;
        hdr->size += size;
        memset(memptr, 0, size);
        return memptr;
    }
}
#endif

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
