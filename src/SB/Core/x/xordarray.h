#ifndef XORDARRAY_H
#define XORDARRAY_H

#include <types.h>

struct st_XORDEREDARRAY
{
    void** list;
    S32 cnt;
    S32 max;
    S32 warnlvl;
};

typedef S32 (*XOrdCompareCallback)(void* vkey, void* vitem);
typedef S32 (*XOrdTestCallback)(const void* vkey, void* vitem);

void XOrdInit(st_XORDEREDARRAY* array, S32 size, S32 tempAlloc);
void XOrdReset(st_XORDEREDARRAY* array);
void XOrdDone(st_XORDEREDARRAY* array, S32 wasTempAlloc);
void XOrdAppend(st_XORDEREDARRAY* array, void* elt);
void XOrdInsert(st_XORDEREDARRAY* array, void* elt, XOrdCompareCallback compare);
void* XOrdRemove(st_XORDEREDARRAY* array, void* elt, S32 index);
S32 XOrdLookup(st_XORDEREDARRAY* array, const void* key, XOrdTestCallback test);
void XOrdSort(st_XORDEREDARRAY* array, S32 (*test)(void*, void*));

#endif
