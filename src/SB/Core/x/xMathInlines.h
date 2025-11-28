#ifndef XMATHINLINES_H
#define XMATHINLINES_H

#include <types.h>

F32 xsqrt(F32 x);
F32 xfmod(F32 a, F32 b);
F32 xatan2(F32 y, F32 x);
F32 xasin(F32 x);
F32 xacos(F32 x);
F32 xexp(F32 x);
F32 xpow(F32 x, F32 y);

F32 SQ(F32 x);

inline U8 LERP(F32 x, U8 y, U8 z)
{
    return (U8)(x * (z - y)) + y;
}

inline F32 LERP(F32 x, F32 y, F32 z)
{
    return (x * (z - y)) + y;
}

inline F32 EASE(F32 rhs)
{
    return rhs * ((rhs * 3.0f) - (rhs * 2.0f) * rhs);
}

inline F32 SMOOTH(F32 x, F32 y, F32 z)
{
    return (z - y) * EASE(x) + y;
}

void xsqrtfast(F32& out, F32 x);

#endif
