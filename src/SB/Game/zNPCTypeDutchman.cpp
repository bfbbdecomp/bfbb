#include "xVec3.h"
#include "xMath3.h"
#include "zNPCTypeDutchman.h"

#include <types.h>

namespace
{
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

void zNPCDutchman::Setup()
{
    zNPCSubBoss::Setup();
}

void zNPCDutchman::Destroy()
{
    zNPCCommon::Destroy();
    dutchman_count--;
}

void zNPCDutchman::Render()
{
    zNPCDutchman::render_debug();
}

void zNPCDutchman::Damage(en_NPC_DAMAGE_TYPE, xBase*, const xVec3*)
{
    xPsyche* psy = this->psy_instinct;
    psy->GIDOfActive();
}

// double zNPCDutchman::goal_delay()
// {
//     move_info* tempR4;
//     tempR4 = &this->move;
//     move = *tempR4;
// }

void zNPCDutchman::render_debug()
{
}

void zNPCDutchman::update_animation(float)
{
}

void zNPCDutchman::stop_hand_trail()
{
}

void zNPCDutchman::add_splash(const xVec3&, float)
{
}


void zNPCDutchman::stop_flames()
{
}

void zNPCDutchman::vanish()
{
}

void zNPCDutchman::reset_speed()
{
}

//S32 zNPCGoalDutchmanInitiate::Exit(F32 dt, void* updCtxt)
//{
// owner;
// return xGoal::Exit(dt, updCtxt);
//}

S32 zNPCGoalDutchmanIdle::Exit(F32 dt, void* updCtxt)
{
    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalDutchmanDisappear::Exit(F32 dt, void* updCtxt)
{
    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalDutchmanTeleport::Exit(F32 dt, void* updCtxt)
{
    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalDutchmanReappear::Exit(F32 dt, void* updCtxt)
{
    owner.reset_speed();
    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalDutchmanBeam::Exit(F32 dt, void* updCtxt)
{
    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalDutchmanFlame::Exit(F32 dt, void* updCtxt)
{
    S32 tempR0;
    tempR0 = this->owner.flg_vuln;
    tempR0 = tempR0 &= 0xFEFFFFFF;
    this->owner.flg_vuln = tempR0;

    owner.stop_flames();
    owner.stop_hand_trail();
    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalDutchmanCaught::Exit(float dt, void* updCtxt)
{
    return xGoal::Exit(dt, updCtxt);
}

U8 zNPCDutchman::PhysicsFlags() const
{
    return 3;
}

U8 zNPCDutchman::ColPenByFlags() const
{
    return 16;
}

U8 zNPCDutchman::ColChkByFlags() const
{
    return 16;
}

U8 zNPCDutchman::ColPenFlags() const
{
    return 0;
}

U8 zNPCDutchman::ColChkFlags() const
{
    return 0;
}
