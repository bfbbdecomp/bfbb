#ifndef XVEC3INLINES_H
#define XVEC3INLINES_H

#include "xVec3.h"

void xVec3Sub(xVec3* o, const xVec3* a, const xVec3* b);
void xVec3Cross(xVec3* o, const xVec3* a, const xVec3* b);
void xVec3Inv(xVec3* o, const xVec3* v);
void xVec3Copy(xVec3* o, const xVec3* v);
F32 xVec3Length(const xVec3* v);
void xVec3SMul(xVec3* o, const xVec3* v, F32 s);
void xVec3Add(xVec3* o, const xVec3* a, const xVec3* b);
void xVec3Init(xVec3* v, F32 _x, F32 _y, F32 _z);
void xVec3AddTo(xVec3* o, const xVec3* v);
void xVec3Lerp(xVec3* o, const xVec3* a, const xVec3* b, F32 t);
void xVec3ScaleC(xVec3* o, const xVec3* v, F32 x, F32 y, F32 z);
F32 xVec3Dist(const xVec3* a, const xVec3* b);
F32 xVec3Dist2(const xVec3* vecA, const xVec3* vecB);
F32 xVec3Length2(const xVec3* vec);
F32 xVec3LengthFast(F32 x, F32 y, F32 z);
F32 xVec3LengthFast(const xVec3* vec);
void xVec3AddScaled(xVec3* o, const xVec3* v, F32 s);

#define xVec3NormalizeMacro(o, v, len)                                                             \
    MACRO_START                                                                                    \
    {                                                                                              \
        F32 len2 = SQR((v)->x) + SQR((v)->y) + SQR((v)->z);                                        \
        if (xeq(len2, 1.0f, 1e-5f))                                                                \
        {                                                                                          \
            (o)->x = (v)->x;                                                                       \
            (o)->y = (v)->y;                                                                       \
            (o)->z = (v)->z;                                                                       \
            *(len) = 1.0f;                                                                         \
        }                                                                                          \
        else if (xeq(len2, 0.0f, 1e-5f))                                                           \
        {                                                                                          \
            (o)->x = 0.0f;                                                                         \
            (o)->y = 1.0f;                                                                         \
            (o)->z = 0.0f;                                                                         \
            *(len) = 0.0f;                                                                         \
        }                                                                                          \
        else                                                                                       \
        {                                                                                          \
            *(len) = xsqrt(len2);                                                                  \
            F32 len_inv = 1.0f / *(len);                                                           \
            (o)->x = (v)->x * len_inv;                                                             \
            (o)->y = (v)->y * len_inv;                                                             \
            (o)->z = (v)->z * len_inv;                                                             \
        }                                                                                          \
    }                                                                                              \
    MACRO_STOP

#define xVec3NormalizeDistXZMacro(o, a, b, dist)                                                   \
    MACRO_START                                                                                    \
    {                                                                                              \
        F32 dx__ = (b)->x - (a)->x;                                                                \
        F32 dz__ = (b)->z - (a)->z;                                                                \
        F32 dist2 = SQR(dx__) + SQR(dz__);                                                         \
        if (xeq(dist2, 1.0f, 1e-5f))                                                               \
        {                                                                                          \
            (o)->x = dx__;                                                                         \
            (o)->z = dz__;                                                                         \
            *(dist) = 1.0f;                                                                        \
        }                                                                                          \
        else if (xeq(dist2, 0.0f, 1e-5f))                                                          \
        {                                                                                          \
            (o)->x = 0.0f;                                                                         \
            (o)->z = 0.0f;                                                                         \
            *(dist) = 0.0f;                                                                        \
        }                                                                                          \
        else                                                                                       \
        {                                                                                          \
            *(dist) = xsqrt(dist2);                                                                \
            F32 dist_inv = 1.0f / *(dist);                                                         \
            (o)->x = dx__ * dist_inv;                                                              \
            (o)->z = dz__ * dist_inv;                                                              \
        }                                                                                          \
    }                                                                                              \
    MACRO_STOP

inline void xVec3SMulBy(xVec3* v, F32 s)
{
    v->x *= s;
    v->y *= s;
    v->z *= s;
}

inline void xVec3SubFrom(xVec3* o, const xVec3* v)
{
    o->x -= v->x;
    o->y -= v->y;
    o->z -= v->z;
}

#endif
