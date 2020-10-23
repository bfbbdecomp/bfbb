#include "xEntMotion.h"

#include <types.h>

// func_8001C888
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xEntMotionInit__FP10xEntMotionP4xEntP15xEntMotionAsset")

// func_8001CACC
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xEntMotionReset__FP10xEntMotionP6xScene")

// func_8001CEA0
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xEntMotionMove__FP10xEntMotionP6xScenefP9xEntFrame")

// func_8001CF50
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xEntERMove__FP10xEntMotionP6xScenefP9xEntFrame")

// func_8001D0F8
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xEntOrbitMove__FP10xEntMotionP6xScenefP9xEntFrame")

// func_8001D21C
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xEntMPGetNext__FP10xEntMotionP10xMovePointP6xScene")

// func_8001D324
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xEntMPMove__FP10xEntMotionP6xScenefP9xEntFrame")

// func_8001D7C4
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xEntPenMove__FP10xEntMotionP6xScenefP9xEntFrame")

// func_8001D8FC
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xEntMechMove__FP10xEntMotionP6xScenefP9xEntFrame")

// func_8001DBE4
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xEntSldMove__FP10xEntMotionP6xScenefP9xEntFrame")

// func_8001DD4C
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xEntRotMove__FP10xEntMotionP6xScenefP9xEntFrame")

// func_8001DF3C
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xEntMechForward__FP10xEntMotion")

// func_8001E070
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xEntMechReverse__FP10xEntMotion")

// func_8001E19C
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xEntMotionTranslate__FP10xEntMotionPC5xVec3P7xMat4x3")

// func_8001E334
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xEntMotionDebugInit__FUs")

// func_8001E3A0
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xEntMotionDebugExit__Fv")

// func_8001E3BC
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xEntMotionDebugAdd__FP10xEntMotion")

// func_8001E3E4
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xEntMotionDebugCB__Fv")

// func_8001E444
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xEntMotionDebugWrite__FPC10xEntMotion")

// func_8001EE10
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xbtoa__FUi")

// func_8001EE2C
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xEntMotionDebugDraw__FPC10xEntMotion")

// func_8001F078
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xEntMotionDebugIPad__FP10xEntMotion")

// func_8001F160
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xVec3Equals__FPC5xVec3PC5xVec3")

// func_8001F1D4
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xQuatCopy__FP5xQuatPC5xQuat")

// func_8001F1F8
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3")

// func_8001F25C
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xQuatEquals__FPC5xQuatPC5xQuat")

// func_8001F2A8
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xQuatFlip__FP5xQuatPC5xQuat")

// func_8001F2D4
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xQuatDot__FPC5xQuatPC5xQuat")

// func_8001F318
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xEntMPSetSpeed__FP10xEntMotionf")

// func_8001F334
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xEntERIsRetracted__FPC10xEntMotion")

// func_8001F350
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xEntERIsRetracting__FPC10xEntMotion")

// func_8001F380
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xEntERIsExtended__FPC10xEntMotion")

// func_8001F3B0
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xEntERIsExtending__FPC10xEntMotion")

// func_8001F3C8
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xEntMotionStop__FP10xEntMotion")

// func_8001F3D8
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xEntMotionRun__FP10xEntMotion")

// func_8001F3E8
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xEntMotionIsStopped__FPC10xEntMotion")

// func_8001F3F4
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xSpline3_ArcTotal__FP8xSpline3")

// func_8001F414
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xMovePointGetNumPoints__FPC10xMovePoint")

// func_8001F420
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xMovePointGetPoint__FPC10xMovePointUs")

// func_8001F430
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xDrawLine__FPC5xVec3PC5xVec3")

// func_8001F434
#pragma GLOBAL_ASM("asm/Core/x/xEntMotion.s", "xDrawSetColor__F10iColor_tag")
