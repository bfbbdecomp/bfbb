#include "xScrFx.h"

#include <types.h>

U8 g_debugRenderSafeArea;

static F32 mLetterboxO;
static F32 mLetterboxTO;
static F32 sLetterBoxSize;
static U8 sLetterBoxAlpha = 255;
F32 sFullScreenGlareIntensity; // Needs to be initialized

static _xFadeData mFade;
xGlare sGlare[10];

extern RwGlobals* RwEngineInstance;
extern RwInt32 RwEngineGetCurrentVideoMode(void);
extern RwVideoMode* RwEngineGetVideoModeInfo(RwVideoMode* modeinfo, RwInt32 modeIndex);

void xScrFxInit()
{
    xScrFxFadeInit();
    xScrFxLetterBoxInit();
    xScrFXGlareInit();
    iScrFxInit();
}

void xScrFxReset()
{
    xScrFXGlareReset();
}

void xScrFxUpdate(RwCamera* cam, F32 dt)
{
    iScrFxBegin();
    xScrFxUpdateFade(cam, dt);
    xScrFxUpdateLetterBox(cam, dt);
    xScrFXGlareUpdate(dt);
    xScrFxDistortionUpdate(dt);
}

void xScrFxRender(RwCamera* cam)
{
    iScrFxBegin();
    xScrFxDistortionRender((RwCamera*)RwEngineInstance->curCamera);
    if (g_debugRenderSafeArea != '\0')
    {
        xScrFxDrawSafeArea();
    }
    iScrFxEnd();
}

void xScrFxDrawScreenSizeRectangle()
{
    // I honestly dont know how to complete this function
    // FIXME: First 2 params of xScrFxDrawBox seem to be correct
    // The rest of them confuse me.

    RwVideoMode video_mode;

    F32 x2 = 0;
    F32 y2 = 0;
    U8 red = 0;
    U8 green = 0;
    U8 blue = 0;
    U8 alpha = 255;
    F32 ushift = 0;
    F32 vshift = 0;

    S32 mode = RwEngineGetCurrentVideoMode();
    RwEngineGetVideoModeInfo(&video_mode, mode);
    xScrFxDrawBox((F32)video_mode.width, (F32)video_mode.height, x2, y2, red, green, blue, alpha,
                  ushift, vshift);
}

void xScrFxFadeInit()
{
    memset(&mFade, 0, 0x1c);
}

void InterpCol(F32 unk, U8 unk1, U8 unk2)
{
}

void xScrFxFade(iColor_tag* base, iColor_tag* dest, F32 seconds, void (*callback)(), S32 hold)
{
    mFade.active = 1;
    base->operator=(*(iColor_tag*)dest);
}

void xScrFxStopFade()
{
    mFade.active = 0;
}

S32 xScrFxIsFading()
{
    return mFade.active;
}

void xScrFxLetterBoxInit()
{
    mLetterboxO = 0.0f;
    mLetterboxTO = 0.0f;
}

void xScrFxLetterboxReset()
{
    mLetterboxO = 0.0f;
    mLetterboxTO = 0.0f;
}

void xScrFxLetterBoxSetSize(F32 size)
{
    sLetterBoxSize = size;
}

void xScrFxLetterBoxSetAlpha(U8 alpha)
{
    sLetterBoxAlpha = alpha;
}

void xScrFxLetterbox(S32 enable)
{
    if (zMenuRunning() != 0)
    {
        enable = 0;
    }
    if (enable != 0)
    {
        mLetterboxTO = sLetterBoxSize;
    }
    else
    {
        mLetterboxTO = 0.0f;
    }
}

S32 xScrFxIsLetterbox()
{
    return (((mLetterboxTO > 0.0f) << 2) << 0x1c) >> 0x1e;
}

void xScrFxDistortionAdd(xVec3*, xVec3*, S32)
{
}

void xScrFxDistortionRender(RwCamera*)
{
}

void xScrFXGlareInit()
{
    sGlare->flags = 0;
    for (S32 i = 1; i < 10; i++)
    {
        sGlare[i].flags = 0;
    }
}

void xScrFXGlareReset()
{
    xScrFXGlareInit();
}
