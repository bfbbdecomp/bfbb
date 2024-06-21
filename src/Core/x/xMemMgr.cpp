#include "xMemMgr.h"

#include <types.h>
#include <string.h>
#include <rwplcore.h>

#include "../gc/iSystem.h"
#include "../gc/iMemMgr.h"

extern xMemInfo_tag gMemInfo;
extern xMemHeap_tag gxHeap[3];
extern void (*sMemBaseNotifyFunc)();

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
//#pragma GLOBAL_ASM("asm/Core/x/xMemMgr.s", "xMemAlloc__FUiUii")
void* xMemAlloc(uint32 heapID, uint32 size, int32 align)
{
    // This variable not in DWARF
    int32 true_align;

    xMemHeap_tag* heap;
    xMemBlock_tag* hdr;
    xHeapState_tag* sp;

    heap = &gxHeap[heapID];
    sp = &heap->state[heap->state_idx];

    true_align = 1 << (heap->flags >> 9 & 0x1f);
    if (align > true_align)
    {
        true_align = align;
    }

    if (size == 0)
    {
        return (void*)0xDEADBEEF;
    }

    xMemBlkInfo_tag info;
    uint32 total = xMemGetBlockInfo(heap, size, true_align, &info);
    hdr = info.header;

    if (sp->used + total > heap->size)
    {
        return NULL;
    }

    sp->curr = info.curr;
    sp->blk_ct += 1;
    if (heap->flags & 0x10000)
    {
        return NULL;
    }

    hdr->addr = info.block;
    hdr->size = size;
    hdr->align = true_align;
    sp->used += total;
    sp->wasted += info.waste;

    memset((void*)hdr->addr, 0, size);
    heap->lastblk = hdr;
    return (void*)hdr->addr;
}

// func_80033A58
void* xMemPushTemp(uint32 size)
{
    return RwMalloc(size);
}

// func_80033A84
void xMemPopTemp(void* memory)
{
    RwFree(memory);
}

// func_80033AB0
int32 xMemPushBase(uint32 heapID)
{
    xMemHeap_tag* heap = &gxHeap[heapID];

    heap->state_idx += 1;
    xHeapState_tag* sp = &heap->state[heap->state_idx];
    *sp = *(sp - 1);

    if (sMemBaseNotifyFunc != NULL)
    {
        sMemBaseNotifyFunc();
    }
    return heap->state_idx - 1;
}

// func_80033B50
int32 xMemPushBase()
{
    return xMemPushBase(gActiveHeap);
}

// func_80033B74
#ifndef NON_MATCHING
// Load/Store swap of sMemBaseNotifyFunc and state_idx
#pragma GLOBAL_ASM("asm/Core/x/xMemMgr.s", "xMemPopBase__FUii")
#else
int32 xMemPopBase(uint32 heapID, int32 depth)
{
    xMemHeap_tag* heap = &gxHeap[heapID];
    if (depth < 0)
    {
        depth = heap->state_idx + depth;
    }

    heap->state_idx = depth;
    if (sMemBaseNotifyFunc != NULL)
    {
        sMemBaseNotifyFunc();
    }

    return heap->state_idx;
}
#endif

// func_80033BD4
int32 xMemPopBase(int32 depth)
{
    return xMemPopBase(gActiveHeap, depth);
}

// func_80033BFC
int32 xMemGetBase(uint32 heapID)
{
    return gxHeap[heapID].state_idx;
}

// func_80033C14
void xMemRegisterBaseNotifyFunc(void (*func)())
{
    sMemBaseNotifyFunc = func;
}

// func_80033C1C
int32 xMemGetBase()
{
    return xMemGetBase(gActiveHeap);
}

// func_80033C40
void xMemPoolAddElements(xMemPool* pool, void* buffer, uint32 count)
{
    int32 i;
    void* curr;
    void (*initCB)(xMemPool*, void*);
    uint32 next;
    uint32 size;

    initCB = pool->InitCB;
    next = pool->NextOffset;
    size = pool->Size;

    curr = buffer;
    for (i = 0; i < (int32)count - 1; i++)
    {
        *(void**)((uint32)curr + next) = (void*)((uint32)curr + size);
        if (initCB != NULL)
        {
            initCB(pool, curr);
        }
        curr = (void*)((uint32)curr + size);
    }

    *(void**)((uint32)curr + next) = pool->FreeList;
    if (initCB != NULL)
    {
        initCB(pool, curr);
    }
    pool->FreeList = buffer;
    pool->Total += count;
}

// func_80033CE8

void xMemPoolSetup(xMemPool* pool, void* buffer, uint32 nextOffset, uint32 flags,
                   xMemPoolInitCB initCB, uint32 size, uint32 count, uint32 numRealloc)
{
    pool->FreeList = NULL;
    pool->NextOffset = nextOffset;
    pool->Flags = flags;
    pool->UsedList = NULL;
    pool->InitCB = initCB;
    pool->Buffer = buffer;
    pool->Size = size;
    pool->NumRealloc = numRealloc;
    pool->Total = 0;
    xMemPoolAddElements(pool, buffer, count);
}

// func_80033D34
void* xMemPoolAlloc(xMemPool* pool)
{
    void* retval = pool->FreeList;
    uint32 next = pool->NextOffset;
    uint32 flags = pool->Flags;

    if (retval == NULL)
    {
        xMemPoolAddElements(pool, xMemAlloc(gActiveHeap, pool->NumRealloc * pool->Size, 0),
                            pool->NumRealloc);
        retval = pool->FreeList;
    }

    pool->FreeList = *(void**)((uint32)retval + next);
    if (flags & 1)
    {
        *(void**)((uint32)retval + next) = pool->UsedList;
        pool->UsedList = retval;
    }

    return retval;
}

// func_80033DD0
void xMemPoolFree(xMemPool* pool, void* data)
{
    void** prev;
    void* freeList;
    uint32 next;
    void* curr;

    if (data == NULL)
    {
        return;
    }

    freeList = pool->FreeList;
    next = pool->NextOffset;
    if (pool->Flags & 1)
    {
        prev = &pool->UsedList;
        curr = pool->UsedList;

        while (curr != NULL && curr != data)
        {
            prev = (void**)((uint32)curr + next);
            curr = *prev;
        }

        if (curr != NULL)
        {
            *prev = *(void**)((uint32)curr + next);
        }
    }

    *(void**)((uint32)data + next) = freeList;
    pool->FreeList = data;
}
