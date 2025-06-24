#ifndef XUTIL_H
#define XUTIL_H

#include <types.h>

S32 xUtilStartup();
S32 xUtilShutdown();
char* xUtil_idtag2string(U32 srctag, S32 bufidx);
U32 xUtil_crc_init();
U32 xUtil_crc_update(U32 crc_accum, char* data, S32 datasize);
S32 xUtil_yesno(F32 wt_yes);
void xUtil_wtadjust(F32* wts, S32 cnt, F32 arbref);

template <class T> static inline T xUtil_choose(const T* list, S32 cnt, const F32* wts)
{
    if (!list)
        return 0;
    if (cnt < 1)
        return 0;

    S32 idx = 0;
    F32 pt = xurand();

    if (!wts)
    {
        idx = (S32)(pt * cnt);
    }
    else
    {
        F32 hi = 0.0f;
        for (S32 i = 0; i < cnt; i++)
        {
            F32 lo = hi;
            hi += wts[i];
            if (pt >= lo && pt <= hi)
            {
                idx = i;
                break;
            }
        }
    }

    if (idx >= cnt)
        idx = cnt - 1;
    if (idx < 0)
        idx = 0;

    return list[idx];
}

template <typename T> static T* xUtil_select(T** arg0, S32 arg1, const F32* arg3);

#endif
