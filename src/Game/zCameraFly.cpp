#include "zCameraFly.h"

#include <types.h>

// zCameraFly_Init(xBase&,xDynAsset&,unsigned long)
#pragma GLOBAL_ASM("asm/Game/zCameraFly.s", "zCameraFly_Init__FR5xBaseR9xDynAssetUl")

// zCameraFly_Init(zCameraFly*,CameraFly_asset*)
#pragma GLOBAL_ASM("asm/Game/zCameraFly.s", "zCameraFly_Init__FP10zCameraFlyP15CameraFly_asset")

// zCameraFly_Setup(zCameraFly*)
#pragma GLOBAL_ASM("asm/Game/zCameraFly.s", "zCameraFly_Setup__FP10zCameraFly")

// zCameraFly_Update(xBase*,xScene*,float)
#pragma GLOBAL_ASM("asm/Game/zCameraFly.s", "zCameraFly_Update__FP5xBaseP6xScenef")

// zCameraFly_Save(zCameraFly*,xSerial*)
#pragma GLOBAL_ASM("asm/Game/zCameraFly.s", "zCameraFly_Save__FP10zCameraFlyP7xSerial")

// zCameraFly_Load(zCameraFly*,xSerial*)
#pragma GLOBAL_ASM("asm/Game/zCameraFly.s", "zCameraFly_Load__FP10zCameraFlyP7xSerial")

// zCameraFlyProcessStopEvent()
#pragma GLOBAL_ASM("asm/Game/zCameraFly.s", "zCameraFlyProcessStopEvent__Fv")
