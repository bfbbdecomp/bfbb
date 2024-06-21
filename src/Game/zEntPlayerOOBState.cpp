#include "zEntPlayerOOBState.h"

#include <types.h>

// func_8011A9F0
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "set_camera__Q29oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_Fb")

// func_8011ABA4
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "reset_camera__Q29oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_Fv")

// func_8011ABFC
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "render_model__Q29oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_FR14xModelInstanceRC5xVec3RC5xVec3RC5xVec3")

// func_8011AD24
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "move_up__Q29oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_FR5xVec3f")

// func_8011ADB0
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "move_right__Q29oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_FR5xVec3f")

// func_8011AE4C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "update_max_out_time__Q29oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_FRC8xSurface")

// func_8011AEA0
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "assume_player_is_stupid__Q29oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_Fv")

// func_8011AF8C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "move_hand__Q29oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_Ff")

// func_8011AFF8
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "render_fade__Q29oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_Fv")

// func_8011B0C4
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "set_rect_verts__Q29oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_FP18rwGameCube2DVertexffff10iColor_tagff")

// func_8011B20C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "set_rect_vert__Q29oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_FR18rwGameCube2DVertexfff10iColor_tagf")

// func_8011B23C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "render_ghost__Q29oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_Fv")

// func_8011B360
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "render_hand__Q29oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_Fv")

// func_8011B450
#pragma GLOBAL_ASM("asm/Game/zEntPlayerOOBState.s", "load_settings__9oob_stateFR8xIniFile")

// func_8011B8F0
#pragma GLOBAL_ASM("asm/Game/zEntPlayerOOBState.s", "init__9oob_stateFv")

// func_8011BA54
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "__ct__Q39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_15drop_state_typeFv")

// func_8011BAE8
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "supdate_fade_in__Q39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_15drop_state_typeFRQ39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_15drop_state_typeR6xSceneRf")

// func_8011BB08
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "update_fade_in__Q39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_15drop_state_typeFR6xSceneRf")

// func_8011BB78
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "supdate_start_fade_in__Q39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_15drop_state_typeFRQ39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_15drop_state_typeR6xSceneRf")

// func_8011BB98
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "update_start_fade_in__Q39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_15drop_state_typeFR6xSceneRf")

// func_8011BBD4
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "supdate_moving_out__Q39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_15drop_state_typeFRQ39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_15drop_state_typeR6xSceneRf")

// func_8011BBF4
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "update_moving_out__Q39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_15drop_state_typeFR6xSceneRf")

// func_8011BC7C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "supdate_starting__Q39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_15drop_state_typeFRQ39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_15drop_state_typeR6xSceneRf")

// func_8011BC9C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "update_starting__Q39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_15drop_state_typeFR6xSceneRf")

// func_8011BCFC
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "supdate_stopped__Q39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_15drop_state_typeFRQ39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_15drop_state_typeR6xSceneRf")

// func_8011BD1C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "update_stopped__Q39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_15drop_state_typeFR6xSceneRf")

// func_8011BD88
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "supdate_stopping__Q39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_15drop_state_typeFRQ39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_15drop_state_typeR6xSceneRf")

// func_8011BDA8
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "update_stopping__Q39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_15drop_state_typeFR6xSceneRf")

// func_8011BE3C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "supdate_moving_in__Q39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_15drop_state_typeFRQ39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_15drop_state_typeR6xSceneRf")

// func_8011BE5C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "update_moving_in__Q39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_15drop_state_typeFR6xSceneRf")

// func_8011BF6C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "__ct__Q39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_10state_typeFQ39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_10state_enum")

// func_8011BF80
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "__ct__Q39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_15grab_state_typeFv")

// func_8011C044
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "supdate_fade_out__Q39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_15grab_state_typeFRQ39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_15grab_state_typeR6xSceneRf")

// func_8011C064
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "update_fade_out__Q39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_15grab_state_typeFR6xSceneRf")

// func_8011C0D0
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "supdate_start_fade_out__Q39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_15grab_state_typeFRQ39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_15grab_state_typeR6xSceneRf")

// func_8011C0F0
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "update_start_fade_out__Q39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_15grab_state_typeFR6xSceneRf")

// func_8011C12C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "supdate_moving_out__Q39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_15grab_state_typeFRQ39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_15grab_state_typeR6xSceneRf")

// func_8011C14C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "update_moving_out__Q39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_15grab_state_typeFR6xSceneRf")

// func_8011C1D4
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "supdate_starting__Q39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_15grab_state_typeFRQ39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_15grab_state_typeR6xSceneRf")

// func_8011C1F4
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "update_starting__Q39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_15grab_state_typeFR6xSceneRf")

// func_8011C254
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "supdate_tutorial__Q39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_15grab_state_typeFRQ39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_15grab_state_typeR6xSceneRf")

// func_8011C274
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "update_tutorial__Q39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_15grab_state_typeFR6xSceneRf")

// func_8011C2E4
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "supdate_stopped__Q39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_15grab_state_typeFRQ39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_15grab_state_typeR6xSceneRf")

// func_8011C304
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "update_stopped__Q39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_15grab_state_typeFR6xSceneRf")

// func_8011C370
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "supdate_stopping__Q39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_15grab_state_typeFRQ39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_15grab_state_typeR6xSceneRf")

// func_8011C390
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "update_stopping__Q39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_15grab_state_typeFR6xSceneRf")

// func_8011C464
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "supdate_moving_in__Q39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_15grab_state_typeFRQ39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_15grab_state_typeR6xSceneRf")

// func_8011C484
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "update_moving_in__Q39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_15grab_state_typeFR6xSceneRf")

// func_8011C594
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "supdate_begin_wait__Q39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_15grab_state_typeFRQ39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_15grab_state_typeR6xSceneRf")

// func_8011C5B4
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "update_begin_wait__Q39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_15grab_state_typeFR6xSceneRf")

// func_8011C5F4
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "supdate_reorient__Q39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_15grab_state_typeFRQ39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_15grab_state_typeR6xSceneRf")

// func_8011C614
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "update_reorient__Q39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_15grab_state_typeFR6xSceneRf")

// func_8011C61C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "__ct__Q49oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_15grab_state_type17tutorial_callbackFRQ39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_15grab_state_type")

// func_8011C668
#pragma GLOBAL_ASM("asm/Game/zEntPlayerOOBState.s", "__ct__Q28ztalkbox8callbackFv")

// func_8011C678
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "__ct__Q39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_14out_state_typeFv")

// func_8011C6B8
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "__ct__Q39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_13in_state_typeFv")

// func_8011C6F8
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "start__Q39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_10state_typeFv")

// func_8011C6FC
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "stop__Q39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_10state_typeFv")

// func_8011C700
#pragma GLOBAL_ASM("asm/Game/zEntPlayerOOBState.s", "update__9oob_stateFR6xScenef")

// func_8011C82C
#pragma GLOBAL_ASM("asm/Game/zEntPlayerOOBState.s", "IsPlayerInControl__9oob_stateFv")

// func_8011C844
#pragma GLOBAL_ASM("asm/Game/zEntPlayerOOBState.s", "oob_timer__9oob_stateFv")

// func_8011C874
#pragma GLOBAL_ASM("asm/Game/zEntPlayerOOBState.s", "render__9oob_stateFv")

// func_8011C8FC
#pragma GLOBAL_ASM("asm/Game/zEntPlayerOOBState.s", "fx_render__9oob_stateFv")

// func_8011C974
#pragma GLOBAL_ASM("asm/Game/zEntPlayerOOBState.s", "force_start__9oob_stateFv")

// func_8011CA34
#pragma GLOBAL_ASM("asm/Game/zEntPlayerOOBState.s", "read_persistent__9oob_stateFR7xSerial")

// func_8011CAA8
#pragma GLOBAL_ASM("asm/Game/zEntPlayerOOBState.s", "write_persistent__9oob_stateFR7xSerial")

// func_8011CB14
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "start__Q39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_13in_state_typeFv")

// func_8011CB34
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "stop__Q39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_13in_state_typeFv")

// func_8011CB38
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "update__Q39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_13in_state_typeFR6xSceneRf")

// func_8011CBD4
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "start__Q39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_14out_state_typeFv")

// func_8011CBF8
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "stop__Q39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_14out_state_typeFv")

// func_8011CBFC
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "update__Q39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_14out_state_typeFR6xSceneRf")

// func_8011CD0C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "on_stop__Q49oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_15grab_state_type17tutorial_callbackFv")

// func_8011CD1C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "start__Q39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_15grab_state_typeFv")

// func_8011CF1C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "stop__Q39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_15grab_state_typeFv")

// func_8011CF20
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "update__Q39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_15grab_state_typeFR6xSceneRf")

// func_8011D0D8
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "start__Q39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_15drop_state_typeFv")

// func_8011D2BC
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "stop__Q39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_15drop_state_typeFv")

// func_8011D318
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayerOOBState.s",                                                               \
    "update__Q39oob_state32_esc__2_unnamed_esc__2_zEntPlayerOOBState_cpp_esc__2_15drop_state_typeFR6xSceneRf")

// func_8011D4C0
#pragma GLOBAL_ASM("asm/Game/zEntPlayerOOBState.s", "dot__5xVec2CFRC5xVec2")

// func_8011D4DC
#pragma GLOBAL_ASM("asm/Game/zEntPlayerOOBState.s", "normal__5xVec2CFv")

// func_8011D51C
#pragma GLOBAL_ASM("asm/Game/zEntPlayerOOBState.s", "normalize__5xVec2Fv")

// func_8011D554
#pragma GLOBAL_ASM("asm/Game/zEntPlayerOOBState.s", "on_signal__Q28ztalkbox8callbackFUi")

// func_8011D558
#pragma GLOBAL_ASM("asm/Game/zEntPlayerOOBState.s", "on_start__Q28ztalkbox8callbackFv")

// func_8011D55C
#pragma GLOBAL_ASM("asm/Game/zEntPlayerOOBState.s", "on_stop__Q28ztalkbox8callbackFv")

// func_8011D560
#pragma GLOBAL_ASM("asm/Game/zEntPlayerOOBState.s",                                                \
                   "on_answer__Q28ztalkbox8callbackFQ28ztalkbox11answer_enum")
