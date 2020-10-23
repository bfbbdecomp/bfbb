#ifndef XQUICKCULL_H
#define XQUICKCULL_H

#include "xVec3.h"

struct xQCData
{
    int8 xmin;
    int8 ymin;
    int8 zmin;
    int8 zmin_dup;
    int8 xmax;
    int8 ymax;
    int8 zmax;
    int8 zmax_dup;
    xVec3 min;
    xVec3 max;
};

void xQuickCullForEverything(xQCData* q);

#endif