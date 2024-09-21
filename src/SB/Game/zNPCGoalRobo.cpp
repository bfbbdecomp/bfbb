#include "xVec3.h"
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

F32 f_0 = 0.0f; // needed at file level to change scheduling for

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
    case NPC_GOAL_ALERT:
        goal = new (who, grow) zNPCGoalChase(who);
        break;
    case NPC_GOAL_ALERTFODDER:
        goal = new (who, grow) zNPCGoalAlert(who);
        break;
    case NPC_GOAL_ALERTFODBOMB:
        goal = new (who, grow) zNPCGoalAlertFodder(who);
        break;
    case NPC_GOAL_ALERTFODBZZT:
        goal = new (who, grow) zNPCGoalAlertFodBomb(who);
        break;
    case NPC_GOAL_ALERTCHOMPER:
        goal = new (who, grow) zNPCGoalAlertChomper(who);
        break;
    case NPC_GOAL_ALERTHAMMER:
        goal = new (who, grow) zNPCGoalAlertFodBzzt(who);
        break;
    case NPC_GOAL_ALERTTARTAR:
        goal = new (who, grow) zNPCGoalAlertHammer(who);
        break;
    case NPC_GOAL_ALERTGLOVE:
        goal = new (who, grow) zNPCGoalAlertTarTar(who);
        break;
    case NPC_GOAL_ALERTMONSOON:
        goal = new (who, grow) zNPCGoalAlertGlove(who);
        break;
    case NPC_GOAL_ALERTSLEEPY:
        goal = new (who, grow) zNPCGoalAlertMonsoon(who);
        break;
    case NPC_GOAL_ALERTARF:
        goal = new (who, grow) zNPCGoalAlertSleepy(who);
        break;
    case NPC_GOAL_ALERTPUPPY:
        goal = new (who, grow) zNPCGoalAlertArf(who);
        break;
    case NPC_GOAL_ALERTCHUCK:
        goal = new (who, grow) zNPCGoalAlertPuppy(who);
        break;
    case NPC_GOAL_ALERTTUBELET:
        goal = new (who, grow) zNPCGoalAlertChuck(who);
        break;
    case  NPC_GOAL_CHASE:
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

S32 zNPCGoalAlertFodder::Enter(F32 dt, void* updCtxt)
{
    flg_attack = 0;
    tmr_alertfod = f_0; // need non-const float to get scheduling right
    alertfod = FODDER_ALERT_NOTICE;
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
            nextgoal = NPC_GOAL_ATTACKFODDER;
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

#define f_1370 1.0f

S32 zNPCGoalAttackFodder::SyncCattleProd()
{
    xVec3 vec1;
    zNPCRobot* npc = (zNPCRobot*)this->psyche->clt_owner;

    S32 var1 = this->flg_attack & 0x3;

    if (!this->haz_cattle)
    {
        return var1;
    }

    if (this->haz_cattle->tmr_remain < f_1370)
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
    // unk2->alpha = unk1->alpha;
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
    // TODO: not matching, not sure what this is
    return this->rad_arena == 1.0f; // @1130 check this float value
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
