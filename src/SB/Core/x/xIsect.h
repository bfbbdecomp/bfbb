#ifndef XISECT_H
#define XISECT_H

#include "xMath3.h"

struct xIsect
{
    U32 flags;
    F32 penned;
    F32 contained;
    F32 lapped;
    xVec3 point;
    xVec3 norm;
    F32 dist;
};

#endif
