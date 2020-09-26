#ifndef XMODEL_H
#define XMODEL_H

#include "xMath3.h"

struct xModelInstance
{
};

struct xModelTag
{
    xVec3 v;
    unsigned int matidx;
    float wt[4];
};

#endif