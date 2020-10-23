#ifndef XMEMMGR_H
#define XMEMMGR_H

#include <types.h>

typedef struct xMemPool;
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

void* xMemGrowAlloc(uint32 heapID, uint32 size);
void* xMemAlloc(uint32 heapID, uint32 size, int32 align);
void xMemPoolSetup(xMemPool* pool, void* buffer, uint32 nextOffset, uint32 flags,
                   xMemPoolInitCB initCB, uint32 size, uint32 count, uint32 numRealloc);
void* xMemPoolAlloc(xMemPool* pool);
void xMemPoolFree(xMemPool* pool, void* data);

#define xMemGrowAlloc(size) xMemGrowAlloc(gActiveHeap, size)
#define xMemAlloc(size) xMemAlloc(gActiveHeap, size, 0)

#endif