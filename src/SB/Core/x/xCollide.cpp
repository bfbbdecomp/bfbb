#include "xCollide.h"
#include "xCollideFast.h"
#include "zSurface.h"
#include "iCollide.h"
#include "iMath3.h"
#include "rpcollis.h"
#include "rpcollbsptree.h"
#include "rpworld.h"
#include "xMathInlines.h"
#include "xScene.h"
#include "zGrid.h"

#include <PowerPC_EABI_Support/MSL_C/MSL_Common/cmath>
#include <types.h>

static S32 sSweptSphereHitFound;
static xMat4x3* sSwsModelMat;
static S32 sSweptSphereEntFound;
static U8 sSweptSphereCollType;
static xEnt* sSweptSphereMover;
static U32 sSweptSphereIgnoreMovers;

extern U8 xClumpColl_FilterFlags;

// TODO: figure out where this needs to go since ive only seen seil use it here
#define RwV3dSubMacro(o, a, b)                                                                     \
    MACRO_START                                                                                    \
    {                                                                                              \
        (o)->x = (((a)->x) - ((b)->x));                                                            \
        (o)->y = (((a)->y) - ((b)->y));                                                            \
        (o)->z = (((a)->z) - ((b)->z));                                                            \
    }                                                                                              \
    MACRO_STOP

#define rwInvSqrtMacro(_recip, _input) (*(_recip) = _rwInvSqrt(_input))

#define RpGeometryGetTriangles(_geometry) RpGeometryGetTrianglesMacro(_geometry) // bageomet.h

#define RpGeometryGetTrianglesMacro(_geometry) ((_geometry)->triangles) // bageomet.h

#define RpMorphTargetGetVertices(_mt) RpMorphTargetGetVerticesMacro(_mt) // bageomet.h

#define RpMorphTargetGetVerticesMacro(_mt) ((_mt)->verts) // bageomet.h

#define RpGeometryGetMorphTarget(_geometry, _index)                                                \
    RpGeometryGetMorphTargetMacro(_geometry, _index) // bageomet.h

#define RpGeometryGetMorphTargetMacro(_geometry, _index)                                           \
    (&((_geometry)->morphTarget[(_index)])) // bageomet.h

#define xVec3NormalizeMacro(o, v, len)                                                             \
    MACRO_START                                                                                    \
    {                                                                                              \
        F32 len2 = SQR((v)->x) + SQR((v)->y) + SQR((v)->z);                                        \
        if (xeq(len2, 1.0f, 1e-5f))                                                                \
        {                                                                                          \
            (o)->x = (v)->x;                                                                       \
            (o)->y = (v)->y;                                                                       \
            (o)->z = (v)->z;                                                                       \
            *(len) = 1.0f;                                                                         \
        }                                                                                          \
        else if (xeq(len2, 0.0f, 1e-5f))                                                           \
        {                                                                                          \
            (o)->x = 0.0f;                                                                         \
            (o)->y = 1.0f;                                                                         \
            (o)->z = 0.0f;                                                                         \
            *(len) = 0.0f;                                                                         \
        }                                                                                          \
        else                                                                                       \
        {                                                                                          \
            *(len) = xsqrt(len2);                                                                  \
            F32 len_inv = 1.0f / *(len);                                                           \
            (o)->x = (v)->x * len_inv;                                                             \
            (o)->y = (v)->y * len_inv;                                                             \
            (o)->z = (v)->z * len_inv;                                                             \
        }                                                                                          \
    }                                                                                              \
    MACRO_STOP

_xCollsIdx xCollideGetCollsIdx(const xCollis* coll, const xVec3* tohit, const xMat3x3* mat)
{
    if (tohit->y * tohit->y > tohit->x * tohit->x + tohit->z * tohit->z)
    {
        if (tohit->y < 0.0f)
        {
            if ((coll->flags & 0x20000) == 0)
            {
                if (coll->optr != NULL && coll->mptr->Surf != NULL ?
                        zSurfaceGetStandOn(coll->mptr->Surf) :
                        1)
                {
                    return k_XCOLLS_IDX_FLOOR;
                }
            }
        }
        else
        {
            return k_XCOLLS_IDX_CEIL;
        }
    }
    F32 local_x = mat->right.x * tohit->x + mat->right.z * tohit->z;
    F32 local_z = mat->at.x * tohit->x + mat->at.z * tohit->z;
    if (local_x > 0.0f)
    {
        if (local_z > 0.0f)
        {
            if (local_x > local_z)
            {
                return k_XCOLLS_IDX_LEFT;
            }
            else
            {
                return k_XCOLLS_IDX_FRONT;
            }
        }
        else
        {
            if (local_x > -local_z)
            {
                return k_XCOLLS_IDX_LEFT;
            }
            else
            {
                return k_XCOLLS_IDX_REAR;
            }
        }
    }
    else
    {
        if (local_z > 0.0f)
        {
            if (local_x < -local_z)
            {
                return k_XCOLLS_IDX_RIGHT;
            }
            else
            {
                return k_XCOLLS_IDX_FRONT;
            }
        }
        else
        {
            if (local_x < local_z)
            {
                return k_XCOLLS_IDX_RIGHT;
            }
            else
            {
                return k_XCOLLS_IDX_REAR;
            }
        }
    }
}

void xCollideInit(xScene* sc)
{
    iCollideInit(sc);
}

U32 xSphereHitsSphere(const xSphere* a, const xSphere* b, xCollis* coll)
{
    U32 uVar1;

    xIsect isx;

    iSphereIsectSphere(b, a, &isx);

    if (!(isx.penned <= 0.0f))
    {
        uVar1 = 0;
        coll->flags &= 0xfffffffe;
    }
    else
    {
        if (isx.contained <= 0.0f)
        {
            coll->flags |= 0x10;
        }
        coll->dist = a->r + isx.penned;
        if ((coll->flags & 0x1600) != 0)
        {
            if (isx.dist == 0.0f)
            {
                xVec3Copy(&coll->tohit, &g_O3);
            }
            else
            {
                xVec3SMul(&coll->tohit, &isx.norm, -coll->dist / isx.dist);
            }
        }
        if ((coll->flags & 0x800) != 0)
        {
            if (isx.dist == 0.0f)
            {
                xVec3Copy(&coll->depen, &g_O3);
            }
            else
            {
                xVec3SMul(&coll->depen, &isx.norm, -isx.penned / isx.dist);
            }
        }
        if ((coll->flags & 0x1200) != 0)
        {
            xVec3Normalize(&coll->hdng, &coll->tohit);
        }
        if ((coll->flags & 0x200) != 0)
        {
            xVec3Inv(&coll->norm, &coll->hdng);
        }
        uVar1 = 1;
        coll->flags |= 1;
    }
    return uVar1;
}

U32 xSphereHitsBox(const xSphere* a, const xBox* b, xCollis* coll)
{
    U32 uVar1;

    xIsect isx;

    iBoxIsectSphere(b, a, &isx);

    if (!(isx.penned <= 0.0f))
    {
        uVar1 = 0;
        coll->flags &= 0xfffffffe;
    }
    else
    {
        if (isx.contained <= 0.0f)
        {
            coll->flags |= 0x10;
        }
        coll->dist = isx.dist;
        if (coll->flags & 0x0400)
        {
            xVec3Copy(&coll->tohit, &isx.norm);
        }
        if ((coll->flags & 0x800) != 0)
        {
            if (isx.dist == 0.0f)
            {
                xVec3Copy(&coll->depen, &g_O3);
            }
            else
            {
                xVec3SMul(&coll->depen, &isx.norm, isx.penned / isx.dist);
            }
        }
        if ((coll->flags & 0x1200) != 0)
        {
            xVec3Normalize(&coll->hdng, &isx.norm);
        }
        if ((coll->flags & 0x200) != 0)
        {
            xVec3Inv(&coll->norm, &coll->hdng);
        }
        uVar1 = 1;
        coll->flags |= 1;
    }
    return uVar1;
}

U32 xSphereHitsOBB_nu(const xSphere* s, const xBox* b, const xMat4x3* m, xCollis* coll)
//NONMATCH("https://decomp.me/scratch/YoEeE")
{
    xSphere xfs;
    xVec3 scale;
    xMat4x3 mnormal;

    xVec3NormalizeMacro(&mnormal.right, &m->right, &scale.x);
    xVec3NormalizeMacro(&mnormal.up, &m->up, &scale.y);
    xVec3NormalizeMacro(&mnormal.at, &m->at, &scale.z);
    mnormal.pos = m->pos;

    xBox sbox = *b;
    sbox.upper.x *= scale.x, sbox.upper.y *= scale.y, sbox.upper.z *= scale.z;
    sbox.lower.x *= scale.x, sbox.lower.y *= scale.y, sbox.lower.z *= scale.z;

    xMat4x3Tolocal(&xfs.center, &mnormal, &s->center);
    xfs.r = s->r;

    xSphereHitsBox(&xfs, &sbox, coll);

    if (!(coll->flags & k_HIT_IT))
    {
        return 0;
    }

    if (coll->flags & k_HIT_0x200)
    {
        xMat3x3RMulVec(&coll->norm, &mnormal, &coll->norm);
    }

    if (coll->flags & k_HIT_0x800)
    {
        xMat3x3RMulVec(&coll->depen, &mnormal, &coll->depen);
    }

    if (coll->flags & k_HIT_0x400)
    {
        xMat3x3RMulVec(&coll->tohit, &mnormal, &coll->tohit);
    }

    if (coll->flags & k_HIT_CALC_HDNG)
    {
        xMat3x3RMulVec(&coll->hdng, &mnormal, &coll->hdng);
    }

    return 1;
}

struct xSphereHitsModel_context
{
    xCollis* coll;
    RpIntersection localx;
};

static RpCollisionTriangle* sphereHitsModelCB(RpIntersection* isx, RpCollisionTriangle* tri,
                                              F32 dist, void* data)
{
    xSphereHitsModel_context* context = (xSphereHitsModel_context*)data;
    return sphereHitsEnvCB(&context->localx, NULL, tri, dist, context->coll);
}

U32 xSphereHitsModel(const xSphere* b, const xModelInstance* m, xCollis* coll)
// NONMATCH("https://decomp.me/scratch/XU6BL")
{
    RpIntersection isx;

    xSphereHitsModel_context context;
    context.coll = coll;

    if (m->Flags & 0x800)
    {
        xModelAnimCollApply(*m);
    }

    isx.type = rpINTERSECTSPHERE;
    *(xSphere*)&isx.t.sphere = *b;

    xMat4x3* mat = (xMat4x3*)m->Mat;
    RwFrame* frame = RpAtomicGetFrame(m->Data);
    RwFrameTransform(frame, (RwMatrix*)mat, rwCOMBINEREPLACE);

    F32 mscale = xVec3Length(&mat->right);
    xMat4x3Tolocal((xVec3*)&context.localx.t.sphere.center, mat, &b->center);
    context.localx.t.sphere.radius = b->r / mscale;

    coll->flags &= ~k_HIT_IT;
    coll->dist = HUGE;

    if (coll->flags & k_HIT_CALC_TRI)
    {
        coll->flags |= k_HIT_0x400;
    }

    RpAtomicForAllIntersections(m->Data, &isx, sphereHitsModelCB, &context);

    if ((coll->flags & k_HIT_CALC_TRI) && (coll->flags & k_HIT_IT))
    {
        xCollideCalcTri(coll->tri, *m, *(xVec3*)&context.localx.t.sphere.center, coll->tohit);
    }

    if (coll->flags & k_HIT_0x400)
    {
        xMat3x3RMulVec(&coll->tohit, mat, &coll->tohit);
    }

    if (coll->flags & k_HIT_0x800)
    {
        xMat3x3RMulVec(&coll->depen, mat, &coll->depen);
    }

    if (coll->flags & k_HIT_CALC_HDNG)
    {
        xMat3x3RMulVec(&coll->hdng, mat, &coll->hdng);
    }

    if (coll->flags & k_HIT_0x200)
    {
        xMat3x3RMulVec(&coll->norm, mat, &coll->norm);
        F32 mag2 = coll->norm.length2();
        if (!xeq(mag2, 1.0f, 1e-5f))
        {
            coll->norm *= 1.0f / xsqrt(mag2);
        }
    }

    coll->dist *= mscale;

    if (m->Flags & 0x800)
    {
        xModelAnimCollRestore(*m);
    }

    return coll->flags & k_HIT_IT;
}

void xParabolaRecenter(xParabola* p, F32 newZeroT)
{
    xVec3 newPos;
    xVec3 newVel;

    xParabolaEvalPos(p, &newPos, newZeroT);
    xParabolaEvalVel(p, &newVel, newZeroT);

    xVec3Copy(&p->initPos, &newPos);
    xVec3Copy(&p->initVel, &newVel);

    p->maxTime -= newZeroT;
    p->minTime -= newZeroT;
}

struct ParabolaCBData
{
    xParabola* p;
    xVec3 N;
    F32 d;
    xCollis* colls;
};

static S32 xParabolaEnvCB(xClumpCollBSPTriangle* triangles, void* data)
{
    ParabolaCBData* pd = (ParabolaCBData*)data;
    xParabola* p = pd->p;
    xCollis* colls = pd->colls;
    do
    {
        if (triangles->flags & xClumpColl_FilterFlags)
        {
            xVec3* v0 = (xVec3*)triangles->v.p;
            xVec3 *v1, *v2;
            if (triangles->flags & 0x2)
            {
                v1 = (xVec3*)triangles->v.p + 2;
                v2 = (xVec3*)triangles->v.p + 1;
            }
            else
            {
                v1 = (xVec3*)triangles->v.p + 1;
                v2 = (xVec3*)triangles->v.p + 2;
            }
            U8 tester = 0;
            if (xVec3Dot(&pd->N, v0) - pd->d > 0.0f)
            {
                tester |= 1;
            }
            else
            {
                tester |= 2;
            }
            if (xVec3Dot(&pd->N, v1) - pd->d > 0.0f)
            {
                tester |= 1;
            }
            else
            {
                tester |= 2;
            }
            if (xVec3Dot(&pd->N, v2) - pd->d > 0.0f)
            {
                tester |= 1;
            }
            else
            {
                tester |= 2;
            }
            if ((tester & 1) && (tester & 2))
            {
                F32 a, b, c, det;
                xVec3 v1p, v2p, N;
                F32 pdist;
                F32 t1 = -1.0f;
                F32 t2 = -1.0f;
                xVec3Sub(&v1p, v1, v0);
                xVec3Sub(&v2p, v2, v0);
                xVec3Cross(&N, &v1p, &v2p);
                if (xVec3Normalize(&N, &N))
                {
                    xVec3 s1, s2;
                    F32 c1, c2, c0;
                    F32 d11, d12, d22;
                    F32 p1, p2;
                    xVec3 pp;
                    pdist = -xVec3Dot(&N, v0);
                    a = -N.y * p->gravity * 0.5f;
                    b = N.x * p->initVel.x + N.y * p->initVel.y + N.z * p->initVel.z;
                    c = N.x * p->initPos.x + N.y * p->initPos.y + N.z * p->initPos.z + pdist;
                    if (a < 1e-5f && a > -1e-5f)
                    {
                        if (b > 1e-5f || b < -1e-5f)
                        {
                            t1 = -c / b;
                        }
                    }
                    else
                    {
                        det = b * b - 4.0f * a * c;
                        if (det > 0.0f)
                        {
                            t1 = (-b + xsqrt(det)) / (2.0f * a);
                            t2 = (-b - xsqrt(det)) / (2.0f * a);
                        }
                        else if (det == 0.0f)
                        {
                            t1 = -b / a;
                        }
                    }
                    d11 = xVec3Dot(&v1p, &v1p);
                    d12 = xVec3Dot(&v1p, &v2p);
                    d22 = xVec3Dot(&v2p, &v2p);
                    if (t1 >= p->minTime && t1 < p->maxTime && t1 < pd->colls->dist)
                    {
                        xVec3Copy(&s1, &p->initPos);
                        xVec3AddScaled(&s1, &p->initVel, t1);
                        s1.y -= 0.5f * p->gravity * t1 * t1;
                        xVec3Sub(&pp, &s1, v0);
                        p1 = xVec3Dot(&pp, &v1p);
                        p2 = xVec3Dot(&pp, &v2p);
                        c1 = (p1 * d22 - p2 * d12) / (d11 * d22 - d12 * d12);
                        c2 = (p2 * d11 - p1 * d12) / (d11 * d22 - d12 * d12);
                        c0 = 1.0f - c1 - c2;
                        if (c1 >= 0.0f && c2 >= 0.0f && c0 >= 0.0f)
                        {
                            colls->flags |= k_HIT_IT;
                            pd->colls->dist = t1;
                            xVec3Copy(&pd->colls->norm, &N);
                        }
                    }
                    if (t2 >= p->minTime && t2 < p->maxTime && t2 < pd->colls->dist)
                    {
                        xVec3Copy(&s2, &p->initPos);
                        xVec3AddScaled(&s2, &p->initVel, t2);
                        s2.y -= 0.5f * p->gravity * t2 * t2;
                        xVec3Sub(&pp, &s2, v0);
                        p1 = xVec3Dot(&pp, &v1p);
                        p2 = xVec3Dot(&pp, &v2p);
                        c1 = (p1 * d22 - p2 * d12) / (d11 * d22 - d12 * d12);
                        c2 = (p2 * d11 - p1 * d12) / (d11 * d22 - d12 * d12);
                        c0 = 1.0f - c1 - c2;
                        if (c1 >= 0.0f && c2 >= 0.0f && c0 >= 0.0f)
                        {
                            colls->flags |= k_HIT_IT;
                            pd->colls->dist = t2;
                            xVec3Copy(&pd->colls->norm, &N);
                        }
                    }
                }
            }
        }
    } while ((triangles++)->flags & 0x1);

    return 1;
}

S32 xParabolaHitsEnv(xParabola* p, const xEnv* env, xCollis* colls)
//NONMATCH("https://decomp.me/scratch/Hli1c")
{
    RwBBox xb;
    F32 tmp;

    if (p->minTime >= p->maxTime)
        return 0;

    colls->flags = 0;
    colls->dist = HUGE;

    xb.inf.x = p->initPos.x + p->initVel.x * p->minTime;
    xb.sup.x = p->initPos.x + p->initVel.x * p->maxTime;
    if (xb.inf.x > xb.sup.x)
    {
        tmp = xb.inf.x;
        xb.inf.x = xb.sup.x;
        xb.sup.x = tmp;
    }

    xb.inf.z = p->initPos.z + p->initVel.z * p->minTime;
    xb.sup.z = p->initPos.z + p->initVel.z * p->maxTime;
    if (xb.inf.z > xb.sup.z)
    {
        tmp = xb.inf.z;
        xb.inf.z = xb.sup.z;
        xb.sup.z = tmp;
    }

    xb.inf.y = p->initPos.y + p->initVel.y * p->minTime;
    xb.inf.y -= 0.5f * p->gravity * p->minTime * p->minTime;
    xb.sup.y = p->initPos.y + p->initVel.y * p->maxTime;
    xb.sup.y -= 0.5f * p->gravity * p->maxTime * p->maxTime;
    if (xb.inf.y > xb.sup.y)
    {
        tmp = xb.inf.y;
        xb.inf.y = xb.sup.y;
        xb.sup.y = tmp;
    }

    if (p->gravity > 1e-5f || p->gravity < -1e-5f)
    {
        F32 extremumT = p->initVel.y / p->gravity;
        if (p->minTime < extremumT && extremumT < p->maxTime)
        {
            F32 extremum =
                p->initPos.y + (p->initVel.y - 0.5f * p->gravity * extremumT) * extremumT;
            if (extremum < xb.inf.y)
            {
                xb.inf.y = extremum;
            }
            else if (extremum > xb.sup.y)
            {
                xb.sup.y = extremum;
            }
        }
    }

    ParabolaCBData data;
    data.p = p;
    data.N.y = 0.0f;
    data.N.x = -p->initVel.z;
    data.N.z = p->initVel.x;
    if (data.N.x < 1e-5f && data.N.x > -1e-5f && data.N.z < 1e-5f && data.N.z > -1e-5f)
    {
        data.N.x = 1.0f;
        data.N.z = 0.0f;
    }
    data.d = xVec3Dot(&data.N, &p->initPos);
    data.colls = colls;

    if (env->geom->jsp)
    {
        xClumpColl_ForAllBoxLeafNodeIntersections(env->geom->jsp->colltree, &xb, xParabolaEnvCB,
                                                  &data);
    }

    if (colls->flags & k_HIT_IT)
    {
        return 1;
    }

    return 0;
}

U32 xBoxHitsSphere(const xBox* a, const xSphere* b, xCollis* coll)
{
    U32 uVar1;

    xIsect isx;

    iBoxIsectSphere(a, b, &isx);

    if (!(isx.penned <= 0.0f))
    {
        uVar1 = 0;
        coll->flags &= 0xfffffffe;
    }
    else
    {
        if (isx.contained <= 0.0f)
        {
            coll->flags |= 0x10;
        }
        coll->dist = isx.dist;
        if (coll->flags & 0x0400)
        {
            xVec3Copy(&coll->tohit, &isx.norm);
        }
        if ((coll->flags & 0x800) != 0)
        {
            if (isx.dist == 0.0f)
            {
                xVec3Copy(&coll->depen, &g_O3);
            }
            else
            {
                xVec3SMul(&coll->depen, &isx.norm, isx.penned / isx.dist);
            }
        }
        if ((coll->flags & 0x1200) != 0)
        {
            xVec3Normalize(&coll->hdng, &isx.norm);
        }
        if ((coll->flags & 0x200) != 0)
        {
            xVec3Inv(&coll->norm, &coll->hdng);
        }
        uVar1 = 1;
        coll->flags |= 1;
    }
    return uVar1;
}

#define NORMALIZE(v, s)                                                                            \
    MACRO_START                                                                                    \
    {                                                                                              \
        F32 _mag = SQR((v)->x) + SQR((v)->y) + SQR((v)->z);                                        \
        if (xabs(_mag - 1.0f) > 0.000001f && _mag > 0.00001f)                                      \
        {                                                                                          \
            _mag = xsqrt(_mag);                                                                    \
            *(s) *= _mag;                                                                          \
            _mag = 1.0f / _mag;                                                                    \
            (v)->x *= _mag;                                                                        \
            (v)->y *= _mag;                                                                        \
            (v)->z *= _mag;                                                                        \
        }                                                                                          \
    }                                                                                              \
    MACRO_STOP

static U32 Mgc_BoxBoxTest(const xBox* a, const xMat4x3* matA, const xBox* b, const xMat4x3* matB)
{
    xVec3 akA[3], akB[3];
    F32 afEA[3], afEB[3];

    afEA[0] = 0.5f * (a->upper.x - a->lower.x);
    afEA[1] = 0.5f * (a->upper.y - a->lower.y);
    afEA[2] = 0.5f * (a->upper.z - a->lower.z);
    akA[0] = matA->right;
    akA[1] = matA->up;
    akA[2] = matA->at;
    NORMALIZE(&akA[0], &afEA[0]);
    NORMALIZE(&akA[1], &afEA[1]);
    NORMALIZE(&akA[2], &afEA[2]);

    afEB[0] = 0.5f * (b->upper.x - b->lower.x);
    afEB[1] = 0.5f * (b->upper.y - b->lower.y);
    afEB[2] = 0.5f * (b->upper.z - b->lower.z);
    akB[0] = matB->right;
    akB[1] = matB->up;
    akB[2] = matB->at;
    NORMALIZE(&akB[0], &afEB[0]);
    NORMALIZE(&akB[1], &afEB[1]);
    NORMALIZE(&akB[2], &afEB[2]);

    xVec3 centA, centB;
    centA.x = 0.5f * (a->upper.x + a->lower.x);
    centA.y = 0.5f * (a->upper.y + a->lower.y);
    centA.z = 0.5f * (a->upper.z + a->lower.z);
    centB.x = 0.5f * (b->upper.x + b->lower.x);
    centB.y = 0.5f * (b->upper.y + b->lower.y);
    centB.z = 0.5f * (b->upper.z + b->lower.z);
    xMat4x3Toworld(&centA, matA, &centA);
    xMat4x3Toworld(&centB, matB, &centB);

    xVec3 kD;
    kD.x = centB.x - centA.x;
    kD.y = centB.y - centA.y;
    kD.z = centB.z - centA.z;

    F32 aafC[3][3], aafAbsC[3][3];
    F32 afAD[3];
    F32 fR0, fR1, fR, fR01;

    aafC[0][0] = akA[0].x * akB[0].x + akA[0].y * akB[0].y + akA[0].z * akB[0].z;
    aafC[0][1] = akA[0].x * akB[1].x + akA[0].y * akB[1].y + akA[0].z * akB[1].z;
    aafC[0][2] = akA[0].x * akB[2].x + akA[0].y * akB[2].y + akA[0].z * akB[2].z;
    afAD[0] = akA[0].x * kD.x + akA[0].y * kD.y + akA[0].z * kD.z;
    aafAbsC[0][0] = xabs(aafC[0][0]);
    aafAbsC[0][1] = xabs(aafC[0][1]);
    aafAbsC[0][2] = xabs(aafC[0][2]);
    fR = xabs(afAD[0]);
    fR1 = afEB[0] * aafAbsC[0][0] + afEB[1] * aafAbsC[0][1] + afEB[2] * aafAbsC[0][2];
    fR01 = afEA[0] + fR1;
    if (fR > fR01)
        return 0;

    aafC[1][0] = akA[1].x * akB[0].x + akA[1].y * akB[0].y + akA[1].z * akB[0].z;
    aafC[1][1] = akA[1].x * akB[1].x + akA[1].y * akB[1].y + akA[1].z * akB[1].z;
    aafC[1][2] = akA[1].x * akB[2].x + akA[1].y * akB[2].y + akA[1].z * akB[2].z;
    afAD[1] = akA[1].x * kD.x + akA[1].y * kD.y + akA[1].z * kD.z;
    aafAbsC[1][0] = xabs(aafC[1][0]);
    aafAbsC[1][1] = xabs(aafC[1][1]);
    aafAbsC[1][2] = xabs(aafC[1][2]);
    fR = xabs(afAD[1]);
    fR1 = afEB[0] * aafAbsC[1][0] + afEB[1] * aafAbsC[1][1] + afEB[2] * aafAbsC[1][2];
    fR01 = afEA[1] + fR1;
    if (fR > fR01)
        return 0;

    aafC[2][0] = akA[2].x * akB[0].x + akA[2].y * akB[0].y + akA[2].z * akB[0].z;
    aafC[2][1] = akA[2].x * akB[1].x + akA[2].y * akB[1].y + akA[2].z * akB[1].z;
    aafC[2][2] = akA[2].x * akB[2].x + akA[2].y * akB[2].y + akA[2].z * akB[2].z;
    afAD[2] = akA[2].x * kD.x + akA[2].y * kD.y + akA[2].z * kD.z;
    aafAbsC[2][0] = xabs(aafC[2][0]);
    aafAbsC[2][1] = xabs(aafC[2][1]);
    aafAbsC[2][2] = xabs(aafC[2][2]);
    fR = xabs(afAD[2]);
    fR1 = afEB[0] * aafAbsC[2][0] + afEB[1] * aafAbsC[2][1] + afEB[2] * aafAbsC[2][2];
    fR01 = afEA[2] + fR1;
    if (fR > fR01)
        return 0;

    fR = xabs(akB[0].x * kD.x + akB[0].y * kD.y + akB[0].z * kD.z);
    fR0 = afEA[0] * aafAbsC[0][0] + afEA[1] * aafAbsC[1][0] + afEA[2] * aafAbsC[2][0];
    fR01 = fR0 + afEB[0];
    if (fR > fR01)
        return 0;

    fR = xabs(akB[1].x * kD.x + akB[1].y * kD.y + akB[1].z * kD.z);
    fR0 = afEA[0] * aafAbsC[0][1] + afEA[1] * aafAbsC[1][1] + afEA[2] * aafAbsC[2][1];
    fR01 = fR0 + afEB[1];
    if (fR > fR01)
        return 0;

    fR = xabs(akB[2].x * kD.x + akB[2].y * kD.y + akB[2].z * kD.z);
    fR0 = afEA[0] * aafAbsC[0][2] + afEA[1] * aafAbsC[1][2] + afEA[2] * aafAbsC[2][2];
    fR01 = fR0 + afEB[2];
    if (fR > fR01)
        return 0;

    fR = xabs(afAD[2] * aafC[1][0] - afAD[1] * aafC[2][0]);
    fR0 = afEA[1] * aafAbsC[2][0] + afEA[2] * aafAbsC[1][0];
    fR1 = afEB[1] * aafAbsC[0][2] + afEB[2] * aafAbsC[0][1];
    fR01 = fR0 + fR1;
    if (fR > fR01)
        return 0;

    fR = xabs(afAD[2] * aafC[1][1] - afAD[1] * aafC[2][1]);
    fR0 = afEA[1] * aafAbsC[2][1] + afEA[2] * aafAbsC[1][1];
    fR1 = afEB[0] * aafAbsC[0][2] + afEB[2] * aafAbsC[0][0];
    fR01 = fR0 + fR1;
    if (fR > fR01)
        return 0;

    fR = xabs(afAD[2] * aafC[1][2] - afAD[1] * aafC[2][2]);
    fR0 = afEA[1] * aafAbsC[2][2] + afEA[2] * aafAbsC[1][2];
    fR1 = afEB[0] * aafAbsC[0][1] + afEB[1] * aafAbsC[0][0];
    fR01 = fR0 + fR1;
    if (fR > fR01)
        return 0;

    fR = xabs(afAD[0] * aafC[2][0] - afAD[2] * aafC[0][0]);
    fR0 = afEA[0] * aafAbsC[2][0] + afEA[2] * aafAbsC[0][0];
    fR1 = afEB[1] * aafAbsC[1][2] + afEB[2] * aafAbsC[1][1];
    fR01 = fR0 + fR1;
    if (fR > fR01)
        return 0;

    fR = xabs(afAD[0] * aafC[2][1] - afAD[2] * aafC[0][1]);
    fR0 = afEA[0] * aafAbsC[2][1] + afEA[2] * aafAbsC[0][1];
    fR1 = afEB[0] * aafAbsC[1][2] + afEB[2] * aafAbsC[1][0];
    fR01 = fR0 + fR1;
    if (fR > fR01)
        return 0;

    fR = xabs(afAD[0] * aafC[2][2] - afAD[2] * aafC[0][2]);
    fR0 = afEA[0] * aafAbsC[2][2] + afEA[2] * aafAbsC[0][2];
    fR1 = afEB[0] * aafAbsC[1][1] + afEB[1] * aafAbsC[1][0];
    fR01 = fR0 + fR1;
    if (fR > fR01)
        return 0;

    fR = xabs(afAD[1] * aafC[0][0] - afAD[0] * aafC[1][0]);
    fR0 = afEA[0] * aafAbsC[1][0] + afEA[1] * aafAbsC[0][0];
    fR1 = afEB[1] * aafAbsC[2][2] + afEB[2] * aafAbsC[2][1];
    fR01 = fR0 + fR1;
    if (fR > fR01)
        return 0;

    fR = xabs(afAD[1] * aafC[0][1] - afAD[0] * aafC[1][1]);
    fR0 = afEA[0] * aafAbsC[1][1] + afEA[1] * aafAbsC[0][1];
    fR1 = afEB[0] * aafAbsC[2][2] + afEB[2] * aafAbsC[2][0];
    fR01 = fR0 + fR1;
    if (fR > fR01)
        return 0;

    fR = xabs(afAD[1] * aafC[0][2] - afAD[0] * aafC[1][2]);
    fR0 = afEA[0] * aafAbsC[1][2] + afEA[1] * aafAbsC[0][2];
    fR1 = afEB[0] * aafAbsC[2][1] + afEB[1] * aafAbsC[2][0];
    fR01 = fR0 + fR1;
    if (fR > fR01)
        return 0;

    return 1;
}

U32 xBoxHitsObb(const xBox* a, const xBox* b, const xMat4x3* mat, xCollis* coll)
{
    if (Mgc_BoxBoxTest(a, &g_I3, b, mat))
    {
        coll->flags |= k_HIT_IT;
        return 1;
    }
    coll->flags &= ~k_HIT_IT;
    return 0;
}

namespace
{
    inline void render_tri(xCollis::tri_data& tri, const xModelInstance& model)
    {
    }
} // namespace

void xCollideCalcTri(xCollis::tri_data& tri, const xModelInstance& model, const xVec3& center,
                     const xVec3& heading)
{
    xVec3 v[3];
    RpGeometry* geom = RpAtomicGetGeometry(model.Data);

    const xVec3* verts = model.anim_coll.verts;
    if (!verts)
    {
        const RpMorphTarget* mt = RpGeometryGetMorphTarget(geom, 0);
        verts = (xVec3*)RpMorphTargetGetVertices(mt);
    }

    const RpTriangle& t = RpGeometryGetTriangles(geom)[tri.index];
    for (S32 i = 0; i < 3; i++)
    {
        v[i] = verts[t.vertIndex[i]];
    }

    xVec3 e[3];
    e[0] = v[1] - v[0];
    e[1] = v[2] - v[1];
    e[2] = v[0] - v[2];

    struct
    {
        xVec3 norm;
        F32 D;
    } plane;

    plane.norm = e[0].cross(e[2]);
    plane.D = -v[0].dot(plane.norm);

    xVec3 p;
    F32 num = plane.D + plane.norm.dot(center);
    F32 denom = plane.norm.dot(heading);
    if (xfeq0(denom))
    {
        p = v[0];
    }
    else
    {
        p = heading * -(num / denom) + center;
    }

    xVec3 b, A, B, C, AxB, CxB;
    A = p - v[0];
    B = v[2] - v[1];
    C = v[1] - v[0];
    AxB = A.cross(B);
    CxB = C.cross(B);

    F32 len2 = AxB.length2();
    if (xfeq0(len2))
    {
        b = v[1];
    }
    else
    {
        b = v[0] + A * (CxB.dot(AxB) / len2);
    }

    {
        xVec3 d = b - v[0];
        xVec3 ad = d.get_abs();
        if (ad.x >= ad.y && ad.x >= ad.z)
        {
            tri.r = xfeq0(ad.x) ? 0.0f : (p.x - v[0].x) / d.x;
        }
        else if (ad.y >= ad.z)
        {
            tri.r = xfeq0(ad.y) ? 0.0f : (p.y - v[0].y) / d.y;
        }
        else
        {
            tri.r = xfeq0(ad.z) ? 0.0f : (p.z - v[0].z) / d.z;
        }
    }

    {
        xVec3 d = v[2] - v[1];
        xVec3 ad = d.get_abs();
        if (ad.x >= ad.y && ad.x >= ad.z)
        {
            tri.d = xfeq0(ad.x) ? 0.0f : (b.x - v[1].x) / d.x;
        }
        else if (ad.y >= ad.z)
        {
            tri.d = xfeq0(ad.y) ? 0.0f : (b.y - v[1].y) / d.y;
        }
        else
        {
            tri.d = xfeq0(ad.z) ? 0.0f : (b.z - v[1].z) / d.z;
        }
    }

    render_tri(tri, model);
}

xVec3 xCollisTriHit(const xCollis::tri_data& tri, const xModelInstance& model)
{
    const xMat4x3& m = *(xMat4x3*)model.Mat;
    xVec3 v[3];
    RpGeometry* geom = RpAtomicGetGeometry(model.Data);

    const xVec3* verts = model.anim_coll.verts;
    if (!verts)
    {
        const RpMorphTarget* mt = RpGeometryGetMorphTarget(geom, 0);
        verts = (xVec3*)RpMorphTargetGetVertices(mt);
    }

    const RpTriangle& t = RpGeometryGetTriangles(geom)[tri.index];
    for (S32 i = 0; i < 3; i++)
    {
        v[i] = verts[t.vertIndex[i]];
        xMat4x3Toworld(&v[i], &m, &v[i]);
    }

    xVec3 r[2];
    xVec3 d, A, B, C, AxB, CxB;

    r[0] = v[0] + (v[1] - v[0]) * tri.r;
    r[1] = v[0] + (v[2] - v[0]) * tri.r;
    d = r[0] + (r[1] - r[0]) * tri.d;
    A = d - v[0];
    B = r[1] - r[0];
    C = r[0] - v[0];
    AxB = A.cross(B);
    CxB = C.cross(B);

    F32 len2 = AxB.length2();
    xVec3 hit = (xfeq0(len2)) ? v[0] : v[0] + A * (CxB.dot(AxB) / len2);

    return hit;
}

RpCollBSPTree* _rpCollBSPTreeForAllCapsuleLeafNodeIntersections(
    RpCollBSPTree* tree, RwLine* line, RwReal radius, RpV3dGradient* grad,
    RwBool (*callBack)(RwInt32, RwInt32, void*), void* data)
{
    RwInt32 nStack;
    nodeInfo nodeStack[33];
    nodeInfo currNode;
    RwLine lineStack[33];
    RwLine currLine;

    currNode.type = (tree->branchNodes ? 1 : 0) + 1;
    currNode.index = 0;
    currLine = *line;
    nStack = 0;

    while (nStack >= 0)
    {
        if (currNode.type == 1)
        {
            RpCollBSPLeafNode* leaf = &tree->leafNodes[currNode.index];
            if (!callBack(leaf->numPolygons, leaf->firstPolygon, data))
            {
                return NULL;
            }
            currNode = nodeStack[nStack];
            currLine = lineStack[nStack];
            nStack--;
        }
        else
        {
            RpCollBSPBranchNode* branch = &tree->branchNodes[currNode.index];
            RwUInt32 branch_type = branch->type;
            RwUInt32 branch_leftType = branch->leftType;
            RwUInt32 branch_rightType = branch->rightType;
            RwUInt32 branch_leftNode = branch->leftNode;
            RwUInt32 branch_rightNode = branch->rightNode;
            RwSplitBits lStart, lEnd, rStart, rEnd;
            lStart.nReal = *(RwReal*)(((RwUInt8*)&currLine.start) + branch_type) -
                           (branch->leftValue + radius);
            lEnd.nReal =
                *(RwReal*)(((RwUInt8*)&currLine.end) + branch_type) - (branch->leftValue + radius);
            rStart.nReal = *(RwReal*)(((RwUInt8*)&currLine.start) + branch_type) -
                           (branch->rightValue - radius);
            rEnd.nReal =
                *(RwReal*)(((RwUInt8*)&currLine.end) + branch_type) - (branch->rightValue - radius);
            if (rStart.nInt < 0 && rEnd.nInt < 0)
            {
                currNode.type = branch_leftType;
                currNode.index = branch_leftNode;
            }
            else if (lStart.nInt >= 0 && lEnd.nInt >= 0)
            {
                currNode.type = branch_rightType;
                currNode.index = branch_rightNode;
            }
            else if (!((lStart.nInt ^ lEnd.nInt) & 0x80000000) &&
                     !((rStart.nInt ^ rEnd.nInt) & 0x80000000))
            {
                if (rStart.nInt < rEnd.nInt)
                {
                    nStack++;
                    nodeStack[nStack].type = branch_rightType;
                    nodeStack[nStack].index = branch_rightNode;
                    lineStack[nStack].start = currLine.start;
                    lineStack[nStack].end = currLine.end;
                    currNode.type = branch_leftType;
                    currNode.index = branch_leftNode;
                }
                else
                {
                    nStack++;
                    nodeStack[nStack].type = branch_leftType;
                    nodeStack[nStack].index = branch_leftNode;
                    lineStack[nStack].start = currLine.start;
                    lineStack[nStack].end = currLine.end;
                    currNode.type = branch_rightType;
                    currNode.index = branch_rightNode;
                }
            }
            else
            {
                if (((lStart.nInt ^ lEnd.nInt) & 0x80000000) && rStart.nInt >= 0 && rEnd.nInt >= 0)
                {
                    RwV3d var_48C;
                    RwReal delta;
                    switch (branch_type)
                    {
                    case 0:
                        delta = branch->leftValue - currLine.start.x;
                        var_48C.x = branch->leftValue;
                        var_48C.y = currLine.start.y + grad->dydx * delta;
                        var_48C.z = currLine.start.z + grad->dzdx * delta;
                        break;
                    case 4:
                        delta = branch->leftValue - currLine.start.y;
                        var_48C.x = currLine.start.x + grad->dxdy * delta;
                        var_48C.y = branch->leftValue;
                        var_48C.z = currLine.start.z + grad->dzdy * delta;
                        break;
                    case 8:
                        delta = branch->leftValue - currLine.start.z;
                        var_48C.x = currLine.start.x + grad->dxdz * delta;
                        var_48C.y = currLine.start.y + grad->dydz * delta;
                        var_48C.z = branch->leftValue;
                        break;
                    }
                    if (lStart.nInt < 0)
                    {
                        nStack++;
                        nodeStack[nStack].type = branch_rightType;
                        nodeStack[nStack].index = branch_rightNode;
                        lineStack[nStack].start = currLine.start;
                        lineStack[nStack].end = currLine.end;
                        currNode.type = branch_leftType;
                        currNode.index = branch_leftNode;
                        currLine.end = var_48C;
                    }
                    else
                    {
                        nStack++;
                        nodeStack[nStack].type = branch_leftType;
                        nodeStack[nStack].index = branch_leftNode;
                        lineStack[nStack].start = var_48C;
                        lineStack[nStack].end = currLine.end;
                        currNode.type = branch_rightType;
                        currNode.index = branch_rightNode;
                    }
                }
                else if (((rStart.nInt ^ rEnd.nInt) & 0x80000000) && lStart.nInt < 0 &&
                         lEnd.nInt < 0)
                {
                    RwV3d var_498;
                    RwReal delta;
                    switch (branch_type)
                    {
                    case 0:
                        delta = branch->rightValue - currLine.start.x;
                        var_498.x = branch->rightValue;
                        var_498.y = currLine.start.y + grad->dydx * delta;
                        var_498.z = currLine.start.z + grad->dzdx * delta;
                        break;
                    case 4:
                        delta = branch->rightValue - currLine.start.y;
                        var_498.x = currLine.start.x + grad->dxdy * delta;
                        var_498.y = branch->rightValue;
                        var_498.z = currLine.start.z + grad->dzdy * delta;
                        break;
                    case 8:
                        delta = branch->rightValue - currLine.start.z;
                        var_498.x = currLine.start.x + grad->dxdz * delta;
                        var_498.y = currLine.start.y + grad->dydz * delta;
                        var_498.z = branch->rightValue;
                        break;
                    }
                    if (rStart.nInt < 0)
                    {
                        nStack++;
                        nodeStack[nStack].type = branch_rightType;
                        nodeStack[nStack].index = branch_rightNode;
                        lineStack[nStack].start = var_498;
                        lineStack[nStack].end = currLine.end;
                        currNode.type = branch_leftType;
                        currNode.index = branch_leftNode;
                    }
                    else
                    {
                        nStack++;
                        nodeStack[nStack].type = branch_leftType;
                        nodeStack[nStack].index = branch_leftNode;
                        lineStack[nStack].start = currLine.start;
                        lineStack[nStack].end = currLine.end;
                        currNode.type = branch_rightType;
                        currNode.index = branch_rightNode;
                        currLine.end = var_498;
                    }
                }
                else
                {
                    RwV3d var_4A4, var_4B0;
                    {
                        RwReal delta;
                        switch (branch_type)
                        {
                        case 0:
                            delta = branch->leftValue - currLine.start.x;
                            var_4A4.x = branch->leftValue;
                            var_4A4.y = currLine.start.y + grad->dydx * delta;
                            var_4A4.z = currLine.start.z + grad->dzdx * delta;
                            break;
                        case 4:
                            delta = branch->leftValue - currLine.start.y;
                            var_4A4.x = currLine.start.x + grad->dxdy * delta;
                            var_4A4.y = branch->leftValue;
                            var_4A4.z = currLine.start.z + grad->dzdy * delta;
                            break;
                        case 8:
                            delta = branch->leftValue - currLine.start.z;
                            var_4A4.x = currLine.start.x + grad->dxdz * delta;
                            var_4A4.y = currLine.start.y + grad->dydz * delta;
                            var_4A4.z = branch->leftValue;
                            break;
                        }
                    }
                    {
                        RwReal delta;
                        switch (branch_type)
                        {
                        case 0:
                            delta = branch->rightValue - currLine.start.x;
                            var_4B0.x = branch->rightValue;
                            var_4B0.y = currLine.start.y + grad->dydx * delta;
                            var_4B0.z = currLine.start.z + grad->dzdx * delta;
                            break;
                        case 4:
                            delta = branch->rightValue - currLine.start.y;
                            var_4B0.x = currLine.start.x + grad->dxdy * delta;
                            var_4B0.y = branch->rightValue;
                            var_4B0.z = currLine.start.z + grad->dzdy * delta;
                            break;
                        case 8:
                            delta = branch->rightValue - currLine.start.z;
                            var_4B0.x = currLine.start.x + grad->dxdz * delta;
                            var_4B0.y = currLine.start.y + grad->dydz * delta;
                            var_4B0.z = branch->rightValue;
                            break;
                        }
                    }
                    if (lStart.nInt < 0)
                    {
                        nStack++;
                        nodeStack[nStack].type = branch_rightType;
                        nodeStack[nStack].index = branch_rightNode;
                        lineStack[nStack].start = var_4B0;
                        lineStack[nStack].end = currLine.end;
                        currNode.type = branch_leftType;
                        currNode.index = branch_leftNode;
                        currLine.end = var_4A4;
                    }
                    else
                    {
                        nStack++;
                        nodeStack[nStack].type = branch_leftType;
                        nodeStack[nStack].index = branch_leftNode;
                        lineStack[nStack].start = var_4A4;
                        lineStack[nStack].end = currLine.end;
                        currNode.type = branch_rightType;
                        currNode.index = branch_rightNode;
                        currLine.end = var_4B0;
                    }
                }
            }
        }
    }

    return tree;
}

void xSweptSpherePrepare(xSweptSphere* sws, xVec3* start, xVec3* end, F32 radius)
//NONMATCH("https://decomp.me/scratch/5VJcM")
{
    sws->start = *start;
    sws->end = *end;
    sws->radius = radius;

    F32 dx = end->x - start->x;
    F32 dy = end->y - start->y;
    F32 dz = end->z - start->z;

    sws->dist = xsqrt(SQR(dx) + SQR(dy) + SQR(dz));
    if (sws->dist < 0.0001f)
    {
        sws->dist = 0.0f;
        sws->curdist = 0.0f;
        return;
    }

    F32 invmag = 1.0f / sws->dist;
    sws->basis.xm.at.x = dx * invmag;
    sws->basis.xm.at.y = dy * invmag;
    sws->basis.xm.at.z = dz * invmag;

    if (xabs(dz) > xabs(dx) && xabs(dz) > xabs(dy))
    {
        sws->basis.xm.up.x = 0.0f;
        sws->basis.xm.up.y = dz;
        sws->basis.xm.up.z = -dy;
    }
    else
    {
        sws->basis.xm.up.x = -dy;
        sws->basis.xm.up.y = dx;
        sws->basis.xm.up.z = 0.0f;
    }
    sws->basis.xm.up.normalize();

    xVec3Cross(&sws->basis.xm.right, &sws->basis.xm.up, &sws->basis.xm.at);

    sws->basis.xm.pos.x = start->x;
    sws->basis.xm.pos.y = start->y;
    sws->basis.xm.pos.z = start->z;

    xMat4x3OrthoInv(&sws->invbasis.xm, &sws->basis.xm);

    sws->curdist = sws->dist;
    sws->optr = NULL;
    sws->mptr = NULL;

    xCapsule tmpC;
    tmpC.start = *start;
    tmpC.end = *end;
    tmpC.r = radius;
    xBoxInitBoundCapsule(&sws->box, &tmpC);

    xQuickCullForBox(&sws->qcd, &sws->box);

    sws->boxsize = MAX(sws->box.upper.x - sws->box.lower.x, sws->box.upper.y - sws->box.lower.y);
    sws->boxsize = MAX(sws->box.upper.z - sws->box.lower.z, sws->boxsize);
}

void xSweptSphereGetResults(xSweptSphere* sws)
{
    F32 tandot;
    xVec3 tanplane;

    sws->hitIt = 0;

    if (!sws->dist)
        return;
    if (sws->curdist == sws->dist)
        return;

    sws->hitIt = 1;
    sws->worldPos.x = sws->basis.xm.pos.x + sws->curdist * sws->basis.xm.at.x;
    sws->worldPos.y = sws->basis.xm.pos.y + sws->curdist * sws->basis.xm.at.y;
    sws->worldPos.z = sws->basis.xm.pos.z + sws->curdist * sws->basis.xm.at.z;

    xMat4x3Toworld(&sws->worldContact, &sws->basis.xm, &sws->contact);
    xMat3x3RMulVec(&sws->worldPolynorm, &sws->basis.xm, &sws->polynorm);

    sws->worldNormal.x = sws->worldPos.x - sws->worldContact.x;
    sws->worldNormal.y = sws->worldPos.y - sws->worldContact.y;
    sws->worldNormal.z = sws->worldPos.z - sws->worldContact.z;

    xVec3Normalize(&sws->worldNormal, &sws->worldNormal);

    xVec3Cross(&tanplane, &sws->basis.xm.at, &sws->worldNormal);
    if (xVec3Length2(&tanplane) < 1e-7f)
    {
        xVec3Cross(&tanplane, &sws->basis.xm.up, &sws->worldNormal);
    }

    xVec3Cross(&sws->worldTangent, &tanplane, &sws->worldNormal);
    xVec3Normalize(&sws->worldTangent, &sws->worldTangent);

    tandot = sws->worldTangent.x * sws->basis.xm.at.x + sws->worldTangent.y * sws->basis.xm.at.y +
             sws->worldTangent.z * sws->basis.xm.at.z;
    if (tandot < 0.0f)
    {
        sws->worldTangent.x = -sws->worldTangent.x;
        sws->worldTangent.y = -sws->worldTangent.y;
        sws->worldTangent.z = -sws->worldTangent.z;
    }
}

S32 xSweptSphereToTriangle(xSweptSphere* sws, xVec3* v0, xVec3* v1, xVec3* v2)
//NONMATCH("https://decomp.me/scratch/MJ9KD")
{
    S32 i;

    if (!sws->dist)
        return 0;

    xVec3 xform[4];
    xMat4x3Toworld(&xform[0], &sws->invbasis.xm, v0);
    xMat4x3Toworld(&xform[1], &sws->invbasis.xm, v1);
    xMat4x3Toworld(&xform[2], &sws->invbasis.xm, v2);

    F32 rad = sws->radius;

    if ((xform[0].x <= -rad && xform[1].x <= -rad && xform[2].x <= -rad) ||
        (xform[0].x >= rad && xform[1].x >= rad && xform[2].x >= rad) ||
        (xform[0].y <= -rad && xform[1].y <= -rad && xform[2].y <= -rad) ||
        (xform[0].y >= rad && xform[1].y >= rad && xform[2].y >= rad) ||
        (xform[0].z <= 0.0f && xform[1].z <= 0.0f && xform[2].z <= 0.0f) ||
        (xform[0].z >= sws->curdist + rad && xform[1].z >= sws->curdist + rad &&
         xform[2].z >= sws->curdist + rad))
    {
        return 0;
    }

    xVec3 var_10C;
    F32 f1;
    var_10C.x = (xform[1].y - xform[0].y) * (xform[2].z - xform[0].z) -
                (xform[1].z - xform[0].z) * (xform[2].y - xform[0].y);
    var_10C.y = (xform[1].z - xform[0].z) * (xform[2].x - xform[0].x) -
                (xform[1].x - xform[0].x) * (xform[2].z - xform[0].z);
    var_10C.z = (xform[1].x - xform[0].x) * (xform[2].y - xform[0].y) -
                (xform[1].y - xform[0].y) * (xform[2].x - xform[0].x);
    _rwV3dNormalizeMacro(f1, (RwV3d*)&var_10C, (RwV3d*)&var_10C);
    if (isnan(var_10C.x))
    {
        return 0;
    }

    F32 f1_0 = xform[0].x * var_10C.x + xform[0].y * var_10C.y + xform[0].z * var_10C.z;
    F32 f0 = f1_0 - var_10C.z * sws->curdist;
    if ((f1_0 >= rad && f0 >= rad) || (f1_0 <= -rad && f0 <= -rad))
    {
        return 0;
    }

    if (xabs(var_10C.z) > 0.001f)
    {
        F32 f8_0 = 1.0f / var_10C.z;
        F32 f2_0 = var_10C.x * xform[0].x + var_10C.y * xform[0].y + var_10C.z * xform[0].z;
        F32 f0 = f8_0 * f2_0 - xabs(rad * f8_0);
        if (f0 >= sws->curdist)
        {
            return 0;
        }
        if (f0 <= -rad)
        {
            return 0;
        }
        xVec3 var_118;
        if (var_10C.z < 0.0f)
        {
            var_118.x = -rad * var_10C.x;
            var_118.y = -rad * var_10C.y;
            var_118.z = f0 - rad * var_10C.z;
        }
        else
        {
            var_118.x = rad * var_10C.x;
            var_118.y = rad * var_10C.y;
            var_118.z = rad * var_10C.z + f0;
        }
        F32 f10, f11, f12, f13, f21, f22, f9, f8;
        if (xabs(var_10C.x) > xabs(var_10C.y) && xabs(var_10C.x) > xabs(var_10C.z))
        {
            f10 = xform[0].y;
            f11 = xform[0].z;
            f12 = xform[1].y;
            f13 = xform[1].z;
            f21 = xform[2].y;
            f22 = xform[2].z;
            f9 = var_118.y;
            f8 = var_118.z;
        }
        else if (xabs(var_10C.y) > xabs(var_10C.z))
        {
            f10 = xform[0].x;
            f11 = xform[0].z;
            f12 = xform[1].x;
            f13 = xform[1].z;
            f21 = xform[2].x;
            f22 = xform[2].z;
            f9 = var_118.x;
            f8 = var_118.z;
        }
        else
        {
            f10 = xform[0].x;
            f11 = xform[0].y;
            f12 = xform[1].x;
            f13 = xform[1].y;
            f21 = xform[2].x;
            f22 = xform[2].y;
            f9 = var_118.x;
            f8 = var_118.y;
        }
        F32 f23 = (f13 - f11) * (f9 - f10) - (f12 - f10) * (f8 - f11);
        F32 f3 = (f22 - f13) * (f9 - f12) - (f21 - f12) * (f8 - f13);
        F32 f2 = (f11 - f22) * (f9 - f21) - (f10 - f21) * (f8 - f22);
        if ((f23 >= -1e-5f && f3 >= -1e-5f && f2 >= -1e-5f) ||
            (f23 <= -1e-5f && f3 <= -1e-5f && f2 <= -1e-5f))
        {
            sws->curdist = f0;
            sws->contact = var_118;
            sws->polynorm = var_10C;
            return 1;
        }
    }

    F32 f25 = SQR(rad);
    S32 edge_contact_found = -1;
    S32 vert_contact_found = -1;

    xform[3] = xform[0];

    F32 f24;
    for (i = 0; i < 3; i++)
    {
        xVec3 var_124;
        var_124 = xform[i];
        F32 f31 = xform[i + 1].x - xform[i].x;
        F32 f30 = xform[i + 1].y - xform[i].y;
        F32 f29 = xform[i + 1].z - xform[i].z;
        F32 f23 = SQR(f31) + SQR(f30);
        if (!(f23 < 0.001f))
        {
            F32 f22 = SQR(var_124.y * f31 - var_124.x * f30) / f23;
            if (f22 >= f25)
                continue;
            F32 f27 = -f30 * f29;
            F32 f28 = -f31 * f29;
            F32 var_128;
            xsqrtfast(var_128, SQR(f28) + SQR(f27) + SQR(f23));
            if (!(var_128 < 0.000001f))
            {
                var_128 = 1.0f / var_128;
                F32 f28_0 = f28 * var_128;
                F32 f27_0 = f27 * var_128;
                F32 f21 = f23 * var_128;
                if (!(f21 < 0.000001f))
                {
                    F32 f7 = 1.0f / f21 *
                             (f28_0 * var_124.x + f27_0 * var_124.y + f21 * var_124.z -
                              xsqrt(f25 - f22));
                    if (f7 >= sws->curdist)
                        continue;
                    if (!(f7 <= -rad))
                    {
                        F32 f4 = SQR(f29) + f23;
                        F32 f1 = -var_124.x * f31 - var_124.y * f30 + (f7 - var_124.z) * f29;
                        if (!(f1 <= 0.0f) && !(f1 >= f4))
                        {
                            f24 = f1 / f4;
                            sws->curdist = f7;
                            edge_contact_found = i;
                            vert_contact_found = -1;
                        }
                    }
                }
            }
        }
        F32 f1 = f25 - SQR(xform[i].x) - SQR(xform[i].y);
        if (!(f1 <= 0.0f))
        {
            F32 f1_0 = var_124.z - xsqrt(f1);
            if (!(f1_0 >= sws->curdist) && !(f1_0 <= -rad))
            {
                sws->curdist = f1_0;
                vert_contact_found = i;
                edge_contact_found = -1;
            }
        }
    }

    if (vert_contact_found >= 0)
    {
        sws->contact = xform[vert_contact_found];
        sws->polynorm = var_10C;
        return 1;
    }

    if (edge_contact_found >= 0)
    {
        F32 f2 = 1.0f - f24;
        sws->contact.x = f2 * xform[edge_contact_found].x + f24 * xform[edge_contact_found + 1].x;
        sws->contact.y = f2 * xform[edge_contact_found].y + f24 * xform[edge_contact_found + 1].y;
        sws->contact.z = f2 * xform[edge_contact_found].z + f24 * xform[edge_contact_found + 1].z;
        sws->polynorm = var_10C;
        return 1;
    }

    return 0;
}

void xsqrtfast(F32& out, F32 in)
{
    out = std::sqrtf(in);
}

// We don't have the implementation provided
F32 std::sqrtf(F32 x)
{
    if (x > 0.0f)
    {
        F64 guess = __frsqrte(x);
        guess = 0.5 * guess * -(guess * guess * x - 3);
        guess = 0.5 * guess * -(guess * guess * x - 3);
        guess = 0.5 * guess * -(guess * guess * x - 3);
        return x * guess;
    }
    else
    {
        return x;
    }
}

S32 xSweptSphereToSphere(xSweptSphere* sws, xSphere* sph)
{
    if (!sws->dist)
        return 0;

    xVec3 var_18;
    xMat4x3Toworld(&var_18, &sws->invbasis.xm, &sph->center);

    F32 testdist = SQR(sws->radius + sph->r) - SQR(var_18.x) - SQR(var_18.y);
    if (testdist <= 0.0f)
        return 0;

    F32 distzsqr = var_18.z - xsqrt(testdist);
    if (distzsqr >= sws->curdist)
        return 0;
    if (distzsqr <= -sws->radius)
        return 0;

    sws->curdist = distzsqr;

    F32 lerp = sws->radius / (sws->radius + sph->r);
    sws->contact.x = var_18.x * lerp;
    sws->contact.y = var_18.y * lerp;
    sws->contact.z = var_18.z * lerp + distzsqr * (1.0f - lerp);

    sws->polynorm.x = 0.0f;
    sws->polynorm.y = 0.0f;
    sws->polynorm.z = 0.0f;

    return 1;
}

S32 xSweptSphereToBox(xSweptSphere* sws, xBox* box, xMat4x3* mat)
//NONMATCH("https://decomp.me/scratch/97pAl")
{
    S32 i;
    xMat4x3 tmpmat;
    xMat4x3* boxinvbasis;

    if (!sws->dist)
        return 0;

    F32 dx = box->upper.x - box->lower.x;
    F32 dy = box->upper.y - box->lower.y;
    F32 dz = box->upper.z - box->lower.z;

    if (mat)
    {
        xMat4x3Mul(&tmpmat, mat, &sws->invbasis.xm);
        boxinvbasis = &tmpmat;
    }
    else
    {
        boxinvbasis = &sws->invbasis.xm;
    }

    F32 rad, radsqr;
    xVec3 boxPos, boxaX, boxaY, boxaZ;

    boxaX.x = dx * boxinvbasis->right.x;
    boxaX.y = dx * boxinvbasis->right.y;
    boxaX.z = dx * boxinvbasis->right.z;
    boxaY.x = dy * boxinvbasis->up.x;
    boxaY.y = dy * boxinvbasis->up.y;
    boxaY.z = dy * boxinvbasis->up.z;
    boxaZ.x = dz * boxinvbasis->at.x;
    boxaZ.y = dz * boxinvbasis->at.y;
    boxaZ.z = dz * boxinvbasis->at.z;

    xMat4x3Toworld(&boxPos, boxinvbasis, &box->lower);

    if (boxaX.z < 0.0f)
    {
        boxPos.x += boxaX.x;
        boxPos.y += boxaX.y;
        boxPos.z += boxaX.z;
        boxaX.x = -boxaX.x;
        boxaX.y = -boxaX.y;
        boxaX.z = -boxaX.z;
    }
    if (boxaY.z < 0.0f)
    {
        boxPos.x += boxaY.x;
        boxPos.y += boxaY.y;
        boxPos.z += boxaY.z;
        boxaY.x = -boxaY.x;
        boxaY.y = -boxaY.y;
        boxaY.z = -boxaY.z;
    }
    if (boxaZ.z < 0.0f)
    {
        boxPos.x += boxaZ.x;
        boxPos.y += boxaZ.y;
        boxPos.z += boxaZ.z;
        boxaZ.x = -boxaZ.x;
        boxaZ.y = -boxaZ.y;
        boxaZ.z = -boxaZ.z;
    }

    xVec3 boxNorm, boxA1, boxA2;
    S32 quadfound = 0;

    rad = sws->radius;
    radsqr = rad * rad;

    F32 f5 = boxaX.x * boxPos.x + boxaX.y * boxPos.y + boxaX.z * boxPos.z;
    F32 f23 = boxaY.x * boxPos.x + boxaY.y * boxPos.y + boxaY.z * boxPos.z;
    F32 f8 = boxaZ.x * boxPos.x + boxaZ.y * boxPos.y + boxaZ.z * boxPos.z;

    if (boxaX.z > 0.00001f)
    {
        F32 f3 = f5 / boxaX.z * boxaY.z - f23;
        F32 f4 = f5 / boxaX.z * boxaZ.z - f8;
        if (f3 >= 0.0f && f4 >= 0.0f)
        {
            quadfound = 1;
        }
    }
    else if (f5 > 0.0f)
    {
        quadfound = 1;
    }
    if (quadfound)
    {
        boxNorm.x = -boxaX.x;
        boxNorm.y = -boxaX.y;
        boxNorm.z = -boxaX.z;
        boxA1 = boxaY;
        boxA2 = boxaZ;
    }
    else
    {
        if (boxaY.z > 0.00001f)
        {
            F32 f3 = f23 / boxaY.z * boxaX.z - f5;
            F32 f4 = f23 / boxaY.z * boxaZ.z - f8;
            if (f3 >= 0.0f && f4 >= 0.0f)
            {
                quadfound = 1;
            }
        }
        else if (f23 > 0.0f)
        {
            quadfound = 1;
        }
        if (quadfound)
        {
            boxNorm.x = -boxaY.x;
            boxNorm.y = -boxaY.y;
            boxNorm.z = -boxaY.z;
            boxA1 = boxaX;
            boxA2 = boxaZ;
        }
        else
        {
            if (boxaZ.z > 0.00001f)
            {
                F32 f3 = f8 / boxaZ.z * boxaX.z - f5;
                F32 f4 = f8 / boxaZ.z * boxaY.z - f23;
                if (f3 >= 0.0f && f4 >= 0.0f)
                {
                    quadfound = 1;
                }
            }
            else if (f8 > 0.0f)
            {
                quadfound = 1;
            }
            if (quadfound)
            {
                boxNorm.x = -boxaZ.x;
                boxNorm.y = -boxaZ.y;
                boxNorm.z = -boxaZ.z;
                boxA1 = boxaX;
                boxA2 = boxaY;
            }
            else
            {
                F32 f1 = radsqr - SQR(boxPos.x) - SQR(boxPos.y);
                if (f1 <= 0.0f)
                    return 0;
                F32 f1_0 = boxPos.z - xsqrt(f1);
                if (f1_0 >= sws->curdist)
                    return 0;
                if (f1_0 <= -rad)
                    return 0;
                sws->curdist = f1_0;
                sws->contact = boxPos;
                sws->polynorm.x = -boxaX.x;
                sws->polynorm.y = -boxaX.y;
                sws->polynorm.z = -boxaX.z;
                return 1;
            }
        }
    }

    xVec3Normalize(&boxNorm, &boxNorm);

    if (xabs(boxNorm.z) > 0.001f)
    {
        F32 f8 = 1.0f / boxNorm.z;
        F32 f2 = boxNorm.x * boxPos.x + boxNorm.y * boxPos.y + boxNorm.z * boxPos.z;
        F32 f0 = f8 * f2 - xabs(rad * f8);
        if (f0 >= sws->curdist)
            return 0;
        if (f0 <= -rad)
            return 0;
        F32 f3 = f0 * boxA1.z - (boxA1.x * boxPos.x + boxA1.y * boxPos.y + boxA1.z * boxPos.z);
        F32 f2_0 = f0 * boxA2.z - (boxA2.x * boxPos.x + boxA2.y * boxPos.y + boxA2.z * boxPos.z);
        if (f3 >= 0.0f && f2_0 >= 0.0f && f3 <= (SQR(boxA1.x) + SQR(boxA1.y) + SQR(boxA1.z)) &&
            f2_0 <= (SQR(boxA2.x) + SQR(boxA2.y) + SQR(boxA2.z)))
        {
            sws->curdist = f0;
            sws->contact.x = -rad * boxNorm.x;
            sws->contact.y = -rad * boxNorm.y;
            sws->contact.z = f0 - rad * boxNorm.z;
            sws->polynorm = boxNorm;
            return 1;
        }
    }

    xVec3 xform[5];
    S32 edge_contact_found = -1;
    S32 vert_contact_found = -1;
    F32 edge_contact_lerp;

    xform[0].x = boxPos.x;
    xform[0].y = boxPos.y;
    xform[0].z = boxPos.z;
    xform[1].x = boxPos.x + boxA1.x;
    xform[1].y = boxPos.y + boxA1.y;
    xform[1].z = boxPos.z + boxA1.z;
    xform[2].x = boxPos.x + boxA1.x + boxA2.x;
    xform[2].y = boxPos.y + boxA1.y + boxA2.y;
    xform[2].z = boxPos.z + boxA1.z + boxA2.z;
    xform[3].x = boxPos.x + boxA2.x;
    xform[3].y = boxPos.y + boxA2.y;
    xform[3].z = boxPos.z + boxA2.z;
    xform[4] = xform[0];

    for (i = 0; i < 4; i++)
    {
        xVec3 pt;
        pt = xform[i];
        F32 f31 = xform[i + 1].x - xform[i].x;
        F32 f30 = xform[i + 1].y - xform[i].y;
        F32 f29 = xform[i + 1].z - xform[i].z;
        F32 f23 = SQR(f31) + SQR(f30);
        if (!(f23 < 0.001f))
        {
            F32 f22 = SQR(pt.y * f31 - pt.x * f30) / f23;
            if (f22 >= radsqr)
                continue;
            F32 f28 = -f31 * f29;
            F32 f27 = -f30 * f29;
            F32 var_1B8;
            xsqrtfast(var_1B8, SQR(f28) + SQR(f27) + SQR(f23));
            if (!(var_1B8 < 0.000001f))
            {
                var_1B8 = 1.0f / var_1B8;
                F32 f21 = f23 * var_1B8;
                F32 f28_0 = f28 * var_1B8;
                F32 f27_0 = f27 * var_1B8;
                if (!(f21 < 0.000001f))
                {
                    F32 f1 = xsqrt(radsqr - f22);
                    F32 f3 = f28_0 * pt.x + f27_0 * pt.y + f21 * pt.z;
                    F32 f7 = 1.0f / f21 * (f3 - f1);
                    if (f7 >= sws->curdist)
                        continue;
                    if (!(f7 <= -rad))
                    {
                        F32 f1 = -pt.x * f31 - pt.y * f30 + f29 * (f7 - pt.z);
                        F32 f4 = SQR(f29) + f23;
                        if (!(f1 <= 0.0f) && !(f1 >= f4))
                        {
                            sws->curdist = f7;
                            edge_contact_lerp = f1 / f4;
                            edge_contact_found = i;
                            vert_contact_found = -1;
                        }
                    }
                }
            }
        }
        F32 f1 = radsqr - SQR(xform[i].x) - SQR(xform[i].y);
        if (!(f1 <= 0.0f))
        {
            F32 f1_0 = pt.z - xsqrt(f1);
            if (f1_0 >= sws->curdist)
                continue;
            if (!(f1_0 <= -rad))
            {
                sws->curdist = f1_0;
                vert_contact_found = i;
                edge_contact_found = -1;
            }
        }
    }

    if (vert_contact_found >= 0)
    {
        sws->contact = xform[vert_contact_found];
        sws->polynorm = boxNorm;
        return 1;
    }

    if (edge_contact_found >= 0)
    {
        F32 f2 = 1.0f - edge_contact_lerp;
        sws->contact.x =
            edge_contact_lerp * xform[edge_contact_found + 1].x + f2 * xform[edge_contact_found].x;
        sws->contact.y =
            edge_contact_lerp * xform[edge_contact_found + 1].y + f2 * xform[edge_contact_found].y;
        sws->contact.z =
            edge_contact_lerp * xform[edge_contact_found + 1].z + f2 * xform[edge_contact_found].z;
        sws->polynorm = boxNorm;
        return 1;
    }

    return 0;
}

static RpCollisionTriangle* SweptSphereHitsEnvCB(RpIntersection* isx, RpWorldSector* sector,
                                                 RpCollisionTriangle* tri, RwReal dist, void* data)
{
    xSweptSphere* sws = (xSweptSphere*)data;
    if (xSweptSphereToTriangle(sws, (xVec3*)tri->vertices[0], (xVec3*)tri->vertices[1],
                               (xVec3*)tri->vertices[2]))
    {
        sws->oid = sector->polygons[tri->index].matIndex;
        sws->optr = NULL;
        sws->mptr = NULL;
        sSweptSphereHitFound = 1;
    }
    return tri;
}

static S32 SweptSphereLeafNodeCB(xClumpCollBSPTriangle* triangles, void* data)
{
    xSweptSphere* sws = (xSweptSphere*)data;
    do
    {
        if (triangles->flags & xClumpColl_FilterFlags)
        {
            RwV3d *v1, *v2, *v3;
            v1 = &triangles->v.p[0];
            if (triangles->flags & 0x2)
            {
                v2 = &triangles->v.p[2];
                v3 = &triangles->v.p[1];
            }
            else
            {
                v2 = &triangles->v.p[1];
                v3 = &triangles->v.p[2];
            }
            if (xSweptSphereToTriangle(sws, (xVec3*)v1, (xVec3*)v2, (xVec3*)v3))
            {
                sws->oid = triangles->matIndex;
                sws->optr = NULL;
                sws->mptr = NULL;
                sSweptSphereHitFound = 1;
            }
        }
    } while ((triangles++)->flags & 0x1);
    return 1;
}

S32 xSweptSphereToEnv(xSweptSphere* sws, xEnv* env)
{
    if (!sws->dist)
        return 0;

    sSweptSphereHitFound = 0;

    if (env->geom->jsp)
    {
        RwLine line;
        line.start = *(RwV3d*)&sws->start;
        line.end = *(RwV3d*)&sws->end;

        RwV3d delta;
        RwV3dSubMacro(&delta, &line.end, &line.start);

        xClumpCollV3dGradient grad;
        F32 recip;

        recip = (delta.x != 0.0f) ? (1.0f / delta.x) : 0.0f;
        grad.dydx = delta.y * recip;
        grad.dzdx = delta.z * recip;

        recip = (delta.y != 0.0f) ? (1.0f / delta.y) : 0.0f;
        grad.dxdy = delta.x * recip;
        grad.dzdy = delta.z * recip;

        recip = (delta.z != 0.0f) ? (1.0f / delta.z) : 0.0f;
        grad.dxdz = delta.x * recip;
        grad.dydz = delta.y * recip;

        xClumpColl_ForAllCapsuleLeafNodeIntersections(env->geom->jsp->colltree, &line, sws->radius,
                                                      &grad, SweptSphereLeafNodeCB, sws);
    }
    else
    {
        RpIntersection isx;
        isx.type = rpINTERSECTBOX;
        isx.t.box.sup = *(RwV3d*)&sws->box.upper;
        isx.t.box.inf = *(RwV3d*)&sws->box.lower;

        RpCollisionWorldForAllIntersections(env->geom->world, &isx, SweptSphereHitsEnvCB, sws);
    }

    return sSweptSphereHitFound;
}

static S32 SweptSphereModelCB(S32 numTriangles, S32 triOffset, void* data)
// NONMATCH("https://decomp.me/scratch/XMJhx")
{
    SweptSphereCollParam* isData = (SweptSphereCollParam*)data;
    RpGeometry* geometry = isData->geometry;
    xSweptSphere* sws = isData->sws;
    RwV3d* vertices = geometry->morphTarget->verts;
    RpTriangle* triangles = geometry->triangles;
    S32 triSlot = triOffset;
    U16* triIndex = RpCollisionGeometryGetData(geometry)->triangleMap + triOffset;

    while (numTriangles--)
    {
        triSlot = *triIndex++;
        RpTriangle* tri = &triangles[triSlot];
        S32 vertIndex0 = tri->vertIndex[0];
        S32 vertIndex1 = tri->vertIndex[1];
        S32 vertIndex2 = tri->vertIndex[2];
        RwV3d* v0 = &vertices[vertIndex0];
        RwV3d* v1 = &vertices[vertIndex1];
        RwV3d* v2 = &vertices[vertIndex2];
        if (xSweptSphereToTriangle(sws, (xVec3*)v0, (xVec3*)v1, (xVec3*)v2))
        {
            sSweptSphereHitFound = 1;
        }
    }

    return 1;
}

S32 xSweptSphereToModel(xSweptSphere* sws, RpAtomic* model, RwMatrix* mat)
//NONMATCH("https://decomp.me/scratch/3R1PB")
{
    if (!sws->dist)
        return 0;

    sSweptSphereHitFound = 0;
    sSwsModelMat = (xMat4x3*)mat;

    xMat4x3 oldinvbasis = sws->invbasis.xm;
    xMat4x3Mul(&sws->invbasis.xm, (xMat4x3*)mat, &sws->invbasis.xm);

    RpGeometry* geom = model->geometry;
    RpCollisionData* colldata = RpCollisionGeometryGetData(geom);
    RwLine line;

    if (colldata && colldata->tree)
    {
        F32 scale;
        xsqrtfast(scale, SQR(mat->right.x) + SQR(mat->right.y) + SQR(mat->right.z));
        xMat4x3Tolocal((xVec3*)&line.start, (xMat4x3*)mat, &sws->start);
        xMat4x3Tolocal((xVec3*)&line.end, (xMat4x3*)mat, &sws->end);

        SweptSphereCollParam isData;
        isData.geometry = geom;
        isData.sws = sws;

        RwV3d delta;
        RwV3dSubMacro(&delta, &line.end, &line.start);

        RpV3dGradient grad;
        F32 recip;

        recip = (delta.x != 0.0f) ? (1.0f / delta.x) : 0.0f;
        grad.dydx = delta.y * recip;
        grad.dzdx = delta.z * recip;

        recip = (delta.y != 0.0f) ? (1.0f / delta.y) : 0.0f;
        grad.dxdy = delta.x * recip;
        grad.dzdy = delta.z * recip;

        recip = (delta.z != 0.0f) ? (1.0f / delta.z) : 0.0f;
        grad.dxdz = delta.x * recip;
        grad.dydz = delta.y * recip;

        _rpCollBSPTreeForAllCapsuleLeafNodeIntersections(colldata->tree, &line, sws->radius / scale,
                                                         &grad, SweptSphereModelCB, &isData);
    }
    else
    {
        S32 i;
        S32 numT = geom->numTriangles;
        RpTriangle* tri = geom->triangles;
        RwV3d* vert = geom->morphTarget->verts;
        for (i = 0; i < numT; i++, tri++)
        {
            S32 vertIndex0 = tri->vertIndex[0];
            S32 vertIndex1 = tri->vertIndex[1];
            S32 vertIndex2 = tri->vertIndex[2];
            RwV3d* v0 = &vert[vertIndex0];
            RwV3d* v1 = &vert[vertIndex1];
            RwV3d* v2 = &vert[vertIndex2];
            if (xSweptSphereToTriangle(sws, (xVec3*)v0, (xVec3*)v1, (xVec3*)v2))
            {
                sSweptSphereHitFound = 1;
            }
        }
    }

    sws->invbasis.xm = oldinvbasis;

    return sSweptSphereHitFound;

    // return 0;
}

static void SweptSphereHitsEntCB(xScene*, xRay3* ray, xQCData* qcd, xEnt* ent, void* data)
{
    xSweptSphere* sws = (xSweptSphere*)data;

    if (!xQuickCullIsects(qcd, &ent->bound.qcd))
        return;
    if (ent == sSweptSphereMover)
        return;
    if (!(sSweptSphereCollType & ent->chkby))
        return;

    if (sSweptSphereIgnoreMovers)
    {
        xModelInstance* collmod = ent->collModel ? ent->collModel : ent->model;
        if (collmod->Flags & 0x800)
            return;

        if (ent->frame)
        {
            xMat4x3* m1 = &ent->frame->oldmat;
            xMat4x3* m2 = (xMat4x3*)ent->model->Mat;
            if (m1->pos.x != m2->pos.x || m1->pos.y != m2->pos.y || m1->pos.z != m2->pos.z ||
                m1->right.x != m2->right.x || m1->right.y != m2->right.y ||
                m1->right.z != m2->right.z || m1->up.y != m2->up.y || m1->up.z != m2->up.z ||
                m1->at.z != m2->at.z)
                return;
        }
    }

    if (ent->collLev == 5)
    {
        U32 result = 0;
        switch (ent->bound.type)
        {
        case XBOUND_TYPE_SPHERE:
        {
            F32 oldrad = ent->bound.sph.r;
            ent->bound.sph.r += sws->radius;
            result = xRayHitsSphereFast(ray, &ent->bound.sph);
            ent->bound.sph.r = oldrad;
            break;
        }
        case XBOUND_TYPE_BOX:
        {
            xBox tmpbox;
            tmpbox.upper.x = ent->bound.box.box.upper.x + sws->radius;
            tmpbox.upper.y = ent->bound.box.box.upper.y + sws->radius;
            tmpbox.upper.z = ent->bound.box.box.upper.z + sws->radius;
            tmpbox.lower.x = ent->bound.box.box.lower.x - sws->radius;
            tmpbox.lower.y = ent->bound.box.box.lower.y - sws->radius;
            tmpbox.lower.z = ent->bound.box.box.lower.z - sws->radius;
            result = xRayHitsBoxFast(ray, &tmpbox);
            break;
        }
        case XBOUND_TYPE_OBB:
        {
            xBox tmpbox;
            xRay3 lr;
            xMat3x3 mn;
            F32 ms = xVec3Length(&ent->bound.mat->right);
            xMat3x3Normalize(&mn, ent->bound.mat);
            xMat4x3Tolocal(&lr.origin, ent->bound.mat, &ray->origin);
            xMat3x3Tolocal(&lr.dir, &mn, &ray->dir);
            lr.max_t = ray->max_t / ms;
            lr.min_t = ray->min_t / ms;
            lr.flags = ray->flags;
            tmpbox.upper.x = ent->bound.box.box.upper.x + sws->radius / ms;
            tmpbox.upper.y = ent->bound.box.box.upper.y + sws->radius / ms;
            tmpbox.upper.z = ent->bound.box.box.upper.z + sws->radius / ms;
            tmpbox.lower.x = ent->bound.box.box.lower.x - sws->radius / ms;
            tmpbox.lower.y = ent->bound.box.box.lower.y - sws->radius / ms;
            tmpbox.lower.z = ent->bound.box.box.lower.z - sws->radius / ms;
            result = xRayHitsBoxFast(&lr, &tmpbox);
            break;
        }
        }

        if (!result)
            return;

        xModelInstance* collmod = ent->collModel ? ent->collModel : ent->model;
        if (collmod->Flags & 0x800)
        {
            xModelAnimCollApply(*collmod);
        }
        if (xSweptSphereToModel(sws, collmod->Data, collmod->Mat))
        {
            sws->optr = ent;
            sws->mptr = ent->model;
            sSweptSphereEntFound = 1;
        }
        if (collmod->Flags & 0x800)
        {
            xModelAnimCollRestore(*collmod);
        }
    }
    else
    {
        switch (ent->bound.type)
        {
        case XBOUND_TYPE_SPHERE:
            if (xSweptSphereToSphere(sws, &ent->bound.sph))
            {
                sws->optr = ent;
                sSweptSphereEntFound = 1;
            }
            break;
        case XBOUND_TYPE_BOX:
            if (xSweptSphereToBox(sws, &ent->bound.box.box, NULL))
            {
                sws->optr = ent;
                sSweptSphereEntFound = 1;
            }
            break;
        case XBOUND_TYPE_OBB:
            if (xSweptSphereToBox(sws, &ent->bound.box.box, ent->bound.mat))
            {
                sws->optr = ent;
                sSweptSphereEntFound = 1;
            }
            break;
        }
    }
}

S32 xSweptSphereToScene(xSweptSphere* sws, xScene* sc, xEnt* mover, U8 collType)
{
    if (sws->dist == 0.0f)
        return 0;

    sSweptSphereEntFound = 0;
    sSweptSphereMover = mover;
    sSweptSphereCollType = collType;

    S32 envcollfound = xSweptSphereToEnv(sws, sc->env);

    xRay3 ray;
    xVec3Copy(&ray.origin, &sws->start);
    xVec3Sub(&ray.dir, &sws->end, &sws->start);
    ray.max_t = xVec3Length(&ray.dir);

    F32 one_len = 1.0f / MAX(ray.max_t, 0.00001f);
    xVec3SMul(&ray.dir, &ray.dir, one_len);

    ray.flags = XRAY3_USE_MAX;
    if (!(ray.flags & XRAY3_USE_MIN))
    {
        ray.flags |= XRAY3_USE_MIN;
        ray.min_t = 0.0f;
    }

    xRayHitsGrid(&colls_grid, sc, &ray, SweptSphereHitsEntCB, &sws->qcd, sws);
    xRayHitsGrid(&colls_oso_grid, sc, &ray, SweptSphereHitsEntCB, &sws->qcd, sws);
    xRayHitsGrid(&npcs_grid, sc, &ray, SweptSphereHitsEntCB, &sws->qcd, sws);

    return sSweptSphereEntFound || envcollfound;
}

S32 xSweptSphereToStatDyn(xSweptSphere* sws, xScene* sc, xEnt* mover, U8 collType)
{
    if (sws->dist == 0.0f)
        return 0;

    sSweptSphereEntFound = 0;
    sSweptSphereMover = mover;
    sSweptSphereCollType = collType;

    xRay3 ray;
    xVec3Copy(&ray.origin, &sws->start);
    xVec3Sub(&ray.dir, &sws->end, &sws->start);
    ray.max_t = xVec3Length(&ray.dir);

    F32 one_len = 1.0f / MAX(ray.max_t, 0.00001f);
    xVec3SMul(&ray.dir, &ray.dir, one_len);

    ray.flags = XRAY3_USE_MAX;
    if (!(ray.flags & XRAY3_USE_MIN))
    {
        ray.flags |= XRAY3_USE_MIN;
        ray.min_t = 0.0f;
    }

    xRayHitsGrid(&colls_grid, sc, &ray, SweptSphereHitsEntCB, &sws->qcd, sws);
    xRayHitsGrid(&colls_oso_grid, sc, &ray, SweptSphereHitsEntCB, &sws->qcd, sws);

    return sSweptSphereEntFound;
}

S32 xSweptSphereToNPC(xSweptSphere* sws, xScene* sc, xEnt* mover, U8 collType)
{
    if (sws->dist == 0.0f)
        return 0;

    sSweptSphereEntFound = 0;
    sSweptSphereMover = mover;
    sSweptSphereCollType = collType;

    xRay3 ray;
    xVec3Copy(&ray.origin, &sws->start);
    xVec3Sub(&ray.dir, &sws->end, &sws->start);
    ray.max_t = xVec3Length(&ray.dir);

    F32 one_len = 1.0f / MAX(ray.max_t, 0.00001f);
    xVec3SMul(&ray.dir, &ray.dir, one_len);

    ray.flags = XRAY3_USE_MAX;
    if (!(ray.flags & XRAY3_USE_MIN))
    {
        ray.flags |= XRAY3_USE_MIN;
        ray.min_t = 0.0f;
    }

    xRayHitsGrid(&npcs_grid, sc, &ray, SweptSphereHitsEntCB, &sws->qcd, sws);

    return sSweptSphereEntFound;
}

S32 xSweptSphereToNonMoving(xSweptSphere* sws, xScene* sc, xEnt* mover, U8 collType)
{
    if (sws->dist == 0.0f)
        return 0;

    sSweptSphereEntFound = 0;
    sSweptSphereMover = mover;
    sSweptSphereCollType = collType;

    S32 envcollfound = xSweptSphereToEnv(sws, sc->env);

    xRay3 ray;
    xVec3Copy(&ray.origin, &sws->start);
    xVec3Sub(&ray.dir, &sws->end, &sws->start);
    ray.max_t = xVec3Length(&ray.dir);

    F32 one_len = 1.0f / MAX(ray.max_t, 0.00001f);
    xVec3SMul(&ray.dir, &ray.dir, one_len);

    ray.flags = (XRAY3_USE_MAX);
    if (!(ray.flags & XRAY3_USE_MIN))
    {
        ray.flags |= XRAY3_USE_MIN;
        ray.min_t = 0.0f;
    }

    sSweptSphereIgnoreMovers = 1;
    xRayHitsGrid(&colls_grid, sc, &ray, SweptSphereHitsEntCB, &sws->qcd, sws);
    xRayHitsGrid(&colls_oso_grid, sc, &ray, SweptSphereHitsEntCB, &sws->qcd, sws);
    sSweptSphereIgnoreMovers = 0;

    return sSweptSphereEntFound || envcollfound;
}

bool xSphereHitsBound(const xSphere& o, const xBound& b)
{
    switch (b.type)
    {
    case XBOUND_TYPE_SPHERE:
        return xSphereHitsSphere(o, b.sph);
    case XBOUND_TYPE_BOX:
        return xSphereHitsBox(o, b.box.box);
    case XBOUND_TYPE_OBB:
        return xSphereHitsOBB(o, b.box.box, *b.mat);
    }
    return false;
}

U8 xOBBHitsOBB(const xBox& a, const xMat4x3& amat, const xBox& b, const xMat4x3& bmat)
{
    xVec3 offset = bmat.pos - amat.pos;

    xVec3 aoffset = {};
    aoffset.x = amat.right.dot(offset);
    aoffset.y = amat.up.dot(offset);
    aoffset.z = amat.at.dot(offset);

    xMat3x3 xmat;
    xmat.right.x = amat.right.dot(bmat.right);
    xmat.right.y = amat.right.dot(bmat.up);
    xmat.right.z = amat.right.dot(bmat.at);
    xmat.up.x = amat.up.dot(bmat.right);
    xmat.up.y = amat.up.dot(bmat.up);
    xmat.up.z = amat.up.dot(bmat.at);
    xmat.at.x = amat.at.dot(bmat.right);
    xmat.at.y = amat.at.dot(bmat.up);
    xmat.at.z = amat.at.dot(bmat.at);

    xMat3x3 axmat;
    axmat.right = xmat.right.get_abs();
    axmat.up = xmat.up.get_abs();
    axmat.at = xmat.at.get_abs();

    F32 ar, br, r;

    br = b.upper.x * axmat.right.x + b.upper.y * axmat.right.y + b.upper.z * axmat.right.z;
    ar = a.upper.x + br;
    if (xabs(aoffset.x) > ar)
        return false;

    br = b.upper.x * axmat.up.x + b.upper.y * axmat.up.y + b.upper.z * axmat.up.z;
    ar = a.upper.y + br;
    if (xabs(aoffset.y) > ar)
        return false;

    br = b.upper.x * axmat.at.x + b.upper.y * axmat.at.y + b.upper.z * axmat.at.z;
    ar = a.upper.z + br;
    if (xabs(aoffset.z) > ar)
        return false;

    r = bmat.right.dot(offset);
    ar = a.upper.x * axmat.right.x + a.upper.y * axmat.up.x + a.upper.z * axmat.at.x;
    br = ar + b.upper.x;
    if (xabs(r) > br)
        return false;

    r = bmat.up.dot(offset);
    ar = a.upper.x * axmat.right.y + a.upper.y * axmat.up.y + a.upper.z * axmat.at.y;
    br = ar + b.upper.y;
    if (xabs(r) > br)
        return false;

    r = bmat.at.dot(offset);
    ar = a.upper.x * axmat.right.z + a.upper.y * axmat.up.z + a.upper.z * axmat.at.z;
    br = ar + b.upper.z;
    if (xabs(r) > br)
        return false;

    if (axmat.right.x > 0.999f || axmat.right.y > 0.999f || axmat.right.z > 0.999f ||
        axmat.up.x > 0.999f || axmat.up.y > 0.999f || axmat.up.z > 0.999f || axmat.at.x > 0.999f ||
        axmat.at.y > 0.999f || axmat.at.z > 0.999f)
        return true;

    r = aoffset.z * xmat.up.x - aoffset.y * xmat.at.x;
    ar = a.upper.y * axmat.at.x + a.upper.z * axmat.up.x;
    br = b.upper.y * axmat.right.z + b.upper.z * axmat.right.y + ar;
    if (xabs(r) > br)
        return false;

    r = aoffset.z * xmat.up.y - aoffset.y * xmat.at.y;
    ar = a.upper.y * axmat.at.y + a.upper.z * axmat.up.y;
    br = b.upper.x * axmat.right.z + b.upper.z * axmat.right.x + ar;
    if (xabs(r) > br)
        return false;

    r = aoffset.z * xmat.up.z - aoffset.y * xmat.at.z;
    ar = a.upper.y * axmat.at.z + a.upper.z * axmat.up.z;
    br = b.upper.x * axmat.right.y + b.upper.y * axmat.right.x + ar;
    if (xabs(r) > br)
        return false;

    r = aoffset.x * xmat.at.x - aoffset.z * xmat.right.x;
    ar = a.upper.x * axmat.at.x + a.upper.z * axmat.right.x;
    br = b.upper.y * axmat.up.z + b.upper.z * axmat.up.y + ar;
    if (xabs(r) > br)
        return false;

    r = aoffset.x * xmat.at.y - aoffset.z * xmat.right.y;
    ar = a.upper.x * axmat.at.y + a.upper.z * axmat.right.y;
    br = b.upper.x * axmat.up.z + b.upper.z * axmat.up.x + ar;
    if (xabs(r) > br)
        return false;

    r = aoffset.x * xmat.at.z - aoffset.z * xmat.right.z;
    ar = a.upper.x * axmat.at.z + a.upper.z * axmat.right.z;
    br = b.upper.x * axmat.up.y + b.upper.y * axmat.up.x + ar;
    if (xabs(r) > br)
        return false;

    r = aoffset.y * xmat.right.x - aoffset.x * xmat.up.x;
    ar = a.upper.x * axmat.up.x + a.upper.y * axmat.right.x;
    br = b.upper.y * axmat.at.z + b.upper.z * axmat.at.y + ar;
    if (xabs(r) > br)
        return false;

    r = aoffset.y * xmat.right.y - aoffset.x * xmat.up.y;
    ar = a.upper.x * axmat.up.y + a.upper.y * axmat.right.y;
    br = b.upper.x * axmat.at.z + b.upper.z * axmat.at.x + ar;
    if (xabs(r) > br)
        return false;

    r = aoffset.y * xmat.right.z - aoffset.x * xmat.up.z;
    ar = a.upper.x * axmat.up.z + a.upper.y * axmat.right.z;
    br = b.upper.x * axmat.at.y + b.upper.y * axmat.at.x + ar;
    if (xabs(r) > br)
        return false;

    return true;
}

bool xSphereHitsVCylinder(const xVec3& sc, F32 sr, const xVec3& cc, F32 cr, F32 ch)
{
    F32 ydist = cc.y - sc.y;
    if (ydist < -sr || ydist > ch + sr)
        return false;

    if (ydist < 0.0f)
    {
        sr = xsqrt(SQR(sr) - SQR(ydist));
    }
    else if (ydist > ch)
    {
        sr = xsqrt(SQR(sr) - SQR(ydist - ch));
    }

    xVec2 xzloc1 = { sc.x, sc.z };
    xVec2 xzloc2 = { cc.x, cc.z };
    F32 xzdist2 = (xzloc2 - xzloc1).length2();
    F32 max_xzdist = sr + cr;

    return !(xzdist2 > SQR(max_xzdist));
}

bool xSphereHitsVCircle(const xVec3& sc, F32 sr, const xVec3& cc, F32 cr)
{
    F32 ydist = cc.y - sc.y;
    if (ydist < -sr || ydist > sr)
        return false;

    sr = xsqrt(SQR(sr) - SQR(ydist));

    xVec2 xzloc1 = { sc.x, sc.z };
    xVec2 xzloc2 = { cc.x, cc.z };
    F32 xzdist2 = (xzloc2 - xzloc1).length2();
    F32 max_xzdist = sr + cr;

    return !(xzdist2 > SQR(max_xzdist));
}

void xVec3AddScaled(xVec3* o, const xVec3* v, F32 s)
{
    o->x += v->x * s;
    o->y += v->y * s;
    o->z += v->z * s;
}

void xVec3Cross(xVec3* o, const xVec3* a, const xVec3* b)
{
    o->x = a->y * b->z - b->y * a->z;
    o->y = a->z * b->x - b->z * a->x;
    o->z = a->x * b->y - b->x * a->y;
}

F32 xVec3Length2(const xVec3* vec)
{
    return vec->x * vec->x + vec->y * vec->y + vec->z * vec->z;
}

F32 xVec3Dist(const xVec3* a, const xVec3* b)
{
    F32 dx = a->x - b->x;
    F32 dy = a->y - b->y;
    F32 dz = a->z - b->z;
    return xsqrt(dx * dx + dy * dy + dz * dz);
}

void xMat4x3OrthoInv(xMat4x3* a, const xMat4x3* b)
{
    xVec3 vec;
    xMat3x3Transpose(a, b);
    xMat3x3RMulVec(&vec, a, &b->pos);
    xVec3Inv(&a->pos, &vec);
}

F32 xMat3x3LookVec3(xMat3x3& mat, const xVec3& at)
{
    F32 len = at.length();
    if (len >= -0.0000099999997f && len <= 0.0000099999997f)
    {
        mat = g_I3;
        len = 0.0f;
    }
    else
    {
        mat.at = at;
        mat.at *= 1.0f / len;
        F32 absx = xabs(mat.at.x);
        F32 absy = xabs(mat.at.y);
        F32 absz = xabs(mat.at.z);
        if (absx < absy && absx < absz)
        {
            mat.right.assign(0.0f, absz, -absy);
        }
        else
        {
            if (absy < absz)
            {
                mat.right.assign(-mat.at.z, 0.0f, mat.at.x);
            }
            else
            {
                mat.right.assign(mat.at.y, -mat.at.x, 0.0f);
            }
        }
        mat.right.normalize();
        mat.up = mat.at.cross(mat.right);
    }
    return len;
}

void xModelAnimCollRestore(const xModelInstance&)
{
}

void xModelAnimCollApply(const xModelInstance&)
{
}

bool xModelAnimCollDirty(const xModelInstance&)
{
    return false;
}

// Make these into inline definitions somewhere appropriate later
xVec3 xVec3::operator+(const xVec3& v) const
{
    xVec3 vec = *this;
    vec += v;
    return vec;
}

xVec3& xVec3::operator+=(const xVec3& v)
{
    x += v.x;
    y += v.y;
    z += v.z;
    return *this;
}

xVec3 xVec3::get_abs() const
{
    xVec3 vec = *this;
    return vec.set_abs();
}

xVec3& xVec3::set_abs()
{
    x = xabs(x);
    y = xabs(y);
    z = xabs(z);
    return *this;
}

F32 xVec3::dot(const xVec3& v) const
{
    return x * v.x + y * v.y + z * v.z;
}

xVec3& xVec3::normalize()
{
    *this /= length();
    return *this;
}

xVec3 xVec3::operator/(F32 f) const
{
    xVec3 vec = *this;
    vec /= f;
    return vec;
}

void xQuickCullForRay(xQCData*, const xRay3*)
{
}

void xQuickCullForBox(xQCData*, const xBox*)
{
}

bool xSphereHitsCapsule(const xVec3& center, F32 radius, const xVec3& v1, const xVec3& v2,
                        F32 width)
{
    xVec3 d1 = v2 - v1;
    xVec3 d2 = v1 - center;

    F32 r = radius + width;
    F32 f31 = d1.length2();
    F32 b = 2.0f * d1.dot(d2);
    F32 q = SQR(b) - 4.0f * f31 * (d2.length2() - SQR(r));

    if (q < 0.0f)
        return false;

    F32 d = xsqrt(q);
    F32 r1 = 1.0f / (2.0f * f31) * (-b + d);
    F32 r2 = 1.0f / (2.0f * f31) * (-b - d);

    return ((r1 >= 0.0f && r1 <= 1.0f) || (r2 >= 0.0f && r2 <= 1.0f));
}

F32 xVec2::length2() const
{
    return x * x + y * y;
}

xVec2 xVec2::operator-(const xVec2& v) const
{
    xVec2 vec = *this;
    vec -= v;
    return vec;
}

xVec2& xVec2::operator-=(const xVec2& v)
{
    x -= v.x;
    y -= v.y;
    return *this;
}
