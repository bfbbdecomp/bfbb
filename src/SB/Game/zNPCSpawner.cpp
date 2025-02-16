#include "zNPCSpawner.h"

#include <types.h>

#include "zEvent.h"

extern SMDepot g_smdepot;
extern F32 _805_Spawner; // 5.0f

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
    for (S32 i = 0; i < 0x10; i++)
    {
        zNPCSpawner* sm = (zNPCSpawner*)RyzMemData::operator new(sizeof(zNPCSpawner), 'SPWN', NULL);
        XOrdAppend(&depot->spawners, sm);
    }
}

void zNPCSpawner_SceneFinish()
{
    SMDepot* depot = &g_smdepot;
    for (S32 i = 0; i < depot->spawners.cnt; i++)
    {
        RyzMemData::operator delete(depot->spawners.list[i]);
    }
    XOrdDone(&depot->spawners, 0);
}

#if 0
// Something weird with the conditions here.
zNPCSpawner* zNPCSpawner_GetInstance()
{
    SMDepot* depot = &g_smdepot;
    zNPCSpawner* sm = (zNPCSpawner*)depot->spawners.list;
    if (depot->spawners.cnt > 0)
    {
        for (S32 i = depot->spawners.cnt; i > 0; i--)
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
    XOrdInit(this->pendlist, 0x10, 0);
    XOrdInit(this->actvlist, 0x10, 0);
}

void zNPCSpawner::SetWaveMode(en_SM_WAVE_MODE mode, F32 delay, S32 lifemax)
{
    this->wavemode = mode;
    this->tym_delay = delay;
    this->max_spawn = lifemax;
}

S32 zNPCSpawner::AddSpawnPoint(zMovePoint* sp)
{
    S32 ack = 0;
    for (S32 i = 0; i < 0x10; i++)
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

#if 0
S32 zNPCSpawner::AddSpawnNPC(zNPCCommon* npc)
{
    S32 ack = 0;
    for (S32 i = 0; i < 0x10; i++)
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

#if 0
void zNPCSpawner::MapPreferred()
{
    for (S32 i = 0; i < 0x10; i++)
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

void zNPCSpawner::SetNPCStatus(zNPCCommon* npc, en_SM_NPC_STATUS status)
{
    SMNPCStatus* stat = this->StatForNPC(npc);
    if (stat != NULL)
    {
        stat->status = status;
    }
}

SMNPCStatus* zNPCSpawner::ToastedBeastie(zNPCCommon* npc)
{
    SMNPCStatus* ret = this->StatForNPC(npc);
    XOrdRemove(this->actvlist, ret, -1);
    zEntEvent((xBase*)this->npc_owner, eEventDuploNPCKilled);
    return ret;
}

void zNPCSpawner::ChildHeartbeat(F32 dt)
{
}

U8 zMovePoint::IsOn()
{
    return this->on;
}
