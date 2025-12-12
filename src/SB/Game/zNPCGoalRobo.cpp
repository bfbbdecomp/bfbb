#include "xColor.h"
#include "xCounter.h"
#include "xDraw.h"
#include "xEnt.h"
#include "xFX.h"
#include "xModel.h"
#include "xScrFx.h"
#include "xVec3.h"
#include "xMath.h"
#include "xMath3.h"
#include "xMathInlines.h"
#include "zNPCGoalRobo.h"
#include "zNPCGoals.h"
#include "zNPCGoalStd.h"
#include "zNPCHazard.h"
#include "zNPCSndLists.h"
#include "zNPCSupport.h"
#include "zNPCTypeCommon.h"
#include "zNPCTypeRobot.h"
#include "zGlobals.h"
#include "zNPCGoalCommon.h"
#include "zGameExtras.h"
#include "zNPCSupplement.h"
#include <stdlib.h>

enum en_copcntr
{
    ROBOCOP_CNTR_FODDER = 0,
    ROBOCOP_CNTR_HAMMER = 1,
    ROBOCOP_CNTR_TARTAR = 2,
    ROBOCOP_CNTR_GLOVE = 3,
    ROBOCOP_CNTR_MONSOON = 4,
    ROBOCOP_CNTR_SLEEPY = 5,
    ROBOCOP_CNTR_CHUCK = 6,
    ROBOCOP_CNTR_TUBELET = 7,
    ROBOCOP_CNTR_SLICK = 8,
    ROBOCOP_CNTR_FODBOMB = 9,
    ROBOCOP_CNTR_FODBZZT = 10,
    ROBOCOP_CNTR_CHOMPER = 11,
    ROBOCOP_CNTR_ARFARF = 12,
    ROBOCOP_CNTR_ARFDOG = 13,
    ROBOCOP_CNTR_PLANKTON = 14,
    ROBOCOP_CNTR_NOMORE = 15,
    ROBOCOP_CNTR_FORCE = 2147483647,
};

struct RoboCopMap
{
    S32 ntyp_robotype;
    en_copcntr idx_copCounter;
};

void NPCC_DrawPlayerPredict(S32, F32, F32);

// .text (12360)

xFactoryInst* GOALCreate_Robotic(S32 who, RyzMemGrow* grow, void*)
{
    xGoal* goal = NULL; // r16
    switch (who)
    {
    case NPC_GOAL_NOTICE:
        goal = new (who, grow) zNPCGoalNotice(who);
        break;
    case NPC_GOAL_TAUNT:
        goal = new (who, grow) zNPCGoalTaunt(who);
        break;
    case NPC_GOAL_EVADE:
        goal = new (who, grow) zNPCGoalEvade(who);
        break;
    case NPC_GOAL_GOHOME:
        goal = new (who, grow) zNPCGoalGoHome(who);
        break;
    case NPC_GOAL_CHASE:
        goal = new (who, grow) zNPCGoalChase(who);
        break;
    case NPC_GOAL_ALERT:
        goal = new (who, grow) zNPCGoalAlert(who);
        break;
    case NPC_GOAL_ALERTFODDER:
        goal = new (who, grow) zNPCGoalAlertFodder(who);
        break;
    case NPC_GOAL_ALERTFODBOMB:
        goal = new (who, grow) zNPCGoalAlertFodBomb(who);
        break;
    case NPC_GOAL_ALERTCHOMPER:
        goal = new (who, grow) zNPCGoalAlertChomper(who);
        break;
    case NPC_GOAL_ALERTFODBZZT:
        goal = new (who, grow) zNPCGoalAlertFodBzzt(who);
        break;
    case NPC_GOAL_ALERTHAMMER:
        goal = new (who, grow) zNPCGoalAlertHammer(who);
        break;
    case NPC_GOAL_ALERTTARTAR:
        goal = new (who, grow) zNPCGoalAlertTarTar(who);
        break;
    case NPC_GOAL_ALERTGLOVE:
        goal = new (who, grow) zNPCGoalAlertGlove(who);
        break;
    case NPC_GOAL_ALERTMONSOON:
        goal = new (who, grow) zNPCGoalAlertMonsoon(who);
        break;
    case NPC_GOAL_ALERTSLEEPY:
        goal = new (who, grow) zNPCGoalAlertSleepy(who);
        break;
    case NPC_GOAL_ALERTARF:
        goal = new (who, grow) zNPCGoalAlertArf(who);
        break;
    case NPC_GOAL_ALERTPUPPY:
        goal = new (who, grow) zNPCGoalAlertPuppy(who);
        break;
    case NPC_GOAL_ALERTCHUCK:
        goal = new (who, grow) zNPCGoalAlertChuck(who);
        break;
    case NPC_GOAL_ALERTTUBELET:
        goal = new (who, grow) zNPCGoalAlertTubelet(who);
        break;
    case NPC_GOAL_ALERTSLICK:
        goal = new (who, grow) zNPCGoalAlertSlick(who);
        break;
    case NPC_GOAL_ATTACKCQC:
        goal = new (who, grow) zNPCGoalAttackCQC(who);
        break;
    case NPC_GOAL_ATTACKFODDER:
        goal = new (who, grow) zNPCGoalAttackFodder(who);
        break;
    case NPC_GOAL_ATTACKCHOMPER:
        goal = new (who, grow) zNPCGoalAttackChomper(who);
        break;
    case NPC_GOAL_ATTACKHAMMER:
        goal = new (who, grow) zNPCGoalAttackHammer(who);
        break;
    case NPC_GOAL_ATTACKTARTAR:
        goal = new (who, grow) zNPCGoalAttackTarTar(who);
        break;
    case NPC_GOAL_ATTACKMONSOON:
        goal = new (who, grow) zNPCGoalAttackMonsoon(who);
        break;
    case NPC_GOAL_ATTACKARF:
        goal = new (who, grow) zNPCGoalAttackArf(who);
        break;
    case NPC_GOAL_ATTACKARFMELEE:
        goal = new (who, grow) zNPCGoalAttackArfMelee(who);
        break;
    case NPC_GOAL_ATTACKCHUCK:
        goal = new (who, grow) zNPCGoalAttackChuck(who);
        break;
    case NPC_GOAL_ATTACKSLICK:
        goal = new (who, grow) zNPCGoalAttackSlick(who);
        break;
    case NPC_GOAL_LASSOBASE:
        goal = new (who, grow) zNPCGoalLassoBase(who);
        break;
    case NPC_GOAL_LASSOGRAB:
        goal = new (who, grow) zNPCGoalLassoGrab(who);
        break;
    case NPC_GOAL_LASSOTHROW:
        goal = new (who, grow) zNPCGoalLassoThrow(who);
        break;
    case NPC_GOAL_EVILPAT:
        goal = new (who, grow) zNPCGoalEvilPat(who);
        break;
    case NPC_GOAL_STUNNED:
        goal = new (who, grow) zNPCGoalStunned(who);
        break;
    case NPC_GOAL_PATCARRY:
        goal = new (who, grow) zNPCGoalPatCarry(who);
        break;
    case NPC_GOAL_PATTHROW:
        goal = new (who, grow) zNPCGoalPatThrow(who);
        break;
    case NPC_GOAL_DOGLAUNCH:
        goal = new (who, grow) zNPCGoalDogLaunch(who);
        break;
    case NPC_GOAL_DOGBARK:
        goal = new (who, grow) zNPCGoalDogBark(who);
        break;
    case NPC_GOAL_DOGDASH:
        goal = new (who, grow) zNPCGoalDogDash(who);
        break;
    case NPC_GOAL_DOGPOUNCE:
        goal = new (who, grow) zNPCGoalDogPounce(who);
        break;
    case NPC_GOAL_TELEPORT:
        goal = new (who, grow) zNPCGoalTeleport(who);
        break;
    case NPC_GOAL_HOKEYPOKEY:
        goal = new (who, grow) zNPCGoalHokeyPokey(who);
        break;
    case NPC_GOAL_DAMAGE:
        goal = new (who, grow) zNPCGoalDamage(who);
        break;
    case NPC_GOAL_WOUND:
        goal = new (who, grow) zNPCGoalWound(who);
        break;
    case NPC_GOAL_BASHED:
        goal = new (who, grow) zNPCGoalBashed(who);
        break;
    case NPC_GOAL_KNOCK:
        goal = new (who, grow) zNPCGoalKnock(who);
        break;
    case NPC_GOAL_AFTERLIFE:
        goal = new (who, grow) zNPCGoalAfterlife(who);
        break;
    case NPC_GOAL_RESPAWN:
        goal = new (who, grow) zNPCGoalRespawn(who);
        break;
    case NPC_GOAL_DEFLATE:
        goal = new (who, grow) zNPCGoalDeflate(who);
        break;
    case NPC_GOAL_TUBEPAL:
        goal = new (who, grow) zNPCGoalTubePal(who);
        break;
    case NPC_GOAL_TUBEDUCKLING:
        goal = new (who, grow) zNPCGoalTubeDuckling(who);
        break;
    case NPC_GOAL_TUBEATTACK:
        goal = new (who, grow) zNPCGoalTubeAttack(who);
        break;
    case NPC_GOAL_TUBELASSO:
        goal = new (who, grow) zNPCGoalTubeLasso(who);
        break;
    case NPC_GOAL_TUBEBIRTH:
        goal = new (who, grow) zNPCGoalTubeBirth(who);
        break;
    case NPC_GOAL_TUBEBONKED:
        goal = new (who, grow) zNPCGoalTubeBonked(who);
        break;
    case NPC_GOAL_TUBEDYING:
        goal = new (who, grow) zNPCGoalTubeDying(who);
        break;
    case NPC_GOAL_TUBEDEAD:
        goal = new (who, grow) zNPCGoalTubeDead(who);
        break;
    }

    return goal;
}

S32 zNPCGoalNotice::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn)
{
    zNPCRobot* npc = (zNPCRobot*)(psyche->clt_owner);
    xVec3 dir_dest;

    xVec3Sub(&dir_dest, xEntGetPos(&globals.player.ent), npc->Pos());
    dir_dest.y = 0.0f;

    if (xVec3Length2(&dir_dest) > 1.0f)
    {
        xVec3Normalize(&dir_dest, &dir_dest);
        npc->TurnToFace(dt, &dir_dest, 12.566371f);
    }

    npc->VelStop();
    return zNPCGoalPushAnim::Process(trantype, dt, updCtxt, xscn);
}

S32 zNPCGoalTaunt::Enter(F32 dt, void* updCtxt)
{
    zNPCCommon* npc = ((zNPCCommon*)(psyche->clt_owner));
    npc->SndPlayRandom(NPC_STYP_LAUGH);
    return zNPCGoalLoopAnim::Enter(dt, updCtxt);
}

S32 zNPCGoalTaunt::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn)
{
    zNPCRobot* npc = (zNPCRobot*)(psyche->clt_owner);
    xVec3 dir_dest;
    F32 timeToLaugh;

    npc->VelStop();

    F32 half_dur = (0.5f * npc->AnimDuration(NULL));

    timeToLaugh = MAX(half_dur, 0.5f);

    if (globals.player.DamageTimer > timeToLaugh)
    {
        this->cnt_loop = MAX(this->cnt_loop, 1);
    }

    xVec3Sub(&dir_dest, xEntGetPos(&globals.player.ent), npc->Pos());
    dir_dest.y = 0.0f;

    if (xVec3Length2(&dir_dest) > 1.0f)
    {
        xVec3Normalize(&dir_dest, &dir_dest);
        npc->TurnToFace(dt, &dir_dest, -1.0f);
    }

    return zNPCGoalLoopAnim::Process(trantype, dt, updCtxt, xscn);
}

S32 zNPCGoalEvade::Enter(F32 dt, void* updCtxt)
{
    flg_evade = 0;

    if (xrand() & 0x00800000)
    {
        flg_evade |= 1;
    }
    else
    {
        flg_evade |= 2;
    }

    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalEvade::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn)
{
    zNPCRobot* npc = (zNPCRobot*)(this->psyche->clt_owner);
    S32 nextgoal = 0;

    if (this->psyche->TimerGet(XPSY_TYMR_CURGOAL) > 5.0f)
    {
        *trantype = GOAL_TRAN_POP;
        nextgoal = 1;
    }

    if (*trantype != GOAL_TRAN_NONE)
    {
        return nextgoal;
    }
    else
    {
        xVec3 dir_dest;
        xVec3Sub(&dir_dest, xEntGetPos(&globals.player.ent), npc->Pos());
        dir_dest.y = 0.0f;
        if (xVec3Length2(&dir_dest) > 1.0f)
        {
            xVec3Normalize(&dir_dest, &dir_dest);
            npc->TurnToFace(dt, &dir_dest, -1.0);
        }
        npc->ThrottleAdjust(dt, 0.0f, -1.0f);
        npc->ThrottleApply(dt, NPCC_faceDir(npc), 0);
        nextgoal = xGoal::Process(trantype, dt, updCtxt, NULL);
    }

    return nextgoal;
}

S32 zNPCGoalGoHome::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn)
{
    U32 nextgoal = 0;
    zNPCRobot* npc = (zNPCRobot*)(psyche->clt_owner);
    xVec3 dir_dest;
    xVec3Sub(&dir_dest, npc->Pos(), npc->arena.Pos());
    if (npc->flg_move & 2)
    {
        dir_dest.y = 0.0f;
    }
    F32 a = xVec3Length2(&dir_dest);
    F32 b = npc->arena.Radius(1.0f) * 0.3f;
    if (a < b)
    {
        npc->ThrottleAdjust(dt, 0.0f, -1.0f);
        if (npc->spd_throttle < 0.5f)
        {
            nextgoal = 1;
            *trantype = GOAL_TRAN_POP;
        }
        return nextgoal;
    }
    else
    {
        xVec3Normalize(&dir_dest, &dir_dest);
        npc->TurnToFace(dt, &dir_dest, -1.0f);
        npc->ThrottleAdjust(dt, 5.0f, -1.0f);
        npc->ThrottleApply(dt, &dir_dest, 0);
        if (npc->DBG_IsNormLog(eNPCDCAT_Thirteen, 2))
        {
            if ((S32)(psyche->TimerGet(XPSY_TYMR_CURGOAL) * 5.0f) & 1)
            {
                xDrawSetColor(g_RED);
                xDrawLine(xEntGetCenter(npc), npc->arena.Pos());
            }
        }
        return xGoal::Process(trantype, dt, updCtxt, NULL);
    }
    return nextgoal;
}

NPCBattle g_GlobalBattleData;

S32 zNPCGoalAlert::Enter(F32 dt, void* updCtxt)
{
    zNPCRobot* npc = ((zNPCRobot*)(this->psyche->clt_owner));
    npc->SelfType();
    if (*(U8*)(&npc->npcset.allowDetect) && npc->arena.IsReady())
    {
        if (npc->arena.IncludesPlayer(0.0f, NULL))
        {
            npc->ISeePlayer();
        }
    }
    npc->SndPlayRandom(NPC_STYP_ALERT);
    npc->inf_battle = &g_GlobalBattleData;
    npc->inf_battle->JoinBattle(npc);
    this->flg_user = 1;
    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalAlert::Exit(F32 dt, void* updCtxt)
{
    zNPCRobot* npc = ((zNPCRobot*)(this->psyche->clt_owner));
    if (npc->inf_battle != NULL)
    {
        npc->inf_battle->LeaveBattle(npc);
    }
    npc->inf_battle = NULL;
    this->flg_user = 1;
    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalAlert::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn)
{
    S32 nextgoal = 0;
    zNPCRobot* npc = (zNPCRobot*)(psyche->clt_owner);
    xVec3 dir_dest;
    if (globals.player.Health < 1)
    {
        zNPCGoalLoopAnim* taunt = (zNPCGoalLoopAnim*)psyche->FindGoal(NPC_GOAL_TAUNT);
        if (taunt != NULL)
        {
            taunt->LoopCountSet(1000);
            *trantype = GOAL_TRAN_PUSH;
            nextgoal = NPC_GOAL_TAUNT;
        }
    }
    else if (globals.player.DamageTimer > 0.5f)
    {
        zNPCGoalLoopAnim* taunt = (zNPCGoalLoopAnim*)psyche->FindGoal(NPC_GOAL_TAUNT);
        if (taunt != NULL)
        {
            taunt->LoopCountSet(1);
            *trantype = GOAL_TRAN_PUSH;
            nextgoal = NPC_GOAL_TAUNT;
        }
    }
    else if (npc->SomethingWonderful() != 0)
    {
        *trantype = GOAL_TRAN_SET;
        nextgoal = NPC_GOAL_IDLE;
    }
    else if (!npc->arena.IsReady())
    {
        *trantype = GOAL_TRAN_SET;
        nextgoal = NPC_GOAL_IDLE;
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
    xVec3Sub(&dir_dest, xEntGetPos(&globals.player.ent), npc->Pos());
    dir_dest.y = 0.0f;
    if (xVec3Length2(&dir_dest) > 1.0f)
    {
        xVec3Normalize(&dir_dest, &dir_dest);
        npc->TurnToFace(dt, &dir_dest, -1.0f);
    }
    npc->ThrottleAdjust(dt, 0.0f, -1.0f);
    npc->ThrottleApply(dt, NPCC_faceDir(npc), 0);
    return xGoal::Process(trantype, dt, updCtxt, xscn);
}

S32 zNPCGoalAlertFodder::Enter(F32 dt, void* updCtxt)
{
    this->flg_attack = 0;
    this->tmr_alertfod = 0.0f;
    this->alertfod = FODDER_ALERT_NOTICE;
    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalAlertFodder::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* scene)
{
    zNPCRobot* npc = (zNPCRobot*)this->psyche->clt_owner;
    S32 nextgoal = 0;

    if (globals.player.Health < 1)
    {
        zNPCGoalTaunt* taunt = (zNPCGoalTaunt*)psyche->FindGoal(NPC_GOAL_TAUNT);
        taunt->LoopCountSet(1000);
        nextgoal = NPC_GOAL_TAUNT;
        *trantype = GOAL_TRAN_PUSH;
    }
    else if (globals.player.DamageTimer > 0.5f)
    {
        nextgoal = NPC_GOAL_TAUNT;
        *trantype = GOAL_TRAN_PUSH;
    }
    else if (npc->SomethingWonderful())
    {
        *trantype = GOAL_TRAN_SET;
        nextgoal = NPC_GOAL_IDLE;
    }
    else if (!npc->arena.IncludesPlayer(0.0f, NULL)) // I don't understand this check
    {
        nextgoal = NPC_GOAL_IDLE;
        *trantype = GOAL_TRAN_SET;
    }

    if (*trantype != GOAL_TRAN_NONE)
    {
        return nextgoal;
    }

    en_alertfod old_alertfod = this->alertfod;

    S32 flag2 = this->flg_info & 2;
    this->flg_info = this->flg_info & ~0x6;

    F32 pct = npc->arena.PctFromHome(npc->Pos());

    if (pct > 1.0f)
    {
        flag2 = 1;
        this->alertfod = FODDER_ALERT_ARENA;
    }
    else if (this->alertfod == FODDER_ALERT_ARENA && pct < 0.5f)
    {
        this->alertfod = FODDER_ALERT_BEGIN;
        flag2 = 0x1;
    }

    switch (this->alertfod)
    {
    case FODDER_ALERT_NOTICE: // 0x194
    {
        this->alertfod = FODDER_ALERT_BEGIN;
        nextgoal = NPC_GOAL_NOTICE;
        *trantype = GOAL_TRAN_PUSH;
        break;
    }
    case FODDER_ALERT_ARENA: // 0x1ac
    {
        if (flag2)
        {
            this->DoAutoAnim(NPC_GSPOT_STARTALT, 0);
        }

        this->GetInArena(dt);
        break;
    }
    case FODDER_ALERT_BEGIN: // 0x1d4
    {
        this->alertfod = FODDER_ALERT_CHASE;
        break;
    }
    case FODDER_ALERT_CHASE: // 0x1e0
    {
        if (zNPCGoalAlertFodder::CheckSpot(dt) && !(globals.player.DamageTimer > 0.0f))
        {
            this->alertfod = FODDER_ALERT_STABDONE;
            nextgoal = 'NGRE';
            *trantype = GOAL_TRAN_PUSH;
            break;
        }

        if (flag2)
        {
            this->DoAutoAnim(NPC_GSPOT_STARTALT, 0);
        }

        this->FlankPlayer(dt);

        break;
    }
    case FODDER_ALERT_STABDONE: // 0x250
    {
        this->alertfod = FODDER_ALERT_CHASE;
        break;
    }
    case FODDER_ALERT_EVADE: // 0x25c
    {
        if (flag2)
        {
            this->DoAutoAnim(NPC_GSPOT_STARTALT, 0);
            this->tmr_alertfod = 0.25f;
        }

        if (this->tmr_alertfod < 0.0f)
        {
            this->alertfod = FODDER_ALERT_BEGIN;
            break;
        }

        this->MoveEvade(dt);
        this->tmr_alertfod = MAX(-1.0f, this->tmr_alertfod - dt);

        break;
    }
    }

    if (this->alertfod != old_alertfod)
    {
        this->flg_info |= 2;
    }

    if (*trantype)
    {
        return nextgoal;
    }

    return this->xGoal::Process(trantype, dt, updCtxt, NULL);
}

S32 zNPCGoalAlertFodder::CheckSpot(F32 dt)
{
    S32 plyrInSpot;
    zNPCRobot* npc = (zNPCRobot*)this->psyche->clt_owner;
    xVec3 pos_plyr;
    xVec3 dir_plyr;
    F32 dy;
    F32 dst_plyr;
    F32 dot_plyr;

    zEntPlayer_PredictPos(&pos_plyr, 0.5f, 1.0f, 1);
    dst_plyr = npc->XZDstSqToPos(&pos_plyr, NULL, NULL);
    if (npc->XZDstSqToPlayer(NULL, NULL) < dst_plyr)
    {
        pos_plyr = *xEntGetPos(&globals.player.ent);
    }
    dst_plyr = npc->XZDstSqToPos(&pos_plyr, &dir_plyr, &dy);
    dst_plyr = xsqrt(dst_plyr);
    if (xabs(dy) > 3.4f)
    {
        plyrInSpot = 0;
    }
    else if (dst_plyr < 0.35f)
    {
        plyrInSpot = 1;
    }
    else if (dst_plyr > 1.5f)
    {
        plyrInSpot = 0;
    }
    else
    {
        dir_plyr *= 1.0f / dst_plyr;
        dot_plyr = xVec3Dot(&dir_plyr, NPCC_faceDir(npc));
        plyrInSpot = (dot_plyr < 0.86f) ? 0 : 1;
    }
    if (npc->DBG_IsNormLog(eNPCDCAT_Thirteen, 2) != 0)
    {
        xDrawSetColor(g_GRAY50);
        xDrawSphere2(&pos_plyr, 0.1f, 12);
        xDrawSetColor(g_PINK);
        xDrawCyl(npc->Pos(), 1.5f, 3.4f, 0x2020C);
        xVec3 pos_head = *npc->Pos();
        pos_head.y += 1.0f;
        xDrawCyl(&pos_head, 0.35f, 0.2f, 0x2020C);
    }
    return plyrInSpot;
}

void zNPCGoalAlertFodder::FlankPlayer(F32 dt)
{
    zNPCRobot* npc = (zNPCRobot*)this->psyche->clt_owner;
    xVec3 dir_dest;
    xVec3 pos_plyr;
    xVec3 r1_0x38;
    xVec3 r1_0x2C;
    xVec3 r1_0x20;
    xVec3 r1_0x14;
    xVec3 dir;
    F32 length;

    zEntPlayer_PredictPos(&dir_dest, 0.5f, 1.0f, 1);

    if (npc->XZDstSqToPlayer(NULL, NULL) < npc->XZDstSqToPos(&dir_dest, NULL, NULL))
    {
        xVec3Copy(&dir_dest, xEntGetPos(&globals.player.ent));
    }

    xVec3Sub(&pos_plyr, &dir_dest, npc->arena.Pos());
    length = xVec3Length(&pos_plyr);
    if (length < 1.0f)
    {
        xVec3Copy(&pos_plyr, NPCC_faceDir(&globals.player.ent));
    }
    else
    {
        xVec3SMulBy(&pos_plyr, 1.0f / length);
    }

    xVec3Cross(&r1_0x38, &g_Y3, &pos_plyr);

    xVec3Sub(&r1_0x2C, xEntGetPos(&globals.player.ent), npc->Pos());
    length = xVec3Length(&r1_0x2C);
    if (length < 1.0f)
    {
        xVec3Copy(&r1_0x2C, NPCC_rightDir(&globals.player.ent));
    }
    else
    {
        xVec3SMulBy(&r1_0x2C, 1.0f / length);
    }

    xVec3Sub(&r1_0x20, npc->arena.Pos(), npc->zNPCCommon::Pos());
    length = xVec3Length(&r1_0x20);
    if (length < 1.0f)
    {
        xVec3Copy(&r1_0x20, NPCC_rightDir(npc));
    }
    else
    {
        xVec3SMulBy(&r1_0x20, 1.0f / length);
    }

    xVec3Dot(&r1_0x20, &r1_0x2C);
    xVec3Copy(&r1_0x14, &r1_0x2C);

    npc->ThrottleAdjust(dt, 6.0f, -1.0f);
    NPCC_ang_toXZDir(npc->frame->rot.angle + npc->TurnToFace(dt, &r1_0x14, 4 * PI), &dir);
    npc->ThrottleApply(dt, &dir, 0);
}

void zNPCGoalAlertFodder::GetInArena(F32 dt)
{
    zNPCRobot* npc;
    xVec3 vec1;
    xVec3 dir_want;
    xVec3 dir;

    npc = (zNPCRobot*)this->psyche->clt_owner;

    xVec3Sub(&vec1, npc->arena.Pos(), npc->zNPCCommon::Pos());

    F32 rot = xVec3Length(&vec1);

    if (rot < 1.0f)
    {
        xVec3Copy(&vec1, NPCC_rightDir(npc));
    }
    else
    {
        xVec3SMulBy(&vec1, 1.0f / rot);
    }

    xVec3Copy(&dir_want, &vec1);

    npc->ThrottleAdjust(dt, 6.0f, -1.0f);
    rot = npc->TurnToFace(dt, &dir_want, -1.0f);
    NPCC_ang_toXZDir(npc->frame->rot.angle + rot, &dir);
    npc->ThrottleApply(dt, &dir, 0);
}

S32 zNPCGoalAlertChomper::MoveEvadePos(const xVec3* pos, F32 dt)
{
    S32 arrived = 0;
    zNPCRobot* npc = (zNPCRobot*)(psyche->clt_owner);
    xVec3 dir_evade;
    xVec3 dir;
    F32 dst = npc->XZDstSqToPos(pos, &dir_evade, 0);
    if (dst < SQ(1.0f))
    {
        arrived = 1;
    }
    else
    {
        dir_evade /= xsqrt(dst);
        npc->ThrottleAdjust(dt, 2.5f, -1.0f);
        NPCC_ang_toXZDir(npc->frame->rot.angle + npc->TurnToFace(dt, &dir_evade, -1.0f), &dir);
        npc->ThrottleApply(dt, &dir, 0);
    }
    return arrived;
}

void zNPCGoalAlertFodder::MoveEvade(F32 dt)
{
    // TODO: Variable names.
    zNPCRobot* npc = (zNPCRobot*)this->psyche->clt_owner;
    xVec3 r1_0x2C;
    xVec3 r1_0x20;
    xVec3 dir_dest;
    xVec3 dir;
    F32 length;

    xVec3Sub(&r1_0x2C, npc->arena.Pos(), npc->Pos());
    length = xVec3Length(&r1_0x2C);
    if (length < 1.0f)
    {
        xVec3Copy(&r1_0x2C, NPCC_rightDir(npc));
    }
    else
    {
        xVec3SMulBy(&r1_0x2C, 1.0f / length);
    }

    xVec3Sub(&r1_0x20, xEntGetPos(&globals.player.ent), npc->Pos());
    length = xVec3Length(&r1_0x20);
    if (length < 1.0f)
    {
        xVec3Copy(&r1_0x20, NPCC_rightDir(&globals.player.ent));
    }
    else
    {
        xVec3SMulBy(&r1_0x20, 1.0f / length);
    }

    xVec3SMul(&dir_dest, &r1_0x20, -1.0f);
    npc->ThrottleAdjust(dt, 6.0f, -1.0f);
    NPCC_ang_toXZDir(npc->frame->rot.angle + (npc->TurnToFace(dt, &dir_dest, PI * 4)), &dir);
    npc->ThrottleApply(dt, &dir, 0);
}

S32 zNPCGoalAlertFodBomb::Enter(F32 dt, void* updCtxt)
{
    zNPCFodBomb* npc = (zNPCFodBomb*)(psyche->clt_owner);
    flg_attack = 0;
    tmr_nextping = 0.0f;
    alertbomb = FODBOMB_ALERT_NOTICE;
    npc->BlinkerReset();
    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalAlertFodBomb::Resume(F32 dt, void* updCtxt)
{
    flg_info |= 2;
    return zNPCGoalCommon::Resume(dt, updCtxt);
}

S32 zNPCGoalAlertFodBomb::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn)
{
    S32 nextgoal = 0;
    zNPCFodBomb* npc = (zNPCFodBomb*)(psyche->clt_owner);
    zNPCGoalTaunt* taunt;
    en_alertbomb old_alertbomb;
    S32 subenter;
    F32 tym_countdown;
    F32 pct_remain;
    zNPCGoalAfterlife* wanna;

    if (globals.player.Health < 1)
    {
        taunt = (zNPCGoalTaunt*)(psyche->FindGoal(NPC_GOAL_TAUNT));
        taunt->LoopCountSet(1000);
        *trantype = GOAL_TRAN_PUSH;
        nextgoal = NPC_GOAL_TAUNT;
    }
    else if (globals.player.DamageTimer > 0.5f)
    {
        *trantype = GOAL_TRAN_PUSH;
        nextgoal = NPC_GOAL_TAUNT;
    }
    else if (npc->SomethingWonderful() != 0)
    {
        *trantype = GOAL_TRAN_SET;
        nextgoal = NPC_GOAL_IDLE;
    }
    else if (!npc->arena.IncludesPlayer(0, 0))
    {
        *trantype = GOAL_TRAN_SET;
        nextgoal = NPC_GOAL_IDLE;
    }
    if (*trantype != GOAL_TRAN_NONE)
    {
        return nextgoal;
    }
    old_alertbomb = alertbomb;
    subenter = flg_info & 2;
    flg_info &= 0xFFFFFFF9;
    tym_countdown = 6.0f;
    if (zGameExtras_CheatFlags() & 0x800)
    {
        tym_countdown = 4.0f;
    }
    switch (alertbomb)
    {
    case FODBOMB_ALERT_NOTICE:
        alertbomb = FODBOMB_ALERT_SONAR;
        *trantype = GOAL_TRAN_PUSH;
        nextgoal = NPC_GOAL_NOTICE;
        break;
    case FODBOMB_ALERT_SONAR:
        if (subenter)
        {
            DoAutoAnim(NPC_GSPOT_STARTALT, 0);
            tmr_countdown = tym_countdown;
            tmr_nextping = 2.0f;
            npc->BlinkerReset();
        }
        tym_countdown = (tmr_countdown / tym_countdown);
        pct_remain = CLAMP(tym_countdown, 0.0f, 1.0f);
        npc->BlinkerUpdate(dt, pct_remain);
        if (npc->arena.IncludesNPC(npc, 0, 0) == 0)
        {
            alertbomb = FODBOMB_ALERT_TERMINAL;
        }
        else
        {
            SonarHoming(dt);
            if ((tmr_nextping < 0.0f) ? 1 : 0)
            {
                npc->SndPlayRandom(NPC_STYP_WARNBANG);
                if (tmr_countdown > 2.0f)
                {
                    tmr_nextping = 2.0f;
                }
                else
                {
                    tmr_nextping = 1.0f;
                }
            }
            else
            {
                tmr_nextping = MAX(-1.0f, (tmr_nextping - dt));
            }
            if (tmr_countdown < 0.0f)
            {
                alertbomb = FODBOMB_ALERT_TERMINAL;
            }
            tmr_countdown = MAX(-1.0f, (tmr_countdown - dt));
        }
        break;
    case FODBOMB_ALERT_TERMINAL:
        Detonate();
        wanna = (zNPCGoalAfterlife*)(psyche->FindGoal(NPC_GOAL_AFTERLIFE));
        wanna->DieWithAWhimper();
        *trantype = GOAL_TRAN_SET;
        nextgoal = NPC_GOAL_AFTERLIFE;
        break;
    }
    if (alertbomb != old_alertbomb)
    {
        flg_info |= 2;
    }
    if (*trantype != GOAL_TRAN_NONE)
    {
        return nextgoal;
    }
    else
    {
        return xGoal::Process(trantype, dt, updCtxt, NULL);
    }
    return nextgoal;
}

void zNPCGoalAlertFodBomb::Detonate()
{
    zNPCFodBomb* npc = *(zNPCFodBomb**)(&psyche->clt_owner);
    npc->SndPlayRandom(NPC_STYP_ATTACK);
    NPCHazard* haz = HAZ_Acquire();
    if (haz != NULL)
    {
        haz->ConfigHelper(NPC_HAZ_FODBOMB);
        haz->SetNPCOwner(npc);
        xVec3* center = xEntGetCenter(npc);
        haz->Start(center, -1.0f);
    }
}

// TODO: Cleanup local vars
void zNPCGoalAlertFodBomb::SonarHoming(F32 dt)
{
    // The var length was not in dwarf. copied from other functions
    zNPCRobot* npc = (zNPCRobot*)(this->psyche->clt_owner);
    //xVec3 pos_plyr;
    xVec3 dir_dest;
    F32 spd_pursuit;
    F32 acc_pursuit;

    xVec3 xStack_60;
    xVec3 xStack_6c;
    xVec3 xStack_78;
    xVec3 xStack_84;
    xVec3 xStack_90;
    xVec3 xStack_9c;
    xVec3 dir;
    //F32 length;
    //F32 rot;

    zEntPlayer_PredictPos(&xStack_60, 0.5f, 1.0f, 0);

    if (npc->XZDstSqToPlayer(0, 0) < npc->XZDstSqToPos(&xStack_60, 0, 0))
    {
        xVec3Copy(&xStack_60, xEntGetPos(&globals.player.ent));
    }

    xVec3Sub(&xStack_6c, &xStack_60, npc->arena.Pos());

    F32 fVar4 = xVec3Length(&xStack_6c);
    if (fVar4 < 1.0f)
    {
        xVec3Copy(&xStack_6c, NPCC_faceDir(&globals.player.ent));
    }
    else
    {
        xVec3SMulBy(&xStack_6c, 1.0f / fVar4);
    }

    xVec3Cross(&xStack_78, &g_Y3, &xStack_6c);
    xVec3Sub(&xStack_84, xEntGetPos(&globals.player.ent), npc->Pos());

    fVar4 = xVec3Length(&xStack_84);
    if (fVar4 < 1.0f)
    {
        xVec3Copy(&xStack_84, NPCC_rightDir(&globals.player.ent));
    }
    else
    {
        xVec3SMulBy(&xStack_84, 1.0f / fVar4);
    }

    xVec3Sub(&xStack_90, npc->arena.Pos(), npc->zNPCCommon::Pos());

    fVar4 = xVec3Length(&xStack_90);
    if (fVar4 < 1.0f)
    {
        xVec3Copy(&xStack_90, NPCC_rightDir(npc));
    }
    else
    {
        xVec3SMulBy(&xStack_90, 1.0f / fVar4);
    }

    xVec3Dot(&xStack_90, &xStack_84);
    xVec3Copy(&xStack_9c, &xStack_84);

    fVar4 = 4.0f;
    F32 fVar6 = 1.0f;
    F32 spd_turnrate = DEG2RAD(135);
    if (zGameExtras_CheatFlags() & 0x800)
    {
        fVar4 = 6.0f;
        spd_turnrate = 2 * PI;
        fVar6 = 6.0f;
    }

    npc->ThrottleAdjust(dt, fVar4, fVar6);
    fVar4 = (npc->TurnToFace(dt, &xStack_9c, spd_turnrate));
    NPCC_ang_toXZDir(npc->frame->rot.angle + fVar4, &dir);
    npc->ThrottleApply(dt, &dir, 0);
}

S32 zNPCGoalAlertFodBzzt::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn)
{
    en_alertbzzt old_alertbzzt;
    S32 nextgoal = 0;
    zNPCFodBzzt* npc = (zNPCFodBzzt*)(psyche->clt_owner);
    zNPCGoalTaunt* taunt;
    S32 subenter;
    zNPCGoalAfterlife* wanna;
    if (globals.player.Health < 1)
    {
        taunt = (zNPCGoalTaunt*)(psyche->FindGoal(NPC_GOAL_TAUNT));
        taunt->LoopCountSet(1000);
        *trantype = GOAL_TRAN_PUSH;
        nextgoal = NPC_GOAL_TAUNT;
    }
    else if (globals.player.DamageTimer > 0.5f)
    {
        *trantype = GOAL_TRAN_PUSH;
        nextgoal = NPC_GOAL_TAUNT;
        zNPC_SNDStop(eNPCSnd_FodBzztAttack);
    }
    else if (npc->SomethingWonderful() != 0)
    {
        *trantype = GOAL_TRAN_SET;
        nextgoal = NPC_GOAL_IDLE;
    }
    else if (!(npc->tmr_hokeypokey < 0))
    {
        *trantype = GOAL_TRAN_PUSH;
        nextgoal = NPC_GOAL_HOKEYPOKEY;
    }
    else if (!npc->arena.IncludesPlayer(0, 0))
    {
        *trantype = GOAL_TRAN_SET;
        nextgoal = NPC_GOAL_IDLE;
    }
    if (*trantype != GOAL_TRAN_NONE)
    {
        return nextgoal;
    }
    old_alertbzzt = alertbzzt;
    subenter = flg_info & 2;
    flg_info &= 0xFFFFFFF9;
    if (alertbzzt == FODBZZT_ALERT_ARENA)
    {
        alertbzzt = FODBZZT_ALERT_CHASE;
        old_alertbzzt = FODBZZT_ALERT_ARENA;
        subenter = 1;
    }
    switch (alertbzzt)
    {
    case FODBZZT_ALERT_NOTICE:
        alertbzzt = FODBZZT_ALERT_CHASE;
        *trantype = GOAL_TRAN_PUSH;
        nextgoal = NPC_GOAL_NOTICE;
        zNPC_SNDPlay3D(eNPCSnd_FodBzztAttack, npc);
        break;
    case FODBZZT_ALERT_ARENA:
        if (subenter)
        {
            DoAutoAnim(NPC_GSPOT_STARTALT, 0);
            ToggleOrbit();
        }
        npc->FacePlayer(dt, 3 * PI);
        GetInArena(dt);
        DeathRayUpdate(dt);
        break;
    case FODBZZT_ALERT_CHASE:
        if (subenter)
        {
            alertbzzt = FODBZZT_ALERT_CHASE;
            DoAutoAnim(NPC_GSPOT_STARTALT, 0);
        }
        OrbitPlayer(dt);
        DeathRayUpdate(dt);
        break;
    }
    if (alertbzzt != old_alertbzzt)
    {
        flg_info |= 2;
    }
    if (*trantype != GOAL_TRAN_NONE)
    {
        return nextgoal;
    }
    else
    {
        return xGoal::Process(trantype, dt, updCtxt, NULL);
    }
    return nextgoal;
}

S32 zNPCGoalAlertFodBzzt::Enter(F32 dt, void* updCtxt)
{
    zNPCFodBzzt::cnt_alerthokey++;
    this->flg_alert = 0;
    this->flg_alert |= 2 - (xrand() >> 0x17 & 1);
    this->alertbzzt = FODBZZT_ALERT_NOTICE;
    this->tmr_warmup = 1.25f;
    this->len_laser = 50.0f;
    this->cnt_nextlos = 0;
    this->cnt_inContact = 0;
    xVec3Copy(&this->pos_laserSource, &g_O3);
    xVec3Copy(&this->pos_laserTarget, &g_O3);

    return zNPCGoalCommon::Enter(dt, updCtxt);
}

// Equivalent. Weirdness with reloading zNPCFodBzzt::cnt_alerthokey and regalloc.
S32 zNPCGoalAlertFodBzzt::Exit(F32 dt, void* updCtxt)
{
    zNPCFodBzzt::cnt_alerthokey--;
    zNPCFodBzzt::cnt_alerthokey &= ~(zNPCFodBzzt::cnt_alerthokey >> 31);

    zNPC_SNDStop(eNPCSnd_FodBzztAttack);
    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalAlertFodBzzt::Suspend(F32 dt, void* updCtxt)
{
    zNPC_SNDStop(eNPCSnd_FodBzztAttack);
    return xGoal::Suspend(dt, updCtxt);
}

S32 zNPCGoalAlertFodBzzt::Resume(F32 dt, void* updCtxt)
{
    zNPCFodBzzt* npc = (zNPCFodBzzt*)(psyche->clt_owner);
    flg_alert &= 0xFFFFFFFC;
    flg_alert = (-((xrand() >> 0x17) & 1) + 2) | flg_alert;
    tmr_warmup = 1.25;
    len_laser = 50.0;
    cnt_nextlos = 0;
    cnt_inContact = 0;
    xVec3Copy(&pos_laserSource, &g_O3);
    xVec3Copy(&pos_laserTarget, &g_O3);
    npc->flg_xtrarend &= 0xFFFFFFFE;
    zNPC_SNDPlay3D(eNPCSnd_FodBzztAttack, npc);
    return zNPCGoalCommon::Resume(dt, updCtxt);
}

void zNPCGoalAlertFodBzzt::ToggleOrbit()
{
    if (flg_alert & 1)
    {
        flg_alert &= -2;
        flg_alert |= 2;
    }
    else
    {
        flg_alert |= 1;
        flg_alert &= -3;
    }
}

void zNPCGoalAlertFodBzzt::GetInArena(F32 dt)
{
    zNPCRobot* npc;
    xVec3 dir;

    npc = (zNPCRobot*)this->psyche->clt_owner;

    xVec3Sub(&dir, npc->arena.Pos(), npc->zNPCCommon::Pos());

    F32 rot = xVec3Length(&dir);

    if (rot < 1.0f)
    {
        xVec3Copy(&dir, NPCC_rightDir(npc));
    }
    else
    {
        xVec3SMulBy(&dir, 1.0f / rot);
    }

    npc->ThrottleAdjust(dt, 2.5f, -1.0f);
    npc->ThrottleApply(dt, &dir, 0);
}

void zNPCGoalAlertFodBzzt::DeathRayRender()
{
    RwRGBA unkColor = this->rgba_deathRay;
    unkColor.alpha = 0x20;

    zNPCFodBzzt::laser.ColorSet(&this->rgba_deathRay, &unkColor);
    zNPCFodBzzt::laser.Render(&this->pos_laserSource, &this->pos_laserTarget);
}

S32 zNPCGoalAlertChomper::Enter(F32 dt, void* updCtxt)
{
    zNPCCommon* npc = (zNPCCommon*)(psyche->clt_owner);
    alertchomp = CHOMPER_ALERT_NOTICE;
    npc->VelStop();
    pos_evade = g_O3;
    tmr_evade = -1.0f;
    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalAlertChomper::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn)
{
    zNPCRobot* npc = (zNPCRobot*)(psyche->clt_owner);
    S32 nextgoal = 0;
    S32 subenter;
    en_alertchomp old_alertchomp;
    F32 pct;
    if (globals.player.Health < 1)
    {
        zNPCGoalLoopAnim* taunt = (zNPCGoalLoopAnim*)psyche->FindGoal(NPC_GOAL_TAUNT);
        taunt->LoopCountSet(1000);
        *trantype = GOAL_TRAN_PUSH;
        nextgoal = NPC_GOAL_TAUNT;
    }
    else if (globals.player.DamageTimer > 0.5f)
    {
        *trantype = GOAL_TRAN_PUSH;
        nextgoal = NPC_GOAL_TAUNT;
    }
    else if (npc->SomethingWonderful() != 0)
    {
        *trantype = GOAL_TRAN_SET;
        nextgoal = NPC_GOAL_IDLE;
    }
    else if (!npc->arena.IncludesPlayer(0, 0))
    {
        *trantype = GOAL_TRAN_SET;
        nextgoal = NPC_GOAL_IDLE;
    }
    if (*trantype != GOAL_TRAN_NONE)
    {
        return nextgoal;
    }
    old_alertchomp = alertchomp;
    subenter = flg_info & 2;
    flg_info &= 0xFFFFFFF9;
    pct = npc->arena.PctFromHome(npc->Pos());
    if (pct > 1.0f)
    {
        alertchomp = CHOMPER_ALERT_ARENA;
        DoAutoAnim(NPC_GSPOT_STARTALT, 0);
    }
    else if ((alertchomp == 1) && (pct < 0.5f))
    {
        alertchomp = CHOMPER_ALERT_CHASE;
    }
    switch (alertchomp)
    {
    case CHOMPER_ALERT_NOTICE:
        alertchomp = CHOMPER_ALERT_CHASE;
        nextgoal = NPC_GOAL_NOTICE;
        *trantype = GOAL_TRAN_PUSH;
        break;
    case CHOMPER_ALERT_ARENA:
        GetInArena(dt);
        break;
    case CHOMPER_ALERT_CHASE:
        if (subenter != 0)
        {
            DoAutoAnim(NPC_GSPOT_STARTALT, 0);
        }
        CirclePlayer(dt);
        if ((CheckSpot(dt) != 0) && !(globals.player.DamageTimer > 0.0f))
        {
            alertchomp = CHOMPER_ALERT_EVADE;
            nextgoal = NPC_GOAL_ATTACKCHOMPER;
            *trantype = GOAL_TRAN_PUSH;
        }
        break;
    case CHOMPER_ALERT_EVADE:
        if (subenter != 0)
        {
            if (CalcEvadePos(&pos_evade) == 0)
            {
                alertchomp = CHOMPER_ALERT_CHASE;
                break;
            }
            F32 fVar3 = xsqrt(npc->XZDstSqToPos(&pos_evade, NULL, NULL)) / 2.5f;
            tmr_evade = CLAMP(fVar3, 1.0f, 2.0f);
            DoAutoAnim(NPC_GSPOT_STARTALT, 0);
        }
        if (tmr_evade < 0.0f)
        {
            alertchomp = CHOMPER_ALERT_CHASE;
        }
        tmr_evade = MAX(-1.0f, (tmr_evade - dt));
        if (MoveEvadePos(&pos_evade, dt))
        {
            alertchomp = CHOMPER_ALERT_CHASE;
        }
        break;
    }
    if (alertchomp != old_alertchomp)
    {
        flg_info |= 2;
    }
    if (*trantype != GOAL_TRAN_NONE)
    {
        return nextgoal;
    }
    return nextgoal = xGoal::Process(trantype, dt, updCtxt, NULL);
}

void zNPCGoalAlertChomper::CirclePlayer(F32 dt)
{
    zNPCRobot* npc = (zNPCRobot*)this->psyche->clt_owner;
    xVec3 pos_plyr;
    xVec3 dir_plyr;

    zEntPlayer_PredictPos(&pos_plyr, 1.3f, 1.0f, 0);

    if (npc->XZDstSqToPlayer(0, 0) < npc->XZDstSqToPos(&pos_plyr, 0, 0))
    {
        xVec3Copy(&pos_plyr, xEntGetPos(&globals.player.ent));
    }

    F32 rot;
    npc->XZVecToPlayer(&dir_plyr, NULL);

    F32 length = xVec3Length(&dir_plyr);
    if (length < 1.0f)
    {
        xVec3Copy(&dir_plyr, NPCC_rightDir(&globals.player.ent));
    }
    else
    {
        xVec3SMulBy(&dir_plyr, 1.0f / length);
    }

    xVec3 dir_dest = dir_plyr;
    xVec3 dir;

    npc->ThrottleAdjust(dt, 5.0f, 10.0f);
    NPCC_ang_toXZDir(npc->frame->rot.angle + (npc->TurnToFace(dt, &dir_dest, DEG2RAD(270))), &dir);
    npc->ThrottleApply(dt, &dir, 0);
}

void zNPCGoalAlertChomper::GetInArena(F32 dt)
{
    zNPCRobot* npc;
    xVec3 vec1;
    xVec3 dir_want;
    xVec3 dir;

    npc = (zNPCRobot*)this->psyche->clt_owner;

    xVec3Sub(&vec1, npc->arena.Pos(), npc->zNPCCommon::Pos());

    F32 rot = xVec3Length(&vec1);

    if (rot < 1.0f)
    {
        xVec3Copy(&vec1, NPCC_rightDir(npc));
    }
    else
    {
        xVec3SMulBy(&vec1, 1.0f / rot);
    }

    xVec3Copy(&dir_want, &vec1);

    npc->ThrottleAdjust(dt, 2.5f, -1.0f);
    rot = npc->TurnToFace(dt, &dir_want, -1.0f);
    NPCC_ang_toXZDir(npc->frame->rot.angle + rot, &dir);
    npc->ThrottleApply(dt, &dir, 0);
}

S32 zNPCGoalAlertChomper::CheckSpot(F32 dt)
{
    S32 plyrInSpot;
    zNPCRobot* npc = (zNPCRobot*)(this->psyche->clt_owner);
    xVec3 pos_plyr;
    xVec3 dir_plyr;
    F32 dy;
    F32 dst_plyr;
    F32 dot_plyr;

    zEntPlayer_PredictPos(&pos_plyr, 1.3f, 1.0f, 1);
    dst_plyr = npc->XZDstSqToPos(&pos_plyr, NULL, NULL);
    if (npc->XZDstSqToPlayer(NULL, NULL) < dst_plyr)
    {
        pos_plyr = *xEntGetPos(&globals.player.ent);
    }
    dst_plyr = npc->XZDstSqToPos(&pos_plyr, &dir_plyr, &dy);
    dst_plyr = xsqrt(dst_plyr);
    if (xabs(dy) > 3.0f)
    {
        plyrInSpot = 0;
    }
    else if (dst_plyr < 0.3f)
    {
        plyrInSpot = 1;
    }
    else if (dst_plyr > 2.5f)
    {
        plyrInSpot = 0;
    }
    else
    {
        dir_plyr *= 1.0f / dst_plyr;
        dot_plyr = xVec3Dot(&dir_plyr, NPCC_faceDir(npc));
        plyrInSpot = (dot_plyr < 0.86f) ? 0 : 1;
    }
    return plyrInSpot;
}

S32 zNPCGoalAlertHammer::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn)
{
    zNPCRobot* npc = (zNPCRobot*)(psyche->clt_owner);
    S32 nextgoal = 0;
    S32 subenter;
    en_alertham old_alertham;
    if (globals.player.Health < 1)
    {
        zNPCGoalLoopAnim* taunt = (zNPCGoalLoopAnim*)psyche->FindGoal(NPC_GOAL_TAUNT);
        taunt->LoopCountSet(1000);
        *trantype = GOAL_TRAN_PUSH;
        nextgoal = NPC_GOAL_TAUNT;
    }
    else if (globals.player.DamageTimer > 0.0f)
    {
        *trantype = GOAL_TRAN_PUSH;
        nextgoal = NPC_GOAL_TAUNT;
    }
    else if (npc->SomethingWonderful() != 0)
    {
        *trantype = GOAL_TRAN_SET;
        nextgoal = NPC_GOAL_IDLE;
    }
    else if (!npc->arena.IncludesPlayer(0, 0))
    {
        *trantype = GOAL_TRAN_SET;
        nextgoal = NPC_GOAL_IDLE;
    }
    if (*trantype != GOAL_TRAN_NONE)
    {
        return nextgoal;
    }
    old_alertham = alertham;
    subenter = flg_info & 2;
    flg_info &= 0xFFFFFFF9;
    switch (alertham)
    {
    case HAMMER_ALERT_NOTICE:
        if (subenter)
        {
            DoAutoAnim(NPC_GSPOT_RESUME, 0);
        }
        alertham = HAMMER_ALERT_CHASE;
        break;
    case HAMMER_ALERT_BEGIN:
        alertham = HAMMER_ALERT_CHASE;
        break;
    case HAMMER_ALERT_CHASE:
        if ((PlayerInSpot(dt) != 0) && !(globals.player.DamageTimer > 0.0f))
        {
            alertham = HAMMER_ALERT_WHAM;
            break;
        }
        if (subenter)
        {
            DoAutoAnim(NPC_GSPOT_STARTALT, 0);
            tmr_alertham = 0.0f;
        }
        MoveChase(dt);
        NPCC_TmrCycle(&tmr_alertham, dt, 1.0);
        break;
    case HAMMER_ALERT_WHAM:
        alertham = HAMMER_ALERT_EVADE;
        nextgoal = NPC_GOAL_ATTACKHAMMER;
        *trantype = GOAL_TRAN_PUSH;
        break;
    case HAMMER_ALERT_EVADE:
        if (subenter)
        {
            tmr_alertham = 0.25f;
        }
        if (tmr_alertham < 0.0f)
        {
            alertham = HAMMER_ALERT_CHASE;
        }
        else
        {
            MoveEvade(dt);
            npc->FacePlayer(dt, 3 * PI);
            tmr_alertham = MAX(-1.0f, (tmr_alertham - dt));
            if (subenter)
            {
                DoAutoAnim(NPC_GSPOT_STARTALT, 0);
            }
        }
        break;
    }
    if (alertham != old_alertham)
    {
        flg_info |= 2;
    }
    if (*trantype != GOAL_TRAN_NONE)
    {
        return nextgoal;
    }
    return xGoal::Process(trantype, dt, updCtxt, NULL);
}

S32 zNPCGoalAlertHammer::Enter(F32 dt, void* updCtxt)
{
    flg_attack = 0;
    alertham = HAMMER_ALERT_NOTICE;

    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalAlertHammer::Exit(F32 dt, void* updCtxt)
{
    zNPCHammer* npc = ((zNPCHammer*)(psyche->clt_owner));
    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalAlertHammer::PlayerInSpot(F32 dt)
{
    // TODO: Variable names.

    S32 plyrInSpot;
    zNPCRobot* npc;

    xVec3 r1_0x30;
    xVec3 r1_0x24;
    xVec3 r1_0x18;
    xVec3 r1_0x0C;

    F32 f0;
    F32 f1;
    F32 f2;
    F32 f3;

    plyrInSpot = 0;
    npc = (zNPCRobot*)(psyche->clt_owner);
    f1 = xsqrt(npc->XZDstSqToPlayer(&r1_0x30, &f2));
    f2 = __fabs(f2);
    if (f1 < 2.25f)
    {
        return 1;
    }
    else if (f2 > 3.75f)
    {
        return 0;
    }
    else if (f1 < 0.4f)
    {
        return 1;
    }
    else
    {
        r1_0x30 *= (1.0f / f1);
        if (xVec3Dot(&r1_0x30, (xVec3*)NPCC_faceDir(npc)) < 0.5f)
        {
            return 0;
        }
        else
        {
            xVec3SMul(&r1_0x24, (xVec3*)NPCC_faceDir(npc), 3.5f);
            xVec3AddTo(&r1_0x24, (xVec3*)npc->Pos());
            xVec3Copy(&r1_0x18, (xVec3*)xEntGetPos(&globals.player.ent));
            f0 = xsqrt(NPCC_DstSq(&r1_0x24, (xVec3*)xEntGetPos(&globals.player.ent), NULL));
            f3 = MAX(npc->spd_throttle, 12.0f);
            zEntPlayer_PredictPos(&r1_0x18, MIN((f0 / f3) + 0.5f, 2.0f), 1.0f, 0);
            xVec3Sub(&r1_0x0C, &r1_0x18, &r1_0x24);
            if ((F32)__fabs(r1_0x0C.y) < 2.5f)
            {
                r1_0x0C.y = 0.0f;
                if (xVec3Length2(&r1_0x0C) < 1.25f)
                {
                    plyrInSpot = 1;
                }
            }
        }
    }
    return plyrInSpot;
}

void zNPCGoalAlertHammer::MoveEvade(F32 dt)
{
    // TODO: Variable names.
    zNPCRobot* npc = (zNPCRobot*)this->psyche->clt_owner;
    xVec3 r1_0x14;
    xVec3 r1_0x08;
    F32 length;

    xVec3Sub(&r1_0x14, npc->arena.Pos(), npc->Pos());
    length = xVec3Length(&r1_0x14);
    if (length < 1.0f)
    {
        xVec3Copy(&r1_0x14, NPCC_rightDir(npc));
    }
    else
    {
        xVec3SMulBy(&r1_0x14, 1.0f / length);
    }

    xVec3Sub(&r1_0x08, xEntGetPos(&globals.player.ent), npc->Pos());
    length = xVec3Length(&r1_0x08);
    if (length < 0.5f)
    {
        xVec3Copy(&r1_0x08, NPCC_rightDir(&globals.player.ent));
    }
    else
    {
        xVec3SMulBy(&r1_0x08, 1.0f / length);
    }

    xVec3SMulBy(&r1_0x08, -1.0f);
    npc->ThrottleAdjust(dt, 7.0f, 14.0f);
    npc->ThrottleApply(dt, &r1_0x08, 0);
}

S32 zNPCGoalAlertTarTar::Enter(F32 dt, void* updCtxt)
{
    zNPCTarTar* npc = ((zNPCTarTar*)(psyche->clt_owner));
    flg_attack = 0;
    alerttart = TARTAR_ALERT_BEGIN;
    hoppy = HOPPY_PATTERN_START;
    tmr_reload = 0.0f;
    npc->VelStop();
    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalAlertTarTar::Resume(F32 dt, void* updCtxt)
{
    zNPCTarTar* npc = ((zNPCTarTar*)(psyche->clt_owner));
    npc->VelStop();
    flg_info |= 2;
    return zNPCGoalCommon::Resume(dt, updCtxt);
}

S32 zNPCGoalAlertTarTar::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn)
{
    S32 nextgoal;
    zNPCTarTar* npc;
    en_alerttart old_alerttart;
    F32 tym_reload;
    xVec3 dir_HtoP;
    F32 dsq;
    S32 subenter;
    zNPCGoalTaunt* taunt;
    F32 rad;

    npc = (zNPCTarTar*)(psyche->clt_owner);
    subenter = flg_info & 2;
    old_alerttart = alerttart;
    flg_info &= ~6;
    nextgoal = 0;
    tym_reload = 5.0f;
    dsq = npc->arena.DstSqFromHome(xEntGetPos(&globals.player.ent), &dir_HtoP);
    if ((npc->arena.Radius(1.0f) * 1.5f) > npc->cfg_npc->rad_attack)
    {
        rad = npc->arena.Radius(1.0f) * 1.5f;
    }
    else
    {
        rad = npc->cfg_npc->rad_attack;
    }
    if (globals.player.Health < 1)
    {
        taunt = (zNPCGoalTaunt*)(psyche->FindGoal(NPC_GOAL_TAUNT));
        taunt->LoopCountSet(1000);
        *trantype = GOAL_TRAN_PUSH;
        nextgoal = NPC_GOAL_TAUNT;
    }
    else if (globals.player.DamageTimer > 0.5f)
    {
        *trantype = GOAL_TRAN_PUSH;
        nextgoal = NPC_GOAL_TAUNT;
    }
    else if (npc->SomethingWonderful() != 0)
    {
        *trantype = GOAL_TRAN_SET;
        nextgoal = NPC_GOAL_IDLE;
    }
    else if (!*(U8*)(&npc->npcset.allowDetect))
    {
        *trantype = GOAL_TRAN_SET;
        nextgoal = NPC_GOAL_IDLE;
    }
    else if (dsq > SQ(rad))
    {
        *trantype = GOAL_TRAN_SET;
        nextgoal = NPC_GOAL_IDLE;
    }
    if (*trantype != GOAL_TRAN_NONE)
    {
        return nextgoal;
    }
    if (alerttart != TARTAR_ALERT_ARENA && (npc->arena.PctFromHome(npc->Pos()) > 1.0f))
    {
        alerttart = TARTAR_ALERT_ARENA;
        DoAutoAnim(NPC_GSPOT_STARTALT, 0);
    }
    if (npc->DBG_IsNormLog(eNPCDCAT_Thirteen, -1))
    {
        xDrawSetColor(g_YELLOW);
        NPCC_DrawPlayerPredict(5, 1.0f, 4.0f);
    }
    switch (alerttart)
    {
    case TARTAR_ALERT_NOTICE:
        npc->VelStop();
        alerttart = TARTAR_ALERT_BEGIN;
        nextgoal = NPC_GOAL_NOTICE;
        *trantype = GOAL_TRAN_PUSH;
        break;
    case TARTAR_ALERT_ARENA:
        GetInArena(dt);
        if (npc->arena.PctFromHome(npc->Pos()) < 0.5f)
        {
            alerttart = TARTAR_ALERT_BEGIN;
        }
        break;
    case TARTAR_ALERT_BEGIN:
        npc->VelStop();
        alerttart = (en_alerttart)3;
        hoppy = (en_hoppy)0;
        break;
    case TARTAR_ALERT_READY:
        npc->VelStop();
        if (subenter)
        {
            DoAutoAnim(NPC_GSPOT_RESUME, 0);
        }
        nextgoal = HoppyUpdate(trantype, dt);
        if (*trantype != GOAL_TRAN_NONE)
        {
            return nextgoal;
        }
        break;
    }
    if (alerttart != old_alerttart)
    {
        flg_info |= 2;
    }
    if (*trantype != GOAL_TRAN_NONE)
    {
        return nextgoal;
    }
    return xGoal::Process(trantype, dt, updCtxt, NULL);
}

S32 zNPCGoalAlertTarTar::NPCMessage(NPCMsg* mail)
{
    S32 snarfed = 1;
    zNPCRobot* npc = (zNPCRobot*)(psyche->clt_owner);
    xPsyche* psy = GetPsyche();
    switch (mail->msgid)
    {
    case NPC_MID_DAMAGE:
        if ((psy->GIDInStack(NPC_GOAL_WOUND) != NULL) || (psy->GIDOfPending() == NPC_GOAL_WOUND))
        {
            break;
        }

        if ((npc->hitpoints > 1) && (mail->infotype == NPC_MDAT_DAMAGE))
        {
            if ((mail->dmgdata.dmg_type == DMGTYP_SIDE) ||
                (mail->dmgdata.dmg_type == DMGTYP_HITBYTOSS))
            {
                alerttart = TARTAR_ALERT_READY;
                flg_info |= 2;
                psy->GoalPush(NPC_GOAL_WOUND, 0);
                break;
            }
        }

        snarfed = 0;
        break;
    default:
        snarfed = 0;
        break;
    }
    return snarfed;
}

void zNPCGoalAlertTarTar::GetInArena(F32 dt)
{
    zNPCRobot* npc;
    xVec3 vec1;
    xVec3 dir_want;
    xVec3 dir;

    npc = (zNPCRobot*)this->psyche->clt_owner;

    xVec3Sub(&vec1, npc->arena.Pos(), npc->zNPCCommon::Pos());

    F32 rot = xVec3Length(&vec1);

    if (rot < 1.0f)
    {
        xVec3Copy(&vec1, NPCC_rightDir(npc));
    }
    else
    {
        xVec3SMulBy(&vec1, 1.0f / rot);
    }

    xVec3Copy(&dir_want, &vec1);

    npc->ThrottleAdjust(dt, 2.0f, -1.0f);
    rot = npc->TurnToFace(dt, &dir_want, -1.0f);
    NPCC_ang_toXZDir(npc->frame->rot.angle + rot, &dir);
    npc->ThrottleApply(dt, &dir, 0);
}

S32 zNPCGoalAlertGlove::Enter(F32 dt, void* updCtxt)
{
    zNPCRobot* npc = (zNPCRobot*)(psyche->clt_owner);
    CalcAttackVector();
    npc->flg_vuln &= 0xffefffff;
    npc->flg_vuln &= 0x7dfeffff;
    tmr_minAttack = 1.0f;
    zNPC_SNDPlay3D(eNPCSnd_GloveAttack, npc);
    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalAlertGlove::Exit(F32 dt, void* updCtxt)
{
    zNPCGlove* npc = ((zNPCGlove*)(psyche->clt_owner));
    npc->flg_vuln |= 0x00100000;
    npc->flg_vuln |= 0x82010000;
    zNPC_SNDStop(eNPCSnd_GloveAttack);
    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalAlertGlove::Suspend(F32 dt, void* updCtxt)
{
    zNPCGlove* npc = ((zNPCGlove*)(psyche->clt_owner));
    npc->flg_vuln |= 0x00100000;
    npc->flg_vuln |= 0x82010000;
    zNPC_SNDStop(eNPCSnd_GloveAttack);
    return xGoal::Suspend(dt, updCtxt);
}

S32 zNPCGoalAlertGlove::Resume(F32 dt, void* updCtxt)
{
    zNPCCommon* npc = (zNPCCommon*)(psyche->clt_owner);
    npc->flg_vuln &= 0xffefffff;
    npc->flg_vuln &= 0x7dfeffff;
    tmr_minAttack = 1.0;
    zNPC_SNDPlay3D(eNPCSnd_GloveAttack, npc);
    return zNPCGoalCommon::Resume(dt, updCtxt);
}

S32 zNPCGoalAlertMonsoon::Enter(F32 dt, void* updCtxt)
{
    zNPCCommon* npc = ((zNPCCommon*)(psyche->clt_owner));
    flg_attack = 0;
    alertmony = MONSOON_ALERT_NOTICE;
    tmr_reload = 0.0;
    xVec3Copy(&pos_corner, npc->Pos());
    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalAlertMonsoon::Exit(F32 dt, void* updCtxt)
{
    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalAlertMonsoon::Resume(F32 dt, void* updCtxt)
{
    alertmony = MONSOON_ALERT_BEGIN;
    flg_attack = 0;
    return zNPCGoalCommon::Resume(dt, updCtxt);
}

S32 zNPCGoalAlertMonsoon::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn)
{
    S32 nextgoal;
    zNPCRobot* npc;
    en_alertmony old_alertmony;
    F32 tym_reload;
    xVec3 dir_HtoP;
    F32 dsq;
    S32 subenter;
    zNPCGoalTaunt* taunt;
    F32 rad;
    npc = (zNPCRobot*)(psyche->clt_owner);
    nextgoal = 0;
    tym_reload = 2.5f;
    dsq = npc->arena.DstSqFromHome(xEntGetPos(&globals.player.ent), &dir_HtoP);
    if ((npc->arena.Radius(1.0f) * 1.5f) > npc->cfg_npc->rad_attack)
    {
        rad = npc->arena.Radius(1.0f) * 1.5f;
    }
    else
    {
        rad = npc->cfg_npc->rad_attack;
    }
    if (globals.player.Health < 1)
    {
        taunt = (zNPCGoalTaunt*)(psyche->FindGoal(NPC_GOAL_TAUNT));
        taunt->LoopCountSet(1000);
        *trantype = GOAL_TRAN_PUSH;
        nextgoal = NPC_GOAL_TAUNT;
    }
    else if (globals.player.DamageTimer > 0.5f)
    {
        *trantype = GOAL_TRAN_PUSH;
        nextgoal = NPC_GOAL_TAUNT;
    }
    else if (npc->SomethingWonderful() != 0)
    {
        *trantype = GOAL_TRAN_SET;
        nextgoal = NPC_GOAL_IDLE;
    }
    else if (!*(U8*)(&npc->npcset.allowDetect))
    {
        *trantype = GOAL_TRAN_SET;
        nextgoal = NPC_GOAL_IDLE;
    }
    else if (!npc->arena.IsReady() || dsq > SQ(rad))
    {
        *trantype = GOAL_TRAN_SET;
        nextgoal = NPC_GOAL_IDLE;
    }
    if (*trantype != GOAL_TRAN_NONE)
    {
        return nextgoal;
    }
    subenter = flg_info & 2;
    old_alertmony = alertmony;
    flg_info &= ~6;
    if (alertmony != (en_alertmony)SLICK_ALERT_ARENA && (npc->arena.PctFromHome(npc->Pos()) > 1.1f))
    {
        alertmony = (en_alertmony)SLICK_ALERT_ARENA;
        subenter = 1;
    }
    switch (alertmony)
    {
    case MONSOON_ALERT_NOTICE:
        alertmony = MONSOON_ALERT_BEGIN;
        npc->FacePlayer(dt, 3 * PI);
        *trantype = GOAL_TRAN_PUSH;
        nextgoal = NPC_GOAL_NOTICE;
        break;
    case MONSOON_ALERT_ARENA:
        npc->FacePlayer(dt, 3 * PI);
        npc->MoveTowardsArena(dt, 4.0f);
        if (npc->arena.PctFromHome(npc->Pos()) < 0.5f)
        {
            alertmony = MONSOON_ALERT_READY;
        }
        if (subenter)
        {
            DoAutoAnim(NPC_GSPOT_STARTALT, 0);
        }
        break;
    case MONSOON_ALERT_BEGIN:
        alertmony = MONSOON_ALERT_READY;
        break;
    case MONSOON_ALERT_READY:
        if (((tmr_reload < 0.0f) ? 1 : 0) && !(globals.player.DamageTimer > 0.0f))
        {
            alertmony = MONSOON_ALERT_SPITCLOUD;
            break;
        }
        else
        {
            tmr_reload = MAX(-1.0f, (tmr_reload - dt));
            if (subenter != 0)
            {
                DoAutoAnim(NPC_GSPOT_RESUME, 0);
                npc->VelStop();
                if (!npc->arena.IncludesPos(&pos_corner, NULL, NULL))
                {
                    xVec3Copy(&pos_corner, npc->Pos());
                }
            }
            npc->FacePlayer(dt, 3 * PI);
            MoveCorner(dt);
        }
        break;
    case MONSOON_ALERT_SPITCLOUD:
        F32 rand = xurand();
        nextgoal = NPC_GOAL_ATTACKMONSOON;
        tmr_reload = tym_reload + (tym_reload * (0.25f * (rand - 0.5f)));
        alertmony = MONSOON_ALERT_READY;
        *trantype = GOAL_TRAN_PUSH;
        break;
    }
    if (alertmony != old_alertmony)
    {
        flg_info |= 2;
    }
    if (*trantype != GOAL_TRAN_NONE)
    {
        return nextgoal;
    }
    return xGoal::Process(trantype, dt, updCtxt, NULL);
}

void zNPCGoalAlertMonsoon::MoveCorner(F32 dt)
{
    zNPCRobot* npc = (zNPCRobot*)(psyche->clt_owner);
    F32 ds2_corn;
    xVec3 dir_corn;
    if (*(U8*)(&npc->npcset.allowChase) && npc->arena.IsReady() && (npc->arena.Radius(1.0f) > 2.0f))
    {
        ds2_corn = npc->XYZDstSqToPos(&pos_corner, 0);
        if (ds2_corn < SQ(0.5f))
        {
            npc->CornerOfArena(&pos_corner, -1.0f);
            ds2_corn = npc->XYZDstSqToPos(&pos_corner, NULL);
        }
        if (npc->DBG_IsNormLog(eNPCDCAT_Ten, 2))
        {
            xDrawSetColor(g_BLUE);
            xDrawSphere2(&pos_corner, 0.1f, 12);
        }
        if ((tmr_reload >= 0.0f) && (tmr_reload < 1.0f))
        {
            npc->ThrottleAdjust(dt, 1.5, -1.0);
        }
        else if (ds2_corn < 2.0f)
        {
            npc->ThrottleAdjust(dt, 1.5f, -1.0f);
        }
        else
        {
            npc->ThrottleAdjust(dt, 3.5f, -1.0f);
        }
        npc->XYZVecToPos(&dir_corn, &pos_corner);
        xVec3Normalize(&dir_corn, &dir_corn);
        npc->ThrottleApply(dt, &dir_corn, 0);
    }
}

S32 zNPCGoalAlertSleepy::Enter(F32 dt, void* updCtxt)
{
    zNPCRobot* npc = (zNPCRobot*)(psyche->clt_owner);
    flg_attack = 0;
    sleepattack = SLEEP_ATAK_REACT;
    npc->VelStop();
    npc->ModelAtomicShow(1, NULL);
    zNPC_SNDPlay3D(eNPCSnd_SleepyAttack, npc);
    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalAlertSleepy::Exit(F32 dt, void* updCtxt)
{
    zNPCSleepy* npc = ((zNPCSleepy*)(psyche->clt_owner));
    npc->ModelAtomicHide(1, NULL);
    zNPC_SNDStop(eNPCSnd_SleepyAttack);
    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalAlertSleepy::NPCMessage(NPCMsg* mail)
{
    S32 snarfed = 1;
    zNPCRobot* npc = (zNPCRobot*)(psyche->clt_owner);
    xPsyche* psy = xGoal::GetPsyche();

    switch (mail->msgid)
    {
    case NPC_MID_DAMAGE:
        if ((npc->hitpoints > 1) && (mail->infotype == NPC_MDAT_DAMAGE) &&
            (mail->dmgdata.dmg_type == DMGTYP_SIDE || (mail->dmgdata.dmg_type == DMGTYP_HITBYTOSS)))
        {
            this->sleepattack = SLEEP_ATAK_REACT;
            this->flg_info |= 2;
            psy->GoalPush(NPC_GOAL_WOUND, 0);
        }
        else
        {
            snarfed = 0;
        }
        break;
    default:
        snarfed = 0;
        break;
    }

    return snarfed;
}

S32 zNPCGoalAlertArf::Enter(F32 dt, void* updCtxt)
{
    alertarf = ARF_ALERT_READY;
    tmr_reload = -1.0f;
    flg_user = 1;

    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalAlertArf::Exit(F32 dt, void* updCtxt)
{
    zNPCArfArf* npc = ((zNPCArfArf*)(psyche->clt_owner));
    flg_info = 0;
    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalAlertArf::Resume(F32 dt, void* updCtxt)
{
    zNPCArfArf* npc = ((zNPCArfArf*)(psyche->clt_owner));
    flg_info |= 2;
    flg_user = 1;
    return zNPCGoalCommon::Resume(dt, updCtxt);
}

S32 zNPCGoalAlertArf::NPCMessage(NPCMsg* mail)
{
    zNPCGoalRespawn* respgoal;
    S32 snarfed = 1;
    zNPCRobot* npc = (zNPCRobot*)(psyche->clt_owner);
    xPsyche* psy = GetPsyche();

    switch (mail->msgid)
    {
    case NPC_MID_DAMAGE:
        if (npc->hitpoints <= 1)
        {
            snarfed = 0;
            break;
        }

        if (((mail->infotype != NPC_MDAT_DAMAGE)) || (psy->GIDInStack(NPC_GOAL_WOUND) != NULL) ||
            (psy->GIDOfPending() == NPC_GOAL_WOUND))
        {
            break;
        }

        alertarf = (en_alertarf)2;
        flg_info |= 2;

        if (psy->GIDOfActive() != 0x4E47523E)
        {
            psy->GoalSwap(0x4E475269, 0);
        }
        else
        {
            psy->GoalPush(0x4E475269, 0);
        }
        break;
    default:
        snarfed = 0;
        break;
    }
    return snarfed;
}

en_arfdoes zNPCGoalAlertArf::DecideAttack()
{
    en_arfdoes do_attack = ARF_DOES_NOT;
    zNPCArfArf* npc = ((zNPCArfArf*)(psyche->clt_owner));
    zNPCGoalAttackArf* atak;

    if (npc->XYZDstSqToPlayer(NULL) < SQ(3.0f))
    {
        do_attack = ARF_DOES_MELEE;
    }
    else
    {
        atak = (zNPCGoalAttackArf*)(psyche->FindGoal(NPC_GOAL_ATTACKARF));
        if (npc->AdoptADoggie() != NULL)
        {
            do_attack = ARF_DOES_LOB;
            atak->SetAttackMode(1, 0);
        }
    }

    return do_attack;
}

S32 zNPCGoalAlertPuppy::Enter(F32 dt, void* updCtxt)
{
    alertpup = PUPPY_ALERT_YAPPY;
    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalAlertPuppy::Resume(F32 dt, void* updCtxt)
{
    zNPCChomper* npc = ((zNPCChomper*)(psyche->clt_owner));
    flg_info |= 2;
    return zNPCGoalCommon::Resume(dt, updCtxt);
}

S32 zNPCGoalAlertPuppy::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn)
{
    S32 nextgoal = 0;
    en_alertpuppy old_alertpup;
    zNPCRobot* npc = (zNPCRobot*)(psyche->clt_owner);
    if (npc->SomethingWonderful() != 0)
    {
        *trantype = GOAL_TRAN_SET;
        nextgoal = NPC_GOAL_IDLE;
    }
    if (*trantype != GOAL_TRAN_NONE)
    {
        return nextgoal;
    }
    old_alertpup = alertpup;
    flg_info &= 0xFFFFFFF9;
    switch (alertpup)
    {
    case PUPPY_ALERT_YAPPY:
        alertpup = PUPPY_ALERT_CHASE;
        nextgoal = NPC_GOAL_DOGBARK;
        *trantype = GOAL_TRAN_PUSH;
        break;
    case PUPPY_ALERT_CHASE:
        alertpup = PUPPY_ALERT_ATTAAAAACK;
        nextgoal = NPC_GOAL_DOGDASH;
        *trantype = GOAL_TRAN_PUSH;
        break;
    case PUPPY_ALERT_ATTAAAAACK:
        alertpup = PUPPY_ALERT_DISAPPEAR;
        nextgoal = NPC_GOAL_DOGPOUNCE;
        *trantype = GOAL_TRAN_PUSH;
        break;
    case PUPPY_ALERT_DISAPPEAR:
        zNPCGoalAfterlife* wanna = (zNPCGoalAfterlife*)(psyche->FindGoal(NPC_GOAL_AFTERLIFE));
        wanna->DieWithAWhimper();
        *trantype = GOAL_TRAN_SET;
        nextgoal = NPC_GOAL_AFTERLIFE;
        break;
    }
    if (alertpup != old_alertpup)
    {
        flg_info |= 2;
    }
    if (*trantype != GOAL_TRAN_NONE)
    {
        return nextgoal;
    }
    return xGoal::Process(trantype, dt, updCtxt, xscn);
}

S32 zNPCGoalAlertChuck::Enter(F32 dt, void* updCtxt)
{
    zNPCCommon* npc = ((zNPCCommon*)(psyche->clt_owner));
    alertchuk = CHUCK_ALERT_NOTICE;
    npc->VelStop();
    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalAlertChuck::Resume(F32 dt, void* updCtxt)
{
    zNPCChuck* npc = ((zNPCChuck*)(psyche->clt_owner));
    flg_info |= 2;
    return zNPCGoalCommon::Resume(dt, updCtxt);
}

void zNPCGoalAlertChuck::GetInArena(F32 dt)
{
    zNPCRobot* npc;
    xVec3 vec1;
    xVec3 dir_want;
    xVec3 dir;

    npc = (zNPCRobot*)this->psyche->clt_owner;

    xVec3Sub(&vec1, npc->arena.Pos(), npc->zNPCCommon::Pos());

    F32 rot = xVec3Length(&vec1);

    if (rot < 1.0f)
    {
        xVec3Copy(&vec1, NPCC_rightDir(npc));
    }
    else
    {
        xVec3SMulBy(&vec1, 1.0f / rot);
    }

    xVec3Copy(&dir_want, &vec1);

    npc->ThrottleAdjust(dt, 4.0f, -1.0f);
    rot = npc->TurnToFace(dt, &dir_want, -1.0f);
    NPCC_ang_toXZDir(npc->frame->rot.angle + rot, &dir);
    npc->ThrottleApply(dt, &dir, 0);
}

S32 zNPCGoalAlertChuck::ZoomMove(F32 dt)
{
    S32 donemoving = 0;
    zNPCRobot* npc = (zNPCRobot*)(psyche->clt_owner);
    F32 dist;
    xVec3 dir;
    if (dst_zoom < 0.5f)
    {
        npc->ThrottleAdjust(dt, 0.5f, -1.0f);
    }
    else
    {
        npc->ThrottleAdjust(dt, 6.0f, -1.0f);
    }
    npc->XYZVecToPos(&dir, npc->arena.Pos());
    dir.x = dir_zoom.x;
    dir.z = dir_zoom.z;
    dist = xVec3Length(&dir);
    if (dist > dst_zoom)
    {
        dst_zoom = -1.0f;
    }
    else if (dist < 1e-5f)
    {
        dst_zoom = -1.0f;
    }
    else
    {
        xVec3SMulBy(&dir, (1.0f / dist));
        npc->ThrottleApply(dt, &dir, 0);
        dst_zoom =
            -((dt * npc->spd_throttle) * ((F32)__fabs(dir.x) + (F32)__fabs(dir.z)) - dst_zoom);
    }
    if (dst_zoom < 0.0f)
    {
        donemoving = 1;
    }
    return donemoving;
}

S32 zNPCGoalAlertTubelet::Enter(F32 dt, void* updCtxt)
{
    zNPCTubeSlave* npc = ((zNPCTubeSlave*)(psyche->clt_owner));
    npc->tubespot = ROBO_TUBE_MARY;
    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalAlertTubelet::Exit(F32 dt, void* updCtxt)
{
    zNPCTubelet* npc = ((zNPCTubelet*)(psyche->clt_owner));
    zNPC_SNDStop(eNPCSnd_TubeAttack);
    npc->pete_attack_last = 0;
    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalAlertTubelet::Resume(F32 dt, void* updCtxt)
{
    zNPCTubelet* npc = ((zNPCTubelet*)(psyche->clt_owner));
    npc->tubestat = TUBE_STAT_ATTACK;
    return zNPCGoalCommon::Resume(dt, updCtxt);
}

void zNPCGoalAlertTubelet::ChkPrelimTran(en_trantype* trantype, S32* nextgoal)
{
    zNPCTubelet* npc = (zNPCTubelet*)(psyche->clt_owner);

    if (globals.player.Health < 1)
    {
        zNPCGoalTaunt* taunt = ((zNPCGoalTaunt*)(psyche->FindGoal(NPC_GOAL_TAUNT)));
        taunt->LoopCountSet(1000);
        *trantype = GOAL_TRAN_PUSH;
        *nextgoal = NPC_GOAL_TAUNT;
        npc->tubestat = TUBE_STAT_DUCKLING;
    }
    else if (npc->SomethingWonderful() != 0)
    {
        *trantype = GOAL_TRAN_SET;
        *nextgoal = NPC_GOAL_IDLE;
        npc->tubestat = TUBE_STAT_DUCKLING;
    }
    else if (npc->arena.IncludesNPC(npc, 0, 0) == 0)
    {
        *trantype = GOAL_TRAN_SET;
        *nextgoal = NPC_GOAL_IDLE;
        npc->tubestat = TUBE_STAT_DUCKLING;
    }
    else if ((psyche->TimerGet(XPSY_TYMR_CURGOAL) > 0.25f) &&
             (npc->arena.IncludesPlayer(0, 0) == 0))
    {
        *trantype = GOAL_TRAN_SET;
        *nextgoal = NPC_GOAL_IDLE;
        npc->tubestat = TUBE_STAT_DUCKLING;
    }
}

S32 zNPCGoalAlertTubelet::MoveToHome(F32 dt)
{
    S32 arrived;
    zNPCRobot* npc = (zNPCRobot*)(psyche->clt_owner);
    NPCArena* arena = &npc->arena;
    F32 rad;
    F32 dst_surplus;
    xVec3 dir_home;

    rad = arena->Radius(1.0f) - 15.0f;
    if (rad < 0.0f)
    {
        rad = 0.0f;
    }

    dst_surplus = xsqrt(npc->XZDstSqToPos(arena->Pos(), &dir_home, 0));
    if (dst_surplus < (rad + 1.0f))
    {
        arrived = 1;
        npc->VelStop();
    }
    else
    {
        if (dst_surplus > (rad + 2.0f))
        {
            npc->ThrottleAdjust(dt, 7.2f, 5.5f);
        }
        else
        {
            npc->ThrottleAdjust(dt, 0.25f, 0.5f);
        }
        dir_home *= (1.0f / dst_surplus);
        npc->ThrottleApply(dt, &dir_home, 0);
        arrived = 0;
    }
    return arrived;
}

void zNPCGoalAlertTubelet::PeteAttackBegin()
{
    zNPCTubelet* npc = (zNPCTubelet*)(psyche->clt_owner);
    npc->pete_attack_last = 1;
    zNPC_SNDPlay3D(eNPCSnd_TubeAttack, npc);
}

void zNPCGoalAlertTubelet::PeteAttackParSys(F32 dt, S32 param_2)
{
    xEntFrame* iVar1;
    zNPCTubelet* iVar2;

    iVar2 = (zNPCTubelet*)(psyche->clt_owner);
    iVar1 = (iVar2->frame);
    F32 dVar3 = (iVar1->drot.angle);
    if ((F32)__fabs(dVar3) > 0.09599312f)
    {
        iVar1->drot.angle *= 0.8f;
        iVar2->frame->mode |= 0x20;
    }
    else
    {
        if ((F32)__fabs(dVar3) < 0.08726647f)
        {
            iVar1->drot.angle = -(dt * 0.0872664675116539f - dVar3);
            iVar2->frame->mode |= 0x20;
        }
        else
        {
            iVar1->mode |= 0x20;
            if (param_2 != 0)
            {
                EmitSteam(dt);
            }
        }
    }
}

S32 zNPCGoalAlertSlick::Enter(F32 dt, void* updCtxt)
{
    zNPCCommon* npc = ((zNPCCommon*)(psyche->clt_owner));
    alertslik = SLICK_ALERT_BEGIN;
    tmr_reload = -1.0f;
    npc->VelStop();
    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalAlertSlick::Resume(F32 dt, void* updCtxt)
{
    zNPCCommon* npc = ((zNPCCommon*)(psyche->clt_owner));
    npc->VelStop();
    flg_info |= 2;
    return zNPCGoalCommon::Resume(dt, updCtxt);
}

S32 zNPCGoalAlertSlick::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn)
{
    S32 nextgoal;
    zNPCSlick* npc;
    en_alertslik old_alertslik;
    F32 tym_reload;
    xVec3 dir_HtoP;
    F32 dsq;
    S32 subenter;
    zNPCGoalTaunt* taunt;
    F32 rad;
    npc = (zNPCSlick*)(psyche->clt_owner);
    subenter = flg_info & 2;
    old_alertslik = alertslik;
    flg_info &= ~6;
    nextgoal = 0;
    tym_reload = 5.0f;
    if (zGameExtras_CheatFlags() & 0x800)
    {
        tym_reload = 3.0f;
    }
    dsq = npc->arena.DstSqFromHome(xEntGetPos(&globals.player.ent), &dir_HtoP);
    if ((npc->arena.Radius(1.0f) * 1.5f) > npc->cfg_npc->rad_attack)
    {
        rad = npc->arena.Radius(1.0f) * 1.5f;
    }
    else
    {
        rad = npc->cfg_npc->rad_attack;
    }
    if (globals.player.Health < 1)
    {
        taunt = (zNPCGoalTaunt*)(psyche->FindGoal(NPC_GOAL_TAUNT));
        taunt->LoopCountSet(1000);
        *trantype = GOAL_TRAN_PUSH;
        nextgoal = NPC_GOAL_TAUNT;
    }
    else if (globals.player.DamageTimer > 0.5f)
    {
        *trantype = GOAL_TRAN_PUSH;
        nextgoal = NPC_GOAL_TAUNT;
    }
    else if (npc->SomethingWonderful() != 0)
    {
        *trantype = GOAL_TRAN_SET;
        nextgoal = NPC_GOAL_IDLE;
    }
    else if (!*(U8*)(&npc->npcset.allowDetect))
    {
        *trantype = GOAL_TRAN_SET;
        nextgoal = NPC_GOAL_IDLE;
    }
    else if (dsq > SQ(rad))
    {
        *trantype = GOAL_TRAN_SET;
        nextgoal = NPC_GOAL_IDLE;
    }
    if (*trantype != GOAL_TRAN_NONE)
    {
        return nextgoal;
    }
    if (alertslik != SLICK_ALERT_ARENA && (npc->arena.PctFromHome(npc->Pos()) > 1.0f))
    {
        alertslik = SLICK_ALERT_ARENA;
        DoAutoAnim(NPC_GSPOT_STARTALT, 0);
    }
    switch (alertslik)
    {
    case SLICK_ALERT_NOTICE:
        alertslik = SLICK_ALERT_BEGIN;
        nextgoal = NPC_GOAL_NOTICE;
        *trantype = GOAL_TRAN_PUSH;
        break;
    case SLICK_ALERT_ARENA:
        GetInArena(dt);
        if (npc->arena.PctFromHome(npc->Pos()) < 0.5f)
        {
            alertslik = SLICK_ALERT_BEGIN;
        }
        break;
    case SLICK_ALERT_BEGIN:
        alertslik = SLICK_ALERT_READY;
        DoAutoAnim(NPC_GSPOT_RESUME, 0);
        npc->FacePlayer(dt, 3 * PI);
        npc->VelStop();
        break;
    case SLICK_ALERT_READY:
        if (((tmr_reload < 0.0f) ? 1 : 0) && !(globals.player.DamageTimer > 0.0f))
        {
            F32 rand = xurand();
            nextgoal = NPC_GOAL_ATTACKSLICK;
            tmr_reload = tym_reload + (tym_reload * (0.25f * (rand - 0.5f))); // Regalloc
            *trantype = GOAL_TRAN_PUSH;
        }
        else
        {
            tmr_reload = MAX(-1.0f, (tmr_reload - dt));
            if (subenter)
            {
                DoAutoAnim(NPC_GSPOT_RESUME, 0);
                npc->VelStop();
                if (!npc->arena.IncludesPos(&pos_corner, 0, 0))
                {
                    xVec3Copy(&pos_corner, npc->Pos());
                }
            }
            npc->FacePlayer(dt, 3 * PI);
            MoveCorner(dt);
        }
        break;
    }
    if (alertslik != old_alertslik)
    {
        flg_info |= 2;
    }
    if (*trantype != GOAL_TRAN_NONE)
    {
        return nextgoal;
    }
    return xGoal::Process(trantype, dt, updCtxt, NULL);
}

S32 zNPCGoalAlertSlick::NPCMessage(NPCMsg* mail)
{
    zNPCGoalRespawn* respgoal;
    S32 snarfed;
    zNPCRobot* npc;
    xPsyche* psy;

    npc = (zNPCRobot*)(psyche->clt_owner);
    snarfed = 1;
    psy = GetPsyche();
    switch (mail->msgid)
    {
    case NPC_MID_DAMAGE:
        if ((psy->GIDInStack(NPC_GOAL_WOUND) != NULL) || (psy->GIDOfPending() == NPC_GOAL_WOUND))
        {
            break;
        }

        if ((npc->hitpoints > 1) && (mail->infotype == NPC_MDAT_DAMAGE))
        {
            if ((mail->dmgdata.dmg_type == DMGTYP_SIDE) ||
                (mail->dmgdata.dmg_type == DMGTYP_HITBYTOSS))
            {
                alertslik = SLICK_ALERT_READY;
                flg_info |= 2;
                psy->GoalPush(NPC_GOAL_WOUND, 0);
                break;
            }
        }

        snarfed = 0;
        break;
    default:
        snarfed = 0;
        break;
    }
    return snarfed;
}

void zNPCGoalAlertSlick::GetInArena(F32 dt)
{
    zNPCRobot* npc;
    xVec3 vec1;
    xVec3 dir_want;
    xVec3 dir;

    npc = (zNPCRobot*)this->psyche->clt_owner;

    xVec3Sub(&vec1, npc->arena.Pos(), npc->zNPCCommon::Pos());

    F32 rot = xVec3Length(&vec1);

    if (rot < 1.0f)
    {
        xVec3Copy(&vec1, NPCC_rightDir(npc));
    }
    else
    {
        xVec3SMulBy(&vec1, 1.0f / rot);
    }

    xVec3Copy(&dir_want, &vec1);

    npc->ThrottleAdjust(dt, 2.0f, -1.0f);
    rot = npc->TurnToFace(dt, &dir_want, -1.0f);
    NPCC_ang_toXZDir(npc->frame->rot.angle + rot, &dir);
    npc->ThrottleApply(dt, &dir, 0);
}

void zNPCGoalAlertSlick::MoveCorner(F32 dt)
{
    zNPCRobot* npc = (zNPCRobot*)(psyche->clt_owner);
    F32 ds2_corn;
    xVec3 dir_corn;
    if (*(U8*)(&npc->npcset.allowChase) && npc->arena.IsReady() && (npc->arena.Radius(1.0f) > 2.0f))
    {
        ds2_corn = npc->XYZDstSqToPos(&pos_corner, 0);
        if (ds2_corn < SQ(0.5f))
        {
            npc->CornerOfArena(&pos_corner, -1.0f);
            ds2_corn = npc->XYZDstSqToPos(&pos_corner, NULL);
        }
        if (npc->DBG_IsNormLog(eNPCDCAT_Ten, 2))
        {
            xDrawSetColor(g_BLUE);
            xDrawSphere2(&pos_corner, 0.1f, 12);
        }
        if ((tmr_reload >= 0.0f) && (tmr_reload < 1.0f))
        {
            npc->ThrottleAdjust(dt, 1.5, -1.0);
        }
        else if (ds2_corn < 2.0f)
        {
            npc->ThrottleAdjust(dt, 1.5f, -1.0f);
        }
        else
        {
            npc->ThrottleAdjust(dt, 3.5f, -1.0f);
        }
        npc->XYZVecToPos(&dir_corn, &pos_corner);
        xVec3Normalize(&dir_corn, &dir_corn);
        npc->ThrottleApply(dt, &dir_corn, 0);
    }
}

S32 zNPCGoalAttackCQC::Enter(F32 dt, void* updCtxt)
{
    zNPCCommon* npc = (zNPCCommon*)this->psyche->clt_owner;
    flg_attack = 0;
    return this->zNPCGoalPushAnim::Enter(dt, updCtxt);
}

S32 zNPCGoalAttackFodder::Enter(F32 dt, void* updCtxt)
{
    zNPCRobot* npc = (zNPCRobot*)this->psyche->clt_owner;
    this->haz_cattle = HAZ_Acquire();

    if (this->haz_cattle)
    {
        if (this->haz_cattle->ConfigHelper(NPC_HAZ_CATTLEPROD))
        {
            this->cbNotify.goal = this;
            this->haz_cattle->SetNPCOwner(npc);
            this->haz_cattle->NotifyCBSet(&this->cbNotify);
            this->haz_cattle->Start(NULL, -1.0f);
        }
        else
        {
            this->haz_cattle->Discard();
            this->haz_cattle = NULL;
        }
    }

    npc->VelStop();

    return this->zNPCGoalPushAnim::Enter(dt, updCtxt);
}

S32 zNPCGoalAttackFodder::Exit(F32 dt, void* updCtxt)
{
    if (this->haz_cattle)
    {
        this->haz_cattle->Discard();
    }

    this->haz_cattle = NULL;
    return this->zNPCGoalPushAnim::Exit(dt, updCtxt);
}

S32 zNPCGoalAttackFodder::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* scene)
{
    if (!this->haz_cattle)
    {
        *trantype = GOAL_TRAN_POP;
        return 1;
    }
    else
    {
        this->SyncCattleProd();
    }

    return this->zNPCGoalPushAnim::Process(trantype, dt, updCtxt, scene);
}

S32 zNPCGoalAttackFodder::CattleNotify::Notify(en_haznote hazNote, NPCHazard* haz)
{
    switch (hazNote)
    {
    case HAZ_NOTE_DISCARD:
    case HAZ_NOTE_ABORT:
        goal->haz_cattle = NULL;
        break;
    case HAZ_NOTE_HITPLAYER:
        goal->flg_attack |= 3;
        break;
    }
    return 0;
}

S32 zNPCGoalAttackFodder::SyncCattleProd()
{
    xVec3 vec1;
    zNPCRobot* npc = (zNPCRobot*)this->psyche->clt_owner;

    S32 var1 = this->flg_attack & 0x3;

    if (!this->haz_cattle)
    {
        return var1;
    }

    if (this->haz_cattle->tmr_remain < 0.35f)
    {
        this->haz_cattle->tym_lifespan = npc->AnimDuration(NULL);
        this->haz_cattle->tmr_remain = npc->AnimTimeRemain(NULL);
    }

    if (!npc->GetVertPos(NPC_MDLVERT_ATTACK, &vec1))
    {
        return this->flg_attack & 0x3;
    }

    this->haz_cattle->PosSet(&vec1);

    if (this->haz_cattle->flg_hazard & 0x40000000)
    {
        this->flg_attack |= 0x3;
    }

    return this->flg_attack & 0x3;
}

S32 zNPCGoalAttackChomper::Enter(F32 dt, void* updCtxt)
{
    zNPCCommon* npc = ((zNPCCommon*)(psyche->clt_owner));
    npc->VelStop();
    npc->SndPlayRandom(NPC_STYP_ATTACK);

    return zNPCGoalPushAnim::Enter(dt, updCtxt);
}

S32 zNPCGoalAttackChomper::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* scene)
{
    static const F32 tym_ofAttack[2] = { 0.5f, 0.83f };
    F32 tym = ((zNPCRobot*)(psyche->clt_owner))->AnimTimeCurrent();
    if ((tym > tym_ofAttack[0]) && (tym < tym_ofAttack[1]))
    {
        this->BreathAttack();
    }
    return zNPCGoalPushAnim::Process(trantype, dt, updCtxt, scene);
}

S32 zNPCGoalAttackHammer::Enter(F32 dt, void* updCtxt)
{
    zNPCCommon* npc = ((zNPCCommon*)(psyche->clt_owner));
    flg_attack = 0;
    FXStreakPrep();

    npc->GetVertPos(NPC_MDLVERT_ATTACK, &pos_lastVert);
    pos_oldVert = pos_lastVert;

    return zNPCGoalPushAnim::Enter(dt, updCtxt);
}

S32 zNPCGoalAttackHammer::Exit(F32 dt, void* updCtxt)
{
    FXStreakDone();
    return this->zNPCGoalPushAnim::Exit(dt, updCtxt);
}

void zNPCGoalAttackHammer::ChkPrelimTran(en_trantype* trantype, S32* nextgoal)
{
    zNPCRobot* npc = (zNPCRobot*)(psyche->clt_owner);
    F32 tym_rem = npc->AnimTimeRemain(0);

    if (globals.player.Health < 1)
    {
        zNPCGoalTaunt* taunt =
            (zNPCGoalTaunt*)(psyche->FindGoal(NPC_GOAL_TAUNT)); // Not needed but cleaner.
        taunt->LoopCountSet(1000);
        *trantype = GOAL_TRAN_SWAP;
        *nextgoal = NPC_GOAL_TAUNT;
    }
    else if ((tym_rem < 0.15f) && (globals.player.DamageTimer > 0.5f))
    {
        *trantype = GOAL_TRAN_SWAP;
        *nextgoal = NPC_GOAL_TAUNT;
    }
    else if (npc->SomethingWonderful() != 0)
    {
        *trantype = GOAL_TRAN_SET;
        *nextgoal = NPC_GOAL_IDLE;
    }
}

S32 zNPCGoalAttackHammer::PlayerTests(xVec3* pos_vert, F32 dt)
{
    zNPCRobot* npc = (zNPCRobot*)(psyche->clt_owner);
    S32 hithim;

    xBound bnd;
    memset(&bnd, 0, sizeof(xBound));
    bnd.sph.r = 0.55f;
    bnd.type = 1;
    bnd.sph.center = *pos_vert;

    if (npc->DBG_IsNormLog(eNPCDCAT_Thirteen, 2) != 0)
    {
        xDrawSetColor(g_NEON_RED);
        xBoundDraw(&bnd);
    }
    hithim = NPCC_chk_hitPlyr(&bnd, 0);
    if (hithim != 0)
    {
        if (zEntPlayer_DamageNPCKnockBack(npc, 1, npc->Pos()) != 0)
        {
            npc->Vibrate(NPC_VIBE_HARD, -1.0f);
        }
    }
    return hithim;
}

void zNPCGoalAttackHammer::TellBunnies()
{
    static en_NPCTYPES totypes[4] = { NPC_TYPE_FODDER, NPC_TYPE_FODBOMB, NPC_TYPE_CHOMPER,
                                      NPC_TYPE_UNKNOWN };

    zNPCCommon* npc = ((zNPCCommon*)(psyche->clt_owner));

    zNPCMsg_AreaNotify(npc, NPC_MID_BUNNYHOP, 8.0f, 18, totypes);
}

void zNPCGoalAttackHammer::ModifyAnimSpeed()
{
    zNPCCommon* npc = ((zNPCCommon*)(psyche->clt_owner));
    F32 speed = 1.5f;
    U32 cheats = zGameExtras_CheatFlags();
    if ((cheats & 0x800))
    {
        speed = 2.5f;
    }
    xAnimSingle* anim = npc->AnimCurSingle();
    anim->CurrentSpeed = speed;
}

void zNPCGoalAttackHammer::FXStreakPrep()
{
    streakID[0] = NPCC_StreakCreate(NPC_STRK_HAMMERSMASH_HORZ);
    streakID[1] = NPCC_StreakCreate(NPC_STRK_HAMMERSMASH_VERT);
}

void zNPCGoalAttackHammer::FXStreakDone()
{
    for (S32 i = 0; i < (S32)(sizeof(this->streakID) / sizeof(U32)); i++)
    {
        xFXStreakStop(streakID[i]);
        streakID[i] = 0xDEAD;
    }
}

S32 zNPCGoalAttackTarTar::Enter(F32 dt, void* updCtxt)
{
    ((zNPCCommon*)(psyche->clt_owner))->VelStop();
    flg_pushanim |= 2;
    idx_launch = 1;
    flg_attack = 0;
    xVec3Copy(&pos_aimbase, &g_O3);
    return zNPCGoalPushAnim::Enter(dt, updCtxt);
}

S32 zNPCGoalAttackTarTar::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn)
{
    S32 zapidx = -1;
    zNPCRobot* npc = (zNPCRobot*)(psyche->clt_owner);
    HAZ_AvailablePool();
    if (npc->DBG_IsNormLog(eNPCDCAT_Thirteen, -1) != 0)
    {
        NPCC_DrawPlayerPredict(5, 1.0, 4.0);
        xDrawSetColor(g_YELLOW);
        xDrawSphere2(&pos_aimbase, 0.1, 0xc);
    }
    if (g_hash_roboanim[14] == npc->AnimCurStateID())
    {
        zapidx = npc->IsAttackFrame(-1.0f, 0);
        if (zapidx > idx_launch)
        {
            idx_launch = zapidx;
        }
        if (zapidx == idx_launch)
        {
            if (!(flg_attack & 1))
            {
                flg_attack |= 1;
                CacheAimPoint();
            }
            if (ShootBlob(dt, zapidx) != 0)
            {
                idx_launch++;
            }
        }
    }
    return zNPCGoalPushAnim::Process(trantype, dt, updCtxt, xscn);
}

S32 zNPCGoalAttackTarTar::NPCMessage(NPCMsg* msg)
{
    S32 snarfed = 1;
    zNPCRobot* npc = (zNPCRobot*)(psyche->clt_owner);
    xPsyche* psyche = (xPsyche*)xGoal::GetPsyche();
    switch (msg->msgid)
    {
    case NPC_MID_DAMAGE:
        if ((npc->hitpoints > 1) &&
            ((msg->infotype == NPC_MDAT_DAMAGE) && ((msg->dmgdata.dmg_type == DMGTYP_SIDE) ||
                                                    (msg->dmgdata.dmg_type == DMGTYP_HITBYTOSS))))
        {
            psyche->GoalSwap(NPC_GOAL_WOUND, 0);
        }
        else
        {
            snarfed = 0;
        }
        break;
    default:
        snarfed = 0;
        break;
    }
    return snarfed;
}

void zNPCGoalAttackTarTar::CacheAimPoint()
{
    F32 dist = xsqrt(((zNPCCommon*)(psyche->clt_owner))->XYZDstSqToPlayer(NULL));
    F32 tym = 8.0f;
    S32 cheats = zGameExtras_CheatFlags();
    if (cheats & 0x800)
    {
        tym = 22.5f;
    }
    F32 spd = 0.25f;
    if (tym > 0.25f)
    {
        spd = tym;
    }
    xVec3* pos = &pos_aimbase;
    if ((dist / spd) < 4.0f)
    {
        tym = (dist / spd);
    }
    else
    {
        tym = 4.0f;
    }
    zEntPlayer_PredictPos(pos, tym, 1.0f, 1);
}

S32 zNPCGoalAttackMonsoon::Enter(F32 dt, void* updCtxt)
{
    idx_launch = 0;
    flg_pushanim |= 2;
    return zNPCGoalPushAnim::Enter(dt, updCtxt);
}

S32 zNPCGoalAttackArfMelee::Enter(F32 dt, void* updCtxt)
{
    zNPCCommon* npc = ((zNPCCommon*)(psyche->clt_owner));
    FXStreakPrep();
    npc->SndPlayRandom(NPC_STYP_PUNCH);
    return zNPCGoalPushAnim::Enter(dt, updCtxt);
}

S32 zNPCGoalAttackArfMelee::Exit(F32 dt, void* updCtxt)
{
    FXStreakDone();
    return zNPCGoalPushAnim::Exit(dt, updCtxt);
}

S32 zNPCGoalAttackArfMelee::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn)
{
    ((zNPCCommon*)(psyche->clt_owner))->VelStop();
    if ((globals.player.Health != 0) && !(globals.player.DamageTimer > 0.0f))
    {
        PlayerTests();
    }
    FXStreakUpdate();
    return zNPCGoalPushAnim::Process(trantype, dt, updCtxt, xscn);
}

void zNPCGoalAttackArfMelee::FXStreakPrep()
{
    for (int i = 0; i < 4; i++)
    {
        streakID[i] = NPCC_StreakCreate(NPC_STRK_ARFMELEE);
    }
}

void zNPCGoalAttackArfMelee::FXStreakDone()
{
    for (S32 i = 0; i < (S32)(sizeof(this->streakID) / sizeof(U32)); i++)
    {
        xFXStreakStop(streakID[i]);
        streakID[i] = 0xDEAD;
    }
}

S32 zNPCGoalAttackArf::Enter(F32 dt, void* updCtxt)
{
    static const U32 keepflags = 7;
    if ((this->flg_info & 0x10) == 0)
    {
        this->flg_attack = 0;
    }
    else
    {
        this->flg_attack &= keepflags;
    }
    if ((this->flg_attack & keepflags) == 0)
    {
        this->SetAttackMode(0, 0);
    }
    this->flg_info = 0;
    return zNPCGoalPushAnim::Enter(dt, updCtxt);
}

S32 zNPCGoalAttackArf::Exit(F32 dt, void* updCtxt)
{
    flg_attack = 0;
    return zNPCGoalPushAnim::Exit(dt, updCtxt);
}

S32 zNPCGoalAttackArf::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn)
{
    zNPCRobot* npc = (zNPCRobot*)(psyche->clt_owner);
    S32 nextgoal = 0;
    npc->VelStop();
    npc->FacePlayer(dt, 3 * PI);
    if (globals.player.Health < 1)
    {
        zNPCGoalTaunt* taunt = (zNPCGoalTaunt*)(psyche->FindGoal(NPC_GOAL_TAUNT));
        taunt->LoopCountSet(1000);
        *trantype = GOAL_TRAN_SWAP;
        nextgoal = NPC_GOAL_TAUNT;
    }
    else if (globals.player.DamageTimer > 0.5f)
    {
        *trantype = GOAL_TRAN_SWAP;
        nextgoal = NPC_GOAL_TAUNT;
    }
    else if (npc->SomethingWonderful() != 0)
    {
        *trantype = GOAL_TRAN_SET;
        nextgoal = NPC_GOAL_IDLE;
    }
    if (*trantype != 0)
    {
        return nextgoal;
    }
    if (npc->DBG_IsNormLog(eNPCDCAT_Thirteen, -1))
    {
        NPCC_DrawPlayerPredict(5, 1.0f, 4.0f);
    }
    if (flg_attack & 1)
    {
        if (npc->IsAttackFrame(-1.0f, 1) && (LaunchBone(dt, 1) != 0))
        {
            flg_attack &= 0xFFFFFFFC;
        }
    }
    else if ((flg_attack & 2) && npc->IsAttackFrame(-1.0f, 2) && (LaunchDoggie(dt) != 0))
    {
        flg_attack &= 0xFFFFFFFC;
    }
    return zNPCGoalPushAnim::Process(trantype, dt, updCtxt, xscn);
}

void zNPCGoalAttackArf::SetAttackMode(S32 a, S32 b)
{
    flg_attack &= 0xfffffff8;
    if (a != 0)
    {
        flg_attack |= 2;
        if (b != 0)
        {
            flg_attack |= 4;
        }
    }
    else
    {
        flg_attack |= 1;
    }
    flg_info |= 0x10;
}

S32 zNPCGoalAttackArf::LaunchBone(F32 dt, S32 param_2)
{
    zNPCArfArf* npc = ((zNPCArfArf*)(psyche->clt_owner));
    return npc->LaunchProjectile(NPC_HAZ_ARFBONE, 8.0, 3.5, NPC_MDLVERT_ATTACK, 4.0f, 0.35f);
}

S32 zNPCGoalAttackChuck::Enter(F32 dt, void* updCtxt)
{
    zNPCRobot* npc = (zNPCRobot*)(psyche->clt_owner);
    idx_launch = 1;
    npc->ModelAtomicHide(1, NULL);
    npc->SndPlayRandom(NPC_STYP_WEPLAUNCH);
    return zNPCGoalPushAnim::Enter(dt, updCtxt);
}

S32 zNPCGoalAttackChuck::Exit(F32 dt, void* updCtxt)
{
    zNPCCommon* npc = ((zNPCCommon*)(psyche->clt_owner));
    npc->ModelAtomicHide(1, NULL);
    return zNPCGoalPushAnim::Exit(dt, updCtxt);
}

S32 zNPCGoalAttackChuck::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn)
{
    zNPCRobot* npc = (zNPCRobot*)(psyche->clt_owner);
    S32 nextgoal = 0;
    HAZ_AvailablePool();
    if (*trantype != 0)
    {
        return nextgoal;
    }
    npc->VelStop();
    npc->FacePlayer(dt, 3 * PI);
    if (npc->DBG_IsNormLog(eNPCDCAT_Thirteen, -1))
    {
        NPCC_DrawPlayerPredict(5, 1.0f, 4.0f);
    }
    if ((npc->AnimTimeCurrent() > 0.2f) && (idx_launch == 1))
    {
        npc->ModelAtomicShow(1, 0);
    }
    if (idx_launch == npc->IsAttackFrame(-1.0f, 0))
    {
        if (BombzAway(dt))
        {
            idx_launch++;
            npc->ModelAtomicHide(1, NULL);
        }
    }
    return zNPCGoalPushAnim::Process(trantype, dt, updCtxt, xscn);
}

S32 zNPCGoalAttackChuck::BombzAway(F32 param_1)
{
    zNPCRobot* npc = ((zNPCRobot*)(psyche->clt_owner));
    npc->SndPlayRandom(NPC_STYP_ATTACK);
    return npc->LaunchProjectile(NPC_HAZ_CHUCKBOMB, 15.0f, 3.0f, NPC_MDLVERT_ATTACK, 4.0f, 0.0f);
}

S32 zNPCGoalAttackSlick::Enter(F32 dt, void* updCtxt)
{
    zNPCRobot* npc = (zNPCRobot*)(psyche->clt_owner);
    idx_launch = 1;
    zNPCGoalLoopAnim::LoopCountSet(1);
    npc->SndPlayRandom(NPC_STYP_ATTACK);
    return zNPCGoalLoopAnim::Enter(dt, updCtxt);
}

S32 zNPCGoalAttackSlick::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn)
{
    zNPCSlick* npc = (zNPCSlick*)(psyche->clt_owner);
    S32 zapidx;

    npc->FacePlayer(dt, 3 * PI);
    npc->ThrottleAdjust(dt, 0.0f, -1.0f);
    npc->ThrottleApply(dt, NPCC_faceDir(npc), 0);
    if (npc->DBG_IsNormLog(eNPCDCAT_Thirteen, -1) != 0)
    {
        NPCC_DrawPlayerPredict(5, 1.0, 4.0);
    }
    zapidx = 0;
    if (anid_played == anid_stage[1])
    {
        zapidx = npc->IsAttackFrame(-1.0f, 0);
    }
    if (cnt_loop < idx_launch)
    {
        idx_launch = cnt_loop;
    }
    if ((zapidx != 0) && (idx_launch != 0) && (cnt_loop == idx_launch))
    {
        HAZ_AvailablePool();
        if (FireOne(idx_launch) != 0)
        {
            idx_launch--;
        }
    }
    return zNPCGoalLoopAnim::Process(trantype, dt, updCtxt, xscn);
}

S32 zNPCGoalAttackSlick::FireOne(S32)
{
    zNPCRobot* npc = ((zNPCRobot*)(psyche->clt_owner));
    return npc->LaunchProjectile(NPC_HAZ_OILBUBBLE, 9.0f, 4.0f, NPC_MDLVERT_ATTACK, 4.0f, 0.1f);
}

S32 zNPCGoalDogLaunch::Enter(F32 dt, void* updCtxt)
{
    zNPCRobot* npc = (zNPCRobot*)(psyche->clt_owner);
    zMovePoint* nav_preserveCurr = npc->nav_curr;
    zNPCGoalAfterlife* wanna = (zNPCGoalAfterlife*)(psyche->FindGoal(NPC_GOAL_AFTERLIFE));
    if (wanna != 0)
    {
        wanna->DieWithABang();
    }
    npc->MatPosSet(&pos_src);
    xVec3Copy(&npc->frame->mat.pos, &pos_src);
    npc->frame->mode = 1;
    npc->MvptReset(nav_preserveCurr);
    npc->arena.Cycle(npc, 0);
    tmr_remain = -1.0;
    PreCollide();
    zNPCCommon* duper = npc->npc_duplodude;
    if (duper != 0)
    {
        duper->DuploNotice((en_SM_NOTICES)2, npc);
    }
    flg_info = 0;
    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalDogLaunch::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn)
{
    S32 nextgoal = 0;
    zNPCRobot* npc = (zNPCRobot*)(psyche->clt_owner);

    if (BallisticUpdate(dt) != 0)
    {
        if (!(flg_launch & 2))
        {
            *trantype = GOAL_TRAN_SET;
            nextgoal = NPC_GOAL_DAMAGE;
        }
        else if (flg_launch & 1)
        {
            *trantype = GOAL_TRAN_SET;
            nextgoal = NPC_GOAL_IDLE;
        }
        else
        {
            *trantype = GOAL_TRAN_SET;
            nextgoal = NPC_GOAL_ALERT;
        }
    }
    if (*trantype != 0)
    {
        return nextgoal;
    }
    else
    {
        FurryFlurry();
        npc->colFreq = 1;
        xDrawSetColor(g_BLUE);
        xDrawSphere(&pos_tgt, 0.15f, 0xC0006);
        return xGoal::Process(trantype, dt, updCtxt, xscn);
    }
}

void zNPCGoalDogLaunch::ViciousAttack(xVec3* pos_src, xVec3* pos_tgt, zMovePoint* mvpt, S32 unk)
{
    zNPCRobot* npc = (zNPCRobot*)(psyche->clt_owner);
    this->flg_launch = 0;
    if (unk != 0)
    {
        this->flg_launch |= 1;
    }
    this->pos_src = *pos_src;
    this->pos_tgt = *pos_tgt;
    npc->MvptReset(mvpt);
    this->flg_info |= 0x10;
}

void zNPCGoalDogLaunch::FurryFlurry()
{
    zNPCRobot* npc = (zNPCRobot*)(psyche->clt_owner);

    static S32 moreorless = 0;
    static const xVec3 pos_disperse = { 0.01f, 0.01f, 0.01f };
    static const xVec3 vel_disperse = { 3.0f, 2.5f, -2.0f };

    moreorless--;
    if ((moreorless < 0) && (psyche->TimerGet(XPSY_TYMR_CURGOAL) > 0.04f))
    {
        moreorless = -1;
        BubTrailCone(npc->Center(), 15, &pos_disperse, &vel_disperse, (xMat3x3*)npc->BoneMat(0));
    }
}

S32 zNPCGoalDogBark::Enter(F32 dt, void* updCtxt)
{
    zNPCGoalLoopAnim::LoopCountSet(1);
    return zNPCGoalLoopAnim::Enter(dt, updCtxt);
}

S32 zNPCGoalDogDash::Enter(F32 dt, void* updCtxt)
{
    zNPCGoalLoopAnim::LoopCountSet(1);
    return zNPCGoalLoopAnim::Enter(dt, updCtxt);
}

void zNPCGoalDogDash::HoundPlayer(F32 dt)
{
    zNPCRobot* npc = (zNPCRobot*)(psyche->clt_owner);
    npc->ThrottleAdjust(dt, 4.0f, 20.0f);
    xVec3* dir = NPCC_faceDir(npc);
    npc->ThrottleApply(dt, dir, 0);
}

S32 zNPCGoalDogPounce::Enter(F32 dt, void* updCtxt)
{
    flg_user = 0;
    return zNPCGoalPushAnim::Enter(dt, updCtxt);
}

S32 zNPCGoalDogPounce::Exit(F32 dt, void* updCtxt)
{
    if (flg_user == 0)
    {
        Detonate();
    }
    return zNPCGoalPushAnim::Exit(dt, updCtxt);
}

S32 zNPCGoalDogPounce::NPCMessage(NPCMsg* mail)
{
    S32 ret = 0;
    switch (mail->msgid)
    {
    case NPC_MID_DAMAGE:
        flg_user = 1;
        break;
    default:
        ret = 0;
        break;
    }
    return ret;
}

void zNPCGoalDogPounce::Detonate()
{
    zNPCRobot* npc = (zNPCRobot*)this->psyche->clt_owner;
    npc->SndPlayRandom(NPC_STYP_WARNBANG);
    NPCHazard* haz = HAZ_Acquire();

    if (haz != NULL)
    {
        haz->ConfigHelper(NPC_HAZ_PUPPYNUKE);
        haz->SetNPCOwner(npc);
        haz->Start(xEntGetCenter(npc), -1.0f);
    }
}

S32 zNPCGoalTeleport::Enter(F32 dt, void* updCtxt)
{
    zNPCCommon* npc = ((zNPCCommon*)(psyche->clt_owner));
    npc->flg_move &= 0xFFFFFFFD;
    npc->flg_move |= 4;
    if (npc->nav_dest == NULL || npc->nav_dest == npc->nav_curr)
    {
        npc->MvptCycle();
    }
    npc->chkby = 0;
    npc->penby = 0;
    npc->flags2.flg_colCheck = 0;
    npc->flags2.flg_penCheck = 0;
    npc->pflags &= 0xFB;

    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalTeleport::Exit(F32 dt, void* updCtxt)
{
    zNPCCommon* npc = ((zNPCCommon*)(psyche->clt_owner));

    npc->flg_move |= 2;
    npc->flg_move &= 0xFFFFFFFB;

    npc->RestoreColFlags();

    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalTeleport::NPCMessage(NPCMsg* msg)
{
    switch (msg->msgid)
    {
    case NPC_MID_DAMAGE:
        return 1;
    }
    return 0;
}

S32 zNPCGoalHokeyPokey::Enter(F32 dt, void* updCtxt)
{
    zNPCFodBzzt* bzzt = ((zNPCFodBzzt*)(psyche->clt_owner));
    flg_hokey = (xrand() >> 0x17) & 1;
    flg_hokey |= 2;
    ang_spinrate = 0.0f;
    bzzt->DiscoReset();
    return zNPCGoalLoopAnim::Enter(dt, updCtxt);
}

S32 zNPCGoalEvilPat::Enter(F32 dt, void* updCtxt)
{
    zNPCCommon* npc = ((zNPCCommon*)(psyche->clt_owner));

    if (npc->SelfType() == NPC_TYPE_GLOVE)
    {
        npc->flg_vuln |= 0x80000000;
    }

    GlyphStart();

    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalEvilPat::Exit(F32 dt, void* updCtxt)
{
    zNPCRobot* npc = ((zNPCRobot*)(psyche->clt_owner));

    if (npc->SelfType() == NPC_TYPE_GLOVE)
    {
        npc->flg_vuln &= 0x7FFFFFFF;
    }

    npc->tmr_stunned = -1.0f;

    GlyphStop();

    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalDogDash::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn)
{
    S32 nextgoal = 0;
    zNPCRobot* npc = (zNPCRobot*)(psyche->clt_owner);
    if (npc->SomethingWonderful() != 0)
    {
        *trantype = GOAL_TRAN_SET;
        nextgoal = NPC_GOAL_IDLE;
    }
    else if (*(U8*)(&npc->npcset.allowDetect) == 0)
    {
        *trantype = GOAL_TRAN_SET;
        nextgoal = NPC_GOAL_IDLE;
    }
    if (*trantype != GOAL_TRAN_NONE)
    {
        return nextgoal;
    }
    else
    {
        this->HoundPlayer(dt);
        return zNPCGoalLoopAnim::Process(trantype, dt, updCtxt, xscn);
    }
}

S32 zNPCGoalDogBark::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn)
{
    S32 nextgoal = 0;
    zNPCRobot* npc = (zNPCRobot*)(psyche->clt_owner);
    if (npc->SomethingWonderful() != 0)
    {
        *trantype = GOAL_TRAN_SET;
        nextgoal = NPC_GOAL_IDLE;
    }
    else if (*(U8*)(&npc->npcset.allowDetect) == 0)
    {
        *trantype = GOAL_TRAN_SET;
        nextgoal = NPC_GOAL_IDLE;
    }
    if (*trantype != GOAL_TRAN_NONE)
    {
        return nextgoal;
    }
    else
    {
        npc->FacePlayer(dt, 4 * PI);
        npc->VelStop();
        return zNPCGoalLoopAnim::Process(trantype, dt, updCtxt, xscn);
    }
}

S32 zNPCGoalEvilPat::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* scene)
{
    U32 nextgoal;
    zNPCRobot* npc = ((zNPCRobot*)(psyche->clt_owner));

    if (npc->tmr_stunned < 0.0f)
    {
        *trantype = GOAL_TRAN_SET;
        nextgoal = NPC_GOAL_ALERT;
    }
    else
    {
        *trantype = GOAL_TRAN_PUSH;
        nextgoal = NPC_GOAL_STUNNED;
    }

    return (*trantype != GOAL_TRAN_NONE) ? nextgoal : xGoal::Process(trantype, dt, updCtxt, scene);
}

S32 zNPCGoalEvilPat::NPCMessage(NPCMsg* mail)
{
    zNPCRobot* npc = ((zNPCRobot*)(psyche->clt_owner));
    switch (mail->msgid)
    {
    case NPC_MID_STUN:
        F32 stuntime = mail->stundata.tym_stuntime;
        F32 blah = (xurand() - 0.5f);
        blah = 0.25f * blah;
        npc->tmr_stunned = stuntime + (stuntime * blah);
        return 1;
    }
    return 0;
}

S32 zNPCGoalEvilPat::InputStun(NPCStunInfo* info)
{
    xPsyche* psyche = xGoal::GetPsyche();
    zNPCGoalStunned* stunned = (zNPCGoalStunned*)psyche->FindGoal(NPC_GOAL_STUNNED);
    return stunned == NULL ? 0 : stunned->InputInfo(info);
}

void zNPCGoalEvilPat::GlyphStart()
{
    static xVec3 ang_delta = { DEG2RAD(2.1000001f), 0.0f, 0.0f };
    static xVec3 scale = { 0.75f, 0.75f, 0.75f };

    zNPCRobot* robot = (zNPCRobot*)psyche->clt_owner;
    robot->glyf_stun = GLYF_Acquire(NPC_GLYPH_DAZED);
    if (robot->glyf_stun != NULL)
    {
        robot->glyf_stun->Enable(1);
        robot->glyf_stun->RotSet(&ang_delta, 0);
        robot->glyf_stun->ScaleSet(&scale);
    }
}

void zNPCGoalEvilPat::GlyphStop()
{
    zNPCRobot* npc = ((zNPCRobot*)(psyche->clt_owner));
    if (npc->glyf_stun != NULL)
    {
        npc->glyf_stun->Discard();
    }
    npc->glyf_stun = NULL;
}

S32 zNPCGoalStunned::Enter(F32 dt, void* updCtxt)
{
    zNPCRobot* npc = (zNPCRobot*)(psyche->clt_owner);
    if (!(flg_info & 0x10))
    {
        F32 stun = npc->cfg_npc->tym_stun;
        npc->tmr_stunned = (stun * (0.25f * (xurand() - 0.5f)) + stun);
    }
    flg_info = 0;
    npc->VelStop();
    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalStunned::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn)
{
    S32 nextgoal = 0;
    zNPCRobot* npc = (zNPCRobot*)(psyche->clt_owner);
    if (npc->tmr_stunned < 0.0f)
    {
        *trantype = GOAL_TRAN_SET;
        nextgoal = NPC_GOAL_ALERT;
    }
    if (*trantype != GOAL_TRAN_NONE)
    {
        return nextgoal;
    }
    else
    {
        npc->tmr_stunned = MAX(-1.0f, (npc->tmr_stunned - dt));
        npc->SyncStunGlyph(dt, npc->tmr_stunned, -1.0f);
        return xGoal::Process(trantype, dt, updCtxt, xscn);
    }
}

S32 zNPCGoalStunned::InputInfo(NPCStunInfo* info)
{
    zNPCRobot* npc = ((zNPCRobot*)(psyche->clt_owner));
    flg_info = 0x10;
    F32 stunTime = npc->tmr_stunned;
    F32 infoStun = info->tym_stuntime;
    stunTime = (stunTime > infoStun) ? stunTime : infoStun;
    npc->tmr_stunned = stunTime;
    return flg_info;
}

S32 zNPCGoalPatCarry::Enter(F32 dt, void* updCtxt)
{
    static xVec3 scale = { 0.3f, 0.3f, 0.3f };

    zNPCRobot* npc = (zNPCRobot*)(psyche->clt_owner);
    NPCGlyph* glyph = npc->glyf_stun;
    if (glyph != NULL)
    {
        glyph->ScaleSet(&scale);
    }
    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalPatCarry::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn)
{
    zNPCRobot* npc = ((zNPCRobot*)(psyche->clt_owner));
    static F32 offset = 0.5f;
    npc->SyncStunGlyph(dt, 5.0f, offset);
    return xGoal::Process(trantype, dt, updCtxt, xscn);
}

S32 zNPCGoalPatThrow::Enter(F32 dt, void* updCtxt)
{
    zNPCRobot* npc = (zNPCRobot*)(psyche->clt_owner);
    NPCGlyph* glyph = npc->glyf_stun;
    if (glyph != NULL)
    {
        glyph->Discard();
    }
    npc->glyf_stun = NULL;
    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalLassoBase::Enter(F32 dt, void* updCtxt)
{
    zNPCSlick* npc = (zNPCSlick*)(psyche->clt_owner);
    if (npc->SelfType() == NPC_TYPE_SLICK)
    {
        npc->RopePopsShield();
    }
    npc->Vibrate(NPC_VIBE_SOFT, -1.0f);
    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalLassoBase::Exit(F32 dt, void* updCtxt)
{
    zNPCCommon* npc = ((zNPCCommon*)(psyche->clt_owner));
    npc->LassoNotify(LASS_EVNT_ENDED);
    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalLassoBase::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn)
{
    zNPCLassoInfo* lass = (zNPCLassoInfo*)((zNPCCommon*)(psyche->clt_owner))->GimmeLassInfo();
    S32 nextgoal;
    if (lass->stage == LASS_STAT_GRABBING)
    {
        *trantype = GOAL_TRAN_PUSH;
        nextgoal = NPC_GOAL_LASSOGRAB;
    }
    else if (lass->stage == LASS_STAT_TOSSING)
    {
        *trantype = GOAL_TRAN_PUSH;
        nextgoal = NPC_GOAL_LASSOTHROW;
    }
    else
    {
        *trantype = GOAL_TRAN_SET;
        nextgoal = NPC_GOAL_ALERT;
    }
    return (*trantype != 0) ? nextgoal : xGoal::Process(trantype, dt, updCtxt, xscn);
}

S32 zNPCGoalLassoThrow::Exit(F32 dt, void* updCtxt)
{
    xEnt* ent = (xEnt*)(this->psyche->clt_owner);

    if ((flg_throw & 0x10) == 0)
    {
        ent->pflags &= 0xfb;
    }

    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalDamage::NPCMessage(NPCMsg* msg)
{
    U32 ret = 1;
    xPsyche* psyche = (xPsyche*)xGoal::GetPsyche();
    switch (msg->msgid)
    {
    case NPC_MID_DAMAGE:
        if ((msg->infotype == NPC_MDAT_DAMAGE) &&
            ((msg->dmgdata.dmg_type == DMGTYP_SURFACE) ||
             (msg->dmgdata.dmg_type == DMGTYP_DAMAGE_SURFACE)))
        {
            psyche->GoalSet(NPC_GOAL_AFTERLIFE, 0);
        }
        break;
    default:
        ret = 0;
        break;
    }

    return ret;
}

S32 zNPCGoalDamage::InputInfo(NPCDamageInfo* info)
{
    zNPCRobot* npc = (zNPCRobot*)(psyche->clt_owner);
    flg_info = 0x10;
    switch (info->dmg_type)
    {
    case DMGTYP_BELOW:
        npc->InflictPain(-1, 0);
        flg_howtodie = 1;
        break;
    case DMGTYP_INSTAKILL:
        flg_howtodie = 4;
        npc->InflictPain(-1, 0);
        break;
    case DMGTYP_SIDE:
    case DMGTYP_HITBYTOSS:
    case DMGTYP_BOULDER:
    case DMGTYP_BUBBOWL:
        flg_howtodie = 2;
        npc->InflictPain(-1, 0);
        zNPCGoalKnock* knock = (zNPCGoalKnock*)(psyche->FindGoal(NPC_GOAL_KNOCK));
        knock->InputInfo(info);
        break;
    default:
        flg_howtodie = 1;
        npc->InflictPain(-1, 0);
        break;
    }
    return flg_info;
}

S32 zNPCGoalBashed::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* scene)
{
    xEnt* ent = ((xEnt*)(psyche->clt_owner));
    ent->frame->vel.y = -(dt * 30.0f - ent->frame->vel.y);
    ent->frame->mode |= 4;
    return this->zNPCGoalLoopAnim::Process(trantype, dt, updCtxt, scene);
}

S32 zNPCGoalKnock::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn)
{
    S32 nextgoal = 0;
    zNPCRobot* npc = (zNPCRobot*)(psyche->clt_owner);
    if (this->flg_knock & 1)
    {
        this->floorBounce++;
    }
    if ((this->floorBounce > 3) || (this->flg_knock & 2) && !(this->flg_knock & 1) ||
        (npc->AnimTimeRemain(0) < (dt + 0.001f)))
    {
        *trantype = GOAL_TRAN_SET;
        nextgoal = NPC_GOAL_AFTERLIFE;
    }
    if (*trantype != GOAL_TRAN_NONE)
    {
        return nextgoal;
    }
    else
    {
        npc->FacePlayer(dt, 3 * PI);
        npc->colFreq = 0;
        this->flg_knock &= 0xFFFFFFFC;
        StreakUpdate();
        return xGoal::Process(trantype, dt, updCtxt, xscn);
    }
}

S32 zNPCGoalKnock::InputInfo(NPCDamageInfo* info)
{
    zNPCRobot* npc = (zNPCRobot*)(psyche->clt_owner);
    if (info->dmg_from != NULL)
    {
        NPCC_pos_ofBase(info->dmg_from, &pos_bumper);
        flg_info = 0x10;
    }
    else if (xVec3Length2(&info->vec_dmghit) > 0.001f)
    {
        xVec3Normalize(&pos_bumper, &info->vec_dmghit);
        xVec3Inv(&pos_bumper, &pos_bumper);
        xVec3AddTo(&pos_bumper, npc->Pos());
        flg_info = 0x10;
    }
    else
    {
        xVec3Copy(&pos_bumper, xEntGetPos(&globals.player.ent));
        flg_info = 0x10;
    }
    return flg_info;
}

S32 zNPCGoalWound::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn)
{
    S32 nextgoal = 0;
    zNPCRobot* npc = (zNPCRobot*)(psyche->clt_owner);
    npc->ThrottleApply(dt, &dir_fling, 0);
    npc->ThrottleAdjust(dt, 0.0f, 7.0f);
    if (flg_knock & 8)
    {
        *trantype = GOAL_TRAN_SET;
        nextgoal = 0x4e475264;
    }
    if (*trantype != GOAL_TRAN_NONE)
    {
        return nextgoal;
    }
    if (flg_pushanim & 0x10000)
    {
        if ((anid_played != npc->AnimCurStateID()) || (npc->AnimTimeRemain(0) <= (dt + 0.001f)) ||
            (flg_pushanim & 1))
        {
            *trantype = GOAL_TRAN_SET;
            nextgoal = 0x4e475234;
        }
    }
    else
    {
        nextgoal = zNPCGoalPushAnim::Process(trantype, dt, updCtxt, xscn);
    }
    return nextgoal;
}

S32 zNPCGoalWound::NPCMessage(NPCMsg* msg)
{
    switch (msg->msgid)
    {
    case NPC_MID_DAMAGE:
        return 1;
    }
    return 0;
}

S32 zNPCGoalKnock::Exit(F32 dt, void* updCtxt)
{
    zNPCCommon* npc = ((zNPCCommon*)(psyche->clt_owner));
    npc->VelStop();
    StreakDone();

    if (!(flg_knock & 4))
    {
        npc->pflags &= 0xfb;
    }

    return xGoal::Exit(dt, updCtxt);
}

void zNPCGoalKnock::StreakPrep()
{
    streakID = NPCC_StreakCreate(NPC_STRK_TOSSEDROBOT);
}

void zNPCGoalKnock::StreakDone()
{
    xFXStreakStop(streakID);
    streakID = 0xDEAD;
}

void zNPCGoalKnock::StreakUpdate()
{
    zNPCRobot* npc = (zNPCRobot*)(psyche->clt_owner);
    xVec3 a, b, c;

    xVec3Copy(&c, (xVec3*)NPCC_rightDir(npc));
    xVec3SMul(&c, &c, 0.1f);
    xVec3Copy(&a, (xVec3*)npc->Pos());
    a.y += 0.5f;
    b = a;
    xVec3Add(&a, &a, &c);
    xVec3Sub(&b, &b, &c);
    xFXStreakUpdate(this->streakID, &a, &b);
}

S32 zNPCGoalAfterlife::Enter(F32 dt, void* updCtxt)
{
    zNPCRobot* npc = (zNPCRobot*)this->psyche->clt_owner;
    zNPCCommon* duper = npc->npc_duplodude;
    if (!(this->flg_deadinfo & 3))
    {
        DieTheGoodDeath();
    }
    npc->MatPosSet(&npc->entass->pos);
    xVec3Copy(&npc->frame->mat.pos, &npc->entass->pos);
    npc->frame->mode |= 1;
    if (duper)
    {
        if (this->flg_deadinfo & 2)
        {
            duper->DuploNotice(SM_NOTE_NPCDIED, npc);
        }
        duper->DuploNotice(SM_NOTE_NPCSTANDBY, npc);
    }

    return zNPCGoalDead::Enter(dt, updCtxt);
}

S32 zNPCGoalAfterlife::NPCMessage(NPCMsg* mail)
{
    S32 snarfed = 1;
    xPsyche* psy = GetPsyche();
    zNPCGoalRespawn* respgoal;
    switch (mail->msgid)
    {
    case NPC_MID_RESPAWN:
        if ((psy->GIDInStack(NPC_GOAL_RESPAWN) != NULL) ||
            (psy->GIDOfPending() == NPC_GOAL_RESPAWN))
        {
            break;
        }
        respgoal = ((zNPCGoalRespawn*)(psy->FindGoal(NPC_GOAL_RESPAWN)));
        if (respgoal == NULL)
        {
            break;
        }
        respgoal->InputInfo(&mail->spawning);
        psy->GoalPush(NPC_GOAL_RESPAWN, 0);
        mail->spawning.spawnSuccess = 1;
        break;
    default:
        snarfed = 1;
        break;
    }
    return snarfed;
}

void CollectBountyOnRobot(S32 robotId);

void zNPCGoalAfterlife::DieTheGoodDeath()
{
    zNPCRobot* npc;
    zNPCCommon* duper;

    npc = (zNPCRobot*)this->psyche->clt_owner;
    duper = npc->npc_duplodude;
    zNPCMsg_AreaNotify(npc, NPC_MID_NPCDIED, 20.0f, 0x106, NPC_TYPE_UNKNOWN);
    npc->InflictPain(-1, TRUE);
    SetPlayerKillsVillainTimer(4.0f);
    CollectBountyOnRobot(npc->SelfType());
    xScrFXGlareAdd(npc->Pos(), 0.5, 0.2, 5.0, 1.0, 1.0, 1.0, 1.0, NULL);
    npc->SndPlayRandom(NPC_STYP_DEATH);
    if (npc->explosion && npc->explosion->initCB)
    {
        npc->explosion->initCB(npc->explosion, npc->model, NULL, NULL);

        static S32 cnt_nextfunfrag = 60;
        static S32 num_funFrag = 3;
        cnt_nextfunfrag--;
        if (cnt_nextfunfrag < 0)
        {
            cnt_nextfunfrag = 60;
            cnt_nextfunfrag += (S32)(60.0f * xurand());
            for (S32 i = 0; i < num_funFrag; i++)
            {
                NPCHazard* haz = HAZ_Acquire();
                if (haz != NULL)
                {
                    haz->ConfigHelper(NPC_HAZ_FUNFRAG);
                    haz->SetNPCOwner(npc);
                    haz->Start(xEntGetCenter(npc), -1.0f);
                }
            }
        }
    }
    if (duper)
    {
        duper->DuploNotice(SM_NOTE_NPCDIED, npc);
    }
}

S32 zNPCGoalRespawn::Enter(F32 dt, void* updCtxt)
{
    zNPCRobot* npc = (zNPCRobot*)(psyche->clt_owner);
    tmr_respawn = 0.35f;
    cnt_ring = 0;
    if (!(flg_info & 0x10))
    {
        xVec3Copy(&pos_poofHere, &npc->entass->pos);
        npc->zNPCCommon::GetParm(NPC_PARM_FIRSTMVPT, &npc->nav_curr);
    }
    xVec3Copy(npc->Pos(), &pos_poofHere);
    xVec3Copy(&npc->frame->mat.pos, &pos_poofHere);
    npc->frame->mode = 1;
    flg_info = 0;
    if (npc->npc_duplodude != 0)
    {
        tmr_robobits = LaunchRoboBits();
        xEntHide(npc);
    }
    else
    {
        tmr_robobits = -1.0f;
    }
    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalRespawn::Exit(F32 dt, void* updCtxt)
{
    zNPCRobot* npc = (zNPCRobot*)(psyche->clt_owner);
    KickFromTheNest();
    xEntShow(npc);
    zNPCCommon* duper = npc->npc_duplodude;
    if (duper != NULL)
    {
        duper->DuploNotice(SM_NOTE_NPCALIVE, npc);
    }
    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalRespawn::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn)
{
    S32 nextgoal = 0;
    zNPCRobot* npc = (zNPCRobot*)(psyche->clt_owner);
    if (tmr_respawn < 0.0f)
    {
        *trantype = GOAL_TRAN_SET;
        nextgoal = NPC_GOAL_ALERT;
    }
    if (*trantype != GOAL_TRAN_NONE)
    {
        return nextgoal;
    }
    if ((tmr_robobits < 0.0f) ? 1 : 0)
    {
        if (!xEntIsVisible(npc))
        {
            npc->SndPlayRandom(NPC_STYP_RESPAWN);
            xEntShow(npc);
            npc->model->Flags |= 4;
            npc->model->Flags |= 2;
        }
        DoAppearFX(dt);
        tmr_respawn = MAX(-1.0f, (tmr_respawn - dt));
    }
    else
    {
        tmr_robobits = MAX(-1.0f, (tmr_robobits - dt));
    }
    npc->VelStop();
    return xGoal::Process(trantype, dt, updCtxt, xscn);
}

S32 zNPCGoalRespawn::InputInfo(NPCSpawnInfo* info)
{
    zNPCRobot* npc = ((zNPCRobot*)(psyche->clt_owner));

    flg_info = 0x10;
    xVec3Copy(&pos_poofHere, &info->pos_spawn);

    if (info->nav_spawnReference != NULL)
    {
        npc->nav_curr = info->nav_spawnReference;
    }
    else
    {
        npc->nav_curr = info->nav_firstMovepoint;
    }

    npc->nav_dest = info->nav_firstMovepoint;
    return flg_info;
}

S32 zNPCGoalTubePal::Enter(F32 dt, void* updCtxt)
{
    zNPCTubeSlave* npc = (zNPCTubeSlave*)(psyche->clt_owner);
    zNPCTubelet* pete = npc->tub_pete;
    npc->ModelAtomicShow(0, NULL);
    npc->ModelAtomicHide(1, NULL);
    npc->ModelAtomicHide(4, NULL);
    npc->VelStop();
    if (pete != NULL)
    {
        xVec3Copy(npc->Pos(), pete->Pos());
    }
    if (npc->tubespot == ROBO_TUBE_MARY)
    {
        npc->model->Mat->pos.y += 3.0f;
    }
    else
    {
        npc->model->Mat->pos.y += 1.5f;
    }
    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalTubePal::EvalRules(en_trantype* trantype, F32 dt, void* updCtxt)
{
    S32 nextgoal = 0;
    ChkPrelimTran(trantype, &nextgoal);
    if (*trantype != GOAL_TRAN_NONE)
    {
        return nextgoal;
    }
    else
    {
        return xGoal::EvalRules(trantype, dt, updCtxt);
    }
}

void zNPCGoalTubePal::ChkPrelimTran(en_trantype* trantype, int* nextgoal)
{
    zNPCTubeSlave* npc = ((zNPCTubeSlave*)(psyche->clt_owner));

    switch (npc->tub_pete->tubestat)
    {
    case TUBE_STAT_BORN:
        *nextgoal = NPC_GOAL_TUBEBIRTH;
        *trantype = GOAL_TRAN_SET;
        return;
    case TUBE_STAT_DUCKLING:
        *nextgoal = NPC_GOAL_TUBEDUCKLING;
        *trantype = GOAL_TRAN_SET;
        return;
    case TUBE_STAT_ATTACK:
        *nextgoal = NPC_GOAL_TUBEATTACK;
        *trantype = GOAL_TRAN_SET;
        return;
    case TUBE_STAT_LASSO:
        *nextgoal = NPC_GOAL_TUBELASSO;
        *trantype = GOAL_TRAN_SET;
        return;
    case TUBE_STAT_DYING:
        *nextgoal = NPC_GOAL_TUBEDYING;
        *trantype = GOAL_TRAN_SET;
        return;
    case TUBE_STAT_DEAD:
        *nextgoal = NPC_GOAL_TUBEDEAD;
        *trantype = GOAL_TRAN_SET;
        return;
    }
}

S32 zNPCGoalTubeDuckling::Enter(F32 dt, void* updCtxt)
{
    zNPCTubeSlave* npc = (zNPCTubeSlave*)(this->psyche->clt_owner);
    this->tmr_running = 0.0f;
    this->tmr_hoverCycle = 0.0f;
    this->flg_duckling |= 3;
    this->tmr_outward = 1.0f;
    this->dst_preOrbit = npc->XZDstSqToPos(npc->tub_pete->Pos(), NULL, NULL);
    this->dst_preOrbit = xsqrt(this->dst_preOrbit);
    npc->VelStop();
    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalTubeDuckling::Resume(F32 dt, void* updCtxt)
{
    zNPCTubelet* npc = (zNPCTubelet*)(psyche->clt_owner);
    tmr_running = 0.0;
    tmr_hoverCycle = 0.0;
    flg_duckling |= 3;
    tmr_outward = 1.0;
    dst_preOrbit = npc->XZDstSqToPos(npc->tub_paul->Pos(), 0, 0);
    dst_preOrbit = xsqrt(dst_preOrbit);
    npc->VelStop();
    return zNPCGoalCommon::Resume(dt, updCtxt);
}

S32 zNPCGoalTubeDuckling::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn)
{
    S32 nextgoal = 0;
    zNPCTubelet* npc = (zNPCTubelet*)(psyche->clt_owner);
    ChkPrelimTran(trantype, &nextgoal);
    if (*trantype != GOAL_TRAN_NONE)
    {
        return nextgoal;
    }
    else
    {
        if (npc->tub_paul->tubespot == ROBO_TUBE_MARY)
        {
            if (flg_duckling & 1)
            {
                DuckStackInterpInit();
                flg_duckling &= 0xFFFFFFFE;
            }
            if (DuckStackInterp(dt) == 0)
            {
                flg_duckling &= 0xFFFFFFFD;
            }
            tmr_outward = 1.0f;
            xVec3 vec = *npc->tub_paul->Pos() - npc->frame->mat.pos;
            vec.y = 0.0f;
            dst_preOrbit = xVec3Length(&vec);
        }
        else
        {
            flg_duckling |= 3;
            MoveFrolic(dt);
        }
        return xGoal::Process(trantype, dt, updCtxt, NULL);
    }
}

void zNPCGoalTubeDuckling::ChkPrelimTran(en_trantype* trantype, int* nextgoal)
{
    zNPCTubeSlave* npc = ((zNPCTubeSlave*)(psyche->clt_owner));

    switch (npc->tub_pete->tubestat)
    {
    case TUBE_STAT_BORN:
        *nextgoal = NPC_GOAL_TUBEBIRTH;
        *trantype = GOAL_TRAN_SET;
        break;
    case TUBE_STAT_ATTACK:
        if (flg_duckling & 2)
        {
            break;
        }
        *nextgoal = NPC_GOAL_TUBEATTACK;
        *trantype = GOAL_TRAN_SET;
        break;
    case TUBE_STAT_LASSO:
        *nextgoal = NPC_GOAL_TUBELASSO;
        *trantype = GOAL_TRAN_SET;
        break;
    case TUBE_STAT_DYING:
    case TUBE_STAT_DEAD:
        *nextgoal = NPC_GOAL_TUBEDYING;
        *trantype = GOAL_TRAN_SET;
        break;
    case TUBE_STAT_DUCKLING:
        break;
    }

    if (npc->hitpoints == 0)
    {
        *nextgoal = NPC_GOAL_TUBEBONKED;
        *trantype = GOAL_TRAN_PUSH;
    }
}

void zNPCGoalTubeDuckling::DuckStackInterpInit()
{
    zNPCTubeSlave* npc = (zNPCTubeSlave*)(psyche->clt_owner);
    xVec3 dist;
    xVec3 pos_stacked;

    npc->PosStacked(&pos_stacked);
    xVec3Sub(&dist, npc->Pos(), &pos_stacked);
    dst_visacard = xVec3Length(&dist);
    if (dst_visacard < 0.001f)
    {
        dst_visacard = -1.0f;
        xVec3Copy(&dir_visacard, &g_O3);
    }
    else
    {
        xVec3Normalize(&dir_visacard, &dist);
    }
}

S32 zNPCGoalTubeAttack::Enter(F32 dt, void* updCtxt)
{
    zNPCCommon* npc = ((zNPCCommon*)(psyche->clt_owner));
    npc->VelStop();
    AttackDataReset();
    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalTubeAttack::Resume(F32 dt, void* updCtxt)
{
    zNPCTubelet* npc = ((zNPCTubelet*)(psyche->clt_owner));
    npc->VelStop();
    AttackDataReset();
    return zNPCGoalCommon::Resume(dt, updCtxt);
}

S32 zNPCGoalTubeAttack::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn)
{
    S32 nextgoal = 0;
    zNPCTubeSlave* npc = (zNPCTubeSlave*)(psyche->clt_owner);
    ChkPrelimTran(trantype, &nextgoal);
    if (*trantype != GOAL_TRAN_NONE)
    {
        return nextgoal;
    }
    npc->PosStacked(&npc->frame->mat.pos);
    npc->frame->mode |= 1;

    if (npc->tubespot == (en_tubestat)2)
    {
        MaryAttack(dt, xscn);
    }
    else
    {
        npc->FacePlayer(dt, 3 * PI);
    }
    return xGoal::Process(trantype, dt, updCtxt, NULL);
}

void zNPCGoalTubeAttack::ChkPrelimTran(en_trantype* trantype, int* nextgoal)
{
    zNPCTubeSlave* npc = (zNPCTubeSlave*)(psyche->clt_owner);

    switch (npc->tub_pete->tubestat)
    {
    case TUBE_STAT_BORN:
        *nextgoal = NPC_GOAL_TUBEBIRTH;
        *trantype = GOAL_TRAN_SET;
        break;
    case TUBE_STAT_DUCKLING:
        *nextgoal = NPC_GOAL_TUBEDUCKLING;
        *trantype = GOAL_TRAN_SET;
        break;
    case TUBE_STAT_LASSO:
        *nextgoal = NPC_GOAL_TUBELASSO;
        *trantype = GOAL_TRAN_SET;
        break;
    case TUBE_STAT_DYING:
    case TUBE_STAT_DEAD:
        *nextgoal = NPC_GOAL_TUBEDYING;
        *trantype = GOAL_TRAN_SET;
        break;
    }

    if (*trantype != 0)
    {
        return;
    }

    if (npc->hitpoints != 0)
    {
        return;
    }

    *nextgoal = NPC_GOAL_TUBEBONKED;
    *trantype = GOAL_TRAN_PUSH;
}

void zNPCGoalTubeAttack::LaserRender()
{
    zNPCTubeSlave::laser.Render(&paul.pos_laserSource, &paul.pos_laserTarget);
}

void zNPCGoalTubeAttack::MaryAttack(F32 dt, xScene* xscn)
{
    zNPCTubeSlave* npc = (zNPCTubeSlave*)(psyche->clt_owner);
    zNPCTubelet* pete = npc->tub_pete;
    zNPCTubeSlave* paul = pete->tub_paul;

    switch (mary.marystat)
    {
    case TUBE_MARY_WAIT:
        if ((pete->hitpoints == 0) || (paul->hitpoints == 0))
        {
            mary.marystat = TUBE_MARY_ANGRY;
            npc->SndPlayRandom(NPC_STYP_WARNBANG);
        }
        else
        {
            npc->FacePlayer(dt, 2 * PI);
        }
        break;
    case TUBE_MARY_ANGRY:
        if (MarySpinUp(dt) != 0)
        {
            MaryzFury();
            MaryzBlessing();
            mary.marystat = TUBE_MARY_COOLOFF;
        }
        break;
    case TUBE_MARY_COOLOFF:
        if (MarySpinDown(dt) != 0)
        {
            mary.marystat = TUBE_MARY_WAIT;
        }
        break;
    }
}

S32 zNPCGoalTubeAttack::MarySpinUp(F32 dt)
{
    S32 retval = 0;
    zNPCRobot* npc = (zNPCRobot*)(psyche->clt_owner);
    npc->DBG_IsNormLog(eNPCDCAT_Thirteen, -1);
    if (mary.ang_spinrate > (8 * PI))
    {
        retval = 1;
    }
    else
    {
        mary.ang_spinrate += (2 * PI) * dt;
    }
    npc->frame->drot.angle = (dt * mary.ang_spinrate);
    npc->frame->mode |= 0x20;
    return retval;
}

S32 zNPCGoalTubeAttack::MarySpinDown(F32 dt)
{
    zNPCTubelet* npc = ((zNPCTubelet*)(psyche->clt_owner));

    S32 ret = 0;

    if (mary.ang_spinrate < npc->cfg_npc->spd_turnMax)
    {
        ret = 1;
    }
    else
    {
        mary.ang_spinrate = -((2 * PI) * dt - mary.ang_spinrate);
    }

    npc->frame->drot.angle = dt * mary.ang_spinrate;
    npc->frame->mode |= 0x20;
    return ret;
}

void zNPCGoalTubeAttack::MaryzFury()
{
    zNPCTubelet* npc = *(zNPCTubelet**)(&psyche->clt_owner);
    NPCHazard* haz = HAZ_Acquire();
    if (haz != NULL)
    {
        haz->ConfigHelper(NPC_HAZ_TUBELETBLAST);
        haz->SetNPCOwner(npc);
        xVec3* center = xEntGetCenter(npc);
        haz->Start(center, -1.0f);
        U32 sndID = xStrHash("Tube_pop");
        xSndPlay3D(sndID, 0.77f, 0.0f, 0x80, 0, &haz->pos_hazard, 5.0f, 15.0f, SND_CAT_GAME, 0.0f);
    }
}

void zNPCGoalTubeAttack::MaryzBlessing()
{
    zNPCTubelet* npc = ((zNPCTubelet*)(psyche->clt_owner));
    npc->hitpoints = 1;
    npc->tub_paul->hitpoints = 1;
    npc->tub_paul->tub_pete->hitpoints = 1;
}

void zNPCGoalTubeAttack::AttackDataReset()
{
    zNPCTubelet* npc = ((zNPCTubelet*)(psyche->clt_owner));
    flg_attack = 0;
    if (npc->tubestat == TUBE_STAT_ATTACK)
    {
        mary.marystat = TUBE_MARY_WAIT;
        mary.ang_spinrate = 0.0;
    }
    else
    {
        paul.flg_paul = 1;
        paul.cnt_nextlos = -1;
        paul.len_laser = 10.0f;
    }
}

S32 zNPCGoalTubeLasso::Enter(F32 dt, void* updCtxt)
{
    zNPCCommon* npc = ((zNPCCommon*)(psyche->clt_owner));
    npc->VelStop();
    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalTubeLasso::Exit(F32 dt, void* updCtxt)
{
    zNPCTubeSlave* npc = ((zNPCTubeSlave*)(psyche->clt_owner));

    zNPCGoalTubeDying* tubedie = (zNPCGoalTubeDying*)psyche->FindGoal(NPC_GOAL_TUBEDYING);
    tubedie->DeathByLasso(npc->Pos());

    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalTubeLasso::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* scene)
{
    S32 nextgoal = 0;
    ChkPrelimTran(trantype, &nextgoal);
    if (*trantype != GOAL_TRAN_NONE)
    {
        return nextgoal;
    }
    MoveTryToEscape(dt);
    return xGoal::Process(trantype, dt, updCtxt, NULL);
}

S32 zNPCGoalTubeBirth::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* scene)
{
    S32 nextgoal = 0;
    zNPCTubeSlave* npc = (zNPCTubeSlave*)(psyche->clt_owner);
    zNPCTubelet* pete = npc->tub_pete;
    ChkPrelimTran(trantype, &nextgoal);
    if (*trantype != GOAL_TRAN_NONE)
    {
        return nextgoal;
    }
    npc->PosStacked(&npc->frame->mat.pos);
    npc->frame->mode |= 1;
    xMat3x3Copy(&npc->frame->mat, (xMat3x3*)&pete->model->Mat);
    npc->frame->mode |= 0x40;
    return xGoal::Process(trantype, dt, updCtxt, NULL);
}

void zNPCGoalTubeLasso::ChkPrelimTran(en_trantype* trantype, int* nextgoal)
{
    zNPCTubeSlave* npc = (zNPCTubeSlave*)(psyche->clt_owner);

    switch (npc->tub_pete->tubestat)
    {
    case TUBE_STAT_BORN:
        *nextgoal = NPC_GOAL_TUBEBIRTH;
        *trantype = GOAL_TRAN_SET;
        break;
    case TUBE_STAT_DUCKLING:
        *nextgoal = NPC_GOAL_TUBEDUCKLING;
        *trantype = GOAL_TRAN_SET;
        break;
    case TUBE_STAT_ATTACK:
        *nextgoal = NPC_GOAL_TUBEATTACK;
        *trantype = GOAL_TRAN_SET;
        break;
    case TUBE_STAT_DYING:
    case TUBE_STAT_DEAD:
        *nextgoal = NPC_GOAL_TUBEDYING;
        *trantype = GOAL_TRAN_SET;
        break;
    }

    // ?????
    if (*trantype == GOAL_TRAN_NONE)
    {
        return;
    }
}

S32 zNPCGoalTubeBirth::Enter(F32 dt, void* updCtxt)
{
    zNPCTubeSlave* npc = ((zNPCTubeSlave*)(psyche->clt_owner));
    npc->hitpoints = npc->cfg_npc->pts_damage;
    npc->VelStop();
    return zNPCGoalCommon::Enter(dt, updCtxt);
}

void zNPCGoalTubeBirth::ChkPrelimTran(en_trantype* trantype, int* nextgoal)
{
    zNPCTubeSlave* npc = (zNPCTubeSlave*)(psyche->clt_owner);

    switch (npc->tub_pete->tubestat)
    {
    case TUBE_STAT_DUCKLING:
        *nextgoal = NPC_GOAL_TUBEDUCKLING;
        *trantype = GOAL_TRAN_SET;
        break;
    case TUBE_STAT_ATTACK:
        *nextgoal = NPC_GOAL_TUBEATTACK;
        *trantype = GOAL_TRAN_SET;
        break;
    case TUBE_STAT_LASSO:
        *nextgoal = NPC_GOAL_TUBELASSO;
        *trantype = GOAL_TRAN_SET;
        break;
    case TUBE_STAT_DYING:
    case TUBE_STAT_DEAD:
        *nextgoal = NPC_GOAL_TUBEDYING;
        *trantype = GOAL_TRAN_SET;
        break;
    case TUBE_STAT_BORN:
        break;
    }

    if (npc->hitpoints != 0)
    {
        return;
    }

    *nextgoal = NPC_GOAL_TUBEBONKED;
    *trantype = GOAL_TRAN_PUSH;
}

S32 zNPCGoalTubeBonked::Enter(F32 dt, void* updCtxt)
{
    zNPCTubeSlave* npc = (zNPCTubeSlave*)(this->psyche->clt_owner);
    npc->ModelAtomicHide(0, NULL);
    npc->ModelAtomicShow(1, NULL);
    npc->ModelAtomicHide(4, NULL);
    npc->hitpoints = 0;
    npc->VelStop();
    npc->tub_pete->PainInTheBand();
    this->tmr_recover = 3.0f;
    F32 spinrate = ((xurand() - 0.5f) * 2.0f * (3 * PI) + (5 * PI));
    this->ang_spinrate = -spinrate;
    npc->XYZVecToPos(&this->vec_offsetPete, npc->tub_pete->Pos());
    npc->SndPlayRandom(NPC_STYP_BONKED);
    npc->ShowerConfetti(NULL);
    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalTubeBonked::Exit(F32 dt, void* updCtxt)
{
    zNPCTubeSlave* npc = ((zNPCTubeSlave*)(psyche->clt_owner));
    npc->ModelAtomicShow(0, NULL);
    npc->ModelAtomicHide(1, NULL);
    npc->ModelAtomicHide(4, NULL);
    npc->ShowerConfetti(NULL);
    npc->SndPlayRandom(NPC_STYP_UNBONKED);
    return xGoal::Exit(dt, updCtxt);
}

void zNPCGoalTubeBonked::CheckForTran(en_trantype* trantype, S32* nextgoal)
{
    zNPCTubeSlave* npc = (zNPCTubeSlave*)(psyche->clt_owner);

    switch (npc->tub_pete->tubestat)
    {
    case TUBE_STAT_BORN:
        if (npc->hitpoints != 0)
        {
            *nextgoal = NPC_GOAL_TUBEBIRTH;
            *trantype = GOAL_TRAN_SET;
        }
        break;
    case TUBE_STAT_DUCKLING:
        if (npc->hitpoints != 0)
        {
            *nextgoal = NPC_GOAL_TUBEDUCKLING;
            *trantype = GOAL_TRAN_SET;
        }
        break;
    case TUBE_STAT_ATTACK:
        if (npc->hitpoints != 0)
        {
            *nextgoal = NPC_GOAL_TUBEATTACK;
            *trantype = GOAL_TRAN_SET;
        }
        break;
    case TUBE_STAT_LASSO:
        *nextgoal = NPC_GOAL_TUBELASSO;
        *trantype = GOAL_TRAN_SET;
        break;
    case TUBE_STAT_DYING:
    case TUBE_STAT_DEAD:
        *nextgoal = NPC_GOAL_TUBEDYING;
        *trantype = GOAL_TRAN_SET;
        break;
    }
}

S32 zNPCGoalTubeDead::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn)
{
    S32 nextgoal = 0;
    zNPCTubeSlave* npc = (zNPCTubeSlave*)(psyche->clt_owner);
    zNPCTubelet* pete = npc->tub_pete;
    ChkPrelimTran(trantype, &nextgoal);
    if (*trantype != GOAL_TRAN_NONE)
    {
        return nextgoal;
    }
    npc->PosStacked(&npc->frame->mat.pos);
    npc->frame->mode |= 1;
    xMat3x3Copy(&npc->frame->mat, (xMat3x3*)&pete->model->Mat);
    npc->frame->mode |= 0x40;
    return xGoal::Process(trantype, dt, updCtxt, NULL);
}

void zNPCGoalTubeDead::ChkPrelimTran(en_trantype* trantype, int* nextgoal)
{
    zNPCTubeSlave* npc = (zNPCTubeSlave*)(psyche->clt_owner);

    switch (npc->tub_pete->tubestat)
    {
    case TUBE_STAT_BORN:
        *nextgoal = NPC_GOAL_TUBEBIRTH;
        *trantype = GOAL_TRAN_SET;
        return;
    case TUBE_STAT_DUCKLING:
        *nextgoal = NPC_GOAL_TUBEDUCKLING;
        *trantype = GOAL_TRAN_SET;
        return;
    case TUBE_STAT_ATTACK:
        *nextgoal = NPC_GOAL_TUBEATTACK;
        *trantype = GOAL_TRAN_SET;
        return;
    case TUBE_STAT_LASSO:
        *nextgoal = NPC_GOAL_TUBELASSO;
        *trantype = GOAL_TRAN_SET;
        return;
    }
    return;
}

S32 zNPCGoalTubeDying::Enter(F32 dt, void* updCtxt)
{
    zNPCTubeSlave* npc = (zNPCTubeSlave*)(psyche->clt_owner);
    xModelInstance* mdl_body = npc->ModelAtomicHide(0, NULL);
    xModelInstance* mdl_wig;
    npc->ModelAtomicHide(1, NULL);
    mdl_wig = npc->ModelAtomicShow(4, NULL);
    if (flg_tubedying & 1)
    {
        xVec3Copy((xVec3*)(&mdl_wig->Mat->pos), &pos_lassoDeath);
    }
    else
    {
        mdl_wig->Mat->pos = mdl_body->Mat->pos;
    }
    flg_tubedying &= 0xFFFFFFFE;
    xVec3Copy(&npc->frame->mat.pos, (xVec3*)(&mdl_wig->Mat->pos));
    npc->frame->mode |= 1;
    mdl_wig->Mat->pos.y += 0.5f;
    spd_gothatway = 0.0f;
    cnt_loop = 2;
    hyt_was = mdl_wig->Mat->pos.y;
    scl_shrink = 1.0f;
    npc->flags2.flg_colCheck = 0;
    npc->flags2.flg_penCheck = 0;
    npc->chkby = 0;
    npc->penby = 0;
    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalTubeDying::Exit(F32 dt, void* updCtxt)
{
    zNPCTubeSlave* npc = ((zNPCTubeSlave*)(psyche->clt_owner));
    xModelInstance* mdl_wig = npc->ModelAtomicFind(4, -1, NULL);

    mdl_wig->Scale.assign(1.0f);
    npc->RestoreColFlags();

    return xGoal::Exit(dt, updCtxt);
}

void zNPCGoalTubeDying::DeathByLasso(const xVec3* vec)
{
    flg_tubedying |= 1;
    pos_lassoDeath = *vec;
}

S32 zNPCGoalDeflate::Enter(F32 dt, void* updCtxt)
{
    zNPCTubelet* npc = ((zNPCTubelet*)(this->psyche->clt_owner));

    npc->ModelAtomicHide(0, NULL);
    xModelInstance* mdl_flot = npc->ModelAtomicHide(1, NULL);
    xModelInstance* mdl_wig = npc->ModelAtomicShow(4, NULL);
    mdl_wig->Mat->pos = mdl_flot->Mat->pos;
    mdl_wig->Mat->pos.y += 0.5f;

    this->spd_gothatway = 0.0f;
    this->cnt_loop = 2;
    this->scl_shrink = 1.0f;
    npc->flags2.flg_colCheck = 0;
    npc->flags2.flg_penCheck = 0;
    npc->chkby = 0;
    npc->penby = 0;

    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalDeflate::Exit(F32 dt, void* updCtxt)
{
    zNPCTubelet* npc = ((zNPCTubelet*)(this->psyche->clt_owner));
    xModelInstance* mdl_wig = npc->ModelAtomicShow(4, NULL);

    mdl_wig->Scale.assign(1.0f);
    npc->RestoreColFlags();

    return xGoal::Exit(dt, updCtxt);
}

static RoboCopMap g_map_policeCounter[17] = {
    // clang-format off
    { NPC_TYPE_HAMMER, ROBOCOP_CNTR_HAMMER },
    { NPC_TYPE_HAMSPIN, ROBOCOP_CNTR_HAMMER },
    { NPC_TYPE_TARTAR, ROBOCOP_CNTR_TARTAR },
    { NPC_TYPE_GLOVE, ROBOCOP_CNTR_GLOVE },
    { NPC_TYPE_MONSOON, ROBOCOP_CNTR_MONSOON },
    { NPC_TYPE_SLEEPY, ROBOCOP_CNTR_SLEEPY },
    { NPC_TYPE_ARFDOG, ROBOCOP_CNTR_ARFDOG },
    { NPC_TYPE_ARFARF, ROBOCOP_CNTR_ARFARF },
    { NPC_TYPE_CHUCK, ROBOCOP_CNTR_CHUCK },
    { NPC_TYPE_TUBELET, ROBOCOP_CNTR_TUBELET },
    { NPC_TYPE_TUBESLAVE, ROBOCOP_CNTR_TUBELET },
    { NPC_TYPE_SLICK, ROBOCOP_CNTR_SLICK },
    { NPC_TYPE_FODDER, ROBOCOP_CNTR_FODDER },
    { NPC_TYPE_FODBOMB, ROBOCOP_CNTR_FODBOMB },
    { NPC_TYPE_FODBZZT, ROBOCOP_CNTR_FODBZZT },
    { NPC_TYPE_CHOMPER, ROBOCOP_CNTR_CHOMPER },
    // clang-format on
};

S32 RoboToCntrIdx(S32 robotId)
{
    S32 res = ROBOCOP_CNTR_FORCE;

    for (RoboCopMap* cur = g_map_policeCounter; cur->ntyp_robotype != 0; cur++)
    {
        if (cur->ntyp_robotype == robotId)
        {
            res = cur->idx_copCounter;
            break;
        }
    }

    return res;
}

static _xCounter* g_cntr_policeLineup[15] = {};

void CollectBountyOnRobot(S32 robotId)
{
    S32 cntrIdx = RoboToCntrIdx(robotId);

    if (cntrIdx >= 0 && cntrIdx < 15)
    {
        _xCounter* counter = g_cntr_policeLineup[cntrIdx];
        if (counter && counter->count == 0)
        {
            counter->count = 1;
        }
    }
}

// .text (113c)

void zNPCGoalDogLaunch::SilentSwimout(xVec3* unk1, xVec3* unk2, zMovePoint* unk3)
{
    this->ViciousAttack(unk1, unk2, unk3, 1);
}

U8 zNPCGoalPatThrow::CollReview(void*)
{
    return 0;
}

U8 zNPCGoalDogLaunch::CollReview(void*)
{
    return 0;
}

// .text (38)

void zNPCGoalDead::DieWithAWhimper()
{
    flg_deadinfo &= ~1;
    flg_deadinfo |= 2;
}

void zNPCGoalDead::DieWithABang()
{
    flg_deadinfo &= ~1;
    flg_deadinfo &= ~2;
}

// .text (18)

void xGoal::AddFlags(S32 flags)
{
    this->flg_able |= flags;
}

xPsyche* xGoal::GetPsyche() const
{
    return psyche;
}

// .text (130)

void zNPCCommon::XZVecToPlayer(xVec3* unk1, F32* unk2)
{
    XZVecToPos(unk1, xEntGetPos(&globals.player.ent), unk2);
}

RwMatrix* zNPCCommon::BoneMat(S32 unk) const
{
    return &this->model->Mat[unk];
}

RwV3d* zNPCCommon::BonePos(S32 unk) const
{
    return &this->model->Mat[unk].pos;
}

F32 zNPCCommon::XYZDstSqToPlayer(xVec3* unk)
{
    return XYZDstSqToPos(xEntGetPos(&globals.player.ent), unk);
}

void zNPCCommon::DuploNotice(en_SM_NOTICES, void*)
{
}

xVec3* zNPCCommon::Center()
{
    return xEntGetCenter(this);
}

void zNPCCommon::ModelScaleSet(F32 unk)
{
    ModelScaleSet(unk, unk, unk);
}

// .text (4c)

void NPCC_DrawPlayerPredict(S32, F32, F32)
{
}

void NPCLaser::ColorSet(const RwRGBA* unk1, const RwRGBA* unk2)
{
    rgba[0] = *unk1;
    rgba[1] = *unk2;
}

// .text (4)

void xDrawCyl(const xVec3*, F32, F32, U32)
{
}

// .text (178)

F32 NPCArena::Radius(F32 unk)
{
    return unk * rad_arena;
}

xVec3* NPCArena::Pos()
{
    return &pos_arena;
}

void NPCBattle::JoinBattle(zNPCRobot*)
{
}

S32 NPCArena::IncludesPlayer(F32 rad_thresh, xVec3* vec)
{
    if (NPCC_LampStatus())
    {
        xVec3* pos = xEntGetPos(&globals.player.ent);
        return NPCArena::IncludesPos(pos, rad_thresh, vec);
    }

    return 0;
}

NPCGlyph* GLYF_Acquire(en_npcglyph);

S32 NPCArena::IsReady()
{
    return rad_arena > 0.0f;
}

void NPCBattle::LeaveBattle(zNPCRobot*)
{
}

S32 NPCArena::IncludesNPC(zNPCCommon* npc, float dt, xVec3* vec)
{
    xVec3* pos = npc->Pos();
    return IncludesPos(pos, dt, vec);
}

F32 zNPCRobot::FacePlayer(F32 dt, F32 spd_turn)
{
    xVec3* pos = xEntGetPos(&globals.player.ent);
    return FacePos(pos, dt, spd_turn);
}

void NPCArena::DBG_Draw(zNPCCommon*)
{
}

zMovePoint* zNPCArfArf::GetTelepoint(S32 unk)
{
    return nav_dest;
}

// .text (28)

xVec3& xVec3::assign(float dt)
{
    return assign(dt, dt, dt);
}

// .text (18)

void NPCHazard::SetNPCOwner(zNPCCommon* owner)
{
    this->npc_owner = owner;
}

void NPCHazard::NotifyCBSet(HAZNotify* noter)
{
    this->cb_notify = noter;
}

S32 HAZNotify::Notify(en_haznote note, NPCHazard* haz)
{
    return 0;
}
