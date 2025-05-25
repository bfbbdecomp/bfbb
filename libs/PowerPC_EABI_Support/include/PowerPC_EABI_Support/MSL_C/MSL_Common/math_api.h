#ifndef _MSL_MATH_API_H
#define _MSL_MATH_API_H

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

MATH_INLINE float cosf(float __x)
{
    return cos((double)__x);
}

MATH_INLINE float sinf(float __x)
{
    return sin((double)__x);
}

MATH_INLINE float tanf(float __x)
{
    return tan((double)__x);
}

#define fpclassify(x)                                                                              \
    ((sizeof(x) == sizeof(float)) ? __fpclassifyf((float)(x)) : __fpclassifyd((double)(x)))

#define isinf(x) ((fpclassify(x) == 2))
#define isnan(x) ((fpclassify(x) == 1))
#define isfinite(x) ((fpclassify(x) > 2))

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif
