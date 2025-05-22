#include "xVec3.h"
#include "xMath3.h"
#include "zNPCTypeDutchman.h"

#include <types.h>

namespace
{
    void kill_sound(S32 a, U32 b)
    {
    }
} // namespace

#define f1605 0.0f
#define f1606 1.0f
#define f1689 0.2f
#define f1690 0.1f

#define ANIM_Idle01 1
#define ANIM_Fidget01 4 //0x10
#define ANIM_Fidget02 5 //0x14
#define ANIM_Fidget03 6 //0x18
#define ANIM_Taunt01 7 // 0x1c
#define ANIM_Death01 11 //0x2c
#define ANIM_AttackWindup01 12 //0x30
#define ANIM_AttackLoop01 13 //0x34
#define ANIM_AttackEnd01 14 //0x38
#define ANIM_Attack02Windup01 16 //0x40
#define ANIM_Attack02Loop01 17 //0x44
#define ANIM_Attack02End01 18 //0x48
#define ANIM_LassoGrab01 19 //0x4c

static U32 dutchman_count;

//13 new states
//8 new transitions
xAnimTable* ZNPC_AnimTable_Dutchman()
{
    // clang-format off
    S32 ourAnims[13] = {
        ANIM_Idle01,
        ANIM_Fidget01, 
        ANIM_Fidget02, 
        ANIM_Fidget03, 
        ANIM_Taunt01, 
        ANIM_Death01, 
        ANIM_AttackWindup01, 
        ANIM_AttackLoop01,
        ANIM_AttackEnd01, 
        ANIM_Attack02Windup01, 
        ANIM_Attack02Loop01, 
        ANIM_Attack02End01,
        ANIM_LassoGrab01,
        
    };
    // clang-format on
    xAnimTable* table = xAnimTableNew("zNPCDutchman", NULL, 0);

    xAnimTableNewState(table, g_strz_subbanim[ANIM_Idle01], 0x10, 0, f1606, NULL, NULL, f1605, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_subbanim[ANIM_Death01], 0, 0, f1606, NULL, NULL, f1605, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_subbanim[ANIM_Fidget01], 0x20, 0, f1606, NULL, NULL, f1605,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_subbanim[ANIM_Fidget02], 0x20, 0, f1606, NULL, NULL, f1605,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_subbanim[ANIM_Fidget03], 0x20, 0, f1606, NULL, NULL, f1605,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_subbanim[ANIM_Taunt01], 0x20, 0, f1606, NULL, NULL, f1605,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_subbanim[ANIM_AttackWindup01], 0x20, 0, f1606, NULL, NULL,
                       f1605, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_subbanim[ANIM_AttackLoop01], 0x10, 0, f1606, NULL, NULL, f1605,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_subbanim[ANIM_AttackEnd01], 0x20, 0, f1606, NULL, NULL, f1605,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_subbanim[ANIM_Attack02Windup01], 0x20, 0, f1606, NULL, NULL,
                       f1605, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_subbanim[ANIM_Attack02Loop01], 0x10, 0, f1606, NULL, NULL,
                       f1605, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_subbanim[ANIM_Attack02End01], 0x20, 0, f1606, NULL, NULL,
                       f1605, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_subbanim[ANIM_LassoGrab01], 0x20, 0x2000000, f1606, NULL, NULL,
                       f1605, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);

    NPCC_BuildStandardAnimTran(table, g_strz_subbanim, ourAnims, 1, f1689);

    xAnimTableNewTransition(table, g_strz_subbanim[ANIM_AttackWindup01],
                            g_strz_subbanim[ANIM_AttackLoop01], 0, 0, 0x10, 0, 0, 0, 0, 0, f1690,
                            0);
    xAnimTableNewTransition(table, g_strz_subbanim[ANIM_AttackLoop01],
                            g_strz_subbanim[ANIM_AttackEnd01], 0, 0, 0, 0, 0, 0, 0, 0, f1690, 0);
    xAnimTableNewTransition(table, g_strz_subbanim[ANIM_Attack02Windup01],
                            g_strz_subbanim[ANIM_Attack02Loop01], 0, 0, 0x10, 0, 0, 0, 0, 0, f1690,
                            0);
    xAnimTableNewTransition(table, g_strz_subbanim[ANIM_Attack02Loop01],
                            g_strz_subbanim[ANIM_Attack02End01], 0, 0, 0, 0, 0, 0, 0, 0, f1690, 0);
    xAnimTableNewTransition(table, g_strz_subbanim[ANIM_Fidget02], g_strz_subbanim[ANIM_Idle01], 0,
                            0, 0x10, 0, 0, 0, 0, 0, f1690, 0);
    xAnimTableNewTransition(table, g_strz_subbanim[ANIM_Fidget02],
                            g_strz_subbanim[ANIM_AttackWindup01], 0, 0, 0, 0, 0, 0, 0, 0, f1690, 0);
    xAnimTableNewTransition(table, g_strz_subbanim[ANIM_Fidget02], g_strz_subbanim[ANIM_Fidget01],
                            0, 0, 0, 0, 0, 0, 0, 0, f1690, 0);
    xAnimTableNewTransition(table, g_strz_subbanim[ANIM_LassoGrab01], g_strz_subbanim[ANIM_Death01],
                            0, 0, 0, 0, 0, 0, 0, 0, f1690, 0);

    return table;
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

void zNPCDutchman::SelfSetup()
{
    xBehaveMgr* bmgr = xBehaveMgr_GetSelf();
    this->psy_instinct = bmgr->Subscribe(this, 0);
    xPsyche* psy = this->psy_instinct;
    psy->BrainBegin();
    S32 i;
    for (i = NPC_GOAL_DUTCHMANNIL; i <= NPC_GOAL_DUTCHMANDEATH; i++)
    {
        psy->AddGoal(i, this);
    }
    psy->BrainEnd();
    psy->SetSafety(NPC_GOAL_DUTCHMANIDLE);
}

void zNPCDutchman::Damage(en_NPC_DAMAGE_TYPE, xBase*, const xVec3*)
{
    xPsyche* psy = this->psy_instinct;
    psy->GIDOfActive();
}

U32 zNPCDutchman::AnimPick(S32 rawgoal, en_NPC_GOAL_SPOT gspot, xGoal* goal)
{
    S32 index = -1;
    U32 animId = 0;

    switch (rawgoal)
    {
    case NPC_GOAL_DUTCHMANNIL:
    case NPC_GOAL_DUTCHMANDAMAGE:
    case NPC_GOAL_DUTCHMANDEATH:
        index = -1;
        break;
    case NPC_GOAL_DUTCHMANINITIATE:
    case NPC_GOAL_DUTCHMANIDLE:
    case NPC_GOAL_DUTCHMANDISAPPEAR:
    case NPC_GOAL_DUTCHMANTELEPORT:
        index = 1;
        break;
    case NPC_GOAL_DUTCHMANREAPPEAR:
        index = 5;
        break;
    case NPC_GOAL_DUTCHMANBEAM:
        index = 0xC;
        break;
    case NPC_GOAL_DUTCHMANFLAME:
        index = 0x10;
        break;
    case NPC_GOAL_DUTCHMANPOSTFLAME:
        if (flag.hurting != false)
        {
            index = 4;
        }
        else
        {
            index = 6;
        }
        break;
    case NPC_GOAL_DUTCHMANCAUGHT:
        index = 0x13;
        break;

    default:
        index = 1;
        break;
    }

    if (index > -1)
    {
        animId = g_hash_subbanim[index];
    }

    return animId;
}

void zNPCDutchman::LassoNotify(en_LASSO_EVENT event)
{
    if ((event != 3) && (event < 3) && (event > 1))
    {
        // xPsyche::GoalSet(NPC_GOAL_DUTCHMANCAUGHT, 1);
    }

    zNPCCommon::LassoNotify(event);
}
//NPC_GOAL_DUTCHMANCAUGHT

// double zNPCDutchman::goal_delay()
// {
//     move_info* tempR4;
//     tempR4 = &this->move;
//     move = *tempR4;
// }

S32 zNPCDutchman::LassoSetup()
{
    zNPCCommon::LassoUseGuides(1, 1);
    return zNPCCommon::LassoSetup();
}

void zNPCDutchman::update_round()
{
    S32 roundCntr = round;
    if (life == 0)
    {
        round = 3;
    }
    else
    {
        round = 2 - ((life + -1) * 3) / 3;
    }
    if (round == roundCntr)
    {
        return;
    }

    stage = -1;
}

void zNPCDutchman::render_debug()
{
}

void zNPCDutchman::update_animation(float)
{
}

void zNPCDutchman::kill_wave(zNPCDutchman::wave_data& wave)
{
    kill_sound(1, wave.sound_handle);
}

void zNPCDutchman::start_eye_glow()
{
    flag.eye_glow = true;
    eye_glow.size = 1;
}

void zNPCDutchman::stop_eye_glow()
{
    flag.eye_glow = false;
}

void zNPCDutchman::start_hand_trail()
{
    flag.hand_trail = true;
    for (S32 i = 0; i < 2; i++)
    {
        get_hand_loc(i);
        hand_trail.loc[i] = hand_trail.loc[i];
    }

    // hand_trail.loc[0] // 0x5cc
}

void zNPCDutchman::stop_hand_trail()
{
    flag.hand_trail = false;
}

void zNPCDutchman::reset_lasso_anim()
{
    xAnimPlaySetState(0, lassdata->holdGuideAnim, 0);
}

void zNPCDutchman::add_splash(const xVec3&, float)
{
}

void zNPCDutchman::start_beam()
{
    if ((flag.beaming) != 0)
    {
        return;
    }
    flag.beaming = 1;
    flag.was_beaming = 0;
    beam[1].segments = 0; //0x54C
    beam[0].segments = 0; //0x430

    //Could also write as:

    //for (S32 i = 1; i >= 0; --i)
    // {
    //    beam[i].segments = 0;
    // }
}

void zNPCDutchman::stop_beam()
{
    flag.beaming = false;
}

void zNPCDutchman::start_flames()
{
    //static_queue<zNPCDutchman::slime_slice>::clear();
    flag.flaming = true;
    flames.time = 0.0;
    flames.emitted = 0;
    flames.blob_break = 1;
    flames.splash_break = 1;
    slime.slices.clear();
}

void zNPCDutchman::stop_flames()
{
    flag.flaming = false;
}

void zNPCDutchman::vanish()
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

void zNPCDutchman::reappear()
{
    moreFlags = old.moreFlags;
    xNPCBasic::RestoreColFlags();
    xEntShow(this);
}

void zNPCDutchman::reset_speed()
{
}

xFactoryInst* zNPCGoalDutchmanInitiate::create(S32 who, RyzMemGrow* grow, void* info)
{
    return new (who, grow) zNPCGoalDutchmanInitiate(who, (zNPCDutchman&)*info);
}

S32 zNPCGoalDutchmanInitiate::Exit(F32 dt, void* updCtxt)
{
    return xGoal::Exit(dt, updCtxt);
}

xFactoryInst* zNPCGoalDutchmanIdle::create(S32 who, RyzMemGrow* grow, void* info)
{
    return new (who, grow) zNPCGoalDutchmanIdle(who, (zNPCDutchman&)*info);
}

S32 zNPCGoalDutchmanIdle::Enter(F32 dt, void* updCtxt)
{
    owner.face_player();
    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalDutchmanIdle::Exit(F32 dt, void* updCtxt)
{
    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalDutchmanIdle::Process(en_trantype* trantype, float dt, void* updCtxt, xScene* xscn)
{
    owner.goal_delay();
    if (owner.delay == owner.delay)
    {
        owner.delay = 1;

        owner.next_goal();
    }
    else
    {
        xGoal::Process(trantype, dt, updCtxt, xscn);
    }
    return 0;

    //return xGoal::Process(trantype, dt, updCtxt, xscn);
}

xFactoryInst* zNPCGoalDutchmanDisappear::create(S32 who, RyzMemGrow* grow, void* info)
{
    return new (who, grow) zNPCGoalDutchmanDisappear(who, (zNPCDutchman&)*info);
}

S32 zNPCGoalDutchmanDisappear::Exit(F32 dt, void* updCtxt)
{
    return xGoal::Exit(dt, updCtxt);
}

xFactoryInst* zNPCGoalDutchmanDamage::create(S32 who, RyzMemGrow* grow, void* info)
{
    return new (who, grow) zNPCGoalDutchmanDamage(who, (zNPCDutchman&)*info);
}

S32 zNPCGoalDutchmanDamage::Exit(F32 dt, void* updCtxt)
{
    return xGoal::Exit(dt, updCtxt);
}

xFactoryInst* zNPCGoalDutchmanTeleport::create(S32 who, RyzMemGrow* grow, void* info)
{
    return new (who, grow) zNPCGoalDutchmanTeleport(who, (zNPCDutchman&)*info);
}

S32 zNPCGoalDutchmanTeleport::Exit(F32 dt, void* updCtxt)
{
    return xGoal::Exit(dt, updCtxt);
}

xFactoryInst* zNPCGoalDutchmanReappear::create(S32 who, RyzMemGrow* grow, void* info)
{
    return new (who, grow) zNPCGoalDutchmanReappear(who, (zNPCDutchman&)*info);
}

S32 zNPCGoalDutchmanReappear::Exit(F32 dt, void* updCtxt)
{
    owner.reset_speed();
    return xGoal::Exit(dt, updCtxt);
}

xFactoryInst* zNPCGoalDutchmanBeam::create(S32 who, RyzMemGrow* grow, void* info)
{
    return new (who, grow) zNPCGoalDutchmanBeam(who, (zNPCDutchman&)*info);
}

S32 zNPCGoalDutchmanBeam::Exit(F32 dt, void* updCtxt)
{
    return xGoal::Exit(dt, updCtxt);
}

xFactoryInst* zNPCGoalDutchmanFlame::create(S32 who, RyzMemGrow* grow, void* info)
{
    return new (who, grow) zNPCGoalDutchmanFlame(who, (zNPCDutchman&)*info);
}

S32 zNPCGoalDutchmanFlame::Enter(F32 dt, void* updCtxt)
{
    owner.reset_lasso_anim();
    owner.get_orbit();
    owner.turn_to_face(owner.flames.splash_loc); //dont know the correct xVec3&
    owner.delay = 0;
    owner.collis = 0;
    return zNPCGoalCommon::Enter(dt, updCtxt);
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

xFactoryInst* zNPCGoalDutchmanPostFlame::create(S32 who, RyzMemGrow* grow, void* info)
{
    return new (who, grow) zNPCGoalDutchmanPostFlame(who, (zNPCDutchman&)*info);
}


S32 zNPCGoalDutchmanPostFlame::Exit(F32 dt, void* updCtxt)
{
    owner.flag.hurting = 0;
    return xGoal::Exit(dt, updCtxt);
}

xFactoryInst* zNPCGoalDutchmanCaught::create(S32 who, RyzMemGrow* grow, void* info)
{
    return new (who, grow) zNPCGoalDutchmanCaught(who, (zNPCDutchman&)*info);
}

S32 zNPCGoalDutchmanCaught::Enter(float dt, void* updCtxt)
{
    // TODO
    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalDutchmanCaught::Exit(F32 dt, void* updCtxt)
{
    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalDutchmanDeath::Enter(F32 dt, void* updCtxt)
{
    owner.delay = 0.0f;
    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalDutchmanDeath::Exit(F32 dt, void* updCtxt)
{
    owner.move.dest.assign(dt, 1.0f, 0.0f);
    return xGoal::Exit(dt, updCtxt);
}

xFactoryInst* zNPCGoalDutchmanDeath::create(S32 who, RyzMemGrow* grow, void* info)
{
    return new (who, grow) zNPCGoalDutchmanDeath(who, (zNPCDutchman&)*info);
}

S32 zNPCGoalDutchmanDeath::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn)
{
    if (owner.delay >= 2.0f)
    {
        owner.decompose();
        owner.vanish();
    }
    return xGoal::Process(trantype, dt, updCtxt, xscn);
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

WEAK void zNPCDutchman::face_player()
{
    flag.face_player = true;
}
