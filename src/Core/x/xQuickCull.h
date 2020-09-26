#ifndef XQUICKCULL_H
#define XQUICKCULL_H

#include "xVec3.h"

struct xQCData
{
    char xmin;
    char ymin;
    char zmin;
    char zmin_dup;
    char xmax;
    char ymax;
    char zmax;
    char zmax_dup;
    xVec3 min;
    xVec3 max;
};

#endif