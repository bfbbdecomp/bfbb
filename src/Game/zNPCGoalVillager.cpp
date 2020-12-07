#include "zNPCGoalVillager.h"

#include <types.h>

// func_801365C8
#pragma GLOBAL_ASM("asm/Game/zNPCGoalVillager.s", "GOALCreate_Villager__FiP10RyzMemGrowPv")

// func_801367FC
#pragma GLOBAL_ASM("asm/Game/zNPCGoalVillager.s", "Enter__18zNPCGoalPlayerNearFfPv")

// func_801369AC
#pragma GLOBAL_ASM("asm/Game/zNPCGoalVillager.s", "Exit__18zNPCGoalPlayerNearFfPv")

// func_80136A5C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalVillager.s", "Suspend__18zNPCGoalPlayerNearFfPv")

// func_80136AE8
#pragma GLOBAL_ASM("asm/Game/zNPCGoalVillager.s", "Resume__18zNPCGoalPlayerNearFfPv")

// func_80136BDC
#pragma GLOBAL_ASM("asm/Game/zNPCGoalVillager.s", "Process__18zNPCGoalPlayerNearFP11en_trantypefPvP6xScene")

// func_8013703C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalVillager.s", "NPCMessage__18zNPCGoalPlayerNearFP6NPCMsg")

// func_80137074
#pragma GLOBAL_ASM("asm/Game/zNPCGoalVillager.s", "ChkCheatMedic__18zNPCGoalPlayerNearFv")

// func_801370E4
#pragma GLOBAL_ASM("asm/Game/zNPCGoalVillager.s", "DoCheatPanHandle__18zNPCGoalPlayerNearFv")

// func_8013710C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalVillager.s", "ChkCheatDogTrix__18zNPCGoalPlayerNearFPiP11en_trantype")

// func_801374F8
#pragma GLOBAL_ASM("asm/Game/zNPCGoalVillager.s", "Enter__12zNPCGoalTalkFfPv")

// func_80137618
#pragma GLOBAL_ASM("asm/Game/zNPCGoalVillager.s", "Exit__12zNPCGoalTalkFfPv")

// func_80137690
#pragma GLOBAL_ASM("asm/Game/zNPCGoalVillager.s", "Process__12zNPCGoalTalkFP11en_trantypefPvP6xScene")

// func_8013799C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalVillager.s", "NPCMessage__12zNPCGoalTalkFP6NPCMsg")

// func_801379F0
#pragma GLOBAL_ASM("asm/Game/zNPCGoalVillager.s", "StartSFX__12zNPCGoalTalkFP4xSFX")

// func_80137A3C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalVillager.s", "Enter__13zNPCGoalSpeakFfPv")

// func_80137AFC
#pragma GLOBAL_ASM("asm/Game/zNPCGoalVillager.s", "Exit__13zNPCGoalSpeakFfPv")

// func_80137B74
#pragma GLOBAL_ASM("asm/Game/zNPCGoalVillager.s", "Process__13zNPCGoalSpeakFP11en_trantypefPvP6xScene")

// func_80137D34
#pragma GLOBAL_ASM("asm/Game/zNPCGoalVillager.s", "NPCMessage__13zNPCGoalSpeakFP6NPCMsg")

// func_80137D64
#pragma GLOBAL_ASM("asm/Game/zNPCGoalVillager.s", "Enter__13zNPCGoalCheerFfPv")

// func_80137DC4
#pragma GLOBAL_ASM("asm/Game/zNPCGoalVillager.s", "Process__13zNPCGoalCheerFP11en_trantypefPvP6xScene")

// func_80137EB8
#pragma GLOBAL_ASM("asm/Game/zNPCGoalVillager.s", "Enter__15zNPCGoalChatterFfPv")

// func_80137F78
#pragma GLOBAL_ASM("asm/Game/zNPCGoalVillager.s", "Process__15zNPCGoalChatterFP11en_trantypefPvP6xScene")

// func_801380E4
#pragma GLOBAL_ASM("asm/Game/zNPCGoalVillager.s", "Enter__12zNPCGoalHurtFfPv")

// func_8013814C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalVillager.s", "Process__12zNPCGoalHurtFP11en_trantypefPvP6xScene")

// func_801381C8
#pragma GLOBAL_ASM("asm/Game/zNPCGoalVillager.s", "ChkRewardCheat__12zNPCGoalHurtFv")

// func_8013821C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalVillager.s", "Enter__15zNPCGoalBalloonFfPv")

// func_8013824C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalVillager.s", "Exit__15zNPCGoalBalloonFfPv")

// func_8013827C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalVillager.s", "Process__15zNPCGoalBalloonFP11en_trantypefPvP6xScene")

// func_801382FC
#pragma GLOBAL_ASM("asm/Game/zNPCGoalVillager.s", "NPCMessage__15zNPCGoalBalloonFP6NPCMsg")

// func_80138354
#pragma GLOBAL_ASM("asm/Game/zNPCGoalVillager.s", "Enter__15zNPCGoalBoyRideFfPv")

// func_80138388
#pragma GLOBAL_ASM("asm/Game/zNPCGoalVillager.s", "Exit__15zNPCGoalBoyRideFfPv")

// func_801383E4
#pragma GLOBAL_ASM("asm/Game/zNPCGoalVillager.s", "Process__15zNPCGoalBoyRideFP11en_trantypefPvP6xScene")

// func_801384C8
#pragma GLOBAL_ASM("asm/Game/zNPCGoalVillager.s", "NPCMessage__15zNPCGoalBoyRideFP6NPCMsg")

// func_8013856C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalVillager.s", "Process__15zNPCGoalBoyFallFP11en_trantypefPvP6xScene")

// func_80138688
#pragma GLOBAL_ASM("asm/Game/zNPCGoalVillager.s", "CollReview__15zNPCGoalBoyFallFPv")

// func_80138750
#pragma GLOBAL_ASM("asm/Game/zNPCGoalVillager.s", "Enter__15zNPCGoalBoyWeepFfPv")

// func_801387D0
#pragma GLOBAL_ASM("asm/Game/zNPCGoalVillager.s", "Process__15zNPCGoalBoyWeepFP11en_trantypefPvP6xScene")

// func_801388D8
#pragma GLOBAL_ASM("asm/Game/zNPCGoalVillager.s", "NPCMessage__15zNPCGoalBoyWeepFP6NPCMsg")

// func_80138940
#pragma GLOBAL_ASM("asm/Game/zNPCGoalVillager.s", "__ct__15zNPCGoalBoySwimFi")

// func_80138988
#pragma GLOBAL_ASM("asm/Game/zNPCGoalVillager.s", "__ct__15zNPCGoalBoyWeepFi")

// func_801389D0
#pragma GLOBAL_ASM("asm/Game/zNPCGoalVillager.s", "__ct__15zNPCGoalBoyFallFi")

// func_80138A24
#pragma GLOBAL_ASM("asm/Game/zNPCGoalVillager.s", "__ct__15zNPCGoalBoyRideFi")

// func_80138A6C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalVillager.s", "__ct__15zNPCGoalBalloonFi")

// func_80138AC0
#pragma GLOBAL_ASM("asm/Game/zNPCGoalVillager.s", "__ct__12zNPCGoalHurtFi")

// func_80138B08
#pragma GLOBAL_ASM("asm/Game/zNPCGoalVillager.s", "__ct__13zNPCGoalCheerFi")

// func_80138B50
#pragma GLOBAL_ASM("asm/Game/zNPCGoalVillager.s", "__ct__13zNPCGoalSpeakFi")

// func_80138B8C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalVillager.s", "__ct__15zNPCGoalChatterFi")

// func_80138BD4
#pragma GLOBAL_ASM("asm/Game/zNPCGoalVillager.s", "__ct__12zNPCGoalTalkFi")

// func_80138C1C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalVillager.s", "__ct__18zNPCGoalPlayerNearFi")

// func_80138C64
#pragma GLOBAL_ASM("asm/Game/zNPCGoalVillager.s", "IndexInStack__7xPsycheCFPC5xGoal")
