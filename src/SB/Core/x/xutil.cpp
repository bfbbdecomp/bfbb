#include "xutil.h"

#include "xMath.h"

#include <ctype.h>

static volatile S32 g_xutilinit; // volatile so xUtilShutdown matches
static S32 g_crc_needinit = 1;
static U32 g_crc32_table[256] = {};

S32 xUtilStartup()
{
    if (!g_xutilinit++)
    {
        xUtil_crc_init();
    }

    return g_xutilinit;
}

S32 xUtilShutdown()
{
    g_xutilinit--;
    return g_xutilinit;
}

char* xUtil_idtag2string(U32 srctag, S32 bufidx)
{
    U32 tag = srctag;
    char* strptr;
    char* uc = (char*)&tag;
    S32 l;
    char t;
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

    if ((S32)((char*)&l)[3] != 0)
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

U32 xUtil_crc_init()
{
    S32 i, j;
    U32 crc_accum;

    if (g_crc_needinit)
    {
        for (i = 0; i < 256; i++)
        {
            crc_accum = (U32)i << 24;

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

U32 xUtil_crc_update(U32 crc_accum, char* data, S32 datasize)
{
    S32 i, j;

    if (g_crc_needinit)
    {
        xUtil_crc_init();
    }

    for (i = 0; i < datasize; i++)
    {
        j = ((crc_accum >> 24) ^ *data++) & 0xff;
        crc_accum = (crc_accum << 8) ^ g_crc32_table[j];
    }

    return crc_accum;
}

S32 xUtil_yesno(F32 wt_yes)
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

void xUtil_wtadjust(F32* wts, S32 cnt, F32 arbref)
{
    const volatile F32 ZERO = 0.0f;

    S32 i;
    F32 sum = 0.0f, fac;

    for (i = 0; i < cnt; i++)
    {
        if (wts[i] < ZERO)
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
