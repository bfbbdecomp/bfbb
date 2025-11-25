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

enum en_NPC_UI_WIDGETS
{
    NPC_WIDGE_TALK = 0,
    NPC_WIDGE_NOMORE = 1,
    NPC_WIDGE_FORCE = 2,
};

enum en_fwstate
{
    FW_STAT_UNUSED,
    FW_STAT_READY,
    FW_STAT_FLIGHT,
    FW_STAT_BOOM,
    FW_STAT_DONE,
    FW_STAT_NOMORE,
    FW_STAT_FORCE = 0x7fffffff
};

enum en_fwstyle
{
    FW_STYL_DEFAULT,
    FW_STYL_JULY4TH,
    FW_STYL_XMAS,
    FW_STYL_STPATS,
    FW_STYL_VALENTINE,
    FW_STYL_NOMORE,
    FW_STYL_FORCE = 0x7fffffff
};

struct NPCTarget
{
    en_npctgt typ_target;
    union
    {
        xEnt* ent_target; //0x4
        xBase* bas_target;
        xVec3 pos_target;
        zMovePoint* nav_target;
    };
    zNPCCommon* npc_owner;

    void TargetClear();
    void PosGet(xVec3* pos);
    void TargetSet(xEnt* ent, int b);
    S32 IsDead();
    S32 FindNearest(S32 flg_consider, xBase* skipme, xVec3* from, F32 dst_max);
    S32 InCylinder(xVec3* from, F32 rad, F32 hyt, F32 off);
    U32 HaveTarget();
};

struct NPCBlinker
{
    F32 tmr_uvcell;
    S32 idx_uvcell;

    void Reset();
    void IndexToUVCoord(int param_1, float* param_2, float* param_3);
    void Update(F32 dt, F32 ratio, F32 tym_slow, F32 tym_fast);
};

struct NPCWidget
{
    en_NPC_UI_WIDGETS idxID;
    xBase* base_widge;
    zNPCCommon* npc_ownerlock;

    S32 NPCIsTheLocker(const zNPCCommon* npc_lock);
    U32 IsLocked();
    S32 IsVisible();
    S32 Off(const zNPCCommon* npc, S32 theman);
    S32 On(const zNPCCommon* npc, S32 theman);
    void Reset();
    void Init(en_NPC_UI_WIDGETS);
    S32 Lock(const zNPCCommon*);
    S32 Unlock(const zNPCCommon*);
};

struct Firework
{
    static F32 acc_thrust;
    static F32 acc_gravity;

    struct
    {
        en_fwstate fwstate : 8;
        en_fwstyle fwstyle : 8;
        S32 flg_firework : 16; //0x2
    };
    F32 tym_lifespan;
    F32 tmr_remain; //0x14?
    xVec3 pos;
    xVec3 vel;

    void FlyFlyFly(F32 dt);
    void Update(F32 dt);
    void Cleanup();
    void Detonate();
};

bool NPCC_ForceTalkOk();
void NPCWidget_Startup();
void NPCWidget_Shutdown();
void NPCWidget_ScenePrepare();
void NPCWidget_SceneFinish();
void NPCWidget_SceneReset();
void NPCWidget_ScenePostInit();
void NPCSupport_Startup();
void NPCSupport_ScenePrepare();
void NPCSupport_SceneFinish();
void NPCSupport_Timestep(F32 dt);
void NPCSupport_SceneReset();
void NPCSupport_Shutdown();
void NPCSupport_ScenePostInit();
void Firework_SceneReset(S32);
void Firework_ScenePrepare();
void Firework_SceneFinish();
void Firework_Timestep(F32 dt);
void Firework_Release(Firework*);
RwTexture* NPCC_FindRWTexture(U32 hashid);
RwTexture* NPCC_FindRWTexture(const char* txtrname);
void NPCC_MakeArbPlane(const xVec3* dir_norm, xVec3* at, xVec3* rt);
RwRaster* NPCC_FindRWRaster(const char* txtrname);
RwRaster* NPCC_FindRWRaster(RwTexture* txtr);
void zNPC_SNDInit();
S32 NPCC_LampStatus();
F32 NPCC_TmrCycle(F32* tmr, F32 dt, F32 interval);
xVec3* NPCC_rightDir(xEnt* ent);
xVec3* NPCC_faceDir(xEnt* ent);
void NPCC_ang_toXZDir(F32 angle, xVec3* dir);
F32 NPCC_dir_toXZAng(const xVec3* dir);
F32 NPCC_aimVary(xVec3* dir_aim, xVec3* pos_src, xVec3* pos_tgt, F32 dst_vary, S32 flg_vary,
                 xVec3* pos_aimPoint);
void NPCC_aimMiss(xVec3*, xVec3*, xVec3*, float, xVec3*);
S32 NPCC_chk_hitPlyr(xBound* bnd, xCollis* collide);
S32 NPCC_pos_ofBase(xBase* tgt, xVec3* pos);
F32 NPCC_ds2_toCam(const xVec3* pos_from, xVec3* delta);
void zNPC_SNDStop(_tageNPCSnd snd);
void zNPC_SNDPlay3D(_tageNPCSnd snd, xEnt*);
RwRaster* NPCC_FindRWRaster(char*);
void NPCC_xBoundAway(xBound* bnd);
void NPCC_xBoundBack(xBound* bnd);

#endif
