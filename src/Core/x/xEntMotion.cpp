#include "xEntMotion.h"

#include <types.h>

// xEntMotionInit(xEntMotion*,xEnt*,xEntMotionAsset*)
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xEntMotionInit__FP10xEntMotionP4xEntP15xEntMotionAsset")

// xEntMotionReset(xEntMotion*,xScene*)
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xEntMotionReset__FP10xEntMotionP6xScene")

// xEntMotionMove(xEntMotion*,xScene*,float,xEntFrame*)
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xEntMotionMove__FP10xEntMotionP6xScenefP9xEntFrame")

// xEntERMove(xEntMotion*,xScene*,float,xEntFrame*)
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xEntERMove__FP10xEntMotionP6xScenefP9xEntFrame")

// xEntOrbitMove(xEntMotion*,xScene*,float,xEntFrame*)
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xEntOrbitMove__FP10xEntMotionP6xScenefP9xEntFrame")

// xEntMPGetNext(xEntMotion*,xMovePoint*,xScene*)
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xEntMPGetNext__FP10xEntMotionP10xMovePointP6xScene")

// xEntMPMove(xEntMotion*,xScene*,float,xEntFrame*)
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xEntMPMove__FP10xEntMotionP6xScenefP9xEntFrame")

// xEntPenMove(xEntMotion*,xScene*,float,xEntFrame*)
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xEntPenMove__FP10xEntMotionP6xScenefP9xEntFrame")

// xEntMechMove(xEntMotion*,xScene*,float,xEntFrame*)
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xEntMechMove__FP10xEntMotionP6xScenefP9xEntFrame")

// xEntSldMove(xEntMotion*,xScene*,float,xEntFrame*)
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xEntSldMove__FP10xEntMotionP6xScenefP9xEntFrame")

// xEntRotMove(xEntMotion*,xScene*,float,xEntFrame*)
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xEntRotMove__FP10xEntMotionP6xScenefP9xEntFrame")

// xEntMechForward(xEntMotion*)
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xEntMechForward__FP10xEntMotion")

// xEntMechReverse(xEntMotion*)
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xEntMechReverse__FP10xEntMotion")

// xEntMotionTranslate(xEntMotion*,const xVec3*,xMat4x3*)
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xEntMotionTranslate__FP10xEntMotionPC5xVec3P7xMat4x3")

// xEntMotionDebugInit(unsigned short)
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xEntMotionDebugInit__FUs")

// xEntMotionDebugExit()
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xEntMotionDebugExit__Fv")

// xEntMotionDebugAdd(xEntMotion*)
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xEntMotionDebugAdd__FP10xEntMotion")

// xEntMotionDebugWrite(const xEntMotion*)
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xEntMotionDebugWrite__FPC10xEntMotion")

// xbtoa(unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xbtoa__FUi")

// xEntMotionDebugDraw(const xEntMotion*)
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xEntMotionDebugDraw__FPC10xEntMotion")

// xEntMotionDebugIPad(xEntMotion*)
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xEntMotionDebugIPad__FP10xEntMotion")

// xVec3Equals(const xVec3*,const xVec3*)
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xVec3Equals__FPC5xVec3PC5xVec3")

// xQuatCopy(xQuat*,const xQuat*)
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xQuatCopy__FP5xQuatPC5xQuat")

namespace 
{
// xMat3x3RMulVec(xVec3*,const xMat3x3*,const xVec3*)
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3")
}

// xQuatEquals(const xQuat*,const xQuat*)
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xQuatEquals__FPC5xQuatPC5xQuat")

// xQuatFlip(xQuat*,const xQuat*)
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xQuatFlip__FP5xQuatPC5xQuat")

// xQuatDot(const xQuat*,const xQuat*)
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xQuatDot__FPC5xQuatPC5xQuat")

// xEntMPSetSpeed(xEntMotion*,float)
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xEntMPSetSpeed__FP10xEntMotionf")

// xEntERIsRetracted(const xEntMotion*)
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xEntERIsRetracted__FPC10xEntMotion")

// xEntERIsRetracting(const xEntMotion*)
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xEntERIsRetracting__FPC10xEntMotion")

// xEntERIsExtended(const xEntMotion*)
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xEntERIsExtended__FPC10xEntMotion")

// xEntERIsExtending(const xEntMotion*)
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xEntERIsExtending__FPC10xEntMotion")

// xEntMotionStop(xEntMotion*)
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xEntMotionStop__FP10xEntMotion")

// xEntMotionRun(xEntMotion*)
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xEntMotionRun__FP10xEntMotion")

// xEntMotionIsStopped(const xEntMotion*)
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xEntMotionIsStopped__FPC10xEntMotion")

// xSpline3_ArcTotal(xSpline3*)
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xSpline3_ArcTotal__FP8xSpline3")

// xMovePointGetNumPoints(const xMovePoint*)
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xMovePointGetNumPoints__FPC10xMovePoint")

// xMovePointGetPoint(const xMovePoint*,unsigned short)
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xMovePointGetPoint__FPC10xMovePointUs")

// xDrawLine(const xVec3*,const xVec3*)
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xDrawLine__FPC5xVec3PC5xVec3")

// xDrawSetColor(iColor_tag)
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xDrawSetColor__F10iColor_tag")
