#include "zNPCTypeAmbient.h"

#include <types.h>

// func_801077A0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "ZNPC_Ambient_Startup__Fv")

// func_80107808
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "ZNPC_Ambient_Shutdown__Fv")

// func_8010780C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "ZNPC_Create_Ambient__FiP10RyzMemGrowPv")

// func_80107950
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "ZNPC_Destroy_Ambient__FP12xFactoryInst")

// func_80107974
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "ZNPC_AnimTable_Ambient__Fv")

// func_80107A00
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "ZNPC_AnimTable_Jelly__Fv")

// func_80107C28
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "ZNPC_AnimTable_Neptune__Fv")

// func_80107F40
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "Init__11zNPCAmbientFP9xEntAsset")

// func_80107F88
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "Reset__11zNPCAmbientFv")

// func_80107FD0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "Process__11zNPCAmbientFP6xScenef")

// func_80108034
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "SelfSetup__11zNPCAmbientFv")

// func_801080A8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "AnimPick__11zNPCAmbientFi16en_NPC_GOAL_SPOTP5xGoal")

// func_80108100
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "NPCMessage__11zNPCAmbientFP6NPCMsg")

// func_801081F4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "Init__9zNPCJellyFP9xEntAsset")

// func_80108248
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "ParseINI__9zNPCJellyFv")

// func_80108310
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "Reset__9zNPCJellyFv")

// func_80108374
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "SelfSetup__9zNPCJellyFv")

// func_80108450
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "JellySpawn__9zNPCJellyFPC5xVec3f")

// func_801084C0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "JellyKill__9zNPCJellyFv")

// func_80108530
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "AnimPick__9zNPCJellyFi16en_NPC_GOAL_SPOTP5xGoal")

// func_8010862C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "BUpdate__9zNPCJellyFP5xVec3")

// func_801086E0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "Process__9zNPCJellyFP6xScenef")

// func_801087A0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "AmbiHandleMail__9zNPCJellyFP6NPCMsg")

// func_801088C4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "PlayWithAlpha__9zNPCJellyFf")

// func_8010898C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "SetAlpha__9zNPCJellyFf")

// func_801089B4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "PlayWithAnimSpd__9zNPCJellyFv")

// func_80108A30
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "PumpFaster__9zNPCJellyFv")

// func_80108ADC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "JellyBoneWorldPos__9zNPCJellyCFP5xVec3i")

// func_80108BD4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "PlayWithLightnin__9zNPCJellyFv")

// func_80108C90
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "JELY_grul_getAngry__FP5xGoalPvP11en_trantypefPv")

// func_80108E54
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "ActLikeOctopus__9zNPCJellyFv")

// func_80108F04
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "AnimPick__11zNPCNeptuneFi16en_NPC_GOAL_SPOTP5xGoal")

// func_80108FD8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "ParseINI__11zNPCNeptuneFv")

// func_80109024
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "Reset__11zNPCNeptuneFv")

// func_8010905C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "Process__11zNPCNeptuneFP6xScenef")

// func_80109224
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "AnimPick__12zNPCMimeFishFi16en_NPC_GOAL_SPOTP5xGoal")

// func_8010927C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "Reset__12zNPCMimeFishFv")

// func_801092B0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "Process__12zNPCMimeFishFP6xScenef")

// func_801092B4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "__ct__12zNPCMimeFishFi")

// func_801092F0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "__ct__11zNPCNeptuneFi")

// func_8010932C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "__ct__9zNPCJellyFi")

// func_80109368
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "__ct__11zNPCAmbientFi")

// func_801093A4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "AmbiHandleMail__11zNPCAmbientFP6NPCMsg")

// func_801093AC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "IsAlive__9zNPCJellyFv")

// func_801093C0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "SelfSetup__12zNPCMimeFishFv")

// func_801093C4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "ColChkFlags__11zNPCAmbientCFv")

// func_801093CC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "ColPenFlags__11zNPCAmbientCFv")

// func_801093D4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "ColChkByFlags__11zNPCAmbientCFv")

// func_801093DC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "ColPenByFlags__11zNPCAmbientCFv")

// func_801093E4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "PhysicsFlags__11zNPCAmbientCFv")

// func_801093EC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "SelfSetup__11zNPCNeptuneFv")

// func_801093F0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "ColChkFlags__11zNPCNeptuneCFv")

// func_801093F8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "ColPenFlags__11zNPCNeptuneCFv")

// func_80109400
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "ColChkByFlags__11zNPCNeptuneCFv")

// func_80109408
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "ColPenByFlags__11zNPCNeptuneCFv")

// func_80109410
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3")

// func_80109474
#pragma GLOBAL_ASM("asm/Game/zNPCTypeAmbient.s", "xUtil_choose_esc__0_i_esc__1___FPCiiPCf")
