#include "../Core/x/xVec3.h"
#include "../Core/x/xMath3.h"
#include "zNPCTypeDutchman.h"

#include <types.h>

// func_80172664
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypeDutchman.s",                                                                 \
    "look_at__30_esc__2_unnamed_esc__2_zNPCTypeDutchman_cpp_esc__2_FR7xMat3x3RC5xVec3")

// func_801727B4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "init_sound__30_esc__2_unnamed_esc__2_zNPCTypeDutchman_cpp_esc__2_Fv")

// func_80172830
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "play_sound__30_esc__2_unnamed_esc__2_zNPCTypeDutchman_cpp_esc__2_FiPC5xVec3f")

// func_801728F0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "kill_sound__30_esc__2_unnamed_esc__2_zNPCTypeDutchman_cpp_esc__2_FiUi")

// func_80172954
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "set_volume__30_esc__2_unnamed_esc__2_zNPCTypeDutchman_cpp_esc__2_FiUif")

// func_80172990
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "ZNPC_AnimTable_Dutchman__Fv")

// func_80173018
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "__ct__12zNPCDutchmanFi")

// func_80173068
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "Init__12zNPCDutchmanFP9xEntAsset")

// func_801731C0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "Setup__12zNPCDutchmanFv")

// func_801731E0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "Reset__12zNPCDutchmanFv")

// func_80173514
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "Destroy__12zNPCDutchmanFv")

// func_80173540
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "Process__12zNPCDutchmanFP6xScenef")

// func_801736D8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "SysEvent__12zNPCDutchmanFP5xBaseP5xBaseUiPCfP5xBasePi")

// func_80173740
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "Render__12zNPCDutchmanFv")

// func_80173760
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "RenderExtra__12zNPCDutchmanFv")

// func_801738CC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "ParseINI__12zNPCDutchmanFv")

// func_80173934
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypeDutchman.s",                                                                 \
    "load__Q230_esc__2_unnamed_esc__2_zNPCTypeDutchman_cpp_esc__2_11tweak_groupFP16xModelAssetParamUi")

// func_80173964
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypeDutchman.s",                                                                 \
    "register_tweaks__Q230_esc__2_unnamed_esc__2_zNPCTypeDutchman_cpp_esc__2_11tweak_groupFbP16xModelAssetParamUiPCc")

// func_8017547C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "SelfSetup__12zNPCDutchmanFv")

// func_80175520
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "Damage__12zNPCDutchmanF18en_NPC_DAMAGE_TYPEP5xBasePC5xVec3")

// func_80175544
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "AnimPick__12zNPCDutchmanFi16en_NPC_GOAL_SPOTP5xGoal")

// func_801755E0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "LassoNotify__12zNPCDutchmanF14en_LASSO_EVENT")

// func_80175650
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "LassoSetup__12zNPCDutchmanFv")

// func_8017568C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "update_round__12zNPCDutchmanFv")

// func_801756E4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "next_goal__12zNPCDutchmanFv")

// func_8017574C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "goal_delay__12zNPCDutchmanFv")

// func_80175774
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "decompose__12zNPCDutchmanFv")

// func_801757E4
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypeDutchman.s",                                                                 \
    "set_yaw_matrix__30_esc__2_unnamed_esc__2_zNPCTypeDutchman_cpp_esc__2_FR7xMat3x3f")

// func_80175880
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypeDutchman.s",                                                                 \
    "update_move_follow__30_esc__2_unnamed_esc__2_zNPCTypeDutchman_cpp_esc__2_FR5xVec3RQ212zNPCDutchman9move_infoRC7xMat3x3f")

// func_80175998
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypeDutchman.s",                                                                 \
    "update_move_accel__30_esc__2_unnamed_esc__2_zNPCTypeDutchman_cpp_esc__2_FR5xVec3RQ212zNPCDutchman9move_infof")

// func_80175A3C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypeDutchman.s",                                                                 \
    "update_move_vel__30_esc__2_unnamed_esc__2_zNPCTypeDutchman_cpp_esc__2_FR5xVec3RQ212zNPCDutchman9move_infof")

// func_80175A7C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypeDutchman.s",                                                                 \
    "update_move_stop__30_esc__2_unnamed_esc__2_zNPCTypeDutchman_cpp_esc__2_FR5xVec3RQ212zNPCDutchman9move_infof")

// func_80175AFC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "update_turn__12zNPCDutchmanFf")

// func_80175C00
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "update_move__12zNPCDutchmanFf")

// func_80175C94
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "update_animation__12zNPCDutchmanFf")

// func_80175C98
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "update_camera__12zNPCDutchmanFf")

// func_80175CE4
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypeDutchman.s",                                                                 \
    "clip_outside_circle__30_esc__2_unnamed_esc__2_zNPCTypeDutchman_cpp_esc__2_FRfRC5xVec2RC5xVec2ffRC5xVec2f")

// func_80175E90
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypeDutchman.s",                                                                 \
    "clip_outside_circle__30_esc__2_unnamed_esc__2_zNPCTypeDutchman_cpp_esc__2_FRfRC5xVec3RC5xVec3ffRC5xVec3f")

// func_80175F1C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "update_wave__12zNPCDutchmanFRQ212zNPCDutchman9wave_dataf")

// func_80176234
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "init_wave__12zNPCDutchmanFRQ212zNPCDutchman9wave_dataRC5xVec3RC5xVec3")

// func_801762FC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "kill_wave__12zNPCDutchmanFRQ212zNPCDutchman9wave_data")

// func_80176324
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "start_eye_glow__12zNPCDutchmanFv")

// func_80176338
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "stop_eye_glow__12zNPCDutchmanFv")

// func_80176344
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "update_eye_glow__12zNPCDutchmanFf")

// func_801764BC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "start_hand_trail__12zNPCDutchmanFv")

// func_80176530
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "stop_hand_trail__12zNPCDutchmanFv")

// func_8017653C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "update_hand_trail__12zNPCDutchmanFf")

// func_80176618
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "dissolve__12zNPCDutchmanFf")

// func_8017671C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "coalesce__12zNPCDutchmanFf")

// func_80176838
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "reset_blob_mat__12zNPCDutchmanFv")

// func_801768EC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "refresh_reticle__12zNPCDutchmanFv")

// func_8017694C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "reset_lasso_anim__12zNPCDutchmanFv")

// func_80176984
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "update_fade__12zNPCDutchmanFf")

// func_80176B00
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "update_slime__12zNPCDutchmanFf")

// func_80176BD4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "add_slime__12zNPCDutchmanFRC5xVec3f")

// func_80176D4C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "add_spray__12zNPCDutchmanFRC5xVec3f")

// func_8017705C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "add_splash__12zNPCDutchmanFRC5xVec3f")

// func_80177060
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "update_flames__12zNPCDutchmanFf")

// func_801773CC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "start_fight__12zNPCDutchmanFv")

// func_80177470
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "set_life__12zNPCDutchmanFi")

// func_801774F8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "start_beam__12zNPCDutchmanFv")

// func_80177520
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "stop_beam__12zNPCDutchmanFv")

// func_8017752C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "set_alpha__12zNPCDutchmanFf")

// func_80177584
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "start_flames__12zNPCDutchmanFv")

// func_801775CC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "stop_flames__12zNPCDutchmanFv")

// func_801775D8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "check_player_damage__12zNPCDutchmanFv")

// func_8017794C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "get_eye_loc__12zNPCDutchmanCFi")

// func_80177988
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "get_hand_loc__12zNPCDutchmanCFi")

// func_801779C4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "get_splash_loc__12zNPCDutchmanCFv")

// func_80177A98
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "vanish__12zNPCDutchmanFv")

// func_80177ADC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "reappear__12zNPCDutchmanFv")

// func_80177B18
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "random_orbit__12zNPCDutchmanCFRC5xVec3ff")

// func_80177CAC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "turn_to_face__12zNPCDutchmanFRC5xVec3")

// func_80177D64
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "reset_speed__12zNPCDutchmanFv")

// func_80177E00
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "halt__12zNPCDutchmanFf")

// func_80177E68
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypeDutchman.s",                                                                 \
    "set_beam_verts__30_esc__2_unnamed_esc__2_zNPCTypeDutchman_cpp_esc__2_FP18RxObjSpace3DVertexRC5xVec3RC5xVec3UcUcRC5xVec3")

// func_80177F58
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypeDutchman.s",                                                                 \
    "set_vert__30_esc__2_unnamed_esc__2_zNPCTypeDutchman_cpp_esc__2_FR18RxObjSpace3DVertexRC5xVec3ffUc")

// func_80177F90
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypeDutchman.s",                                                                 \
    "world_to_screen__30_esc__2_unnamed_esc__2_zNPCTypeDutchman_cpp_esc__2_FRC5xVec3")

// func_80178030
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypeDutchman.s",                                                                 \
    "render_beam__30_esc__2_unnamed_esc__2_zNPCTypeDutchman_cpp_esc__2_FP18RxObjSpace3DVertexRCQ212zNPCDutchman9beam_infoUlUc")

// func_80178228
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypeDutchman.s",                                                                 \
    "render_beam__30_esc__2_unnamed_esc__2_zNPCTypeDutchman_cpp_esc__2_FP18RxObjSpace3DVertexRCQ212zNPCDutchman9beam_info")

// func_801782D0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "render_beam__12zNPCDutchmanFv")

// func_80178378
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "render_halo__12zNPCDutchmanFv")

// func_80178450
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "create__19zNPCGoalDutchmanNilFiP10RyzMemGrowPv")

// func_801784C0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "create__24zNPCGoalDutchmanInitiateFiP10RyzMemGrowPv")

// func_80178530
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "Enter__24zNPCGoalDutchmanInitiateFfPv")

// func_801786BC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "Exit__24zNPCGoalDutchmanInitiateFfPv")

// func_801786F0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "Process__24zNPCGoalDutchmanInitiateFP11en_trantypefPvP6xScene")

// func_801787D8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "create__20zNPCGoalDutchmanIdleFiP10RyzMemGrowPv")

// func_80178848
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "Enter__20zNPCGoalDutchmanIdleFfPv")

// func_801788A0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "Exit__20zNPCGoalDutchmanIdleFfPv")

// func_801788C0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "Process__20zNPCGoalDutchmanIdleFP11en_trantypefPvP6xScene")

// func_80178968
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "create__25zNPCGoalDutchmanDisappearFiP10RyzMemGrowPv")

// func_801789D8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "Enter__25zNPCGoalDutchmanDisappearFfPv")

// func_80178A50
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "Exit__25zNPCGoalDutchmanDisappearFfPv")

// func_80178A70
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "Process__25zNPCGoalDutchmanDisappearFP11en_trantypefPvP6xScene")

// func_80178AC4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "create__24zNPCGoalDutchmanTeleportFiP10RyzMemGrowPv")

// func_80178B34
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "Enter__24zNPCGoalDutchmanTeleportFfPv")

// func_80178C1C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "Exit__24zNPCGoalDutchmanTeleportFfPv")

// func_80178C3C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "Process__24zNPCGoalDutchmanTeleportFP11en_trantypefPvP6xScene")

// func_80178D10
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "create__24zNPCGoalDutchmanReappearFiP10RyzMemGrowPv")

// func_80178D80
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "Enter__24zNPCGoalDutchmanReappearFfPv")

// func_80178E00
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "Exit__24zNPCGoalDutchmanReappearFfPv")

// func_80178E58
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "Process__24zNPCGoalDutchmanReappearFP11en_trantypefPvP6xScene")

// func_80178F10
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "create__20zNPCGoalDutchmanBeamFiP10RyzMemGrowPv")

// func_80178F80
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "Enter__20zNPCGoalDutchmanBeamFfPv")

// func_8017900C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "Exit__20zNPCGoalDutchmanBeamFfPv")

// func_8017902C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "Process__20zNPCGoalDutchmanBeamFP11en_trantypefPvP6xScene")

// func_80179100
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "update_stop__20zNPCGoalDutchmanBeamFf")

// func_80179204
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "update_focus__20zNPCGoalDutchmanBeamFf")

// func_80179308
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "update_fire__20zNPCGoalDutchmanBeamFf")

// func_80179430
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "update_unfocus__20zNPCGoalDutchmanBeamFf")

// func_80179520
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypeDutchman.s",                                                                 \
    "aim_beam__20zNPCGoalDutchmanBeamCFRQ220zNPCGoalDutchmanBeam9beam_dataRC5xVec3f")

// func_80179620
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypeDutchman.s",                                                                 \
    "calc_beam_loc__20zNPCGoalDutchmanBeamCFR5xVec2fRCQ220zNPCGoalDutchmanBeam9beam_data")

// func_8017973C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "update_beam__20zNPCGoalDutchmanBeamFfRQ220zNPCGoalDutchmanBeam9beam_datai")

// func_801798B8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "refresh_beam__20zNPCGoalDutchmanBeamFi")

// func_80179910
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "start_effects__20zNPCGoalDutchmanBeamFif")

// func_801799F4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "add_miss_effects__20zNPCGoalDutchmanBeamFif")

// func_80179A7C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "add_blast_effects__20zNPCGoalDutchmanBeamFif")

// func_80179BD0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "add_effects__20zNPCGoalDutchmanBeamFif")

// func_80179CAC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "predict_target__20zNPCGoalDutchmanBeamCFR5xVec3")

// func_80179D9C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "create__21zNPCGoalDutchmanFlameFiP10RyzMemGrowPv")

// func_80179E0C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "Enter__21zNPCGoalDutchmanFlameFfPv")

// func_80179E94
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "Exit__21zNPCGoalDutchmanFlameFfPv")

// func_80179F04
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "Process__21zNPCGoalDutchmanFlameFP11en_trantypefPvP6xScene")

// func_80179FCC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "update_wait__21zNPCGoalDutchmanFlameFf")

// func_8017A100
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "update_move__21zNPCGoalDutchmanFlameFf")

// func_8017A2C8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "update_stop__21zNPCGoalDutchmanFlameFf")

// func_8017A3A8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "refresh_vulnerability__21zNPCGoalDutchmanFlameFv")

// func_8017A56C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypeDutchman.s",                                                                 \
    "angle_difference__30_esc__2_unnamed_esc__2_zNPCTypeDutchman_cpp_esc__2_FRC5xVec2RC5xVec2")

// func_8017A5D8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "create__25zNPCGoalDutchmanPostFlameFiP10RyzMemGrowPv")

// func_8017A648
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "Enter__25zNPCGoalDutchmanPostFlameFfPv")

// func_8017A70C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "Exit__25zNPCGoalDutchmanPostFlameFfPv")

// func_8017A738
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "Process__25zNPCGoalDutchmanPostFlameFP11en_trantypefPvP6xScene")

// func_8017A90C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "create__22zNPCGoalDutchmanCaughtFiP10RyzMemGrowPv")

// func_8017A97C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "Enter__22zNPCGoalDutchmanCaughtFfPv")

// func_8017AA08
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "Exit__22zNPCGoalDutchmanCaughtFfPv")

// func_8017AA28
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "Process__22zNPCGoalDutchmanCaughtFP11en_trantypefPvP6xScene")

// func_8017AB64
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "create__22zNPCGoalDutchmanDamageFiP10RyzMemGrowPv")

// func_8017ABD4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "Enter__22zNPCGoalDutchmanDamageFfPv")

// func_8017AD08
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "Exit__22zNPCGoalDutchmanDamageFfPv")

// func_8017AD28
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "Process__22zNPCGoalDutchmanDamageFP11en_trantypefPvP6xScene")

// func_8017AE28
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "create__21zNPCGoalDutchmanDeathFiP10RyzMemGrowPv")

// func_8017AE98
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "Enter__21zNPCGoalDutchmanDeathFfPv")

// func_8017AEC4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "Exit__21zNPCGoalDutchmanDeathFfPv")

// func_8017AF3C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "Process__21zNPCGoalDutchmanDeathFP11en_trantypefPvP6xScene")

// func_8017AFD8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "init__43static_queue_esc__0_Q212zNPCDutchman11slime_slice_esc__1_FUl")

// func_8017B054
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "clear__43static_queue_esc__0_Q212zNPCDutchman11slime_slice_esc__1_Fv")

// func_8017B064
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "init__40static_queue_esc__0_Q212zNPCDutchman9wave_data_esc__1_FUl")

// func_8017B0E0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "clear__40static_queue_esc__0_Q212zNPCDutchman9wave_data_esc__1_Fv")

// func_8017B0F0
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypeDutchman.s",                                                                 \
    "__ne__Q243static_queue_esc__0_Q212zNPCDutchman11slime_slice_esc__1_8iteratorCFRCQ243static_queue_esc__0_Q212zNPCDutchman11slime_slice_esc__1_8iterator")

// func_8017B10C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypeDutchman.s",                                                                 \
    "__pp__Q243static_queue_esc__0_Q212zNPCDutchman11slime_slice_esc__1_8iteratorFv")

// func_8017B140
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypeDutchman.s",                                                                 \
    "__apl__Q243static_queue_esc__0_Q212zNPCDutchman11slime_slice_esc__1_8iteratorFi")

// func_8017B180
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypeDutchman.s",                                                                 \
    "mod_max_size__43static_queue_esc__0_Q212zNPCDutchman11slime_slice_esc__1_CFUl")

// func_8017B18C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypeDutchman.s",                                                                 \
    "erase__43static_queue_esc__0_Q212zNPCDutchman11slime_slice_esc__1_FRCQ243static_queue_esc__0_Q212zNPCDutchman11slime_slice_esc__1_8iteratorRCQ243static_queue_esc__0_Q212zNPCDutchman11slime_slice_esc__1_8iterator")

// func_8017B200
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "end__43static_queue_esc__0_Q212zNPCDutchman11slime_slice_esc__1_CFv")

// func_8017B244
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypeDutchman.s",                                                                 \
    "create_iterator__43static_queue_esc__0_Q212zNPCDutchman11slime_slice_esc__1_CFUl")

// func_8017B264
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypeDutchman.s",                                                                 \
    "__ml__Q243static_queue_esc__0_Q212zNPCDutchman11slime_slice_esc__1_8iteratorCFv")

// func_8017B27C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "begin__43static_queue_esc__0_Q212zNPCDutchman11slime_slice_esc__1_CFv")

// func_8017B2A0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "pop_back__43static_queue_esc__0_Q212zNPCDutchman11slime_slice_esc__1_Fv")

// func_8017B2B0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "full__43static_queue_esc__0_Q212zNPCDutchman11slime_slice_esc__1_CFv")

// func_8017B2FC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "max_size__43static_queue_esc__0_Q212zNPCDutchman11slime_slice_esc__1_CFv")

// func_8017B2FC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "size__43static_queue_esc__0_Q212zNPCDutchman11slime_slice_esc__1_CFv")

// func_8017B310
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "front__43static_queue_esc__0_Q212zNPCDutchman11slime_slice_esc__1_Fv")

// func_8017B340
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "push_front__43static_queue_esc__0_Q212zNPCDutchman11slime_slice_esc__1_Fv")

// func_8017B38C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "empty__43static_queue_esc__0_Q212zNPCDutchman11slime_slice_esc__1_CFv")

// func_8017B3B4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "front__40static_queue_esc__0_Q212zNPCDutchman9wave_data_esc__1_Fv")

// func_8017B3E4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "push_front__40static_queue_esc__0_Q212zNPCDutchman9wave_data_esc__1_Fv")

// func_8017B430
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "mod_max_size__40static_queue_esc__0_Q212zNPCDutchman9wave_data_esc__1_CFUl")

// func_8017B43C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "pop_back__40static_queue_esc__0_Q212zNPCDutchman9wave_data_esc__1_Fv")

// func_8017B43C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "back__40static_queue_esc__0_Q212zNPCDutchman9wave_data_esc__1_Fv")

// func_8017B490
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "__mi__Q240static_queue_esc__0_Q212zNPCDutchman9wave_data_esc__1_8iteratorCFi")

// func_8017B4CC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "__ami__Q240static_queue_esc__0_Q212zNPCDutchman9wave_data_esc__1_8iteratorFi")

// func_8017B4FC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "__apl__Q240static_queue_esc__0_Q212zNPCDutchman9wave_data_esc__1_8iteratorFi")

// func_8017B53C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "full__40static_queue_esc__0_Q212zNPCDutchman9wave_data_esc__1_CFv")

// func_8017B588
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "max_size__40static_queue_esc__0_Q212zNPCDutchman9wave_data_esc__1_CFv")

// func_8017B588
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "size__40static_queue_esc__0_Q212zNPCDutchman9wave_data_esc__1_CFv")

// func_8017B59C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypeDutchman.s",                                                                 \
    "erase__40static_queue_esc__0_Q212zNPCDutchman9wave_data_esc__1_FRCQ240static_queue_esc__0_Q212zNPCDutchman9wave_data_esc__1_8iteratorRCQ240static_queue_esc__0_Q212zNPCDutchman9wave_data_esc__1_8iterator")

// func_8017B610
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypeDutchman.s",                                                                 \
    "__ne__Q240static_queue_esc__0_Q212zNPCDutchman9wave_data_esc__1_8iteratorCFRCQ240static_queue_esc__0_Q212zNPCDutchman9wave_data_esc__1_8iterator")

// func_8017B62C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "end__40static_queue_esc__0_Q212zNPCDutchman9wave_data_esc__1_CFv")

// func_8017B670
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypeDutchman.s",                                                                 \
    "create_iterator__40static_queue_esc__0_Q212zNPCDutchman9wave_data_esc__1_CFUl")

// func_8017B690
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "__pp__Q240static_queue_esc__0_Q212zNPCDutchman9wave_data_esc__1_8iteratorFv")

// func_8017B6C4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "__ml__Q240static_queue_esc__0_Q212zNPCDutchman9wave_data_esc__1_8iteratorCFv")

// func_8017B6DC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "begin__40static_queue_esc__0_Q212zNPCDutchman9wave_data_esc__1_CFv")

// func_8017B2A0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "back__43static_queue_esc__0_Q212zNPCDutchman11slime_slice_esc__1_Fv")

// func_8017B744
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypeDutchman.s",                                                                 \
    "__mi__Q243static_queue_esc__0_Q212zNPCDutchman11slime_slice_esc__1_8iteratorCFi")

// func_8017B780
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypeDutchman.s",                                                                 \
    "__ami__Q243static_queue_esc__0_Q212zNPCDutchman11slime_slice_esc__1_8iteratorFi")

// func_8017B7B0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "init__9xFXRibbonFiPCc")

// func_8017B7D8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "clear__9xFXRibbonFv")

// func_8017B7FC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "set__10xParInterpFf")

// func_8017B81C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "get_center__12zNPCDutchmanCFv")

// func_8017B82C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "face_player__12zNPCDutchmanFv")

// func_8017B838
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "render_debug__12zNPCDutchmanFv")

// func_8017B83C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "disable_emitter__12zNPCDutchmanCFR11zParEmitter")

// func_8017B84C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "turning__12zNPCDutchmanCFv")

// func_8017B924
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "emit_particles__12zNPCDutchmanCFR11zParEmitterfR25xParEmitterCustomSettings")

// func_8017B94C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "get_orbit__12zNPCDutchmanCFv")

// func_8017B958
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "emit_particles__12zNPCDutchmanCFR11zParEmitterf")

// func_8017B97C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "get_facing__12zNPCDutchmanCFv")

// func_8017B98C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "enable_emitter__12zNPCDutchmanCFR11zParEmitter")

// func_8017B99C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "get_nose_loc__12zNPCDutchmanCFv")

// func_8017B9D0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "get_chest_loc__12zNPCDutchmanCFv")

// func_8017BA04
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "__ct__19zNPCGoalDutchmanNilFiR12zNPCDutchman")

// func_8017BA40
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "__ct__24zNPCGoalDutchmanInitiateFiR12zNPCDutchman")

// func_8017BA8C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "turning__12zNPCDutchmanCFf")

// func_8017BB30
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "__ct__20zNPCGoalDutchmanIdleFiR12zNPCDutchman")

// func_8017BB7C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "__ct__25zNPCGoalDutchmanDisappearFiR12zNPCDutchman")

// func_8017BBC8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "__ct__24zNPCGoalDutchmanTeleportFiR12zNPCDutchman")

// func_8017BC14
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "__ct__24zNPCGoalDutchmanReappearFiR12zNPCDutchman")

// func_8017BC60
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "__ct__20zNPCGoalDutchmanBeamFiR12zNPCDutchman")

// func_8017BCAC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "__ct__21zNPCGoalDutchmanFlameFiR12zNPCDutchman")

// func_8017BCF8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "__ct__25zNPCGoalDutchmanPostFlameFiR12zNPCDutchman")

// func_8017BD44
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "__ct__22zNPCGoalDutchmanCaughtFiR12zNPCDutchman")

// func_8017BD90
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "__ct__22zNPCGoalDutchmanDamageFiR12zNPCDutchman")

// func_8017BDDC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "__ct__21zNPCGoalDutchmanDeathFiR12zNPCDutchman")

// func_8017BE28
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "ColChkFlags__12zNPCDutchmanCFv")

// func_8017BE30
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "ColPenFlags__12zNPCDutchmanCFv")

// func_8017BE38
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "ColChkByFlags__12zNPCDutchmanCFv")

// func_8017BE40
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "ColPenByFlags__12zNPCDutchmanCFv")

// func_8017BE48
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "PhysicsFlags__12zNPCDutchmanCFv")

// func_8017BE50
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "IsAlive__12zNPCDutchmanFv")

// func_8017BE64
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "PRIV_GetLassoData__12zNPCDutchmanFv")

// func_8017BE6C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s", "create__5xVec2Fff")

// func_8017BE98
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypeDutchman.s",                                                                 \
    "load_param_esc__0_i_esc__4_i_esc__1___10auto_tweakFRiiiiP16xModelAssetParamUiPCc")

// func_8017BF1C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypeDutchman.s",                                                                 \
    "load_param_esc__0_5xVec3_esc__4_i_esc__1___10auto_tweakFR5xVec3iiiP16xModelAssetParamUiPCc")

// func_8017BF6C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypeDutchman.s",                                                                 \
    "load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc")

void xMat3x3RMulVec(xVec3* o, const xMat3x3* m, const xVec3* v)
{
    float32 x = m->right.x * v->x + m->up.x * v->y + m->at.x * v->z;
    float32 y = m->right.y * v->x + m->up.y * v->y + m->at.y * v->z;
    float32 z = m->right.z * v->x + m->up.z * v->y + m->at.z * v->z;

    o->x = x;
    o->y = y;
    o->z = z;
}

// func_8017C078
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDutchman.s",                                                  \
                   "xSphereHitsCapsule__FRC7xSphereRC5xVec3RC5xVec3f")
