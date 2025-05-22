#include "xMemMgr.h"

#include <types.h>
#include <string.h>
#include <rwplcore.h>

#include "iSystem.h"
#include "iMemMgr.h"

xMemInfo_tag gMemInfo;
xMemHeap_tag gxHeap[3];

U32 gActiveHeap;
void (*sMemBaseNotifyFunc)();

void xMemDebug_SoakLog(const char*)
{
}

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

void xMemExit()
{
    iMemExit();
}

void xMemInitHeap(xMemHeap_tag* heap, U32 base, U32 size, U32 flags)
{
    U32 old_base = base;
    S32 align = 1 << ((flags >> 9) & 0x1F);
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

#if 0
// Not particularly close. This function is a nightmare, it has so many
// variables to untangle.
void xMemGetBlockInfo(xMemHeap_tag* heap, U32 size, S32 align, xMemBlkInfo_tag* info)
{
    S32 hdr = 1;
    xHeapState_tag* sp = &heap->state[heap->state_idx];
    if (heap->flags & 0x100)
    {
        hdr = -1;
    }

    S32 remainder = 0xc & -(heap->flags & 0x10000);
    S32 pre;
    S32 post;
    S32 block;
    S32 r8;
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

    S32 total = (r8 + 3) & 0xFFFFFFFE;
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

#if 0
// Not particularly close. Not 100% confident that I understand what's going on,
// in particular the bit that goes:
// (heap->lastblk->size + size) - heap->lastblk->size;
// It really seems like the assembly code is adding and then immediately
// subtracting again, and I don't see why it would want to do that.
#undef xMemGrowAlloc
void* xMemGrowAlloc(U32 heapID, U32 size)
{
    size = (size + 3) & 0xFFFFFFFC;
    xMemHeap_tag* heap = &gxHeap[heapID];
    xHeapState_tag* sp = &heap->state[heap->state_idx];
    // pad size to multiple of 4 bytes
    xMemBlock_tag* hdr = heap->lastblk;
    U32 anotherVar = (heap->lastblk->size + size) - heap->lastblk->size;
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
            hdr->addr = (U32)memptr;
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

//
void* xMemAlloc(U32 heapID, U32 size, S32 align)
{
    // This variable not in DWARF
    S32 true_align;

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
    U32 total = xMemGetBlockInfo(heap, size, true_align, &info);
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

void* xMemPushTemp(U32 size)
{
    return RwMalloc(size);
}

void xMemPopTemp(void* memory)
{
    RwFree(memory);
}

S32 xMemPushBase(U32 heapID)
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

S32 xMemPushBase()
{
    return xMemPushBase(gActiveHeap);
}

// Load/Store swap of sMemBaseNotifyFunc and state_idx
S32 xMemPopBase(U32 heapID, S32 depth)
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

S32 xMemPopBase(S32 depth)
{
    return xMemPopBase(gActiveHeap, depth);
}

S32 xMemGetBase(U32 heapID)
{
    return gxHeap[heapID].state_idx;
}

void xMemRegisterBaseNotifyFunc(void (*func)())
{
    sMemBaseNotifyFunc = func;
}

S32 xMemGetBase()
{
    return xMemGetBase(gActiveHeap);
}

void xMemPoolAddElements(xMemPool* pool, void* buffer, U32 count)
{
    S32 i;
    void* curr;
    void (*initCB)(xMemPool*, void*);
    U32 next;
    U32 size;

    initCB = pool->InitCB;
    next = pool->NextOffset;
    size = pool->Size;

    curr = buffer;
    for (i = 0; i < (S32)count - 1; i++)
    {
        *(void**)((U32)curr + next) = (void*)((U32)curr + size);
        if (initCB != NULL)
        {
            initCB(pool, curr);
        }
        curr = (void*)((U32)curr + size);
    }

    *(void**)((U32)curr + next) = pool->FreeList;
    if (initCB != NULL)
    {
        initCB(pool, curr);
    }
    pool->FreeList = buffer;
    pool->Total += count;
}

void xMemPoolSetup(xMemPool* pool, void* buffer, U32 nextOffset, U32 flags, xMemPoolInitCB initCB,
                   U32 size, U32 count, U32 numRealloc)
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

void* xMemPoolAlloc(xMemPool* pool)
{
    void* retval = pool->FreeList;
    U32 next = pool->NextOffset;
    U32 flags = pool->Flags;

    if (retval == NULL)
    {
        xMemPoolAddElements(pool, xMemAlloc(gActiveHeap, pool->NumRealloc * pool->Size, 0),
                            pool->NumRealloc);
        retval = pool->FreeList;
    }

    pool->FreeList = *(void**)((U32)retval + next);
    if (flags & 1)
    {
        *(void**)((U32)retval + next) = pool->UsedList;
        pool->UsedList = retval;
    }

    return retval;
}

void xMemPoolFree(xMemPool* pool, void* data)
{
    void** prev;
    void* freeList;
    U32 next;
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
            prev = (void**)((U32)curr + next);
            curr = *prev;
        }

        if (curr != NULL)
        {
            *prev = *(void**)((U32)curr + next);
        }
    }

    *(void**)((U32)data + next) = freeList;
    pool->FreeList = data;
}
