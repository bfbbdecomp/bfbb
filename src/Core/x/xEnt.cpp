#include "xEnt.h"

#include <types.h>

// func_80018064
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "reset__Q218_esc__2_unnamed_esc__2_xEnt_cpp_esc__2_9anim_collFR4xEnt")

// func_800181E8
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "refresh__Q218_esc__2_unnamed_esc__2_xEnt_cpp_esc__2_9anim_collFR4xEnt")

// func_8001824C
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntSetTimePassed__Ff")

// func_80018254
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntSceneInit__Fv")

// func_80018260
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntSceneExit__Fv")

// func_80018264
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntAddHittableFlag__FP4xEnt")

// func_8001830C
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "hack_receive_shadow__FP4xEnt")

// func_8001853C
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntAddShadowRecFlag__FP4xEnt")

// func_800185B0
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntInit__FP4xEntP9xEntAsset")

// func_800186D0
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntInitForType__FP4xEnt")

// func_800188E0
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "get_lower_extent__18_esc__2_unnamed_esc__2_xEnt_cpp_esc__2_FRC6xBound")

// func_800189A8
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "collide_downward__18_esc__2_unnamed_esc__2_xEnt_cpp_esc__2_FR5xVec3RP4xEntR6xSceneR4xEntf")

// func_80018AEC
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "stacked_owner_destroyed__18_esc__2_unnamed_esc__2_xEnt_cpp_esc__2_FR15zEntDestructObjPv")

// func_80018B10
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "mount_stacked_entity__18_esc__2_unnamed_esc__2_xEnt_cpp_esc__2_FR4xEntR4xEnt")

// func_80018B64
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "dismount_stacked_entity__18_esc__2_unnamed_esc__2_xEnt_cpp_esc__2_FR4xEnt")

// func_80018B94
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "setup_stacked_entity__18_esc__2_unnamed_esc__2_xEnt_cpp_esc__2_FR4xEnt")

// func_80018BA0
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "drop_stacked_entity__18_esc__2_unnamed_esc__2_xEnt_cpp_esc__2_FR4xEnt")

// func_80018BC8
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "stop_stacked_entity__18_esc__2_unnamed_esc__2_xEnt_cpp_esc__2_FR4xEnt")

// func_80018BD4
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "update_stacked_entity__18_esc__2_unnamed_esc__2_xEnt_cpp_esc__2_FR6xSceneR4xEntf")

// func_80018CA4
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntSetup__FP4xEnt")

// func_80018E80
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntSave__FP4xEntP7xSerial")

// func_80018EE4
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntLoad__FP4xEntP7xSerial")

// func_80018F50
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntReset__FP4xEnt")

// func_800191CC
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntLoadModel__FP4xEntP8RpAtomic")

// func_80019268
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntAddToPos__FP4xEntPC5xVec3")

// func_80019290
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntSetupPipeline__FP14xModelInstance")

// func_800192BC
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntSetupPipeline__FP8xSurfaceP8RpAtomic")

// func_80019440
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntRestorePipeline__FP14xModelInstance")

// func_8001946C
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntRestorePipeline__FP8xSurfaceP8RpAtomic")

// func_800194CC
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntRender__FP4xEnt")

// func_800195FC
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntUpdate__FP4xEntP6xScenef")

// func_800196DC
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntBeginUpdate__FP4xEntP6xScenef")

// func_80019768
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntEndUpdate__FP4xEntP6xScenef")

// func_80019864
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntDefaultBoundUpdate__FP4xEntP5xVec3")

// func_800198D4
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntDefaultTranslate__FP4xEntP5xVec3P7xMat4x3")

// func_800199AC
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntRotationToMatrix__FP9xEntFrame")

// func_80019A30
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntMotionToMatrix__FP4xEntP9xEntFrame")

// func_80019AEC
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntMove__FP4xEntP6xScenef")

// func_80019C04
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "post_move__Q218_esc__2_unnamed_esc__2_xEnt_cpp_esc__2_9anim_collFR4xEnt")

// func_80019C70
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "pre_move__Q218_esc__2_unnamed_esc__2_xEnt_cpp_esc__2_9anim_collFR4xEnt")

// func_80019CB8
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntApplyPhysics__FP4xEntP6xScenef")

// func_80019E88
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntCollide__FP4xEntP6xScenef")

// func_8001A0A4
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntBeginCollide__FP4xEntP6xScenef")

// func_8001A21C
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntEndCollide__FP4xEntP6xScenef")

// func_8001A250
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntCollCheckEnv__FP4xEntP6xScene")

// func_8001A2E0
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntCollCheckOneGrid__FP4xEntP6xScenePFP4xEntP6xScenePv_P4xEntP5xGrid")

// func_8001A530
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntCollCheckByGrid__FP4xEntP6xScenePFP4xEntP6xScenePv_P4xEnt")

// func_8001A5C4
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntCollCheckNPCsByGrid__FP4xEntP6xScenePFP4xEntP6xScenePv_P4xEnt")

// func_8001A610
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntCollCheckStats__FP4xEntP6xScenePFP4xEntP6xScenePv_P4xEnt")

// func_8001A664
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntCollCheckDyns__FP4xEntP6xScenePFP4xEntP6xScenePv_P4xEnt")

// func_8001A6B8
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntCollCheckNPCs__FP4xEntP6xScenePFP4xEntP6xScenePv_P4xEnt")

// func_8001A70C
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntCollCheckOneEntNoDepen__FP4xEntP6xScenePv")

// func_8001AB80
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntCollideFloor__FP4xEntP6xScenef")

// func_8001AE78
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntCollideCeiling__FP4xEntP6xScenef")

// func_8001B018
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntCollideWalls__FP4xEntP6xScenef")

// func_8001B30C
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntSetNostepNormAngle__Ff")

// func_8001B314
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntGetAllEntsBox__Fv")

// func_8001B320
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntAnimateCollision__FR4xEntb")

// func_8001B3BC
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntValidType__FUc")

// func_8001B664
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntReposition__FR4xEntRC7xMat4x3")

// func_8001B70C
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntInitShadow__FR4xEntR10xEntShadow")

// func_8001B788
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "__ami__5xVec3Ff")

// func_8001B7B0
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "__apl__5xVec3Ff")

// func_8001B7D8
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xBoundCenter__FP6xBound")

// func_8001B7E0
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xBoundCenter__FPC6xBound")

// func_8001B7E8
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntHide__FP4xEnt")

// func_8001B7F8
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntShow__FP4xEnt")

// func_8001B808
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntGetPos__FPC4xEnt")

// func_8001B830
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntGetCenter__FPC4xEnt")

// func_8001B854
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xRotCopy__FP4xRotPC4xRot")

// func_8001B878
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3")

// func_8001B8DC
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xMat3x3Rot__FP7xMat3x3PC5xVec3f")

// func_8001B90C
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xModelSetFrame__FP14xModelInstancePC7xMat4x3")

// func_8001B930
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xModelGetFrame__FP14xModelInstance")

// func_8001B938
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xVec3SMulBy__FP5xVec3f")

// func_8001B960
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xVec3SubFrom__FP5xVec3PC5xVec3")

// func_8001B994
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xGridIterFirstCell__FPP10xGridBoundR13xGridIterator")

// func_8001B9CC
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xGridIterFirstCell__FP5xGridiiR13xGridIterator")

// func_8001BA40
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xGridIterNextCell__FR13xGridIterator")

// func_8001BAB0
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xGridIterClose__FR13xGridIterator")
