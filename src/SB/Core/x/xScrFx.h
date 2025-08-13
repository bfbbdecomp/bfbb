#ifndef XSCRFX_H
#define XSCRFX_H

#include "xCamera.h"
#include "iColor.h"
#include "iScrFX.h"
#include "zMenu.h"

#include <rwcore.h>
#include <string.h>

struct _xFadeData
{
    S32 active; // offset 0x0, size 0x4
    S32 hold; // offset 0x4, size 0x4
    iColor_tag src; // offset 0x8, size 0x4
    iColor_tag dest; // offset 0xC, size 0x4
    F32 time_passed; // offset 0x10, size 0x4
    F32 time_total; // offset 0x14, size 0x4
    void (*cb)(); // offset 0x18, size 0x4
};

struct xGlare
{
    S32 flags; // offset 0x0, size 0x4
    xVec3 pos; // offset 0x4, size 0xC
    F32 intensity; // offset 0x10, size 0x4
    F32 intensityFadeRate; // offset 0x14, size 0x4
    F32 lifetime; // offset 0x18, size 0x4
    F32 size; // offset 0x1C, size 0x4
    RwRGBAReal col; // offset 0x20, size 0x10
    RwRaster* raster; // offset 0x30, size 0x4
};

void xScrFxInit();
void xScrFxReset();
void xScrFxUpdate(RwCamera* cam, F32 dt);
void xScrFxRender(RwCamera*);
void xScrFxDrawScreenSizeRectangle();
void xScrFxFadeInit();
void InterpCol(F32, U8, U8);
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
static void xScrFxDistortionUpdate(F32 dt);
static void xScrFxDistortionRender(RwCamera*);
void xScrFXGlareInit();
void xScrFXGlareReset();
S32 xScrFXGlareAdd(xVec3* pos, F32 life, F32 intensity, F32 size, F32 r, F32 g, F32 b, F32 a,
                   RwRaster* raster);
void xScrFXGlareUpdate(F32); // Return type may be wrong, Not in dwarf
void xScrFXFullScreenGlareRender();
void xScrFXGlareRender(xCamera* cam);
void xScrFxDrawBox(F32 x1, F32 y1, F32 x2, F32 y2, U8 red, U8 green, U8 blue, U8 alpha, F32 ushift,
                   F32 vshift);

#endif
