#include "xVec3.h"
#include "xCollide.h"
#include "xMathInlines.h"
#include "iMath.h"
#include "xMath.h"

#include <types.h>
#include <fastmath.h>

const xVec3 xVec3::m_Null = { 0.0f, 0.0f, 0.0f };
const xVec3 xVec3::m_UnitAxisX = { 1.0f, 0.0f, 0.0f };
const xVec3 xVec3::m_UnitAxisY = { 0.0f, 1.0f, 0.0f };

float32 xVec3Normalize(xVec3* o, const xVec3* v)
{
    float32 x = v->x;
    float32 x2 = SQR(v->x);
    float32 y = v->y;
    float32 y2 = SQR(v->y);
    float32 z = v->z;
    float32 z2 = SQR(v->z);

    float32 len;
    float32 len2 = x2 + y2 + z2;

    if ((float32)iabs(len2 - 1.0f) <= 0.00001f)
    {
        o->x = x;
        o->y = y;
        o->z = z;
        len = 1.0f;
    }
    else if ((float32)iabs(len2) <= 0.00001f)
    {
        o->x = 0.0f;
        o->y = 1.0f;
        o->z = 0.0f;
        len = 0.0f;
    }
    else
    {
        len = xsqrt(len2);
        float32 inv_len = 1.0f / len;
        o->x = v->x * inv_len;
        o->y = v->y * inv_len;
        o->z = v->z * inv_len;
    }
    return len;
}

float32 xVec3NormalizeFast(xVec3* o, const xVec3* v)
{
    float32 x = v->x;
    float32 x2 = SQR(v->x);
    float32 y = v->y;
    float32 y2 = SQR(v->y);
    float32 z = v->z;
    float32 z2 = SQR(v->z);

    float32 len;
    float32 len2 = x2 + y2 + z2;

    if ((float32)iabs(len2 - 1.0f) <= 0.00001f)
    {
        o->x = x;
        o->y = y;
        o->z = z;
        len = 1.0f;
    }
    else if ((float32)iabs(len2) <= 0.00001f)
    {
        o->x = 0.0f;
        o->y = 1.0f;
        o->z = 0.0f;
        len = 0.0f;
    }
    else
    {
        xsqrtfast(len, len2);
        float32 inv_len = 1.0f / len;
        o->x = v->x * inv_len;
        o->y = v->y * inv_len;
        o->z = v->z * inv_len;
    }
    return len;
}

void xVec3Copy(register xVec3* dst, const register xVec3* src)
{
    PSVECCopy(dst, src);
}

asm float32 xVec3Dot(const register xVec3* a, const register xVec3* b)
{
    PSVECDotProduct(a, b)
}
