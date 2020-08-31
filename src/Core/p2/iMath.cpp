#include <cmath>

namespace std
{
    inline float sinf(float x)
    {
        return (float)sin((double)x);
    }

    inline float cosf(float x)
    {
        return (float)cos((double)x);
    }

    inline float tanf(float x)
    {
        return (float)tan((double)x);
    }
}

float isin(float x)
{
    return std::sinf(x);
}

float icos(float x)
{
    return std::cosf(x);
}

float itan(float x)
{
    return std::tanf(x);
}