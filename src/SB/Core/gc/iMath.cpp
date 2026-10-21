#include "iMath.h"

#include <cmath>

F32 isin(F32 x)
{
    return std::sinf(x);
}

#ifndef INLINE
float std::sinf(float x)
{
    return (float)sin((double)x);
}
#endif

F32 icos(F32 x)
{
    return std::cosf(x);
}

#ifndef INLINE
float std::cosf(float x)
{
    return (float)cos((double)x);
}
#endif

F32 itan(F32 x)
{
    return std::tanf(x);
}

#ifndef INLINE
float std::tanf(float x)
{
    return (float)tan((double)x);
}
#endif
