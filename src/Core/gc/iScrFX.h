#ifndef ISCRFX_H
#define ISCRFX_H

#include <types.h>
#include <rwcore.h>

struct _iMotionBlurData
{
    int32 motionBlurAlpha;
    RwRaster* motionBlurFrontBuffer;
    // RwSky2DVertex vertex[4]; This doesn't seem right... Due to how the data is used, it only makes sense for this to be 96 only.
    uint8 vertex[96];
    uint16 index[6];
    uint32 w;
    uint32 h;
    uint8 unk[10]; // There is something here to make this structure 0x88.
};

void iScrFxInit();
void iScrFxBegin();
void iScrFxEnd();
void iScrFxDrawBox(float32 x1, float32 y1, float32 x2, float32 y2, uint8 red, uint8 green,
                   uint8 blue, uint8 alpha);
void iCameraMotionBlurActivate(uint32 activate);
void iCameraSetBlurriness(float32 amount);
void iScrFxCameraCreated(RwCamera* pCamera);
void iScrFxCameraEndScene(RwCamera* pCamera);
void iScrFxPostCameraEnd(RwCamera* pCamera);
void iCameraOverlayRender(RwCamera* pcamera, RwRaster* ras, RwRGBA col);
RwRaster* FBMBlur_DebugIntervention(RwCamera* camera, RwRaster* ras);
int32 iScrFxMotionBlurOpen(RwCamera* camera);
int32 iScrFxCameraDestroyed(RwCamera* pCamera);
void iScrFxMotionBlurRender(RwCamera* camera, uint32 col);
void GCMB_MakeFrameBufferCopy(const RwCamera* camera);
void GCMB_KillFrameBufferCopy();
void GCMB_SiphonFrameBuffer(const RwCamera* camera);

#endif