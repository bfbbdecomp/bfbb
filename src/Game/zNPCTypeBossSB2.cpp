#include "zNPCTypeBossSB2.h"

#include <types.h>

// func_80156D98
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "init_sound__29_esc__2_unnamed_esc__2_zNPCTypeBossSB2_cpp_esc__2_Fv")

// func_80156F50
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "reset_sound__29_esc__2_unnamed_esc__2_zNPCTypeBossSB2_cpp_esc__2_Fv")

// func_80156F88
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "play_sound__29_esc__2_unnamed_esc__2_zNPCTypeBossSB2_cpp_esc__2_FiPC5xVec3f")

// func_801570A4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "kill_sound__29_esc__2_unnamed_esc__2_zNPCTypeBossSB2_cpp_esc__2_FiUi")

// func_8015712C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "set_yaw_matrix__29_esc__2_unnamed_esc__2_zNPCTypeBossSB2_cpp_esc__2_FR7xMat3x3f")

// func_801571C8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "set_alpha_blend__29_esc__2_unnamed_esc__2_zNPCTypeBossSB2_cpp_esc__2_FP14xModelInstance")

// func_801571EC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "init_bound_entity__29_esc__2_unnamed_esc__2_zNPCTypeBossSB2_cpp_esc__2_FR4xEntUiP14xModelInstanceP7xMat4x3")

// func_80157294
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "parallelepiped_to_obb__29_esc__2_unnamed_esc__2_zNPCTypeBossSB2_cpp_esc__2_FR6xBoundP5xVec3")

// func_801575D4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "max__29_esc__2_unnamed_esc__2_zNPCTypeBossSB2_cpp_esc__2_Fff")

// func_801575E4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "ZNPC_AnimTable_BossSB2__Fv")

// func_8015831C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "Init__9zNPCB_SB2FP9xEntAsset")

// func_8015846C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "init__Q229_esc__2_unnamed_esc__2_zNPCTypeBossSB2_cpp_esc__2_14response_curveFUlPCvUlPCcPPCcPC14tweak_callbackPv")

// func_80158484
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "ParseINI__9zNPCB_SB2Fv")

// func_801584C4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "load__Q229_esc__2_unnamed_esc__2_zNPCTypeBossSB2_cpp_esc__2_11tweak_groupFP16xModelAssetParamUi")

// func_801584F4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "register_tweaks__Q229_esc__2_unnamed_esc__2_zNPCTypeBossSB2_cpp_esc__2_11tweak_groupFbP16xModelAssetParamUiPCc")

// func_8015A118
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "Setup__9zNPCB_SB2Fv")

// func_8015A270
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "SelfSetup__9zNPCB_SB2Fv")

// func_8015A31C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "Reset__9zNPCB_SB2Fv")

// func_8015A49C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "Destroy__9zNPCB_SB2Fv")

// func_8015A4D0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "AnimPick__9zNPCB_SB2Fi16en_NPC_GOAL_SPOTP5xGoal")

// func_8015A6E0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "Process__9zNPCB_SB2FP6xScenef")

// func_8015A848
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "NewTime__9zNPCB_SB2FP6xScenef")

// func_8015A980
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "Render__9zNPCB_SB2Fv")

// func_8015A9B4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "AttackTimeLeft__9zNPCB_SB2Fv")

// func_8015A9D0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "HoldUpDude__9zNPCB_SB2Fv")

// func_8015A9D4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "ThanksImDone__9zNPCB_SB2Fv")

// func_8015A9E0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "reset_speed__9zNPCB_SB2Fv")

// func_8015A9FC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "player_platform__9zNPCB_SB2Fv")

// func_8015AA60
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "activate_hand__9zNPCB_SB2FQ29zNPCB_SB29hand_enumb")

// func_8015AA84
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "deactivate_hand__9zNPCB_SB2FQ29zNPCB_SB29hand_enum")

// func_8015AAA8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "player_on_ground__9zNPCB_SB2CFv")

// func_8015AB74
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "emit_slug__9zNPCB_SB2FQ29zNPCB_SB29slug_enum")

// func_8015AD48
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "slugs_ready__9zNPCB_SB2CFv")

// func_8015AD8C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "slugs_inactive__9zNPCB_SB2CFv")

// func_8015ADC0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "fire_slug__9zNPCB_SB2FQ29zNPCB_SB29slug_enumRQ29zNPCB_SB213platform_data")

// func_8015AF24
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "abandon_slugs__9zNPCB_SB2Fv")

// func_8015AF48
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "next_goal__9zNPCB_SB2Fv")

// func_8015B054
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "reset_stage__9zNPCB_SB2Fv")

// func_8015B068
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "set_vulnerable__9zNPCB_SB2Fb")

// func_8015B0BC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "decompose__9zNPCB_SB2Fv")

// func_8015B0C0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "update_turn__9zNPCB_SB2Ff")

// func_8015B21C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "update_halt__9zNPCB_SB2Ff")

// func_8015B3B4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "update_follow__9zNPCB_SB2Ff")

// func_8015B614
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "update_ymove__9zNPCB_SB2Ff")

// func_8015B6CC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "update_move__9zNPCB_SB2Ff")

// func_8015B724
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "update_camera__9zNPCB_SB2Ff")

// func_8015B770
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "update_nodes__9zNPCB_SB2Ff")

// func_8015B87C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "init_nodes__9zNPCB_SB2Fv")

// func_8015B910
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "show_nodes__9zNPCB_SB2Fv")

// func_8015B964
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "move_nodes__9zNPCB_SB2Fv")

// func_8015BB44
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "render_nodes__9zNPCB_SB2Fv")

// func_8015BBE4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "bind_nodes__9zNPCB_SB2Fv")

// func_8015BD14
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "rebind_nodes__9zNPCB_SB2FP8RpAtomicP11RwMatrixTag")

// func_8015BE7C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "setup_node_tags__9zNPCB_SB2Fv")

// func_8015BF60
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "check_life__9zNPCB_SB2Fv")

// func_8015C044
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "ouchie__9zNPCB_SB2Fv")

// func_8015C0A0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "update_round__9zNPCB_SB2Fv")

// func_8015C10C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "create_surface__9zNPCB_SB2Fv")

// func_8015C1C8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "init_hands__9zNPCB_SB2Fv")

// func_8015C374
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "move_hand__9zNPCB_SB2FRQ29zNPCB_SB29hand_dataf")

// func_8015C590
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "spin_platform__9zNPCB_SB2FRQ29zNPCB_SB213platform_dataRC5xVec3ff")

// func_8015C634
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "check_platform_smack__9zNPCB_SB2FRQ29zNPCB_SB29hand_data")

// func_8015C7A8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "update_platforms__9zNPCB_SB2Ff")

// func_8015C9C0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "init_bounds__9zNPCB_SB2Fv")

// func_8015CA24
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "reset_bounds__9zNPCB_SB2Fv")

// func_8015CB4C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "update_bounds__9zNPCB_SB2Fv")

// func_8015CC94
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "init_slugs__9zNPCB_SB2Fv")

// func_8015CD94
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "update_aim_slug__9zNPCB_SB2FRQ29zNPCB_SB29slug_dataf")

// func_8015CED0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "update_delay_slug__9zNPCB_SB2FRQ29zNPCB_SB29slug_dataf")

// func_8015CF54
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "update_dying_slug__9zNPCB_SB2FRQ29zNPCB_SB29slug_dataf")

// func_8015D00C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "update_fire_slug__9zNPCB_SB2FRQ29zNPCB_SB29slug_dataf")

// func_8015D1EC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "slug_interp__9zNPCB_SB2FfRf")

// func_8015D268
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "eval_linear__Q229_esc__2_unnamed_esc__2_zNPCTypeBossSB2_cpp_esc__2_14response_curveFfPf")

// func_8015D370
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "find_active_node__Q229_esc__2_unnamed_esc__2_zNPCTypeBossSB2_cpp_esc__2_14response_curveFf")

// func_8015D3D0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "eval_smooth__Q229_esc__2_unnamed_esc__2_zNPCTypeBossSB2_cpp_esc__2_14response_curveFfPf")

// func_8015D640
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "clamp_t__Q229_esc__2_unnamed_esc__2_zNPCTypeBossSB2_cpp_esc__2_14response_curveCFf")

// func_8015D69C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "end_t__Q229_esc__2_unnamed_esc__2_zNPCTypeBossSB2_cpp_esc__2_14response_curveCFv")

// func_8015D6C8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "get_node__Q229_esc__2_unnamed_esc__2_zNPCTypeBossSB2_cpp_esc__2_14response_curveCFUl")

// func_8015D6E4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "start_t__Q229_esc__2_unnamed_esc__2_zNPCTypeBossSB2_cpp_esc__2_14response_curveCFv")

// func_8015D6F0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "update_slugs__9zNPCB_SB2Ff")

// func_8015D854
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "scan_cronies__9zNPCB_SB2Fv")

// func_8015D8C8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "check_hit_fail__9zNPCB_SB2Fv")

// func_8015DA6C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "create_glow_light__9zNPCB_SB2Fv")

// func_8015DB90
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "__as__14xLightKitLightFRC14xLightKitLight")

// func_8015DC54
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "destroy_glow_light__9zNPCB_SB2Fv")

// func_8015DC78
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "set_glow_light_intensity__9zNPCB_SB2Ff")

// func_8015DCAC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "say__9zNPCB_SB2Fi")

// func_8015DCF8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "create__20zNPCGoalBossSB2IntroFiP10RyzMemGrowPv")

// func_8015DD68
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "Enter__20zNPCGoalBossSB2IntroFfPv")

// func_8015DDF8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "Exit__20zNPCGoalBossSB2IntroFfPv")

// func_8015DE50
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "Process__20zNPCGoalBossSB2IntroFP11en_trantypefPvP6xScene")

// func_8015DE8C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "create__19zNPCGoalBossSB2IdleFiP10RyzMemGrowPv")

// func_8015DEFC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "Enter__19zNPCGoalBossSB2IdleFfPv")

// func_8015DF24
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "Exit__19zNPCGoalBossSB2IdleFfPv")

// func_8015DF44
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "Process__19zNPCGoalBossSB2IdleFP11en_trantypefPvP6xScene")

// func_8015E024
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "create__20zNPCGoalBossSB2TauntFiP10RyzMemGrowPv")

// func_8015E094
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "Enter__20zNPCGoalBossSB2TauntFfPv")

// func_8015E10C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "Exit__20zNPCGoalBossSB2TauntFfPv")

// func_8015E12C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "Process__20zNPCGoalBossSB2TauntFP11en_trantypefPvP6xScene")

// func_8015E1A8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "create__20zNPCGoalBossSB2DizzyFiP10RyzMemGrowPv")

// func_8015E218
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "Enter__20zNPCGoalBossSB2DizzyFfPv")

// func_8015E298
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "Exit__20zNPCGoalBossSB2DizzyFfPv")

// func_8015E34C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "Process__20zNPCGoalBossSB2DizzyFP11en_trantypefPvP6xScene")

// func_8015E3C0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "create__18zNPCGoalBossSB2HitFiP10RyzMemGrowPv")

// func_8015E430
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "Enter__18zNPCGoalBossSB2HitFfPv")

// func_8015E4F0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "Exit__18zNPCGoalBossSB2HitFfPv")

// func_8015E54C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "Process__18zNPCGoalBossSB2HitFP11en_trantypefPvP6xScene")

// func_8015E60C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "create__19zNPCGoalBossSB2HuntFiP10RyzMemGrowPv")

// func_8015E67C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "Enter__19zNPCGoalBossSB2HuntFfPv")

// func_8015E794
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "xSCurveInverse__Ff")

// func_8015E7EC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "Exit__19zNPCGoalBossSB2HuntFfPv")

// func_8015E8F4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "Process__19zNPCGoalBossSB2HuntFP11en_trantypefPvP6xScene")

// func_8015EA38
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "create__20zNPCGoalBossSB2SwipeFiP10RyzMemGrowPv")

// func_8015EAA8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "Enter__20zNPCGoalBossSB2SwipeFfPv")

// func_8015EB70
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "Exit__20zNPCGoalBossSB2SwipeFfPv")

// func_8015EBD8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "Process__20zNPCGoalBossSB2SwipeFP11en_trantypefPvP6xScene")

// func_8015EDD0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "can_start__20zNPCGoalBossSB2SwipeCFv")

// func_8015EE00
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "create__19zNPCGoalBossSB2ChopFiP10RyzMemGrowPv")

// func_8015EE70
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "Enter__19zNPCGoalBossSB2ChopFfPv")

// func_8015EF44
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "Exit__19zNPCGoalBossSB2ChopFfPv")

// func_8015EFA0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "Process__19zNPCGoalBossSB2ChopFP11en_trantypefPvP6xScene")

// func_8015F1A0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "can_start__19zNPCGoalBossSB2ChopCFv")

// func_8015F284
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "create__21zNPCGoalBossSB2KarateFiP10RyzMemGrowPv")

// func_8015F2F4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "Enter__21zNPCGoalBossSB2KarateFfPv")

// func_8015F388
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "Exit__21zNPCGoalBossSB2KarateFfPv")

// func_8015F3E0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "Process__21zNPCGoalBossSB2KarateFP11en_trantypefPvP6xScene")

// func_8015F6A4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "can_start__21zNPCGoalBossSB2KarateCFv")

// func_8015F6D4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "create__20zNPCGoalBossSB2DeathFiP10RyzMemGrowPv")

// func_8015F744
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "Enter__20zNPCGoalBossSB2DeathFfPv")

// func_8015F79C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "Exit__20zNPCGoalBossSB2DeathFfPv")

// func_8015F7BC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "Process__20zNPCGoalBossSB2DeathFP11en_trantypefPvP6xScene")

// func_8015F7C4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "load_param_esc__0_i_esc__4_i_esc__1___10auto_tweakFRiiiiP16xModelAssetParamUiPCc")

// func_8015F848
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "load_param_esc__0_b_esc__4_i_esc__1___10auto_tweakFRbiiiP16xModelAssetParamUiPCc")

// func_8015F894
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "load_param_esc__0_5xVec3_esc__4_i_esc__1___10auto_tweakFR5xVec3iiiP16xModelAssetParamUiPCc")

// func_8015F8E4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc")

// func_8015F98C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "choose_hand__9zNPCB_SB2Fv")

// func_8015F9C0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "location__9zNPCB_SB2CFv")

// func_8015F9D0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "render_debug__9zNPCB_SB2Fv")

// func_8015F9D4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "get_home__9zNPCB_SB2CFv")

// func_8015F9E0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "set_location__9zNPCB_SB2FRC5xVec2")

// func_8015FA4C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "player_damaged__9zNPCB_SB2CFv")

// func_8015FA64
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "turning__9zNPCB_SB2CFv")

// func_8015FB3C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "set_location__9zNPCB_SB2FRC5xVec3")

// func_8015FB84
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "__ct__20zNPCGoalBossSB2IntroFiR9zNPCB_SB2")

// func_8015FBD0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "__ct__19zNPCGoalBossSB2IdleFiR9zNPCB_SB2")

// func_8015FC1C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "__ct__20zNPCGoalBossSB2TauntFiR9zNPCB_SB2")

// func_8015FC68
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "__ct__20zNPCGoalBossSB2DizzyFiR9zNPCB_SB2")

// func_8015FCB4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "__ct__18zNPCGoalBossSB2HitFiR9zNPCB_SB2")

// func_8015FD00
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "__ct__19zNPCGoalBossSB2HuntFiR9zNPCB_SB2")

// func_8015FD4C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "start_location__9zNPCB_SB2CFv")

// func_8015FD58
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "__ct__20zNPCGoalBossSB2SwipeFiR9zNPCB_SB2")

// func_8015FDA4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "__ct__19zNPCGoalBossSB2ChopFiR9zNPCB_SB2")

// func_8015FDF0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "facing__9zNPCB_SB2CFv")

// func_8015FE00
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "__ct__21zNPCGoalBossSB2KarateFiR9zNPCB_SB2")

// func_8015FE4C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "platform_index__9zNPCB_SB2CFRCQ29zNPCB_SB213platform_data")

// func_8015FE74
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "__ct__20zNPCGoalBossSB2DeathFiR9zNPCB_SB2")

// func_8015FEC0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "__pl__5xVec2CFRC5xVec2")

// func_8015FEFC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3")
