#ifndef XSPLINE_H
#define XSPLINE_H

#include "xMath3.h"

struct xCoef
{
    F32 a[4];
};

struct xCoef3
{
    xCoef x;
    xCoef y;
    xCoef z;
};

struct xSpline3
{
    U16 type;
    U16 flags;
    U32 N;
    U32 allocN;
    xVec3* points;
    F32* time;
    xVec3* p12;
    xVec3* bctrl;
    F32* knot;
    xCoef3* coef;
    U32 arcSample;
    F32* arcLength;
};

#endif
