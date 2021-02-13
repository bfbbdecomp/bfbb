#include "zNPCSpawner.h"

#include <types.h>

extern SMDepot g_smdepot;
extern float32 _805_Spawner; // 5.0f

void zNPCSpawner_Startup()
{
}

void zNPCSpawner_Shutdown()
{
}

void zNPCSpawner_ScenePrepare()
{
    SMDepot* depot = &g_smdepot;
    XOrdInit(&depot->spawners, sizeof(g_smdepot), 0);
    for (int32 i = 0; i < 0x10; i++)
    {
        zNPCSpawner* sm = (zNPCSpawner*)RyzMemData::operator new(sizeof(zNPCSpawner), 'SPWN', NULL);
        XOrdAppend(&depot->spawners, sm);
    }
}

void zNPCSpawner_SceneFinish()
{
    SMDepot* depot = &g_smdepot;
    for (int32 i = 0; i < depot->spawners.cnt; i++)
    {
        RyzMemData::operator delete(depot->spawners.list[i]);
    }
    XOrdDone(&depot->spawners, 0);
}

#if 1

// func_8012A828
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "zNPCSpawner_GetInstance__Fv")

#else

// Something weird with the conditions here.
zNPCSpawner* zNPCSpawner_GetInstance()
{
    SMDepot* depot = &g_smdepot;
    zNPCSpawner* sm = (zNPCSpawner*)depot->spawners.list;
    if (depot->spawners.cnt > 0)
    {
        for (int32 i = depot->spawners.cnt; i > 0; i--)
        {
            zNPCSpawner* sm_tmp = sm;
            if (!(sm_tmp->flg_spawner & 1))
            {
                sm_tmp->flg_spawner |= 1;
                return sm_tmp;
            }
            sm++;
        }
        return NULL;
    }
    else
    {
        return NULL;
    }
}

#endif

void zNPCSpawner::Subscribe(zNPCCommon* owner)
{
    this->npc_owner = owner;
    this->tym_delay = _805_Spawner;
    this->max_spawn = -1;
    this->wavestat = SM_STAT_BEGIN;
    XOrdInit(&this->pendlist, 0x10, 0);
    XOrdInit(&this->actvlist, 0x10, 0);
}

void zNPCSpawner::SetWaveMode(en_SM_WAVE_MODE mode, float32 delay, int32 lifemax)
{
    this->wavemode = mode;
    this->tym_delay = delay;
    this->max_spawn = lifemax;
}

int32 zNPCSpawner::AddSpawnPoint(zMovePoint* sp)
{
    int32 ack = 0;
    for (int32 i = 0; i < 0x10; i++)
    {
        SMSPStatus* sp_stat = &this->sppool[i];
        if (sp_stat->sp == NULL)
        {
            sp_stat->sp = sp;
            sp_stat->npc_prefer = NULL;
            ack = 1;
            break;
        }
    }
    return ack;
}

#if 1

// func_8012A920
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "AddSpawnNPC__11zNPCSpawnerFP10zNPCCommon")

#else

int32 zNPCSpawner::AddSpawnNPC(zNPCCommon* npc)
{
    int32 ack = 0;
    for (int32 i = 0; i < 0x10; i++)
    {
        SMNPCStatus* npc_stat = &this->npcpool[i];
        if (npc_stat->npc == NULL)
        {
            npc_stat->npc = npc;
            ack = 1;
            npc_stat->status = SM_NPC_READY;
            npc_stat->sp_prefer = NULL;
            break;
        }
    }
    // Need to figure out what it is calling here.
    npc->DBG_Name();
    return ack;
}

#endif

void zNPCSpawner::Reset()
{
    this->cnt_spawn = 0;
    this->wavestat = SM_STAT_BEGIN;
    this->cnt_cleanup = 0;
    this->flg_spawner &= 1;
    this->flg_spawner |= 8;
    this->ClearPending();
    this->ClearActive();
    this->MapPreferred();
}

#if 1

// func_8012AA14
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "MapPreferred__11zNPCSpawnerFv")

#else

void zNPCSpawner::MapPreferred()
{
    for (int32 i = 0; i < 0x10; i++)
    {
        SMNPCStatus* npc_stat = &this->npcpool[i];
        if (npc_stat->npc != NULL)
        {
            zMovePoint* sp = (zMovePoint*)npc_stat->npc->FirstAssigned();
            if (sp != NULL && /*TODO*/)
            {
                npc_stat->sp_prefer = sp;
            }
        }
    }
}

#endif

// func_8012AAA8
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "Timestep__11zNPCSpawnerFf")

// func_8012AB70
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "UpdateDiscreet__11zNPCSpawnerFf")

// func_8012ADE8
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "UpdateContinuous__11zNPCSpawnerFf")

// func_8012B0BC
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "Notify__11zNPCSpawnerF13en_SM_NOTICESPv")

// func_8012B1FC
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "Owned__11zNPCSpawnerCFP10zNPCCommon")

// func_8012B2D8
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "Receivable__11zNPCSpawnerCF13en_SM_NOTICESPv")

// func_8012B32C
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "SelectSP__11zNPCSpawnerFPC11SMNPCStatus")

// func_8012B4B8
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "NextPendingNPC__11zNPCSpawnerFi")

// func_8012B4F4
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "ClearActive__11zNPCSpawnerFv")

// func_8012B550
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "ClearPending__11zNPCSpawnerFv")

// func_8012B5A4
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "FillPending__11zNPCSpawnerFv")

// func_8012B5DC
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "ReFillPending__11zNPCSpawnerFv")

// func_8012B650
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "IsSPLZClear__11zNPCSpawnerFP10zMovePoint")

// func_8012B7E4
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "IsNearbyMover__11zNPCSpawnerFP6xBoundiP7xCollis")

// func_8012B980
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s",                                                       \
                   "SetNPCStatus__11zNPCSpawnerFP10zNPCCommon16en_SM_NPC_STATUS")

// func_8012B9B8
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "StatForSP__11zNPCSpawnerFP10zMovePointi")

// func_8012BADC
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "StatForNPC__11zNPCSpawnerFP10zNPCCommon")

// func_8012BC00
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s",                                                       \
                   "SpawnBeastie__11zNPCSpawnerFP11SMNPCStatusP10SMSPStatus")

// func_8012BD0C
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "ToastedBeastie__11zNPCSpawnerFP10zNPCCommon")

// func_8012BD68
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "ChildHeartbeat__11zNPCSpawnerFf")

// func_8012BD6C
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "ChildCleanup__11zNPCSpawnerFf")

// func_8012BE78
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s",                                                       \
                   "xUtil_select_esc__0_10SMSPStatus_esc__1___FPP10SMSPStatusiPCf")

// func_8012BF8C
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s",                                                       \
                   "xUtil_select_esc__0_11SMNPCStatus_esc__1___FPP11SMNPCStatusiPCf")

// func_8012C0A0
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "IsOn__10zMovePointFv")
