#ifndef XSCRFX_H
#define XSCRFX_H

#include "xCamera.h"
#include "iColor.h"

#include <rwcore.h>

void xScrFxInit ();
void xScrFxLetterBoxSetSize(F32);
void xScrFxLetterBoxSetAlpha(U8);
void xScrFxUpdate(RwCamera* cam, F32 dt);
void xScrFxRender(RwCamera*);
void xScrFxDrawScreenSizeRectangle();
void xScrFxFade(iColor_tag* base, iColor_tag* dest, F32 seconds, void (*callback)(),
                S32 hold);
S32 xScrFxIsLetterbox();
void xScrFxLetterboxReset();
S32 xScrFXGlareAdd(xVec3* pos, F32 life, F32 intensity, F32 size, F32 r,
                     F32 g, F32 b, F32 a, RwRaster* raster);
void xScrFXFullScreenGlareRender();
void xScrFXGlareRender(xCamera* cam);
void xScrFxLetterbox(S32 enable);
void xScrFxReset();

#endif
