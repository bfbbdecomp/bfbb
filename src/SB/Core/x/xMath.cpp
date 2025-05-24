#include "xMath.h"

#include <types.h>
#include <PowerPC_EABI_Support\MSL_C\MSL_Common\stdlib.h>

#include "xMathInlines.h"

S32 xmath_inited;
S32 xmath_exited;
volatile U32 rndseed; // made this volatile so xrand() matches

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

U32 xMathSolveCubic(F32 a, F32 b, F32 c, F32 d, F32* x1, F32* x2, F32* x3)
{
    F32 arecip; //
    F32 fA; // p
    F32 fB; // q
    F32 fOffset; //
    F32 fDiscr; //
    F32 fHalfB; //
    F32 fTemp;
    F32 fDist;
    F32 fAngle;
    F32 fCos; //
    F32 fSin; //

    F32 temp_f1;
    F32 temp_f1_2;
    F32 temp_f1_3;
    F32 temp_f28_2;
    F32 temp_f29;
    F32 var_f1;

    if (a == 0.0f)
    {
        return xMathSolveQuadratic(b, c, d, x1, x2);
    }
    if (a != 1.0f)
    {
        arecip = 1.0f / a;
        b *= arecip;
        c *= arecip;
        d *= arecip;
    }
    fA = 0.33333334f * ((3.0f * c) - b * b);
    fB = 0.037037037f * ((27.0f * d) + ((2.0f * (b * b * b)) - (9.0f * b * c)));
    fOffset = 0.33333334f * b;
    fDiscr = (0.25f * (fB * fB)) + (0.037037037f * (fA * (fA * fA)));
    fHalfB = 0.5f * fB;
    if ((F32)__fabs(fDiscr) < 0.000001f)
    {
        fDiscr = 0.0f;
    }
    if (fDiscr > 0.0f)
    {
        temp_f1 = xsqrt(fDiscr);
        temp_f1_2 = -fHalfB + temp_f1;
        if (temp_f1_2 >= 0.0f)
        {
            *x1 = xpow(temp_f1_2, 0.33333334f);
        }
        else
        {
            *x1 = -xpow(-temp_f1_2, 0.33333334f);
        }
        temp_f1_3 = -fHalfB - temp_f1;
        if (temp_f1_3 >= 0.0f)
        {
            *x1 += xpow(temp_f1_3, 0.33333334f);
        }
        else
        {
            *x1 -= xpow(-temp_f1_3, 0.33333334f);
        }
        *x1 -= fOffset;
        return 1;
    }
    if (fDiscr < 0.0f)
    {
        temp_f29 = xsqrt(-0.33333334f * fA);
        temp_f28_2 = 0.33333334f * xatan2(xsqrt(-fDiscr), -fHalfB);
        fCos = icos(temp_f28_2);
        fSin = isin(temp_f28_2);
        *x1 = (2.0f * temp_f29 * fCos) - fOffset;
        *x2 = (-temp_f29 * (fCos + 1.7320508f * fSin)) - fOffset;
        *x3 = (-temp_f29 * (fCos - 1.7320508f * fSin)) - fOffset;
        return 3;
    }
    if (fHalfB >= 0.0f)
    {
        var_f1 = -xpow(fHalfB, 0.33333334f);
    }
    else
    {
        var_f1 = xpow(-fHalfB, 0.33333334f);
    }
    *x1 = (2.0f * var_f1) - fOffset;
    *x2 = -var_f1 - fOffset;
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

void xAccelMove(F32& x, F32& v, F32 a, F32 dt, F32 endx, F32 maxv)
{
    F32 offset;
    F32 t1;
    F32 t2;
    F32 oldv; //
    F32 dv; //
    F32 newv; //
    F32 adx;
    F32 diff;
    F32 dx;

    F32 temp_f1_2;
    F32 temp_f28;
    F32 temp_f29;
    F32 var_f0;
    F32 var_f2;
    F32 var_f31;
    S32 var_r0;
    S32 var_r0_2;
    S32 var_r0_3;
    S32 var_r0_4;
    S32 var_r3_2;
    S32 var_r3_3;
    S32 var_r3_4;
    S32 var_r4;
    S8 var_r3;

    temp_f29 = endx - x;
    var_r3 = 1;
    if (!((F32)__fabs(v) < 0.001f))
    {
        if (v < 0.0f)
        {
            var_r4 = 1;
        }
        else
        {
            var_r4 = 0;
        }
        if (temp_f29 < 0.0f)
        {
            var_r0 = 1;
        }
        else
        {
            var_r0 = 0;
        }
        if (var_r0 == var_r4)
        {
            var_r3 = 0;
        }
    }
    if (var_r3 != 0)
    {
        var_f31 = 1e38f;
    }
    else
    {
        var_f31 = temp_f29 / v;
    }
    temp_f28 = (F32)__fabs(v / a);
    if (var_f31 < temp_f28)
    {
        a *= -1.0f;
    }
    if (temp_f29 < 0.0f)
    {
        a *= -1.0f;
    }
    dv = a * dt;
    oldv = v;
    newv = oldv + dv;

    if ((F32)__fabs(newv) == maxv)
    {
        v = newv;
        var_f0 = 0.5f * dv * dt;
    }
    else
    {
        if ((F32)__fabs(oldv) == maxv)
        {
            v = range_limit(newv, -maxv, maxv);
            if (oldv != v)
            {
                temp_f1_2 = v - oldv;
                var_f0 = (0.5f * temp_f1_2 * temp_f1_2) / a;
            }
            else
            {
                var_f0 = 0.0f;
            }
        }
        else
        {
            if (dv < 0.0f)
            {
                var_r3_2 = 1;
            }
            else
            {
                var_r3_2 = 0;
            }
            if (newv < 0.0f)
            {
                var_r0_2 = 1;
            }
            else
            {
                var_r0_2 = 0;
            }
            if (var_r0_2 != var_r3_2)
            {
                v = newv;
                var_f0 = 0.5f * dv * dt;
            }
            else
            {
                var_f0 = 0.0f;
            }
        }
    }
    var_f2 = (oldv * dt) + var_f0;
    if (var_f31 > temp_f28)
    {
        if (temp_f29 < 0.0f)
        {
            var_r3_3 = 1;
        }
        else
        {
            var_r3_3 = 0;
        }
        if (var_f2 < 0.0f)
        {
            var_r0_3 = 1;
        }
        else
        {
            var_r0_3 = 0;
        }
        if ((var_r0_3 == var_r3_3) && ((F32)__fabs(var_f2) > (F32)__fabs(temp_f29)))
        {
            var_f2 = temp_f29;
            v = 0.0f;
        }
    }
    else
    {
        if (temp_f29 < 0.0f)
        {
            var_r3_4 = 1;
        }
        else
        {
            var_r3_4 = 0;
        }
        if (var_f2 < 0.0f)
        {
            var_r0_4 = 1;
        }
        else
        {
            var_r0_4 = 0;
        }
        if (var_r0_4 != var_r3_4)
        {
            var_f2 = temp_f29;
            v = 0.0f;
        }
    }
    x += var_f2;
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

void xAccelMove(F32& x, F32& v, F32 a, F32 dt, F32 maxv)
{
    U32 bn; // r10
    U32 bp; // r7
    U32 aa; // r29+0xC
    F32 diff;
    F32 dv;

    if ((F32)__fabs(v) > (F32)__fabs(maxv))
    {
        if (v < 0.0f)
        {
            if (a > 0.0f)
            {
                a = -a;
            }
        }
        else if (a < 0.0f)
        {
            a = -a;
        }
        a = -a;
    }
    if (a < 0.0f)
    {
        if (maxv > 0.0f)
        {
            maxv = -maxv;
        }
    }
    else if (maxv < 0.0f)
    {
        maxv = -maxv;
    }
    diff = maxv - v;
    dv = a * dt;
    if ((F32)__fabs(diff) < (F32)__fabs(dv))
    {
        x += (v * dt) + ((0.5f * diff * diff) / a);
        v = maxv;
        return;
    }
    x += (dt * (0.5f * a * dt)) + (v * dt);
    v += dv;
}

void xAccelStop(F32& x, F32& v, F32 a, F32 dt)
{
    S32 aa; // From DWARF, currently unused.
    F32 oldv;

    S32 var_r0;
    S32 var_r5;

    oldv = v;
    if (!(oldv >= -0.00001f) || !(oldv <= 0.00001f))
    {
        if (oldv < 0.0f)
        {
            if (a > 0.0f)
            {
                a = -a;
            }
        }
        else if (a < 0.0f)
        {
            a = -a;
        }

        v += -a * dt;

        if (v < 0.0f)
        {
            var_r5 = 1;
        }
        else
        {
            var_r5 = 0;
        }

        if (oldv < 0.0f)
        {
            var_r0 = 1;
        }
        else
        {
            var_r0 = 0;
        }

        if (var_r0 == var_r5)
        {
            x += (-a * (0.5f * dt * dt)) + (oldv * dt);
            return;
        }

        if (!(-a >= -0.00001f) || !(-a <= 0.00001f))
        {
            x -= (0.5f * oldv * oldv) / -a;
        }
        v = 0.0f;
    }
}

void xFuncPiece_EndPoints(xFuncPiece* func, F32 pi, F32 pf, F32 fi, F32 ff)
{
    F32 xfinv; // from DWARF data

    func->end = pf - pi;
    func->order = 1;
    func->coef[0] = fi;
    func->coef[1] = (ff - fi) * (1.0f / func->end);
    xFuncPiece_ShiftPiece(func, func, -pi);
}
