#include "zFX.h"

#include <types.h>

#pragma GLOBAL_ASM("asm/Game/zFX.s", "func_80092D1C")

// zFX_SceneEnter(RpWorld*)
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFX_SceneEnter__FP7RpWorld")

// zFX_SceneExit(RpWorld*)
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFX_SceneExit__FP7RpWorld")

// zFX_SceneReset()
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFX_SceneReset__Fv")

// zFXPatrickStun(const xVec3*)
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFXPatrickStun__FPC5xVec3")

// zFXHammer(const xVec3*)
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFXHammer__FPC5xVec3")

// zFXPorterWave(const xVec3*)
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFXPorterWave__FPC5xVec3")

// zFXMuscleArmWave(const xVec3*)
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFXMuscleArmWave__FPC5xVec3")

// zFXGooEnable(RpAtomic*,int)
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFXGooEnable__FP8RpAtomici")

// zFXGoo_SceneEnter()
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFXGoo_SceneEnter__Fv")

// zFXGoo_SceneReset()
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFXGoo_SceneReset__Fv")

// zFXGoo_SceneExit()
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFXGoo_SceneExit__Fv")

// zFXGooUpdateInstance(zFXGooInstance*,float)
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFXGooUpdateInstance__FP14zFXGooInstancef")

// zFXGooUpdate(float)
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFXGooUpdate__Ff")

// zFXUpdate(float)
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFXUpdate__Ff")

// zFXGooFreeze(RpAtomic*,const xVec3*,xVec3*)
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFXGooFreeze__FP8RpAtomicPC5xVec3P5xVec3")

// zFXGooIs(xEnt*,float&,unsigned int)
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFXGooIs__FP4xEntRfUi")

// zFXGooEventSetWarb(xEnt*,const float*)
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFXGooEventSetWarb__FP4xEntPCf")

// zFXGooEventSetFreezeDuration(xEnt*,float)
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFXGooEventSetFreezeDuration__FP4xEntf")

// zFXGooEventMelt(xEnt*)
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFXGooEventMelt__FP4xEnt")

// zFXGooFreezeTimeLeft()
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFXGooFreezeTimeLeft__Fv")

// zFX_SpawnBubbleHit(const xVec3*,unsigned int)
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFX_SpawnBubbleHit__FPC5xVec3Ui")

// zFX_SpawnBubbleHit(const xVec3*,unsigned int,const xVec3*,const xVec3*,float)
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFX_SpawnBubbleHit__FPC5xVec3UiPC5xVec3PC5xVec3f")

// zFX_SpawnBubbleTrail(const xVec3*,unsigned int)
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFX_SpawnBubbleTrail__FPC5xVec3Ui")

// zFX_SpawnBubbleTrail(const xVec3*,unsigned int,const xVec3*,const xVec3*)
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFX_SpawnBubbleTrail__FPC5xVec3UiPC5xVec3PC5xVec3")

// zFX_SpawnBubbleTrailNoNegRandVel(const xVec3*,unsigned int,const xVec3*,const xVec3*)
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFX_SpawnBubbleTrailNoNegRandVel__FPC5xVec3UiPC5xVec3PC5xVec3")

// zFX_SpawnBubbleTrail(const xVec3*,const xVec3*,unsigned int,const xVec3*,const xVec3*)
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFX_SpawnBubbleTrail__FPC5xVec3PC5xVec3UiPC5xVec3PC5xVec3")

// zFX_SpawnBubbleTrail(const xVec3*,const xVec3*,const xVec3*,const xVec3*,unsigned int,const xVec3*,const xVec3*,float)
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFX_SpawnBubbleTrail__FPC5xVec3PC5xVec3PC5xVec3PC5xVec3UiPC5xVec3PC5xVec3f")

// zFX_SpawnBubbleMenuTrail(const xVec3*,unsigned int,const xVec3*,const xVec3*)
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFX_SpawnBubbleMenuTrail__FPC5xVec3UiPC5xVec3PC5xVec3")

// zFX_SpawnBubbleWall()
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFX_SpawnBubbleWall__Fv")

// zFX_SpawnBubbleSlam(const xVec3*,unsigned int,float,float,float)
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFX_SpawnBubbleSlam__FPC5xVec3Uifff")

// zFX_SpawnBubbleBlast(const xVec3*,unsigned int,float,float,float)
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFX_SpawnBubbleBlast__FPC5xVec3Uifff")

#pragma GLOBAL_ASM("asm/Game/zFX.s", "model_is_preinstanced__17_esc__2_unnamed_esc__2_zFX_cpp_esc__2_FP8RpAtomic")

#pragma GLOBAL_ASM("asm/Game/zFX.s", "setup_popper_emitter__17_esc__2_unnamed_esc__2_zFX_cpp_esc__2_FRQ217_esc__2_unnamed_esc__2_zFX_cpp_esc__2_11popper_data")

#pragma GLOBAL_ASM("asm/Game/zFX.s", "get_triangle_area__17_esc__2_unnamed_esc__2_zFX_cpp_esc__2_FRC5xVec3RC5xVec3RC5xVec3")

#pragma GLOBAL_ASM("asm/Game/zFX.s", "count_faces__17_esc__2_unnamed_esc__2_zFX_cpp_esc__2_FP14xModelInstance")

#pragma GLOBAL_ASM("asm/Game/zFX.s", "eval_tri__17_esc__2_unnamed_esc__2_zFX_cpp_esc__2_FP5xVec3P5xVec3PC7xMat4x3PC10RpGeometryPC10RpTriangle")

#pragma GLOBAL_ASM("asm/Game/zFX.s", "SkinXformVertAndNormal__17_esc__2_unnamed_esc__2_zFX_cpp_esc__2_FP5xVec3P5xVec3PC5xVec3PC5xVec3PC7xMat4x3PC7xMat4x3PCfPCUiPCUsUi")

#pragma GLOBAL_ASM("asm/Game/zFX.s", "random_point_on_triangle__17_esc__2_unnamed_esc__2_zFX_cpp_esc__2_FR5xVec3R5xVec3PC5xVec3PC5xVec3")

#pragma GLOBAL_ASM("asm/Game/zFX.s", "random_surface_point__17_esc__2_unnamed_esc__2_zFX_cpp_esc__2_FR5xVec3R5xVec3RCQ217_esc__2_unnamed_esc__2_zFX_cpp_esc__2_11popper_data")

#pragma GLOBAL_ASM("asm/Game/zFX.s", "find_weight__Q217_esc__2_unnamed_esc__2_zFX_cpp_esc__2_11popper_dataCFf")

#pragma GLOBAL_ASM("asm/Game/zFX.s", "find_popper__17_esc__2_unnamed_esc__2_zFX_cpp_esc__2_FP4xEnt")

#pragma GLOBAL_ASM("asm/Game/zFX.s", "find_free_popper__17_esc__2_unnamed_esc__2_zFX_cpp_esc__2_Fv")

#pragma GLOBAL_ASM("asm/Game/zFX.s", "emit_popper_bubbles__17_esc__2_unnamed_esc__2_zFX_cpp_esc__2_FRQ217_esc__2_unnamed_esc__2_zFX_cpp_esc__2_11popper_dataiff")

#pragma GLOBAL_ASM("asm/Game/zFX.s", "emit_popper_bubbles_immediate__17_esc__2_unnamed_esc__2_zFX_cpp_esc__2_FRQ217_esc__2_unnamed_esc__2_zFX_cpp_esc__2_11popper_data")

#pragma GLOBAL_ASM("asm/Game/zFX.s", "update_popper__17_esc__2_unnamed_esc__2_zFX_cpp_esc__2_FRQ217_esc__2_unnamed_esc__2_zFX_cpp_esc__2_11popper_dataf")

#pragma GLOBAL_ASM("asm/Game/zFX.s", "set_popper_alpha__17_esc__2_unnamed_esc__2_zFX_cpp_esc__2_FRQ217_esc__2_unnamed_esc__2_zFX_cpp_esc__2_11popper_dataf")

#pragma GLOBAL_ASM("asm/Game/zFX.s", "destroy_popper__17_esc__2_unnamed_esc__2_zFX_cpp_esc__2_FRQ217_esc__2_unnamed_esc__2_zFX_cpp_esc__2_11popper_data")

#pragma GLOBAL_ASM("asm/Game/zFX.s", "grab_popper__17_esc__2_unnamed_esc__2_zFX_cpp_esc__2_FR4xEnt")

// init_poppers()
#pragma GLOBAL_ASM("asm/Game/zFX.s", "init_poppers__Fv")

#pragma GLOBAL_ASM("asm/Game/zFX.s", "add_popper_tweaks__17_esc__2_unnamed_esc__2_zFX_cpp_esc__2_Fv")

// reset_poppers()
#pragma GLOBAL_ASM("asm/Game/zFX.s", "reset_poppers__Fv")

// update_poppers(float)
#pragma GLOBAL_ASM("asm/Game/zFX.s", "update_poppers__Ff")

// zFXPopOn(xEnt&,float,float)
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFXPopOn__FR4xEntff")

#pragma GLOBAL_ASM("asm/Game/zFX.s", "validate_popper__17_esc__2_unnamed_esc__2_zFX_cpp_esc__2_FRC4xEnt")

// zFXPopOff(xEnt&,float,float)
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFXPopOff__FR4xEntff")

#pragma GLOBAL_ASM("asm/Game/zFX.s", "add_entrail_tweaks__17_esc__2_unnamed_esc__2_zFX_cpp_esc__2_Fv")

// reset_entrails()
#pragma GLOBAL_ASM("asm/Game/zFX.s", "reset_entrails__Fv")

#pragma GLOBAL_ASM("asm/Game/zFX.s", "reset__Q217_esc__2_unnamed_esc__2_zFX_cpp_esc__2_12entrail_dataFv")

// update_entrails(float)
#pragma GLOBAL_ASM("asm/Game/zFX.s", "update_entrails__Ff")

#pragma GLOBAL_ASM("asm/Game/zFX.s", "update__Q217_esc__2_unnamed_esc__2_zFX_cpp_esc__2_12entrail_dataFf")

// setup_entrails(zScene&)
#pragma GLOBAL_ASM("asm/Game/zFX.s", "setup_entrails__FR6zScene")

// xDebugAddTweak(const char*,const char*,const tweak_callback*,void*,unsigned int)
#pragma GLOBAL_ASM("asm/Game/zFX.s", "xDebugAddTweak__FPCcPCcPC14tweak_callbackPvUi")

// tweak_callback::create_change(void (*)(const tweak_info&))
#pragma GLOBAL_ASM("asm/Game/zFX.s", "create_change__14tweak_callbackFPFRC10tweak_info_v")

// xDrawSphere2(const xVec3*,float,unsigned int)
#pragma GLOBAL_ASM("asm/Game/zFX.s", "xDrawSphere2__FPC5xVec3fUi")

// xVec3::up_normalize()
#pragma GLOBAL_ASM("asm/Game/zFX.s", "up_normalize__5xVec3Fv")

// xMat3x3RMulVec(xVec3*,const xMat3x3*,const xVec3*)
namespace {
#pragma GLOBAL_ASM("asm/Game/zFX.s", "xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3")
}

// xModelSetScale(xModelInstance*,const xVec3&)
#pragma GLOBAL_ASM("asm/Game/zFX.s", "xModelSetScale__FP14xModelInstanceRC5xVec3")

// xSCurve(float&,float&,float&,float)
#pragma GLOBAL_ASM("asm/Game/zFX.s", "xSCurve__FRfRfRff")
