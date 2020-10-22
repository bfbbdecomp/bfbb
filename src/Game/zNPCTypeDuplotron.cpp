#include "zNPCTypeDuplotron.h"

#include <types.h>

// ZNPC_Duplotron_Startup()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDuplotron.s", "ZNPC_Duplotron_Startup__Fv")

// ZNPC_Duplotron_Shutdown()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDuplotron.s", "ZNPC_Duplotron_Shutdown__Fv")

// zNPCDuplotron_ScenePrepare()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDuplotron.s", "zNPCDuplotron_ScenePrepare__Fv")

// zNPCDuplotron_SceneFinish()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDuplotron.s", "zNPCDuplotron_SceneFinish__Fv")

// zNPCDuplotron_ScenePostInit()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDuplotron.s", "zNPCDuplotron_ScenePostInit__Fv")

// zNPCDuplotron::ParseChild(xBase*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDuplotron.s", "ParseChild__13zNPCDuplotronFP5xBase")

// zNPCDuplotron::DupoHandleMail(NPCMsg*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDuplotron.s", "DupoHandleMail__13zNPCDuplotronFP6NPCMsg")

// DUPO_InitEffects()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDuplotron.s", "DUPO_InitEffects__Fv")

// DUPO_KillEffects()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDuplotron.s", "DUPO_KillEffects__Fv")

// zNPCDuplotron::VFXSmokeStack(float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDuplotron.s", "VFXSmokeStack__13zNPCDuplotronFf")

// zNPCDuplotron::VFXOverheat(float,float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDuplotron.s", "VFXOverheat__13zNPCDuplotronFff")

// zNPCDuplotron::VFXCycleLights(float,int)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDuplotron.s", "VFXCycleLights__13zNPCDuplotronFfi")

// zNPCDuplotron::zNPCDuplotron(int)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDuplotron.s", "__ct__13zNPCDuplotronFi")

// xMat3x3RMulVec(xVec3*,const xMat3x3*,const xVec3*)
namespace {
#pragma GLOBAL_ASM("asm/Game/zNPCTypeDuplotron.s", "xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3")
}
