#ifndef XRENDERSTATE_H
#define XRENDERSTATE_H

#include <rwcore.h>
#include <types.h>

void xRenderStateSetDstBlendMode(S32 xmode);
void xRenderStateSetSrcBlendMode(S32 xmode);
void xRenderStateSetTexture(RwTexture* texture);

#endif
