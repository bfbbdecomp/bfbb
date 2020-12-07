#ifndef XVEC3INLINES_H
#define XVEC3INLINES_H

#include "xVec3.h"

void xVec3Sub(xVec3* o, const xVec3* a, const xVec3* b);
void xVec3Cross(xVec3* o, const xVec3* a, const xVec3* b);
void xVec3Inv(xVec3* o, const xVec3* v);
void xVec3Copy(xVec3* o, const xVec3* v);
extern "C" float32 xVec3Length(const xVec3*);
#endif