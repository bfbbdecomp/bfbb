#ifndef XBOUND_H
#define XBOUND_H

#include "xQuickCull.h"
#include "xMath3.h"
#include "xCollide.h"

// Size: 0x4C
struct xBound
{
    xQCData qcd;

    // Offset: 0x20
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
#define XBOUND_TYPE_0 0
#define XBOUND_TYPE_SPHERE 1
#define XBOUND_TYPE_BOX 2
#define XBOUND_TYPE_3 3
#define XBOUND_TYPE_BOXLOCAL 4

void xBoundGetBox(xBox& box, const xBound& bound);
void xBoundDraw(const xBound* bound);
void xQuickCullForBound(xQCData* qc, const xBound* bound);
xVec3* xBoundCenter(xBound* bound);
const xVec3* xBoundCenter(const xBound* bound);
void xBoundUpdate(xBound* b);
void xBoundHitsBound(const xBound* a, const xBound* b, xCollis* c);

#endif