#ifndef XDRAW_H
#define XDRAW_H

#include "iColor.h"
#include "xMath3.h"

void xDrawSetColor(iColor_tag);
inline void xDrawLine(const xVec3* a, const xVec3* b)
{
}
void xDrawCyl(const xVec3*, F32, F32, U32);
void xDrawSphere2(const xSphere*, U32);
void xDrawSphere2(const xVec3*, F32, U32);
void xDrawOBB(const xBox*, const xMat4x3*);
void xDrawBox(const xBox*);

#endif
