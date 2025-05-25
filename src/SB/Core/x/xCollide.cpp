#include "xCollide.h"
#include "zSurface.h"
#include "iCollide.h"
#include "iMath3.h"
#include "rpcollis.h"
#include "xMathInlines.h"

#include <PowerPC_EABI_Support/MSL_C/MSL_Common/cmath>
#include <types.h>

S32 sSweptSphereHitFound;

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

U32 xSphereHitsOBB_nu(const xSphere*, const xBox*, const xMat4x3*, xCollis*)
{
    return 0;
}

U32 xSphereHitsModel(const xSphere*, const xModelInstance*, xCollis*)
{
    return false;
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

S32 xParabolaHitsEnv(xParabola*, const xEnv*, xCollis*)
{
    return false;
}

U32 xBoxHitsObb(const xBox*, const xBox*, const xMat4x3*, xCollis*)
{
    return 0;
}

void xCollideCalcTri(xCollis::tri_data&, const xModelInstance&, const xVec3&, const xVec3&)
{
}

xVec3 xCollisTriHit(const xCollis::tri_data&, const xModelInstance&)
{
    return xVec3();
}

struct RpCollBSPTree;
struct RpV3dGradient;

RpCollBSPTree* _rpCollBSPTreeForAllCapsuleLeafNodeIntersections(RpCollBSPTree* tree, RwLine* line,
                                                                F32 radius, RpV3dGradient* grad,
                                                                S32 (*callBack)(S32, S32, void*),
                                                                void* data)
{
    return NULL;
}

void xSweptSpherePrepare(xSweptSphere*, xVec3*, xVec3*, F32)
{
}

void xSweptSphereGetResults(xSweptSphere*)
{
}

S32 xSweptSphereToTriangle(xSweptSphere*, xVec3*, xVec3*, xVec3*)
{
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

S32 xSweptSphereToBox(xSweptSphere*, xBox*, xMat4x3*)
{
    return 0;
}

RpCollisionTriangle* SweptSphereHitsEnvCB(RpIntersection* intersection, RpWorldSector* sector,
                                          RpCollisionTriangle* collTriangle, RwReal distance,
                                          void* data)
{
    return NULL;
}

S32 SweptSphereLeafNodeCB(xClumpCollBSPTriangle*, void*)
{
    return 0;
}

S32 xSweptSphereToEnv(xSweptSphere* sphere, xEnv* env)
{
    if (sphere->dist == 0.0f)
        return 0;

    sSweptSphereHitFound = 0;
    if (env->geom->jsp)
    {
        RwLine line;
        line.start = *(RwV3d*)(&sphere->start);
        line.end = *(RwV3d*)(&sphere->end);

        xClumpCollV3dGradient gradient;
        F32 delx = line.end.x - line.start.x;
        F32 dely = line.end.y - line.start.y;
        F32 delz = line.end.z - line.start.z;

        F32 xfactor = 0.0f;
        if (delx != 0.0f)
        {
            xfactor = 1.0f / delx;
        }
        gradient.dydx = dely * xfactor;
        gradient.dzdx = delz * xfactor;

        F32 yfactor = 0.0f;
        if (dely != 0.0f)
        {
            yfactor = 1.0f / dely;
        }
        gradient.dxdy = delx * yfactor;
        gradient.dzdy = delz * yfactor;

        F32 zfactor = 0.0f;
        if (delz != 0.0f)
        {
            zfactor = 1.0f / delz;
        }
        gradient.dxdz = delx * zfactor;
        gradient.dydz = dely * zfactor;

        xClumpColl_ForAllCapsuleLeafNodeIntersections(env->geom->jsp->colltree, &line,
                                                      sphere->radius, &gradient,
                                                      SweptSphereLeafNodeCB, sphere);
    }
    else
    {
        RpIntersection intersect;
        intersect.type = rpINTERSECTBOX;
        // Cast here suggests that the type of xSweptSphere::box may actually be
        // some struct with RwV3ds in it instead of an xBox.
        intersect.t.box.sup = *(RwV3d*)(&sphere->box.upper);
        intersect.t.box.inf = *(RwV3d*)(&sphere->box.lower);
        RpCollisionWorldForAllIntersections(env->geom->world, &intersect, SweptSphereHitsEnvCB,
                                            sphere);
    }
    return sSweptSphereHitFound;
}

S32 xSweptSphereToModel(xSweptSphere*, RpAtomic*, RwMatrixTag*)
{
    return 0;
}

S32 xSweptSphereToScene(xSweptSphere*, xScene*, xEnt*, unsigned char)
{
    return 0;
}

S32 xSweptSphereToStatDyn(xSweptSphere*, xScene*, xEnt*, unsigned char)
{
    return 0;
}

S32 xSweptSphereToNPC(xSweptSphere*, xScene*, xEnt*, unsigned char)
{
    return 0;
}

S32 xSweptSphereToNonMoving(xSweptSphere*, xScene*, xEnt*, unsigned char)
{
    return 0;
}

void xSphereHitsBound(const xSphere&, const xBound&)
{
}

bool xOBBHitsOBB(const xBox&, const xMat4x3&, const xBox&, const xMat4x3&)
{
    return false;
}

bool xSphereHitsVCylinder(const xVec3&, F32, const xVec3&, F32, F32)
{
    return false;
}

bool xSphereHitsVCircle(const xVec3&, F32, const xVec3&, F32)
{
    return false;
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

void xParabolaEvalVel(const xParabola*, xVec3*, F32)
{
}

void xParabolaEvalPos(const xParabola*, xVec3*, F32)
{
}

bool xSphereHitsOBB(const xSphere&, const xBox&, const xMat4x3&)
{
    return false;
}

bool xSphereHitsSphere(const xVec3&, F32, const xVec3&, F32)
{
    return false;
}

void xQuickCullForRay(xQCData*, const xRay3*)
{
}

void xQuickCullForBox(xQCData*, const xBox*)
{
}

U8 xSphereHitsCapsule(const xVec3&, F32, const xVec3&, const xVec3&, F32)
{
    return 0;
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
