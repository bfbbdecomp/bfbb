#include "xMovePoint.h"

#include <types.h>

// xMovePointInit(xMovePoint*,xMovePointAsset*)
#pragma GLOBAL_ASM("asm/Core/x/xMovePoint.s", "xMovePointInit__FP10xMovePointP15xMovePointAsset")

// xMovePointSave(xMovePoint*,xSerial*)
#pragma GLOBAL_ASM("asm/Core/x/xMovePoint.s", "xMovePointSave__FP10xMovePointP7xSerial")

// xMovePointLoad(xMovePoint*,xSerial*)
#pragma GLOBAL_ASM("asm/Core/x/xMovePoint.s", "xMovePointLoad__FP10xMovePointP7xSerial")

// xMovePointReset(xMovePoint*)
#pragma GLOBAL_ASM("asm/Core/x/xMovePoint.s", "xMovePointReset__FP10xMovePoint")

// xMovePointSetup(xMovePoint*,xScene*)
#pragma GLOBAL_ASM("asm/Core/x/xMovePoint.s", "xMovePointSetup__FP10xMovePointP6xScene")

// xMovePointSplineSetup(xMovePoint*)
#pragma GLOBAL_ASM("asm/Core/x/xMovePoint.s", "xMovePointSplineSetup__FP10xMovePoint")

// xMovePointSplineDestroy(xMovePoint*)
#pragma GLOBAL_ASM("asm/Core/x/xMovePoint.s", "xMovePointSplineDestroy__FP10xMovePoint")

// xMovePointGetNext(const xMovePoint*,const xMovePoint*,xMovePoint**,xVec3*)
#pragma GLOBAL_ASM("asm/Core/x/xMovePoint.s", "xMovePointGetNext__FPC10xMovePointPC10xMovePointPP10xMovePointP5xVec3")

// xMovePointGetPos(const xMovePoint*)
#pragma GLOBAL_ASM("asm/Core/x/xMovePoint.s", "xMovePointGetPos__FPC10xMovePoint")

// xVec3Hdng(xVec3*,const xVec3*,const xVec3*)
#pragma GLOBAL_ASM("asm/Core/x/xMovePoint.s", "xVec3Hdng__FP5xVec3PC5xVec3PC5xVec3")
