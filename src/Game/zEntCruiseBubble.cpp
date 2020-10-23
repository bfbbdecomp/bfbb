#include "zEntCruiseBubble.h"

#include <types.h>

// func_8005720C
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "init_sound__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv")

// func_80057284
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "stop_sound__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FiUi")

// func_80057320
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "play_sound__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fif")

// func_80057404
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "play_sound__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FifPC5xVec3")

// func_80057488
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "set_pitch__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FifUi")

// func_80057524
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "show_wand__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv")

// func_80057540
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "hide_wand__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv")

// func_8005755C
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "show_missle__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv")

// func_80057578
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "hide_missle__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv")

// func_80057594
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "capture_camera__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv")

// func_800575C8
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "release_camera__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv")

// func_800575FC
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "camera_taken__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv")

// func_80057644
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "camera_leave__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv")

// func_80057670
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "start_damaging__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv")

// func_80057684
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "damage_entity__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FR4xEntRC5xVec3RC5xVec3RC5xVec3fb")

// func_800578E8
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "can_damage__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FP4xEnt")

// func_80057984
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "was_damaged__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FP4xEnt")

// func_800579C8
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "notify_triggers__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FR6xSceneRC7xSphereRC5xVec3")

// func_80057B30
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "exit_triggers__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FR6xScene")

// func_80057BF0
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "signal_event__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FUi")

// func_80057C24
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "refresh_trail__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FR7xMat4x3R5xQuat")

// func_80057C78
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "start_trail__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv")

// func_80057CC8
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "stop_trail__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv")

// func_80057CDC
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "set_state__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FQ313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_11thread_enumQ313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_10state_enum")

// func_80057D78
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "start__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_10state_typeFv")

// func_80057D7C
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "stop__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_10state_typeFv")

// func_80057D80
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "check_launch__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv")

// func_80057E6C
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "kill__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fbb")

// func_80057FE0
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "distort_screen__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Ff")

// func_80057FE4
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "abort__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_10state_typeFv")

// func_80057FE8
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "update_player__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FR6xScenef")

// func_80058108
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "get_player_loc__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv")

// func_80058120
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "render_player__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv")

// func_8005814C
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "refresh_controls__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv")

// func_800581A0
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "update_state__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FP6xScenef")

// func_800582AC
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "render_state__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv")

// func_80058310
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "render__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_10state_typeFv")

// func_80058314
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "custom_bubble_render__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FP8RpAtomic")

// func_800584C0
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "init_states__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv")

// func_800586FC
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "__ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_camera_restoreFv")

// func_8005873C
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "__ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_10state_typeFQ313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_10state_enum")

// func_80058750
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "__ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_surveyFv")

// func_80058790
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "__ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_attachFv")

// func_800587D0
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "__ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18state_camera_seizeFv")

// func_80058810
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "__ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_camera_aimFv")

// func_80058850
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "__ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explodeFv")

// func_80058890
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "__ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_missle_flyFv")

// func_800588D0
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "__ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_missle_appearFv")

// func_80058910
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "__ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17state_player_waitFv")

// func_80058950
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "__ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17state_player_fireFv")

// func_80058990
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "__ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_player_aimFv")

// func_800589D0
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "__ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17state_player_haltFv")

// func_80058A10
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "init_missle_model__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv")

// func_80058A94
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "reset_wake_ribbons__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv")

// func_80058BF0
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "__as__Q29xFXRibbon6configFRCQ29xFXRibbon6config")

// func_80058C14
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "init_wake_ribbons__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv")

// func_80058C70
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "reset_explode_decal__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv")

// func_80058D38
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "init_explode_decal__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv")

// func_80058DD4
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "init_shrapnel__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv")

// func_80058E14
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "add_trail_sample__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FRC5xVec3RC5xVec3RC5xVec3RC5xVec3f")

// func_800590FC
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "update_trail__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Ff")

// func_80059314
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "refresh_missle_model__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv")

// func_80059318
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "update_missle__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FR6xScenef")

// func_80059378
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "render_missle__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv")

// func_800593B0
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "load_model__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FUi")

// func_80059458
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "render_model_2d__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FP14xModelInstanceRC13basic_rect_esc__0_f_esc__1_f")

// func_80059584
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "render_glow__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FP14xModelInstanceRC13basic_rect_esc__0_f_esc__1_ff")

// func_80059698
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "init_hud__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv")

// func_80059760
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "init__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17uv_animated_modelFP8RpAtomic")

// func_800597E0
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "clone_uv__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17uv_animated_modelCFRP11RwTexCoordsRiP8RpAtomic")

// func_8005986C
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "get_uv__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17uv_animated_modelCFRP11RwTexCoordsRiP8RpAtomic")

// func_800598C4
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "show_gizmo__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FRQ313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_9hud_gizmoRC13basic_rect_esc__0_f_esc__1_P14xModelInstance")

// func_80059954
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "update_gizmo__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FRQ313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_9hud_gizmof")

// func_800599C8
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "flash_hud__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv")

// func_800599F0
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "render_timer__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fff")

// func_80059BD8
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "lerp__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FR10iColor_tagf10iColor_tag10iColor_tag")

// func_80059C6C
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "lerp__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FRUcfUcUc")

// func_80059CD8
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "update_hud__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Ff")

// func_80059EB4
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "__as__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_9hud_gizmoFRCQ313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_9hud_gizmo")

// func_80059F18
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "update__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17uv_animated_modelFf")

// func_80059FA0
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "refresh__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17uv_animated_modelFv")

// func_8005A0E0
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "render_hud__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv")

// func_8005A2AC
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "show_hud__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv")

// func_8005A340
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "hide_hud__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv")

// func_8005A360
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "world_to_screen__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FRC5xVec3")

// func_8005A400
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "find_locked_target__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FPC5xVec3")

// func_8005A44C
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "lock_target__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FiPC5xVec3f")

// func_8005A570
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "check_lock_target__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FPC5xVec3")

// func_8005A6D8
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "check_anim_aim__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FP15xAnimTransitionP11xAnimSinglePv")

// func_8005A6E0
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "load_cheat_tweak__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv")

// func_8005A804
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "load_settings__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv")

// func_8005A880
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "load__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_11tweak_groupFP16xModelAssetParamUi")

// func_8005A8B0
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "register_tweaks__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_11tweak_groupFbP16xModelAssetParamUiPCc")

// func_8005BD60
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "init__13cruise_bubbleFv")

// func_8005BDE8
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "init_debug__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv")

// func_8005BDEC
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "reset__13cruise_bubbleFv")

// func_8005BE28
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "launch__13cruise_bubbleFv")

// func_8005BF30
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "update__13cruise_bubbleFP6xScenef")

// func_8005C018
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "render__13cruise_bubbleFv")

// func_8005C064
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "render_debug__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv")

// func_8005C068
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "render_screen__13cruise_bubbleFv")

// func_8005C09C
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "insert_player_animations__13cruise_bubbleFR10xAnimTable")

// func_8005C380
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "anim_table__13cruise_bubbleFv")

// func_8005C4C0
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "active__13cruise_bubbleFv")

// func_8005C4D0
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "exploding__13cruise_bubbleFv")

// func_8005C50C
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "get_explode_sphere__13cruise_bubbleFR5xVec3Rf")

// func_8005C58C
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "get_radius__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explodeCFv")

// func_8005C5A8
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "get_explode_hits__13cruise_bubbleFRi")

// func_8005C610
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "add_life__13cruise_bubbleFff")

// func_8005C674
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "set_life__13cruise_bubbleFf")

// func_8005C6A0
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "reset_life__13cruise_bubbleFv")

// func_8005C6D4
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "event_handler__13cruise_bubbleFP5xBaseUiPCfP5xBase")

// func_8005C758
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "start__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17state_player_haltFv")

// func_8005C764
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "stop__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17state_player_haltFv")

// func_8005C778
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "update__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17state_player_haltFf")

// func_8005C848
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "start__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_player_aimFv")

// func_8005C8D4
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "get_player_mat__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv")

// func_8005C8E8
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "stop__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_player_aimFv")

// func_8005C8FC
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "update__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_player_aimFf")

// func_8005C998
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "update_animation__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_player_aimFf")

// func_8005CA00
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "apply_yaw__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_player_aimFv")

// func_8005CA98
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "face_camera__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_player_aimFf")

// func_8005CBB8
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "start__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17state_player_fireFv")

// func_8005CC70
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "get_missle_mat__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv")

// func_8005CC84
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "stop__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17state_player_fireFv")

// func_8005CCA4
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "update__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17state_player_fireFf")

// func_8005CD90
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "update_wand__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17state_player_fireFf")

// func_8005CD94
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "start__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17state_player_waitFv")

// func_8005CDB4
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "update__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17state_player_waitFf")

// func_8005CDBC
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "start__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_missle_appearFv")

// func_8005CE2C
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "move__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_missle_appearFv")

// func_8005CEA0
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "stop__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_missle_appearFv")

// func_8005CEC0
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "update__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_missle_appearFf")

// func_8005CF80
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "update_effects__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_missle_appearFf")

// func_8005CF84
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "start__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_missle_flyFv")

// func_8005D08C
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "__ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_dataFRC5xVec3f")

// func_8005D0AC
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "stop__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_missle_flyFv")

// func_8005D128
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "abort__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_missle_flyFv")

// func_8005D18C
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "update__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_missle_flyFf")

// func_8005D350
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "update_flash__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_missle_flyFf")

// func_8005D3D4
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "update_engine_sound__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_missle_flyFf")

// func_8005D448
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "collide_hazards__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_missle_flyFv")

// func_8005D4C8
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "hazard_check__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_missle_flyFR9NPCHazardPv")

// func_8005D56C
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "collide__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_missle_flyFv")

// func_8005D7D4
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "hit_test__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_missle_flyCFR5xVec3R5xVec3R5xVec3RP4xEnt")

// func_8005D928
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "update_move__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_missle_flyFf")

// func_8005D998
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "update_turn__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_missle_flyFf")

// func_8005DB98
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "calculate_rotation__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_missle_flyCFR5xVec2R5xVec2fRC5xVec2RC5xVec2RC5xVec2RC5xVec2")

// func_8005DC2C
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "start__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explodeFv")

// func_8005DCF8
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "start_effects__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explodeFv")

// func_8005DE20
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "cb_droplet__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explodeFP5zFragP10zFragAsset")

// func_8005DFBC
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "perturb_direction__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explodeFRC5xVec3ffff")

// func_8005E178
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "get_next_quadrant__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explodeFRfRfRfRf")

// func_8005E248
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "reset_quadrants__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explodeFUif")

// func_8005E3BC
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "apply_damage__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explodeFf")

// func_8005E4A0
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "apply_damage_hazards__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explodeFf")

// func_8005E4D8
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "hazard_check__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explodeFR9NPCHazardPv")

// func_8005E570
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "__ct__Q413cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explode13cb_damage_entFf")

// func_8005E578
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "stop__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explodeFv")

// func_8005E58C
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "update__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explodeFf")

// func_8005E5E0
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "start__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_camera_aimFv")

// func_8005E6E8
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "stop__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_camera_aimFv")

// func_8005E708
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "update__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_camera_aimFf")

// func_8005E808
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "apply_turn__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_camera_aimCFv")

// func_8005E84C
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "turn__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_camera_aimFf")

// func_8005E944
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "collide_inward__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_camera_aimFv")

// func_8005EAFC
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "apply_motion__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_camera_aimCFv")

// func_8005EB90
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "stop__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_camera_aimFf")

// func_8005EC20
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "move__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_camera_aimFf")

// func_8005ED1C
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "start__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18state_camera_seizeFv")

// func_8005ED9C
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "stop__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18state_camera_seizeFv")

// func_8005EDD4
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "update__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18state_camera_seizeFf")

// func_8005EED4
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "refresh_missle_alpha__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18state_camera_seizeFf")

// func_8005EF6C
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "update_turn__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18state_camera_seizeFf")

// func_8005F058
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "update_move__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18state_camera_seizeFf")

// func_8005F100
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "xSCurve__Ff")

// func_8005F138
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "start__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_attachFv")

// func_8005F1B0
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "stop__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_attachFv")

// func_8005F1F4
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "update__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_attachFf")

// func_8005F264
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "lock_targets__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_attachFv")

// func_8005F2FC
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "lock_hazard_targets__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_attachFv")

// func_8005F330
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "hazard_check__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_attachFR9NPCHazardPv")

// func_8005F358
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "get_view_bound__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_attachCFR6xBound")

// func_8005F480
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "start__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_surveyFv")

// func_8005F4F8
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "move__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_surveyFv")

// func_8005F5EC
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "eval_missle_path__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_surveyCFfR5xVec3Rf")

// func_8005F714
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "lerp__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_surveyCFRffff")

// func_8005F724
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "lerp__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_surveyCFR5xVec3fRC5xVec3RC5xVec3")

// func_8005F7C0
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "find_nearest__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_surveyCFf")

// func_8005F864
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "xSCurve__Fff")

// func_8005F8C4
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "init_path__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_surveyFv")

// func_8005F9C0
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "stop__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_surveyFv")

// func_8005F9E0
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "update__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_surveyFf")

// func_8005FA94
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "control_jerked__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_surveyCFv")

// func_8005FB4C
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "start__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_camera_restoreFv")

// func_8005FC04
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "stop__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_camera_restoreFv")

// func_8005FC30
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "update__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_camera_restoreFf")

// func_8005FC64
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "__cl__Q413cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explode13cb_damage_entFR4xEntR10xGridBound")

// func_8005FDB8
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "__cl__Q413cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_attach15cb_lock_targetsFR4xEntR10xGridBound")

// func_8005FE1C
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "__sinit_zEntCruiseBubble_cpp")

// func_8005FE44
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "__ct__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_Fv")

// func_8005FE8C
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "__ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_dataFv")

// func_8005FE90
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "up_normal__5xVec3CFv")

// func_8005FEC4
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "safe_normal__5xVec3CFRC5xVec3")

// func_8005FF28
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "__mi__5xVec3CFv")

// func_8005FF88
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "create__5xVec3Ffff")

// func_8005FFD8
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "create__5xVec3Ff")

// func_80060028
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "IsHealthy__10zNPCCommonFv")

// func_80060030
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "zEntTriggerAsset__FRC11zEntTrigger")

// func_8006003C
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3")

// func_800600A0
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "__apl__5xVec2FRC5xVec2")

// func_800600C4
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "__ml__5xVec2CFf")

// func_80060100
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "__amu__5xVec2Ff")

// func_8006011C
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "center__13basic_rect_esc__0_f_esc__1_Fff")

// func_80060140
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "set_size__13basic_rect_esc__0_f_esc__1_Fff")

// func_8006014C
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "set_size__13basic_rect_esc__0_f_esc__1_Ff")

// func_80060158
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "load_param_esc__0_Ui_esc__4_i_esc__1___10auto_tweakFRUiiiiP16xModelAssetParamUiPCc")

// func_800601DC
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "load_param_esc__0_5xVec3_esc__4_i_esc__1___10auto_tweakFR5xVec3iiiP16xModelAssetParamUiPCc")

// func_8006022C
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "load_param_esc__0_i_esc__4_i_esc__1___10auto_tweakFRiiiiP16xModelAssetParamUiPCc")

// func_800602B0
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc")

// func_80060358
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "push_front__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_FRCQ313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data")

// func_800603A0
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "__as__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_dataFRCQ313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data")

// func_800603C4
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "front__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_Fv")

// func_800603F4
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "__ml__Q286fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_8iteratorCFv")

// func_8006040C
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "begin__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_CFv")

// func_80060430
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "create_iterator__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_CFUl")

// func_80060450
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "push_front__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_Fv")

// func_80060464
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "reset__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_Fv")

// func_80060484
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "clear__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_Fv")

// func_80060494
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "pop_back__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_Fv")

// func_800604A8
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "full__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_CFv")

// func_800604F4
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "max_size__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_CFv")

// func_800604F4
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "size__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_CFv")

// func_80060514
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "__vc__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_Fi")

// func_80060534
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "get_at__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_CFi")

// func_80060554
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "__ne__Q286fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_8iteratorCFRCQ286fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_8iterator")

// func_80060570
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "__pp__Q286fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_8iteratorFv")

// func_800605A4
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "__apl__Q286fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_8iteratorFi")

// func_800605BC
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "__rf__Q286fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_8iteratorCFv")

// func_800605DC
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "end__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_CFv")

// func_80060600
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "MarkForRecycle__9NPCHazardFv")

// func_80060610
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "xQuickCullForSphere__FP7xQCDataPC7xSphere")

// func_80060644
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "xGridCheckBound_esc__0_Q413cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explode13cb_damage_ent_esc__1___FR5xGridRC6xBoundRC7xQCDataQ413cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explode13cb_damage_ent")

// func_800607FC
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "xGridCheckBound_esc__0_Q413cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_attach15cb_lock_targets_esc__1___FR5xGridRC6xBoundRC7xQCDataQ413cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_attach15cb_lock_targets")
