#include "zNPCTypeBossPlankton.h"

#include <types.h>

#define f1585 1.0f
#define f1586 0.0f
#define f1657 0.2f
#define f1658 0.1f

#define ANIM_Unknown 0
#define ANIM_Idle01 1 // 0x4
#define ANIM_Taunt01 3 // 0xC
#define ANIM_move 66 // 0x42
#define ANIM_stun_begin 67 //0x43
#define ANIM_stun_loop 68 //0x44
#define ANIM_stun_end 69 //0x45
#define ANIM_attack_beam_begin 70 //0x46
#define ANIM_attack_beam_loop 71 //0x47
#define ANIM_attack_beam_end 72 //0x48
#define ANIM_attack_wall_begin 73 //0x49
#define ANIM_attack_wall_loop 74 //0x4a
#define ANIM_attack_wall_end 75 //0x4b
#define ANIM_attack_missle 76 //0x4c
#define ANIM_attack_bomb 77 //0x4d

namespace
{
    S32 init_sound()
    {
        return 0;
    }

} // namespace

xAnimTable* ZNPC_AnimTable_BossPlankton()
{
    // clang-format off
    S32 ourAnims[32] = {            //dwarf says it should be 32, matches less with 15
        ANIM_Idle01,
        ANIM_Taunt01,
        ANIM_move,
        ANIM_stun_begin,
        ANIM_stun_loop,
        ANIM_stun_end,
        ANIM_attack_beam_begin,
        ANIM_attack_beam_loop,
        ANIM_attack_beam_end,
        ANIM_attack_wall_begin,
        ANIM_attack_wall_loop,
        ANIM_attack_wall_end,
        ANIM_attack_missle,
        ANIM_attack_bomb,
        ANIM_Unknown,
    };
    // clang-format on

    xAnimTable* table = xAnimTableNew("zNPCBPlankton", NULL, 0);

    xAnimTableNewState(table, g_strz_bossanim[ANIM_Idle01], 0x10, 0, 1.0f, NULL, NULL, 0.0f, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_Taunt01], 0x20, 0, 1.0f, NULL, NULL, 0.0f, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_move], 0x10, 0, f1585, NULL, NULL, f1586, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_stun_begin], 0x20, 0, f1585, NULL, NULL, f1586,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_stun_loop], 0x10, 0, f1585, NULL, NULL, f1586,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_stun_end], 0x20, 0, f1585, NULL, NULL, f1586,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_attack_beam_begin], 0x20, 0, f1585, NULL, NULL,
                       f1586, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_attack_beam_loop], 0x10, 0, f1585, NULL, NULL,
                       f1586, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_attack_beam_end], 0x20, 0, f1585, NULL, NULL,
                       f1586, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_attack_wall_begin], 0x20, 0, f1585, NULL, NULL,
                       f1586, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_attack_wall_loop], 0x10, 0, f1585, NULL, NULL,
                       f1586, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_attack_wall_end], 0x20, 0, f1585, NULL, NULL,
                       f1586, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_attack_missle], 0x20, 0, f1585, NULL, NULL,
                       f1586, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_attack_bomb], 0x20, 0, f1585, NULL, NULL, f1586,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);

    NPCC_BuildStandardAnimTran(table, g_strz_bossanim, ourAnims, 1, f1657);

    xAnimTableNewTransition(table, g_strz_bossanim[ANIM_stun_begin],
                            g_strz_bossanim[ANIM_stun_loop], 0, 0, 0x10, 0, f1586, f1586, 0, 0,
                            f1658, 0);
    xAnimTableNewTransition(table, g_strz_bossanim[ANIM_stun_loop], g_strz_bossanim[ANIM_stun_end],
                            0, 0, 0, 0, f1586, f1586, 0, 0, f1658, 0);
    xAnimTableNewTransition(table, g_strz_bossanim[ANIM_attack_beam_begin],
                            g_strz_bossanim[ANIM_attack_beam_loop], 0, 0, 0x10, 0, f1586, f1586, 0,
                            0, f1658, 0);
    xAnimTableNewTransition(table, g_strz_bossanim[ANIM_attack_beam_begin],
                            g_strz_bossanim[ANIM_attack_beam_end], 0, 0, 0, 0, f1586, f1586, 0, 0,
                            f1658, 0);
    xAnimTableNewTransition(table, g_strz_bossanim[ANIM_attack_beam_loop],
                            g_strz_bossanim[ANIM_attack_beam_end], 0, 0, 0, 0, f1586, f1586, 0, 0,
                            f1658, 0);
    xAnimTableNewTransition(table, g_strz_bossanim[ANIM_attack_wall_begin],
                            g_strz_bossanim[ANIM_attack_wall_loop], 0, 0, 0x10, 0, f1586, f1586, 0,
                            0, f1658, 0);
    xAnimTableNewTransition(table, g_strz_bossanim[ANIM_attack_wall_loop],
                            g_strz_bossanim[ANIM_attack_wall_end], 0, 0, 0, 0, f1586, f1586, 0, 0,
                            f1658, 0);
    xAnimTableNewTransition(table, g_strz_bossanim[ANIM_Taunt01], g_strz_bossanim[ANIM_stun_begin],
                            0, 0, 0, 0, f1586, f1586, 0, 0, f1658, 0);
    xAnimTableNewTransition(table, g_strz_bossanim[ANIM_move], g_strz_bossanim[ANIM_stun_begin], 0,
                            0, 0, 0, f1586, f1586, 0, 0, f1658, 0);
    xAnimTableNewTransition(table, g_strz_bossanim[ANIM_attack_beam_begin],
                            g_strz_bossanim[ANIM_stun_begin], 0, 0, 0, 0, f1586, f1586, 0, 0, f1658,
                            0);
    xAnimTableNewTransition(table, g_strz_bossanim[ANIM_attack_beam_loop],
                            g_strz_bossanim[ANIM_stun_begin], 0, 0, 0, 0, f1586, f1586, 0, 0, f1658,
                            0);
    xAnimTableNewTransition(table, g_strz_bossanim[ANIM_attack_beam_end],
                            g_strz_bossanim[ANIM_stun_begin], 0, 0, 0, 0, f1586, f1586, 0, 0, f1658,
                            0);
    xAnimTableNewTransition(table, g_strz_bossanim[ANIM_attack_wall_begin],
                            g_strz_bossanim[ANIM_stun_begin], 0, 0, 0, 0, f1586, f1586, 0, 0, f1658,
                            0);
    xAnimTableNewTransition(table, g_strz_bossanim[ANIM_attack_wall_loop],
                            g_strz_bossanim[ANIM_stun_begin], 0, 0, 0, 0, f1586, f1586, 0, 0, f1658,
                            0);
    xAnimTableNewTransition(table, g_strz_bossanim[ANIM_attack_wall_end],
                            g_strz_bossanim[ANIM_stun_begin], 0, 0, 0, 0, f1586, f1586, 0, 0, f1658,
                            0);
    xAnimTableNewTransition(table, g_strz_bossanim[ANIM_attack_missle],
                            g_strz_bossanim[ANIM_stun_begin], 0, 0, 0, 0, f1586, f1586, 0, 0, f1658,
                            0);
    xAnimTableNewTransition(table, g_strz_bossanim[ANIM_attack_bomb],
                            g_strz_bossanim[ANIM_stun_begin], 0, 0, 0, 0, f1586, f1586, 0, 0, f1658,
                            0);

    return table;
}

void zNPCBPlankton::Init(xEntAsset* asset) //66%
{
    ::init_sound();
    zNPCCommon::Init(asset);
    flg_move = 1;
    flg_vuln = 1;
    xNPCBasic::RestoreColFlags();
    territory_size = 0;
    played_intro = 0;
    zNPCBPlankton::init_beam();
    xAnimPlay* play = 0;

    // Is being called incorrectly.
    // play is a temp fix to get it to build
    zNPCBPlankton::aim_gun(play, &gun_tilt, &move.dest, 0);
}

void zNPCBPlankton::Destroy()
{
    zNPCCommon::Destroy();
}

void zNPCBPlankton::Process(xScene* xscn, float dt)
{
    // This function needs a lot of work, writing most of these comments
    // so that i can resume where i left off when i return to it

    // territory_data& t ;
    //xCollis& coll;
    xEnt* platform;
    S32 i;

    //xVec3& player_loc;
    xPsyche* psy = psy_instinct;

    if ((flag.updated == false) && (flag.updated = 1, played_intro == false))
    {
        zNPCBPlankton::say(0, 0, true);
        played_intro = true;
    }
    beam.update(dt);
    delay = delay + dt;
    if ((mode == 1) && (territory->fuse_detected = player_left_territory(), psy_instinct != 0))
    {
        stun_duration = 0.0f;
        psy_instinct->GoalSet(NPC_GOAL_BPLANKTONAMBUSH, 1);
    }
    // uvar1 = zNPCCommon::SomethingWonderful();
    //if ((uVar1 & 0x23) == 0)
    // {
    //     psy_instinct->xPsyche::Timestep(dt, 0)
    // }
    if (flag.face_player = false)
    {
        // iVar4 = *(int *)(DAT_803c0c5c + 0x4c);
        // pfVar2 = (float *)location__13zNPCBPlanktonCFv(param_9);
        // param_3 = (double)*(float *)(iVar4 + 0x30);
        // param_2 = (double)(*(float *)(iVar4 + 0x38) - pfVar2[2]);
        // assign__5xVec2Fff((double)(float)(param_3 - (double)*pfVar2),param_2,(float *)(param_9 + 0x460));
        // normalize__5xVec2Fv((float *)(param_9 + 0x460));
    }
    update_follow(dt);
    update_turn(dt);
    update_move(dt);
    update_animation(dt); //uvar5 = update anim
    check_player_damage(); //uvar1 = check_player_damage
    if (psy_instinct != 0) //psy_instinct isnt right, needs (uvar1 & 0xff)
    {
        zEntPlayer_Damage(0, 1); //needs xBase* instead of 0
    }
    update_aim_gun(dt);
    update_dialog(dt);
    //bVar3 = visible__17xLaserBoltEmitterCFv(param_9 + 0x3b8);
    //if (bVar3) {
    //  *(uint *)(param_9 + 0x234) = *(uint *)(param_9 + 0x234) | 2;
    //}
    //Process__10zNPCCommonFP6xScenef(param_1,param_9,param_10);
}

void zNPCBPlankton::Render()
{
    xNPCBasic::Render();
    zNPCBPlankton::render_debug();
}

void zNPCBPlankton::SelfSetup()
{
    xBehaveMgr* bmgr = xBehaveMgr_GetSelf();
    this->psy_instinct = bmgr->Subscribe(this, NULL);
    xPsyche* psy = this->psy_instinct;
    psy->BrainBegin();
    for (S32 i = NPC_GOAL_BPLANKTONIDLE; i <= NPC_GOAL_BPLANKTONBOMB; i++)
    {
        psy->AddGoal(i, this);
    }
    psy->BrainEnd();
    psy->SetSafety(NPC_GOAL_BPLANKTONIDLE);
}

U32 zNPCBPlankton::AnimPick(int, en_NPC_GOAL_SPOT, xGoal*)
{
}

void zNPCBPlankton::render_debug()
{
}

void zNPCBPlankton::update_animation(float)
{
}

S32 zNPCBPlankton::IsAlive()
{
    return 1;
}

U8 zNPCBPlankton::ColPenFlags() const
{
    return 0;
}

U8 zNPCBPlankton::ColChkFlags() const
{
    return 0;
}

U8 zNPCBPlankton::ColChkByFlags() const
{
    return 16;
}

S32 zNPCGoalBPlanktonBomb::Process(en_trantype*, F32, void*, xScene*)
{
    return 0;
}

S32 zNPCGoalBPlanktonMissle::Process(en_trantype*, F32, void*, xScene*)
{
    return 0;
}

S32 zNPCGoalBPlanktonWall::Process(en_trantype*, F32, void*, xScene*)
{
    return 0;
}

S32 zNPCGoalBPlanktonMove::Process(en_trantype*, F32, void*, xScene*)
{
    return 0;
}

S32 zNPCGoalBPlanktonTaunt::Process(en_trantype*, F32, void*, xScene*)
{
    return 0;
}
