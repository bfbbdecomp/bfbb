#include "xVec3.h"
#include "xCollide.h"
#include "xMathInlines.h"
#include "iMath.h"

#include <types.h>
#include <fastmath.h>

extern float32 lbl_803CD158; // 1.0f
extern float32 lbl_803CD15C; // 1.0 * 10^-5f
extern float32 lbl_803CD160; // 0.0f

#if 0
// Works except for register swapping.
float32 xVec3Normalize(xVec3* o, const xVec3* v)
{
    float32 len;
    float32 len2 = v->x * v->x;
    len2 += v->y * v->y;
    len2 += v->z * v->z;
    if ((float32)iabs(len2 - lbl_803CD158) <= lbl_803CD15C)
    {
        o->x = v->x;
        o->y = v->y;
        o->z = v->z;
        len = lbl_803CD158;
    }
    else
    {
        if ((float32)iabs(len2) <= lbl_803CD15C)
        {
            o->x = lbl_803CD160;
            o->y = lbl_803CD158;
            o->z = lbl_803CD160;
            len = lbl_803CD160;
        }
        else
        {
            len = xsqrt(len2);
            float32 inv_len = lbl_803CD158 / len;
            o->x = v->x * inv_len;
            o->y = v->y * inv_len;
            o->z = v->z * inv_len;
        }
    }
    return len;
}

#endif

#if 0
// Works except for register swapping.
float32 xVec3NormalizeFast(xVec3* o, const xVec3* v)
{
    float32 len;
    float32 len2 = v->x * v->x;
    len2 += v->y * v->y;
    len2 += v->z * v->z;
    if ((float32)iabs(len2 - lbl_803CD158) <= lbl_803CD15C)
    {
        o->x = v->x;
        o->y = v->y;
        o->z = v->z;
        len = lbl_803CD158;
    }
    else
    {
        if ((float32)iabs(len2) <= lbl_803CD15C)
        {
            o->x = lbl_803CD160;
            o->y = lbl_803CD158;
            o->z = lbl_803CD160;
            len = lbl_803CD160;
        }
        else
        {
            xsqrtfast(len, len2);
            float32 inv_len = lbl_803CD158 / len;
            o->x = v->x * inv_len;
            o->y = v->y * inv_len;
            o->z = v->z * inv_len;
        }
    }
    return len;
}

#endif

void xVec3Copy(register xVec3* dst, const register xVec3* src)
{
    PSVECCopy(dst, src);
}

asm float32 xVec3Dot(const register xVec3* a, const register xVec3* b)
{
    PSVECDotProduct(a, b)
}
