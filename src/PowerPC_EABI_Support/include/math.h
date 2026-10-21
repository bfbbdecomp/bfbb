#ifndef _MATH_H
#define _MATH_H

#include "types.h"
#include "fdlibm.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

int __fpclassifyf(float);
int __signbitd(double);
int __fpclassifyd(double);

#ifndef MATH_INLINE
#define MATH_INLINE inline
#endif

MATH_INLINE float powf(float __x, float __y)
{
    return pow((double)__x, (double)__y);
}

MATH_INLINE float sinf(float __x)
{
    return sin((double)__x);
}

MATH_INLINE float cosf(float __x)
{
    return cos((double)__x);
}

MATH_INLINE float atanf(float __x)
{
    return atan((double)__x);
}

MATH_INLINE int __fpclassifyf(f32 x)
{
    switch ((*(s32*)&x) & 0x7f800000)
    {
    case 0x7f800000:
    {
        if ((*(s32*)&x) & 0x007fffff)
            return 1;
        else
            return 2;
        break;
    }
    case 0:
    {
        if ((*(s32*)&x) & 0x007fffff)
            return 5;
        else
            return 3;
        break;
    }
    }
    return 4;
}

MATH_INLINE int __fpclassifyd(f64 x)
{
    switch (__HI(x) & 0x7ff00000)
    {
    case 0x7ff00000:
    {
        if ((__HI(x) & 0x000fffff) || (__LO(x) & 0xffffffff))
            return 1;
        else
            return 2;
        break;
    }
    case 0:
    {
        if ((__HI(x) & 0x000fffff) || (__LO(x) & 0xffffffff))
            return 5;
        else
            return 3;
        break;
    }
    }
    return 4;
}

#define fpclassify(x)                                                                              \
    ((sizeof(x) == sizeof(float)) ? __fpclassifyf((float)(x)) : __fpclassifyd((double)(x)))

#define isinf(x) ((fpclassify(x) == 2))
#define isnan(x) ((fpclassify(x) == 1))
#define isfinite(x) ((fpclassify(x) > 2))

f64 nan(const char*);
f32 cosf(f32 __x);
f32 sinf(f32 __x);
f32 tanf(f32 __x);

#ifndef __MWERKS__
// Get clangd to shut up about __fabs being undefined.
#define __fabs(x) (x)
#define __fabsf(x) (x)
#define __frsqrte(x) (x)
#endif

#define FABS(x) (float)__fabs(x)
// #define __frsqrtes opword

#define SQUARE(v) ((v) * (v))

#define signbit(x) ((int)(__HI(x) & 0x80000000))

#define TAU 6.2831855f
#define PI 3.1415927f
#define HALF_PI 1.5707964f

#define LONG_TAU 6.2831854820251465

extern int __float_nan[];
extern int __float_huge[];
extern int __double_huge[];

#define INFINITY (*(float*)__float_huge)
#define NAN (*(float*)__float_nan)
#define HUGE_VAL (*(double*)__double_huge)

inline long double fabsl(long double x)
{
    return __fabs((double)x);
}

inline double fabs(double x)
{
    return __fabs(x);
}

double acos(double);
double asin(double);
double atan(double);
double atan2(double, double);
double ceil(double);
double floor(double);
float floorf(float x);
double frexp(double, int*);
double ldexp(double, int);
double sqrt(double);

double pow(double, double);

double log(double);
double log10(double);

double fmod(double, double);

double sin(double x);
double cos(double x);

double __ieee754_acos(double);
double __ieee754_fmod(double, double);
double __ieee754_log(double);
double __ieee754_log10(double);
double __ieee754_pow(double, double);
double __ieee754_sqrt(double);
double __ieee754_atan2(double, double);
double __ieee754_asin(double);

double scalbn(double, int);

double __kernel_sin(double, double, int);
double __kernel_cos(double, double);
double __kernel_tan(double, double, int);

int __ieee754_rem_pio2(double, double*);

// static inline float atan2f(float y, float x)
// {
//     return atan2(y, x);
// }

// float sqrtf(float);

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif
