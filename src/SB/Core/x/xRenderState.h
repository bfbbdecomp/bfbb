#ifndef XRENDERSTATE_H
#define XRENDERSTATE_H

#include <rwcore.h>
#include <types.h>

void xRenderStateSetDstBlendMode(int32 xmode);
void xRenderStateSetSrcBlendMode(int32 xmode);
void xRenderStateSetTexture(RwTexture* texture);

#endif