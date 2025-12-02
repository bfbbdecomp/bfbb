#ifndef XSCRFX_H
#define XSCRFX_H

#include "iColor.h"
#include "iScrFX.h"
#include "xMath3.h"

#include <rwcore.h>

struct DistortionParticle
{
    xVec3 pos;
    U32 flags;
    xVec3 dir;
    F32 life;
    xVec3 vel;
    F32 death;
};

struct xGlare
{
    S32 flags;
    xVec3 pos;
    F32 intensity;
    F32 intensityFadeRate;
    F32 lifetime;
    F32 size;
    RwRGBAReal col;
    RwRaster* raster;
};

extern bool g_debugRenderSafeArea;
extern DistortionParticle gDistortionParticles[100];
extern S32 gNumDistortionParticles;
extern xVec3 ddir;
extern xGlare sGlare[10];
extern xVec3 sFullScreenGlareDir;
extern F32 sFullScreenGlareIntensity;
extern RwRGBA sFullScreenGlareColor;
extern S32 sFullScreenGlareEnabled;
extern U32 sFullScreenGlareTextureID;
extern RwTexture* sFullScreenGlareTexturePtr;

struct xCamera;

void xScrFxInit();
void xScrFxReset();
void xScrFxUpdate(RwCamera* cam, F32 dt);
void xScrFxRender(RwCamera*);
void xScrFxDrawScreenSizeRectangle();
void xScrFxFadeInit();
void xScrFxFade(iColor_tag* base, iColor_tag* dest, F32 seconds, void (*callback)(), S32 hold);
void xScrFxStopFade();
S32 xScrFxIsFading();
void xScrFxUpdateFade(F32 seconds);
void xScrFxUpdateFade(RwCamera* cam, F32 seconds);
void xScrFxLetterBoxInit();
void xScrFxLetterboxReset();
void xScrFxLetterBoxSetSize(F32);
void xScrFxLetterBoxSetAlpha(U8);
void xScrFxLetterbox(S32 enable);
void xScrFxUpdateLetterBox(F32 seconds);
void xScrFxUpdateLetterBox(RwCamera* cam, F32 seconds);
S32 xScrFxIsLetterbox();
void xScrFxDrawSafeArea();
void xScrFxDistortionAdd(xVec3*, xVec3*, S32);
void xScrFXGlareInit();
void xScrFXGlareReset();
S32 xScrFXGlareAdd(xVec3* pos, F32 life, F32 intensity, F32 size, F32 r, F32 g, F32 b, F32 a,
                   RwRaster* raster);
void xScrFXGlareUpdate(F32 dt);
void xScrFXFullScreenGlareRender();
void xScrFXGlareRender(xCamera* cam);
void xScrFxDrawBox(F32 x1, F32 y1, F32 x2, F32 y2, U8 red, U8 green, U8 blue, U8 alpha, F32 ushift,
                   F32 vshift);

#endif
