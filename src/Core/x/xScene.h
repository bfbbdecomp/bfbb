#ifndef XSCENE_H
#define XSCENE_H

#include "xBase.h"
#include "xEnt.h"
#include "xEnv.h"
#include "xMemMgr.h"
#include "xRay3.h"

typedef char* (*xSceneBase2NameCallback)(xBase*);
typedef char* (*xSceneID2NameCallback)(uint32);
typedef xBase* (*xSceneResolvIDCallback)(uint32);

struct xScene
{
    uint32 sceneID;
    uint16 flags;
    uint16 num_ents;
    uint16 num_trigs;
    uint16 num_stats;
    uint16 num_dyns;
    uint16 num_npcs;
    uint16 num_act_ents;
    uint16 num_nact_ents;
    float32 gravity;
    float32 drag;
    float32 friction;
    uint16 num_ents_allocd;
    uint16 num_trigs_allocd;
    uint16 num_stats_allocd;
    uint16 num_dyns_allocd;
    uint16 num_npcs_allocd;
    xEnt** trigs;
    xEnt** stats;
    xEnt** dyns;
    xEnt** npcs;
    xEnt** act_ents;
    xEnt** nact_ents;
    xEnv* env;
    xMemPool mempool;
    xSceneResolvIDCallback resolvID;
    xSceneBase2NameCallback base2Name;
    xSceneID2NameCallback id2Name;
};

extern xScene* g_xSceneCur;

xBase* xSceneResolvID(xScene* sc, uint32 id);
void xRayHitsSceneFlags(xScene* sc, xRay3* r, xCollis* coll, uint8 collType, uint8 chk);
void xSceneForAllStatics(xScene* sc, xEnt* (*func)(xEnt*, xScene*, void*), void* data);
void xSceneForAllDynamics(xScene* sc, xEnt* (*func)(xEnt*, xScene*, void*), void* data);
void xSceneForAllNPCs(xScene* sc, xEnt* (*func)(xEnt*, xScene*, void*), void* data);

#endif