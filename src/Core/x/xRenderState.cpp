#include "xRenderState.h"

extern int sBlendTable[11];

void xRenderStateSetTexture(RwTexture* texture)
{
    if (texture != NULL)
    {
        if (texture->raster != NULL)
        {
            RwRenderStateSet(rwRENDERSTATETEXTURERASTER, (void*)texture->raster);
        }
    }
    else
    {
        RwRenderStateSet(rwRENDERSTATETEXTURERASTER, (void*)NULL);
    }
}

void xRenderStateSetSrcBlendMode(int xmode)
{
    RwRenderStateSet(rwRENDERSTATESRCBLEND, (void*)sBlendTable[xmode]);
}

void xRenderStateSetDstBlendMode(int xmode)
{
    RwRenderStateSet(rwRENDERSTATEDESTBLEND, (void*)sBlendTable[xmode]);
}