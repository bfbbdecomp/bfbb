#ifndef XBOUND_H
#define XBOUND_H

#include "xQuickCull.h"
#include "xMath3.h"

// Size: 0x4C
struct xBound
{
    xQCData qcd;
    uint8 type;
    uint8 pad[3];
    union
    {
        xSphere sph;
        xBBox box;
        xCylinder cyl;
    };
    xMat4x3* mat;
};

// TODO: Figure out which is which for the other two bound types! I know that
// type 1 is sphere from the code in xNPCBasic.cpp, but I do not know which is
// which for the other two yet.
#define BOUND_TYPE_SPHERE 1
#define BOUND_TYPE_2 2
#define BOUND_TYPE_4 4

void xBoundDraw(const xBound* bound);

#endif