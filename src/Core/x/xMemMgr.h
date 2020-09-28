#ifndef XMEMMGR_H
#define XMEMMGR_H

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	void (*InitCB)(xMemPool*, void*);
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
};

#endif