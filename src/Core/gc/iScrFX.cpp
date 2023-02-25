#include "iScrFX.h"

#include <types.h>

extern RwRaster* g_rast_gctapdance;
extern int32 g_alreadyTriedAlloc;
extern _iMotionBlurData sMBD;
extern uint32 sMotionBlurEnabled;
extern float32 lbl_803CE168; // 0.0f
extern float32 lbl_803CE174; // 1.0f
extern float32 lbl_803CE178; // 0.5f
extern float32 lbl_803CE17C; // 254f

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
    RwRenderStateSet(rwRENDERSTATEVERTEXALPHAENABLE, (void*)true);
    RwRenderStateSet(rwRENDERSTATESRCBLEND, (void*)rwBLENDSRCALPHA);
    RwRenderStateSet(rwRENDERSTATEDESTBLEND, (void*)rwBLENDINVSRCALPHA);
}

void iScrFxEnd()
{
    RwRenderStateSet(rwRENDERSTATEFOGENABLE, (void*)rwFOGTYPENAFOGTYPE);
    RwRenderStateSet(rwRENDERSTATEZTESTENABLE, (void*)true);
    RwRenderStateSet(rwRENDERSTATEZWRITEENABLE, (void*)true);
    RwRenderStateSet(rwRENDERSTATETEXTURERASTER, NULL);
    RwRenderStateSet(rwRENDERSTATEVERTEXALPHAENABLE, (void*)false);
    RwRenderStateSet(rwRENDERSTATESRCBLEND, (void*)rwBLENDONE);
    RwRenderStateSet(rwRENDERSTATEDESTBLEND, (void*)rwBLENDZERO);
}

// func_800CF43C
#pragma GLOBAL_ASM("asm/Core/p2/iScrFX.s", "iScrFxDrawBox__FffffUcUcUcUc")

void iCameraMotionBlurActivate(uint32 activate)
{
    sMotionBlurEnabled = activate;
}

#if 1

// func_800CF54C
#pragma GLOBAL_ASM("asm/Core/p2/iScrFX.s", "iCameraSetBlurriness__Ff")

#else

// The instructions regarding the setting of sMotionBlurEnabled and sMBD.motionBlurAlpha are in the wrong order.
void iCameraSetBlurriness(float32 amount)
{
    if (amount <= lbl_803CE168)
    {
        sMotionBlurEnabled = 0;
    }
    else
    {
        if (amount > lbl_803CE174)
        {
            amount = lbl_803CE174;
        }
        sMotionBlurEnabled = 1;
        sMBD.motionBlurAlpha = (int32)(lbl_803CE17C * amount + lbl_803CE178);
    }
}

#endif

#if 1

// func_800CF5AC
#pragma GLOBAL_ASM("asm/Core/p2/iScrFX.s", "iScrFxCameraCreated__FP8RwCamera")

#else

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

#endif

void iScrFxCameraEndScene(RwCamera* pCamera)
{
    if ((sMotionBlurEnabled != 0) && (sMBD.motionBlurAlpha != 0))
    {
        iScrFxMotionBlurRender(pCamera, sMBD.motionBlurAlpha & 0xff);
    }
}

void iScrFxPostCameraEnd(RwCamera* pCamera)
{
    GCMB_SiphonFrameBuffer(pCamera);
}

// func_800CF66C
#pragma GLOBAL_ASM("asm/Core/p2/iScrFX.s", "iCameraOverlayRender__FP8RwCameraP8RwRaster6RwRGBA")

RwRaster* FBMBlur_DebugIntervention(RwCamera* camera, RwRaster* ras)
{
    return ras;
}

int32 iScrFxMotionBlurOpen(RwCamera* camera)
{
    return 0;
}

#if 1

// func_800CF800
#pragma GLOBAL_ASM("asm/Core/p2/iScrFX.s", "iScrFxCameraDestroyed__FP8RwCamera")

#else

// Something strange going one here.
int32 iScrFxCameraDestroyed(RwCamera* pCamera)
{
    GCMB_KillFrameBufferCopy();
    bool ret = sMBD.motionBlurFrontBuffer != NULL;
    if (ret)
    {
        RwRasterDestroy(sMBD.motionBlurFrontBuffer);
        sMBD.motionBlurFrontBuffer = NULL;
    }
    return ret;
}

#endif

#if 1

// func_800CF854
#pragma GLOBAL_ASM("asm/Core/p2/iScrFX.s", "iScrFxMotionBlurRender__FP8RwCameraUi")

#else

// WIP.
void iScrFxMotionBlurRender(RwCamera* camera, uint32 col)
{
    if (sMBD.motionBlurFrontBuffer != NULL)
    {
        RwRGBA col;
        col.alpha = 0xf8;
        iCameraOverlayRender(camera, (RwRaster*)sMBD.motionBlurFrontBuffer, col);
    }
}

#endif

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