#ifndef XSCRFX_H
#define XSCRFX_H

#include "xCamera.h"
#include "iColor.h"

#include <rwcore.h>

void xScrFxUpdate(RwCamera* cam, float32 dt);
void xScrFxRender(RwCamera*);
void xScrFxDrawScreenSizeRectangle();
void xScrFxFade(iColor_tag* base, iColor_tag* dest, float32 seconds, void (*callback)(),
                int32 hold);
int32 xScrFxIsLetterbox();
void xScrFxLetterboxReset();
int32 xScrFXGlareAdd(xVec3* pos, float32 life, float32 intensity, float32 size, float32 r,
                     float32 g, float32 b, float32 a, RwRaster* raster);
void xScrFXFullScreenGlareRender();
void xScrFXGlareRender(xCamera* cam);
void xScrFxLetterbox(int32 enable);
void xScrFxReset();

#endif
