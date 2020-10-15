#include "iCamera.h"

#include <types.h>

// iCameraCreate(int,int,int)
#pragma GLOBAL_ASM("asm/Core/x/iCamera.s", "iCameraCreate__Fiii")

// iCameraDestroy(RwCamera*)
#pragma GLOBAL_ASM("asm/Core/x/iCamera.s", "iCameraDestroy__FP8RwCamera")

// iCameraBegin(RwCamera*,int)
#pragma GLOBAL_ASM("asm/Core/x/iCamera.s", "iCameraBegin__FP8RwCamerai")

// iCameraEnd(RwCamera*)
#pragma GLOBAL_ASM("asm/Core/x/iCamera.s", "iCameraEnd__FP8RwCamera")

// iCameraShowRaster(RwCamera*)
#pragma GLOBAL_ASM("asm/Core/x/iCamera.s", "iCameraShowRaster__FP8RwCamera")

// iCameraFrustumPlanes(RwCamera*,xVec4*)
#pragma GLOBAL_ASM("asm/Core/x/iCamera.s", "iCameraFrustumPlanes__FP8RwCameraP5xVec4")

// iCameraUpdatePos(RwCamera*,xMat4x3*)
#pragma GLOBAL_ASM("asm/Core/x/iCamera.s", "iCameraUpdatePos__FP8RwCameraP7xMat4x3")

// iCameraSetFOV(RwCamera*,float)
#pragma GLOBAL_ASM("asm/Core/x/iCamera.s", "iCameraSetFOV__FP8RwCameraf")

// iCameraAssignEnv(RwCamera*,iEnv*)
#pragma GLOBAL_ASM("asm/Core/x/iCamera.s", "iCameraAssignEnv__FP8RwCameraP4iEnv")

// iCamGetViewMatrix(RwCamera*,xMat4x3*)
#pragma GLOBAL_ASM("asm/Core/x/iCamera.s", "iCamGetViewMatrix__FP8RwCameraP7xMat4x3")

// iCameraSetNearFarClip(float,float)
#pragma GLOBAL_ASM("asm/Core/x/iCamera.s", "iCameraSetNearFarClip__Fff")

// iCameraSetFogParams(iFogParams*,float)
#pragma GLOBAL_ASM("asm/Core/x/iCamera.s", "iCameraSetFogParams__FP10iFogParamsf")

// iFogParams::operator =(const iFogParams&)
#pragma GLOBAL_ASM("asm/Core/x/iCamera.s", "__as__10iFogParamsFRC10iFogParams")

// iCameraUpdateFog(RwCamera*,long long)
#pragma GLOBAL_ASM("asm/Core/x/iCamera.s", "iCameraUpdateFog__FP8RwCamerax")

// iCameraSetFogRenderStates()
#pragma GLOBAL_ASM("asm/Core/x/iCamera.s", "iCameraSetFogRenderStates__Fv")
