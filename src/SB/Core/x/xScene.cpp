#include "xScene.h"

#include "xMemMgr.h"
#include "xCollideFast.h"
#include "xMath.h"
#include "xMathInlines.h"

#include "iMath.h"
#include "iCollide.h"
#include "zBase.h"
#include "zGrid.h"

#include <rwcore.h>
#include <rpworld.h>
#include <rpcollis.h>

#include <string.h>

xScene* g_xSceneCur;
static xMat4x3* sBoxTestMat;
static U8 sUseJSP;
static void* sTestOPtr;
static xModelInstance* sTestMPtr;
static xBound sNearestBound;
static U8 sNearestChk;
static U8 sNearestCollType;
static RpIntersection sSphereIsx;

namespace
{
    struct cb_ray_hits_ent
    {
        const xRay3& ray;
        xCollis& coll;
        U8 chkby;
        U8 collType;

        cb_ray_hits_ent(const xRay3& ray, xCollis& coll, U8 chkby, U8 collType);
        bool operator()(xEnt& ent, xGridBound& gridb);
    };
} // namespace

void xSceneInit(xScene* sc, U16 num_trigs, U16 num_stats, U16 num_dyns, U16 num_npcs)
{
    sc->flags = 0;
    sc->num_trigs_allocd = num_trigs;
    sc->trigs = (xEnt**)xMemAllocSize(num_trigs * sizeof(xEnt*));
    sc->num_stats_allocd = num_stats;
    sc->stats = (xEnt**)xMemAllocSize(num_stats * sizeof(xEnt*));
    sc->num_dyns_allocd = num_dyns;
    sc->dyns = (xEnt**)xMemAllocSize(num_dyns * sizeof(xEnt*));
    sc->num_npcs_allocd = num_npcs;
    sc->npcs = (xEnt**)xMemAllocSize(num_npcs * sizeof(xEnt*));
    sc->num_ents_allocd = (U32)num_trigs + (U32)num_stats + (U32)num_dyns + (U32)num_npcs;
    sc->num_act_ents = 0;
    sc->act_ents = (xEnt**)xMemAllocSize(sc->num_ents_allocd * sizeof(xEnt*));
    sc->num_nact_ents = 0;
    sc->nact_ents = (xEnt**)xMemAllocSize(sc->num_ents_allocd * sizeof(xEnt*));
    sc->num_ents = 0;
    sc->num_trigs = 0;
    sc->num_stats = 0;
    sc->num_dyns = 0;
    sc->num_npcs = 0;
    sc->resolvID = NULL;

    xAnimInit();
    xModelInit();
    xAnimPoolInit(&sc->mempool, 50, 1, 0x1, 4);
    xModelPoolInit(49, 64);
    xModelPoolInit(74, 8);
    xModelPoolInit(164, 1);
    xAnimTempTransitionInit(16);
    xCollideInit(sc);
    xCollideFastInit(sc);
}

void xSceneExit(xScene* sc)
{
}

void xSceneSave(xScene* sc, xSerial* s)
{
}

void xSceneLoad(xScene* sc, xSerial* s)
{
}

void xSceneSetup(xScene* sc)
{
    xEnvSetup(sc->env);
}

void xSceneAddEnt(xScene* sc, xEnt* ent)
{
    if (ent->collType == XENT_COLLTYPE_TRIG)
    {
        sc->trigs[sc->num_trigs++] = ent;
    }
    else if (ent->collType == XENT_COLLTYPE_STAT)
    {
        sc->stats[sc->num_stats++] = ent;
    }
    else if (ent->collType == XENT_COLLTYPE_DYN)
    {
        sc->dyns[sc->num_dyns++] = ent;
    }
    else if (ent->collType == XENT_COLLTYPE_NPC)
    {
        sc->npcs[sc->num_npcs++] = ent;
    }

    sc->act_ents[sc->num_act_ents++] = ent;
}

xBase* xSceneResolvID(xScene* sc, U32 id)
{
    if (sc->resolvID)
    {
        return sc->resolvID(id);
    }

    return NULL;
}

const char* xSceneID2Name(xScene* sc, U32 id)
{
    if (sc->id2Name)
    {
        return sc->id2Name(id);
    }

    return NULL;
}

void xSceneForAllEnts(xScene* sc, xSceneEntCallback func, void* data)
{
    for (U16 i = 0; i < sc->num_act_ents; i++)
    {
        if (!func(sc->act_ents[i], sc, data))
        {
            break;
        }
    }
}

void xSceneForAllStatics(xScene* sc, xSceneEntCallback func, void* data)
{
    for (U16 i = 0; i < sc->num_stats; i++)
    {
        if (!func(sc->stats[i], sc, data))
        {
            break;
        }
    }
}

void xSceneForAllDynamics(xScene* sc, xSceneEntCallback func, void* data)
{
    for (U16 i = 0; i < sc->num_dyns; i++)
    {
        if (!func(sc->dyns[i], sc, data))
        {
            break;
        }
    }
}

void xSceneForAllNPCs(xScene* sc, xSceneEntCallback func, void* data)
{
    for (U16 i = 0; i < sc->num_npcs; i++)
    {
        if (!func(sc->npcs[i], sc, data))
        {
            break;
        }
    }
}

void xRayHitsGrid(xGrid* grid, xScene* sc, xRay3* r, xRayEntCallback rentcb, xQCData* qcr,
                  void* data)
//NONMATCH("https://decomp.me/scratch/2kH6a")
{
    xLine3 ln;
    xGridIterator it;

    r->flags |= (XRAY3_USE_MIN | XRAY3_USE_MAX);
    if (r->flags & XRAY3_USE_MIN)
    {
        xVec3 delta;
        delta.x = r->dir.x * r->min_t;
        delta.y = r->dir.y * r->min_t;
        delta.z = r->dir.z * r->min_t;
        ln.p1.x = r->origin.x + delta.x;
        ln.p1.y = r->origin.y + delta.y;
        ln.p1.z = r->origin.z + delta.z;
    }
    else
    {
        ln.p1.x = r->origin.x;
        ln.p1.y = r->origin.y;
        ln.p1.z = r->origin.z;
    }
    if (r->flags & XRAY3_USE_MAX)
    {
        F32 len;
        if (r->flags & XRAY3_USE_MIN)
        {
            len = r->max_t - r->min_t;
        }
        else
        {
            len = r->max_t;
        }
        ln.p2.x = r->dir.x * len;
        ln.p2.y = r->dir.y * len;
        ln.p2.z = r->dir.z * len;
    }
    else
    {
        ln.p2.x = r->dir.x;
        ln.p2.y = r->dir.y;
        ln.p2.z = r->dir.z;
    }

    ln.p2.x = ln.p1.x + ln.p2.x;
    ln.p2.y = ln.p1.y + ln.p2.y;
    ln.p2.z = ln.p1.z + ln.p2.z;

    S32 sclgx, sclgz;
    S32 eclgx, eclgz;
    F32 sclcx, sclcz;
    F32 eclcx, eclcz;
    F32 halfclx, halfclz;
    F32 quatrclx, quatrclz;
    S32 sz, ez;
    S32 x, z;

    halfclx = 0.5f * grid->csizex;
    halfclz = 0.5f * grid->csizez;
    quatrclx = 0.25f * grid->csizex;
    quatrclz = 0.25f * grid->csizez;

    if (xeq(r->dir.z, 0.0f, 1e-5f))
    {
        if (r->dir.z >= 0.0f)
        {
            r->dir.z = 1e-5f;
        }
        else
        {
            r->dir.z = -1e-5f;
        }
    }

    F32 dxdz = r->dir.x / r->dir.z;

    xGridGetCell(grid, ln.p1.x, ln.p1.y, ln.p1.z, sclgx, sclgz);
    xGridGetCell(grid, ln.p2.x, ln.p2.y, ln.p2.z, eclgx, eclgz);

    sclcx = grid->csizex * sclgx;
    sclcz = grid->csizez * sclgz;
    eclcx = grid->csizex * eclgx;
    eclcz = grid->csizez * eclgz;
    sclcx += grid->minx;
    sclcz += grid->minz;
    eclcx += grid->minx;
    eclcz += grid->minz;
    sclcx += halfclx;
    sclcz += halfclz;
    eclcx += halfclx;
    eclcz += halfclz;

    if (ln.p1.z < ln.p2.z)
    {
        sz = sclgz;
        ez = eclgz;
        if (sclgz > 0 && ln.p1.z < sclcz - quatrclz)
            sz--;
        if (eclgz < grid->nz - 1 && ln.p2.z > eclcz + quatrclz)
            ez++;
        for (z = sz; z <= ez; z++)
        {
            F32 cz;
            F32 lz, rz;
            F32 lx, rx;
            F32 ly, ry;
            S32 aclgx, aclgz;
            S32 bclgx, bclgz;
            F32 aclcx, aclcz;
            F32 bclcx, bclcz;
            S32 ax, bx;

            cz = sclcz + grid->csizez * (z - sz);
            lz = cz - halfclz;
            rz = cz + halfclz;

            if (lz < ln.p1.z)
            {
                lx = ln.p1.x;
                lz = ln.p1.z;
            }
            else
            {
                lx = ln.p1.x + dxdz * (lz - ln.p1.z);
            }

            if (rz > ln.p2.z)
            {
                rx = ln.p2.x;
                rz = ln.p2.z;
            }
            else
            {
                rx = ln.p1.x + dxdz * (rz - ln.p1.z);
            }

            ly = 0.0f;
            ry = 0.0f;

            xGridGetCell(grid, lx, ly, lz, aclgx, aclgz);
            xGridGetCell(grid, rx, ry, rz, bclgx, bclgz);

            aclcx = grid->csizex * aclgx;
            aclcz = grid->csizez * aclgz;
            bclcx = grid->csizex * bclgx;
            bclcz = grid->csizez * bclgz;
            aclcx += grid->minx;
            aclcz += grid->minz;
            bclcx += grid->minx;
            bclcz += grid->minz;
            aclcx += halfclx;
            aclcz += halfclz;
            bclcx += halfclx;
            bclcz += halfclz;

            if (lx < rx)
            {
                ax = aclgx;
                bx = bclgx;
                if (aclgx > 0 && lx < aclcx - quatrclx)
                    ax--;
                if (bclgx < grid->nx - 1 && rx > bclcx + quatrclx)
                    bx++;

                for (x = ax; x <= bx; x++)
                {
                    xGridBound* cell = xGridIterFirstCell(grid, x, z, it);
                    while (cell)
                    {
                        xBound* cellbound = (xBound*)(cell + 1);
                        if (xQuickCullIsects(qcr, &cellbound->qcd))
                        {
                            rentcb(sc, r, qcr, (xEnt*)cell->data, data);
                        }
                        cell = xGridIterNextCell(it);
                    }
                }
            }
            else
            {
                ax = aclgx;
                bx = bclgx;
                if (bclgx > 0 && rx < bclcx - quatrclx)
                    bx--;
                if (aclgx < grid->nx - 1 && lx > bclcx + quatrclx)
                    ax++;

                for (x = bx; x <= ax; x++)
                {
                    xGridBound* cell = xGridIterFirstCell(grid, x, z, it);
                    while (cell)
                    {
                        xBound* cellbound = (xBound*)(cell + 1);
                        if (xQuickCullIsects(qcr, &cellbound->qcd))
                        {
                            rentcb(sc, r, qcr, (xEnt*)cell->data, data);
                        }
                        cell = xGridIterNextCell(it);
                    }
                }
            }
        }
    }
    else
    {
        sz = sclgz;
        ez = eclgz;
        if (eclgz > 0 && ln.p2.z < eclcz - quatrclz)
            ez--;
        if (sclgz < grid->nz - 1 && ln.p1.z > sclcz + quatrclz)
            sz++;
        for (z = ez; z <= sz; z++)
        {
            F32 cz;
            F32 lz, rz;
            F32 lx, rx;
            F32 ly, ry;
            S32 aclgx, aclgz;
            S32 bclgx, bclgz;
            F32 aclcx, aclcz;
            F32 bclcx, bclcz;
            S32 ax, bx;

            cz = eclcz + grid->csizez * (z - ez);
            lz = cz - halfclz;
            rz = cz + halfclz;

            if (lz < ln.p2.z)
            {
                lx = ln.p2.x;
                lz = ln.p2.z;
            }
            else
            {
                lx = ln.p2.x + dxdz * (ln.p2.z - lz);
            }

            if (rz > ln.p1.z)
            {
                rx = ln.p1.x;
                rz = ln.p1.z;
            }
            else
            {
                rx = ln.p2.x + dxdz * (ln.p2.z - rz);
            }

            ly = 0.0f;
            ry = 0.0f;

            xGridGetCell(grid, lx, ly, lz, aclgx, aclgz);
            xGridGetCell(grid, rx, ry, rz, bclgx, bclgz);

            aclcx = grid->csizex * aclgx;
            aclcz = grid->csizez * aclgz;
            bclcx = grid->csizex * bclgx;
            bclcz = grid->csizez * bclgz;
            aclcx += grid->minx;
            aclcz += grid->minz;
            bclcx += grid->minx;
            bclcz += grid->minz;
            aclcx += halfclx;
            aclcz += halfclz;
            bclcx += halfclx;
            bclcz += halfclz;

            if (lx < rx)
            {
                ax = aclgx;
                bx = bclgx;
                if (aclgx > 0 && lx < aclcx - quatrclx)
                    ax--;
                if (bclgx < grid->nx - 1 && rx > bclcx + quatrclx)
                    bx++;

                for (x = ax; x <= bx; x++)
                {
                    xGridBound* cell = xGridIterFirstCell(grid, x, z, it);
                    while (cell)
                    {
                        xBound* cellbound = (xBound*)(cell + 1);
                        if (xQuickCullIsects(qcr, &cellbound->qcd))
                        {
                            rentcb(sc, r, qcr, (xEnt*)cell->data, data);
                        }
                        cell = xGridIterNextCell(it);
                    }
                }
            }
            else
            {
                ax = aclgx;
                bx = bclgx;
                if (bclgx > 0 && rx < bclcx - quatrclx)
                    bx--;
                if (aclgx < grid->nx - 1 && lx > bclcx + quatrclx)
                    ax++;

                for (x = bx; x <= ax; x++)
                {
                    xGridBound* cell = xGridIterFirstCell(grid, x, z, it);
                    while (cell)
                    {
                        xBound* cellbound = (xBound*)(cell + 1);
                        if (xQuickCullIsects(qcr, &cellbound->qcd))
                        {
                            rentcb(sc, r, qcr, (xEnt*)cell->data, data);
                        }
                        cell = xGridIterNextCell(it);
                    }
                }
            }
        }
    }

    xGridBound* cell = xGridIterFirstCell(&grid->other, it);
    while (cell)
    {
        xBound* cellbound = (xBound*)(cell + 1);
        if (xQuickCullIsects(qcr, &cellbound->qcd))
        {
            rentcb(sc, r, qcr, (xEnt*)cell->data, data);
        }
        cell = xGridIterNextCell(it);
    }
}

void xRayHitsTikiLandableEnt(xScene* sc, xRay3* r, xQCData* qcr, xEnt* ent, void* colldata)
{
    xCollis* coll = (xCollis*)colldata;
    xCollis c;

    if (ent->chkby == XENT_COLLTYPE_NONE)
    {
        return;
    }

    if (ent->collType == XENT_COLLTYPE_NPC)
    {
        return;
    }

    if (ent->baseType == eBaseTypeBoulder)
    {
        return;
    }

    if (qcr && !xQuickCullIsects(qcr, &ent->bound.qcd))
    {
        return;
    }

    xRayHitsBound(r, &ent->bound, &c);

    if (!(c.flags & 0x1))
    {
        return;
    }

    if (ent->collLev == 0x5)
    {
        iRayHitsModel(r, ent->model, &c);

        if (!(c.flags & 0x1))
        {
            return;
        }
    }

    if (c.dist < coll->dist)
    {
        coll->dist = c.dist;
        coll->oid = ent->id;
        coll->optr = ent;
        coll->mptr = ent->model;
    }
}

void xRayHitsEnt(xScene* sc, xRay3* r, xQCData* qcr, xEnt* ent, void* colldata)
{
    xCollis* coll = (xCollis*)colldata;
    xCollis c;

    if (ent->chkby == XENT_COLLTYPE_NONE)
    {
        return;
    }

    if (qcr && !xQuickCullIsects(qcr, &ent->bound.qcd))
    {
        return;
    }

    xRayHitsBound(r, &ent->bound, &c);

    if (!(c.flags & 0x1))
    {
        return;
    }

    if (c.dist < coll->dist)
    {
        coll->dist = c.dist;
        coll->oid = ent->id;
        coll->optr = ent;
        coll->mptr = ent->model;
    }
}

void xRayHitsTikiLandableScene(xScene* sc, xRay3* r, xCollis* coll)
{
    coll->dist = HUGE;

    xQCData q;
    xQuickCullForRay(&q, r);

    xRayHitsGrid(&colls_grid, sc, r, xRayHitsTikiLandableEnt, &q, coll);
    xRayHitsGrid(&colls_oso_grid, sc, r, xRayHitsTikiLandableEnt, &q, coll);
    xRayHitsGrid(&npcs_grid, sc, r, xRayHitsTikiLandableEnt, &q, coll);

    xCollis c;
    iRayHitsEnv(r, sc->env, &c);

    if (c.dist < coll->dist)
    {
        coll->dist = c.dist;
        coll->oid = c.oid;
        coll->optr = NULL;
        coll->mptr = NULL;
    }

    if (coll->dist < HUGE)
    {
        coll->flags |= k_HIT_IT;
    }
    else
    {
        coll->flags &= ~k_HIT_IT;
    }
}

void xRayHitsScene(xScene* sc, xRay3* r, xCollis* coll)
{
    coll->dist = HUGE;

    xQCData q;
    xQuickCullForRay(&q, r);

    xRayHitsGrid(&colls_grid, sc, r, xRayHitsEnt, &q, coll);
    xRayHitsGrid(&colls_oso_grid, sc, r, xRayHitsEnt, &q, coll);
    xRayHitsGrid(&npcs_grid, sc, r, xRayHitsEnt, &q, coll);

    xCollis c;
    iRayHitsEnv(r, sc->env, &c);

    if (c.dist < coll->dist)
    {
        coll->dist = c.dist;
        coll->oid = c.oid;
        coll->optr = NULL;
        coll->mptr = NULL;
    }

    if (coll->dist < HUGE)
    {
        coll->flags |= k_HIT_IT;
    }
    else
    {
        coll->flags &= ~k_HIT_IT;
    }
}

cb_ray_hits_ent::cb_ray_hits_ent(const xRay3& ray, xCollis& coll, U8 chkby, U8 collType)
    : ray(ray), coll(coll), chkby(chkby), collType(collType)
{
}

void xRayHitsSceneFlags(xScene* sc, xRay3* r, xCollis* coll, U8 collType, U8 chk)
//NONMATCH("https://decomp.me/scratch/ZJEEb")
{
    coll->dist = HUGE;
    coll->flags = (coll->flags & ~k_HIT_IT) | k_HIT_0x100;

    cb_ray_hits_ent cb(*r, *coll, collType, chk);

    xBound bound;
    bound.type = XBOUND_TYPE_BOX;
    xBoxFromRay(bound.box.box, *r);
    xVec3Add(&bound.box.center, &bound.box.box.lower, &bound.box.box.upper);
    xVec3SMul(&bound.box.center, &bound.box.center, 0.5f);

    xQuickCullForRay(&bound.qcd, r);

    if (chk & (XENT_COLLTYPE_STAT | XENT_COLLTYPE_DYN))
    {
        xGridCheckBound(colls_grid, bound, bound.qcd, cb);
        xGridCheckBound(colls_oso_grid, bound, bound.qcd, cb);
    }

    if (chk & XENT_COLLTYPE_NPC)
    {
        xGridCheckBound(npcs_grid, bound, bound.qcd, cb);
    }

    if (chk & 0x20)
    {
        xCollis temp_coll;
        temp_coll.flags = coll->flags;
        temp_coll.dist = HUGE;

        iRayHitsEnv(r, sc->env, &temp_coll);

        if (temp_coll.dist < coll->dist)
        {
            memcpy(coll, &temp_coll, sizeof(xCollis));
            coll->optr = NULL;
            coll->mptr = NULL;
        }
    }
}

void ProjectTriangle(xVec3* param_1, xVec3* param_2, float* param_3, float* param_4)
{
    float fVar1;

    *param_3 = param_1->x * param_2->x + param_1->y * param_2->y + param_1->z * param_2->z;
    *param_4 = *param_3;
    fVar1 = param_1->x * param_2[1].x + param_1->y * param_2[1].y + param_1->z * param_2[1].z;
    if (fVar1 < *param_3)
    {
        *param_3 = fVar1;
    }
    else
    {
        if (fVar1 > *param_4)
        {
            *param_4 = fVar1;
        }
    }
    fVar1 = param_1->x * param_2[2].x + param_1->y * param_2[2].y + param_1->z * param_2[2].z;
    if (fVar1 < *param_3)
    {
        *param_3 = fVar1;
        return;
    }
    if (fVar1 > *param_4)
    {
        *param_4 = fVar1;
    }
    return;
}

void ProjectBox(xVec3* param_1, xBox* param_2, float* param_3, float* param_4)
{
    F32 fVar7 = 0.5f * (param_1->x * ((param_2->upper).x + (param_2->lower).x) +
                        param_1->y * ((param_2->upper).y + (param_2->lower).y) +
                        param_1->z * ((param_2->upper).z + (param_2->lower).z));
    F32 fVar1 = 0.5f * (iabs(param_1->x * ((param_2->upper).x - (param_2->lower).x)) +
                        iabs(param_1->y * ((param_2->upper).y - (param_2->lower).y)) +
                        iabs(param_1->z * ((param_2->upper).z - (param_2->lower).z)));
    *param_3 = fVar7 - fVar1;
    *param_4 = fVar7 + fVar1;
}

static U32 Mgc_TriBoxTest(xVec3* apkTri, xBox* rkBox)
// NONMATCH("https://decomp.me/scratch/xYaVl")
{
    F32 fMin0, fMax0, fMin1, fMax1;
    xVec3 kD, akE[3], baxis;
    U32 andflag, curflag;
    S32 i, i0, i1;

    andflag = 0x3F;

    for (i = 0; i < 3; i++)
    {
        curflag = 0;

        if (apkTri[i].x > rkBox->upper.x)
        {
            curflag |= 0x1;
        }
        else if (apkTri[i].x < rkBox->lower.x)
        {
            curflag |= 0x2;
        }
        if (apkTri[i].y > rkBox->upper.y)
        {
            curflag |= 0x4;
        }
        else if (apkTri[i].y < rkBox->lower.y)
        {
            curflag |= 0x8;
        }
        if (apkTri[i].z > rkBox->upper.z)
        {
            curflag |= 0x10;
        }
        else if (apkTri[i].z < rkBox->lower.z)
        {
            curflag |= 0x20;
        }

        if (curflag == 0)
            return 1;

        andflag &= curflag;
    }

    if (andflag != 0)
        return 0;

    akE[0].x = apkTri[1].x - apkTri[0].x, akE[0].y = apkTri[1].y - apkTri[0].y,
    akE[0].z = apkTri[1].z - apkTri[0].z;
    akE[1].x = apkTri[2].x - apkTri[0].x, akE[1].y = apkTri[2].y - apkTri[0].y,
    akE[1].z = apkTri[2].z - apkTri[0].z;

    kD.x = akE[0].y * akE[1].z - akE[1].y * akE[0].z,
    kD.y = akE[0].z * akE[1].x - akE[1].z * akE[0].x,
    kD.z = akE[0].x * akE[1].y - akE[1].x * akE[0].y;

    fMin0 = kD.x * apkTri[0].x + kD.y * apkTri[0].y + kD.z * apkTri[0].z;
    fMax0 = fMin0;

    ProjectBox(&kD, rkBox, &fMin1, &fMax1);

    if (fMax1 < fMin0 || fMax0 < fMin1)
        return 0;

    baxis.x = 0.0f;
    baxis.y = 0.0f;
    baxis.z = 0.0f;

    akE[2].x = akE[1].x - akE[0].x, akE[2].y = akE[1].y - akE[0].y, akE[2].z = akE[1].z - akE[0].z;

    for (i0 = 0; i0 < 3; i0++)
    {
        for (i1 = 0; i1 < 3; i1++)
        {
            ((F32*)&baxis)[i1] = 1.0f;

            kD.x = akE[i0].y * baxis.z - baxis.y * akE[i0].z,
            kD.y = akE[i0].z * baxis.x - baxis.z * akE[i0].x,
            kD.z = akE[i0].x * baxis.y - baxis.x * akE[i0].y;

            ((F32*)&baxis)[i1] = 0.0f;

            ProjectTriangle(&kD, &apkTri[0], &fMin0, &fMax0);
            ProjectBox(&kD, rkBox, &fMin1, &fMax1);

            if (fMax1 < fMin0 || fMax0 < fMin1)
                return 0;
        }
    }

    return 1;
}

static RpCollisionTriangle* nearestFloorCB(RpIntersection*, RpCollisionTriangle* collTriangle,
                                           RwReal, void* data)
//NONMATCH("https://decomp.me/scratch/0VY4M")
{
    xNearFloorPoly* nfpoly = (xNearFloorPoly*)data;
    F32 currnear = nfpoly->neardist;
    xVec3 currpt;
    S32 currvert, curredge;
    xVec3 xformVert[4], xformNorm;
    U32 potentialOID;
    S32 i;
    F32 pdx[3], pdz[3];
    F32 numer, denom, t, testdist2, neardx, neardz, nearmag;
    xVec3 edgevec, centvec, testpt;

    if (sUseJSP)
    {
        if (((xClumpCollBSPTriangle*)collTriangle->index)->flags & 0x10)
        {
            return collTriangle;
        }
        potentialOID = ((xClumpCollBSPTriangle*)collTriangle->index)->matIndex;
    }
    else
    {
        potentialOID = collTriangle->index;
    }

    if (sBoxTestMat)
    {
        xMat4x3Toworld(&xformVert[0], sBoxTestMat, (xVec3*)collTriangle->vertices[0]);
        xMat4x3Toworld(&xformVert[1], sBoxTestMat, (xVec3*)collTriangle->vertices[1]);
        xMat4x3Toworld(&xformVert[2], sBoxTestMat, (xVec3*)collTriangle->vertices[2]);
        xMat3x3RMulVec(&xformNorm, sBoxTestMat, (xVec3*)&collTriangle->normal);
        xVec3Normalize(&xformNorm, &xformNorm);
    }
    else
    {
        xformVert[0] = *(xVec3*)collTriangle->vertices[0];
        xformVert[1] = *(xVec3*)collTriangle->vertices[1];
        xformVert[2] = *(xVec3*)collTriangle->vertices[2];
        xformNorm = *(xVec3*)&collTriangle->normal;
    }

    if (xformNorm.y < nfpoly->floorDot)
    {
        return collTriangle;
    }

    pdx[0] = nfpoly->center.x - xformVert[0].x;
    pdx[1] = nfpoly->center.x - xformVert[1].x;
    pdx[2] = nfpoly->center.x - xformVert[2].x;
    pdz[0] = nfpoly->center.z - xformVert[0].z;
    pdz[1] = nfpoly->center.z - xformVert[1].z;
    pdz[2] = nfpoly->center.z - xformVert[2].z;

    F32 f3 = pdx[0] * pdz[1] - pdz[0] * pdx[1];
    F32 f2 = pdx[1] * pdz[2] - pdz[1] * pdx[2];
    F32 f1 = pdx[2] * pdz[0] - pdz[2] * pdx[0];

    if ((f3 >= 0.0f && f2 >= 0.0f && f1 >= 0.0f) || (f3 <= 0.0f && f2 <= 0.0f && f1 <= 0.0f))
    {
        nfpoly->neardist = 0.0f;
        nfpoly->vert[0] = xformVert[0];
        nfpoly->vert[1] = xformVert[1];
        nfpoly->vert[2] = xformVert[2];
        nfpoly->optr = sTestOPtr;
        nfpoly->mptr = sTestMPtr;
        nfpoly->oid = potentialOID;

        return NULL;
    }

    xformVert[1] = xformVert[0];

    for (i = 0; i < 3; i++)
    {
        edgevec.x = xformVert[i + 1].x - xformVert[i].x;
        edgevec.y = xformVert[i + 1].y - xformVert[i].y;
        edgevec.z = xformVert[i + 1].z - xformVert[i].z;
        centvec.x = nfpoly->center.x - xformVert[i].x;
        centvec.y = nfpoly->center.y - xformVert[i].y;
        centvec.z = nfpoly->center.z - xformVert[i].z;

        numer = centvec.x * edgevec.x + centvec.y * edgevec.y + centvec.z * edgevec.z;
        denom = edgevec.x * edgevec.x + edgevec.y * edgevec.y + edgevec.z * edgevec.z;

        if (denom < 0.000001f)
        {
            return collTriangle;
        }

        if (numer <= 0.0f)
        {
            testdist2 = SQR(centvec.x) + SQR(centvec.y) + SQR(centvec.z);
            if (testdist2 < currnear)
            {
                currnear = testdist2;
                currpt = xformVert[i];
                currvert = i;
                curredge = -1;
            }
        }
        else if (numer < denom)
        {
            t = numer / denom;
            testpt.x = t * edgevec.x + xformVert[i].x;
            testpt.y = t * edgevec.y + xformVert[i].y;
            testpt.z = t * edgevec.z + xformVert[i].z;
            testdist2 = SQR(nfpoly->center.x - testpt.x) + SQR(nfpoly->center.y - testpt.y) +
                        SQR(nfpoly->center.z - testpt.z);

            if (testdist2 < currnear)
            {
                currnear = testdist2;
                currpt = testpt;
                currvert = -1;
                curredge = i;
            }
        }
    }

    if (currnear != nfpoly->neardist)
    {
        if (nfpoly->facingDot > 0.0f)
        {
            neardx = currpt.x - nfpoly->center.x;
            neardz = currpt.z - nfpoly->center.z;
            nearmag = xsqrt(SQR(neardx) + SQR(neardz));

            if (nearmag < 0.000001f)
            {
                return collTriangle;
            }

            if ((neardx * nfpoly->facingVec.x + neardz * nfpoly->facingVec.z) / nearmag <
                nfpoly->facingDot)
            {
                return collTriangle;
            }
        }

        nfpoly->vert[0] = xformVert[0];
        nfpoly->vert[1] = xformVert[1];
        nfpoly->vert[2] = xformVert[2];
        nfpoly->neardist = currnear;
        nfpoly->nearpt = currpt;
        nfpoly->nearvert = currvert;
        nfpoly->nearedge = curredge;
        nfpoly->optr = sTestOPtr;
        nfpoly->mptr = sTestMPtr;
        nfpoly->oid = potentialOID;
    }

    return collTriangle;
}

static RpCollisionTriangle* boxNearestFloorCB(RpIntersection* intersection,
                                              RpCollisionTriangle* collTriangle, RwReal distance,
                                              void* data)
{
    xNearFloorPoly* nfpoly = (xNearFloorPoly*)data;
    xVec3 xformVert[3];

    if (sBoxTestMat)
    {
        xMat4x3Toworld(&xformVert[0], sBoxTestMat, (xVec3*)collTriangle->vertices[0]);
        xMat4x3Toworld(&xformVert[1], sBoxTestMat, (xVec3*)collTriangle->vertices[1]);
        xMat4x3Toworld(&xformVert[2], sBoxTestMat, (xVec3*)collTriangle->vertices[2]);
    }
    else
    {
        xformVert[0] = *(xVec3*)collTriangle->vertices[0];
        xformVert[1] = *(xVec3*)collTriangle->vertices[1];
        xformVert[2] = *(xVec3*)collTriangle->vertices[2];
    }

    if (Mgc_TriBoxTest(xformVert, &nfpoly->box))
    {
        return nearestFloorCB(intersection, collTriangle, distance, data);
    }

    return collTriangle;
}

static RpCollisionTriangle* sectorNearestFloorCB(RpIntersection* intersection, RpWorldSector*,
                                                 RpCollisionTriangle* collTriangle, RwReal distance,
                                                 void* data)
{
    return nearestFloorCB(intersection, collTriangle, distance, data);
}

static S32 gridNearestFloorCB(xEnt* ent, void* cbdata)
{
    xNearFloorPoly* nfpoly = (xNearFloorPoly*)cbdata;

    if (!(ent->moreFlags & 0x80))
        return 1;
    if (!(ent->collType & sNearestChk))
        return 1;
    if (!(ent->chkby & sNearestCollType))
        return 1;

    xCollis tempC;
    tempC.flags = 0;

    xBoundHitsBound(&sNearestBound, &ent->bound, &tempC);
    if (!(tempC.flags & k_HIT_IT))
        return 1;

    if (ent->collLev == 5)
    {
        sTestOPtr = ent;
        sTestMPtr = ent->collModel ? ent->collModel : ent->model;

        RwFrame* frame = RpAtomicGetFrame(sTestMPtr->Data);
        RwFrameTransform(frame, sTestMPtr->Mat, rwCOMBINEREPLACE);

        sBoxTestMat = (xMat4x3*)sTestMPtr->Mat;
        RpAtomicForAllIntersections(sTestMPtr->Data, &sSphereIsx, boxNearestFloorCB, nfpoly);
    }

    return 1;
}

U32 xSceneNearestFloorPoly(xScene* sc, xNearFloorPoly* nfpoly, U8 collType, U8 chk)
//NONMATCH("https://decomp.me/scratch/yCzQV")
{
    sNearestBound.type = XBOUND_TYPE_BOX;
    sNearestBound.box.box = nfpoly->box;

    xVec3Lerp(&sNearestBound.box.center, &sNearestBound.box.box.upper, &sNearestBound.box.box.lower,
              0.5f);
    xQuickCullForBox(&sNearestBound.qcd, &sNearestBound.box.box);

    RpIntersection isx;
    isx.type = rpINTERSECTBOX;
    isx.t.box.sup = *(RwV3d*)&sNearestBound.box.box.upper;
    isx.t.box.inf = *(RwV3d*)&sNearestBound.box.box.lower;

    sSphereIsx.type = rpINTERSECTSPHERE;
    sSphereIsx.t.sphere.radius =
        xsqrt((SQR(isx.t.box.sup.x - isx.t.box.inf.x) + SQR(isx.t.box.sup.y - isx.t.box.inf.y) +
               SQR(isx.t.box.sup.z - isx.t.box.inf.z)) *
              0.25f);
    sSphereIsx.t.sphere.center = *(RwV3d*)&sNearestBound.box.center;

    nfpoly->neardist = HUGE;
    nfpoly->center = sNearestBound.box.center;
    nfpoly->oid = NULL;
    nfpoly->optr = NULL;
    nfpoly->mptr = NULL;

    if (chk & (XENT_COLLTYPE_STAT | XENT_COLLTYPE_DYN))
    {
        sNearestChk = chk;
        sNearestCollType = collType;
        xGridCheckPosition(&colls_grid, &sNearestBound.box.center, &sNearestBound.qcd,
                           gridNearestFloorCB, nfpoly);
        xGridCheckPosition(&colls_oso_grid, &sNearestBound.box.center, &sNearestBound.qcd,
                           gridNearestFloorCB, nfpoly);
    }

    if (chk & 0x20)
    {
        sTestOPtr = NULL;
        sTestMPtr = NULL;
        sBoxTestMat = NULL;

        if (sc->env->geom->jsp)
        {
            sUseJSP = true;
            xClumpColl_ForAllIntersections(sc->env->geom->jsp->colltree, &isx, sectorNearestFloorCB,
                                           nfpoly);
            sUseJSP = false;
        }
        else
        {
            RpCollisionWorldForAllIntersections(sc->env->geom->world, &isx, sectorNearestFloorCB,
                                                nfpoly);
        }
    }

    if (nfpoly->neardist != HUGE)
    {
        nfpoly->neardist = xsqrt(nfpoly->neardist);
        return 1;
    }

    return 0;
}

bool cb_ray_hits_ent::operator()(xEnt& ent, xGridBound& gridb)
{
    xCollis c;

    if (!(ent.chkby & chkby))
    {
        return true;
    }

    if (!(ent.collType & collType))
    {
        return true;
    }

    c.flags = coll.flags;

    xRayHitsBound(&ray, &ent.bound, &c);

    if (!(c.flags & 0x1))
    {
        return true;
    }

    if (c.dist > coll.dist)
    {
        return true;
    }

    if (ent.collLev == 0x5)
    {
        iRayHitsModel(&ray, ent.model, &c);

        if (!(c.flags & 0x1))
        {
            return true;
        }

        if (c.dist > coll.dist)
        {
            return true;
        }
    }

    memcpy(&coll, &c, sizeof(xCollis));

    coll.oid = ent.id;
    coll.optr = &ent;
    coll.mptr = ent.model;

    return true;
}

void xEntEnable(xEnt* ent)
{
    xBaseEnable(ent);
}

template <> U16 range_limit<U16>(U16 v, U16 minv, U16 maxv)
{
    if (v <= minv)
    {
        return minv;
    }

    if (v >= maxv)
    {
        return maxv;
    }

    return v;
}

void xBoxFromRay(xBox& box, const xRay3& ray)
{
    xLine3 line;

    if (ray.flags & 0x400)
    {
        F32 x = ray.dir.x * ray.min_t;
        F32 y = ray.dir.y * ray.min_t;
        F32 z = ray.dir.z * ray.min_t;

        line.p1.x = ray.origin.x + x;
        line.p1.y = ray.origin.y + y;
        line.p1.z = ray.origin.z + z;
    }
    else
    {
        line.p1.x = ray.origin.x;
        line.p1.y = ray.origin.y;
        line.p1.z = ray.origin.z;
    }

    if (ray.flags & 0x800)
    {
        F32 dist = (ray.flags & 0x400) ? ray.max_t - ray.min_t : ray.max_t;

        line.p2.x = ray.dir.x * dist;
        line.p2.y = ray.dir.y * dist;
        line.p2.z = ray.dir.z * dist;
    }
    else
    {
        line.p2.x = ray.dir.x;
        line.p2.y = ray.dir.y;
        line.p2.z = ray.dir.z;
    }

    line.p2.x = line.p1.x + line.p2.x;
    line.p2.y = line.p1.y + line.p2.y;
    line.p2.z = line.p1.z + line.p2.z;

    xBoxFromLine(box, line);
}

void xBoxFromLine(xBox& box, const xLine3& line)
{
    box.upper.x = MAX(line.p1.x, line.p2.x);
    box.upper.y = MAX(line.p1.y, line.p2.y);
    box.upper.z = MAX(line.p1.z, line.p2.z);
    box.lower.x = MIN(line.p1.x, line.p2.x);
    box.lower.y = MIN(line.p1.y, line.p2.y);
    box.lower.z = MIN(line.p1.z, line.p2.z);
}
