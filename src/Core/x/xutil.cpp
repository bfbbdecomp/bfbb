#include "xutil.h"

#include "xMath.h"

#include <ctype.h>

static volatile int32 g_xutilinit; // volatile so xUtilShutdown matches
static int32 g_crc_needinit = 1;
static uint32 g_crc32_table[256] = {};

int32 xUtilStartup()
{
    if (!g_xutilinit++)
    {
        xUtil_crc_init();
    }

    return g_xutilinit;
}

int32 xUtilShutdown()
{
    g_xutilinit--;
    return g_xutilinit;
}

char* xUtil_idtag2string(uint32 srctag, int32 bufidx)
{
    uint32 tag = srctag;
    char* strptr;
    int8* uc = (int8*)&tag;
    int32 l;
    int8 t;
    static char buf[6][10] = {};

    if (bufidx < 0 || bufidx >= 7)
    {
        strptr = buf[0];
    }
    else
    {
        strptr = buf[bufidx];
    }

    // convert tag to big endian

    l = 1;

    if ((int32)((int8*)&l)[3] != 0)
    {
        t = uc[0];
        uc[0] = uc[3];
        uc[3] = t;

        t = uc[1];
        uc[1] = uc[2];
        uc[2] = t;
    }

    switch (bufidx)
    {
    case 4:
    case 5:
        strptr[0] = isprint(uc[0]) ? uc[0] : '?';
        strptr[1] = isprint(uc[1]) ? uc[1] : '?';
        strptr[2] = isprint(uc[2]) ? uc[2] : '?';
        strptr[3] = isprint(uc[3]) ? uc[3] : '?';
        break;
    case 6:
    default:
        strptr[0] = isprint(uc[3]) ? uc[3] : '?';
        strptr[1] = isprint(uc[2]) ? uc[2] : '?';
        strptr[2] = isprint(uc[1]) ? uc[1] : '?';
        strptr[3] = isprint(uc[0]) ? uc[0] : '?';
        break;
    }

    strptr[4] = '\0';

    if (bufidx == 6)
    {
        strptr[4] = '/';
        strptr[5] = isprint(uc[0]) ? uc[0] : '?';
        strptr[6] = isprint(uc[1]) ? uc[1] : '?';
        strptr[7] = isprint(uc[2]) ? uc[2] : '?';
        strptr[8] = isprint(uc[3]) ? uc[3] : '?';
        strptr[9] = '\0';
    }

    return strptr;
}

uint32 xUtil_crc_init()
{
    int32 i, j;
    uint32 crc_accum;

    if (g_crc_needinit)
    {
        for (i = 0; i < 256; i++)
        {
            crc_accum = (uint32)i << 24;

            for (j = 0; j < 8; j++)
            {
                if (crc_accum & (1 << 31))
                {
                    crc_accum = (crc_accum << 1) ^ 0x04C11DB7;
                }
                else
                {
                    crc_accum = (crc_accum << 1);
                }
            }

            g_crc32_table[i] = crc_accum;
        }

        g_crc_needinit = 0;
    }

    return 0xFFFFFFFF;
}

#ifndef NON_MATCHING
// func_8004DFC8
#pragma GLOBAL_ASM("asm/Core/x/xutil.s", "xUtil_crc_update__FUiPci")
#else
uint32 xUtil_crc_update(uint32 crc_accum, char* data, int32 datasize)
{
    int32 i, j;

    if (g_crc_needinit)
    {
        xUtil_crc_init();
    }

    for (i = 0; i < datasize; i++)
    {
        // non-matching: incorrect registers
        crc_accum = (crc_accum << 8) ^ g_crc32_table[((crc_accum >> 24) ^ *data++) & 0xff];
    }

    return crc_accum;
}
#endif

int32 xUtil_yesno(float32 wt_yes)
{
    if (0.0f == wt_yes)
    {
        return 0;
    }

    if (1.0f == wt_yes)
    {
        return 1;
    }

    return (xurand() <= wt_yes);
}

#ifndef NON_MATCHING
// func_8004E1E4
#pragma GLOBAL_ASM("asm/Core/x/xutil.s", "xUtil_wtadjust__FPfif")
#else
void xUtil_wtadjust(float32* wts, int32 cnt, float32 arbref)
{
    int32 i;
    float32 sum = 0.0f, fac;

    for (i = 0; i < cnt; i++)
    {
        // non-matching: 0.0f constant loaded outside of loop

        if (wts[i] < 0.0f)
        {
            wts[i] = -wts[i];
        }

        sum += wts[i];
    }

    fac = arbref / sum;

    for (i = 0; i < cnt; i++)
    {
        wts[i] *= fac;
    }
}
#endif