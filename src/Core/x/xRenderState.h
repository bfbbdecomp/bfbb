#ifndef XRENDERSTATE_H
#define XRENDERSTATE_H

#include <rwcore.h>
#include "../../dolphin/include/dolphin/types.h"

void xRenderStateSetDstBlendMode(int xmode);
void xRenderStateSetSrcBlendMode(int xmode);
void xRenderStateSetTexture(RwTexture* texture);

#endif