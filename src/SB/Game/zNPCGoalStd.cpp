#include "xMath.h"
#include "zNPCGoalStd.h"
#include "zNPCGoals.h"

#include <types.h>

// Nonmatching: not finished
#if 0
xFactoryInst* GOALCreate_Standard(S32 who, RyzMemGrow* grow, void*)
{
    xFactoryInst* std = NULL;

    switch (who)
    {
    case NPC_GOAL_IDLE:
        std = new (who, grow) zNPCGoalIdle(who);
        break;
    case NPC_GOAL_WAITING:
        std = new (who, grow) zNPCGoalWaiting(who);
        break;
    case NPC_GOAL_WANDER:
        std = new (who, grow) zNPCGoalWander(who);
        break;
    case NPC_GOAL_PATROL:
        std = new (who, grow) zNPCGoalPatrol(who);
        break;
    }

    return std;
}
#endif

void GOALDestroy_Goal(xFactoryInst* inst)
{
    delete inst;
}

S32 zNPCGoalPushAnim::Enter(F32 dt, void* updCtxt)
{
    flg_pushanim &= (1 << 16) | (1 << 2) | (1 << 1);
    lastAnimTime = -1.0f;

    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalPushAnim::Exit(F32 dt, void* updCtxt)
{
    flg_pushanim = 0;

    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalPushAnim::Resume(F32 dt, void* updCtxt)
{
    flg_pushanim |= (1 << 0);

    return zNPCGoalCommon::Resume(dt, updCtxt);
}

S32 zNPCGoalLoopAnim::Exit(F32 dt, void* updCtxt)
{
    UnmolestAnim();
    return xGoal::Exit(dt, updCtxt);
}

void zNPCGoalLoopAnim::MolestLoopAnim()
{
    zNPCCommon* npc = (zNPCCommon*)psyche->clt_owner;
    xAnimState* state = npc->AnimFindState(anid_stage[1]);
    origAnimFlags = state->Flags;
    animWeMolested = state->ID;
    state->Flags &= ~(1 << 5);
    state->Flags |= (1 << 4);
}

void zNPCGoalLoopAnim::UnmolestAnim()
{
    zNPCCommon* npc = (zNPCCommon*)psyche->clt_owner;

    if (animWeMolested == 0)
    {
        return;
    }

    xAnimState* state = npc->AnimFindState(animWeMolested);
    state->Flags = origAnimFlags;

    animWeMolested = 0;
    origAnimFlags = 0;
}

void zNPCGoalLoopAnim::LoopCountSet(S32 num)
{
    cnt_loop = (num >= 1) ? num : 1;
    flg_info |= (1 << 4);
}

void zNPCGoalLoopAnim::UseDefaultAnims()
{
    zNPCCommon* npc = (zNPCCommon*)psyche->clt_owner;

    anid_stage[1] = npc->AnimPick(GetID(), NPC_GSPOT_RESUME, this);

    U32 id = npc->AnimPick(GetID(), NPC_GSPOT_START, this);
    if (id == anid_stage[1])
    {
        id = 0;
    }
    anid_stage[0] = id;
    if (id != 0)
    {
        flg_loopanim |= (1 << 2);
    }

    id = npc->AnimPick(GetID(), NPC_GSPOT_FINISH, this);
    if (id == anid_stage[1])
    {
        id = 0;
    }
    anid_stage[2] = id;
    if (id != 0)
    {
        flg_loopanim |= (1 << 3);
    }
}

void zNPCGoalLoopAnim::ValidateStages()
{
    if (anid_stage[0] == anid_stage[1])
    {
        anid_stage[0] = 0;
        flg_loopanim &= ~(1 << 2);
    }
    if (anid_stage[2] == anid_stage[1])
    {
        anid_stage[2] = 0;
        flg_loopanim &= ~(1 << 3);
    }

    if (flg_loopanim & (1 << 2) && anid_stage[0] == 0)
    {
        flg_loopanim &= ~(1 << 2);
    }
    if (flg_loopanim & (1 << 3) && anid_stage[2] == 0)
    {
        flg_loopanim &= ~(1 << 3);
    }
}

S32 zNPCGoalIdle::Enter(F32 dt, void* updCtxt)
{
    zNPCCommon* npc = (zNPCCommon*)psyche->clt_owner;

    npc->tmr_fidget =
        npc->cfg_npc->tym_fidget * (0.25f * (xurand() - 0.5f)) + npc->cfg_npc->tym_fidget;
    npc->VelStop();

    flg_user = (1 << 0);

    xEntDrive* drive = npc->drv_data;
    if (drive == NULL || (drive->driver == NULL && drive->odriver == NULL))
    {
        npc->flags2.flg_colCheck = 0;
        npc->flags2.flg_penCheck = 0;
        npc->pflags &= (U8) ~((1 << 3) | (1 << 2) | (1 << 1) | (1 << 0));
    }

    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalIdle::Exit(F32 dt, void* updCtxt)
{
    zNPCCommon* npc = (zNPCCommon*)psyche->clt_owner;
    npc->RestoreColFlags();

    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalIdle::Suspend(F32 dt, void* updCtxt)
{
    zNPCCommon* npc = (zNPCCommon*)psyche->clt_owner;
    npc->RestoreColFlags();

    return xGoal::Suspend(dt, updCtxt);
}

S32 zNPCGoalIdle::Resume(F32 dt, void* updCtxt)
{
    zNPCCommon* npc = (zNPCCommon*)psyche->clt_owner;

    npc->tmr_fidget =
        npc->cfg_npc->tym_fidget * (0.25f * (xurand() - 0.5f)) + npc->cfg_npc->tym_fidget;

    if (npc->nav_dest == NULL)
    {
        npc->MvptCycle();
    }

    flg_user = (1 << 0);

    xEntDrive* drive = npc->drv_data;
    if (drive == NULL || (drive->driver == NULL && drive->odriver == NULL))
    {
        npc->flags2.flg_colCheck = 0;
        npc->flags2.flg_penCheck = 0;
        npc->pflags &= (U8) ~((1 << 3) | (1 << 2) | (1 << 1) | (1 << 0));
    }

    return xGoal::Resume(dt, updCtxt);
}

S32 zNPCGoalIdle::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* scene)
{
    zNPCCommon* npc = (zNPCCommon*)psyche->clt_owner;
    S32 nextgoal = 0;

    if (npc->nav_dest != NULL && npc->npcset.allowPatrol)
    {
        *trantype = GOAL_TRAN_PUSH;
        nextgoal = NPC_GOAL_PATROL;
    }
    else if (!(flg_idle & (1 << 0)) && npc->tmr_fidget < 0.0f)
    {
        *trantype = GOAL_TRAN_PUSH;
        nextgoal = NPC_GOAL_FIDGET;
    }
    else
    {
        zMovePoint* nav_curr = npc->nav_curr;
        if (npc->npcset.allowWander && nav_curr != NULL && nav_curr->Delay() > 0.0f &&
            nav_curr->RadiusZone() > 0.0f)
        {
            *trantype = GOAL_TRAN_PUSH;
            nextgoal = NPC_GOAL_WANDER;
        }
    }

    if (*trantype != GOAL_TRAN_NONE)
    {
        return nextgoal;
    }

    if (flg_user != 0)
    {
        DoAutoAnim(NPC_GSPOT_START, 0);
        flg_user = 0;
    }

    npc->tmr_fidget = (-1.0f > (npc->tmr_fidget - dt)) ? -1.0f : (npc->tmr_fidget - dt);

    return xGoal::Process(trantype, dt, updCtxt, scene);
}

S32 zNPCGoalIdle::NPCMessage(NPCMsg* mail)
{
    S32 handled = 0;

    switch (mail->msgid)
    {
    case NPC_MID_BECOMESCARED:
    case NPC_MID_NOLONGERSCARED:
    {
        zNPCGoalCommon* goal = (zNPCGoalCommon*)psyche->GetCurGoal();
        if (goal != NULL)
        {
            goal->DoAutoAnim(NPC_GSPOT_RESUME, 0);
        }
        handled = 0;
        break;
    }
    }

    return handled;
}

S32 zNPCGoalPatrol::Enter(F32 dt, void* updCtxt)
{
    zNPCCommon* npc = (zNPCCommon*)psyche->clt_owner;

    flg_patrol = 0;

    if (npc->nav_dest == NULL)
    {
        DoOnArriveStuff();
    }
    else
    {
        Chk_AutoSmooth();
    }

    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalPatrol::Exit(F32 dt, void* updCtxt)
{
    zNPCCommon* npc = (zNPCCommon*)psyche->clt_owner;

    if (npc->spl_mvptspline != NULL)
    {
        npc->nav_dest = npc->nav_curr;
        npc->nav_lead = npc->nav_curr;
        npc->spl_mvptspline = NULL;
        npc->len_mvptspline = 0.0f;
        npc->dst_curspline = 0.0f;
    }

    if (flg_patrol & (1 << 2))
    {
        if (npc->nav_dest != NULL)
        {
            Chk_AutoSmooth();
        }
        flg_patrol &= ~(1 << 2);
    }

    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalPatrol::Resume(F32 dt, void* updCtxt)
{
    zNPCCommon* npc = (zNPCCommon*)psyche->clt_owner;

    if (flg_patrol & (1 << 2))
    {
        if (npc->nav_dest != NULL)
        {
            Chk_AutoSmooth();
        }
        flg_patrol &= ~(1 << 2);
    }

    return xGoal::Resume(dt, updCtxt);
}

S32 zNPCGoalPatrol::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* scene)
{
    zNPCCommon* npc = (zNPCCommon*)psyche->clt_owner;
    S32 nextgoal = 0;

    if (flg_patrol & (1 << 0))
    {
        if (flg_patrol & (1 << 1))
        {
            npc->VelStop();
            tmr_wait = (-1.0f > (tmr_wait - dt)) ? -1.0f : (tmr_wait - dt);
            if (tmr_wait < 0.0f)
            {
                if (npc->nav_dest == NULL && npc->MvptCycle() == 0)
                {
                    if (npc->nav_curr == NULL)
                    {
                        tmr_wait = 300.0f;
                    }
                    else
                    {
                        tmr_wait = npc->nav_curr->Delay();
                    }

                    tmr_wait = (2.0f > tmr_wait) ? 2.0f : tmr_wait;
                }
                else
                {
                    flg_patrol &= ~(1 << 1);
                    DoAutoAnim(NPC_GSPOT_RESUME, 0);
                }
            }
        }

        if (!(flg_patrol & (1 << 1)))
        {
            PickTransition(&nextgoal, trantype);
            if (*trantype != GOAL_TRAN_NONE)
            {
                return nextgoal;
            }
            flg_patrol &= ~(1 << 0);
        }
    }

    if (!(flg_patrol & (1 << 1)))
    {
        if (npc->spl_mvptspline != NULL)
        {
            MoveSpline(dt);
        }
        else if (flg_patrol & (1 << 3))
        {
            MoveAutoSmooth(dt);
        }
        else if (npc->nav_dest != NULL)
        {
            MoveNormal(dt);
        }
    }

    return xGoal::Process(trantype, dt, updCtxt, NULL);
}

void zNPCGoalPatrol::DoOnArriveStuff()
{
    zNPCCommon* npc = (zNPCCommon*)psyche->clt_owner;

    if (npc->nav_dest != NULL)
    {
        zEntEvent(npc, npc->nav_dest, eEventArrive);
    }

    flg_patrol |= (1 << 0);
    flg_patrol &= ~(1 << 3);

    npc->MvptCycle();
    if (npc->nav_curr != NULL && npc->nav_curr->Delay() > 0.0f &&
        npc->nav_curr->RadiusZone() < 0.25f)
    {
        tmr_wait = npc->nav_curr->Delay();
        flg_patrol |= (1 << 1);
        DoAutoAnim(NPC_GSPOT_PATROLPAUSE, 0);
    }
    else
    {
        Chk_AutoSmooth();
    }
}

void zNPCGoalPatrol::PickTransition(S32* goal, en_trantype* trantype)
{
    zNPCCommon* npc = (zNPCCommon*)psyche->clt_owner;

    if (npc->npcset.allowWander && npc->nav_curr != NULL && npc->nav_curr->Delay() > 0.0f &&
        npc->nav_curr->RadiusZone() > 0.0f)
    {
        *goal = NPC_GOAL_WANDER;
        *trantype = GOAL_TRAN_PUSH;
        flg_patrol |= (1 << 2);
        flg_patrol &= ~(1 << 0);
    }
    else if (npc->nav_dest == NULL)
    {
        *goal = NPC_GOAL_IDLE;
        *trantype = GOAL_TRAN_SET;
    }
}

// Nonmatching: nowhere near finished
#if 0
void zNPCGoalPatrol::MoveNormal(F32 dt)
{
    zNPCCommon* npc = (zNPCCommon*)psyche->clt_owner;

    if (npc->DBG_IsNormLog(eNPCDCAT_Eleven, -1))
    {
    }
}
#endif

S32 zNPCGoalFidget::Enter(F32 dt, void* updCtxt)
{
    zNPCCommon* npc = (zNPCCommon*)psyche->clt_owner;

    npc->VelStop();
    if (npc->drv_data == NULL || (npc->drv_data->driver == NULL && npc->drv_data->odriver == NULL))
    {
        npc->flags2.flg_colCheck = 0;
        npc->flags2.flg_penCheck = 0;
        npc->pflags &= ~((1 << 3) | (1 << 2) | (1 << 1) | (1 << 0));
    }

    return zNPCGoalPushAnim::Enter(dt, updCtxt);
}

S32 zNPCGoalFidget::Exit(F32 dt, void* updCtxt)
{
    zNPCCommon* npc = (zNPCCommon*)psyche->clt_owner;
    npc->RestoreColFlags();

    return zNPCGoalPushAnim::Enter(dt, updCtxt);
}
