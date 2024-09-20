#include "xVec3.h"
#include "xMath.h"
#include "xMath3.h"
#include "zNPCGoalRobo.h"
#include "zNPCTypeRobot.h"
#include "zNPCHazard.h"
#include "zGlobals.h"
#include "zNPCTypeCommon.h"
#include "zNPCGoalCommon.h"
#include "zNPCGoalStd.h"
#include "zNPCSupport.h"
#include "zNPCGoals.h"
#include "zGameExtras.h"
#include "zNPCSupport.h"
#include "zNPCTypeBoss.h"
#include "zNPCSupplement.h"
#include "zNPCMessenger.h"

#include "zNPCMgr.h"

xFactoryInst* GOALCreate_Robotic(S32 who, RyzMemGrow* grow, void*)
{
    xGoal* goal = NULL; // r16
    switch (who)
    {
    case 0x4e475230:
        goal = new (who, grow) zNPCGoalNotice(who);
        break;
    case 0x4e475231:
        goal = new (who, grow) zNPCGoalTaunt(who);
        break;
    case 0x4e475232:
        goal = new (who, grow) zNPCGoalEvade(who);
        break;
    case 0x4e475233:
        goal = new (who, grow) zNPCGoalGoHome(who);
        break;
    case 0x4e475234:
        goal = new (who, grow) zNPCGoalChase(who);
        break;
    case 0x4e475235:
        goal = new (who, grow) zNPCGoalAlert(who);
        break;
    case 0x4e475236:
        goal = new (who, grow) zNPCGoalAlertFodder(who);
        break;
    case 0x4e475237:
        goal = new (who, grow) zNPCGoalAlertFodBomb(who);
        break;
    case 0x4e475238:
        goal = new (who, grow) zNPCGoalAlertChomper(who);
        break;
    case 0x4e475239:
        goal = new (who, grow) zNPCGoalAlertFodBzzt(who);
        break;
    case 0x4e47523a:
        goal = new (who, grow) zNPCGoalAlertHammer(who);
        break;
    case 0x4e47523b:
        goal = new (who, grow) zNPCGoalAlertTarTar(who);
        break;
    case 0x4e47523c:
        goal = new (who, grow) zNPCGoalAlertGlove(who);
        break;
    case 0x4e47523d:
        goal = new (who, grow) zNPCGoalAlertMonsoon(who);
        break;
    case 0x4e47523e:
        goal = new (who, grow) zNPCGoalAlertSleepy(who);
        break;
    case 0x4e47523f:
        goal = new (who, grow) zNPCGoalAlertArf(who);
        break;
    case 0x4e475240:
        goal = new (who, grow) zNPCGoalAlertPuppy(who);
        break;
    case 0x4e475241:
        goal = new (who, grow) zNPCGoalAlertChuck(who);
        break;
    case 0x4e475242:
        goal = new (who, grow) zNPCGoalAlertTubelet(who);
        break;
    case 0x4e475243:
        goal = new (who, grow) zNPCGoalAlertSlick(who);
        break;
    case 0x4e475244:
        goal = new (who, grow) zNPCGoalAttackCQC(who);
        break;
    case 0x4e475245:
        goal = new (who, grow) zNPCGoalAttackFodder(who);
        break;
    case 0x4e475246:
        goal = new (who, grow) zNPCGoalAttackChomper(who);
        break;
    case 0x4e475247:
        goal = new (who, grow) zNPCGoalAttackHammer(who);
        break;
    case 0x4e475248:
        goal = new (who, grow) zNPCGoalAttackTarTar(who);
        break;
    case 0x4e475249:
        goal = new (who, grow) zNPCGoalAttackMonsoon(who);
        break;
    case 0x4e47524a:
        goal = new (who, grow) zNPCGoalAttackArf(who);
        break;
    case 0x4e47524b:
        goal = new (who, grow) zNPCGoalAttackArfMelee(who);
        break;
    case 0x4e47524c:
        goal = new (who, grow) zNPCGoalAttackChuck(who);
        break;
    case 0x4e47524d:
        goal = new (who, grow) zNPCGoalAttackSlick(who);
        break;
    case 0x4e47524e:
        goal = new (who, grow) zNPCGoalLassoBase(who);
        break;
    case 0x4e47524f:
        goal = new (who, grow) zNPCGoalLassoGrab(who);
        break;
    case 0x4e475250:
        goal = new (who, grow) zNPCGoalLassoThrow(who);
        break;
    case 0x4e475251:
        goal = new (who, grow) zNPCGoalEvilPat(who);
        break;
    case 0x4e475252:
        goal = new (who, grow) zNPCGoalStunned(who);
        break;
    case 0x4e475253:
        goal = new (who, grow) zNPCGoalPatCarry(who);
        break;
    case 0x4e475254:
        goal = new (who, grow) zNPCGoalPatThrow(who);
        break;
    case 0x4e475255:
        goal = new (who, grow) zNPCGoalDogLaunch(who);
        break;
    case 0x4e475256:
        goal = new (who, grow) zNPCGoalDogBark(who);
        break;
    case 0x4e475257:
        goal = new (who, grow) zNPCGoalDogDash(who);
        break;
    case 0x4e475258:
        goal = new (who, grow) zNPCGoalDogPounce(who);
        break;
    case 0x4e475259:
        goal = new (who, grow) zNPCGoalTeleport(who);
        break;
    case 0x4e47525a:
        goal = new (who, grow) zNPCGoalHokeyPokey(who);
        break;
    case 0x4e47525b:
        goal = new (who, grow) zNPCGoalDamage(who);
        break;
    case 0x4e47525c:
        goal = new (who, grow) zNPCGoalWound(who);
        break;
    case 0x4e47525d:
        goal = new (who, grow) zNPCGoalBashed(who);
        break;
    case 0x4e47525e:
        goal = new (who, grow) zNPCGoalKnock(who);
        break;
    case 0x4e47525f:
        goal = new (who, grow) zNPCGoalAfterlife(who);
        break;
    case 0x4e475260:
        goal = new (who, grow) zNPCGoalRespawn(who);
        break;
    case 0x4e475261:
        goal = new (who, grow) zNPCGoalDeflate(who);
        break;
    case 0x4e475262:
        goal = new (who, grow) zNPCGoalTubePal(who);
        break;
    case 0x4e475263:
        goal = new (who, grow) zNPCGoalTubeDuckling(who);
        break;
    case 0x4e475264:
        goal = new (who, grow) zNPCGoalTubeAttack(who);
        break;
    case 0x4e475265:
        goal = new (who, grow) zNPCGoalTubeLasso(who);
        break;
    case 0x4e475267:
        goal = new (who, grow) zNPCGoalTubeBirth(who);
        break;
    case 0x4e475269:
        goal = new (who, grow) zNPCGoalTubeBonked(who);
        break;
    case 0x4e47526a:
        goal = new (who, grow) zNPCGoalTubeDying(who);
        break;
    case 0x4e47526b:
        goal = new (who, grow) zNPCGoalTubeDead(who);
        break;
    }

    return goal;
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

S32 zNPCGoalAlertFodder::Enter(F32 dt, void* updCtxt)
{
    flg_attack = 0;
    tmr_alertfod = 0.0f;
    alertfod = FODDER_ALERT_NOTICE;
    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalAlertPuppy::Enter(F32 dt, void* updCtxt)
{
    alertpup = PUPPY_ALERT_YAPPY;
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

        // needs to be a ternary expression to match
        this->tmr_alertfod = (-1.0f > this->tmr_alertfod - dt) ? -1.0f : this->tmr_alertfod - dt;

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

int zNPCGoalAttackFodder::CattleNotify::Notify(en_haznote hazNote, NPCHazard* haz)
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

S32 zNPCGoalAttackCQC::Enter(F32 dt, void* updCtxt)
{
    zNPCCommon* npc = (zNPCCommon*)this->psyche->clt_owner;
    flg_attack = 0;
    return this->zNPCGoalPushAnim::Enter(dt, updCtxt);
}

S32 zNPCGoalAttackHammer::Exit(F32 dt, void* updCtxt)
{
    FXStreakDone();
    return this->zNPCGoalPushAnim::Exit(dt, updCtxt);
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

S32 zNPCGoalKnock::StreakPrep()
{
    streakID = NPCC_StreakCreate(NPC_STRK_TOSSEDROBOT);
}

S32 zNPCGoalAttackHammer::FXStreakPrep()
{
    streakID[0] = NPCC_StreakCreate(NPC_STRK_HAMMERSMASH_HORZ);
    streakID[1] = NPCC_StreakCreate(NPC_STRK_HAMMERSMASH_VERT);
}

S32 zNPCGoalAttackArfMelee::FXStreakPrep()
{
    for (int i = 0; i < 4; i++)
    {
        streakID[i] = NPCC_StreakCreate(NPC_STRK_ARFMELEE);
    }
}

S32 zNPCGoalAttackArf::SetAttackMode(S32 a, S32 b)
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

S32 zNPCGoalAttackFodder::Exit(F32 dt, void* updCtxt)
{
    if (this->haz_cattle)
    {
        this->haz_cattle->Discard();
    }

    this->haz_cattle = NULL;
    return this->zNPCGoalPushAnim::Exit(dt, updCtxt);
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

    if (this->haz_cattle->tmr_remain < 1.0f)
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

S32 zNPCGoalBashed::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* scene)
{
    xEnt* ent = ((xEnt*)(psyche->clt_owner));
    ent->frame->vel.y = -(dt * 30.0f - ent->frame->vel.y);
    ent->frame->mode |= 4;
    return this->zNPCGoalLoopAnim::Process(trantype, dt, updCtxt, scene);
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

    npc->ThrottleAdjust(dt, 6.0f, -1.0f);
    npc->ThrottleApply(dt, &dir, 0);
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

void xGoal::AddFlags(S32 flags)
{
    this->flg_able |= flags;
}

xPsyche* xGoal::GetPsyche() const
{
    return psyche;
}

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

void NPCC_DrawPlayerPredict(int, float, float)
{
}

void NPCLaser::ColorSet(const RwRGBA* unk1, const RwRGBA* unk2)
{
    rgba[0] = *unk1;
    rgba[1] = *unk2;
}

void xDrawCyl(const xVec3*, float, float, unsigned int)
{
}

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

S32 NPCArena::IsReady()
{
    return rad_arena > 1.0f;
}

void NPCBattle::LeaveBattle(zNPCRobot*)
{
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

/*
void zNPCHazard::SetNPCOwner(zNPCCommon* owner)
{
}
*/

S32 HAZNotify::Notify(en_haznote note, NPCHazard* haz)
{
    return 0;
}

void xMat3x3RMulVec(xVec3* o, const xMat3x3* m, const xVec3* v)
{
    F32 x = m->right.x * v->x + m->up.x * v->y + m->at.x * v->z;
    F32 y = m->right.y * v->x + m->up.y * v->y + m->at.y * v->z;
    F32 z = m->right.z * v->x + m->up.z * v->y + m->at.z * v->z;

    o->x = x;
    o->y = y;
    o->z = z;
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

S32 zNPCGoalAttackTarTar::Enter(F32 dt, void* updCtxt)
{
    ((zNPCCommon*)(psyche->clt_owner))->VelStop();
    flg_pushanim |= 2;
    idx_launch = 1;
    flg_attack = 0;
    xVec3Copy(&pos_aimbase, &g_O3);
    return zNPCGoalPushAnim::Enter(dt, updCtxt);
}

S32 zNPCGoalAttackChomper::Enter(F32 dt, void* updCtxt)
{
    zNPCCommon* com = ((zNPCCommon*)(psyche->clt_owner));
    com->VelStop();
    com->SndPlayRandom(NPC_STYP_ATTACK);

    return zNPCGoalPushAnim::Enter(dt, updCtxt);
}

S32 zNPCGoalEvilPat::Enter(F32 dt, void* updCtxt)
{
    zNPCCommon* com = ((zNPCCommon*)(psyche->clt_owner));

    S32 typ = com->SelfType();

    if ((typ - 'NT\0\0') == 'R3')
    {
        com->flg_vuln |= 0x80000000;
    }

    GlyphStart();

    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalEvilPat::Exit(F32 dt, void* updCtxt)
{
    zNPCCommon* com = ((zNPCCommon*)(psyche->clt_owner));

    S32 typ = com->SelfType();

    if ((typ - 'NT\0\0') == 'R3')
    {
        com->flg_vuln &= 0x7FFFFFFF;
    }

    *(F32*)(&com->snd_queue[6].flg_snd) = -1.0f;

    GlyphStop();

    return xGoal::Exit(dt, updCtxt);
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
        *(F32*)(&npc->snd_queue[6].flg_snd) = stuntime + (stuntime * blah);
        return 1;
    }
    return 0;
}

S32 zNPCGoalEvilPat::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* scene)
{
    U32 nextgoal;

    zNPCRobot* npc = ((zNPCRobot*)(psyche->clt_owner));

    if (npc->tmr_stunned < 0.0f)
    {
        *trantype = GOAL_TRAN_SET;
        nextgoal = 'NGR4';
    }
    else
    {
        *trantype = GOAL_TRAN_PUSH;
        nextgoal = 'NGRa';
    }

    return (*trantype != GOAL_TRAN_NONE) ? nextgoal : xGoal::Process(trantype, dt, updCtxt, scene);
}

S32 zNPCGoalTaunt::Enter(F32 dt, void* updCtxt)
{
    zNPCCommon* npc = ((zNPCCommon*)(psyche->clt_owner));
    npc->SndPlayRandom(NPC_STYP_LAUGH);
    zNPCGoalLoopAnim::Enter(dt, updCtxt);
}

S32 zNPCGoalAttackArfMelee::Enter(F32 dt, void* updCtxt)
{
    zNPCCommon* npc = ((zNPCCommon*)(psyche->clt_owner));
    FXStreakPrep();
    npc->SndPlayRandom(NPC_STYP_PUNCH);
    zNPCGoalPushAnim::Enter(dt, updCtxt);
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

void zNPCGoalAttackHammer::TellBunnies()
{
    static en_NPCTYPES toTypes[3] =
    {
        NPC_TYPE_FODDER,
        NPC_TYPE_FODBOMB,
        NPC_TYPE_CHOMPER
    };

    zNPCCommon* npc = ((zNPCCommon*)(psyche->clt_owner));

    zNPCMsg_AreaNotify
    (
        npc,
        NPC_MID_BUNNYHOP,
        8.0f,
        18,
        (en_NPCTYPES)toTypes
    );
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

S32 zNPCGoalHokeyPokey::Enter(F32 dt, void* updCtxt)
{
    zNPCFodBzzt* bzzt = ((zNPCFodBzzt*)(psyche->clt_owner));
    flg_hokey = (xrand() >> 0x17) & 1;
    flg_hokey |= 2;
    ang_spinrate = 0.0f;
    bzzt->DiscoReset();
    return zNPCGoalLoopAnim::Enter(dt, updCtxt);
}

S32 zNPCGoalTubeBirth::Enter(F32 dt, void* updCtxt)
{
    zNPCTubeSlave* npc = ((zNPCTubeSlave*)(psyche->clt_owner));
    npc->hitpoints = npc->cfg_npc->pts_damage;
    npc->VelStop();
    return zNPCGoalCommon::Enter(dt, updCtxt);
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

S32 zNPCGoalAttackMonsoon::Enter(F32 dt, void* updCtxt)
{
    idx_launch = 0;
    flg_pushanim |= 2;
    return zNPCGoalPushAnim::Enter(dt, updCtxt);
}

S32 zNPCGoalAlertArf::Enter(F32 dt, void* updCtxt)
{
    alertarf = ARF_ALERT_READY;
    tmr_reload = -1.0f;
    flg_user = 1;

    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalAlertHammer::Enter(F32 dt, void* updCtxt)
{
    flg_attack = 0;
    alertham = HAMMER_ALERT_NOTICE;

    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalAlertChuck::Enter(F32 dt, void* updCtxt)
{
    zNPCCommon* npc = ((zNPCCommon*)(psyche->clt_owner));
    alertchuk = CHUCK_ALERT_NOTICE;
    npc->VelStop();
    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalTubeAttack::Enter(F32 dt, void* updCtxt)
{
    zNPCCommon* npc = ((zNPCCommon*)(psyche->clt_owner));
    npc->VelStop();
    AttackDataReset();
    return zNPCGoalCommon::Enter(dt, updCtxt);
}

void zNPCGoalTubeAttack::MaryzBlessing()
{
    zNPCTubelet* npc = ((zNPCTubelet*)(psyche->clt_owner));
    npc->hitpoints = 1;
    npc->tub_paul->hitpoints = 1;
    npc->tub_paul->tub_pete->hitpoints = 1;
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

S32 zNPCGoalAlertChomper::Enter(F32 dt, void* updCtxt)
{
    zNPCCommon* npc = ((zNPCCommon*)(psyche->clt_owner));
    alertchomp = CHOMPER_ALERT_NOTICE;
    npc->VelStop();
    pos_evade = g_O3;
    tmr_evade = -1.0f;
    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalAlertMonsoon::Enter(F32 dt, void* updCtxt)
{
    zNPCCommon* npc = ((zNPCCommon*)(psyche->clt_owner));
    flg_attack = 0;
    alertmony = MONSOON_ALERT_NOTICE;
    tmr_reload = 0.0;
    xVec3Copy(&pos_corner, npc->Pos());
    zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalTubeLasso::Enter(F32 dt, void* updCtxt)
{
    zNPCCommon* npc = ((zNPCCommon*)(psyche->clt_owner));
    npc->VelStop();
    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalTubeDying::DeathByLasso(const xVec3* vec)
{
    flg_tubedying |= 1;
    pos_lassoDeath = *vec;
}

S32 zNPCGoalAlertSlick::Resume(F32 dt, void* updCtxt)
{
    zNPCCommon* npc = ((zNPCCommon*)(psyche->clt_owner));
    npc->VelStop();
    flg_info |= 2;
    return zNPCGoalCommon::Resume(dt, updCtxt);
}

S32 zNPCGoalAlertSlick::Enter(F32 dt, void* updCtxt)
{
    zNPCCommon* npc = ((zNPCCommon*)(psyche->clt_owner));
    alertslik = SLICK_ALERT_BEGIN;
    tmr_reload = -1.0f;
    npc->VelStop();
    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalAttackSlick::FireOne(S32)
{
    zNPCRobot* npc = ((zNPCRobot*)(psyche->clt_owner));
    return npc->LaunchProjectile(NPC_HAZ_OILBUBBLE, 9.0f, 4.0f, NPC_MDLVERT_ATTACK, 4.0f, 0.1f);
}

S32 zNPCGoalAttackChuck::BombzAway(F32 param_1)
{
    zNPCRobot* npc = ((zNPCRobot*)(psyche->clt_owner));
    npc->SndPlayRandom(NPC_STYP_ATTACK);
    return npc->LaunchProjectile(NPC_HAZ_CHUCKBOMB, 15.0f, 3.0f, NPC_MDLVERT_ATTACK, 4.0f, 0.0f);
}

S32 zNPCGoalAttackChuck::Exit(F32 dt, void* updCtxt)
{
    zNPCCommon* npc = ((zNPCCommon*)(psyche->clt_owner));
    npc->ModelAtomicHide(1, NULL);
    return zNPCGoalPushAnim::Exit(dt, updCtxt);
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

S32 zNPCGoalAlertHammer::Exit(F32 dt, void* updCtxt)
{
    zNPCHammer* npc = ((zNPCHammer*)(psyche->clt_owner));
    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalLassoBase::Exit(F32 dt, void* updCtxt)
{
    zNPCCommon* npc = ((zNPCCommon*)(psyche->clt_owner));
    npc->LassoNotify(LASS_EVNT_ENDED);
    return xGoal::Exit(dt, updCtxt);
}

// Equivalent. Weirdness with reloading zNPCFodBzzt::cnt_alerthokey and regalloc.
S32 zNPCGoalAlertFodBzzt::Exit(F32 dt, void* updCtxt)
{
    zNPCFodBzzt::cnt_alerthokey--;
    zNPCFodBzzt::cnt_alerthokey = ~(zNPCFodBzzt::cnt_alerthokey >> 31) & zNPCFodBzzt::cnt_alerthokey;

    zNPC_SNDStop(eNPCSnd_FodBzztAttack);
    zNPCTubelet* npc = ((zNPCTubelet*)(psyche->clt_owner));
    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalAlertArf::Exit(F32 dt, void* updCtxt)
{
    zNPCArfArf* npc = ((zNPCArfArf*)(psyche->clt_owner));
    flg_info = 0;
    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalAlertMonsoon::Exit(F32 dt, void* updCtxt)
{
    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalAlertTubelet::Resume(F32 dt, void* updCtxt)
{
    zNPCTubelet* npc = ((zNPCTubelet*)(psyche->clt_owner));
    npc->tubestat = TUBE_STAT_ATTACK;
    return zNPCGoalCommon::Resume(dt, updCtxt);
}

S32 zNPCGoalTubeAttack::Resume(F32 dt, void* updCtxt)
{
    zNPCTubelet* npc = ((zNPCTubelet*)(psyche->clt_owner));
    npc->VelStop();
    AttackDataReset();
    return zNPCGoalCommon::Resume(dt, updCtxt);
}

S32 zNPCGoalAlertPuppy::Resume(F32 dt, void* updCtxt)
{
    zNPCChomper* npc = ((zNPCChomper*)(psyche->clt_owner));
    flg_info |= 2;
    return zNPCGoalCommon::Resume(dt, updCtxt);
}

S32 zNPCGoalAlertArf::Resume(F32 dt, void* updCtxt)
{
    zNPCArfArf* npc = ((zNPCArfArf*)(psyche->clt_owner));
    flg_info |= 2;
    flg_user = 1;
    return zNPCGoalCommon::Resume(dt, updCtxt);
}

S32 zNPCGoalAlertChuck::Resume(F32 dt, void* updCtxt)
{
    zNPCChuck* npc = ((zNPCChuck*)(psyche->clt_owner));
    flg_info |= 2;
    return zNPCGoalCommon::Resume(dt, updCtxt);
}

S32 zNPCGoalAlertMonsoon::Resume(F32 dt, void* updCtxt)
{
    alertmony = MONSOON_ALERT_BEGIN;
    flg_attack = 0;
    return zNPCGoalCommon::Resume(dt, updCtxt);
}

S32 zNPCGoalAlertFodBomb::Resume(F32 dt, void* updCtxt)
{
    flg_info |= 2;
    return zNPCGoalCommon::Resume(dt, updCtxt);
}

S32 zNPCGoalAttackArf::Exit(F32 dt, void* updCtxt)
{
    flg_attack = 0;
    return zNPCGoalPushAnim::Exit(dt, updCtxt);
}

S32 zNPCGoalAttackArfMelee::Exit(F32 dt, void* updCtxt)
{
    FXStreakDone();
    return zNPCGoalPushAnim::Exit(dt, updCtxt);
}

S32 zNPCGoalAttackArf::LaunchBone(F32 dt, S32 param_2)
{
    zNPCArfArf* npc = ((zNPCArfArf*)(psyche->clt_owner));
    return npc->LaunchProjectile(NPC_HAZ_ARFBONE, 8.0, 3.5, NPC_MDLVERT_ATTACK, 4.0f, 0.35f);
}

void zNPCGoalKnock::StreakDone()
{
    xFXStreakStop(streakID);
    streakID = 0xDEAD;
}

void zNPCGoalAttackArfMelee::FXStreakDone()
{
    for (S32 i = 0; i < (S32)(sizeof(this->streakID) / sizeof(U32)); i++)
    {
        xFXStreakStop(streakID[i]);
        streakID[i] = 0xDEAD;
    }
}

S32 zNPCGoalAttackHammer::FXStreakDone()
{
    for (S32 i = 0; i < (S32)(sizeof(this->streakID) / sizeof(U32)); i++)
    {
        xFXStreakStop(streakID[i]);
        streakID[i] = 0xDEAD;
    }
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

S32 zNPCGoalWound::NPCMessage(NPCMsg* msg)
{
    switch (msg->msgid)
    {
        case NPC_MID_DAMAGE:
            return 1;
    }
    return 0;
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

S32 zNPCGoalAlertTubelet::PeteAttackBegin()
{
    zNPCTubelet* npc = (zNPCTubelet *)(psyche->clt_owner);
    npc->pete_attack_last = 1;
    zNPC_SNDPlay3D(eNPCSnd_TubeAttack, npc);
}

S32 zNPCGoalAlertGlove::Resume(F32 dt, void* updCtxt)
{
    zNPCCommon* npc = (zNPCCommon *)(psyche->clt_owner);
    npc->flg_vuln &= 0xffefffff;
    npc->flg_vuln &= 0x7dfeffff;
    tmr_minAttack = 1.0;
    zNPC_SNDPlay3D(eNPCSnd_GloveAttack, npc);
    zNPCGoalCommon::Resume(dt, updCtxt);
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

S32 zNPCGoalEvilPat::InputStun(NPCStunInfo* info)
{
    xPsyche* psyche = xGoal::GetPsyche();
    zNPCGoalStunned* stunned = (zNPCGoalStunned *)psyche->FindGoal(NPC_GOAL_STUNNED);
    return stunned == NULL ? 0 : stunned->InputInfo(info);
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

S32 zNPCGoalAlertFodBzzt::Suspend(F32 dt, void* updCtxt)
{
    zNPCGlove* npc = ((zNPCGlove*)(psyche->clt_owner));
    zNPC_SNDStop(eNPCSnd_FodBzztAttack);
    xGoal::Suspend(dt, updCtxt);
}

S32 zNPCGoalAlertGlove::Suspend(F32 dt, void* updCtxt)
{
    zNPCGlove* npc = ((zNPCGlove*)(psyche->clt_owner));
    npc->flg_vuln |= 0x00100000;
    npc->flg_vuln |= 0x82010000;
    zNPC_SNDStop(eNPCSnd_GloveAttack);
    xGoal::Suspend(dt, updCtxt);
}

void NPCArena::IncludesNPC(zNPCCommon* npc, float dt, xVec3* vec)
{
    xVec3* pos = npc->Pos();
    IncludesPos(pos, dt, vec);
}

S32 zNPCGoalDamage::NPCMessage(NPCMsg* msg)
{
    U32 ret = 1;
    xPsyche* psyche = (xPsyche *)xGoal::GetPsyche();
    switch (msg->msgid)
    {
    case NPC_MID_DAMAGE:
        if
        (
            (msg->infotype == NPC_MDAT_DAMAGE) &&
            ((msg->dmgdata.dmg_type == DMGTYP_SURFACE) ||
            (msg->dmgdata.dmg_type == DMGTYP_DAMAGE_SURFACE))
        )
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

xVec3& xVec3::assign(float dt)
{
    return assign(dt, dt, dt);
}

F32 EASE(float rhs)
{
    return rhs * ((rhs * 3.0f) - (rhs * 2.0f) * rhs);
}

F32 LERP(F32 x, F32 y, F32 z)
{
    return (x * (z - y)) + y;
}

U8 LERP(float x, U8 y, U8 z)
{
    return (U8)(x * (z - y)) + y;
}