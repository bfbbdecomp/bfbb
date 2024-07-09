#ifndef IMATH_H
#define IMATH_H

#include <types.h>
#include <intrin.h>

#ifdef __MWERKS__
#define iabs(x) (float)(__fabs((float)x))
#else
#define iabs(x) fabsf(x)
#endif

F32 isin(F32 x);
F32 icos(F32 x);
F32 itan(F32 x);

#endif
