#include "xMath.h"
#include "xMathInlines.h"
#include "zGlobals.h"
#include "zNPCGoalStd.h"
#include "zNPCGoals.h"
#include "zNPCSupport.h"

#include <types.h>

xFactoryInst* GOALCreate_Standard(S32 who, RyzMemGrow* grow, void*)
{
    xGoal* std = NULL;

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
    case NPC_GOAL_FIDGET:
        std = new (who, grow) zNPCGoalFidget(who);
        break;
    case NPC_GOAL_DEAD:
        std = new (who, grow) zNPCGoalDead(who);
        break;
    case NPC_GOAL_NOMANLAND:
        std = new (who, grow) zNPCGoalNoManLand(who);
        break;
    case NPC_GOAL_LIMBO:
        std = new (who, grow) zNPCGoalLimbo(who);
        break;
    case NPC_GOAL_DEVANIMCYCLE:
        std = new (who, grow) zNPCGoalDEVAnimCycle(who);
        break;
    case NPC_GOAL_DEVANIMSPIN:
        std = new (who, grow) zNPCGoalDEVAnimSpin(who);
        break;
    case NPC_GOAL_DEVANIMHERO:
        std = new (who, grow) zNPCGoalDEVHero(who);
        break;
    }

    return std;
}

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

S32 zNPCGoalPushAnim::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* scene)
{
    S32 nextgoal = 0;
    zNPCCommon* npc = (zNPCCommon*)psyche->clt_owner;

    F32 anim_time = npc->AnimTimeCurrent();

    if (flg_pushanim & (1 << 0))
    {
        nextgoal = 1;
        *trantype = GOAL_TRAN_POP;
    }
    else if (anid_played != npc->AnimCurStateID())
    {
        if (flg_pushanim & (1 << 1))
        {
            flg_pushanim &= ~(1 << 1);
            anid_played = npc->AnimCurStateID();
        }
        else if (flg_pushanim & (1 << 2))
        {
            flg_pushanim &= ~(1 << 2);
            anid_played = npc->AnimCurStateID();
        }
        else
        {
            nextgoal = 1;
            *trantype = GOAL_TRAN_POP;
        }
    }
    else if ((anim_time < lastAnimTime || npc->AnimTimeRemain(NULL) <= 2.1f * dt) &&
             !(flg_pushanim & ((1 << 2) | (1 << 1))))
    {
        nextgoal = 1;
        *trantype = GOAL_TRAN_POP;
    }

    lastAnimTime = anim_time;

    if (*trantype != GOAL_TRAN_NONE)
    {
        return nextgoal;
    }

    return xGoal::Process(trantype, dt, updCtxt, scene);
}

S32 zNPCGoalPushAnim::Resume(F32 dt, void* updCtxt)
{
    flg_pushanim |= (1 << 0);

    return zNPCGoalCommon::Resume(dt, updCtxt);
}

S32 zNPCGoalLoopAnim::Enter(F32 dt, void* updCtxt)
{
    if (!(flg_info & (1 << 4)))
    {
        cnt_loop = 1;
    }

    cnt_loop = CLAMP(cnt_loop, 1, 10000);

    origAnimFlags = 0;
    animWeMolested = 0;

    if (!(flg_info & (1 << 5)))
    {
        UseDefaultAnims();
    }

    ValidateStages();
    MolestLoopAnim();

    flg_npcgauto &= ~((1 << 2) | (1 << 1));

    if (anid_stage[0] != 0)
    {
        DoExplicitAnim(anid_stage[0], 1);
    }
    else
    {
        DoExplicitAnim(anid_stage[1], 1);
    }

    flg_info = 0;
    lastAnimTime = -1.0f;

    return zNPCGoalLoopAnim::Enter(dt, updCtxt);
}

S32 zNPCGoalLoopAnim::Exit(F32 dt, void* updCtxt)
{
    UnmolestAnim();
    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalLoopAnim::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* scene)
{
    S32 nextgoal = 0;
    zNPCCommon* npc = (zNPCCommon*)psyche->clt_owner;

    U32 anim_state = npc->AnimCurStateID();
    F32 anim_time = npc->AnimTimeCurrent();
    if (flg_loopanim & (1 << 2))
    {
        if (anim_state != anid_played)
        {
            flg_loopanim &= ~(1 << 2);
            anid_played = anim_state;
        }
    }
    else if (anim_state == anid_stage[1])
    {
        if (cnt_loop > 1)
        {
            if (anim_time < lastAnimTime)
            {
                cnt_loop--;
            }
        }
        else if (anim_time < lastAnimTime)
        {
            if (flg_loopanim & (1 << 3))
            {
                DoExplicitAnim(anid_stage[2], 0);
            }
            else
            {
                nextgoal = 1;
                *trantype = GOAL_TRAN_POP;
            }
        }
    }
    else if (flg_loopanim & (1 << 3))
    {
        if (anim_state != anid_stage[2])
        {
            nextgoal = 1;
            *trantype = GOAL_TRAN_POP;
        }
        else if (anim_time < lastAnimTime)
        {
            nextgoal = 1;
            *trantype = GOAL_TRAN_POP;
        }
    }
    else
    {
        nextgoal = 1;
        *trantype = GOAL_TRAN_POP;
    }

    lastAnimTime = anim_time;

    if (*trantype != GOAL_TRAN_NONE)
    {
        return nextgoal;
    }

    return xGoal::Process(trantype, dt, updCtxt, scene);
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

    npc->tmr_fidget = MAX(-1.0f, npc->tmr_fidget - dt);

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
            tmr_wait = MAX(-1.0f, tmr_wait - dt);
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

                    tmr_wait = MAX(2.0f, tmr_wait);
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

// Equivalent: scheduling
void zNPCGoalPatrol::Chk_AutoSmooth()
{
    zNPCCommon* npc = (zNPCCommon*)psyche->clt_owner;

    if (npc->spl_mvptspline != NULL)
    {
        return;
    }

    if (npc->nav_curr == NULL)
    {
        return;
    }

    if (npc->nav_dest == NULL)
    {
        return;
    }

    if (npc->nav_curr == NULL)
    {
        return;
    }

    if (npc->nav_dest == NULL)
    {
        return;
    }

    if (npc->nav_lead == NULL)
    {
        return;
    }

    if (npc->nav_curr == npc->nav_dest)
    {
        return;
    }

    if (npc->nav_curr == npc->nav_lead)
    {
        return;
    }

    static F32 ds2_min = SQ(1.5f);

    if (npc->XZDstSqToPos(npc->nav_dest->PosGet(), NULL, NULL) > ds2_min)
    {
        flg_patrol |= (1 << 4) | (1 << 3);
    }
}

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

S32 zNPCGoalWander::Enter(F32 dt, void* updCtxt)
{
    zNPCCommon* npc = (zNPCCommon*)psyche->clt_owner;

    npc->tmr_fidget =
        npc->cfg_npc->tym_fidget * (0.25f * (xurand() - 0.5f)) + npc->cfg_npc->tym_fidget;

    zMovePoint* nav = npc->nav_curr;
    tmr_remain = 0.0f;
    rad_wand = 0.0f;
    if (nav != NULL)
    {
        xVec3Copy(&pos_home, nav->PosGet());
        tmr_remain = nav->Delay();
        rad_wand = nav->RadiusZone();
        if (!(tmr_remain > 0.25f) || !(rad_wand > 0.0f))
        {
            xSceneID2Name(globals.sceneCur, npc->id);
            xSceneID2Name(globals.sceneCur, nav->id);
        }
    }
    else
    {
        xVec3Copy(&pos_home, xEntGetPos(npc));
    }

    tmr_remain = MAX(1.0f, tmr_remain);
    rad_wand = MAX(1.0f, rad_wand);

    xSceneID2Name(globals.sceneCur, npc->id);

    F32 dst = 0.75f * rad_wand;
    xVec3Copy(&dir_cur, &pos_home);

    xVec3AddScaled(&dir_cur, NPCC_rightDir(npc), dst * xurand());
    dst *= 0.25f;
    xVec3AddScaled(&dir_cur, NPCC_rightDir(npc), dst * (2.0f * (xurand() - 0.5f)));

    if (npc->flg_move & (1 << 1))
    {
        dir_cur.y = 0.0f;
        xVec3Normalize(&dir_cur, &dir_cur);
    }

    tmr_newdir = 0.25f * rad_wand;
    tmr_newdir = MIN(tmr_newdir, 3.0f);
    tmr_minwalk = 0.25f * tmr_newdir;
    tmr_minwalk = MIN(tmr_minwalk, 3.0f);

    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalWander::Resume(F32 dt, void* updCtxt)
{
    zNPCCommon* npc = (zNPCCommon*)psyche->clt_owner;

    npc->tmr_fidget =
        npc->cfg_npc->tym_fidget * (0.25f * (xurand() - 0.5f)) + npc->cfg_npc->tym_fidget;

    return zNPCGoalCommon::Resume(dt, updCtxt);
}

// Equivalent: stack offsets, fmuls register order
S32 zNPCGoalWander::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* scene)
{
    S32 nextgoal = 0;
    zNPCCommon* npc = (zNPCCommon*)psyche->clt_owner;

    tmr_remain = MAX(-1.0f, tmr_remain - dt);
    tmr_newdir = MAX(-1.0f, tmr_newdir - dt);
    tmr_minwalk = MAX(-1.0f, tmr_minwalk - dt);

    xVec3 delta;
    xVec3 vec_dest;

    if (tmr_minwalk < 0.0f)
    {
        xVec3Sub(&delta, &pos_home, xEntGetPos(npc));

        F32 length2 = xVec3Length2(&delta);
        S32 calc = 0;
        if (length2 > 0.95f * SQ(rad_wand))
        {
            calc = 1;
        }
        else if (tmr_newdir < 0.0f)
        {
            calc = 1;
        }

        if (calc)
        {
            CalcNewDir();
        }
    }

    if (tmr_remain < 0.0f)
    {
        zMovePoint* nav_curr = npc->nav_curr;
        if (nav_curr == NULL)
        {
            tmr_remain = 3.0f;
        }
        else if (npc->nav_dest == NULL)
        {
            zMovePoint* next;
            zMovePointGetNext(nav_curr, NULL, &next, NULL);
            if (next == NULL)
            {
                tmr_remain = nav_curr->Delay();
            }
        }
    }

    if (tmr_remain < 0.0f)
    {
        nextgoal = 1;
        *trantype = GOAL_TRAN_POP;
    }
    else if (!(flg_wand & (1 << 0)) && npc->tmr_fidget < 0.0f)
    {
        *trantype = GOAL_TRAN_PUSH;
        nextgoal = NPC_GOAL_FIDGET;
    }

    if (*trantype != GOAL_TRAN_NONE)
    {
        return nextgoal;
    }

    npc->ThrottleAccel(dt, 1, 0.75f);
    NPCC_ang_toXZDir(npc->frame->rot.angle + npc->TurnToFace(dt, &dir_cur, -1.0f), &vec_dest);
    npc->ThrottleApply(dt, &vec_dest, 0);
    flg_wand &= ~(1 << 1);

    if (npc->flg_move & (1 << 2))
    {
        F32 dVar7 = npc->XYZDstSqToPos(&pos_home, &vec_dest);
        F32 spd_dt = npc->spd_throttle * dt;
        if (flg_wand & (1 << 1))
        {
            VerticalWander(spd_dt, &vec_dest);
        }
        else if (iabs(vec_dest.y) > 0.1f)
        {
            npc->frame->dpos.y = vec_dest.y * (spd_dt / dVar7);
            npc->frame->mode |= 2;
        }
    }

    npc->tmr_fidget = MAX(-1.0f, npc->tmr_fidget - dt);

    return xGoal::Process(trantype, dt, updCtxt, NULL);
}

// Equivalent: regalloc
void zNPCGoalWander::CalcNewDir()
{
    zNPCCommon* npc = (zNPCCommon*)psyche->clt_owner;
    xVec3 direction;
    xVec3* player_pos;
    xVec3* npc_pos;

    F32 dVar4 = NPCC_aimVary(&dir_cur, xEntGetPos(npc), &pos_home, rad_wand, 0, NULL);
    if (npc->flg_move & (1 << 1))
    {
        dir_cur.y = 0.0f;
    }
    if (dVar4 < rad_wand)
    {
        npc_pos = xEntGetPos(npc);
        player_pos = xEntGetPos(&globals.player.ent);
        xVec3Sub(&direction, player_pos, npc_pos);

        F32 length = xVec3Length(&direction);
        if (length < 1.0f)
        {
            xVec3Copy(&direction, NPCC_rightDir(&globals.player.ent));
            if ((xrand() & 0x800000) != 0)
            {
                xVec3SMulBy(&direction, -1.0f);
            }
        }
        else if (length < 10.0f)
        {
            xVec3SMulBy(&direction, -1.0f / length);
        }
        else
        {
            xVec3Copy(&direction, &g_O3);
        }
    }
    else
    {
        xVec3Copy(&direction, &g_O3);
    }

    xVec3AddTo(&dir_cur, &direction);
    xVec3Normalize(&dir_cur, &dir_cur);
    dVar4 = MAX(0.5f, dVar4);
    F32 dVar6 = npc->cfg_npc->spd_moveMax;
    F32 dVar5 = rad_wand * xurand() + dVar4;
    if (dVar6 < 0.5f)
    {
        tmr_minwalk = 0.25f * dVar4;
        tmr_newdir = 0.25f * dVar5;
    }
    else
    {
        tmr_minwalk = dVar4 / dVar6;
        tmr_newdir = dVar5 / dVar6;
    }
}

S32 zNPCGoalWaiting::Enter(F32 dt, void* updCtxt)
{
    zNPCCommon* npc = (zNPCCommon*)psyche->clt_owner;

    if (!(flg_info & (1 << 4)))
    {
        zMovePoint* current = npc->nav_curr;
        if (current != NULL && current->Delay() > 0.75f)
        {
            tmr_waiting = current->Delay() + (0.25f * (xurand() - 0.5f)) * current->Delay();
        }
        else
        {
            tmr_waiting = 10.0f + (0.25f * (xurand() - 0.5f)) * 10.0f;
        }
    }

    flg_info = 0;

    tmr_waiting = MAX(0.75f, tmr_waiting);

    npc->flags2.flg_colCheck = 0;
    npc->flags2.flg_penCheck = 0;
    npc->pflags &= ~((1 << 3) | (1 << 2) | (1 << 1) | (1 << 0));
    npc->tmr_fidget =
        npc->cfg_npc->tym_fidget * (0.25f * (xurand() - 0.5f)) + npc->cfg_npc->tym_fidget;

    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalWaiting::Exit(F32 dt, void* updCtxt)
{
    zNPCCommon* npc = (zNPCCommon*)psyche->clt_owner;
    npc->RestoreColFlags();

    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalWaiting::Resume(F32 dt, void* updCtxt)
{
    zNPCCommon* npc = (zNPCCommon*)psyche->clt_owner;

    if (tmr_waiting < 0.15f)
    {
        tmr_waiting = 0.5f;
    }

    npc->flags2.flg_colCheck = 0;
    npc->flags2.flg_penCheck = 0;
    npc->pflags &= ~((1 << 3) | (1 << 2) | (1 << 1) | (1 << 0));
    npc->tmr_fidget =
        npc->cfg_npc->tym_fidget * (0.25f * (xurand() - 0.5f)) + npc->cfg_npc->tym_fidget;

    return zNPCGoalCommon::Resume(dt, updCtxt);
}

S32 zNPCGoalWaiting::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* scene)
{
    S32 nextgoal = 0;
    zNPCCommon* npc = (zNPCCommon*)psyche->clt_owner;
    npc->VelStop();

    if (tmr_waiting < 0.0f)
    {
        TriggerExit();
    }
    else if (!(flg_waiting & (1 << 0)) && npc->tmr_fidget < 0.0f)
    {
        *trantype = GOAL_TRAN_PUSH;
        nextgoal = NPC_GOAL_FIDGET;
    }
    else
    {
        LoopCountSet(2);
    }

    if (*trantype != GOAL_TRAN_NONE)
    {
        return nextgoal;
    }

    tmr_waiting = MAX(-1.0f, tmr_waiting - dt);
    npc->tmr_fidget = MAX(-1.0f, npc->tmr_fidget - dt);

    return xGoal::Process(trantype, dt, updCtxt, NULL);
}

S32 zNPCGoalDead::Enter(F32 dt, void* updCtxt)
{
    zNPCCommon* npc = (zNPCCommon*)psyche->clt_owner;

    old_moreFlags = npc->moreFlags;

    xEntHide(npc);
    npc->moreFlags = 0;
    npc->pflags = 0;
    npc->flags2.flg_colCheck = 0;
    npc->flags2.flg_penCheck = 0;
    npc->chkby = 0;
    npc->penby = 0;
    npc->model->Flags &= (U16) ~(1 << 1);
    npc->flags1.flg_upward |= (1 << 0);

    if (!(flg_deadinfo & (1 << 0)))
    {
        zEntEvent(npc, npc, eEventDeath);
    }
    flg_deadinfo = 0;

    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalDead::Exit(F32 dt, void* updCtxt)
{
    zNPCCommon* npc = (zNPCCommon*)psyche->clt_owner;

    xEntShow(npc);
    npc->RestoreColFlags();
    npc->moreFlags = old_moreFlags;
    npc->model->Flags |= (1 << 1);
    npc->flags1.flg_upward &= ~(1 << 0);

    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalLimbo::Enter(F32 dt, void* updCtxt)
{
    DieQuietly();
    return zNPCGoalDead::Enter(dt, updCtxt);
}

S32 zNPCGoalLimbo::NPCMessage(NPCMsg* mail)
{
    S32 handled = 1;

    switch (mail->msgid)
    {
    case NPC_MID_SYSEVENT:
        xPsyche* psyche_ = psyche; // why?
        if (mail->sysevent.toEvent != eEventNPCSetActiveOff)
        {
            if (mail->sysevent.toEvent == eEventNPCSetActiveOn)
            {
                U32 gid = psyche->GIDOfSafety(); // why???
                psyche_->GoalSet(gid, 0);
            }
            else if (mail->sysevent.toEvent != eEventNPCRespawn)
            {
                handled = 0;
            }
        }
        break;
    case NPC_MID_RESPAWN:
    case NPC_MID_DAMAGE:
        break;
    default:
        handled = 0;
        break;
    }

    return handled;
}

S32 zNPCGoalDEVAnimCycle::Enter(F32 dt, void* updCtxt)
{
    xAnimState* next = ASTGetNext(NULL);
    DoExplicitAnim(next->ID, 0);
    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalDEVAnimCycle::Exit(F32 dt, void* updCtxt)
{
    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalDEVAnimCycle::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* scene)
{
    zNPCCommon* npc = (zNPCCommon*)psyche->clt_owner;
    npc->VelStop();
    npc->TurnToFace(dt, &g_Z3, -1.0f);

    if (npc->AnimTimeRemain(NULL) < dt + 0.001f)
    {
        xAnimState* next = ASTGetNext(npc->AnimCurState());
        DoExplicitAnim(next->ID, 0);
    }

    npc->AnimCurState();
    return xGoal::Process(trantype, dt, updCtxt, NULL);
}

S32 zNPCGoalDEVAnimCycle::NPCMessage(NPCMsg* mail)
{
    S32 handled = 1;

    switch (mail->msgid)
    {
    case NPC_MID_DEV_ANIMSPIN:
        psyche->GoalSet(NPC_GOAL_DEVANIMCYCLE, 0);
        break;
    case NPC_MID_DEV_HEROMODE:
        psyche->GoalSet(NPC_GOAL_DEVANIMHERO, 0);
        break;
    case NPC_MID_DEV_DONE:
        psyche->GoalSet(psyche->GIDOfSafety(), 0);
        break;
    case NPC_MID_DEV_ANIMCYCLE:
        break;
    default:
        handled = 1;
        break;
    }

    return handled;
}

xAnimState* zNPCGoalDEVAnimCycle::ASTGetNext(xAnimState* ast)
{
    zNPCCommon* npc = (zNPCCommon*)psyche->clt_owner;
    xAnimState* list = npc->model->Anim->Table->StateList;

    if (ast == NULL)
    {
        return list;
    }
    if (ast->Next == NULL)
    {
        return list;
    }

    return ast->Next;
}

S32 zNPCGoalDEVAnimSpin::Enter(F32 dt, void* updCtxt)
{
    zNPCCommon* npc = (zNPCCommon*)psyche->clt_owner;
    xAnimState* state = npc->AnimCurState();

    ASTMolestAnim(state);
    DoExplicitAnim(state->ID, 1);

    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalDEVAnimSpin::Exit(F32 dt, void* updCtxt)
{
    ASTUnmolestAnim();
    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalDEVAnimSpin::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* scene)
{
    zNPCCommon* npc = (zNPCCommon*)psyche->clt_owner;

    npc->VelStop();
    npc->frame->drot.angle = (2.0f * PI) * dt;
    npc->frame->mode |= 0x20;

    return xGoal::Process(trantype, dt, updCtxt, NULL);
}

S32 zNPCGoalDEVAnimSpin::NPCMessage(NPCMsg* mail)
{
    S32 handled = 1;

    switch (mail->msgid)
    {
    case NPC_MID_DEV_ANIMCYCLE:
        psyche->GoalSet(NPC_GOAL_DEVANIMSPIN, 0);
        break;
    case NPC_MID_DEV_HEROMODE:
        psyche->GoalSet(NPC_GOAL_DEVANIMHERO, 0);
        break;
    case NPC_MID_DEV_DONE:
        psyche->GoalSet(psyche->GIDOfSafety(), 0);
        break;
    case NPC_MID_DEV_ANIMSPIN:
        break;
    default:
        handled = 1;
        break;
    }

    return handled;
}

void zNPCGoalDEVAnimSpin::ASTMolestAnim(xAnimState* state)
{
    if (animWeMolested != 0)
    {
        ASTUnmolestAnim();
    }

    origAnimFlags = state->Flags;
    animWeMolested = state->ID;
    state->Flags &= ~(1 << 5);
    state->Flags |= (1 << 4);
}

void zNPCGoalDEVAnimSpin::ASTUnmolestAnim()
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

S32 zNPCGoalDEVHero::Enter(F32 dt, void* updCtxt)
{
    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalDEVHero::Exit(F32 dt, void* updCtxt)
{
    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalDEVHero::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* scene)
{
    zNPCCommon* npc = (zNPCCommon*)psyche->clt_owner;
    npc->VelStop();
    npc->TurnToFace(dt, &g_Z3, -1.0f);

    return xGoal::Process(trantype, dt, updCtxt, NULL);
}

S32 zNPCGoalDEVHero::NPCMessage(NPCMsg* mail)
{
    S32 handled = 1;

    switch (mail->msgid)
    {
    case NPC_MID_DEV_ANIMCYCLE:
        psyche->GoalSet(NPC_GOAL_DEVANIMSPIN, 0);
        break;
    case NPC_MID_DEV_ANIMSPIN:
        psyche->GoalSet(NPC_GOAL_DEVANIMCYCLE, 0);
        break;
    case NPC_MID_DEV_DONE:
        psyche->GoalSet(psyche->GIDOfSafety(), 0);
        break;
    case NPC_MID_DEV_HEROMODE:
        break;
    default:
        handled = 1;
        break;
    }

    return handled;
}
