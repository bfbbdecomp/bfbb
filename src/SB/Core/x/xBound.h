#ifndef XBOUND_H
#define XBOUND_H

#include "xQuickCull.h"
#include "xMath3.h"
#include "xCollide.h"

// Size: 0x4C
struct xBound
{
    xQCData qcd;

    U8 type; // Offset: 0x20 (or 0x84)
    U8 pad[3];
    union
    {
        xSphere sph;
        xBBox box;
        xCylinder cyl;
    };
    xMat4x3* mat;
};

#define XBOUND_TYPE_NA 0 // None/invalid
#define XBOUND_TYPE_SPHERE 1 // Sphere - xBound::sph
#define XBOUND_TYPE_BOX 2 // Axis aligned bounding box - xBound::box
#define XBOUND_TYPE_CYL 3 // Cylinder - xBound::cyl (unused?)
#define XBOUND_TYPE_OBB 4 // Oriented bounding box - xBound::box and xBound::mat

void xBoundGetBox(xBox& box, const xBound& bound);
void xBoundDraw(const xBound* bound);
void xQuickCullForBound(xQCData* qc, const xBound* bound);
xVec3* xBoundCenter(xBound* bound);
const xVec3* xBoundCenter(const xBound* bound);
void xBoundUpdate(xBound* b);
void xBoundHitsBound(const xBound* a, const xBound* b, xCollis* c);
void xRayHitsBound(const xRay3* r, const xBound* b, xCollis* c);
void xSphereHitsBound(const xSphere* o, const xBound* b, xCollis* c);
void xVecHitsBound(const xVec3* v, const xBound* b, xCollis* c);
F32 xsqrt(F32 x);

inline xVec3* xBoundCenter(xBound* bound)
{
    return &bound->sph.center;
}

inline const xVec3* xBoundCenter(const xBound* bound)
{
    return &bound->sph.center;
}

#endif
