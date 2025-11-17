#ifndef ISCRFX_H
#define ISCRFX_H

#include <types.h>
#include <rwcore.h>

struct _iMotionBlurData
{
    S32 motionBlurAlpha;
    RwRaster* motionBlurFrontBuffer;
    rwGameCube2DVertex vertex[4];
    U16 index[6];
    U32 w;
    U32 h;
    U8 unk[8];
};

void iScrFxInit();
void iScrFxBegin();
void iScrFxEnd();
void iScrFxDrawBox(F32 x1, F32 y1, F32 x2, F32 y2, U8 red, U8 green,
                   U8 blue, U8 alpha);
void iCameraMotionBlurActivate(U32 activate);
void iCameraSetBlurriness(F32 amount);
void iScrFxCameraCreated(RwCamera* pCamera);
void iScrFxCameraEndScene(RwCamera* pCamera);
void iScrFxPostCameraEnd(RwCamera* pCamera);
static void iCameraOverlayRender(RwCamera* pCamera, RwRaster* ras, RwRGBA col);
RwRaster* FBMBlur_DebugIntervention(RwCamera* camera, RwRaster* ras);
S32 iScrFxMotionBlurOpen(RwCamera* camera);
S32 iScrFxCameraDestroyed(RwCamera* pCamera);
void iScrFxMotionBlurRender(RwCamera* camera, U32 col);
void GCMB_MakeFrameBufferCopy(const RwCamera* camera);
void GCMB_KillFrameBufferCopy();
void GCMB_SiphonFrameBuffer(const RwCamera* camera);

#endif
