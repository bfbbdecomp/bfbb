#include "zMovePoint.h"

#include <types.h>

// zMovePoint_GetMemPool(int)
#pragma GLOBAL_ASM("asm/Game/zMovePoint.s", "zMovePoint_GetMemPool__Fi")

// zMovePointInit(zMovePoint*,xMovePointAsset*)
#pragma GLOBAL_ASM("asm/Game/zMovePoint.s", "zMovePointInit__FP10zMovePointP15xMovePointAsset")

// zMovePoint_GetInst(int)
#pragma GLOBAL_ASM("asm/Game/zMovePoint.s", "zMovePoint_GetInst__Fi")

// zMovePointSetup(zMovePoint*,zScene*)
#pragma GLOBAL_ASM("asm/Game/zMovePoint.s", "zMovePointSetup__FP10zMovePointP6zScene")

// zMovePoint_From_xAssetID(unsigned int)
#pragma GLOBAL_ASM("asm/Game/zMovePoint.s", "zMovePoint_From_xAssetID__FUi")

// zMovePointSave(zMovePoint*,xSerial*)
#pragma GLOBAL_ASM("asm/Game/zMovePoint.s", "zMovePointSave__FP10zMovePointP7xSerial")

// zMovePointLoad(zMovePoint*,xSerial*)
#pragma GLOBAL_ASM("asm/Game/zMovePoint.s", "zMovePointLoad__FP10zMovePointP7xSerial")

// zMovePointReset(zMovePoint*)
#pragma GLOBAL_ASM("asm/Game/zMovePoint.s", "zMovePointReset__FP10zMovePoint")

// zMovePointGetNext(const zMovePoint*,const zMovePoint*,zMovePoint**,xVec3*)
#pragma GLOBAL_ASM("asm/Game/zMovePoint.s", "zMovePointGetNext__FPC10zMovePointPC10zMovePointPP10zMovePointP5xVec3")

// zMovePointGetPos(const zMovePoint*)
#pragma GLOBAL_ASM("asm/Game/zMovePoint.s", "zMovePointGetPos__FPC10zMovePoint")

// zMovePointGetDelay(const zMovePoint*)
#pragma GLOBAL_ASM("asm/Game/zMovePoint.s", "zMovePointGetDelay__FPC10zMovePoint")

// xMovePointGetDelay(const xMovePoint*)
#pragma GLOBAL_ASM("asm/Game/zMovePoint.s", "xMovePointGetDelay__FPC10xMovePoint")
