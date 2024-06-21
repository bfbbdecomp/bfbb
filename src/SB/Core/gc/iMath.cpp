#include "iMath.h"

#include <cmath>

float32 isin(float32 x)
{
    return std::sinf(x);
}

#ifndef INLINE
float std::sinf(float x)
{
    return (float)sin((double)x);
}
#endif

float32 icos(float32 x)
{
    return std::cosf(x);
}

#ifndef INLINE
float std::cosf(float x)
{
    return (float)cos((double)x);
}
#endif

float32 itan(float32 x)
{
    return std::tanf(x);
}

#ifndef INLINE
float std::tanf(float x)
{
    return (float)tan((double)x);
}
#endif