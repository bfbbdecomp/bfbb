#include "xRenderState.h"

static int sBlendTable[11] =
{
    1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11
};

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