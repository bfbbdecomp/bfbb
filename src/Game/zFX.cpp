#include "zFX.h"

#include <types.h>

// func_80092D1C
#pragma GLOBAL_ASM("asm/Game/zFX.s", "on_spawn_bubble_wall__FRC10tweak_info")

// func_80092D3C
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFX_SceneEnter__FP7RpWorld")

// func_80092E28
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFX_SceneExit__FP7RpWorld")

// func_80092E4C
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFX_SceneReset__Fv")

// func_80092E74
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFXPatrickStun__FPC5xVec3")

// func_80092ED0
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFXHammer__FPC5xVec3")

// func_80092F24
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFXPorterWave__FPC5xVec3")

// func_80092F6C
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFXMuscleArmWave__FPC5xVec3")

// func_80092F94
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFXGooEnable__FP8RpAtomici")

// func_8009337C
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFXGoo_SceneEnter__Fv")

// func_80093404
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFXGoo_SceneReset__Fv")

// func_800934EC
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFXGoo_SceneExit__Fv")

// func_8009355C
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFXGooUpdateInstance__FP14zFXGooInstancef")

// func_80093980
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFXGooUpdate__Ff")

// func_800939F4
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFXGooRenderAtomic__FP8RpAtomic")

// func_80093F88
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFXUpdate__Ff")

// func_80093FCC
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFXGooFreeze__FP8RpAtomicPC5xVec3P5xVec3")

// func_80094240
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFXGooIs__FP4xEntRfUi")

// func_80094430
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFXGooEventSetWarb__FP4xEntPCf")

// func_8009459C
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFXGooEventSetFreezeDuration__FP4xEntf")

// func_800947A8
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFXGooEventMelt__FP4xEnt")

// func_800949BC
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFXGooFreezeTimeLeft__Fv")

// func_80094A38
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFX_SpawnBubbleHit__FPC5xVec3Ui")

// func_80094A6C
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFX_SpawnBubbleHit__FPC5xVec3UiPC5xVec3PC5xVec3f")

// func_80094C44
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFX_SpawnBubbleTrail__FPC5xVec3Ui")

// func_80094C74
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFX_SpawnBubbleTrail__FPC5xVec3UiPC5xVec3PC5xVec3")

// func_80094DDC
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFX_SpawnBubbleTrailNoNegRandVel__FPC5xVec3UiPC5xVec3PC5xVec3")

// func_80094F20
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFX_SpawnBubbleTrail__FPC5xVec3PC5xVec3UiPC5xVec3PC5xVec3")

// func_800950C8
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFX_SpawnBubbleTrail__FPC5xVec3PC5xVec3PC5xVec3PC5xVec3UiPC5xVec3PC5xVec3f")

// func_80095300
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFX_SpawnBubbleMenuTrail__FPC5xVec3UiPC5xVec3PC5xVec3")

// func_80095458
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFX_SpawnBubbleWall__Fv")

// func_80095648
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFX_SpawnBubbleSlam__FPC5xVec3Uifff")

// func_80095804
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFX_SpawnBubbleBlast__FPC5xVec3Uifff")

// func_800959F4
#pragma GLOBAL_ASM("asm/Game/zFX.s", "model_is_preinstanced__17_esc__2_unnamed_esc__2_zFX_cpp_esc__2_FP8RpAtomic")

// func_80095A2C
#pragma GLOBAL_ASM("asm/Game/zFX.s", "setup_popper_emitter__17_esc__2_unnamed_esc__2_zFX_cpp_esc__2_FRQ217_esc__2_unnamed_esc__2_zFX_cpp_esc__2_11popper_data")

// func_80095B64
#pragma GLOBAL_ASM("asm/Game/zFX.s", "get_triangle_area__17_esc__2_unnamed_esc__2_zFX_cpp_esc__2_FRC5xVec3RC5xVec3RC5xVec3")

// func_80095C58
#pragma GLOBAL_ASM("asm/Game/zFX.s", "count_faces__17_esc__2_unnamed_esc__2_zFX_cpp_esc__2_FP14xModelInstance")

// func_80095C84
#pragma GLOBAL_ASM("asm/Game/zFX.s", "eval_tri__17_esc__2_unnamed_esc__2_zFX_cpp_esc__2_FP5xVec3P5xVec3PC7xMat4x3PC10RpGeometryPC10RpTriangle")

// func_80095DDC
#pragma GLOBAL_ASM("asm/Game/zFX.s", "SkinXformVertAndNormal__17_esc__2_unnamed_esc__2_zFX_cpp_esc__2_FP5xVec3P5xVec3PC5xVec3PC5xVec3PC7xMat4x3PC7xMat4x3PCfPCUiPCUsUi")

// func_80095FF0
#pragma GLOBAL_ASM("asm/Game/zFX.s", "random_point_on_triangle__17_esc__2_unnamed_esc__2_zFX_cpp_esc__2_FR5xVec3R5xVec3PC5xVec3PC5xVec3")

// func_80096158
#pragma GLOBAL_ASM("asm/Game/zFX.s", "random_surface_point__17_esc__2_unnamed_esc__2_zFX_cpp_esc__2_FR5xVec3R5xVec3RCQ217_esc__2_unnamed_esc__2_zFX_cpp_esc__2_11popper_data")

// func_80096214
#pragma GLOBAL_ASM("asm/Game/zFX.s", "find_weight__Q217_esc__2_unnamed_esc__2_zFX_cpp_esc__2_11popper_dataCFf")

// func_8009627C
#pragma GLOBAL_ASM("asm/Game/zFX.s", "find_popper__17_esc__2_unnamed_esc__2_zFX_cpp_esc__2_FP4xEnt")

// func_800962B4
#pragma GLOBAL_ASM("asm/Game/zFX.s", "find_free_popper__17_esc__2_unnamed_esc__2_zFX_cpp_esc__2_Fv")

// func_800962F8
#pragma GLOBAL_ASM("asm/Game/zFX.s", "emit_popper_bubbles__17_esc__2_unnamed_esc__2_zFX_cpp_esc__2_FRQ217_esc__2_unnamed_esc__2_zFX_cpp_esc__2_11popper_dataiff")

// func_80096538
#pragma GLOBAL_ASM("asm/Game/zFX.s", "emit_popper_bubbles_immediate__17_esc__2_unnamed_esc__2_zFX_cpp_esc__2_FRQ217_esc__2_unnamed_esc__2_zFX_cpp_esc__2_11popper_data")

// func_800965A4
#pragma GLOBAL_ASM("asm/Game/zFX.s", "update_popper__17_esc__2_unnamed_esc__2_zFX_cpp_esc__2_FRQ217_esc__2_unnamed_esc__2_zFX_cpp_esc__2_11popper_dataf")

// func_8009676C
#pragma GLOBAL_ASM("asm/Game/zFX.s", "set_popper_alpha__17_esc__2_unnamed_esc__2_zFX_cpp_esc__2_FRQ217_esc__2_unnamed_esc__2_zFX_cpp_esc__2_11popper_dataf")

// func_800967D0
#pragma GLOBAL_ASM("asm/Game/zFX.s", "destroy_popper__17_esc__2_unnamed_esc__2_zFX_cpp_esc__2_FRQ217_esc__2_unnamed_esc__2_zFX_cpp_esc__2_11popper_data")

// func_80096868
#pragma GLOBAL_ASM("asm/Game/zFX.s", "grab_popper__17_esc__2_unnamed_esc__2_zFX_cpp_esc__2_FR4xEnt")

// func_800968FC
#pragma GLOBAL_ASM("asm/Game/zFX.s", "init_poppers__Fv")

// func_80096920
#pragma GLOBAL_ASM("asm/Game/zFX.s", "add_popper_tweaks__17_esc__2_unnamed_esc__2_zFX_cpp_esc__2_Fv")

// func_80096924
#pragma GLOBAL_ASM("asm/Game/zFX.s", "reset_poppers__Fv")

// func_80096950
#pragma GLOBAL_ASM("asm/Game/zFX.s", "update_poppers__Ff")

// func_800969E4
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFXPopOn__FR4xEntff")

// func_80096B48
#pragma GLOBAL_ASM("asm/Game/zFX.s", "validate_popper__17_esc__2_unnamed_esc__2_zFX_cpp_esc__2_FRC4xEnt")

// func_80096C44
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFXPopOff__FR4xEntff")

// func_80096D84
#pragma GLOBAL_ASM("asm/Game/zFX.s", "add_entrail_tweaks__17_esc__2_unnamed_esc__2_zFX_cpp_esc__2_Fv")

// func_80096D88
#pragma GLOBAL_ASM("asm/Game/zFX.s", "reset_entrails__Fv")

// func_80096DE0
#pragma GLOBAL_ASM("asm/Game/zFX.s", "reset__Q217_esc__2_unnamed_esc__2_zFX_cpp_esc__2_12entrail_dataFv")

// func_80096DF4
#pragma GLOBAL_ASM("asm/Game/zFX.s", "update_entrails__Ff")

// func_80096E5C
#pragma GLOBAL_ASM("asm/Game/zFX.s", "update__Q217_esc__2_unnamed_esc__2_zFX_cpp_esc__2_12entrail_dataFf")

// func_80097094
#pragma GLOBAL_ASM("asm/Game/zFX.s", "setup_entrails__FR6zScene")

// func_800972B0
#pragma GLOBAL_ASM("asm/Game/zFX.s", "xDebugAddTweak__FPCcPCcPC14tweak_callbackPvUi")

// func_800972B4
#pragma GLOBAL_ASM("asm/Game/zFX.s", "create_change__14tweak_callbackFPFRC10tweak_info_v")

// func_80097354
#pragma GLOBAL_ASM("asm/Game/zFX.s", "xDrawSphere2__FPC5xVec3fUi")

// func_80097358
#pragma GLOBAL_ASM("asm/Game/zFX.s", "up_normalize__5xVec3Fv")

// func_80097380
#pragma GLOBAL_ASM("asm/Game/zFX.s", "xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3")

// func_800973E4
#pragma GLOBAL_ASM("asm/Game/zFX.s", "xModelSetScale__FP14xModelInstanceRC5xVec3")

// func_80097434
#pragma GLOBAL_ASM("asm/Game/zFX.s", "xSCurve__FRfRfRff")
