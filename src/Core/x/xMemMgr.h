#ifndef XMEMMGR_H
#define XMEMMGR_H

#include <types.h>

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

struct xMemArea_tag
{
    uint32 addr;
    uint32 size;
    uint32 flags;
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
    uint16 NextOffset;
    uint16 Flags;
    void* UsedList;
    xMemPoolInitCB InitCB;
    void* Buffer;
    uint16 Size;
    uint16 NumRealloc;
    uint32 Total;
};

extern uint32 gActiveHeap;

void xMemInit();
void xMemExit();
void xMemInitHeap(xMemHeap_tag* heap, uint32 base, uint32 size, uint32 flags);
uint32 xMemGetBlockInfo(xMemHeap_tag* heap, uint32 size, int32 align, xMemBlkInfo_tag* info);
void* xMemGrowAlloc(uint32 heapID, uint32 size);
void* xMemAlloc(uint32 heapID, uint32 size, int32 align);
void* xMemPushTemp(uint32 size);
void xMemPopTemp(void* memory);
int32 xMemPushBase(uint32 heapID);
int32 xMemPushBase();
int32 xMemPopBase(uint32 heapID, int32 depth);
int32 xMemPopBase(int32 depth);
int32 xMemGetBase(uint32 heapID);
void xMemRegisterBaseNotifyFunc(void (*func)());
int32 xMemGetBase();
void xMemPoolAddElements(xMemPool* pool, void* buffer, uint32 count);
void xMemPoolSetup(xMemPool* pool, void* buffer, uint32 nextOffset, uint32 flags,
                   xMemPoolInitCB initCB, uint32 size, uint32 count, uint32 numRealloc);
void* xMemPoolAlloc(xMemPool* pool);
void xMemPoolFree(xMemPool* pool, void* data);

#define xMemGrowAllocSize(size) xMemGrowAlloc(gActiveHeap, size)
#define xMemAllocSize(size) xMemAlloc(gActiveHeap, size, 0)
#define xMemAllocSizeAlign(size, align) xMemAlloc(gActiveHeap, size, align)

#endif
