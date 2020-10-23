#include "iCamera.h"

#include <types.h>

// func_800C0138
#pragma GLOBAL_ASM("asm/Core/x/iCamera.s", "iCameraCreate__Fiii")

// func_800C0210
#pragma GLOBAL_ASM("asm/Core/x/iCamera.s", "iCameraDestroy__FP8RwCamera")

// func_800C02D8
#pragma GLOBAL_ASM("asm/Core/x/iCamera.s", "iCameraBegin__FP8RwCamerai")

// func_800C0348
#pragma GLOBAL_ASM("asm/Core/x/iCamera.s", "iCameraEnd__FP8RwCamera")

// func_800C0384
#pragma GLOBAL_ASM("asm/Core/x/iCamera.s", "iCameraShowRaster__FP8RwCamera")

// func_800C03AC
#pragma GLOBAL_ASM("asm/Core/x/iCamera.s", "iCameraFrustumPlanes__FP8RwCameraP5xVec4")

// func_800C0530
#pragma GLOBAL_ASM("asm/Core/x/iCamera.s", "iCameraUpdatePos__FP8RwCameraP7xMat4x3")

// func_800C058C
#pragma GLOBAL_ASM("asm/Core/x/iCamera.s", "iCameraSetFOV__FP8RwCameraf")

// func_800C05EC
#pragma GLOBAL_ASM("asm/Core/x/iCamera.s", "iCameraAssignEnv__FP8RwCameraP4iEnv")

// func_800C062C
#pragma GLOBAL_ASM("asm/Core/x/iCamera.s", "iCamGetViewMatrix__FP8RwCameraP7xMat4x3")

// func_800C06D0
#pragma GLOBAL_ASM("asm/Core/x/iCamera.s", "iCameraSetNearFarClip__Fff")

// func_800C0704
#pragma GLOBAL_ASM("asm/Core/x/iCamera.s", "iCameraSetFogParams__FP10iFogParamsf")

// func_800C082C
#pragma GLOBAL_ASM("asm/Core/x/iCamera.s", "__as__10iFogParamsFRC10iFogParams")

// func_800C0868
#pragma GLOBAL_ASM("asm/Core/x/iCamera.s", "iCameraUpdateFog__FP8RwCamerax")

// func_800C0C54
#pragma GLOBAL_ASM("asm/Core/x/iCamera.s", "iCameraSetFogRenderStates__Fv")
