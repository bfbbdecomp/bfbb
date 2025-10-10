#include "iCollide.h"

#include <types.h>

#include "xMathInlines.h"

#include <rpcollis.h>
#include <string.h>

static S32 sCollidingJSP = 0;
static F32 cbath = 0;
static xRay3 cbray;
static const xMat3x3* cbmat = NULL;
static RpIntersection cbisx_local;
static U8 cbnumcs = FALSE;
static U8 cbmaxcs = FALSE;
static U8 FLOOR = FALSE;
static U8 NEXT2 = FALSE;
static U8 OTHER = FALSE;
iTime collide_rwtime = 0;
S32 collide_rwct = 0;
F32 collide_rwtime_secs = 0;

enum Dimension
{
    XDIM = 0,
    YDIM = 1,
    ZDIM = 2,
};

void iCollideInit(xScene*)
{
}

S32 PointWithinTriangle(xVec3* _pt, xVec3** _tri, xVec3* _normal)
{
    RwV3d* pt = (RwV3d*)_pt;
    RwV3d** tri = (RwV3d**)_tri;
    RwV3d* normal = (RwV3d*)_normal;
    Dimension dimension;
    F32 absX = iabs(normal->x);
    F32 absY = iabs(normal->y);
    F32 absZ = iabs(normal->z);
    S32 inside = FALSE;
    S32 i;
    S32 j;

    if (absZ > absY)
    {
        if (absZ > absX)
        {
            dimension = ZDIM;
        }
        else
        {
            dimension = XDIM;
        }
    }
    else
    {
        if (absY > absX)
        {
            dimension = YDIM;
        }
        else
        {
            dimension = XDIM;
        }
    }

    switch (dimension)
    {
    case XDIM:
        for (i = 0, j = 2; i < 3; j = i, i++)
        {
            if (((tri[i]->y <= pt->y && pt->y < tri[j]->y) ||
                 (tri[j]->y <= pt->y && pt->y < tri[i]->y)) &&
                (pt->z < tri[i]->z + ((pt->y - tri[i]->y) * (tri[j]->z - tri[i]->z)) /
                                         (tri[j]->y - tri[i]->y)))
            {
                inside = !inside;
            }
        }
        break;
    case YDIM:
        for (i = 0, j = 2; i < 3; j = i, i++)
        {
            if (((tri[i]->z <= pt->z && pt->z < tri[j]->z) ||
                 (tri[j]->z <= pt->z && pt->z < tri[i]->z)) &&
                (pt->x < tri[i]->x + ((pt->z - tri[i]->z) * (tri[j]->x - tri[i]->x)) /
                                         (tri[j]->z - tri[i]->z)))
            {
                inside = !inside;
            }
        }
        break;
    case ZDIM:
        for (i = 0, j = 2; i < 3; j = i, i++)
        {
            if (((tri[i]->y <= pt->y && pt->y < tri[j]->y) ||
                 (tri[j]->y <= pt->y && pt->y < tri[i]->y)) &&
                (pt->x < tri[i]->x + ((pt->y - tri[i]->y) * (tri[j]->x - tri[i]->x)) /
                                         (tri[j]->y - tri[i]->y)))
            {
                inside = !inside;
            }
        }
        break;
    }

    return inside;
}

void FindNearestPointOnLine(xVec3* _result, xVec3* _point, xVec3* _start, xVec3* _end)
{
    RwV3d localResult;
    RwV3d* result = (RwV3d*)_result;
    RwV3d* point = (RwV3d*)_point;
    RwV3d* start = (RwV3d*)_start;
    RwV3d* end = (RwV3d*)_end;

    float mu;
    float lineLength2;

    mu = (point->x * (end->x - start->x) + point->y * (end->y - start->y) +
          point->z * (end->z - start->z)) -
         (start->x * (end->x - start->x) + start->y * (end->y - start->y) +
          start->z * (end->z - start->z));
    if (mu <= 0.0f)
    {
        localResult = *start;
    }
    else
    {
        lineLength2 = SQR(end->x - start->x) + SQR(end->y - start->y) + SQR(end->z - start->z);
        if (mu < lineLength2)
        {
            mu /= lineLength2;
            localResult.x = mu * (end->x - start->x);
            localResult.x += start->x;
            localResult.y = mu * (end->y - start->y);
            localResult.y += start->y;
            localResult.z = mu * (end->z - start->z);
            localResult.z += start->z;
        }
        else
        {
            localResult = *end;
        }
    }
    *result = localResult;
}

static void properSphereIsectTri(const xVec3* center, F32 radius, xVec3* tohit, F32* dist_ptr,
                                 RpCollisionTriangle* tri)
{
    xVec3 projPoint;
    F32 dist2plane;
    F32 dist;
    F32 dist2;
    F32 radius2;
    U32 i;
    xVec3 vertClosestPoint;
    F32 vertDist2;
    xVec3 temp;

    dist = *dist_ptr;
    dist2plane = xVec3Dot((xVec3*)&tri->normal, center);
    radius2 = xVec3Dot((xVec3*)&tri->normal, (xVec3*)&tri->point);

    xVec3SMul(&projPoint, (xVec3*)&tri->normal, radius2 - dist2plane);
    xVec3Copy(tohit, &projPoint);
    xVec3AddTo(&projPoint, center);

    if (PointWithinTriangle(&projPoint, (xVec3**)&tri->vertices, (xVec3*)&tri->normal))
    {
        dist = iabs(radius2 - dist2plane);
    }
    else
    {
        dist2 = SQR(dist);
        for (i = 0; i < 3; i++)
        {
            FindNearestPointOnLine(&vertClosestPoint, &projPoint, (xVec3*)tri->vertices[i],
                                   (xVec3*)tri->vertices[(i + 1) % 3]);
            xVec3Sub(&temp, &vertClosestPoint, center);
            vertDist2 = xVec3Length2(&temp);

            if (vertDist2 < dist2 && vertDist2 < SQR(radius))
            {
                dist2 = vertDist2;
                xVec3Copy(tohit, &temp);
            }
        }
        dist = xsqrt(dist2);
    }
    *dist_ptr = dist;
}

static void _stripped(float* f)
{
    f[0] = 1.0f;
    f[1] = 1e-5f;
}

RpCollisionTriangle* sphereHitsEnvCB(RpIntersection* isx, RpWorldSector* sector,
                                     RpCollisionTriangle* tri, F32 dist, void* data)
{
    xCollis* coll = (xCollis*)data;
    F32 radius = isx->t.line.end.x;
    xVec3* center;
    xVec3 tohit;
    F32 scale;

    if (coll->flags == 0)
    {
        coll->flags |= 1;
        return NULL;
    }

    dist = FLOAT_MAX;
    properSphereIsectTri((xVec3*)&isx->t.line.start, radius, &tohit, &dist, tri);

    if (dist < 0.0f)
    {
        return tri;
    }
    if (0.0f == dist)
    {
        return tri;
    }
    if (dist >= radius)
    {
        return tri;
    }
    if (dist >= coll->dist)
    {
        return tri;
    }

    coll->dist = dist;
    if (coll->flags & 0x200)
    {
        xVec3Copy(&coll->norm, (xVec3*)&tri->normal);
    }
    if (coll->flags & 0x400)
    {
        xVec3Copy(&coll->tohit, &tohit);
    }
    if (coll->flags & 0x800)
    {
        scale = 1.0f - (radius / coll->dist);
        scale -= 1e-5f;
        xVec3Copy(&coll->depen, &tohit);
        xVec3SMulBy(&coll->depen, scale);
    }
    if (coll->flags & 0x1000)
    {
        xVec3Normalize(&coll->hdng, &tohit);
    }
    coll->flags |= 1;
    return tri;
}

static RpCollisionTriangle* sphereHitsEnv3CB(RpIntersection* isx, RpWorldSector* sector,
                                             RpCollisionTriangle* tri, F32 dist, void* data)
{
    xCollis* colls = (xCollis*)data;
    F32 radius = isx->t.line.end.x;
    xVec3* center = (xVec3*)&isx->t.line.start;
    xVec3 tohit;
    xVec3 hdng;
    U8 idx = 0;
    F32 dot;
    F32 odot;
    F32 ndot;
    F32 scale;

    dist = FLOAT_MAX;
    properSphereIsectTri(center, radius, &tohit, &dist, tri);
    if (0.0f == dist)
    {
        return tri;
    }
    if (dist > radius)
    {
        return tri;
    }

    if (SQR(tohit.x) + SQR(tohit.y) > SQR(tohit.y))
    {
        idx = FLOOR;
        if (FLOOR == 0xff)
        {
            idx = cbnumcs;
            FLOOR = cbnumcs;
            cbnumcs++;
        }
        else if (tohit.y < 0.0f)
        {
            if (colls[idx].hdng.y > 0.0f ||
                (colls[idx].dist > dist &&
                 (iabs(dist - colls[idx].dist) < 0.001f && tri->normal.y > colls[idx].norm.y)))
            {
                idx = FLOOR;
            }
            else
            {
                return tri;
            }
        }
        else
        {
            if (colls[idx].hdng.y > 0.0f ||
                (colls[idx].dist > dist &&
                 (iabs(dist - colls[idx].dist) < 0.001f && tri->normal.y > colls[idx].norm.y)))
            {
                idx = FLOOR;
            }
            else
            {
                return tri;
            }
        }

        xVec3SMul(&hdng, &tohit, 1.0f / dist);
    }
    else
    {
        if (NEXT2 == 0xff)
        {
            if (OTHER == 0xff)
            {
                idx = cbnumcs;
                OTHER = cbnumcs;
                cbnumcs++;

                xVec3SMul(&hdng, &tohit, 1.0f / dist);
            }
            else
            {
                xVec3SMul(&hdng, &tohit, 1.0f / dist);
                dot = xVec3Dot(&hdng, &colls[idx].hdng);
                if (iabs(dot) > 0.7010677f)
                {
                    if (colls[OTHER].dist < dist)
                    {
                        idx = OTHER;
                    }
                    else
                    {
                        return tri;
                    }
                }
                else
                {
                    idx = cbnumcs;
                    NEXT2 = cbnumcs;
                    if (dist < colls[OTHER].dist)
                    {
                        NEXT2 = OTHER;
                        OTHER = cbnumcs;
                        idx = cbnumcs;
                    }
                }
            }
        }
        else
        {
            if (dist > colls[NEXT2].dist)
            {
                return tri;
            }
            xVec3SMul(&hdng, &tohit, 1.0f / dist);
            odot = xVec3Dot(&hdng, &colls[OTHER].hdng);
            if (colls[OTHER].dist < dist)
            {
                if (iabs(odot) > 0.7010677f)
                {
                    ndot = xVec3Dot(&hdng, &colls[NEXT2].hdng);
                    if (iabs(ndot) > 0.7010677f)
                    {
                        if (NEXT2 < OTHER)
                        {
                            OTHER = NEXT2;
                        }
                        idx = OTHER;
                        NEXT2 = 0xff;
                        cbnumcs--;
                        colls[cbnumcs].flags &= ~0x1;
                        colls[cbnumcs].dist = FLOAT_MAX;
                    }
                    else
                    {
                        idx = OTHER;
                    }
                }
                else
                {
                    idx = NEXT2;
                }
            }
            else
            {
                if (iabs(odot) > 0.7010677f)
                {
                    return tri;
                }
                idx = NEXT2;
            }
        }
    }

    colls[idx].dist = dist;
    xVec3Copy(&colls[idx].hdng, &hdng);

    if (colls[0].flags & 0x200)
    {
        xVec3Copy(&colls[idx].norm, (xVec3*)&tri->normal);
    }
    if (colls[0].flags & 0x400)
    {
        xVec3Copy(&colls[idx].tohit, &tohit);
    }
    if (colls[0].flags & 0x800)
    {
        scale = dist - radius;
        xVec3Copy(&colls[idx].depen, &hdng);
        xVec3SMulBy(&colls[idx].depen, scale);
    }
    colls[idx].flags |= 1;

    if (sector != NULL)
    {
        colls[idx].oid = sector->polygons[tri->index].matIndex;
    }
    else if (sCollidingJSP != NULL)
    {
        // FIXME: this looks busted
        colls[idx].oid = *(U16*)(tri->index + 6);
    }
    else
    {
        colls[idx].oid = tri->index;
    }

    colls[idx].tri.index = tri->index;
    if (cbnumcs == cbmaxcs)
    {
        return NULL;
    }

    return tri;
}

static RpCollisionTriangle* sphereHitsEnv4CB(RpIntersection* isx, RpWorldSector* sector,
                                             RpCollisionTriangle* tri, F32 dist, void* data)
{
    xCollis* colls = (xCollis*)data;
    F32 radius = isx->t.line.end.x;
    xVec3 tohit;
    xCollis temp;
    U8 idx;
    xCollis* c;
    F32 ddist;

    dist = FLOAT_MAX;
    properSphereIsectTri((xVec3*)&isx->t.line.start, radius, &tohit, &dist, tri);
    if (0.0f == dist)
    {
        return tri;
    }
    if (dist > radius)
    {
        return tri;
    }

    if (sCollidingJSP != NULL)
    {
        if (*(U8*)(tri->index + 4) & 0x10)
        {
            temp.flags = 0x20000;
        }
        else
        {
            temp.flags = 0;
        }
    }
    else
    {
        temp.flags = 0;
    }

    temp.optr = NULL;
    idx = xCollideGetCollsIdx(&temp, &tohit, cbmat);

    c = &colls[idx & 0xff];
    ddist = dist - c->dist;

    if (!(dist < 0.0f || (ddist < 0.001f && c->norm.y > tri->normal.y)))
    {
        return tri;
    }

    c->dist = dist;
    c->tohit = tohit;
    c->norm.x = tri->normal.x;
    c->norm.y = tri->normal.y;
    c->norm.z = tri->normal.z;
    c->tri.index = tri->index;
    c->flags |= 1;

    if (sCollidingJSP != NULL && *(U8*)(tri->index + 4) & 0x10)
    {
        c->flags |= 0x20000;
    }

    if (sector != NULL)
    {
        c->oid = sector->polygons[tri->index].matIndex;
    }
    else if (sCollidingJSP != NULL)
    {
        c->oid = *(U16*)(tri->index + 6);
    }
    else
    {
        c->oid = tri->index;
    }

    return tri;
}

RpCollisionTriangle* sphereHitsModel3CB(RpIntersection* isx, RpCollisionTriangle* tri, F32 dist,
                                        void* data)
{
    return sphereHitsEnv3CB(&cbisx_local, NULL, tri, dist, data);
}

static RpCollisionTriangle* rayHitsEnvCB(RpIntersection* isx, RpWorldSector* sector,
                                         RpCollisionTriangle* tri, F32 dist, void* data)
{
    xCollis* colls = (xCollis*)data;
    dist *= cbray.max_t;
    if (dist >= colls->dist)
    {
        return tri;
    }

    if (sector != NULL)
    {
        colls->oid = sector->polygons[tri->index].matIndex;
    }
    else if (sCollidingJSP != NULL)
    {
        colls->oid = *(U16*)(tri->index + 6);
        if (*(U8*)(tri->index + 4) & 0x10)
        {
            colls->flags |= 0x20000;
        }
        else
        {
            colls->flags &= ~0x20000;
        }
    }
    else
    {
        colls->oid = tri->index;
    }

    colls->dist = dist;
    colls->flags |= 1;
    colls->tri.index = tri->index;
    if (colls->flags & 0x200)
    {
        colls->norm = *(xVec3*)&tri->normal;
    }

    return tri;
}

RpCollisionTriangle* rayHitsEnvBackwardCB(RpIntersection* isx, RpWorldSector* sector,
                                          RpCollisionTriangle* tri, F32 dist, void* data)
{
    xCollis* colls = (xCollis*)data;
    dist = 1.0f - dist;
    dist = dist * cbray.max_t;
    if (dist >= colls->dist)
    {
        return tri;
    }

    if (sector != NULL)
    {
        colls->oid = sector->polygons[tri->index].matIndex;
    }
    else if (sCollidingJSP != NULL)
    {
        colls->oid = *(U16*)(tri->index + 6);
    }
    else
    {
        colls->oid = tri->index;
    }

    colls->dist = dist;
    colls->flags |= 1;
    colls->tri.index = tri->index;

    return tri;
}

static RpCollisionTriangle* rayHitsModelCB(RpIntersection* isx, RpCollisionTriangle* tri, F32 dist,
                                           void* data)
{
    return rayHitsEnvCB(isx, NULL, tri, dist, data);
}

static RpCollisionTriangle* rayHitsModelBackwardCB(RpIntersection* isx, RpCollisionTriangle* tri,
                                                   F32 dist, void* data)
{
    return rayHitsEnvBackwardCB(isx, NULL, tri, dist, data);
}

U32 iSphereHitsEnv(const xSphere* b, const xEnv* env, xCollis* coll)
{
    RpIntersection isx;
    isx.type = rpINTERSECTSPHERE;
    memcpy(&isx.t.sphere, b, sizeof(xSphere));

    coll->flags &= ~1;
    coll->dist = FLOAT_MAX;

    if (env->geom->jsp != NULL)
    {
        sCollidingJSP = 1;
        xClumpColl_ForAllIntersections(env->geom->jsp->colltree, &isx, sphereHitsEnvCB, coll);
        sCollidingJSP = 0;
    }
    else
    {
        RpCollisionWorldForAllIntersections(env->geom->world, &isx, sphereHitsEnvCB, coll);
        if (env->geom->collision != NULL)
        {
            RpCollisionWorldForAllIntersections(env->geom->collision, &isx, sphereHitsEnvCB, coll);
        }
    }

    return coll->flags & 1;
}

S32 iSphereHitsEnv3(const xSphere* b, const xEnv* env, xCollis* colls, U8 ncolls, F32 sth)
{
    RpIntersection isx;
    isx.type = rpINTERSECTSPHERE;
    memcpy(&isx.t.sphere, b, sizeof(xSphere));

    for (U8 idx = 0; idx < ncolls; idx++)
    {
        colls[idx].flags &= ~1;
        colls[idx].dist = FLOAT_MAX;
    }

    cbath = sth;
    cbnumcs = 0;
    cbmaxcs = ncolls;
    OTHER = 0xff;
    NEXT2 = 0xff;
    FLOOR = 0xff;

    if (env->geom->jsp != NULL)
    {
        sCollidingJSP = 1;
        xClumpColl_ForAllIntersections(env->geom->jsp->colltree, &isx, sphereHitsEnv3CB, colls);
        sCollidingJSP = 0;
    }
    else
    {
        RpCollisionWorldForAllIntersections(env->geom->world, &isx, sphereHitsEnv3CB, colls);
        if (env->geom->collision != NULL)
        {
            RpCollisionWorldForAllIntersections(env->geom->collision, &isx, sphereHitsEnv3CB,
                                                colls);
        }
    }

    return cbnumcs;
}

S32 iSphereHitsEnv4(const xSphere* b, const xEnv* env, const xMat3x3* mat, xCollis* colls)
{
    RpIntersection isx; // r29+0x50
    isx.type = rpINTERSECTSPHERE;
    memcpy(&isx.t.sphere, b, sizeof(xSphere));

    cbmat = mat;

    xCollis* c = colls;
    xCollis* cend = colls + 6;

    if (env->geom->jsp != NULL)
    {
        sCollidingJSP = 1;
        xClumpColl_ForAllIntersections(env->geom->jsp->colltree, &isx, sphereHitsEnv4CB, colls);
        sCollidingJSP = 0;
    }
    else
    {
        RpCollisionWorldForAllIntersections(env->geom->world, &isx, sphereHitsEnv4CB, colls);
    }

    for (c = colls; c < cend; c++)
    {
        if (c->flags & 1)
        {
            c->oid += 0x10000;
        }
    }

    if (env->geom->collision != NULL)
    {
        RpCollisionWorldForAllIntersections(env->geom->collision, &isx, sphereHitsEnv4CB, colls);

        for (c = colls; c < cend; c++)
        {
            if (c->flags & 1)
            {
                if (c->oid < 0x10000)
                {
                    c->oid += 0x10000;
                }
                else
                {
                    c->oid -= 0x10000;
                }
            }
        }
    }

    S32 numcs = 0;
    for (c = colls; c < cend; c++)
    {
        if ((c->flags & 1) == 0)
        {
            continue;
        }

        numcs++;
        F32 s = 1.0f;
        s /= c->dist;
        c->hdng.x = c->tohit.x * s;
        c->hdng.y = c->tohit.y * s;
        c->hdng.z = c->tohit.z * s;

        s = MIN(0.0f, c->dist - b->r);
        c->depen.x = c->hdng.x * s;
        c->depen.y = c->hdng.y * s;
        c->depen.z = c->hdng.z * s;

        if (xVec3Dot(&c->hdng, &c->norm) > 0.0f)
        {
            c->norm.x = -c->norm.x;
            c->norm.y = -c->norm.y;
            c->norm.z = -c->norm.z;
        }
    }

    return numcs;
}

S32 iSphereHitsModel3(const xSphere* b, const xModelInstance* m, xCollis* colls, U8 ncolls, F32 sth)
{
    RpIntersection isx;
    if (m->Flags & 0x800)
    {
        xModelAnimCollApply(*m);
    }

    for (U8 idx = 0; idx < ncolls; idx++)
    {
        if (colls[idx].flags & 0x2000)
        {
            colls[idx].flags |= 0x400;
        }
    }

    isx.type = rpINTERSECTSPHERE;
    memcpy(&isx.t.sphere, b, sizeof(xSphere));

    xMat4x3* mat = (xMat4x3*)m->Mat;
    RwFrameTransform((RwFrame*)m->Data->object.object.parent, (RwMatrix*)mat, rwCOMBINEREPLACE);
    F32 mscale = xVec3Length(&mat->right);
    xMat3x3 mnormal;
    xMat3x3Normalize(&mnormal, mat);
    xMat4x3Tolocal((xVec3*)&cbisx_local.t.sphere.center, mat, &b->center);

    cbisx_local.t.sphere.radius = b->r / mscale;

    for (U8 i = 0; i < ncolls; i++)
    {
        colls[i].flags &= ~1;
        colls[i].dist = FLOAT_MAX;
    }

    cbath = sth;
    cbnumcs = 0;
    cbmaxcs = ncolls;
    OTHER = 0xff;
    NEXT2 = 0xff;
    FLOOR = 0xff;

    iTime t0 = iTimeGet();
    RpAtomicForAllIntersections(m->Data, &isx, sphereHitsModel3CB, colls);
    iTime t1 = iTimeGet();

    collide_rwtime += t1 - t0;
    collide_rwct += 1;
    collide_rwtime_secs = iTimeDiffSec(collide_rwtime) / collide_rwct;

    if (colls->flags & 0x1F00)
    {
        for (U8 i = 0; i < cbnumcs; i++)
        {
            if ((colls[i].flags & 1) == 0)
            {
                continue;
            }
            if (colls[i].flags & 0x2000)
            {
                xCollideCalcTri(colls[i].tri, *m, *(xVec3*)&cbisx_local.t.sphere.center, colls[i].tohit);
            }
            xMat3x3RMulVec(&colls[i].tohit, mat, &colls[i].tohit);
            xMat3x3RMulVec(&colls[i].depen, mat, &colls[i].depen);
            xMat3x3RMulVec(&colls[i].hdng, &mnormal, &colls[i].hdng);
            xMat3x3RMulVec(&colls[i].norm, &mnormal, &colls[i].norm);
            colls[i].dist *= mscale;
        }
    }

    if (m->Flags & 0x800)
    {
        xModelAnimCollRestore(*m);
    }

    return ncolls;
}
