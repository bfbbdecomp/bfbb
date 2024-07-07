#ifndef XRAY3_H
#define XRAY3_H

#include "xMath3.h"

struct xRay3
{
    xVec3 origin;
    xVec3 dir;
    F32 min_t;
    F32 max_t;
    S32 flags;
};

#endif
