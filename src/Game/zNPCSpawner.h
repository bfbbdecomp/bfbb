#ifndef ZNPCSPAWNER_H
#define ZNPCSPAWNER_H

#include "zMovePoint.h"

#include "../Core/x/xRMemData.h"
#include "../Core/x/xordarray.h"

enum en_SM_NOTICES
{
    SM_NOTE_NPCDIED,
    SM_NOTE_NPCSTANDBY,
    SM_NOTE_NPCALIVE,
    SM_NOTE_DUPPAUSE,
    SM_NOTE_DUPRESUME,
    SM_NOTE_DUPSETDELAY,
    SM_NOTE_DUPDEAD,
    SM_NOTE_KILLKIDS,
    SM_NOTE_NOMORE,
    SM_NOTE_FORCE = 0x7fffffff
};

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

struct zNPCCommon;

struct SMDepot
{
    st_XORDEREDARRAY spawners;
};

struct SMSPStatus
{
    zMovePoint* sp;
    int32 flg_stat;
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
    int32 flg_spawner;
    zNPCCommon* npc_owner;
    float32 tym_delay;
    int32 max_spawn;
    en_SM_WAVE_MODE wavemode;
    en_SM_WAVE_STAT wavestat;
    float32 tmr_wave;
    int32 cnt_spawn;
    SMSPStatus sppool[16];
    SMNPCStatus npcpool[16];
    st_XORDEREDARRAY pendlist;
    st_XORDEREDARRAY actvlist;
    int32 cnt_cleanup;

    void Subscribe(zNPCCommon* owner);
    void SetWaveMode(en_SM_WAVE_MODE mode, float32 delay, int32 lifemax);
    int32 AddSpawnPoint(zMovePoint* sp);
    int32 AddSpawnNPC(zNPCCommon* npc);
    void Reset();
    void MapPreferred();
    void Timestep(float32 dt);
    void UpdateDiscreet(float32 dt);
    void UpdateContinuous(float32 dt);
    void Notify(en_SM_NOTICES note, void* data);
    int32 Owned(zNPCCommon* npc);
    uint8 Receivable(en_SM_NOTICES note, void* data);
    SMSPStatus* SelectSP(const SMNPCStatus* npcstat);
    // NextPendingNPC.
    void ClearActive();
    void ClearPending();

    void SetNPCStatus(zNPCCommon* npc, en_SM_NPC_STATUS status);

    SMNPCStatus* StatForNPC(zNPCCommon* npc);
    int32 SpawnBeastie(SMNPCStatus* npcstat, SMSPStatus* spstat);
    SMNPCStatus* ToastedBeastie(zNPCCommon* npc);
    void ChildHeartbeat(float32 dt);
};

void zNPCSpawner_Startup();
void zNPCSpawner_Shutdown();
void zNPCSpawner_ScenePrepare();
void zNPCSpawner_SceneFinish();
zNPCSpawner* zNPCSpawner_GetInstance();

#endif