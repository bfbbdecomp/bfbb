#ifndef XCOLLIDE_H
#define XCOLLIDE_H

#include "xEnv.h"
#include "xModel.h"
#include "xQuickCull.h"
#include "iMath3.h"

#define k_HIT_IT ((U32)(1 << 0))
#define k_HIT_0x2 ((U32)(1 << 1))
#define k_HIT_0x4 ((U32)(1 << 2))
#define k_HIT_0x8 ((U32)(1 << 3))
#define k_HIT_0x10 ((U32)(1 << 4))
#define k_HIT_0x100 ((U32)(1 << 8))
#define k_HIT_0x200 ((U32)(1 << 9))
#define k_HIT_0x400 ((U32)(1 << 10))
#define k_HIT_0x800 ((U32)(1 << 11))
#define k_HIT_0xF00 (k_HIT_0x100 | k_HIT_0x200 | k_HIT_0x400 | k_HIT_0x800)
#define k_HIT_CALC_HDNG ((U32)(1 << 12))
#define k_HIT_CALC_TRI ((U32)(1 << 13))
#define k_HIT_0x20000 ((U32)(1 << 17))

struct xModelInstance;

struct xCollis
{
    struct tri_data
    {
        U32 index;
        F32 r;
        F32 d;

        tri_data& operator=(const tri_data& o)
        {
            index = o.index;
            r = o.r;
            d = o.d;
            return *this;
        };
    };

    U32 flags;
    U32 oid;
    void* optr;
    xModelInstance* mptr;
    F32 dist; // 0x10
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

struct SweptSphereCollParam
{
    RpGeometry* geometry;
    xSweptSphere* sws;
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
void xCollideCalcTri(xCollis::tri_data&, const xModelInstance&, const xVec3&, const xVec3&);
S32 xSweptSphereToBox(xSweptSphere* sws, xBox* box, xMat4x3* mat);
S32 xSweptSphereToEnv(xSweptSphere* sws, xEnv* env);
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
void xParabolaRecenter(xParabola* p, F32 newZeroT);

void xVec3AddScaled(xVec3*, const xVec3*, F32);
xVec3 xCollisTriHit(const xCollis::tri_data& tri, const xModelInstance& model);
bool xModelAnimCollDirty(const xModelInstance& cm);
void xModelAnimCollRefresh(const xModelInstance& cm);
void xModelAnimCollRestore(const xModelInstance& cm);
void xModelAnimCollApply(const xModelInstance& cm);

_xCollsIdx xCollideGetCollsIdx(const xCollis* coll, const xVec3* tohit, const xMat3x3* mat);

inline void xParabolaEvalPos(const xParabola* p, xVec3* pos, F32 time)
{
    xVec3Copy(pos, &p->initPos);
    xVec3AddScaled(pos, &p->initVel, time);
    pos->y -= 0.5f * p->gravity * time * time;
}

inline void xParabolaEvalVel(const xParabola* p, xVec3* vel, F32 time)
{
    xVec3Copy(vel, &p->initVel);
    vel->y -= p->gravity * time;
}

inline bool xSphereHitsSphere(const xVec3& loc1, F32 r1, const xVec3& loc2, F32 r2)
{
    F32 dist2 = (loc2 - loc1).length2();
    F32 max_dist = r1 + r2;
    return dist2 <= SQR(max_dist);
}

inline bool xSphereHitsSphere(const xSphere& o1, const xSphere& o2)
{
    return xSphereHitsSphere(o1.center, o1.r, o2.center, o2.r);
}

inline bool xSphereHitsBox(const xVec3& c, F32 r, const xBox& b)
{
    return c.x + r >= b.lower.x && c.y + r >= b.lower.y && c.z + r >= b.lower.z &&
           c.x - r <= b.upper.x && c.y - r <= b.upper.y && c.z - r <= b.upper.z;
}

inline bool xSphereHitsBox(const xSphere& o, const xBox& b)
{
    return xSphereHitsBox(o.center, o.r, b);
}

inline bool xSphereHitsOBB(const xVec3& c, F32 r, const xBox& b, const xMat4x3& mat)
{
    xVec3 lc;
    xMat4x3Tolocal(&lc, &mat, &c);
    return xSphereHitsBox(lc, r, b);
}

inline bool xSphereHitsOBB(const xSphere& o, const xBox& b, const xMat4x3& mat)
{
    return xSphereHitsOBB(o.center, o.r, b, mat);
}

inline bool xSphereHitsVCircle(const xSphere& o, const xVec3& cc, F32 cr)
{
    return xSphereHitsVCircle(o.center, o.r, cc, cr);
}

#endif
