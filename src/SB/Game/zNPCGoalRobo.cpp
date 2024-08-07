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
