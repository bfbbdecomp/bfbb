#include "zNPCTypeAmbient.h"

#include <types.h>

// ZNPC_Ambient_Startup()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "ZNPC_Ambient_Startup__Fv")

// ZNPC_Ambient_Shutdown()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "ZNPC_Ambient_Shutdown__Fv")

// zNPCAmbient::Init(xEntAsset*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "Init__11zNPCAmbientFP9xEntAsset")

// zNPCAmbient::Reset()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "Reset__11zNPCAmbientFv")

// zNPCAmbient::Process(xScene*,float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "Process__11zNPCAmbientFP6xScenef")

// zNPCAmbient::AnimPick(int,en_NPC_GOAL_SPOT,xGoal*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "AnimPick__11zNPCAmbientFi16en_NPC_GOAL_SPOTP5xGoal")

// zNPCJelly::JellySpawn(const xVec3*,float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "JellySpawn__9zNPCJellyFPC5xVec3f")

// zNPCJelly::JellyKill()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "JellyKill__9zNPCJellyFv")

// zNPCJelly::PlayWithAlpha(float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "PlayWithAlpha__9zNPCJellyFf")

// zNPCJelly::SetAlpha(float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "SetAlpha__9zNPCJellyFf")

// zNPCJelly::PlayWithAnimSpd()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "PlayWithAnimSpd__9zNPCJellyFv")

// zNPCJelly::PumpFaster()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "PumpFaster__9zNPCJellyFv")

// zNPCJelly::JellyBoneWorldPos(xVec3*,int) const
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "JellyBoneWorldPos__9zNPCJellyCFP5xVec3i")

// zNPCJelly::PlayWithLightnin()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "PlayWithLightnin__9zNPCJellyFv")

// zNPCJelly::ActLikeOctopus()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "ActLikeOctopus__9zNPCJellyFv")

// zNPCMimeFish::zNPCMimeFish(int)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "__ct__12zNPCMimeFishFi")

// zNPCNeptune::zNPCNeptune(int)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "__ct__11zNPCNeptuneFi")

// zNPCJelly::zNPCJelly(int)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "__ct__9zNPCJellyFi")

// zNPCAmbient::zNPCAmbient(int)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "__ct__11zNPCAmbientFi")

// xMat3x3RMulVec(xVec3*,const xMat3x3*,const xVec3*)
namespace {
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3")

#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "xUtil_choose_esc__0_i_esc__1___FPCiiPCf")
}
