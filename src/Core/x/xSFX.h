#ifndef XSFX_H
#define XSFX_H

#include <types.h>

#include "../p2/iColor.h"

void xScrFxFade(iColor_tag* base, iColor_tag* dest, float32 seconds, void(*callback)(), int32 hold);
void xScrFxDrawScreenSizeRectangle();

#endif