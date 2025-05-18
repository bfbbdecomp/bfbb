#ifndef XMEMMGR_H
#define XMEMMGR_H

#include <types.h>

// Size: 0x10
struct xHeapState_tag
{
    U32 curr;
    U16 blk_ct;
    U16 pad;
    U32 used;
    U32 wasted;
};

struct xMemBlock_tag
{
    U32 addr;
    U32 size;
    S32 align;
};

struct xMemBlkInfo_tag
{
    xMemBlock_tag* header;
    U32 pre;
    U32 block;
    U32 post;
    U32 curr;
    U32 waste;
    U32 total;
};

struct xMemHeap_tag
{
    U32 flags;
    U32 hard_base;
    U32 size;
    S16 opp_heap[2];

    // Offset: 0x10
    xHeapState_tag state[12];

    // Offset: 0xD0
    U16 state_idx;
    U16 max_blks;
    xMemBlock_tag* blk;
    xMemBlock_tag* lastblk;
};

struct xMemArea_tag
{
    U32 addr;
    U32 size;
    U32 flags;
};

struct xMemInfo_tag
{
    xMemArea_tag system;

    // Offset: 0xC
    xMemArea_tag stack;

    // Offset: 0x18
    xMemArea_tag DRAM;

    // Offset: 0x24
    xMemArea_tag SRAM;
};

struct xMemPool;
typedef void (*xMemPoolInitCB)(xMemPool*, void*);
struct xMemPool
{
    void* FreeList;
    U16 NextOffset;
    U16 Flags;
    void* UsedList;
    xMemPoolInitCB InitCB;
    void* Buffer;
    U16 Size;
    U16 NumRealloc;
    U32 Total;
};

extern U32 gActiveHeap;

void xMemInit();
void xMemExit();
void xMemInitHeap(xMemHeap_tag* heap, U32 base, U32 size, U32 flags);
U32 xMemGetBlockInfo(xMemHeap_tag* heap, U32 size, S32 align, xMemBlkInfo_tag* info);
void* xMemGrowAlloc(U32 heapID, U32 size);
void* xMemAlloc(U32 heapID, U32 size, S32 align);
void* xMemPushTemp(U32 size);
void xMemPopTemp(void* memory);
S32 xMemPushBase(U32 heapID);
S32 xMemPushBase();
S32 xMemPopBase(U32 heapID, S32 depth);
S32 xMemPopBase(S32 depth);
S32 xMemGetBase(U32 heapID);
void xMemRegisterBaseNotifyFunc(void (*)(void));
S32 xMemGetBase();
void xMemPoolAddElements(xMemPool* pool, void* buffer, U32 count);
void xMemPoolSetup(xMemPool* pool, void* buffer, U32 nextOffset, U32 flags,
                   xMemPoolInitCB initCB, U32 size, U32 count, U32 numRealloc);
void* xMemPoolAlloc(xMemPool* pool);
void xMemPoolFree(xMemPool* pool, void* data);

#define xMemGrowAllocSize(size) xMemGrowAlloc(gActiveHeap, size)
#define xMemAllocSize(size) xMemAlloc(gActiveHeap, size, 0)
#define xMemAllocSizeAlign(size, align) xMemAlloc(gActiveHeap, size, align)

#endif
