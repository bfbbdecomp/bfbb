#include "zNPCSpawner.h"

#include <types.h>

#include "zEvent.h"
#include "xDraw.h"
#include "zNPCSupport.h"
#include "zGlobals.h"
#include "xMathInlines.h"
#include "zNPCTypeRobot.h"

static SMDepot g_smdepot = {};
static S32 g_drawSpawnBounds;

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
        // FIXME: operator new call
        // zNPCSpawner* sm = RyzMemData::operator new((size_t)sizeof(zNPCSpawner), 'SPWN', NULL);
        // XOrdAppend(&depot->spawners, sm);
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

void zNPCSpawner::Subscribe(zNPCCommon* owner)
{
    this->npc_owner = owner;
    this->tym_delay = _805_Spawner;
    this->max_spawn = -1;
    this->wavestat = SM_STAT_BEGIN;
    XOrdInit(&this->pendlist, 0x10, 0);
    XOrdInit(&this->actvlist, 0x10, 0);
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

void zNPCSpawner::MapPreferred()
{
    for (S32 i = 0; i < 16; i++)
    {
        SMNPCStatus* npc_stat = &this->npcpool[i];
        if (npc_stat->npc != NULL)
        {
            zMovePoint* sp = (zMovePoint*)npc_stat->npc->FirstAssigned();
            if (sp != NULL)
            {
                SMSPStatus* sp_stat = StatForSP(sp, 0);
                if (sp_stat != NULL)
                {
                    npc_stat->sp_prefer = sp;
                    sp_stat->npc_prefer = npc_stat->npc;
                }
            }
        }
    }
}

void zNPCSpawner::Timestep(F32 dt)
{
    if (flg_spawner & 0x8)
    {
        ChildHeartbeat(dt);
    }

    if (flg_spawner & 0x10)
    {
        ChildCleanup(dt);
    }

    if (!(flg_spawner & 0x4))
    {
        tmr_wave = -1.0f > tmr_wave - dt ? -1.0f : tmr_wave - dt;

        switch (wavemode)
        {
        case SM_WAVE_DISCREET:
            UpdateDiscreet(dt);
            break;
        case SM_WAVE_CONTINUOUS:
            UpdateContinuous(dt);
            break;
        }
    }
}

void zNPCSpawner::UpdateDiscreet(F32 dt)
{
    SMSPStatus* spstat = NULL;

    switch (wavestat)
    {
    case SM_STAT_BEGIN:
        FillPending();

        if (pendlist.cnt > 0)
        {
            wavestat = SM_STAT_INPROG;
            zEntEvent(npc_owner, eEventDuploWaveBegin);

            flg_spawner &= ~0x20;
        }

        tmr_wave = tym_delay;

        break;
    case SM_STAT_INPROG:
        if (pendlist.cnt < 1)
        {
            wavestat = SM_STAT_MARKTIME;
        }
        else if (max_spawn > 0 && !(cnt_spawn < max_spawn))
        {
            wavestat = SM_STAT_ABORT;
        }
        else if (tmr_wave < 0.0f)
        {
            SMNPCStatus* npcstat = NextPendingNPC(0);
            if (npcstat != NULL)
            {
                spstat = SelectSP(npcstat);
            }

            if (!(spstat == NULL))
            {
                SpawnBeastie(npcstat, spstat);
            }

            tmr_wave = tym_delay * (0.25f * (xurand() - 0.5f)) + tym_delay;
        }

        break;
    case SM_STAT_MARKTIME:
        if (actvlist.cnt < 1)
        {
            wavestat = SM_STAT_DONE;
        }
        else if (max_spawn > 0 && !(cnt_spawn < max_spawn))
        {
            wavestat = SM_STAT_ABORT;
        }

        break;
    case SM_STAT_ABORT:
        if (actvlist.cnt < 1)
        {
            wavestat = SM_STAT_DONE;
        }

        ClearPending();

        break;
    case SM_STAT_DONE:
        if (!(flg_spawner & 0x20))
        {
            zEntEvent(npc_owner, eEventDuploWaveComplete);
        }

        if (max_spawn > 0 && !(cnt_spawn < max_spawn))
        {
            if (!(flg_spawner & 0x20))
            {
                flg_spawner |= 0x20;

                zEntEvent(npc_owner, eEventDuploExpiredMaxNPC);
                zEntEvent(npc_owner, eEventDuploSuperDuperDone);

                if (flg_spawner & 0x2)
                {
                    zEntEvent(npc_owner, eEventDuploDuperIsDoner);
                }
            }
        }
        else
        {
            if (flg_spawner & 0x2)
            {
                if (!(flg_spawner & 0x20))
                {
                    flg_spawner |= 0x20;

                    zEntEvent(npc_owner, eEventDuploSuperDuperDone);
                    zEntEvent(npc_owner, eEventDuploDuperIsDoner);
                }
            }
            else
            {
                wavestat = SM_STAT_BEGIN;
            }
        }

        break;
    default:
        break;
    }
}

void zNPCSpawner::UpdateContinuous(F32 dt)
{
    SMSPStatus* spstat = NULL;

    switch (wavestat)
    {
    case SM_STAT_BEGIN:
        FillPending();

        if (pendlist.cnt > 0)
        {
            wavestat = SM_STAT_INPROG;
            zEntEvent(npc_owner, eEventDuploWaveBegin);

            flg_spawner &= ~0x20;
        }

        tmr_wave = tym_delay;

        break;
    case SM_STAT_INPROG:
        if (pendlist.cnt < 1)
        {
            wavestat = SM_STAT_MARKTIME;
        }
        else if (max_spawn > 0 && !(cnt_spawn < max_spawn))
        {
            wavestat = SM_STAT_ABORT;
        }
        else if (tmr_wave < 0.0f)
        {
            SMNPCStatus* npcstat = NextPendingNPC(0);
            if (npcstat != NULL)
            {
                spstat = SelectSP(npcstat);
            }

            if (!(spstat == NULL))
            {
                SpawnBeastie(npcstat, spstat);
            }

            tmr_wave = tym_delay * (0.25f * (xurand() - 0.5f)) + tym_delay;
        }

        break;
    // MarkTime case is the significantly different one between this function and UpdateDiscreet
    case SM_STAT_MARKTIME:
        if (flg_spawner & 0x2)
        {
            wavestat = SM_STAT_ABORT;
        }
        else if (max_spawn > 0 && !(cnt_spawn < max_spawn))
        {
            wavestat = SM_STAT_ABORT;
        }
        else
        {
            if (tmr_wave < 0.0f)
            {
                tmr_wave = tym_delay * (0.25f * (xurand() - 0.5f)) + tym_delay;

                ReFillPending();

                if (pendlist.cnt > 0)
                {
                    wavestat = SM_STAT_INPROG;
                }
            }
            else if (pendlist.cnt > 0)
            {
                wavestat = SM_STAT_INPROG;
            }
        }

        break;
    case SM_STAT_ABORT:
        if (actvlist.cnt < 1)
        {
            wavestat = SM_STAT_DONE;
        }

        ClearPending();

        break;
    case SM_STAT_DONE:
        if (!(flg_spawner & 0x20))
        {
            zEntEvent(npc_owner, eEventDuploWaveComplete);
        }

        if (max_spawn > 0 && !(cnt_spawn < max_spawn))
        {
            if (!(flg_spawner & 0x20))
            {
                flg_spawner |= 0x20;

                zEntEvent(npc_owner, eEventDuploExpiredMaxNPC);
                zEntEvent(npc_owner, eEventDuploSuperDuperDone);

                if (flg_spawner & 0x2)
                {
                    zEntEvent(npc_owner, eEventDuploDuperIsDoner);
                }
            }
        }
        else
        {
            if (flg_spawner & 0x2)
            {
                if (!(flg_spawner & 0x20))
                {
                    flg_spawner |= 0x20;

                    zEntEvent(npc_owner, eEventDuploSuperDuperDone);
                    zEntEvent(npc_owner, eEventDuploDuperIsDoner);
                }
            }
        }

        break;
    default:
        break;
    }
}

void zNPCSpawner::Notify(en_SM_NOTICES note, void* data)
{
    zNPCCommon* npcdata = (zNPCCommon*)data;
    switch (note)
    {
    case SM_NOTE_NPCDIED:
        ToastedBeastie(npcdata);
        SetNPCStatus(npcdata, SM_NPC_DEAD);
        break;
    case SM_NOTE_NPCSTANDBY:
        SetNPCStatus(npcdata, SM_NPC_READY);
        break;
    case SM_NOTE_NPCALIVE:
        SetNPCStatus(npcdata, SM_NPC_ACTIVE);
        break;
    case SM_NOTE_DUPPAUSE:
        flg_spawner |= 0x4;
        break;
    case SM_NOTE_DUPRESUME:
        if ((flg_spawner & 0x2) == 0)
        {
            flg_spawner &= ~0x4;
        }
        break;
    case SM_NOTE_DUPSETDELAY:
        tym_delay = *(F32*)npcdata;
        tym_delay = tym_delay > -1.0f ? tym_delay : -1.0f;

        break;
    case SM_NOTE_DUPDEAD:
        if ((flg_spawner & 0x2) == 0)
        {
            ClearPending();
            flg_spawner |= 0x2;
            if ((wavestat == SM_STAT_DONE) && (flg_spawner & 0x20) == 0)
            {
                zEntEvent(npc_owner, eEventDuploDuperIsDoner);
            }
        }
        break;
    case SM_NOTE_KILLKIDS:
        ClearPending();
        flg_spawner |= 0x2;
        flg_spawner |= 0x10;
    }
}

U8 zNPCSpawner::Owned(zNPCCommon* npc) const
{
    S32 i;
    for (i = 0; i < 16; i++)
    {
        if (npcpool[i].npc == npc)
        {
            return 1;
        }
    }

    return 0;
}

U8 zNPCSpawner::Receivable(en_SM_NOTICES note, void* data) const
{
    switch (note)
    {
    case SM_NOTE_NPCDIED:
    case SM_NOTE_NPCSTANDBY:
    case SM_NOTE_NPCALIVE:
        return Owned((zNPCCommon*)data);
    case SM_NOTE_DUPPAUSE:
    case SM_NOTE_DUPRESUME:
    case SM_NOTE_DUPSETDELAY:
    case SM_NOTE_DUPDEAD:
        return 1;
    default:
        return 0;
    }
}

SMSPStatus* zNPCSpawner::SelectSP(const SMNPCStatus* npcstat)
{
    SMSPStatus* sp_stat;

    if (npcstat->sp_prefer != NULL)
    {
        sp_stat = StatForSP(npcstat->sp_prefer, 1);
        if (!sp_stat->sp->IsOn())
        {
            return NULL;
        }

        if (!IsSPLZClear(sp_stat->sp))
        {
            return NULL;
        }

        return sp_stat;
    }
    else
    {
        S32 rc = 0;
        S32 cnt = 0;

        SMSPStatus* splist[16] = {};

        for (S32 i = 0; i < 16; i++)
        {
            SMSPStatus* tmp_stat = &sppool[i];
            if (tmp_stat->sp != NULL && tmp_stat->sp->on && splist[i] == NULL &&
                IsSPLZClear(sppool[i].sp))
            {
                splist[i] = tmp_stat;
                cnt += 1;
            }

            rc++;
        }

        if (!cnt)
        {
            sp_stat = NULL;
        }
        else
        {
            sp_stat = xUtil_select<SMSPStatus>(splist, rc, NULL);
        }
    }

    return sp_stat;
}

SMNPCStatus* zNPCSpawner::NextPendingNPC(S32 arg0)
{
    S32 temp_r4;
    const F32* temp_ptr = NULL;

    temp_r4 = this->pendlist.cnt;
    if (temp_r4 < 1)
    {
        return NULL;
    }
    return xUtil_select<SMNPCStatus>((SMNPCStatus**)this->pendlist.list, temp_r4, temp_ptr);
}

void zNPCSpawner::ClearActive()
{
    for (S32 i = 0; i < actvlist.cnt; i++)
    {
        if (pendlist.list[i] != NULL)
        {
            ((st_XORDEREDARRAY*)pendlist.list[i])->cnt = 1;
        }
    }

    XOrdReset(&actvlist);
}

void zNPCSpawner::ClearPending()
{
    for (S32 i = 0; i < pendlist.cnt; i++)
    {
        ((st_XORDEREDARRAY*)pendlist.list[i])->cnt = 1;
    }

    XOrdReset(&pendlist);
}

st_XORDEREDARRAY* zNPCSpawner::FillPending()
{
    ClearPending();
    ReFillPending();
    return (st_XORDEREDARRAY*)this->pendlist.cnt;
}

st_XORDEREDARRAY* zNPCSpawner::ReFillPending()
{
    s32 var_r28;
    zNPCCommon* temp_r29;
    zNPCSpawner* var_r30;

    var_r28 = 0;
    var_r30 = this;
    do
    {
        temp_r29 = var_r30->npc_owner;
        if (((zNPCCommon*)var_r30->npc_owner != NULL) && ((s32)temp_r29->flg_vuln == 1))
        {
            XOrdAppend(&this->pendlist, (void*)temp_r29);
            temp_r29->flg_vuln = 2;
        }
        var_r28 += 1;
        var_r30 += 0xC;
    } while (var_r28 < 0x10);
    return &this->actvlist;
}

S32 zNPCSpawner::IsSPLZClear(zMovePoint* sp)
{
    xVec3 pos_sp;
    S32 rc;
    xBound bnd;
    xVec3 delt;

    memset(&bnd, FALSE, sizeof(xBound));

    bnd.type = 0;
    xVec3Copy(&pos_sp, zMovePointGetPos(sp));

    bnd.type = 1;
    bnd.sph.r = 3.5f;
    xVec3Copy(&bnd.box.center, &pos_sp);

    xQuickCullForBound(&bnd.qcd, &bnd);

    if (g_drawSpawnBounds)
    {
        xDrawSetColor(g_CYAN);
        xBoundDraw(&bnd);
    }

    if (NPCC_chk_hitPlyr(&bnd, NULL))
    {
        return 0;
    }

    xVec3Sub(&delt, xEntGetPos(&globals.player.ent), &pos_sp);

    if (SQ(delt.x) + SQ(delt.z) < SQ(3.5f))
    {
        return 0;
    }

    return IsNearbyMover(&bnd, TRUE, NULL);
}

S32 zNPCSpawner::IsNearbyMover(xBound* bnd, S32 usecyl, xCollis* caller_colrec)
{
    S32 hitthing = 0;
    zNPCCommon* npc;
    S32 i;
    xCollis local_colrec;
    xCollis* colrec = caller_colrec;
    xVec3 delt = { 0.0f, 0.0f, 0.0f };

    for (i = 10; i > 0; i--)
    {
        // ???
    }

    if (caller_colrec == NULL)
    {
        colrec = &local_colrec;
    }

    for (i = 0; i < globals.sceneCur->num_npcs; i++)
    {
        npc = (zNPCCommon*)globals.sceneCur->npcs[i];
        if (npc->chkby & 0x8 && npc->SelfType() != 'NTD0' && (npc->SelfType() & ~0xFF) != 'NTT\0')
        {
            xBoundHitsBound(bnd, &npc->bound, colrec);

            if (!(colrec->flags & 0x1) && !usecyl)
            {
                NPCC_pos_ofBase(npc, &delt);

                xVec3SubFrom(&delt, &bnd->sph.center);

                if (SQ(delt.x) + SQ(delt.z) < SQ(bnd->cyl.r))
                {
                    hitthing++;
                }
            }

            if (hitthing)
            {
                break;
            }
        }
    }

    return hitthing;
}

void zNPCSpawner::SetNPCStatus(zNPCCommon* npc, en_SM_NPC_STATUS status)
{
    SMNPCStatus* stat = this->StatForNPC(npc);
    if (stat != NULL)
    {
        stat->status = status;
    }
}

SMSPStatus* zNPCSpawner::StatForSP(zMovePoint* sp, S32 arg1)
{
    SMSPStatus* spstat = NULL;

    S32 i;
    for (i = 0; i < 16; i++)
    {
        if (sppool[i].sp != NULL && sppool[i].sp == sp)
        {
            spstat = &sppool[i];
        }
    }

    return spstat;
}

/* zNPCSpawner::StatForNPC (zNPCCommon *) */
SMNPCStatus* zNPCSpawner::StatForNPC(zNPCCommon* npc)
{
    s32 var_ctr;
    SMNPCStatus* var_r6;
    zNPCCommon* temp_r0;

    var_r6 = NULL;
    var_ctr = 2;

    for (var_ctr = 0; var_ctr < 16; var_ctr++)
    {
        temp_r0 = this->npcpool[var_ctr].npc;
        if ((temp_r0 != NULL) && (temp_r0 == npc))
        {
            var_r6 = &this->npcpool[var_ctr];
        }
    }

    return var_r6;
}

S32 zNPCSpawner::SpawnBeastie(SMNPCStatus* npcstat, SMSPStatus* spstat)
{
    zNPCCommon* npc;
    zMovePoint* sp;
    xVec3 pos_sp = { 0, 0, 0 };
    zMovePoint* nav_dest = NULL;

    npc = npcstat->npc;
    sp = spstat->sp;
    zMovePointGetNext(sp, sp, &nav_dest, NULL);

    if (nav_dest == NULL)
    {
        nav_dest = sp;
    }

    xVec3Copy(&pos_sp, sp->PosGet());

    npcstat->status = SM_NPC_SPAWNED;
    XOrdRemove(&pendlist, npcstat, -1);
    XOrdAppend(&actvlist, npcstat);

    npc->Respawn(&pos_sp, nav_dest, sp);

    cnt_spawn++;

    zEntEvent(npc_owner, eEventDuploNPCBorn);

    return 1;
}

SMNPCStatus* zNPCSpawner::ToastedBeastie(zNPCCommon* npc)
{
    SMNPCStatus* ret = this->StatForNPC(npc);
    XOrdRemove(&this->actvlist, ret, -1);
    zEntEvent((xBase*)this->npc_owner, eEventDuploNPCKilled);
    return ret;
}

void zNPCSpawner::ChildHeartbeat(F32 dt)
{
}

void zNPCSpawner::ChildCleanup(F32 dt)
{
    S32 i;
    SMNPCStatus* npc_stat;
    S32 cnt_know;
    S32 cnt_dead;

    if (wavestat == SM_STAT_DONE || wavestat == SM_STAT_ABORT)
    {
        for (i = actvlist.cnt - 1; i >= 0; i--)
        {
            zNPCCommon* npc = *(zNPCCommon**)actvlist.list[i];
            npc->Damage(DMGTYP_INSTAKILL, NULL, NULL);
        }

        if (actvlist.cnt == 0 && pendlist.cnt == 0)
        {
            cnt_know = 0;
            cnt_dead = 0;
            for (i = 0; i < 16; i++)
            {
                npc_stat = &npcpool[i];
                if (npc_stat->npc != NULL)
                {
                    cnt_know = 1;
                    if (npc_stat->status == SM_NPC_READY)
                    {
                        cnt_dead = 1;
                    }
                    break;
                }
            }

            if (cnt_dead == cnt_know)
            {
                flg_spawner &= ~0x10;
            }
        }

        cnt_cleanup++;
    }
}

S32 zMovePoint::IsOn()
{
    // Cast is required by calling functions to occur in here
    // even though a single byte is moved into the return register
    return (S32)this->on;
}

template <typename T> T* xUtil_select(T** data, S32 size, const F32* arg2)
{
    T* selected = NULL;
    S32 selectIdx = 0;

    F32 randOffset;

    if (data == NULL)
    {
        return NULL;
    }
    else if (size < 1)
    {
        return NULL;
    }

    randOffset = xurand();
    if (arg2 == NULL)
    {
        selectIdx = (S32)(randOffset * (F32)size);
    }
    else
    {
        F32* roundingData = (F32*)arg2;
        F32 threshold = 0.0f;
        S32 counter = 0;

        // TODO: Fix float arithmetic and symbols
        for (S32 i = size; i > 0; i--)
        {
            F32 tempValue = threshold;
            threshold += *roundingData;

            if (randOffset >= threshold)
            {
                if (randOffset <= tempValue)
                {
                    selectIdx = counter;
                    break;
                }
            }
            roundingData++;
            counter++;
        }
    }

    if (selectIdx >= size)
    {
        selectIdx = size - 1;
    }

    if (selectIdx < 0)
    {
        selectIdx = 0;
    }

    return data[selectIdx];
}
