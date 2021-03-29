#ifndef XCOLLIDE_H
#define XCOLLIDE_H

#include "xModel.h"
#include "xQuickCull.h"
#include "../p2/iMath3.h"

struct xCollis
{
    struct tri_data
    {
        uint32 index;
        float32 r;
        float32 d;
        void operator=(const tri_data& other);
    };

    uint32 flags;
    uint32 oid;
    void* optr;
    xModelInstance* mptr;
    float32 dist;
    xVec3 norm;
    xVec3 tohit;
    xVec3 depen;
    xVec3 hdng;
    union
    {
        struct
        {
            float32 t;
            float32 u;
            float32 v;
        } tuv;
        tri_data tri;
    };
};

struct xParabola
{
    xVec3 initPos;
    xVec3 initVel;
    float32 gravity;
    float32 minTime;
    float32 maxTime;
};

struct xSweptSphere
{
    xVec3 start;
    xVec3 end;
    float32 radius;
    float32 dist;
    xiMat4x3Union basis;
    xiMat4x3Union invbasis;
    xBox box;
    xQCData qcd;
    float32 boxsize;
    float32 curdist;
    xVec3 contact;
    xVec3 polynorm;
    uint32 oid;
    void* optr;
    xModelInstance* mptr;
    int32 hitIt;
    xVec3 worldPos;
    xVec3 worldContact;
    xVec3 worldNormal;
    xVec3 worldTangent;
    xVec3 worldPolynorm;
};

struct xScene;

void xCollideInit(xScene* sc);
void xsqrtfast(float32& dst, float32 num);
int32 xSweptSphereToBox(xSweptSphere* sws, xBox* box, xMat4x3* mat);
int32 xSweptSphereToModel(xSweptSphere* sws, RpAtomic* model, RwMatrix* mat);
uint32 xSphereHitsOBB_nu(const xSphere* s, const xBox* b, const xMat4x3* m, xCollis* coll);
uint32 xSphereHitsSphere(const xSphere* a, const xSphere* b, xCollis* coll);
uint32 xSphereHitsBox(const xSphere* a, const xBox* b, xCollis* coll);
uint32 xBoxHitsSphere(const xBox* a, const xSphere* b, xCollis* coll);
uint32 xBoxHitsObb(const xBox* a, const xBox* b, const xMat4x3* mat, xCollis* coll);
bool xSphereHitsOBB(const xSphere&, const xBox&, const xMat4x3&);
bool xSphereHitsSphere(const xVec3&, float32, const xVec3&, float32);
bool xSphereHitsVCylinder(const xVec3& sc, float32 sr, const xVec3& cc, float32 cr, float32 ch);
bool xSphereHitsVCircle(const xSphere& s, const xVec3& c, float32 r);
bool xSphereHitsVCircle(const xVec3& sc, float32 sr, const xVec3& cc, float32 cr);
uint32 xSphereHitsModel(const xSphere* b, const xModelInstance* m, xCollis* coll);

void xVec3AddScaled(xVec3*, const xVec3*, float32);

#endif