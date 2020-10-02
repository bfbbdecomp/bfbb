#ifndef XMODEL_H
#define XMODEL_H

#include "xMath3.h"

struct xModelInstance
{
};

struct xModelTag
{
    xVec3 v;
    uint32 matidx;
    float32 wt[4];
};

#endif