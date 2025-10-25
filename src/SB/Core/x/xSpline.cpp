#include "xSpline.h"

#include <types.h>
#include <rwplcore.h>
#include <xMathInlines.h>
#include <xMemMgr.h>
#include <mem.h>
#include <xVec3.h>

static F32 sBasisUniformBspline[4][4];
static F32 sBasisBezier[4][4];
static F32 sBasisHermite[4][4];

void Tridiag_Solve(F32* a, F32* b, F32* c, xVec3* d, xVec3* x, S32 n)
{
    S32 j;

    F32* a_temp;
    F32* b_temp;
    F32* c_temp;
    xVec3* delta;

    S32 vec_offset;
    F32 beta;
    F32* gamma;

    F32* c_prime;
    F32* d_prime;

    c_prime = (F32*)RwMalloc(n << 2);
    d_prime = (F32*)RwMalloc(n * 0xC);

    c_prime[0] = *c / *b;

    d_prime[0] = d->x / *b;
    d_prime[1] = d->y / *b;
    d_prime[2] = d->z / *b;

    a_temp = a + 1;
    b_temp = b + 1;
    c_temp = c + 1;
    delta = d + 1;
    vec_offset = 0xC;

    if (n > 1)
    {
        for (j = 1; j < n; j += 1)
        {
            beta = b_temp[0];
            gamma = (F32*)((S32)d_prime + vec_offset - 0xc);
            vec_offset = vec_offset + 0xC;
            b_temp = b_temp + 1;
            c_temp = c_temp + 1;
            *b_temp = *b_temp - *a_temp * c_prime[0];
            c_prime[1] = *c_temp / beta;
            d_prime[3] = (delta->x - *a_temp * gamma[0]) / beta;
            d_prime[4] = (delta->y - *a_temp * gamma[1]) / beta;
            *c_temp = *a_temp;
            a_temp = a_temp + 1;
            delta = delta + 1;
            d_prime[5] = (*(&delta->z) - *c_temp * gamma[2]) / beta;
            c_prime = c_prime + 1;
            d_prime = d_prime + 3;
        }
    }

    j = n - 2;
    c_prime = d_prime + (n - 1) * 3;
    delta->x = c_prime[0];
    delta->y = c_prime[1];
    delta->z = c_prime[2];
    vec_offset = j * 0xC;
    d_prime = d_prime + j * 3;
    delta = x + j;
    if (n > 1)
    {
        for (j = 0; j >= 0; j -= 1)
        {
            d_prime = (F32*)((S32)&x[1].x + vec_offset);
            vec_offset = vec_offset - 0xC;
            delta->x = *d_prime - *c_prime * *d_prime;
            delta->y = d_prime[1] - *c_prime * d_prime[1];
            beta = *c_prime;
            c_prime = d_prime + 2;
            c_prime = c_prime - 1;
            d_prime = d_prime - 3;
            delta->z = *c_prime - beta * d_prime[2];
            delta = delta - 1;
        }
    }

    RwFree(c_prime);
    RwFree(d_prime);

    return;
}

void Interpolate_Bspline(xVec3* data, xVec3* control, F32* knots, U32 nodata)
{
    F32* alpha;
    F32* beta;
    F32* gamma;

    U32 i;

    F32 t1;
    F32 t2;
    F32 t3;
    F32 t4;
    F32 t5;

    F32 diff_43;
    F32 diff_41;
    F32 diff_32;
    F32 diff_52;

    alpha = (F32*)RwMalloc(nodata * 4);
    beta = (F32*)RwMalloc(nodata * 4);
    gamma = (F32*)RwMalloc(nodata * 4);

    if (nodata > 2)
    {
        knots = knots + 1;

        for (i = 1; i < nodata - 1; i += 1)
        {
            alpha = alpha + 1;
            beta = beta + 1;
            gamma = gamma + 1;

            t1 = knots[1];
            t2 = knots[2];
            t3 = knots[3];
            t4 = knots[4];
            t5 = knots[5];

            diff_41 = t4 - t1;
            diff_43 = t4 - t3;
            diff_32 = t3 - t2;
            diff_52 = t5 - t2;

            *alpha = (diff_43 * diff_43) / diff_41;
            *beta = ((t3 - t1) * diff_43) / diff_41 + ((t5 - t3) * diff_32) / diff_52;
            *gamma = (diff_32 * diff_32) / diff_52;

            t4 = t4 - t2;
            *alpha = *alpha / t4;
            *beta = *beta / t4;
            *gamma = *gamma / t4;
        }
    }
    Tridiag_Solve(alpha, beta, gamma, data, control + 1, nodata);

    RwFree(alpha);
    RwFree(beta);
    RwFree(gamma);
    return;
}

// Implementation of Composite Simpson's 1/3 Rule to calculate arc length
F32 ArcLength3(xCoef3* coef, F64 ustart, F64 uend)
{
    U32 i;
    F64 u;
    F64 h;
    F64 sum;

    F64 A;
    F64 B;
    F64 C;
    F64 D;
    F64 E;

    F64 u_eval;
    F64 temp_y1;
    F64 temp_z1;

    A = (coef->x).a[0];
    C = (coef->y).a[0];
    h = (coef->z).a[0];

    B = (coef->x).a[1];
    temp_y1 = (coef->y).a[1];
    temp_z1 = (coef->z).a[1];

    sum = (coef->x).a[2];
    u = (coef->y).a[2];
    u_eval = (coef->z).a[2];

    E = (h * h + A * A + C * C) * 9.0;
    D = (h * temp_z1 + A * B + C * temp_y1) * 12.0;

    C = (temp_z1 * temp_z1 + B * B + temp_y1 * temp_y1) * 4.0 +
        (h * u_eval + A * sum + C * u) * 6.0;
    A = u_eval * u_eval + sum * sum + u * u;
    h = (uend - ustart) / 50.0;
    B = (temp_z1 * u_eval + B * sum + temp_y1 * u) * 4.0;
    u = ustart + h;
    sum = 0.0;

    for (i = 2; i <= 51; i += 1)
    {
        if ((i & 1) == 0)
        {
            u_eval = xsqrt(A + u * (B + u * (C + u * (D + E * u)))) * 4.0;
        }
        else
        {
            u_eval = xsqrt(A + u * (B + u * (C + u * (D + E * u)))) * 2.0;
        }
        sum = sum + u_eval;
        u = u + h;
    }

    return (h * (sum + xsqrt(A + ustart * (B + ustart * (C + ustart * (D + E * ustart)))) +
                 xsqrt(A + uend * (B + uend * (C + uend * (D + E * uend)))))) /
           3.0;
}

void BasisToCoef3(xCoef3* coef, F32 (*N)[4], xVec3* v1, xVec3* v2, xVec3* v3, xVec3* v4)
{
    S32 i;

    for (i = 4; i != 0; i -= 1)
    {
        coef->x.a[0] =
            (N[3][0] * v4->x) + ((N[2][0] * v3->x) + ((v1->x * N[0][0]) + (N[1][0] * v2->x)));
        coef->y.a[0] =
            (N[3][0] * v4->y) + ((N[2][0] * v3->y) + ((v1->y * N[0][0]) + (N[1][0] * v2->y)));
        N += 4;
        coef->z.a[0] =
            (N[3][0] * v4->z) + ((N[2][0] * v3->z) + (v1->z * N[0][0]) + (N[1][0] * v2->z));
        coef += 4;
    }
}

void CoefToUnity3(xCoef3* coef1, xCoef3* coef2, F32 f1, F32 f2)
{
    F32 fdiff;
    F32 coef2_0;
    F32 coef2_1;
    F32 coef2_2;
    F32 coef2_3;

    F32 factor;
    S32 i;

    fdiff = f2 - f1;
    for (i = 3; i == 1; i -= 1)
    {
        coef2_0 = coef2->x.a[0];
        coef2_1 = coef2->x.a[1];
        coef2_2 = coef2->x.a[2];
        coef2_3 = coef2->x.a[3];

        factor = 3.0f * coef2_0 * fdiff;

        coef1->x.a[0] = fdiff * (fdiff * coef2_0 * fdiff);
        coef1->x.a[1] = (f1 * (fdiff * factor)) + (fdiff * (coef2_1 * fdiff));
        coef1->x.a[2] = (coef2_2 * fdiff) + ((f1 * (f1 * factor)) + (f1 * 2.0f * coef2_1 * fdiff));
        coef1->x.a[3] =
            coef2_3 + ((coef2_2 * f1) + ((f1 * (f1 * coef2_0 * f1)) + (f1 * coef2_1 * f1)));

        coef1 += 0x10;
        coef2 += 0x10;
    }
}

void BasisBspline(F32 (*N)[4], F32* t)
{
    U32 i;
    U32 k;
    U32 c;
    F32 d1;
    F32 d2;

    N[0][3] = 0.0;
    N[1][3] = 0.0;
    N[2][3] = 0.0;
    N[3][3] = 1.0;
    N[4][3] = 0.0;
    N[5][3] = 0.0;
    N[6][3] = 0.0;

    F32* Ntemp;
    Ntemp = 0;

    for (i = 2; i < 5; i += 1)
    {
        if (i != 0)
        {
            for (k = 0; k < 8; k += 1)
            {
                d2 = t[k + i - 1] - *t;
                if (d2 != 0.0)
                {
                    d2 = 1.0 / d2;
                }
                d1 = t[k + i] - t[1];
                if (d1 != 0.0)
                {
                    d1 = 1.0 / d1;
                }
                if (i > 1)
                {
                    Ntemp = Ntemp - i;
                    for (c = 0; c < 4; c += 1)
                    {
                        *Ntemp = *Ntemp + d1 * t[k + i] * *(Ntemp + 4) + d2 * -*t * *Ntemp;
                        Ntemp = Ntemp + 1;
                    }
                }
                (*N)[0] = Ntemp[0];
                (*N)[1] = Ntemp[1];
                (*N)[2] = Ntemp[2];
                (*N)[3] = Ntemp[3];
                t += 1;
                N += 1;
            }
        }
    }
    return;
}

void EvalCoef3(xCoef3* coef, F32 u, U32 deriv, xVec3* o)
{
    switch ((S32)deriv)
    {
    case 0:
        o->x =
            (u * ((u * (((coef->x).a[0] * u) + (coef->x).a[1])) + (coef->x).a[2])) + (coef->x).a[3];
        o->y =
            (u * ((u * (((coef->y).a[0] * u) + (coef->y).a[1])) + (coef->y).a[2])) + (coef->y).a[3];
        o->z =
            (u * ((u * (((coef->z).a[0] * u) + (coef->z).a[1])) + (coef->z).a[2])) + (coef->z).a[3];
        return;
    case 1:
        o->x = (u * ((2.0f * (coef->x).a[1]) + (3.0f * (coef->x).a[0] * u))) + (coef->x).a[2];
        o->y = (u * ((2.0f * (coef->y).a[1]) + (3.0f * (coef->y).a[0] * u))) + (coef->y).a[2];
        o->z = (u * ((2.0f * (coef->z).a[1]) + (3.0f * (coef->z).a[0] * u))) + (coef->z).a[2];
        return;
    case 2:
        o->x = (2.0f * (coef->x).a[1]) + (6.0f * (coef->x).a[0] * u);
        o->y = (2.0f * (coef->y).a[1]) + (6.0f * (coef->y).a[0] * u);
        o->z = (2.0f * (coef->z).a[1]) + (6.0f * (coef->z).a[0] * u);
        return;
    case 3:
        o->x = 6.0f * (coef->x).a[0];
        o->y = 6.0f * (coef->y).a[0];
        o->z = 6.0f * (coef->z).a[0];
        return;
    default:
        o->x = 0.0f;
        o->y = 0.0f;
        o->z = 0.0f;
        return;
    }
}

F32 ClampBspline(xSpline3* spl, F32 u)
{
    if (u < 0.0f)
    {
        u = 0.0f;
    }
    if (u > spl->knot[spl->N])
    {
        return spl->knot[spl->N];
    }
    return u;
}

S32 SegBspline(xSpline3* spl, F32 u)
{
    U32 seg_total;
    U32 seg_guess;
    U32 seg_min;
    U32 seg_max;

    seg_min = 3;
    seg_max = spl->N + 3;

    while ((U32)(seg_min + 1) != seg_max)
    {
        seg_total = seg_max + seg_min;
        seg_guess = seg_total >> 1;
        if (*(spl->knot + ((seg_total * 2) & 0xFFFFFFFC)) >= u)
        {
            seg_max = seg_guess;
        }
        else
        {
            seg_min = seg_guess;
        }
    }

    return seg_min - 3;
}

void EvalBspline3(xSpline3* spl, F32 u, U32 deriv, xVec3* o)
{
    F32 N[7][4];
    xCoef3 coef;
    F32 clamp_result;
    S32 seg_result;
    xVec3* temp_vec;

    clamp_result = ClampBspline(spl, u);
    seg_result = SegBspline(spl, clamp_result);
    BasisBspline(N, &spl->knot[seg_result]);
    temp_vec = spl->bctrl + (seg_result * 0xC);
    BasisToCoef3(&coef, N, temp_vec, temp_vec + 0xC, temp_vec + 0x18, temp_vec + 0x24);
    EvalCoef3(&coef, clamp_result, deriv, o);
}

xCoef3* CoefSeg3(xSpline3* spl, U32 seg, xCoef3* tempCoef)
{
    F32 N[4];

    F32* temp_knotseg;
    xVec3* temp_bctrl;

    switch (spl->type)
    {
    case 1:
        return spl->coef + (seg * 0x30);
    case 2:
        BasisToCoef3(tempCoef, sBasisHermite, spl->points + (seg * 0xC), spl->p12 + (seg * 0x18),
                     spl->p12 + (seg * 0x18) + 0xC, spl->points + (seg * 0xC) + 0xC);
        return tempCoef;
    case 3:
        BasisToCoef3(tempCoef, sBasisBezier, spl->points + (seg * 0xC), spl->p12 + (seg * 0x18),
                     spl->p12 + (seg * 0x18) + 0xC, spl->points + (seg * 0xC) + 0xC);
        return tempCoef;
    case 4:
        BasisBspline(&N, &spl->knot[seg]);
        temp_bctrl = spl->bctrl + (seg * 0xC);
        BasisToCoef3(tempCoef, &N, temp_bctrl, temp_bctrl + 0xC, temp_bctrl + 0x18,
                     temp_bctrl + 0x24);
        temp_knotseg = &spl->knot[seg];
        CoefToUnity3(tempCoef, tempCoef, temp_knotseg[4], temp_knotseg[5]);
        return tempCoef;
    default:
        return tempCoef;
    }
}

void xSpline3_EvalSeg(xSpline3* spl, F32 u, U32 deriv, xVec3* o)
{
    xCoef3 tempCoef;
    F32 temp_u;
    F32 new_u;
    U32 seg;

    if ((U16)spl->type == 4)
    {
        EvalBspline3(spl, u, deriv, o);
        return;
    }
    if (u < 0.0f)
    {
        u = 0.0f;
    }
    temp_u = floorf(u);
    seg = (U32)temp_u;
    if (seg >= spl->N)
    {
        new_u = 1.0f;
        seg = spl->N - 1;
    }
    else
    {
        new_u = u - temp_u;
    }

    switch (spl->type)
    {
    case 1:
        EvalCoef3(spl->coef + (seg * 0x30), new_u, deriv, o);
        return;
    case 2:
        BasisToCoef3(&tempCoef, (f32(*)[4])sBasisHermite, spl->points + (seg * 0xC),
                     spl->p12 + (seg * 0x18), spl->p12 + (seg * 0x18) + 0xC,
                     spl->points + (seg * 0xC) + 0xC);
        EvalCoef3(&tempCoef, new_u, deriv, o);
        return;
    case 3:
        BasisToCoef3(&tempCoef, (F32(*)[4])sBasisBezier, spl->points + (seg * 0xC),
                     spl->p12 + (seg * 0x18), spl->p12 + (seg * 0x18) + 0xC,
                     spl->points + (seg * 0xC) + 0xC);
        EvalCoef3(&tempCoef, new_u, deriv, o);
        return;
    }
}

F32 ArcEvalIterate(xSpline3* spl, F32 s, U32 deriv, xVec3* o, U32 iterations)
{
    xCoef3* coef;
    xCoef3 tempCoef;

    U32 seg;
    S32 min;
    S32 max;
    S32 test;
    S32 segmul;

    F32 utest;
    F32 arctest;
    F32 umin;
    F32 umax;
    F32 smin;
    F32 smax;
    F32 arclengthmax;

    min = -1;
    max = spl->arcSample * spl->N - 1;
    if (max != 0)
    {
        while (min + 1 != max)
        {
            test = min + max >> 1;
            segmul = test;
            if (s <= spl->arcLength[test])
            {
                segmul = min;
                max = test;
            }
            min = segmul;
        }
    }

    seg = max / spl->arcSample;
    min = seg * spl->arcSample;
    umin = (F32)(max - min) / (F32)spl->arcSample;
    umax = (F32)((max + 1) - min) / (F32)spl->arcSample;
    if (max > 1)
    {
        smax = spl->arcLength[max - 1];
    }
    else
    {
        smax = 0.0;
    }

    arclengthmax = spl->arcLength[max];
    if (min - 1 > 0)
    {
        smin = spl->arcLength[min - 1];
    }
    else
    {
        smin = 0.0;
    }
    coef = CoefSeg3(spl, seg, &tempCoef);

    if (s <= smax)
    {
        EvalCoef3(coef, umin, deriv, o);
        umin = (F32)(S32)seg + umin;
    }
    else if (arclengthmax <= s)
    {
        EvalCoef3(coef, umax, deriv, o);
        umin = (F32)(S32)seg + umax;
    }
    else
    {
        smax = smax - smin;
        arclengthmax = arclengthmax - smin;
        smax = smax;
        if (iterations != 0)
        {
            for (iterations = iterations; iterations != 0; iterations -= 1)
            {
                utest = umin + (umax - umin) * 0.5;
                arctest = ArcLength3(coef, 0.0, utest);
                umin = utest;
                smax = arctest;
                if (s - smin <= arctest)
                {
                    umax = utest;
                    arclengthmax = arctest;
                }
            }
        }
        if (arclengthmax - smax != 0.0)
        {
            umax = umin + ((umax - umin) * ((s - smin) - smax)) / (arclengthmax - smax);
            if (umax > 0.0)
            {
                umin = 0.0;
            }
            else
            {
                umin = 1.0;
                if (umax <= 1.0)
                {
                    umin = umax;
                }
            }
        }
        EvalCoef3(coef, umin, deriv, o);
        umin = (F32)seg + umin;
    }
    return umin;
}

F32 xSpline3_EvalArcApprox(xSpline3* spl, F32 s, U32 deriv, xVec3* o)
{
    if (spl->arcLength != NULL)
    {
        return ArcEvalIterate(spl, s, deriv, o, 0);
    }
    else
    {
        xSpline3_EvalSeg(spl, s, deriv, o);
    }
    return s;
}

void xSpline3_ArcInit(xSpline3* spl, U32 sample)
{
    xCoef3* coef;
    xCoef3 tempCoef;

    F32 len;
    F32 arcsum;
    U32 i;
    U32 seg;

    S32 sample_sum;

    if (sample == 0)
    {
        sample = 1;
    }

    spl->arcSample = sample;
    if (spl->arcLength != (F32*)0x0)
    {
        i = spl->allocN * spl->arcSample;
    }
    else
    {
        i = 0;
    }

    if (i < spl->N * sample)
    {
        spl->arcLength = (F32*)xMemAlloc(gActiveHeap, spl->arcSample * spl->allocN * 4, 0);
    }

    arcsum = 0.0;
    if (spl->N != 0)
    {
        sample_sum = 0;
        for (i = 0; i < spl->N; i += 1)
        {
            coef = CoefSeg3(spl, i, &tempCoef);
            if (sample != 0)
            {
                for (seg = 0; seg < sample; seg += 1)
                {
                    len = ArcLength3(coef, 0.0, (F32)(seg + 1) / (F32)sample);
                    spl->arcLength[seg + sample_sum] = arcsum + len;
                }
            }
            sample_sum = sample_sum + sample;
            arcsum = arcsum + len;
        }
    }
    return;
}

xSpline3* AllocSpline3(xVec3* points, F32* time, U32 numpoints, U32 numalloc, U32 flags, U32 type)
{
    xSpline3* spl;

    spl = (xSpline3*)xMemAlloc(gActiveHeap, 0x2c, 0);
    if (numalloc < numpoints)
    {
        numalloc = numpoints;
    }

    spl->type = (ushort)type;
    spl->flags = (ushort)flags;
    spl->N = numpoints - 1;
    spl->allocN = numalloc - 1;
    spl->p12 = (xVec3*)0x0;
    spl->bctrl = (xVec3*)0x0;
    spl->knot = (float*)0x0;
    spl->coef = (xCoef3*)0x0;
    spl->arcSample = 0;
    spl->arcLength = (float*)0x0;
    spl->points = (xVec3*)xMemAlloc(gActiveHeap, (spl->allocN + 1) * 0xc, 0);
    memcpy(spl->points, points, (spl->N + 1) * 0xc);

    if (time != (F32*)0x0)
    {
        spl->time = (F32*)xMemAlloc(gActiveHeap, (spl->allocN + 1) * 4, 0);
        memcpy(spl->time, time, (spl->N + 1) * 4);
    }
    else
    {
        spl->time = (F32*)0x0;
    }
    return spl;
}

xSpline3* xSpline3_Bezier(xVec3* points, F32* time, U32 numpoints, U32 numalloc, xVec3* p1,
                          xVec3* p2)
{
    U32 i;
    xSpline3* spl;
    xVec3* p1_temp;
    xVec3* p2_temp;
    S32 p1_inc;
    S32 p2_inc;

    spl = AllocSpline3(points, time, numpoints, numalloc, 0U, 3U);
    spl->p12 = (xVec3*)xMemAlloc(gActiveHeap, spl->allocN * 2 * 0xC, 0);
    if ((p1 == NULL) || (p2 == NULL))
    {
        xSpline3_Catmullize(spl);
    }
    else
    {
        p1_temp = p1;
        p2_temp = p2;
        p1_inc = 0;
        p2_inc = 0xC;

        for (i = 0; i < spl->N; i += 1)
        {
            spl->p12 = p1_temp + p1_inc;
            spl->p12 = p2_temp + p2_inc;
            p1_temp += 0xC;
            p2_temp += 0xC;
            p1_inc += 0x18;
            p2_inc += 0x18;
        }
    }
    return spl;
}

void xSpline3_Update(xSpline3* spl)
{
    if ((u16)spl->type == 4)
    {
        Interpolate_Bspline(spl->points, spl->bctrl, spl->knot, spl->N + 1);
    }
    if ((xSpline3*)spl->arcLength != NULL)
    {
        xSpline3_ArcInit(spl, (u32)spl->arcSample);
    }
}

void xSpline3_Catmullize(xSpline3* spl)
{
    xSpline3_Update(spl);
}
