#ifndef ZNPCSUPPORT_H
#define ZNPCSUPPORT_H

#include "zNPCTypeCommon.h"

enum en_npctgt
{
    NPC_TGT_NONE,
    NPC_TGT_PLYR,
    NPC_TGT_ENT,
    NPC_TGT_BASE,
    NPC_TGT_POS,
    NPC_TGT_MVPT,
    NPC_TGT_NOMORE,
    NPC_TGT_FORCEINT = 0x7fffffff
};

struct NPCTarget
{
    en_npctgt typ_target;
    union
    {
        xEnt* ent_target;
        xBase* bas_target;
        xVec3 pos_target;
        zMovePoint* nav_target;
    };
    zNPCCommon* npc_owner;
};

void NPCWidget_Shutdown();
void NPCSupport_Startup();
void NPCSupport_ScenePrepare();
void NPCSupport_SceneFinish();
void NPCSupport_Timestep(float32 dt);
void NPCSupport_SceneReset();
void NPCSupport_Shutdown();
void NPCSupport_ScenePostInit();

#endif