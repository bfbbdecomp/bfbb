#ifndef XUTIL_H
#define XUTIL_H

#include "xMath.h"
#include <types.h>

S32 xUtilStartup();
S32 xUtilShutdown();
char* xUtil_idtag2string(U32 srctag, S32 bufidx);
U32 xUtil_crc_init();
U32 xUtil_crc_update(U32 crc_accum, char* data, S32 datasize);
S32 xUtil_yesno(F32 wt_yes);
void xUtil_wtadjust(F32* wts, S32 cnt, F32 arbref);

template <typename T> T* xUtil_select(T** data, S32 size, const F32* arg2)
{
    T* selected = NULL;
    S32 selectIdx = 0;
    F32 tempValue;

    if (data == NULL)
    {
        return NULL;
    }
    else if (size < 1)
    {
        return NULL;
    }

    F32 randOffset = xurand();
    if (arg2 == NULL)
    {
        selectIdx = (S32)(randOffset * (F32)size);
    }
    else
    {
        F32* roundingData = (F32*)arg2;
        F32 threshold = 0.0f;
        S32 counter = 0;

        for (S32 i = size; i > 0; i--)
        {
            tempValue = threshold;
            threshold += *roundingData;
            if (randOffset >= tempValue && randOffset <= threshold)
            {
                selectIdx = counter;
                break;
            }
            roundingData++;
            counter++;
        }
    }

    if (selectIdx >= size)
    {
        selectIdx = size - 1;
    }

    if (selectIdx < 0)
    {
        selectIdx = 0;
    }

    return data[selectIdx];
}

template <typename T> T xUtil_choose(T const* list, S32 size, F32 const* float_list)
{
    if (list == NULL)
        return NULL;
    if (size < 1)
        return NULL;
    S32 idx = 0;
    F32 rand = xurand();
    if (float_list == NULL)
        idx = rand * size;
    else
    {
        const F32* float_it = float_list;
        F32 total = 0.0f;
        for (S32 i = 0; i < size; float_it++, i++)
        {
            F32 prev_total = total;
            total += *float_it;
            if (rand >= prev_total && rand <= total)
            {
                idx = i;
                break;
            }
        }
    }
    if (idx >= size)
        idx = size - 1;
    if (idx < 0)
        idx = 0;
    return list[idx];
}

#endif
