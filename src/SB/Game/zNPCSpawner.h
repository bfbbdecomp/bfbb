#ifndef ZNPCSPAWNER_H
#define ZNPCSPAWNER_H

#include "zMovePoint.h"

#include "xRMemData.h"
#include "xordarray.h"
#include "xutil.h"

#include "zNPCTypeCommon.h"

enum en_SM_WAVE_MODE
{
    SM_WAVE_CONTINUOUS,
    SM_WAVE_DISCREET,
    SM_WAVE_NOMORE,
    SM_WAVE_FORCE = 0x7fffffff
};

enum en_SM_WAVE_STAT
{
    SM_STAT_BEGIN,
    SM_STAT_INPROG,
    SM_STAT_ABORT,
    SM_STAT_MARKTIME,
    SM_STAT_DONE,
    SM_STAT_NOMORE,
    SM_STAT_FORCE = 0x7fffffff
};

enum en_SM_NPC_STATUS
{
    SM_NPC_DEAD,
    SM_NPC_READY,
    SM_NPC_PENDING,
    SM_NPC_SPAWNED,
    SM_NPC_ACTIVE,
    SM_NPC_NOMORE,
    SM_NPC_FORCE = 0x7fffffff
};

struct SMDepot
{
    st_XORDEREDARRAY spawners;
};

struct SMSPStatus
{
    zMovePoint* sp;
    S32 flg_stat;
    zNPCCommon* npc_prefer;
};

struct SMNPCStatus
{
    zNPCCommon* npc;
    en_SM_NPC_STATUS status;
    zMovePoint* sp_prefer;
};

struct zNPCSpawner : RyzMemData
{
    S32 flg_spawner;
    zNPCCommon* npc_owner;
    F32 tym_delay;
    S32 max_spawn;
    en_SM_WAVE_MODE wavemode;
    en_SM_WAVE_STAT wavestat;
    F32 tmr_wave;
    S32 cnt_spawn;
    SMSPStatus sppool[16];
    SMNPCStatus npcpool[16];
    st_XORDEREDARRAY* pendlist;
    st_XORDEREDARRAY* actvlist; //0x1A4
    S32 cnt_cleanup;

    void Subscribe(zNPCCommon* owner);
    void SetWaveMode(en_SM_WAVE_MODE mode, F32 delay, S32 lifemax);
    S32 AddSpawnPoint(zMovePoint* sp);
    S32 AddSpawnNPC(zNPCCommon* npc);
    void Reset();
    void MapPreferred();
    void Timestep(F32 dt);
    void UpdateDiscreet(F32 dt);
    void UpdateContinuous(F32 dt);
    void Notify(en_SM_NOTICES note, void* data);
    S32 Owned(zNPCCommon* npc);
    U8 Receivable(en_SM_NOTICES note, void* data);
    SMSPStatus* SelectSP(const SMNPCStatus* npcstat);
    // NextPendingNPC.
    void ClearActive();
    void ClearPending();
    SMNPCStatus* NextPendingNPC( s32 arg0 );
    st_XORDEREDARRAY* FillPending();
    st_XORDEREDARRAY* ReFillPending();

    void SetNPCStatus(zNPCCommon* npc, en_SM_NPC_STATUS status);

    SMNPCStatus* StatForNPC(zNPCCommon* npc);
    S32 SpawnBeastie(SMNPCStatus* npcstat, SMSPStatus* spstat);
    SMNPCStatus* ToastedBeastie(zNPCCommon* npc);
    void ChildHeartbeat(F32 dt);
};

void zNPCSpawner_Startup();
void zNPCSpawner_Shutdown();
void zNPCSpawner_ScenePrepare();
void zNPCSpawner_SceneFinish();
zNPCSpawner* zNPCSpawner_GetInstance();

#endif
