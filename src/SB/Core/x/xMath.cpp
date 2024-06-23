#include "xMath.h"

#include <types.h>
#include <stdlib.h>

#include "xMathInlines.h"

extern float32 lbl_803CCE0C; // 0.5f
extern float32 lbl_803CCE14; // 2.0f
extern float32 lbl_803CCE18; // 0.0f
extern float32 lbl_803CCE54; // 3.1415927f
extern float32 lbl_803CCE5C; // 6.2831855f
extern float32 lbl_803CCE60; // -3.1415927f

extern int32 xmath_inited;
extern int32 xmath_exited;
extern volatile uint32 rndseed; // made this volatile so xrand() matches

void xMathInit()
{
    if (!xmath_inited)
    {
        xmath_inited = 1;
        rndseed = 0;
    }
}

void xMathExit()
{
    if (!xmath_exited)
    {
        xmath_exited = 1;
    }
}

float32 xatof(const char* x)
{
    return atof(x);
}

void xsrand(uint32 seed)
{
    rndseed = seed;
}

uint32 xrand()
{
    rndseed = rndseed * 1103515245 + 12345;
    return rndseed;
}

#ifdef NON_MATCHING
float32 xurand()
{
    return xrand() * 2.3283064e-10f;
}
#endif

#ifdef NON_MATCHING
uint32 xMathSolveQuadratic(float32 a, float32 b, float32 c, float32* x1, float32* x2)
{
    float32 d;
    float32 dx;
    float32 p;

    if (a == 0.0f)
    {
        if (b == 0.0f)
        {
            return 0;
        }

        *x1 = -c / b;
        return 1;
    }

    d = b * b - (4.0f * a * c);

    if (d < 0.0f)
    {
        return 0;
    }

    dx = 1.0f / (2.0f * a);

    *x1 = -b * dx;

    if (d == 0.0f)
    {
        return 1;
    }

    *x2 = *x1;

    p = dx * xsqrt(d);

    if (a > 0.0f)
    {
        *x1 -= p;
        *x2 += p;
    }
    else
    {
        *x1 += p;
        *x2 -= p;
    }

    return 2;
}
#endif

float32 xAngleClamp(float32 a)
{
    float32 b;

    b = xfmod(a, lbl_803CCE5C);

    if (b < lbl_803CCE18)
    {
        return b + lbl_803CCE5C;
    }

    return b;
}

float32 xAngleClampFast(float32 a)
{
    if (a < lbl_803CCE18)
    {
        return a + lbl_803CCE5C;
    }

    if (a >= lbl_803CCE5C)
    {
        return a - lbl_803CCE5C;
    }

    return a;
}

float32 xDangleClamp(float32 a)
{
    float32 b;

    b = xfmod(a, lbl_803CCE5C);

    if (b >= lbl_803CCE54)
    {
        return b - lbl_803CCE5C;
    }

    if (b < lbl_803CCE60)
    {
        return b + lbl_803CCE5C;
    }

    return b;
}

#ifdef NON_MATCHING
float32 xAccelMoveTime(float32 dx, float32 a, float32, float32 maxv)
{
    //float32 time;
    //float32 atime;
    //float32 adist;

    float f5 = maxv / a;
    float f1 = dx * lbl_803CCE0C;
    float f0 = f5 * (lbl_803CCE0C * a * f5);

    f1 = (f0 < f1) ? xsqrt(lbl_803CCE14 * f1 / a) : (f5 + (f1 - f0) / maxv);

    return lbl_803CCE14 * f1;
}
#endif
