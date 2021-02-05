#include "xScene.h"

#include "xMemMgr.h"
#include "xCollideFast.h"
#include "xMath.h"

#include "../p2/iCollide.h"
#include "../../Game/zBase.h"

#include <rwcore.h>
#include <rpworld.h>
#include <rpcollis.h>

#include <string.h>

namespace
{
    struct cb_ray_hits_ent
    {
        const xRay3& ray;
        xCollis& coll;
        uint8 chkby;
        uint8 collType;

        cb_ray_hits_ent(const xRay3& ray, xCollis& coll, uint8 chkby, uint8 collType);
        bool operator()(xEnt& ent, xGridBound& gridb);
    };
} // namespace

void xSceneInit(xScene* sc, uint16 num_trigs, uint16 num_stats, uint16 num_dyns, uint16 num_npcs)
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
    sc->num_ents_allocd =
        (uint32)num_trigs + (uint32)num_stats + (uint32)num_dyns + (uint32)num_npcs;
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

xBase* xSceneResolvID(xScene* sc, uint32 id)
{
    if (sc->resolvID)
    {
        return sc->resolvID(id);
    }

    return NULL;
}

const char* xSceneID2Name(xScene* sc, uint32 id)
{
    if (sc->id2Name)
    {
        return sc->id2Name(id);
    }

    return NULL;
}

void xSceneForAllEnts(xScene* sc, xSceneEntCallback func, void* data)
{
    for (uint16 i = 0; i < sc->num_act_ents; i++)
    {
        if (!func(sc->act_ents[i], sc, data))
        {
            break;
        }
    }
}

void xSceneForAllStatics(xScene* sc, xSceneEntCallback func, void* data)
{
    for (uint16 i = 0; i < sc->num_stats; i++)
    {
        if (!func(sc->stats[i], sc, data))
        {
            break;
        }
    }
}

void xSceneForAllDynamics(xScene* sc, xSceneEntCallback func, void* data)
{
    for (uint16 i = 0; i < sc->num_dyns; i++)
    {
        if (!func(sc->dyns[i], sc, data))
        {
            break;
        }
    }
}

void xSceneForAllNPCs(xScene* sc, xSceneEntCallback func, void* data)
{
    for (uint16 i = 0; i < sc->num_npcs; i++)
    {
        if (!func(sc->npcs[i], sc, data))
        {
            break;
        }
    }
}

// func_8003F890
#pragma GLOBAL_ASM(                                                                                \
    "asm/Core/x/xScene.s",                                                                         \
    "xRayHitsGrid__FP5xGridP6xSceneP5xRay3PFP6xSceneP5xRay3P7xQCDataP4xEntPv_vP7xQCDataPv")

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

// func_80040284
#pragma GLOBAL_ASM("asm/Core/x/xScene.s", "xRayHitsTikiLandableScene__FP6xSceneP5xRay3P7xCollis")

// func_800403A4
#pragma GLOBAL_ASM("asm/Core/x/xScene.s", "xRayHitsScene__FP6xSceneP5xRay3P7xCollis")

// func_800404C4
#pragma GLOBAL_ASM("asm/Core/x/xScene.s", "xRayHitsSceneFlags__FP6xSceneP5xRay3P7xCollisUcUc")

cb_ray_hits_ent::cb_ray_hits_ent(const xRay3& ray, xCollis& coll, uint8 chkby, uint8 collType)
    : ray(ray), coll(coll), chkby(chkby), collType(collType)
{
}

// func_8004066C
#pragma GLOBAL_ASM("asm/Core/x/xScene.s", "ProjectTriangle__FP5xVec3P5xVec3PfPf")

// func_80040730
#pragma GLOBAL_ASM("asm/Core/x/xScene.s", "ProjectBox__FP5xVec3P4xBoxPfPf")

// func_800407C4
#pragma GLOBAL_ASM("asm/Core/x/xScene.s", "Mgc_TriBoxTest__FP5xVec3P4xBox")

static RpCollisionTriangle* nearestFloorCB(RpIntersection*, RpCollisionTriangle* collTriangle,
                                           float32, void* data);
// func_80040A7C
#pragma GLOBAL_ASM("asm/Core/x/xScene.s",                                                          \
                   "nearestFloorCB__FP14RpIntersectionP19RpCollisionTrianglefPv")

// func_80040EB4
#pragma GLOBAL_ASM("asm/Core/x/xScene.s",                                                          \
                   "boxNearestFloorCB__FP14RpIntersectionP19RpCollisionTrianglefPv")

static RpCollisionTriangle* sectorNearestFloorCB(RpIntersection* intersection, RpWorldSector*,
                                                 RpCollisionTriangle* collTriangle,
                                                 float32 distance, void* data)
{
    return nearestFloorCB(intersection, collTriangle, distance, data);
}

// func_80040FBC
#pragma GLOBAL_ASM("asm/Core/x/xScene.s", "gridNearestFloorCB__FP4xEntPv")

// func_800410CC
#pragma GLOBAL_ASM("asm/Core/x/xScene.s", "xSceneNearestFloorPoly__FP6xSceneP14xNearFloorPolyUcUc")

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

// func_80041428
#pragma GLOBAL_ASM("asm/Core/x/xScene.s", "__as__10grid_indexFRC10grid_index")

void xEntEnable(xEnt* ent)
{
    xBaseEnable(ent);
}

// func_8004145C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Core/x/xScene.s",                                                                         \
    "xGridCheckBound_esc__0_Q220_esc__2_unnamed_esc__2_xScene_cpp_esc__2_15cb_ray_hits_ent_esc__1___FR5xGridRC6xBoundRC7xQCDataQ220_esc__2_unnamed_esc__2_xScene_cpp_esc__2_15cb_ray_hits_ent")

// func_80041614
#pragma GLOBAL_ASM("asm/Core/x/xScene.s", "get_grid_index__FRC5xGridff")

template <> uint16 range_limit<uint16>(uint16 v, uint16 minv, uint16 maxv)
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
        float32 x = ray.dir.x * ray.min_t;
        float32 y = ray.dir.y * ray.min_t;
        float32 z = ray.dir.z * ray.min_t;

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
        float32 dist = (ray.flags & 0x400) ? ray.max_t - ray.min_t : ray.max_t;

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

void xMat3x3RMulVec(xVec3* o, const xMat3x3* m, const xVec3* v)
{
    float32 x = m->right.x * v->x + m->up.x * v->y + m->at.x * v->z;
    float32 y = m->right.y * v->x + m->up.y * v->y + m->at.y * v->z;
    float32 z = m->right.z * v->x + m->up.z * v->y + m->at.z * v->z;

    o->x = x;
    o->y = y;
    o->z = z;
}
