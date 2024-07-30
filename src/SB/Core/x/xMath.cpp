#include "xMath.h"

#include <types.h>
#include <stdlib.h>

#include "xMathInlines.h"

extern S32 xmath_inited;
extern S32 xmath_exited;
extern volatile U32 rndseed; // made this volatile so xrand() matches

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

F32 xatof(const char* x)
{
    return atof(x);
}

void xsrand(U32 seed)
{
    rndseed = seed;
}

U32 xrand()
{
    rndseed = rndseed * 1103515245 + 12345;
    return rndseed;
}

F32 xurand()
{
    return xrand() * 2.3283064e-10f;
}

U32 xMathSolveQuadratic(F32 a, F32 b, F32 c, F32* x1, F32* x2)
{
    F32 d;
    F32 dx;
    F32 p;

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

F32 xAngleClamp(F32 a)
{
    F32 rad360 = 2 * PI;
    F32 rem = xfmod(a, rad360);

    if (rem < 0.0f)
    {
        return rem + rad360;
    }

    return rem;
}

F32 xAngleClampFast(F32 a)
{
    F32 rad360 = (2 * PI);
    
    if (a < 0.0f)
    {
        return a + rad360;
    }

    if (a >= rad360)
    {
        return a - rad360;
    }

    return a;
}

F32 xDangleClamp(F32 a)
{
    F32 rad360 = 2 * PI;
    F32 rem = xfmod(a, rad360);
    
    if (rem >= PI)
    {
        return rem - rad360;
    }

    if (rem < -PI)
    {
        return rem + rad360;
    }

    return rem;
}

F32 xAccelMoveTime(F32 dx, F32 a, F32, F32 maxv)
{
    float time = a;
    float atime = maxv / time;
    dx *= 0.5f;
    float adist = 0.5f * time * atime * atime;

    dx = (adist < dx) ? xsqrt(2.0f * dx / time) : (atime + (dx - adist) / maxv);

    return 2.0f * dx;
}