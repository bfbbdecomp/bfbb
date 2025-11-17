#include "iScrFX.h"

#include "rwplcore.h"
#include <types.h>

static U32 sMotionBlurEnabled;
static RwRaster* g_rast_gctapdance;
static S32 g_alreadyTriedAlloc;
static _iMotionBlurData sMBD = {};

void iScrFxInit()
{
}

void iScrFxBegin()
{
    RwRenderStateSet(rwRENDERSTATETEXTUREFILTER, (void*)rwFILTERNEAREST);
    RwRenderStateSet(rwRENDERSTATEFOGENABLE, (void*)rwFOGTYPENAFOGTYPE);
    RwRenderStateSet(rwRENDERSTATEZTESTENABLE, NULL);
    RwRenderStateSet(rwRENDERSTATEZWRITEENABLE, NULL);
    RwRenderStateSet(rwRENDERSTATETEXTURERASTER, NULL);
    RwRenderStateSet(rwRENDERSTATEVERTEXALPHAENABLE, (void*)TRUE);
    RwRenderStateSet(rwRENDERSTATESRCBLEND, (void*)rwBLENDSRCALPHA);
    RwRenderStateSet(rwRENDERSTATEDESTBLEND, (void*)rwBLENDINVSRCALPHA);
}

void iScrFxEnd()
{
    RwRenderStateSet(rwRENDERSTATEFOGENABLE, (void*)rwFOGTYPENAFOGTYPE);
    RwRenderStateSet(rwRENDERSTATEZTESTENABLE, (void*)TRUE);
    RwRenderStateSet(rwRENDERSTATEZWRITEENABLE, (void*)TRUE);
    RwRenderStateSet(rwRENDERSTATETEXTURERASTER, NULL);
    RwRenderStateSet(rwRENDERSTATEVERTEXALPHAENABLE, (void*)FALSE);
    RwRenderStateSet(rwRENDERSTATESRCBLEND, (void*)rwBLENDONE);
    RwRenderStateSet(rwRENDERSTATEDESTBLEND, (void*)rwBLENDZERO);
}

void iScrFxDrawBox(F32 x1, F32 y1, F32 x2, F32 y2, U8 red, U8 green, U8 blue, U8 alpha)
{
    U16 indices[4] = { 0, 1, 2, 3 };
    rwGameCube2DVertex v[4];
    F32 nearZ = RwIm2DGetNearScreenZ();

    RwIm2DVertexSetScreenX(&v[0], x1);
    RwIm2DVertexSetScreenY(&v[0], y1);
    RwIm2DVertexSetScreenZ(&v[0], nearZ);
    RwIm2DVertexSetScreenX(&v[1], x2);
    RwIm2DVertexSetScreenY(&v[1], y1);
    RwIm2DVertexSetScreenZ(&v[1], nearZ);
    RwIm2DVertexSetScreenX(&v[2], x1);
    RwIm2DVertexSetScreenY(&v[2], y2);
    RwIm2DVertexSetScreenZ(&v[2], nearZ);
    RwIm2DVertexSetScreenX(&v[3], x2);
    RwIm2DVertexSetScreenY(&v[3], y2);
    RwIm2DVertexSetScreenZ(&v[3], nearZ);

    for (S32 i = 0; i < 4; i++)
    {
        RwIm2DVertexSetRealRGBA(&v[i], red, green, blue, alpha);
    }

    RwIm2DRenderIndexedPrimitive(rwPRIMTYPETRISTRIP, v, 4, indices, 4);
}

void iCameraMotionBlurActivate(U32 activate)
{
    sMotionBlurEnabled = activate;
}

// The instructions regarding the setting of sMotionBlurEnabled and sMBD.motionBlurAlpha are in the wrong order.
void iCameraSetBlurriness(F32 amount)
{
    if (amount <= 0.0f)
    {
        sMotionBlurEnabled = FALSE;
    }
    else
    {
        if (amount > 1.0f)
        {
            amount = 1.0f;
        }
        sMotionBlurEnabled = TRUE;

        sMBD.motionBlurAlpha = 254.0f * amount + 0.5f;
    }
}

// Instructions in the wrong order.
void iScrFxCameraCreated(RwCamera* pCamera)
{
    sMBD.motionBlurAlpha = 0x90;
    sMBD.motionBlurFrontBuffer = NULL;
    sMBD.index[0] = 0;
    sMBD.index[1] = 1;
    sMBD.index[2] = 2;
    sMBD.index[3] = 0;
    sMBD.index[4] = 2;
    sMBD.index[5] = 3;
    iScrFxMotionBlurOpen(pCamera);
}

void iScrFxCameraEndScene(RwCamera* pCamera)
{
    if (sMotionBlurEnabled && sMBD.motionBlurAlpha != 0)
    {
        iScrFxMotionBlurRender(pCamera, sMBD.motionBlurAlpha & 0xff);
    }
}

void iScrFxPostCameraEnd(RwCamera* pCamera)
{
    GCMB_SiphonFrameBuffer(pCamera);
}

static void iCameraOverlayRender(RwCamera* pCamera, RwRaster* ras, RwRGBA col)
{
    //RwRect rect; // from dwarf, not sure where it's used
    RwRaster* raster = FBMBlur_DebugIntervention(pCamera, ras);

    for (S32 i = 0; i < 4; i++)
    {
        sMBD.vertex[i].emissiveColor.red = col.red;
        sMBD.vertex[i].emissiveColor.green = col.green;
        sMBD.vertex[i].emissiveColor.blue = col.blue;
        sMBD.vertex[i].emissiveColor.alpha = col.alpha;
    }

    RwRenderStateSet(rwRENDERSTATETEXTUREFILTER, (void*)TRUE);
    RwRenderStateSet(rwRENDERSTATEFOGENABLE, (void*)FALSE);
    RwRenderStateSet(rwRENDERSTATEZTESTENABLE, (void*)FALSE);
    RwRenderStateSet(rwRENDERSTATEZWRITEENABLE, (void*)FALSE);
    RwRenderStateSet(rwRENDERSTATETEXTURERASTER, raster);
    RwRenderStateSet(rwRENDERSTATEVERTEXALPHAENABLE, (void*)TRUE);
    RwRenderStateSet(rwRENDERSTATESRCBLEND, (void*)rwBLENDSRCALPHA);
    RwRenderStateSet(rwRENDERSTATEDESTBLEND, (void*)rwBLENDINVSRCALPHA);
    if (raster != 0)
    {
        RwRasterLock(raster, 0, 2);
    }
    RwIm2DRenderIndexedPrimitive(rwPRIMTYPETRILIST, sMBD.vertex, 4, sMBD.index, 6);
    if (raster != 0)
    {
        RwRasterUnlock(raster);
    }
    RwRenderStateSet(rwRENDERSTATEFOGENABLE, (void*)FALSE);
    RwRenderStateSet(rwRENDERSTATEZTESTENABLE, (void*)TRUE);
    RwRenderStateSet(rwRENDERSTATEZWRITEENABLE, (void*)TRUE);
    RwRenderStateSet(rwRENDERSTATETEXTURERASTER, NULL);
    RwRenderStateSet(rwRENDERSTATEVERTEXALPHAENABLE, (void*)FALSE);
    RwRenderStateSet(rwRENDERSTATESRCBLEND, (void*)rwBLENDSRCALPHA);
    RwRenderStateSet(rwRENDERSTATEDESTBLEND, (void*)rwBLENDINVSRCALPHA);
}

inline RwRaster* FBMBlur_DebugIntervention(RwCamera* camera, RwRaster* ras)
{
    return ras;
}

S32 iScrFxMotionBlurOpen(RwCamera* camera)
{
    return 0;
}

S32 iScrFxCameraDestroyed(RwCamera* pCamera)
{
    GCMB_KillFrameBufferCopy();
    if (sMBD.motionBlurFrontBuffer != NULL)
    {
        RwRasterDestroy(sMBD.motionBlurFrontBuffer);
        sMBD.motionBlurFrontBuffer = NULL;
        return 1;
    }
    return 0;
}

void iScrFxMotionBlurRender(RwCamera* camera, U32 alpha)
{
    if (sMBD.motionBlurFrontBuffer != NULL)
    {
        RwRGBA col = { 0xff, 0xff, 0xff, (U8)alpha };
        iCameraOverlayRender(camera, (RwRaster*)sMBD.motionBlurFrontBuffer, col);
    }
}

void GCMB_MakeFrameBufferCopy(const RwCamera* camera)
{
}

void GCMB_KillFrameBufferCopy()
{
    if (g_rast_gctapdance != NULL)
    {
        RwRasterDestroy(g_rast_gctapdance);
    }
    g_rast_gctapdance = NULL;
    g_alreadyTriedAlloc = 0;
}

void GCMB_SiphonFrameBuffer(const RwCamera* camera)
{
    if ((g_rast_gctapdance == NULL) && (g_alreadyTriedAlloc == 0))
    {
        GCMB_MakeFrameBufferCopy(camera);
    }
    if (g_rast_gctapdance != NULL)
    {
        RwGameCubeCameraTextureFlush(g_rast_gctapdance, 0);
    }
}
