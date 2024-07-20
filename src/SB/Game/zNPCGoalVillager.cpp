#include <types.h>

#include "xMath.h"
#include "xutil.h"
#include "zEntPickup.h"
#include "zGameExtras.h"
#include "zGlobals.h"
#include "zNPCGoalVillager.h"
#include "zNPCTypeVillager.h"
#include "zNPCGoals.h"
#include "zGoo.h"
#include "zSurface.h"

xFactoryInst* GOALCreate_Villager(S32 who, RyzMemGrow* grow, void*)
{
    xGoal* goal = NULL;

    switch (who)
    {
    case NPC_GOAL_PLAYERNEAR:
        goal = new (who, grow) zNPCGoalPlayerNear(who);
        break;
    case NPC_GOAL_TALK:
        goal = new (who, grow) zNPCGoalTalk(who);
        break;
    case NPC_GOAL_CHATTER:
        goal = new (who, grow) zNPCGoalChatter(who);
        break;
    case NPC_GOAL_SPEAK:
        goal = new (who, grow) zNPCGoalSpeak(who);
        break;
    case NPC_GOAL_CHEER:
        goal = new (who, grow) zNPCGoalCheer(who);
        break;
    case NPC_GOAL_HURT:
        goal = new (who, grow) zNPCGoalHurt(who);
        break;
    case NPC_GOAL_BALLOON:
        goal = new (who, grow) zNPCGoalBalloon(who);
        break;
    case NPC_GOAL_BOYRIDE:
        goal = new (who, grow) zNPCGoalBoyRide(who);
        break;
    case NPC_GOAL_BOYFALL:
        goal = new (who, grow) zNPCGoalBoyFall(who);
        break;
    case NPC_GOAL_BOYWEEP:
        goal = new (who, grow) zNPCGoalBoyWeep(who);
        break;
    case NPC_GOAL_BOYSWIM:
        goal = new (who, grow) zNPCGoalBoySwim(who);
        break;
    default:
        xUtil_idtag2string(who, 0);
        break;
    }

    return goal;
}

void zNPCGoalPlayerNear::DoCheatPanHandle()
{
    if (globals.player.Inv_Shiny > 75000)
    {
        globals.player.Inv_Shiny -= 500;
    }
}

void zNPCGoalHurt::ChkRewardCheat()
{
    static const U32 shinies[] = { 4, 2, 1 };

    if (zGameExtras_CheatFlags() & (1 << 20))
    {
        zNPCCommon* npc = (zNPCCommon*)psyche->clt_owner;
        zEntPickup_SpawnNRewards((U32*)shinies, 3, npc->Center());
    }
}

S32 zNPCGoalBalloon::Enter(F32 dt, void* updCtxt)
{
    zNPCBalloonBoy* npc = (zNPCBalloonBoy*)psyche->clt_owner;
    npc->specialBalloon = 1;

    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalBalloon::Exit(F32 dt, void* updCtxt)
{
    zNPCBalloonBoy* npc = (zNPCBalloonBoy*)psyche->clt_owner;
    npc->specialBalloon = 0;

    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalBalloon::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* scene)
{
    zNPCBalloonBoy* npc = (zNPCBalloonBoy*)psyche->clt_owner;

    S32 nextgoal;
    if (npc->plat_balloons != NULL)
    {
        *trantype = GOAL_TRAN_PUSH;
        nextgoal = NPC_GOAL_BOYRIDE;
    }
    else
    {
        *trantype = GOAL_TRAN_SET;
        nextgoal = NPC_GOAL_BOYFALL;
    }

    // This is always true
    if (*trantype != GOAL_TRAN_NONE)
    {
        return nextgoal;
    }

    if (nextgoal != 0)
    {
        return nextgoal;
    }

    return xGoal::Process(trantype, dt, updCtxt, NULL);
}

S32 zNPCGoalBalloon::NPCMessage(NPCMsg* mail)
{
    S32 handled = 1;

    switch (mail->msgid)
    {
    case NPC_MID_SYSEVENT:
        if (mail->sysevent.toEvent != eEventNPCSpecial_PlatformFall &&
            mail->sysevent.toEvent != eEventNPCSpecial_PlatformSnap)
        {
            handled = 0;
        }
        break;
    case NPC_MID_DAMAGE:
        handled = 1;
        break;
    default:
        handled = 0;
        break;
    }

    return handled;
}

S32 zNPCGoalBoyRide::Enter(F32 dt, void* updCtxt)
{
    zNPCBalloonBoy* npc = (zNPCBalloonBoy*)psyche->clt_owner;
    npc->flags2.flg_colCheck = 0;
    npc->flags2.flg_penCheck = 0;

    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalBoyRide::Exit(F32 dt, void* updCtxt)
{
    zNPCBalloonBoy* npc = (zNPCBalloonBoy*)psyche->clt_owner;
    npc->RestoreColFlags();

    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalBoyRide::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* scene)
{
    S32 nextgoal = 0;
    zNPCBalloonBoy* npc = (zNPCBalloonBoy*)psyche->clt_owner;
    if (npc->plat_balloons == NULL)
    {
        *trantype = GOAL_TRAN_SWAP;
        nextgoal = NPC_GOAL_BOYFALL;
    }

    if (nextgoal != 0)
    {
        return nextgoal;
    }

    xVec3Copy(&npc->frame->mat.pos, xEntGetPos(npc->plat_balloons));
    xMat3x3Copy((xMat3x3*)&npc->frame->mat, (xMat3x3*)npc->plat_balloons->model->Mat);

    npc->frame->mode |= 0x41;

    npc->PlatAnimSync();

    return xGoal::Process(trantype, dt, updCtxt, NULL);
}

S32 zNPCGoalBoyRide::NPCMessage(NPCMsg* mail)
{
    zNPCBalloonBoy* npc = (zNPCBalloonBoy*)psyche->clt_owner;
    S32 handled = 1;

    switch (mail->msgid)
    {
    case NPC_MID_SYSEVENT:
        if (mail->sysevent.toEvent == eEventNPCSpecial_PlatformFall)
        {
            npc->plat_balloons = NULL;
        }
        else
        {
            handled = 0;
        }
        break;
    case NPC_MID_DAMAGE:
        DoAutoAnim(NPC_GSPOT_ALTA, 0);
        npc->PlatAnimSet(BBOY_PLATANIM_HIT);
        break;
    default:
        handled = 0;
        break;
    }

    return handled;
}

S32 zNPCGoalBoyFall::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* scene)
{
    S32 nextgoal = 0;
    zNPCBalloonBoy* npc = (zNPCBalloonBoy*)psyche->clt_owner;

    if (hitGround != 0)
    {
        xAnimState* anim_state = npc->AnimCurState();
        if (npc->AnimTimeRemain(anim_state) < dt + 0.001f)
        {
            *trantype = GOAL_TRAN_SET;
            nextgoal = NPC_GOAL_BOYWEEP;
        }
        else if (anim_state->ID != anid_played)
        {
            *trantype = GOAL_TRAN_SET;
            nextgoal = NPC_GOAL_BOYWEEP;
        }
    }

    if (nextgoal != 0)
    {
        return nextgoal;
    }

    // Nonmatching
    xEntFrame* frame = npc->frame;
    F32 fVar2 = (frame->vel.y - dt * 10.0f);
    F32 fVar1 = (fVar2 > -4.0f) ? -4.0f : fVar2;
    frame->vel.y = fVar1;

    npc->colFreq = (npc->colFreq < 0) ? npc->colFreq : 0;

    return xGoal::Process(trantype, dt, updCtxt, NULL);
}

// Nonmatching: not finished
U8 zNPCGoalBoyFall::CollReview(void*)
{
    if (hitGround != 0)
    {
        return 0;
    }

    zNPCBalloonBoy* npc = (zNPCBalloonBoy*)psyche->clt_owner;
    xEntCollis* collis = npc->collis;
    if (collis->colls[0].flags & 1)
    {
        return 0;
    }

    zSurfaceGetSurface(&collis->colls[0]);
    F32 meme[1];
    meme[0] = 0.0f;
    xEnt* ent = (xEnt*)collis->colls[0].optr;
    if (ent == NULL)
    {
        hitGround = 1;
    }
    else if (zGooIs(ent, (F32&)*meme, 0))
    {
        hitGround = 2;
    }
    else
    {
        hitGround = 1;
    }
    DoAutoAnim(NPC_GSPOT_ALTA, 0);
    return 1;
}

S32 zNPCGoalBoyWeep::Enter(F32 dt, void* updCtxt)
{
    tmr_weep = 300.0f * (0.25f * (xurand() - 0.5f)) + 300.0f;
    ang_spinrate = 0.0f;
    return zNPCGoalCommon::Enter(dt, updCtxt);
}
