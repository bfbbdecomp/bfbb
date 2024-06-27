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
void xVec3SubFrom(xVec3* o, const xVec3* v);
void xVec3Lerp(xVec3* o, const xVec3* a, const xVec3* b, float32 t);
void xVec3ScaleC(xVec3* o, const xVec3* v, float32 x, float32 y, float32 z);
float32 xVec3Dist(const xVec3* a, const xVec3* b);
float32 xVec3Dist2(const xVec3* vecA, const xVec3* vecB);
float32 xVec3Length2(const xVec3* vec);
float32 xVec3LengthFast(float32 x, float32 y, float32 z);
void xVec3AddScaled(xVec3* o, const xVec3* v, float32 s);

#endif
