#include "xordarray.h"
#include "xMemMgr.h"

#include <types.h>

void XOrdInit(st_XORDEREDARRAY* array, S32 size, S32 tempAlloc)
{
    U32 cnt = 1;
    if (size >= 1)
    {
        cnt = size;
    }
    if (tempAlloc)
    {
        array->list = (void**)xMemPushTemp(cnt << 2);
    }
    else
    {
        array->list = (void**)xMemAlloc(gActiveHeap, cnt << 2, 0);
    }
    array->cnt = 0;
    array->max = cnt;
    array->warnlvl = 0.95f * (cnt ^ 0x80000000);
    if (array->warnlvl == array->max)
    {
        cnt = array->max - 1;
        array->warnlvl = cnt & ~((S32)cnt >> 0x1f);
    }
}

void XOrdReset(st_XORDEREDARRAY* array)
{
    array->cnt = 0;
}

void XOrdDone(st_XORDEREDARRAY* array, S32 wasTempAlloc)
{
    if (array->max != 0 && wasTempAlloc != 0)
    {
        xMemPopTemp(array->list);
    }
    array->list = NULL;
    array->cnt = 0;
    array->max = 0;
    array->warnlvl = 0;
}

void XOrdAppend(st_XORDEREDARRAY* array, void* elt)
{
    if (array->cnt >= array->max)
    {
        return;
    }
    array->list[array->cnt++] = elt;
}

void XOrdInsert(st_XORDEREDARRAY* array, void* elt, XOrdCompareCallback compare)
{
    S32 i = 0;

    if (array->cnt >= array->max)
        return;
    array->cnt++;

    for (i = array->cnt - 1; i > 0; i--)
    {
        if (compare(array->list[i - 1], elt) <= 0)
        {
            array->list[i] = elt;
            return;
        }
        array->list[i] = array->list[i - 1];
    }

    array->list[0] = elt;
}

void* XOrdRemove(st_XORDEREDARRAY* array, void* elt, S32 index)
{
    if (elt == NULL)
    {
        if (index < 0)
        {
            return NULL;
        }
        if (index >= array->max)
        {
            return NULL;
        }
    }

    if ((index >= 0) && (index < array->max))
    {
        elt = array->list[index];
    }
    else if (elt != NULL)
    {
        index = -1;
        int iVar4 = 0;
        for (int i = array->cnt; i > 0; i--)
        {
            if (array->list[iVar4] == elt)
            {
                index = iVar4;
                break;
            }
            iVar4++;
        }
    }

    if (index < 0)
    {
        return NULL;
    }

    array->cnt--;
    for (; index < array->cnt; index++)
    {
        array->list[index] = array->list[index + 1];
    }

    return elt;
}

S32 XOrdLookup(st_XORDEREDARRAY* array, const void* key, XOrdTestCallback test)
{
    S32 da_idx = -1;
    S32 k0 = 0;
    S32 k1 = 0;
    S32 k = 0;
    S32 v = 0;

    k0 = 0;
    k1 = array->cnt;
    while (k1 > k0)
    {
        k = (k0 + k1) / 2;
        v = test(key, array->list[k]);
        if (v == 0)
        {
            da_idx = k;
            break;
        }
        if (v > 0)
            k0 = k + 1;
        else
            k1 = k;
    }

    return da_idx;
}

void XOrdSort(st_XORDEREDARRAY* array, XOrdCompareCallback test)
{
    void** list = array->list;
    S32 num = array->cnt;
    S32 i = 0;
    S32 j = 0;
    S32 h = 1;
    void* v = NULL;

    while (h <= num)
        h = h * 3 + 1;
    while (h != 1)
    {
        h /= 3;
        for (i = h; i < num; i++)
        {
            v = list[i];
            for (j = i; j >= h && test(v, list[j - h]) < 0; j -= h)
            {
                list[j] = list[j - h];
            }
            list[j] = v;
        }
    }
}
