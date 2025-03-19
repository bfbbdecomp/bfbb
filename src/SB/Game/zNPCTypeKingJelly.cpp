#include "zNPCTypeKingJelly.h"

#include <types.h>
#include "string.h"

#define f1868 1.0f
#define f1869 0.0f
#define f2105 0.2f
#define f2106 0.1f

#define ANIM_Unknown 0 // 0x0
#define ANIM_Idle01 1 // 0x04
#define ANIM_Idle02 2 // 0x08       animetable new state
#define ANIM_Idle03 3 // 0xC
#define ANIM_Fidget01 4 //
#define ANIM_Fidget02 5
#define ANIM_Fidget03 6
#define ANIM_Taunt01 7 // 0x1c
#define ANIM_Attack01 8 //0x20               DEPRACATED
#define ANIM_Damage01 9 //0x24
#define ANIM_Damage02 10 //0x28
#define ANIM_Death01 11 //0x2c
#define ANIM_AttackWindup01 12 //0x30
#define ANIM_AttackLoop01 13 //0x34
#define ANIM_AttackEnd01 14 //0x38
#define ANIM_SpawnKids01 15 //0x3C
#define ANIM_Attack02Windup01 16
#define ANIM_Attack02Loop01 17
#define ANIM_Attack02End01 18
#define ANIM_LassoGrab01 19

// #define ANIM_Idle01 1
// #define ANIM_Idle02 2
// #define ANIM_Idle03 3
// #define ANIM_Taunt01 7
// #define ANIM_Attack01 8
// #define ANIM_AttackWindup01 12
// #define ANIM_AttackLoop01 13
// #define ANIM_AttackEnd01 14
// #define ANIM_Damage01 9
// #define ANIM_SpawnKids01 15
// #define ANIM_Unknown 0

namespace
{
    void tweak()
    {
    }
} // namespace

void lightning_ring::create()
{
    // store 1 into 0x0
    active = 1;
    arcs_size = 0;

    //store 0 into 0x7c
}

void foo()
{
    xAnimTable* foo = xAnimTableNew("FOO", 0, 0);
}

xAnimTable* ZNPC_AnimTable_KingJelly()
{
    // clang-format off
    S32 ourAnims[11] = {
        ANIM_Idle01,
        ANIM_Idle02,
        ANIM_Idle03,
        ANIM_Taunt01,
        ANIM_Attack01,
        ANIM_AttackWindup01,         // replace with king jelly anims
        ANIM_AttackLoop01,
        ANIM_AttackEnd01,
        ANIM_Damage01,
        ANIM_SpawnKids01,
        ANIM_Unknown,
        
    };
    // clang-format on
    xAnimTable* table = xAnimTableNew("zNPCKingJelly", NULL, 0);

    xAnimTableNewState(table, g_strz_subbanim[ANIM_Idle01], 0x10, 0, f1868, NULL, NULL, f1869, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_subbanim[ANIM_Idle02], 0x20, 0, f1868, NULL, NULL, f1869, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_subbanim[ANIM_Idle03], 0x20, 0, f1868, NULL, NULL, f1869, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_subbanim[ANIM_Taunt01], 0x20, 0, f1868, NULL, NULL, f1869,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_subbanim[ANIM_Attack01], 0x10, 0, f1868, NULL, NULL, f1869,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_subbanim[ANIM_AttackWindup01], 0x20, 0, f1868, NULL, NULL,
                       f1869, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_subbanim[ANIM_AttackLoop01], 0x10, 0, f1868, NULL, NULL, f1869,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_subbanim[ANIM_AttackEnd01], 0x20, 0, f1868, NULL, NULL, f1869,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_subbanim[ANIM_Damage01], 0x20, 0, f1868, NULL, NULL, f1869,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_subbanim[ANIM_SpawnKids01], 0x10, 0, f1868, NULL, NULL, f1869,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);

    NPCC_BuildStandardAnimTran(table, g_strz_subbanim, ourAnims, 1, f2105);

    xAnimTableNewTransition(table, g_strz_subbanim[ANIM_AttackWindup01],
                            g_strz_subbanim[ANIM_Attack01], 0, 0, 0x10, 0, 0, 0, 0, 0, f2106, 0);
    xAnimTableNewTransition(table, g_strz_subbanim[ANIM_AttackLoop01],
                            g_strz_subbanim[ANIM_Attack01], 0, 0, 0, 0, 0, 0, 0, 0, f2106, 0);
    xAnimTableNewTransition(table, g_strz_subbanim[ANIM_Attack01],
                            g_strz_subbanim[ANIM_AttackLoop01], 0, 0, 0, 0, 0, 0, 0, 0, f2106, 0);
    xAnimTableNewTransition(table, g_strz_subbanim[ANIM_AttackLoop01],
                            g_strz_subbanim[ANIM_AttackEnd01], 0, 0, 0, 0, 0, 0, 0, 0, f2106, 0);
    xAnimTableNewTransition(table, g_strz_subbanim[ANIM_Idle02], g_strz_subbanim[ANIM_Damage01], 0,
                            0, 0, 0, 0, 0, 0, 0, f2106, 0);
    xAnimTableNewTransition(table, g_strz_subbanim[ANIM_Idle03], g_strz_subbanim[ANIM_Damage01], 0,
                            0, 0, 0, 0, 0, 0, 0, f2106, 0);
    xAnimTableNewTransition(table, g_strz_subbanim[ANIM_Taunt01], g_strz_subbanim[ANIM_Damage01], 0,
                            0, 0, 0, 0, 0, 0, 0, f2106, 0);
    xAnimTableNewTransition(table, g_strz_subbanim[ANIM_AttackWindup01],
                            g_strz_subbanim[ANIM_Damage01], 0, 0, 0, 0, 0, 0, 0, 0, f2106, 0);
    xAnimTableNewTransition(table, g_strz_subbanim[ANIM_AttackLoop01],
                            g_strz_subbanim[ANIM_Damage01], 0, 0, 0, 0, 0, 0, 0, 0, f2106, 0);
    xAnimTableNewTransition(table, g_strz_subbanim[ANIM_Attack01], g_strz_subbanim[ANIM_Damage01],
                            0, 0, 0, 0, 0, 0, 0, 0, f2106, 0);
    xAnimTableNewTransition(table, g_strz_subbanim[ANIM_AttackEnd01],
                            g_strz_subbanim[ANIM_Damage01], 0, 0, 0, 0, 0, 0, 0, 0, f2106, 0);
    xAnimTableNewTransition(table, g_strz_subbanim[ANIM_SpawnKids01],
                            g_strz_subbanim[ANIM_Damage01], 0, 0, 0, 0, 0, 0, 0, 0, f2106, 0);
    xAnimTableNewTransition(table, g_strz_subbanim[ANIM_Idle02], g_strz_subbanim[ANIM_Taunt01], 0,
                            0, 0, 0, 0, 0, 0, 0, f2106, 0);
    xAnimTableNewTransition(table, g_strz_subbanim[ANIM_Idle03], g_strz_subbanim[ANIM_Taunt01], 0,
                            0, 0, 0, 0, 0, 0, 0, f2106, 0);
    xAnimTableNewTransition(table, g_strz_subbanim[ANIM_AttackWindup01],
                            g_strz_subbanim[ANIM_Taunt01], 0, 0, 0, 0, 0, 0, 0, 0, f2106, 0);
    xAnimTableNewTransition(table, g_strz_subbanim[ANIM_AttackLoop01],
                            g_strz_subbanim[ANIM_Taunt01], 0, 0, 0, 0, 0, 0, 0, 0, f2106, 0);
    xAnimTableNewTransition(table, g_strz_subbanim[ANIM_Attack01], g_strz_subbanim[ANIM_Taunt01], 0,
                            0, 0, 0, 0, 0, 0, 0, f2106, 0);
    xAnimTableNewTransition(table, g_strz_subbanim[ANIM_AttackEnd01], g_strz_subbanim[ANIM_Taunt01],
                            0, 0, 0, 0, 0, 0, 0, 0, f2106, 0);
    xAnimTableNewTransition(table, g_strz_subbanim[ANIM_SpawnKids01], g_strz_subbanim[ANIM_Taunt01],
                            0, 0, 0, 0, 0, 0, 0, 0, f2106, 0);
    xAnimTableNewTransition(table, g_strz_subbanim[ANIM_Damage01],
                            g_strz_subbanim[ANIM_SpawnKids01], 0, 0, 0, 0, 0, 0, 0, 0, f2106, 0);

    return table;
}

xVec3* zNPCKingJelly::get_bottom()
{
    return (xVec3*)&this->model->Mat->pos;
}

void zNPCKingJelly::Setup()
{
    this->children_size = 0; //Called for address 0x88C, Started plugging things in till it matched.
    load_model();
    load_curtain_model();
    zNPCSubBoss::Setup();
}

void zNPCKingJelly::Destroy()
{
    decompose();
    post_decompose();
    zNPCCommon::Destroy();
}

void zNPCKingJelly::BUpdate(xVec3* pos)
{
    // Original stack variables:
    //xVec3& subloc;
    //xVec3 loc;

    // Something like this...
    // Some vec is being added to another on the stack (probably)
    // (xVec3&)this->model->Mat->pos = (xVec3&)this->model->Mat->pos + *pos;

    zNPCCommon::BUpdate(pos);
}

void zNPCKingJelly::SelfSetup()
{
    xBehaveMgr* bmgr;
    xPsyche* psy;

    bmgr = xBehaveMgr_GetSelf();
    psy_instinct = bmgr->Subscribe(this, 0);
    psy = psy_instinct;
    psy->BrainBegin();
    psy->AddGoal(NPC_GOAL_KJIDLE, NULL);
    psy->AddGoal(NPC_GOAL_KJBORED, NULL);
    psy->AddGoal(NPC_GOAL_KJSPAWNKIDS, NULL);
    psy->AddGoal(NPC_GOAL_KJTAUNT, NULL);
    psy->AddGoal(NPC_GOAL_KJSHOCKGROUND, NULL);
    psy->AddGoal(NPC_GOAL_KJDAMAGE, NULL);
    psy->AddGoal(NPC_GOAL_KJDEATH, NULL);
    psy->AddGoal(NPC_GOAL_LIMBO, NULL);
    psy->BrainEnd();
    psy->SetSafety(NPC_GOAL_KJIDLE);
}

void zNPCKingJelly::init_child(zNPCKingJelly::child_data& child, zNPCCommon& npc, int wave)
{
    child.npc = &npc;
    child.wave = wave;
    child.active = 1;
    child.callback.eventFunc = npc.eventFunc;
    child.callback.update = npc.update;
    child.callback.bupdate = npc.bupdate;
    child.callback.move = npc.move;
    child.callback.render = npc.render;
    child.callback.transl = npc.transl;
}

void zNPCKingJelly::disable_child(zNPCKingJelly::child_data& child)
{
    if (child.active)
    {
        ((zNPCJelly*)child.npc)->JellyKill();
        child.active = false;
    }
}

void zNPCKingJelly::enable_child(zNPCKingJelly::child_data& child)
{
    if (child.active == false)
    {
        child.active = true;
    }
}

// probably how many times the jellyfish can hit the player for that round
// whatever round it is, add one.
// Round = 0, max strikes = 1
// Round = 1, max strikes = 2
// Round = 2, max strikes = 3
S32 zNPCKingJelly::max_strikes()
{
    return round + 1;
}

//void zNPCKingJelly::update_round()
//{
//  if (life == 0)
//  {
// store zero in something??
// 0x2bc
//     round = 0;
//     return;
//  }

//round = life-- * 3;

// updating 0x2bc
// round =

/*
        // Done
        if (*(int *)(param_1 + 0x2c4) == 0) {
            *(undefined4 *)(param_1 + 700) = 0;
            return;
        }
        // 0x2BC

        ????
        *(int *)(param_1 + 700) = 2 - ((*(int *)(param_1 + 0x2c4) + -1) * 3) / DAT_80328544;
        round = 2 - ((life) + -1) * 3) / DAT_80328544;
    */
// life--;
// tweak();
// tweak();
//tweak();
//}

void zNPCKingJelly::on_change_ambient_ring(const tweak_info&)
{
}

void zNPCKingJelly::on_change_fade_obstructions(const tweak_info&)
{
}

void zNPCKingJelly::render_debug()
{
}

void zNPCKingJelly::decompose()
{
}

void zNPCKingJelly::post_decompose()
{
}

void zNPCKingJelly::vanish()
{
    old.moreFlags = moreFlags;
    pflags = 0;
    moreFlags = 0;
    flags2.flg_colCheck = 0;
    flags2.flg_penCheck = 0;
    chkby = 0;
    penby = 0;
    xEntHide(this);
}

void zNPCKingJelly::reappear()
{
    moreFlags = old.moreFlags;
    this->RestoreColFlags();
    xEntShow(this);
}

void zNPCKingJelly::create_tentacle_lightning()
{
}

void zNPCKingJelly::generate_spawn_particles()
{
}

void zNPCKingJelly::load_model()
{
}

void zNPCKingJelly::load_curtain_model()
{
}

// void zNPCKingJelly::reset_curtain()
// {
//     // f0 = data shit
//     // r4 = 0x10b0
//     // 0x24 = f0
//     // r3 = 0x10a8
//     // 0x24 = f0        // 0x24 model???

// }

S32 zNPCGoalKJDamage::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn)
{
    // TODO
    return 0;
}

S32 zNPCGoalKJDamage::Enter(F32 dt, void* updCtxt)
{
    // TODO
    return 0;
}

S32 zNPCGoalKJDamage::Exit(F32 dt, void* updCtxt)
{
    // Needs to be a reference, casting as a pointer doesn't work.
    // Would never have gotten this if not for DWARF data.
    zNPCKingJelly& kj = *(zNPCKingJelly*)this->psyche->clt_owner;

    kj.update_round();
    kj.disable_tentacle_damage = false;

    return xGoal::Exit(dt, updCtxt);
}

void zNPCKingJelly::update_round()
{
}

S32 zNPCGoalKJDeath::Enter(float dt, void* updCtxt)
{
    zNPCKingJelly& kj = *(zNPCKingJelly*)this->psyche->clt_owner;
    kj.decompose();
    kj.post_decompose();
    zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalKJDeath::Exit(float dt, void* updCtxt)
{
    xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalKJDeath::Process(en_trantype* trantype, float dt, void* updCtxt, xScene* xscn)
{
    xGoal::Process(trantype, dt, updCtxt, xscn);
}
