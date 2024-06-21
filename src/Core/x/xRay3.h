#ifndef XRAY3_H
#define XRAY3_H

#include "xMath3.h"

struct xRay3
{
    xVec3 origin;
    xVec3 dir;
    float32 min_t;
    float32 max_t;
    int32 flags;
};

#endif