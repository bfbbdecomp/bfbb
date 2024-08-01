#ifndef XCOLLIDE_H
#define XCOLLIDE_H

#include "xEnv.h"
#include "xModel.h"
#include "xQuickCull.h"
#include "iMath3.h"

struct xCollis
{
    struct tri_data
    {
        U32 index;
        F32 r;
        F32 d;
    };

    U32 flags;
    U32 oid;
    void* optr;
    xModelInstance* mptr;
    F32 dist; // 0x30
    xVec3 norm;
    xVec3 tohit;
    xVec3 depen;
    xVec3 hdng;
    union
    {
        struct
        {
            F32 t;
            F32 u;
            F32 v;
        } tuv;
        tri_data tri;
    };
};

struct xParabola
{
    xVec3 initPos;
    xVec3 initVel;
    F32 gravity;
    F32 minTime;
    F32 maxTime;
};

// Size: 0x144
struct xSweptSphere
{
    xVec3 start;
    xVec3 end;
    F32 radius;
    F32 dist;
    // Offset: 0x20
    xiMat4x3Union basis;
    xiMat4x3Union invbasis;
    // Offset: 0xa0
    xBox box;
    // Offset: 0xb8
    xQCData qcd;
    // Offset: 0xd8
    F32 boxsize;
    F32 curdist;
    // Offset: 0xe0
    xVec3 contact;
    xVec3 polynorm;
    U32 oid;
    void* optr;
    // Offset: 0x100
    xModelInstance* mptr;
    S32 hitIt;
    xVec3 worldPos;
    xVec3 worldContact;
    // Offset: 0x120
    xVec3 worldNormal;
    // Offset: 0x12c
    xVec3 worldTangent;
    // Offset: 0x138
    xVec3 worldPolynorm;
};

enum _xCollsIdx
{
    k_XCOLLS_IDX_FLOOR,
    k_XCOLLS_IDX_CEIL,
    k_XCOLLS_IDX_FRONT,
    k_XCOLLS_IDX_LEFT,
    k_XCOLLS_IDX_REAR,
    k_XCOLLS_IDX_RIGHT,
    k_XCOLLS_IDX_COUNT
};

struct xScene;

void xCollideInit(xScene* sc);
S32 xSweptSphereToBox(xSweptSphere* sws, xBox* box, xMat4x3* mat);
S32 xSweptSphereToModel(xSweptSphere* sws, RpAtomic* model, RwMatrix* mat);
S32 xSweptSphereToScene(xSweptSphere* sws, xScene* sc, xEnt* mover, U8 collType);
void xSweptSpherePrepare(xSweptSphere* sws, xVec3* start, xVec3* end, F32 radius);
void xSweptSphereGetResults(xSweptSphere* sws);
U32 xSphereHitsOBB_nu(const xSphere* s, const xBox* b, const xMat4x3* m, xCollis* coll);
U32 xSphereHitsSphere(const xSphere* a, const xSphere* b, xCollis* coll);
U32 xSphereHitsBox(const xSphere* a, const xBox* b, xCollis* coll);
U32 xBoxHitsSphere(const xBox* a, const xSphere* b, xCollis* coll);
U32 xBoxHitsObb(const xBox* a, const xBox* b, const xMat4x3* mat, xCollis* coll);
bool xSphereHitsOBB(const xSphere&, const xBox&, const xMat4x3&);
bool xSphereHitsSphere(const xVec3&, F32, const xVec3&, F32);
bool xSphereHitsVCylinder(const xVec3& sc, F32 sr, const xVec3& cc, F32 cr, F32 ch);
bool xSphereHitsVCircle(const xSphere& s, const xVec3& c, F32 r);
bool xSphereHitsVCircle(const xVec3& sc, F32 sr, const xVec3& cc, F32 cr);
U32 xSphereHitsModel(const xSphere* b, const xModelInstance* m, xCollis* coll);

S32 xParabolaHitsEnv(xParabola* p, const xEnv* env, xCollis* colls);
void xParabolaEvalPos(const xParabola*, xVec3*, F32);
void xParabolaEvalVel(const xParabola*, xVec3*, F32);

void xVec3AddScaled(xVec3*, const xVec3*, F32);

#endif
