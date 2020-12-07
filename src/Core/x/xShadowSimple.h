#ifndef XSHADOWSIMPLE_H
#define XSHADOWSIMPLE_H

#include "xEnt.h"

struct xShadowSimplePoly
{
    xVec3 vert[3];
    xVec3 norm;
};

struct xShadowSimpleCache
{
    uint16 flags;
    uint8 alpha;
    uint8 pad;
    uint32 collPriority;
    xVec3 pos;
    xVec3 at;
    xEnt* castOnEnt;
    xShadowSimplePoly poly;
    float32 envHeight;
    float32 shadowHeight;
    uint32 raster;
    float32 dydx;
    float32 dydz;
    xVec3 corner[4];
};

#endif