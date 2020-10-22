#include "iEnv.h"

#include <types.h>

#pragma GLOBAL_ASM("asm/Core/p2/iEnv.s", "some_bullshit_function_rename_me")

// iEnvSetBSP(iEnv*,int,RpWorld*)
#pragma GLOBAL_ASM("asm/Core/p2/iEnv.s", "iEnvSetBSP__FP4iEnviP7RpWorld")

// iEnvLoad(iEnv*,const void*,unsigned int,int)
#pragma GLOBAL_ASM("asm/Core/p2/iEnv.s", "iEnvLoad__FP4iEnvPCvUii")

// iEnvFree(iEnv*)
#pragma GLOBAL_ASM("asm/Core/p2/iEnv.s", "iEnvFree__FP4iEnv")

// iEnvDefaultLighting(iEnv*)
#pragma GLOBAL_ASM("asm/Core/p2/iEnv.s", "iEnvDefaultLighting__FP4iEnv")

// iEnvLightingBasics(iEnv*,xEnvAsset*)
#pragma GLOBAL_ASM("asm/Core/p2/iEnv.s", "iEnvLightingBasics__FP4iEnvP9xEnvAsset")

// Jsp_ClumpRender(RpClump*,xJSPNodeInfo*)
#pragma GLOBAL_ASM("asm/Core/p2/iEnv.s", "Jsp_ClumpRender__FP7RpClumpP12xJSPNodeInfo")

// iEnvRender(iEnv*)
#pragma GLOBAL_ASM("asm/Core/p2/iEnv.s", "iEnvRender__FP4iEnv")

// iEnvEndRenderFX(iEnv*)
#pragma GLOBAL_ASM("asm/Core/p2/iEnv.s", "iEnvEndRenderFX__FP4iEnv")
