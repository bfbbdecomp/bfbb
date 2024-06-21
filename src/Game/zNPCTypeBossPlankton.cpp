#include "zNPCTypeBossPlankton.h"

#include <types.h>

// func_80168A94
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s",                                              \
                   "get_player_loc__34_esc__2_unnamed_esc__2_zNPCTypeBossPlankton_cpp_esc__2_Fv")

// func_80168AAC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s",                                              \
                   "init_sound__34_esc__2_unnamed_esc__2_zNPCTypeBossPlankton_cpp_esc__2_Fv")

// func_80168B90
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s",                                              \
                   "reset_sound__34_esc__2_unnamed_esc__2_zNPCTypeBossPlankton_cpp_esc__2_Fv")

// func_80168BB8
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypeBossPlankton.s",                                                             \
    "play_sound__34_esc__2_unnamed_esc__2_zNPCTypeBossPlankton_cpp_esc__2_FiPC5xVec3f")

// func_80168CD4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s",                                              \
                   "kill_sound__34_esc__2_unnamed_esc__2_zNPCTypeBossPlankton_cpp_esc__2_FiUi")

// func_80168D5C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s",                                              \
                   "kill_sound__34_esc__2_unnamed_esc__2_zNPCTypeBossPlankton_cpp_esc__2_Fi")

// func_80168DEC
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypeBossPlankton.s",                                                             \
    "play_beam_fly_sound__34_esc__2_unnamed_esc__2_zNPCTypeBossPlankton_cpp_esc__2_FRQ217xLaserBoltEmitter4boltPv")

// func_80168E34
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypeBossPlankton.s",                                                             \
    "kill_beam_fly_sound__34_esc__2_unnamed_esc__2_zNPCTypeBossPlankton_cpp_esc__2_FRQ217xLaserBoltEmitter4boltPv")

// func_80168E78
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypeBossPlankton.s",                                                             \
    "play_beam_fire_sound__34_esc__2_unnamed_esc__2_zNPCTypeBossPlankton_cpp_esc__2_FRQ217xLaserBoltEmitter4boltPv")

// func_80168EA4
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypeBossPlankton.s",                                                             \
    "play_beam_hit_sound__34_esc__2_unnamed_esc__2_zNPCTypeBossPlankton_cpp_esc__2_FRQ217xLaserBoltEmitter4boltPv")

// func_80168ED0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "ZNPC_AnimTable_BossPlankton__Fv")

// func_80169878
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "__ct__13zNPCBPlanktonFi")

// func_801698C4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "Init__13zNPCBPlanktonFP9xEntAsset")

// func_80169944
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "Setup__13zNPCBPlanktonFv")

// func_80169990
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "PostSetup__13zNPCBPlanktonFv")

// func_801699CC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "Reset__13zNPCBPlanktonFv")

// func_80169B44
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "Destroy__13zNPCBPlanktonFv")

// func_80169B64
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "Process__13zNPCBPlanktonFP6xScenef")

// func_80169D3C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s",                                              \
                   "SysEvent__13zNPCBPlanktonFP5xBaseP5xBaseUiPCfP5xBasePi")

// func_80169D64
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "Render__13zNPCBPlanktonFv")

// func_80169D98
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "RenderExtraPostParticles__13zNPCBPlanktonFv")

// func_80169DF0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "ParseINI__13zNPCBPlanktonFv")

// func_80169E30
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypeBossPlankton.s",                                                             \
    "load__Q234_esc__2_unnamed_esc__2_zNPCTypeBossPlankton_cpp_esc__2_11tweak_groupFP16xModelAssetParamUi")

// func_80169E60
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypeBossPlankton.s",                                                             \
    "register_tweaks__Q234_esc__2_unnamed_esc__2_zNPCTypeBossPlankton_cpp_esc__2_11tweak_groupFbP16xModelAssetParamUiPCc")

// func_8016B570
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "ParseLinks__13zNPCBPlanktonFv")

// func_8016B6C0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s",                                              \
                   "__as__Q213zNPCBPlankton14territory_dataFRCQ213zNPCBPlankton14territory_data")

// func_8016B744
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "SelfSetup__13zNPCBPlanktonFv")

// func_8016B7E8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s",                                              \
                   "Damage__13zNPCBPlanktonF18en_NPC_DAMAGE_TYPEP5xBasePC5xVec3")

// func_8016B884
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s",                                              \
                   "AnimPick__13zNPCBPlanktonFi16en_NPC_GOAL_SPOTP5xGoal")

// func_8016B914
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "next_goal__13zNPCBPlanktonFv")

// func_8016B980
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "refresh_orbit__13zNPCBPlanktonFv")

// func_8016BB34
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "scan_cronies__13zNPCBPlanktonFv")

// func_8016BBAC
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypeBossPlankton.s",                                                             \
    "set_yaw_matrix__34_esc__2_unnamed_esc__2_zNPCTypeBossPlankton_cpp_esc__2_FR7xMat3x3f")

// func_8016BC48
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypeBossPlankton.s",                                                             \
    "update_move_accel__34_esc__2_unnamed_esc__2_zNPCTypeBossPlankton_cpp_esc__2_FR5xVec3RQ213zNPCBPlankton9move_infof")

// func_8016BCD4
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypeBossPlankton.s",                                                             \
    "update_move_stop__34_esc__2_unnamed_esc__2_zNPCTypeBossPlankton_cpp_esc__2_FR5xVec3RQ213zNPCBPlankton9move_infof")

// func_8016BD54
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypeBossPlankton.s",                                                             \
    "update_move_orbit__34_esc__2_unnamed_esc__2_zNPCTypeBossPlankton_cpp_esc__2_FR5xVec3RQ213zNPCBPlankton9move_infoRC5xVec3fb")

// func_8016C044
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "update_turn__13zNPCBPlanktonFf")

// func_8016C148
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "update_move__13zNPCBPlanktonFf")

// func_8016C1CC
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypeBossPlankton.s",                                                             \
    "world_to_ring_vel__34_esc__2_unnamed_esc__2_zNPCTypeBossPlankton_cpp_esc__2_FRC5xVec3RC5xVec3RC5xVec3")

// func_8016C2C8
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypeBossPlankton.s",                                                             \
    "ring_to_world_vel__34_esc__2_unnamed_esc__2_zNPCTypeBossPlankton_cpp_esc__2_FRC5xVec3RC5xVec3RC5xVec3")

// func_8016C3C4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "reset_territories__13zNPCBPlanktonFv")

// func_8016C3FC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "update_dialog__13zNPCBPlanktonFf")

// func_8016C5E8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "update_animation__13zNPCBPlanktonFf")

// func_8016C5EC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "update_follow__13zNPCBPlanktonFf")

// func_8016C630
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "update_follow_player__13zNPCBPlanktonFf")

// func_8016C734
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "update_follow_camera__13zNPCBPlanktonFf")

// func_8016C85C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "update_aim_gun__13zNPCBPlanktonFf")

// func_8016C960
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "check_player_damage__13zNPCBPlanktonFv")

// func_8016C984
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s",                                              \
                   "orbit_yaw_offset__13zNPCBPlanktonCFRC5xVec3RC5xVec3")

// func_8016CA7C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "load_territory__13zNPCBPlanktonFiR5xBase")

// func_8016CB94
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "init_beam__13zNPCBPlanktonFv")

// func_8016CCE4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s",                                              \
                   "__as__Q217xLaserBoltEmitter6configFRCQ217xLaserBoltEmitter6config")

// func_8016CD60
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "setup_beam__13zNPCBPlanktonFv")

// func_8016CE90
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "reset_beam__13zNPCBPlanktonFv")

// func_8016CEB4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "vanish__13zNPCBPlanktonFv")

// func_8016CF0C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "reappear__13zNPCBPlanktonFv")

// func_8016CF74
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "random_orbit__13zNPCBPlanktonCFRC5xVec3ff")

// func_8016D0F0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "player_orbit__13zNPCBPlanktonCFv")

// func_8016D260
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "crony_attacking__13zNPCBPlanktonCFv")

// func_8016D2B0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "stun__13zNPCBPlanktonFv")

// func_8016D440
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "cronies_dead__13zNPCBPlanktonCFv")

// func_8016D4C4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "impart_velocity__13zNPCBPlanktonFRC5xVec3")

// func_8016D5E0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "next_territory__13zNPCBPlanktonFv")

// func_8016D638
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "have_cronies__13zNPCBPlanktonCFv")

// func_8016D658
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "move_to_player_territory__13zNPCBPlanktonFv")

// func_8016D6D4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "player_left_territory__13zNPCBPlanktonCFv")

// func_8016D77C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "say__13zNPCBPlanktonFiib")

// func_8016D824
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "sickum__13zNPCBPlanktonFv")

// func_8016D87C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "here_boy__13zNPCBPlanktonFv")

// func_8016D888
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "follow_player__13zNPCBPlanktonFv")

// func_8016D8A8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "follow_camera__13zNPCBPlanktonFv")

// func_8016D8C8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "reset_speed__13zNPCBPlanktonFv")

// func_8016D958
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "halt__13zNPCBPlanktonFf")

// func_8016DA34
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "fall__13zNPCBPlanktonFff")

// func_8016DAEC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s",                                              \
                   "aim_gun__13zNPCBPlanktonFP9xAnimPlayP5xQuatP5xVec3i")

// func_8016DB24
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s",                                              \
                   "create__21zNPCGoalBPlanktonIdleFiP10RyzMemGrowPv")

// func_8016DB94
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "Enter__21zNPCGoalBPlanktonIdleFfPv")

// func_8016DC38
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "Exit__21zNPCGoalBPlanktonIdleFfPv")

// func_8016DC90
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s",                                              \
                   "Process__21zNPCGoalBPlanktonIdleFP11en_trantypefPvP6xScene")

// func_8016DD48
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "get_yaw__21zNPCGoalBPlanktonIdleCFRfRf")

// func_8016DE48
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "apply_yaw__21zNPCGoalBPlanktonIdleFf")

// func_8016DF38
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s",                                              \
                   "create__23zNPCGoalBPlanktonAttackFiP10RyzMemGrowPv")

// func_8016DFA8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "Enter__23zNPCGoalBPlanktonAttackFfPv")

// func_8016E040
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "Exit__23zNPCGoalBPlanktonAttackFfPv")

// func_8016E060
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s",                                              \
                   "Process__23zNPCGoalBPlanktonAttackFP11en_trantypefPvP6xScene")

// func_8016E0F8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s",                                              \
                   "create__23zNPCGoalBPlanktonAmbushFiP10RyzMemGrowPv")

// func_8016E168
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "Enter__23zNPCGoalBPlanktonAmbushFfPv")

// func_8016E228
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "Exit__23zNPCGoalBPlanktonAmbushFfPv")

// func_8016E248
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s",                                              \
                   "Process__23zNPCGoalBPlanktonAmbushFP11en_trantypefPvP6xScene")

// func_8016E340
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s",                                              \
                   "create__22zNPCGoalBPlanktonFlankFiP10RyzMemGrowPv")

// func_8016E3B0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "Enter__22zNPCGoalBPlanktonFlankFfPv")

// func_8016E4A8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "Exit__22zNPCGoalBPlanktonFlankFfPv")

// func_8016E508
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s",                                              \
                   "Process__22zNPCGoalBPlanktonFlankFP11en_trantypefPvP6xScene")

// func_8016E594
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s",                                              \
                   "create__22zNPCGoalBPlanktonEvadeFiP10RyzMemGrowPv")

// func_8016E604
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "Enter__22zNPCGoalBPlanktonEvadeFfPv")

// func_8016E708
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "Exit__22zNPCGoalBPlanktonEvadeFfPv")

// func_8016E774
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s",                                              \
                   "Process__22zNPCGoalBPlanktonEvadeFP11en_trantypefPvP6xScene")

// func_8016E8D8
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypeBossPlankton.s",                                                             \
    "ring_to_world_loc__34_esc__2_unnamed_esc__2_zNPCTypeBossPlankton_cpp_esc__2_FRC5xVec3RC5xVec3")

// func_8016E9C0
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypeBossPlankton.s",                                                             \
    "world_to_ring_loc__34_esc__2_unnamed_esc__2_zNPCTypeBossPlankton_cpp_esc__2_FRC5xVec3RC5xVec3")

// func_8016EAAC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s",                                              \
                   "create__21zNPCGoalBPlanktonHuntFiP10RyzMemGrowPv")

// func_8016EB1C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "Enter__21zNPCGoalBPlanktonHuntFfPv")

// func_8016EBB0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "Exit__21zNPCGoalBPlanktonHuntFfPv")

// func_8016EC08
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s",                                              \
                   "Process__21zNPCGoalBPlanktonHuntFP11en_trantypefPvP6xScene")

// func_8016ED58
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s",                                              \
                   "create__22zNPCGoalBPlanktonTauntFiP10RyzMemGrowPv")

// func_8016EDC8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "Enter__22zNPCGoalBPlanktonTauntFfPv")

// func_8016EDE8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "Exit__22zNPCGoalBPlanktonTauntFfPv")

// func_8016EE08
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s",                                              \
                   "Process__22zNPCGoalBPlanktonTauntFP11en_trantypefPvP6xScene")

// func_8016EE10
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s",                                              \
                   "create__21zNPCGoalBPlanktonMoveFiP10RyzMemGrowPv")

// func_8016EE80
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "Enter__21zNPCGoalBPlanktonMoveFfPv")

// func_8016EEA0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "Exit__21zNPCGoalBPlanktonMoveFfPv")

// func_8016EEC0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s",                                              \
                   "Process__21zNPCGoalBPlanktonMoveFP11en_trantypefPvP6xScene")

// func_8016EEC8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s",                                              \
                   "create__21zNPCGoalBPlanktonStunFiP10RyzMemGrowPv")

// func_8016EF38
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "Enter__21zNPCGoalBPlanktonStunFfPv")

// func_8016EFB0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "Exit__21zNPCGoalBPlanktonStunFfPv")

// func_8016F014
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s",                                              \
                   "Process__21zNPCGoalBPlanktonStunFP11en_trantypefPvP6xScene")

// func_8016F0FC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s",                                              \
                   "create__21zNPCGoalBPlanktonFallFiP10RyzMemGrowPv")

// func_8016F16C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "Enter__21zNPCGoalBPlanktonFallFfPv")

// func_8016F1FC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "Exit__21zNPCGoalBPlanktonFallFfPv")

// func_8016F228
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s",                                              \
                   "Process__21zNPCGoalBPlanktonFallFP11en_trantypefPvP6xScene")

// func_8016F2C0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s",                                              \
                   "create__22zNPCGoalBPlanktonDizzyFiP10RyzMemGrowPv")

// func_8016F330
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "Enter__22zNPCGoalBPlanktonDizzyFfPv")

// func_8016F3A8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "Exit__22zNPCGoalBPlanktonDizzyFfPv")

// func_8016F3D4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s",                                              \
                   "Process__22zNPCGoalBPlanktonDizzyFP11en_trantypefPvP6xScene")

// func_8016F4D8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s",                                              \
                   "create__21zNPCGoalBPlanktonBeamFiP10RyzMemGrowPv")

// func_8016F548
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "Enter__21zNPCGoalBPlanktonBeamFfPv")

// func_8016F5F8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "Exit__21zNPCGoalBPlanktonBeamFfPv")

// func_8016F66C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s",                                              \
                   "Process__21zNPCGoalBPlanktonBeamFP11en_trantypefPvP6xScene")

// func_8016F6E4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "update_warm_up__21zNPCGoalBPlanktonBeamFf")

// func_8016F73C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "update_fire__21zNPCGoalBPlanktonBeamFf")

// func_8016F910
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "update_cool_down__21zNPCGoalBPlanktonBeamFf")

// func_8016F990
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s",                                              \
                   "create__21zNPCGoalBPlanktonWallFiP10RyzMemGrowPv")

// func_8016FA00
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "Enter__21zNPCGoalBPlanktonWallFfPv")

// func_8016FA20
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "Exit__21zNPCGoalBPlanktonWallFfPv")

// func_8016FA40
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s",                                              \
                   "Process__21zNPCGoalBPlanktonWallFP11en_trantypefPvP6xScene")

// func_8016FA48
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s",                                              \
                   "create__23zNPCGoalBPlanktonMissleFiP10RyzMemGrowPv")

// func_8016FAB8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "Enter__23zNPCGoalBPlanktonMissleFfPv")

// func_8016FAD8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "Exit__23zNPCGoalBPlanktonMissleFfPv")

// func_8016FAF8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s",                                              \
                   "Process__23zNPCGoalBPlanktonMissleFP11en_trantypefPvP6xScene")

// func_8016FB00
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s",                                              \
                   "create__21zNPCGoalBPlanktonBombFiP10RyzMemGrowPv")

// func_8016FB70
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "Enter__21zNPCGoalBPlanktonBombFfPv")

// func_8016FB90
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "Exit__21zNPCGoalBPlanktonBombFfPv")

// func_8016FBB0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s",                                              \
                   "Process__21zNPCGoalBPlanktonBombFP11en_trantypefPvP6xScene")

// func_8016FBB8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "location__13zNPCBPlanktonCFv")

// func_8016FBC8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "face_player__13zNPCBPlanktonFv")

// func_8016FBD4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "render_debug__13zNPCBPlanktonFv")

// func_8016FBD8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "turning__13zNPCBPlanktonCFv")

// func_8016FCB0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s",                                              \
                   "__ct__21zNPCGoalBPlanktonIdleFiR13zNPCBPlankton")

// func_8016FCFC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "take_control__13zNPCBPlanktonFv")

// func_8016FD34
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "get_orbit_yaw__13zNPCBPlanktonCFRC5xVec3")

// func_8016FD6C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s",                                              \
                   "__ct__23zNPCGoalBPlanktonAttackFiR13zNPCBPlankton")

// func_8016FDB8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s",                                              \
                   "__ct__23zNPCGoalBPlanktonAmbushFiR13zNPCBPlankton")

// func_8016FE04
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "set_location__13zNPCBPlanktonFRC5xVec3")

// func_8016FE4C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s",                                              \
                   "__ct__22zNPCGoalBPlanktonFlankFiR13zNPCBPlankton")

// func_8016FE98
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s",                                              \
                   "__ct__22zNPCGoalBPlanktonEvadeFiR13zNPCBPlankton")

// func_8016FEE4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s",                                              \
                   "__ct__21zNPCGoalBPlanktonHuntFiR13zNPCBPlankton")

// func_8016FF30
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s",                                              \
                   "__ct__22zNPCGoalBPlanktonTauntFiR13zNPCBPlankton")

// func_8016FF7C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s",                                              \
                   "__ct__21zNPCGoalBPlanktonMoveFiR13zNPCBPlankton")

// func_8016FFC8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s",                                              \
                   "__ct__21zNPCGoalBPlanktonStunFiR13zNPCBPlankton")

// func_80170014
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "give_control__13zNPCBPlanktonFv")

// func_8017004C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s",                                              \
                   "__ct__21zNPCGoalBPlanktonFallFiR13zNPCBPlankton")

// func_80170098
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s",                                              \
                   "__ct__22zNPCGoalBPlanktonDizzyFiR13zNPCBPlankton")

// func_801700E4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s",                                              \
                   "__ct__21zNPCGoalBPlanktonBeamFiR13zNPCBPlankton")

// func_80170130
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s",                                              \
                   "enable_emitter__13zNPCBPlanktonCFR11xParEmitter")

// func_80170140
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s",                                              \
                   "disable_emitter__13zNPCBPlanktonCFR11xParEmitter")

// func_80170150
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s",                                              \
                   "__ct__21zNPCGoalBPlanktonWallFiR13zNPCBPlankton")

// func_8017019C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s",                                              \
                   "__ct__23zNPCGoalBPlanktonMissleFiR13zNPCBPlankton")

// func_801701E8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s",                                              \
                   "__ct__21zNPCGoalBPlanktonBombFiR13zNPCBPlankton")

// func_80170234
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "ColChkFlags__13zNPCBPlanktonCFv")

// func_8017023C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "ColPenFlags__13zNPCBPlanktonCFv")

// func_80170244
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "ColChkByFlags__13zNPCBPlanktonCFv")

// func_8017024C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "ColPenByFlags__13zNPCBPlanktonCFv")

// func_80170254
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "PhysicsFlags__13zNPCBPlanktonCFv")

// func_8017025C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "IsAlive__13zNPCBPlanktonFv")

// func_80170264
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "visible__17xLaserBoltEmitterCFv")

// func_80170294
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s",                                              \
                   "empty__40static_queue_esc__0_Q217xLaserBoltEmitter4bolt_esc__1_CFv")

// func_801702BC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s",                                              \
                   "size__40static_queue_esc__0_Q217xLaserBoltEmitter4bolt_esc__1_CFv")

// func_801702C4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPlankton.s", "__dv__5xVec2CFf")

// func_80170300
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypeBossPlankton.s",                                                             \
    "load_param_esc__0_i_esc__4_i_esc__1___10auto_tweakFRiiiiP16xModelAssetParamUiPCc")

// func_80170384
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypeBossPlankton.s",                                                             \
    "load_param_esc__0_5xVec3_esc__4_i_esc__1___10auto_tweakFR5xVec3iiiP16xModelAssetParamUiPCc")

// func_801703D4
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypeBossPlankton.s",                                                             \
    "load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc")
