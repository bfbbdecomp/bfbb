#include "iDraw.h"

#include <dolphin.h>
#include <stddef.h>

void iDrawSetFBMSK(U32 abgr)
{
    size_t tmp, hi;

    hi = abgr >> 24;

    if (hi == 0)
    {
        GXSetAlphaUpdate(GX_TRUE);
    }
    else if (hi == 255)
    {
        GXSetAlphaUpdate(GX_FALSE);
    }

    tmp = abgr & 0x00FFFFFF;

    if (tmp == 0)
    {
        GXSetColorUpdate(GX_TRUE);
    }
    else
    {
        GXSetColorUpdate(GX_FALSE);
    }
}

void iDrawBegin()
{
    return;
}

void iDrawEnd()
{
    return;
}
