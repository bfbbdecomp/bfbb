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

void xsqrtfast(F32& out, F32 x);

#endif
