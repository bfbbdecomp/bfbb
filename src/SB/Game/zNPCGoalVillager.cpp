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

S32 zNPCGoalPlayerNear::NPCMessage(NPCMsg* mail)
{
    S32 handled = 0;

    switch (mail->msgid)
    {
    case NPC_MID_TALKSTART:
        if (stat == GOAL_STAT_PROCESS)
        {
            handled = 1;
            flg_plyrnear |= (1 << 0);
        }
        break;
    }

    return handled;
}

void zNPCGoalPlayerNear::ChkCheatMedic()
{
    static S32 cnt_nextMedic = 0;
    cnt_nextMedic--;
    if (cnt_nextMedic <= 0)
    {
        cnt_nextMedic = (S32)(5.0f * xurand()) + 5;
        zEntPlayer_GiveHealth(1);
    }
}

void zNPCGoalPlayerNear::DoCheatPanHandle()
{
    if (globals.player.Inv_Shiny > 75000)
    {
        globals.player.Inv_Shiny -= 500;
    }
}

void zNPCGoalPlayerNear::ChkCheatDogTrix(S32* goal, en_trantype* trantype)
{
    // clang-format off
    static U32 hashes_sc[] = {
        xStrHash("LassoSwing"),
        xStrHash("SlipIdle01"),
        xStrHash("LCopter01"),
        xStrHash("LCopterHeadUp01"),
        xStrHash("TailSlide01"),
        xStrHash("TailSlideJumpStart01"),
        xStrHash("TailSlideJumpApex01"),
        xStrHash("TailSlideFall01"),
        xStrHash("TailSlideLand01"),
        xStrHash("TailSlideDJumpApex01"),
    };

    static U32 hashes_ss[] = {
        xStrHash("DJumpStart01"),
        xStrHash("DJumpApex01"),
        xStrHash("BBounceStrike01"),
        0,
        0,
    };

    static U32 hashes_pa[] = {
        xStrHash("DJumpStart01"),
        xStrHash("DJumpApex01"),
        xStrHash("StunLand"),
    };
    // clang-format on

    U32 id = globals.player.ent.model->Anim->Single->State->ID;
    S32 match = 0;
    if (gCurrentPlayer == eCurrentPlayerSpongeBob)
    {
        for (U32 i = 0; i < 5; i++)
        {
            if (id == hashes_ss[i])
            {
                match = 1;
                break;
            }
        }
    }
    else if (gCurrentPlayer == eCurrentPlayerPatrick)
    {
        for (U32 i = 0; i < 3; i++)
        {
            if (id == hashes_pa[i])
            {
                match = 1;
                break;
            }
        }
    }
    else if (gCurrentPlayer == eCurrentPlayerSandy)
    {
        for (U32 i = 0; i < 10; i++)
        {
            if (id == hashes_sc[i])
            {
                match = 1;
                break;
            }
        }
    }

    if (match != 0)
    {
        static const U32 shinies[] = { 4, 3, 2, 1, 4 };

        zNPCVillager* npc = (zNPCVillager*)psyche->clt_owner;
        zEntPickup_SpawnNRewards((U32*)shinies, 5, npc->Center());
        *goal = NPC_GOAL_CHEER;
        *trantype = GOAL_TRAN_PUSH;
    }
}

S32 zNPCGoalTalk::Enter(F32 dt, void* updCtxt)
{
    zNPCVillager* npc = (zNPCVillager*)psyche->clt_owner;

    sfx_curTalk = NULL;
    aid_curSound = 0;
    killAndExit = 0;
    stopTalking = 0;
    StartSFX(sfx_curTalk);

    if (npc->converse == NULL)
    {
        npc->FindMyConverse();
    }
    if (npc->converse != NULL)
    {
        npc->hithere.npc = npc;
        npc->converse->set_callback(&npc->hithere);
        npc->converse->start_talk(npc);
    }
    npc->WonderOfTalking(1, NULL);
    tmr_minTalk = 0.25f;

    xVec3Copy(&pos_maintain, xEntGetPos(npc));

    tmr_cycleAnim = 5.0f * (0.25f * (xurand() - 0.5f)) + 5.0f;

    npc->pflags &= (U8) ~(1 << 2);

    npc->VelStop();

    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalTalk::Exit(F32 dt, void* updCtxt)
{
    zNPCVillager* npc = (zNPCVillager*)psyche->clt_owner;
    npc->WonderOfTalking(0, NULL);
    npc->RestoreColFlags();

    return xGoal::Enter(dt, updCtxt);
}

S32 zNPCGoalTalk::NPCMessage(NPCMsg* mail)
{
    S32 handled = 1;

    switch (mail->msgid)
    {
    case NPC_MID_DAMAGE:
        break;
    case NPC_MID_TALKON:
        killAndExit = 0;
        stopTalking = 0;
        break;
    case NPC_MID_TALKOFF:
        killAndExit = 1;
        break;
    default:
        handled = 0;
        break;
    }

    return handled;
}

void zNPCGoalTalk::StartSFX(xSFX* sfx)
{
    zNPCVillager* npc = (zNPCVillager*)psyche->clt_owner;

    U32 sid = 0;
    if (sfx != NULL && sfx_curTalk != NULL)
    {
        npc->SndPlayFromSFX(sfx, &sid);
    }
}

S32 zNPCGoalSpeak::Enter(F32 dt, void* updCtxt)
{
    zNPCVillager* npc = (zNPCVillager*)psyche->clt_owner;
    npc->WonderOfTalking(1, NULL);
    xVec3Copy(&pos_maintain, xEntGetPos(npc));
    tmr_cycleAnim = 5.0f * (0.25f * (xurand() - 0.5f)) + 5.0f;
    npc->pflags &= (U8) ~(1 << 2);
    npc->VelStop();

    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalSpeak::Exit(F32 dt, void* updCtxt)
{
    zNPCVillager* npc = (zNPCVillager*)psyche->clt_owner;
    npc->WonderOfTalking(0, NULL);
    npc->RestoreColFlags();

    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalSpeak::NPCMessage(NPCMsg* mail)
{
    S32 handled = 1;

    switch (mail->msgid)
    {
    case NPC_MID_SYSEVENT:
        if (mail->sysevent.toEvent == eEventNPCSetActiveOff)
        {
            handled = 0;
        }
        break;
    default:
        handled = 1;
        break;
    }

    return handled;
}

S32 zNPCGoalCheer::Enter(F32 dt, void* updCtxt)
{
    zNPCVillager* npc = (zNPCVillager*)psyche->clt_owner;
    npc->SndPlayRandom(NPC_STYP_CHEERING);

    return zNPCGoalLoopAnim::Enter(dt, updCtxt);
}

// Equivalent: regalloc
S32 zNPCGoalCheer::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* scene)
{
    xVec3 *npc_pos, *player_pos;

    zNPCVillager* npc = (zNPCVillager*)psyche->clt_owner;
    xVec3 dir_plyr = {};
    npc_pos = xEntGetPos(npc);
    player_pos = xEntGetPos(&globals.player.ent);
    xVec3Sub(&dir_plyr, player_pos, npc_pos);
    F32 distance = xVec3Length(&dir_plyr);

    if (distance > 0.25f)
    {
        xVec3SMulBy(&dir_plyr, 1.0f / distance);
        npc->TurnToFace(dt, &dir_plyr, -1.0f);
    }

    npc->VelStop();

    return zNPCGoalLoopAnim::Process(trantype, dt, updCtxt, scene);
}

S32 zNPCGoalHurt::Enter(F32 dt, void* updCtxt)
{
    zNPCVillager* npc = (zNPCVillager*)psyche->clt_owner;
    npc->SndPlayRandom(NPC_STYP_EXCLAIM);

    ChkRewardCheat();

    return zNPCGoalPushAnim::Enter(dt, updCtxt);
}

S32 zNPCGoalHurt::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* scene)
{
    zNPCVillager* npc = (zNPCVillager*)psyche->clt_owner;
    npc->VelStop();

    return zNPCGoalPushAnim::Process(trantype, dt, updCtxt, scene);
}

void zNPCGoalHurt::ChkRewardCheat()
{
    static const U32 shinies[] = { 4, 2, 1 };

    if (zGameExtras_CheatFlags() & (1 << 20))
    {
        zNPCVillager* npc = (zNPCVillager*)psyche->clt_owner;
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

// Equivalent(???)
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

    F32 fVar2 = -(dt * 10.0f - npc->frame->vel.y);
    npc->frame->vel.y = (fVar2 > -4.0f) ? fVar2 : -4.0f;

    npc->colFreq = (npc->colFreq < 0) ? npc->colFreq : 0;

    return xGoal::Process(trantype, dt, updCtxt, NULL);
}

S32 zNPCGoalBoyWeep::Enter(F32 dt, void* updCtxt)
{
    tmr_weep = 300.0f * (0.25f * (xurand() - 0.5f)) + 300.0f;
    ang_spinrate = 0.0f;
    return zNPCGoalCommon::Enter(dt, updCtxt);
}

// Equivalent: branching weirdness
S32 zNPCGoalBoyWeep::NPCMessage(NPCMsg* mail)
{
    if (mail->msgid == NPC_MID_DAMAGE && mail->infotype == NPC_MDAT_DAMAGE &&
        mail->dmgdata.dmg_type == DMGTYP_SIDE)
    {
        ang_spinrate += 16.0f;
        zNPCBalloonBoy* npc = (zNPCBalloonBoy*)psyche->clt_owner;
        npc->SndPlayRandom(NPC_STYP_EXCLAIM);
    }
    return 0;
}
