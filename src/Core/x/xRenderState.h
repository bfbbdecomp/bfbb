#ifndef XRENDERSTATE_H
#define XRENDERSTATE_H

#include <rwcore.h>

void xRenderStateSetDstBlendMode(int xmode);
void xRenderStateSetSrcBlendMode(int xmode);
void xRenderStateSetTexture(RwTexture* texture);

#endif