#include "zNPCTypeKingJelly.h"

#include <types.h>

// func_801465FC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "init_sound__31_esc__2_unnamed_esc__2_zNPCTypeKingJelly_cpp_esc__2_Fv")

// func_801466A8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "play_sound_immediate__31_esc__2_unnamed_esc__2_zNPCTypeKingJelly_cpp_esc__2_FiPC5xVec3")

// func_8014679C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "play_sound__31_esc__2_unnamed_esc__2_zNPCTypeKingJelly_cpp_esc__2_FiPC5xVec3")

// func_80146824
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "kill_sound__31_esc__2_unnamed_esc__2_zNPCTypeKingJelly_cpp_esc__2_Fi")

// func_8014687C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "sound_update__31_esc__2_unnamed_esc__2_zNPCTypeKingJelly_cpp_esc__2_Ff")

// func_80146924
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "kill_sounds__31_esc__2_unnamed_esc__2_zNPCTypeKingJelly_cpp_esc__2_Fv")

// func_80146960
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "set_ring_segments__31_esc__2_unnamed_esc__2_zNPCTypeKingJelly_cpp_esc__2_FRC5xVec3ff")

// func_80146BE4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "updown_ring_update__31_esc__2_unnamed_esc__2_zNPCTypeKingJelly_cpp_esc__2_FR14lightning_ringf")

// func_80146C7C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "expand_ring_update__31_esc__2_unnamed_esc__2_zNPCTypeKingJelly_cpp_esc__2_FR14lightning_ringf")

// func_80146D20
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "create__14lightning_ringFv")

// func_80146D34
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "destroy__14lightning_ringFv")

// func_80146DA0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "refresh__14lightning_ringFv")

// func_80147090
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "create_arc__14lightning_ringFP5xVec3P5xVec3ii")

// func_80147188
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "ZNPC_AnimTable_KingJelly__Fv")

// func_801479EC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "__ct__13zNPCKingJellyFi")

// func_80147A4C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "Init__13zNPCKingJellyFP9xEntAsset")

// func_80147AA0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "Setup__13zNPCKingJellyFv")

// func_80147AE4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "Reset__13zNPCKingJellyFv")

// func_80147D6C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "Destroy__13zNPCKingJellyFv")

// func_80147DA8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "Process__13zNPCKingJellyFP6xScenef")

// func_80147FCC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "BUpdate__13zNPCKingJellyFP5xVec3")

// func_8014802C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "SysEvent__13zNPCKingJellyFP5xBaseP5xBaseUiPCfP5xBasePi")

// func_801480A0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "RenderExtra__13zNPCKingJellyFv")

// func_801480C0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "ParseINI__13zNPCKingJellyFv")

// func_80148140
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "load__Q231_esc__2_unnamed_esc__2_zNPCTypeKingJelly_cpp_esc__2_11tweak_groupFP16xModelAssetParamUi")

// func_80148170
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "register_tweaks__Q231_esc__2_unnamed_esc__2_zNPCTypeKingJelly_cpp_esc__2_11tweak_groupFbP16xModelAssetParamUiPCc")

// func_8014A5A4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "ParseLinks__13zNPCKingJellyFv")

// func_8014A630
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "SelfSetup__13zNPCKingJellyFv")

// func_8014A730
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "Damage__13zNPCKingJellyF18en_NPC_DAMAGE_TYPEP5xBasePC5xVec3")

// func_8014A814
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "AnimPick__13zNPCKingJellyFi16en_NPC_GOAL_SPOTP5xGoal")

// func_8014A8C8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "get_variance__13zNPCKingJellyCFv")

// func_8014A904
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "bored__13zNPCKingJellyCFv")

// func_8014A9B0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "max_strikes__13zNPCKingJellyCFv")

// func_8014A9BC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "update_camera__13zNPCKingJellyFf")

// func_8014AA08
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "set_life__13zNPCKingJellyFi")

// func_8014AAF0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "update_round__13zNPCKingJellyFv")

// func_8014AB2C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "add_child__13zNPCKingJellyFR5xBasei")

// func_8014ABE4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "init_child__13zNPCKingJellyFRQ213zNPCKingJelly10child_dataR10zNPCCommoni")

// func_8014AC28
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "disable_child__13zNPCKingJellyFRQ213zNPCKingJelly10child_data")

// func_8014AC6C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "enable_child__13zNPCKingJellyFRQ213zNPCKingJelly10child_data")

// func_8014AC84
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "count_children__13zNPCKingJellyFi")

// func_8014ACB8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "spawn_children__13zNPCKingJellyFii")

// func_8014ADD0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "move_to_spawn_position__13zNPCKingJellyFR10zNPCCommonf")

// func_8014AEC8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "taunt__13zNPCKingJellyFv")

// func_8014AF40
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "repel_player__13zNPCKingJellyFv")

// func_8014B138
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "sphere_hits_line__31_esc__2_unnamed_esc__2_zNPCTypeKingJelly_cpp_esc__2_FRC7xSphereRC5xVec3RC5xVec3f")

// func_8014B2B4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "sphere_hits_sphere_xz__31_esc__2_unnamed_esc__2_zNPCTypeKingJelly_cpp_esc__2_FRC7xSphereRC7xSphere")

// func_8014B314
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "get_away__13zNPCKingJellyCFv")

// func_8014B3E0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "apply_tentacle_damage__13zNPCKingJellyFv")

// func_8014B6C4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "apply_wave_damage__13zNPCKingJellyFv")

// func_8014B854
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "apply_ambient_damage__13zNPCKingJellyFv")

// func_8014B960
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "check_player_damage__13zNPCKingJellyFv")

// func_8014B9C4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "start_fight__13zNPCKingJellyFv")

// func_8014BA8C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "decompose__13zNPCKingJellyFv")

// func_8014BB4C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "post_decompose__13zNPCKingJellyFv")

// func_8014BB80
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "vanish__13zNPCKingJellyFv")

// func_8014BBC4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "reappear__13zNPCKingJellyFv")

// func_8014BC00
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "create_tentacle_lightning__13zNPCKingJellyFv")

// func_8014BC04
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "new_tentacle_lightning__13zNPCKingJellyFP5xVec3")

// func_8014BD08
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "destroy_tentacle_lightning__13zNPCKingJellyFv")

// func_8014BD6C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "update_tentacle_lightning__13zNPCKingJellyFf")

// func_8014BFA8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "generate_zap_particles__13zNPCKingJellyFRC10zLightningff")

// func_8014C128
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "refresh_tentacle_points__13zNPCKingJellyFi")

// func_8014C228
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "refresh_tentacle_points__13zNPCKingJellyFv")

// func_8014C274
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "update_rings__13zNPCKingJellyFf")

// func_8014C3A0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "create_ambient_rings__13zNPCKingJellyFv")

// func_8014C498
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "destroy_ambient_rings__13zNPCKingJellyFv")

// func_8014C4E4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "create_wave_rings__13zNPCKingJellyFv")

// func_8014C5F8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "destroy_wave_rings__13zNPCKingJellyFv")

// func_8014C644
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "generate_spawn_particles__13zNPCKingJellyFv")

// func_8014C658
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "update_spawn_particles__13zNPCKingJellyFf")

// func_8014C724
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "generate_ring_particles__13zNPCKingJellyFRC14lightning_ringf")

// func_8014C8B0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "generate_thump_particles__13zNPCKingJellyFv")

// func_8014CA1C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "start_charge__13zNPCKingJellyFv")

// func_8014CAF0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "update_charge__13zNPCKingJellyFf")

// func_8014CD38
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "lerp__31_esc__2_unnamed_esc__2_zNPCTypeKingJelly_cpp_esc__2_Ff10iColor_tag10iColor_tag")

// func_8014CDC8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "lerp__31_esc__2_unnamed_esc__2_zNPCTypeKingJelly_cpp_esc__2_FfUcUc")

// func_8014CE30
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "lerp__31_esc__2_unnamed_esc__2_zNPCTypeKingJelly_cpp_esc__2_Ffff")

// func_8014CE3C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "end_charge__13zNPCKingJellyFv")

// func_8014CE98
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "load_model__13zNPCKingJellyFv")

// func_8014CF4C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "load_curtain_model__13zNPCKingJellyFv")

// func_8014CFE8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "show_shower_model__13zNPCKingJellyFv")

// func_8014D04C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "show_attack_model__13zNPCKingJellyFv")

// func_8014D0B0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "fade_curtain__13zNPCKingJellyFv")

// func_8014D0D0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "reset_curtain__13zNPCKingJellyFv")

// func_8014D0E8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "set_model_color__31_esc__2_unnamed_esc__2_zNPCTypeKingJelly_cpp_esc__2_FP14xModelInstanceffff")

// func_8014D118
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "reset_model_color__31_esc__2_unnamed_esc__2_zNPCTypeKingJelly_cpp_esc__2_FP14xModelInstance")

// func_8014D158
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "start_blink__13zNPCKingJellyFv")

// func_8014D184
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "update_blink__13zNPCKingJellyFf")

// func_8014D2F4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "Enter__14zNPCGoalKJIdleFfPv")

// func_8014D3A0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "Exit__14zNPCGoalKJIdleFfPv")

// func_8014D410
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "Process__14zNPCGoalKJIdleFP11en_trantypefPvP6xScene")

// func_8014D50C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "rotate__14zNPCGoalKJIdleFf")

// func_8014D60C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "move__14zNPCGoalKJIdleFf")

// func_8014D978
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "Enter__15zNPCGoalKJBoredFfPv")

// func_8014DA00
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "Exit__15zNPCGoalKJBoredFfPv")

// func_8014DA20
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "Process__15zNPCGoalKJBoredFP11en_trantypefPvP6xScene")

// func_8014DB00
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "Enter__19zNPCGoalKJSpawnKidsFfPv")

// func_8014DB88
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "Exit__19zNPCGoalKJSpawnKidsFfPv")

// func_8014DC18
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "Process__19zNPCGoalKJSpawnKidsFP11en_trantypefPvP6xScene")

// func_8014DDEC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "Enter__15zNPCGoalKJTauntFfPv")

// func_8014DE74
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "Exit__15zNPCGoalKJTauntFfPv")

// func_8014DE94
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "Process__15zNPCGoalKJTauntFP11en_trantypefPvP6xScene")

// func_8014DF3C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "Enter__21zNPCGoalKJShockGroundFfPv")

// func_8014DFE8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "Exit__21zNPCGoalKJShockGroundFfPv")

// func_8014E06C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "Process__21zNPCGoalKJShockGroundFP11en_trantypefPvP6xScene")

// func_8014E168
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "update_start__21zNPCGoalKJShockGroundFf")

// func_8014E208
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "update_warm_up__21zNPCGoalKJShockGroundFf")

// func_8014E320
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "update_release__21zNPCGoalKJShockGroundFf")

// func_8014E3EC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "update_cool_down__21zNPCGoalKJShockGroundFf")

// func_8014E51C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "update_stop__21zNPCGoalKJShockGroundFf")

// func_8014E594
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "Enter__16zNPCGoalKJDamageFfPv")

// func_8014E624
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "Exit__16zNPCGoalKJDamageFfPv")

// func_8014E694
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "Process__16zNPCGoalKJDamageFP11en_trantypefPvP6xScene")

// func_8014E754
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "Enter__15zNPCGoalKJDeathFfPv")

// func_8014E7C4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "Exit__15zNPCGoalKJDeathFfPv")

// func_8014E7E4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "Process__15zNPCGoalKJDeathFP11en_trantypefPvP6xScene")

// func_8014E804
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "MeetTheKing__9zNPCJellyFP10zNPCCommon")

// func_8014E80C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "render_debug__13zNPCKingJellyFv")

// func_8014E810
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "on_change_ambient_ring__13zNPCKingJellyFRC10tweak_info")

// func_8014E814
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "on_change_fade_obstructions__13zNPCKingJellyFRC10tweak_info")

// func_8014E818
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "get_center__13zNPCKingJellyCFv")

// func_8014E878
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "get_bottom__13zNPCKingJellyCFv")

// func_8014E888
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "update__14lightning_ringFf")

// func_8014E8CC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "load_param_esc__0_10iColor_tag_esc__4_i_esc__1___10auto_tweakFR10iColor_tagiiiP16xModelAssetParamUiPCc")

// func_8014E9F0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "load_param_esc__0_b_esc__4_i_esc__1___10auto_tweakFRbiiiP16xModelAssetParamUiPCc")

// func_8014EA3C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc")

// func_8014EAE4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "load_param_esc__0_i_esc__4_i_esc__1___10auto_tweakFRiiiiP16xModelAssetParamUiPCc")

// func_8014EB68
#pragma GLOBAL_ASM("asm/Game/zNPCTypeKingJelly.s", "xUtil_choose_esc__0_i_esc__1___FPCiiPCf")
