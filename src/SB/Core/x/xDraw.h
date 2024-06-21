#ifndef XDRAW_H
#define XDRAW_H

#include "iColor.h"
#include "xMath3.h"

void xDrawSetColor(iColor_tag);
void xDrawSphere2(const xSphere*, uint32);
void xDrawOBB(const xBox*, const xMat4x3*);
void xDrawBox(const xBox*);

#endif
