#ifndef ZNPCTYPEDUPLOTRON_H
#define ZNPCTYPEDUPLOTRON_H

#include "zNPCSpawner.h"

struct zNPCDuplotron : zNPCCommon
{
    F32 tmr_smokeCycle;
    zNPCSpawner* spawner;
    F32 tmr_blink;
    S32 idx_blink;

    static RwRaster* rast_blinky;

    zNPCDuplotron(S32 myType);

    void Init(xEntAsset* asset);
    void Setup();
    void ParseINI();
    void Reset();
    void ParseLinks();
    void BUpdate(xVec3*);
    void ParseChild(xBase* child);
    void Process(xScene* xscn, F32 dt);
    void SelfSetup();
    U32 AnimPick(S32 gid, en_NPC_GOAL_SPOT gspot, xGoal*);
    void DuploNotice(en_SM_NOTICES note, void* data);
    S32 IsAlive();
    S32 NPCMessage(NPCMsg* mail);
    S32 DupoHandleMail(NPCMsg* mail);
    void VFXSmokeStack(F32 dt);
    void VFXOverheat(F32 dt, F32);
    void VFXCycleLights(F32 dt, S32 fastpace);

    // zNPCTypeCommon overrides
    void Move(xScene*, F32 dt, xEntFrame*);

    // xNPCBasic overrides
    U8 ColChkFlags() const;
    U8 ColPenFlags() const;
    U8 ColChkByFlags() const;
    U8 ColPenByFlags() const;
    U8 PhysicsFlags() const;
};

extern U32 g_hash_dupoanim[5];
void zNPCDuplotron_ScenePrepare();
void ZNPC_Duplotron_Startup();
void zNPCDuplotron_ScenePostInit();
void ZNPC_Duplotron_Shutdown();
xFactoryInst* ZNPC_Create_Duplotron(S32 who, RyzMemGrow* grow, void*);
void ZNPC_Destroy_Duplotron(xFactoryInst* inst);
xAnimTable* ZNPC_AnimTable_Duplotron();
void DUPO_KillEffects();
void DUPO_InitEffects();
void zNPCDuplotron_SceneFinish();

#endif
