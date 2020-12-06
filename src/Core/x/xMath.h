#ifndef XMATH_H
#define XMATH_H

#include <types.h>

#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#define MIN(a, b) (((a) < (b)) ? (a) : (b))

struct xFuncPiece
{
    float32 coef[5];
    float32 end;
    int32 order;
    xFuncPiece* next;
};

void xMathInit();
void xMathExit();
float32 xatof(const char* x);
void xsrand(uint32 seed);
uint32 xrand();
float32 xurand();
uint32 xMathSolveQuadratic(float32 a, float32 b, float32 c, float32* x1, float32* x2);
uint32 xMathSolveCubic(float32 a, float32 b, float32 c, float32 d, float32* x1, float32* x2,
                       float32* x3);
float32 xAngleClamp(float32 a);
float32 xAngleClampFast(float32 a);
float32 xDangleClamp(float32 a);
void xAccelMove(float32& x, float32& v, float32 a, float32 dt, float32 endx, float32 maxv);
float32 xAccelMoveTime(float32 dx, float32 a, float32, float32 maxv);
void xAccelMove(float32& x, float32& v, float32 a, float32 dt, float32 maxv);
void xAccelStop(float32& x, float32& v, float32 a, float32 dt);
float32 xFuncPiece_Eval(xFuncPiece* func, float32 param, xFuncPiece** iterator);
void xFuncPiece_EndPoints(xFuncPiece* func, float32 pi, float32 pf, float32 fi, float32 ff);
void xFuncPiece_ShiftPiece(xFuncPiece* shift, xFuncPiece* func, float32 newZero);

#endif