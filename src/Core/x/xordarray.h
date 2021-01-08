#ifndef XORDARRAY_H
#define XORDARRAY_H

#include <types.h>

struct st_XORDEREDARRAY
{
    void** list;
    int32 cnt;
    int32 max;
    int32 warnlvl;
};

void XOrdInit(st_XORDEREDARRAY* array, int32 size, int32 tempAlloc);
void XOrdDone(st_XORDEREDARRAY* array, int32 wasTempAlloc);
int32 XOrdLookup(st_XORDEREDARRAY* array, void* key, int32 (*test)(void*, void*));

#endif