#ifndef XSPLINE_H
#define XSPLINE_H

#include "xMath3.h"

struct xCoef
{
    float32 a[4];
};

struct xCoef3
{
    xCoef x;
    xCoef y;
    xCoef z;
};

struct xSpline3
{
    uint16 type;
    uint16 flags;
    uint32 N;
    uint32 allocN;
    xVec3* points;
    float32* time;
    xVec3* p12;
    xVec3* bctrl;
    float32* knot;
    xCoef3* coef;
    uint32 arcSample;
    float32* arcLength;
};

#endif