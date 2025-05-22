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
    if (array->cnt < array->max)
    {
        array->cnt++;
        S32 pos = array->cnt - 1;
        void* currElement = (void*)(pos * sizeof(void*));
        while (pos > 0)
        {
            // FIXME: currElement
            // S32 score = compare(array->list + currElement - sizeof(void*), elt);
            // if (score <= 0)
            // {
            //     array->list[pos] = elt;
            //     return;
            // }
            // pos--;
            // void* tmp = (void*)(array->list + currElement);
            // currElement--;
            // *tmp = tmp[-1];
        }
        *array->list = elt;
    }
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
    S32 v, index, rightBound, leftBound;
    leftBound = 0;
    index = array->cnt;
    do
    {
        rightBound = index;
        if (rightBound <= leftBound)
        {
            return -1;
        }
        index = (leftBound + rightBound) / 2;
        v = test(key, array->list[index]);
        if (v == 0)
            break;
        if (0 < v)
        {
            leftBound = index + 1;
            index = rightBound;
        }
    } while (true);
    return index;
}

void XOrdSort(st_XORDEREDARRAY* array, S32 (*test)(void*, void*))
{
    void** list = array->list;
    S32 num = 1;
    // FIXME: cnt??
    // while (num <= cnt)
    // {
    //     num = num * 3 + 1;
    // }
    for (;;)
    {
        if (num == 1)
        {
            return;
        }
        num = num / 3 + (num >> 0x1f);
        num = num - (num >> 0x1f);
        S32 numPos = num * sizeof(void*);
        void** currItem = list + num;
        S32 i = num;
        // FIXME: cnt??
        // while (i < cnt)
        // {
        //     // TODO!!!
        // }
    }
}
