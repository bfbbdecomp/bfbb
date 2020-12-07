#include "zEntPlayerBungeeState.h"

#include <types.h>

// func_801102B8
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "play_sound__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_FQ312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_10sound_enumf")

// func_8011032C
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "stop_sound__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_Fi")

// func_801103A4
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "set_volume__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_Fif")

// func_8011042C
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "init_models__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_Fv")

// func_80110480
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "show_models__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_Fv")

// func_801104D8
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "hide_models__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_Fv")

// func_8011056C
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "render_player__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_Fb")

// func_801105E4
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "move_wedgie__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_FRC5xVec3")

// func_8011076C
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "update_hook_loc__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_Fv")

// func_801107E4
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "find_drop_off__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_Fv")

// func_801108FC
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "trigger__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_FUi")

// func_80110930
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "on_tweak_collision__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFRC10tweak_info")

// func_80110954
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "reset_props_collision__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFv")

// func_801109F0
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "__as__Q312bungee_state10hook_asset35_esc__2_class_esc__6_913zEntPlayerBungeeState_cppFRCQ312bungee_state10hook_asset35_esc__2_class_esc__6_913zEntPlayerBungeeState_cpp")

// func_80110A0C
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "on_tweak_camera__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFRC10tweak_info")

// func_80110A30
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "reset_props_camera__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFv")

// func_80110ACC
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "__as__Q312bungee_state10hook_asset35_esc__2_class_esc__6_912zEntPlayerBungeeState_cppFRCQ312bungee_state10hook_asset35_esc__2_class_esc__6_912zEntPlayerBungeeState_cpp")

// func_80110B20
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "on_tweak_horizontal__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFRC10tweak_info")

// func_80110B44
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "reset_props_horizontal__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFv")

// func_80110B84
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "__as__Q312bungee_state10hook_asset35_esc__2_class_esc__6_911zEntPlayerBungeeState_cppFRCQ312bungee_state10hook_asset35_esc__2_class_esc__6_911zEntPlayerBungeeState_cpp")

// func_80110B90
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "on_tweak_vertical__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFRC10tweak_info")

// func_80110BB4
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "reset_props_vertical__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFv")

// func_80110D38
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "spring_velocity__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeCFffffff")

// func_80110DD8
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "spring_potential_energy__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeCFffff")

// func_80110E40
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "spring_potential_energy__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeCFff")

// func_80110E54
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "spring_energy__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeCFfffff")

// func_80110EC4
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "kinetic_energy__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeCFf")

// func_80110ED4
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "find_spring_min__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeCFffff")

// func_80110F64
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "__as__Q312bungee_state10hook_asset35_esc__2_class_esc__6_910zEntPlayerBungeeState_cppFRCQ312bungee_state10hook_asset35_esc__2_class_esc__6_910zEntPlayerBungeeState_cpp")

// func_80110F98
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "check_anim_start__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_FP15xAnimTransitionP11xAnimSinglePv")

// func_80110FA0
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "check_anim_hit_to_dive__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_FP15xAnimTransitionP11xAnimSinglePv")

// func_80110FD4
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "check_anim_hit_to_top__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_FP15xAnimTransitionP11xAnimSinglePv")

// func_80111008
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "check_anim_hit_to_bottom__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_FP15xAnimTransitionP11xAnimSinglePv")

// func_8011103C
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "check_anim_hit_to_cycle__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_FP15xAnimTransitionP11xAnimSinglePv")

// func_80111070
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "check_anim_hit_to_death__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_FP15xAnimTransitionP11xAnimSinglePv")

// func_801110C0
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "find_nearest_hook__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_FRC5xVec3")

// func_801111B8
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "init_sounds__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_Fv")

// func_801111BC
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "get_hook_model__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_Fv")

// func_801111EC
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "fade_hook_reset__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_Fv")

// func_80111250
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "fade_hook_out__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_Fv")

// func_801112C0
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "fade_hook_in__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_Fv")

// func_80111330
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "fade_hook_update__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_Ff")

// func_80111424
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "start__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_Fv")

// func_8011162C
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "start__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_10state_typeFv")

// func_80111630
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "cache_hook__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_FRQ212bungee_state9hook_type")

// func_80111658
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "cache_drop__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_FRCQ212bungee_state10drop_assetUi")

// func_801116D8
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "init_cache__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_Fv")

// func_801117B8
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "type_name__Q212bungee_state10drop_assetFv")

// func_801117C8
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "common_update__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_FR6xScenef")

// func_801117F8
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "load__12bungee_stateFR5xBaseR9xDynAssetUl")

// func_8011185C
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "load_settings__12bungee_stateFR8xIniFile")

// func_8011227C
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "init__12bungee_stateFv")

// func_80112330
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "__ct__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFv")

// func_80112370
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "__ct__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_10state_typeFQ312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_10state_enum")

// func_80112384
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "__ct__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_20attaching_state_typeFv")

// func_801123C4
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "destroy__12bungee_stateFv")

// func_8011240C
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "reset__12bungee_stateFv")

// func_8011246C
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "active__12bungee_stateFv")

// func_80112488
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "landed__12bungee_stateFv")

// func_801124BC
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "update__12bungee_stateFP6xScenef")

// func_80112618
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "stop__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_10state_typeFv")

// func_8011261C
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "render__12bungee_stateFv")

// func_8011266C
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "render__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_10state_typeFv")

// func_80112670
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "stop__12bungee_stateFv")

// func_801126E8
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "insert_animations__12bungee_stateFR10xAnimTable")

// func_80112DCC
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "start__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_20attaching_state_typeFv")

// func_80112F40
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "stop__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_20attaching_state_typeFv")

// func_80112F88
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "update__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_20attaching_state_typeFR6xSceneRf")

// func_80113150
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "render__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_20attaching_state_typeFv")

// func_80113174
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "start__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFv")

// func_801136B8
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "init_camera__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFv")

// func_801137D4
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "world_to_local__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeCFRC5xVec3")

// func_80113810
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "__as__Q212bungee_state10hook_assetFRCQ212bungee_state10hook_asset")

// func_80113944
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "allow_dive__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFb")

// func_801139EC
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "show_help__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFv")

// func_80113A38
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "stop__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFv")

// func_80113B78
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "hide_help__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFv")

// func_80113BC4
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "update__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFR6xSceneRf")

// func_80113E20
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "update_blur__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFf")

// func_80113E78
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "update_sound__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFf")

// func_80113EC0
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "player_bound__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeCFv")

// func_80113F30
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "local_to_world__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeCFRC5xVec3")

// func_80113F6C
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "check_damage__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFb")

// func_80114074
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "short_drop_sudden_stop__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFv")

// func_80114108
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "multiply_dampening__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFf")

// func_801141A0
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "update_collision__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFR6xScenef")

// func_8011420C
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "repath__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFRC6xScene")

// func_801142B0
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "boundary_repath__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFRC6xScene")

// func_8011432C
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "hit_boundary__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeCFR5xVec3R5xVec3RC5xVec3")

// func_8011440C
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "clip_nearest__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeCFRfRffff")

// func_80114464
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "env_repath__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFRC6xScene")

// func_8011456C
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "trigger_collision__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFRQ412bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_type8env_infofRC7xCollis")

// func_80114610
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "ouchie__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFb")

// func_80114678
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "ents_repath__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFRC6xScene")

// func_801147BC
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "trigger_collision__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFRQ412bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_type8ent_infofRC7xCollis")

// func_80114944
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "collide__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeCFR7xCollisRC7xSphereRC4xEnt")

// func_801149FC
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "collide_start__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFR6xScene")

// func_80114BE4
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "__ct__Q412bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_type19cb_cache_collisionsFRC7xSpherePQ412bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_type8ent_infoRi")

// func_80114BF4
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "update_camera__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFf")

// func_80114F6C
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "update_camera_direction__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFf")

// func_8011502C
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "rotate_camera__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFv")

// func_801150E0
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "interpolate_camera_loc__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFRC5xVec3f")

// func_8011527C
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "update_free_look__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFf")

// func_80115284
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "update_animation__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFf")

// func_801155C4
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "update_movement__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFf")

// func_80115614
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "update_hmovement__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFf")

// func_80115694
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "update_hmovement__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFRfRfffff")

// func_8011572C
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "update_vmovement__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFf")

// func_80115A04
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "calc_movement__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFRfRfRfffffff")

// func_80115B64
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "update_heading__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFf")

// func_80115C0C
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "detach_update__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFR6xSceneRf")

// func_80115DB8
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "update_detach_camera__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFf")

// func_80115ED0
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "start_detaching__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFv")

// func_80116114
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "calc_drop_off_velocity__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFR5xVec3RC5xVec3RC5xVec3ff")

// func_801161A4
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "render__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFv")

// func_801161C8
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "__cl__Q412bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_type19cb_cache_collisionsFR4xEntR10xGridBound")

// func_801162AC
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "normal__5xVec3CFv")

// func_8011630C
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3")

// func_80116370
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "xBoxFromSphere__FR4xBoxRC7xSphere")

// func_801163D0
#pragma GLOBAL_ASM("asm/Game/zEntPlayerBungeeState.s", "xGridCheckBound_esc__0_Q412bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_type19cb_cache_collisions_esc__1___FR5xGridRC6xBoundRC7xQCDataQ412bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_type19cb_cache_collisions")
