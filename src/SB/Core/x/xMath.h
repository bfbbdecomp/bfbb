#ifndef XMATH_H
#define XMATH_H

#include <types.h>

#include "iMath.h"

#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#define MIN(a, b) (((a) < (b)) ? (a) : (b))
#define xabs(x) iabs(x)

#define xeq(a, b, e) (xabs((a) - (b)) <= (e))

#define CLAMP(x, a, b) (MAX((a), MIN((x), (b))))

#define SQR(x) ((x) * (x))

#define ALIGN(x, a) ((x) + ((a)-1) & ~((a)-1))

// Override these to point to their corresponding symbols in .sdata2
// For example:
//     #undef PI
//     #undef ONEEIGHTY
//     #define PI _771_1
//     #define ONEEIGHTY _778_0
#define PI 3.1415927f
#define ONEEIGHTY 180.0f

#define DEG2RAD(x) ((PI) * (x) / (ONEEIGHTY))
#define RAD2DEG(x) ((ONEEIGHTY) * (x) / (PI))

#define FLOAT_MAX 1e38f
#define FLOAT_MIN -1e38f

struct xFuncPiece
{
    F32 coef[5];
    F32 end;
    S32 order;
    xFuncPiece* next;
};

F32 xlog(F32 f);

void xMathInit();
void xMathExit();
F32 xatof(const char* x);
void xsrand(U32 seed);
U32 xrand();
F32 xurand();
U32 xMathSolveQuadratic(F32 a, F32 b, F32 c, F32* x1, F32* x2);
U32 xMathSolveCubic(F32 a, F32 b, F32 c, F32 d, F32* x1, F32* x2, F32* x3);
F32 xAngleClamp(F32 a);
F32 xAngleClampFast(F32 a);
F32 xDangleClamp(F32 a);
void xAccelMove(F32& x, F32& v, F32 a, F32 dt, F32 endx, F32 maxv);
F32 xAccelMoveTime(F32 dx, F32 a, F32, F32 maxv);
void xAccelMove(F32& x, F32& v, F32 a, F32 dt, F32 maxv);
void xAccelStop(F32& x, F32& v, F32 a, F32 dt);
F32 xFuncPiece_Eval(xFuncPiece* func, F32 param, xFuncPiece** iterator);
void xFuncPiece_EndPoints(xFuncPiece* func, F32 pi, F32 pf, F32 fi, F32 ff);
void xFuncPiece_ShiftPiece(xFuncPiece* shift, xFuncPiece* func, F32 newZero);
F32 xSCurve(F32 t, F32 softness);
F32 xSCurve(F32 t);
void xsqrtfast(F32& dst, F32 num);

F32 xrmod(F32 ang);

template <class T> T range_limit(T v, T minv, T maxv);

#endif
