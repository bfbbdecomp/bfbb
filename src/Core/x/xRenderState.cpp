#include "xRenderState.h"

extern int sBlendTable[11];

void xRenderStateSetTexture(RwTexture* texture)
{
    if (texture != NULL)
    {
        if (texture->raster != NULL)
        {
            RwRenderStateSet(1, (void*)texture->raster);
        }
    }
    else
    {
        RwRenderStateSet(1, 0);
    }
}

void xRenderStateSetSrcBlendMode(int xmode)
{
    RwRenderStateSet(10, (void*)sBlendTable[xmode]);
}

void xRenderStateSetDstBlendMode(int xmode)
{
    RwRenderStateSet(11, (void*)sBlendTable[xmode]);
}