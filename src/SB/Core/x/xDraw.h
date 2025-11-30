#ifndef XDRAW_H
#define XDRAW_H

#include "iColor.h"
#include "xMath3.h"

void xDrawSetColor(iColor_tag);
inline void xDrawLine(const xVec3* a, const xVec3* b)
{
}
void xDrawCyl(const xVec3*, F32, F32, U32);
void xDrawSphere(const xVec3* center, F32 r, U32 flags);
void xDrawSphere2(const xSphere* sph, U32 lod);
void xDrawSphere2(const xVec3* pos, F32 r, U32 lod);
void xDrawOBB(const xBox* b, const xMat4x3* m);
void xDrawBox(const xBox* b);

#endif
