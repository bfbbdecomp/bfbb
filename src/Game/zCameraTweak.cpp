#include "zCameraTweak.h"

#include <types.h>

// zCameraTweak_LookPreCalc(zCamTweakLook*,float,float,float)
#pragma GLOBAL_ASM("asm/Game/zCameraTweak.s", "zCameraTweak_LookPreCalc__FP13zCamTweakLookfff")

// zCameraTweakGlobal_Init()
#pragma GLOBAL_ASM("asm/Game/zCameraTweak.s", "zCameraTweakGlobal_Init__Fv")

// zCameraTweakGlobal_Add(unsigned int,float,float,float,float)
#pragma GLOBAL_ASM("asm/Game/zCameraTweak.s", "zCameraTweakGlobal_Add__FUiffff")

// zCamTweak::operator =(const zCamTweak&)
#pragma GLOBAL_ASM("asm/Game/zCameraTweak.s", "__as__9zCamTweakFRC9zCamTweak")

// zCameraTweakGlobal_Remove(unsigned int)
#pragma GLOBAL_ASM("asm/Game/zCameraTweak.s", "zCameraTweakGlobal_Remove__FUi")

// zCameraTweakGlobal_Reset()
#pragma GLOBAL_ASM("asm/Game/zCameraTweak.s", "zCameraTweakGlobal_Reset__Fv")

// zCameraTweakGlobal_Update(float)
#pragma GLOBAL_ASM("asm/Game/zCameraTweak.s", "zCameraTweakGlobal_Update__Ff")

// zCameraTweakGlobal_GetD()
#pragma GLOBAL_ASM("asm/Game/zCameraTweak.s", "zCameraTweakGlobal_GetD__Fv")

// zCameraTweakGlobal_GetH()
#pragma GLOBAL_ASM("asm/Game/zCameraTweak.s", "zCameraTweakGlobal_GetH__Fv")

// zCameraTweakGlobal_GetPitch()
#pragma GLOBAL_ASM("asm/Game/zCameraTweak.s", "zCameraTweakGlobal_GetPitch__Fv")

// zCameraTweak_Init(zCameraTweak*,CameraTweak_asset*)
#pragma GLOBAL_ASM("asm/Game/zCameraTweak.s", "zCameraTweak_Init__FP12zCameraTweakP17CameraTweak_asset")

// zCameraTweak_Save(zCameraTweak*,xSerial*)
#pragma GLOBAL_ASM("asm/Game/zCameraTweak.s", "zCameraTweak_Save__FP12zCameraTweakP7xSerial")

// zCameraTweak_Load(zCameraTweak*,xSerial*)
#pragma GLOBAL_ASM("asm/Game/zCameraTweak.s", "zCameraTweak_Load__FP12zCameraTweakP7xSerial")
