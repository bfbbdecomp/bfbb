#include "zNPCTypeBossSB1.h"

#include <types.h>

// func_80154DD8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB1.s", "ZNPC_AnimTable_BossSB1__Fv")

// func_8015521C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB1.s", "SB1Dummy_UpdateFunc__FP4xEntP6xScenef")

// func_80155298
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB1.s", "SB1Dummy_BoundFunc__FP4xEntP5xVec3")

// func_801552D0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB1.s", "SB1Dummy_RenderFunc__FP4xEnt")

// func_801552FC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB1.s",                                                   \
                   "SB1Dummy_TgtEventFunc__FP5xBaseP5xBaseUiPCfP5xBase")

// func_80155310
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB1.s", "SB1_ResetGlobalStuff__Fv")

// func_80155660
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB1.s", "Init__9zNPCB_SB1FP9xEntAsset")

// func_801557EC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB1.s", "SelfSetup__9zNPCB_SB1Fv")

// func_8015592C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB1.s", "Reset__9zNPCB_SB1Fv")

// func_8015598C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB1.s", "AnimPick__9zNPCB_SB1Fi16en_NPC_GOAL_SPOTP5xGoal")

// func_80155A60
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB1.s", "Process__9zNPCB_SB1FP6xScenef")

// func_80155C08
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB1.s", "NewTime__9zNPCB_SB1FP6xScenef")

// func_80155C7C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB1.s", "AttackTimeLeft__9zNPCB_SB1Fv")

// func_80155CA0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB1.s", "HoldUpDude__9zNPCB_SB1Fv")

// func_80155CB4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB1.s", "ThanksImDone__9zNPCB_SB1Fv")

// func_80155CC8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB1.s", "SB1_CheckFeetStomp__FP9zNPCB_SB1PiP11en_trantype")

// func_80155D4C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB1.s", "idleCB__FP5xGoalPvP11en_trantypefPv")

// func_80155E04
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB1.s", "tauntCB__FP5xGoalPvP11en_trantypefPv")

// func_80155EA8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB1.s", "stompCB__FP5xGoalPvP11en_trantypefPv")

// func_80155F74
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB1.s", "smashCB__FP5xGoalPvP11en_trantypefPv")

// func_80156020
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB1.s", "deflateCB__FP5xGoalPvP11en_trantypefPv")

// func_80156098
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB1.s", "SB1_FaceTarget__FP9zNPCB_SB1P5xVec3f")

// func_801561EC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB1.s", "Enter__19zNPCGoalBossSB1IdleFfPv")

// func_80156268
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB1.s",                                                   \
                   "Process__19zNPCGoalBossSB1IdleFP11en_trantypefPvP6xScene")

// func_80156340
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB1.s", "Enter__20zNPCGoalBossSB1TauntFfPv")

// func_801563AC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB1.s",                                                   \
                   "Process__20zNPCGoalBossSB1TauntFP11en_trantypefPvP6xScene")

// func_80156450
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB1.s", "Enter__20zNPCGoalBossSB1StompFfPv")

// func_801564B4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB1.s", "AddStompRing__FP9zNPCB_SB1P5xVec3")

// func_80156538
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB1.s",                                                   \
                   "Process__20zNPCGoalBossSB1StompFP11en_trantypefPvP6xScene")

// func_8015667C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB1.s", "Enter__20zNPCGoalBossSB1SmashFfPv")

// func_801566E8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB1.s", "Exit__20zNPCGoalBossSB1SmashFfPv")

// func_801567C8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB1.s",                                                   \
                   "Process__20zNPCGoalBossSB1SmashFP11en_trantypefPvP6xScene")

// func_801569E0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB1.s", "Enter__22zNPCGoalBossSB1DeflateFfPv")

// func_80156B14
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB1.s", "Exit__22zNPCGoalBossSB1DeflateFfPv")

// func_80156C54
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB1.s",                                                   \
                   "Process__22zNPCGoalBossSB1DeflateFP11en_trantypefPvP6xScene")
