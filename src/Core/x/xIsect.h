#ifndef XISECT_H
#define XISECT_H

#include "xMath3.h"

struct xIsect
{
    uint32 flags;
    float32 penned;
    float32 contained;
    float32 lapped;
    xVec3 point;
    xVec3 norm;
    float32 dist;
};

#endif