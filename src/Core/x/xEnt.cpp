#include "xEnt.h"

#include <types.h>

#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "reset__Q218_esc__2_unnamed_esc__2_xEnt_cpp_esc__2_9anim_collFR4xEnt")

#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "refresh__Q218_esc__2_unnamed_esc__2_xEnt_cpp_esc__2_9anim_collFR4xEnt")

// xEntSetTimePassed(float)
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntSetTimePassed__Ff")

// xEntSceneInit()
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntSceneInit__Fv")

// xEntSceneExit()
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntSceneExit__Fv")

// xEntAddHittableFlag(xEnt*)
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntAddHittableFlag__FP4xEnt")

// hack_receive_shadow(xEnt*)
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "hack_receive_shadow__FP4xEnt")

// xEntAddShadowRecFlag(xEnt*)
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntAddShadowRecFlag__FP4xEnt")

// xEntInit(xEnt*,xEntAsset*)
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntInit__FP4xEntP9xEntAsset")

// xEntInitForType(xEnt*)
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntInitForType__FP4xEnt")

#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "get_lower_extent__18_esc__2_unnamed_esc__2_xEnt_cpp_esc__2_FRC6xBound")

#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "collide_downward__18_esc__2_unnamed_esc__2_xEnt_cpp_esc__2_FR5xVec3RP4xEntR6xSceneR4xEntf")

#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "mount_stacked_entity__18_esc__2_unnamed_esc__2_xEnt_cpp_esc__2_FR4xEntR4xEnt")

#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "dismount_stacked_entity__18_esc__2_unnamed_esc__2_xEnt_cpp_esc__2_FR4xEnt")

#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "setup_stacked_entity__18_esc__2_unnamed_esc__2_xEnt_cpp_esc__2_FR4xEnt")

#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "drop_stacked_entity__18_esc__2_unnamed_esc__2_xEnt_cpp_esc__2_FR4xEnt")

#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "stop_stacked_entity__18_esc__2_unnamed_esc__2_xEnt_cpp_esc__2_FR4xEnt")

#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "update_stacked_entity__18_esc__2_unnamed_esc__2_xEnt_cpp_esc__2_FR6xSceneR4xEntf")

// xEntSetup(xEnt*)
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntSetup__FP4xEnt")

// xEntSave(xEnt*,xSerial*)
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntSave__FP4xEntP7xSerial")

// xEntLoad(xEnt*,xSerial*)
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntLoad__FP4xEntP7xSerial")

// xEntReset(xEnt*)
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntReset__FP4xEnt")

// xEntLoadModel(xEnt*,RpAtomic*)
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntLoadModel__FP4xEntP8RpAtomic")

// xEntAddToPos(xEnt*,const xVec3*)
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntAddToPos__FP4xEntPC5xVec3")

// xEntSetupPipeline(xModelInstance*)
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntSetupPipeline__FP14xModelInstance")

// xEntSetupPipeline(xSurface*,RpAtomic*)
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntSetupPipeline__FP8xSurfaceP8RpAtomic")

// xEntRestorePipeline(xModelInstance*)
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntRestorePipeline__FP14xModelInstance")

// xEntRestorePipeline(xSurface*,RpAtomic*)
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntRestorePipeline__FP8xSurfaceP8RpAtomic")

// xEntRender(xEnt*)
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntRender__FP4xEnt")

// xEntUpdate(xEnt*,xScene*,float)
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntUpdate__FP4xEntP6xScenef")

// xEntBeginUpdate(xEnt*,xScene*,float)
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntBeginUpdate__FP4xEntP6xScenef")

// xEntEndUpdate(xEnt*,xScene*,float)
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntEndUpdate__FP4xEntP6xScenef")

// xEntDefaultBoundUpdate(xEnt*,xVec3*)
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntDefaultBoundUpdate__FP4xEntP5xVec3")

// xEntDefaultTranslate(xEnt*,xVec3*,xMat4x3*)
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntDefaultTranslate__FP4xEntP5xVec3P7xMat4x3")

// xEntRotationToMatrix(xEntFrame*)
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntRotationToMatrix__FP9xEntFrame")

// xEntMotionToMatrix(xEnt*,xEntFrame*)
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntMotionToMatrix__FP4xEntP9xEntFrame")

// xEntMove(xEnt*,xScene*,float)
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntMove__FP4xEntP6xScenef")

#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "post_move__Q218_esc__2_unnamed_esc__2_xEnt_cpp_esc__2_9anim_collFR4xEnt")

#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "pre_move__Q218_esc__2_unnamed_esc__2_xEnt_cpp_esc__2_9anim_collFR4xEnt")

// xEntApplyPhysics(xEnt*,xScene*,float)
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntApplyPhysics__FP4xEntP6xScenef")

// xEntCollide(xEnt*,xScene*,float)
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntCollide__FP4xEntP6xScenef")

// xEntBeginCollide(xEnt*,xScene*,float)
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntBeginCollide__FP4xEntP6xScenef")

// xEntEndCollide(xEnt*,xScene*,float)
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntEndCollide__FP4xEntP6xScenef")

// xEntCollCheckEnv(xEnt*,xScene*)
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntCollCheckEnv__FP4xEntP6xScene")

// xEntCollCheckOneGrid(xEnt*,xScene*,xEnt* (*)(xEnt*, xScene*, void*),xGrid*)
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntCollCheckOneGrid__FP4xEntP6xScenePFP4xEntP6xScenePv_P4xEntP5xGrid")

// xEntCollCheckByGrid(xEnt*,xScene*,xEnt* (*)(xEnt*, xScene*, void*))
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntCollCheckByGrid__FP4xEntP6xScenePFP4xEntP6xScenePv_P4xEnt")

// xEntCollCheckNPCsByGrid(xEnt*,xScene*,xEnt* (*)(xEnt*, xScene*, void*))
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntCollCheckNPCsByGrid__FP4xEntP6xScenePFP4xEntP6xScenePv_P4xEnt")

// xEntCollCheckStats(xEnt*,xScene*,xEnt* (*)(xEnt*, xScene*, void*))
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntCollCheckStats__FP4xEntP6xScenePFP4xEntP6xScenePv_P4xEnt")

// xEntCollCheckDyns(xEnt*,xScene*,xEnt* (*)(xEnt*, xScene*, void*))
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntCollCheckDyns__FP4xEntP6xScenePFP4xEntP6xScenePv_P4xEnt")

// xEntCollCheckNPCs(xEnt*,xScene*,xEnt* (*)(xEnt*, xScene*, void*))
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntCollCheckNPCs__FP4xEntP6xScenePFP4xEntP6xScenePv_P4xEnt")

// xEntCollideFloor(xEnt*,xScene*,float)
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntCollideFloor__FP4xEntP6xScenef")

// xEntCollideCeiling(xEnt*,xScene*,float)
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntCollideCeiling__FP4xEntP6xScenef")

// xEntCollideWalls(xEnt*,xScene*,float)
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntCollideWalls__FP4xEntP6xScenef")

// xEntSetNostepNormAngle(float)
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntSetNostepNormAngle__Ff")

// xEntGetAllEntsBox()
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntGetAllEntsBox__Fv")

// xEntAnimateCollision(xEnt&,bool)
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntAnimateCollision__FR4xEntb")

// xEntValidType(unsigned char)
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntValidType__FUc")

// xEntReposition(xEnt&,const xMat4x3&)
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntReposition__FR4xEntRC7xMat4x3")

// xEntInitShadow(xEnt&,xEntShadow&)
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntInitShadow__FR4xEntR10xEntShadow")

// xVec3::operator -=(float)
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "__ami__5xVec3Ff")

// xVec3::operator +=(float)
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "__apl__5xVec3Ff")

// xBoundCenter(xBound*)
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xBoundCenter__FP6xBound")

// xBoundCenter(const xBound*)
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xBoundCenter__FPC6xBound")

// xEntHide(xEnt*)
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntHide__FP4xEnt")

// xEntShow(xEnt*)
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntShow__FP4xEnt")

// xEntGetPos(const xEnt*)
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntGetPos__FPC4xEnt")

// xEntGetCenter(const xEnt*)
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntGetCenter__FPC4xEnt")

// xRotCopy(xRot*,const xRot*)
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xRotCopy__FP4xRotPC4xRot")

// xMat3x3RMulVec(xVec3*,const xMat3x3*,const xVec3*)
namespace {
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3")
}

// xMat3x3Rot(xMat3x3*,const xVec3*,float)
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xMat3x3Rot__FP7xMat3x3PC5xVec3f")

// xModelSetFrame(xModelInstance*,const xMat4x3*)
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xModelSetFrame__FP14xModelInstancePC7xMat4x3")

// xModelGetFrame(xModelInstance*)
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xModelGetFrame__FP14xModelInstance")

// xVec3SMulBy(xVec3*,float)
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xVec3SMulBy__FP5xVec3f")

// xVec3SubFrom(xVec3*,const xVec3*)
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xVec3SubFrom__FP5xVec3PC5xVec3")

// xGridIterFirstCell(xGridBound**,xGridIterator&)
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xGridIterFirstCell__FPP10xGridBoundR13xGridIterator")

// xGridIterFirstCell(xGrid*,int,int,xGridIterator&)
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xGridIterFirstCell__FP5xGridiiR13xGridIterator")

// xGridIterNextCell(xGridIterator&)
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xGridIterNextCell__FR13xGridIterator")

// xGridIterClose(xGridIterator&)
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xGridIterClose__FR13xGridIterator")
