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
    unsigned short flags;
    unsigned char alpha;
    unsigned char pad;
    unsigned int collPriority;
    xVec3 pos;
    xVec3 at;
    xEnt* castOnEnt;
    xShadowSimplePoly poly;
    float envHeight;
    float shadowHeight;
    unsigned int raster;
    float dydx;
    float dydz;
    xVec3 corner[4];
};

#endif