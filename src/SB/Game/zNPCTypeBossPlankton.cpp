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
