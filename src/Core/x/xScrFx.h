#ifndef XSCRFX_H
#define XSCRFX_H

#include "xCamera.h"
#include "../p2/iColor.h"

#include <rwcore.h>

void xScrFxUpdate(RwCamera* cam, float32 dt);
void xScrFxRender(RwCamera*);
void xScrFxDrawScreenSizeRectangle();
void xScrFxFade(iColor_tag* base, iColor_tag* dest, float32 seconds, void (*callback)(),
                int32 hold);
void xScrFxLetterboxReset();
void xScrFXFullScreenGlareRender();
void xScrFXGlareRender(xCamera* cam);
void xScrFxLetterbox(int32 enable);

#endif