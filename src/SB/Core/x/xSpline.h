#ifndef XSPLINE_H
#define XSPLINE_H

#include "xMath3.h"

struct xCoef
{
    F32 a[4];
};

struct xCoef3
{
    xCoef x;
    xCoef y;
    xCoef z;
};

struct xSpline3
{
    U16 type; // 0x0
    U16 flags; // 0x2
    U32 N; // 0x4
    U32 allocN; // 0x8
    xVec3* points; // 0xC
    F32* time; // 0x10
    xVec3* p12; // 0x14
    xVec3* bctrl; // 0x18
    F32* knot; // 0x1C
    xCoef3* coef; // 0x20
    U32 arcSample; // 0x24
    F32* arcLength; // 0x28
};

void Tridiag_Solve(F32* a, F32* b, F32* c, xVec3* d, xVec3* x, S32 n);
void Interpolate_Bspline(xVec3* data, xVec3* control, F32* knots, U32 nodata);
F32 ArcLength3(class xCoef3* coef, F64 ustart, F64 uend);
void EvalCoef3(xCoef3* coef, F32 u, U32 deriv, xVec3* o);
void BasisToCoef3(xCoef3* coef, F32 (*N)[4], xVec3* v1, xVec3* v2, xVec3* v3, xVec3* v4);
void CoefToUnity3(xCoef3* coef1, xCoef3* coef2, F32 f1, F32 f2);
void BasisBspline(F32 (*N)[4], F32* t);
F32 ClampBspline(xSpline3* spl, F32 u);
S32 SegBspline(xSpline3* spl, F32 u);
void EvalBspline3(xSpline3* spl, F32 u, U32 deriv, xVec3* o);
xCoef3* CoefSeg3(xSpline3* spl, U32 seg, xCoef3* tempCoef);
void xSpline3_EvalSeg(xSpline3* spl, F32 u, U32 deriv, xVec3* o);
F32 ArcEvalIterate(xSpline3* spl, F32 s, U32 deriv, xVec3* o, U32 iterations);
F32 xSpline3_EvalArcApprox(xSpline3* spl, F32 s, U32 deriv, xVec3* o);
void xSpline3_ArcInit(xSpline3* spl, U32 sample);
xSpline3* AllocSpline3(xVec3* points, F32* time, U32 numpoints, U32 numalloc, U32 flags, U32 type);
xSpline3* xSpline3_Bezier(xVec3* points, F32* time, U32 numpoints, U32 numalloc, xVec3* p1,
                          xVec3* p2);
void xSpline3_Update(xSpline3* spl);
void xSpline3_Catmullize(xSpline3* spl);

inline F32 xSpline3_ArcTotal(xSpline3* spl)
{
    return spl->arcLength[spl->N * spl->arcSample - 1];
}

#endif
