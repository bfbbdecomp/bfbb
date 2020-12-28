#ifndef XVEC3INLINES_H
#define XVEC3INLINES_H

#include "xVec3.h"

void xVec3Sub(xVec3* o, const xVec3* a, const xVec3* b);
void xVec3Cross(xVec3* o, const xVec3* a, const xVec3* b);
void xVec3Inv(xVec3* o, const xVec3* v);
void xVec3Copy(xVec3* o, const xVec3* v);
float32 xVec3Length(const xVec3* v);
void xVec3SMul(xVec3* o, const xVec3* v, float32 s);
void xVec3Add(xVec3* o, const xVec3* a, const xVec3* b);
void xVec3SMulBy(xVec3* v, float32 s);
void xVec3Init(xVec3* v, float32 _x, float32 _y, float32 _z);
void xVec3AddTo(xVec3* o, const xVec3* v);

#endif