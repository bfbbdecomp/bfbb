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

enum _tageNPCSnd
{
    eNPCSnd_GloveAttack,
    eNPCSnd_SleepyAttack,
    eNPCSnd_TubeAttack,
    eNPCSnd_FodBzztAttack,
    eNPCSnd_JellyfishAttack,
    eNPCSnd_Total
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

struct NPCBlinker
{
    F32 tmr_uvcell;
    S32 idx_uvcell;

    void Reset();
};

bool NPCC_ForceTalkOk();
void NPCWidget_Startup();
void NPCWidget_Shutdown();
void NPCWidget_ScenePrepare();
void NPCWidget_SceneFinish();
void NPCWidget_SceneReset();
void NPCWidget_ScenePostInit();
void NPCSupport_Startup();
bool NPCSupport_ScenePrepare();
void NPCSupport_SceneFinish();
void NPCSupport_Timestep(F32 dt);
void NPCSupport_SceneReset();
void NPCSupport_Shutdown();
void NPCSupport_ScenePostInit();
void Firework_SceneReset(S32);
void Firework_ScenePrepare();
void Firework_SceneFinish();
void Firework_Timestep(F32 dt);
void zNPC_SNDInit();
S32 NPCC_LampStatus();
F32 NPCC_TmrCycle(F32* tmr, F32 dt, F32 interval);
xVec3* NPCC_rightDir(xEnt* ent);
xVec3* NPCC_faceDir(xEnt* ent);
void NPCC_ang_toXZDir(F32 angle, xVec3* dir);
F32 NPCC_aimVary(xVec3* dir_aim, xVec3* pos_src, xVec3* pos_tgt, F32 dst_vary, S32 flg_vary,
                 xVec3* pos_aimPoint);
F32 NPCC_ds2_toCam(const xVec3* pos_from, xVec3* delta);
void zNPC_SNDStop(_tageNPCSnd snd);
void zNPC_SNDPlay3D(_tageNPCSnd snd, xEnt*);
RwRaster* NPCC_FindRWRaster(char*);

#endif
