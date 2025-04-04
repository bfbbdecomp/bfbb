#include "xScene.h"

#include "xMemMgr.h"
#include "xCollideFast.h"
#include "xMath.h"

#include "iMath.h"
#include "iCollide.h"
#include "zBase.h"

#include <rwcore.h>
#include <rpworld.h>
#include <rpcollis.h>

#include <string.h>

extern F32 lbl_803CCF78;

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

cb_ray_hits_ent::cb_ray_hits_ent(const xRay3& ray, xCollis& coll, U8 chkby, U8 collType)
    : ray(ray), coll(coll), chkby(chkby), collType(collType)
{
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
    F32 fVar7 = lbl_803CCF78 * (param_1->x * ((param_2->upper).x + (param_2->lower).x) +
                                param_1->y * ((param_2->upper).y + (param_2->lower).y) +
                                param_1->z * ((param_2->upper).z + (param_2->lower).z));
    F32 fVar1 = lbl_803CCF78 * (iabs(param_1->x * ((param_2->upper).x - (param_2->lower).x)) +
                                iabs(param_1->y * ((param_2->upper).y - (param_2->lower).y)) +
                                iabs(param_1->z * ((param_2->upper).z - (param_2->lower).z)));
    *param_3 = fVar7 - fVar1;
    *param_4 = fVar7 + fVar1;
}

static RpCollisionTriangle* nearestFloorCB(RpIntersection*, RpCollisionTriangle* collTriangle, F32,
                                           void* data);

static RpCollisionTriangle* sectorNearestFloorCB(RpIntersection* intersection, RpWorldSector*,
                                                 RpCollisionTriangle* collTriangle, F32 distance,
                                                 void* data)
{
    return nearestFloorCB(intersection, collTriangle, distance, data);
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
