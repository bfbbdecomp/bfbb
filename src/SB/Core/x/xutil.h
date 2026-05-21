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

template <typename T> static T* xUtil_select(T** arg0, S32 arg1, const F32* arg3);

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
