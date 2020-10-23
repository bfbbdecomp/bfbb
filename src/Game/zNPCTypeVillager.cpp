#include "zNPCTypeVillager.h"

#include <types.h>

// func_80102C2C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "ZNPC_Villager_Startup__Fv")

// func_80102CC0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "ZNPC_Villager_Shutdown__Fv")

// func_80102CC4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "zNPCVillager_ScenePrepare__Fv")

// func_80102CC8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "zNPCVillager_SceneFinish__Fv")

// func_80102CE8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "zNPCVillager_SceneReset__Fv")

// func_80102CEC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "zNPCVillager_ScenePostInit__Fv")

// func_80102D0C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "zNPCVillager_SceneTimestep__FP6xScenef")

// func_80102D2C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "ZNPC_Create_Villager__FiP10RyzMemGrowPv")

// func_80102F58
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "ZNPC_Destroy_Villager__FP12xFactoryInst")

// func_80102F7C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "ZNPC_AnimTable_Villager__Fv")

// func_80102FA0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "ZNPC_AnimTable_Villager__FP10xAnimTable")

// func_8010336C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "ZNPC_AnimTable_BalloonBoy__Fv")

// func_80103390
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "ZNPC_AnimTable_BalloonBoy__FP10xAnimTable")

// func_80103668
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "ZNPC_AnimTable_SuperFriend__Fv")

// func_8010368C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "ZNPC_AnimTable_SuperFriend__FP10xAnimTable")

// func_80103A84
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "ColChkFlags__12zNPCVillagerCFv")

// func_80103ADC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "ColPenFlags__12zNPCVillagerCFv")

// func_80103B34
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "PhysicsFlags__12zNPCVillagerCFv")

// func_80103B60
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "Init__12zNPCVillagerFP9xEntAsset")

// func_80103B9C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "Reset__12zNPCVillagerFv")

// func_80103C3C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "ParseINI__12zNPCVillagerFv")

// func_80103C84
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "ParseNonRandTalk__12zNPCVillagerFv")

// func_80103D90
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "Process__12zNPCVillagerFP6xScenef")

// func_80103DFC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "ChkCheatSize__12zNPCVillagerFv")

// func_80103F54
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "CollideReview__12zNPCVillagerFv")

// func_80103FDC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "SelfSetup__12zNPCVillagerFv")

// func_801040C4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "AnimPick__12zNPCVillagerFi16en_NPC_GOAL_SPOTP5xGoal")

// func_80104388
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "NPCMessage__12zNPCVillagerFP6NPCMsg")

// func_80104470
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "FolkHandleMail__12zNPCVillagerFP6NPCMsg")

// func_8010457C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "SpeakBegin__12zNPCVillagerFv")

// func_801045AC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "SpeakEnd__12zNPCVillagerFv")

// func_80104608
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "SpeakStart__12zNPCVillagerFUiUii")

// func_801046C4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "SpeakStop__12zNPCVillagerFv")

// func_80104750
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "PlayerIsStaring__12zNPCVillagerFv")

// func_80104838
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "AddTalking__12zNPCVillagerFP7xPsychePFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_i")

// func_80104930
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "FindMyConverse__12zNPCVillagerFv")

// func_80104A18
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "TossMyConverse__12zNPCVillagerFv")

// func_80104A24
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "Init__8zNPCFishFP9xEntAsset")

// func_80104AA8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "Reset__8zNPCFishFv")

// func_80104C08
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "ParseINI__8zNPCFishFv")

// func_80104C3C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "FishSoundTables__8zNPCFishFv")

// func_80104D9C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "SelfSetup__8zNPCFishFv")

// func_80104E98
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "AnimPick__8zNPCFishFi16en_NPC_GOAL_SPOTP5xGoal")

// func_80104F98
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "Process__8zNPCFishFP6xScenef")

// func_80105070
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "FolkHandleMail__8zNPCFishFP6NPCMsg")

// func_80105204
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "MonitorCowering__8zNPCFishFP6xScenef")

// func_80105390
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "CheckDoChat__8zNPCFishFv")

// func_80105394
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "Init__15zNPCMerManChairFP9xEntAsset")

// func_801053E4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "Reset__15zNPCMerManChairFv")

// func_80105468
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "SelfSetup__15zNPCMerManChairFv")

// func_80105540
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "AnimPick__15zNPCMerManChairFi16en_NPC_GOAL_SPOTP5xGoal")

// func_80105700
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "Process__15zNPCMerManChairFP6xScenef")

// func_8010576C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "Init__12zNPCNewsFishFP9xEntAsset")

// func_80105848
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "PostSetup__12zNPCNewsFishFv")

// func_80105884
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "Process__12zNPCNewsFishFP6xScenef")

// func_80105B2C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "Reset__12zNPCNewsFishFv")

// func_80105CD8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "SpeakStart__12zNPCNewsFishFUiUii")

// func_80105DAC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "SpeakStop__12zNPCNewsFishFv")

// func_80105DFC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "IsTalking__12zNPCNewsFishFv")

// func_80105E34
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "TalkOnScreen__12zNPCNewsFishFi")

// func_80105E5C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "Render__12zNPCNewsFishFv")

// func_80106014
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "say__12zNPCNewsFishFQ212zNPCNewsFish8say_enumi")

// func_8010611C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "say__12zNPCNewsFishFPCQ212zNPCNewsFish8say_enumUlii")

// func_80106300
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "reset_said__12zNPCNewsFishFv")

// func_80106328
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "Reset__15zNPCSandyBikiniFv")

// func_8010635C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "Process__15zNPCSandyBikiniFP6xScenef")

// func_801063A0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "VFXLeakyFaucet__15zNPCSandyBikiniFf")

// func_8010652C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "Init__14zNPCBalloonBoyFP9xEntAsset")

// func_8010656C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "Reset__14zNPCBalloonBoyFv")

// func_801065AC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "SelfSetup__14zNPCBalloonBoyFv")

// func_80106600
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "Render__14zNPCBalloonBoyFv")

// func_80106634
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "PlatShadRend__14zNPCBalloonBoyFv")

// func_8010687C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "AddBallooning__14zNPCBalloonBoyFP7xPsyche")

// func_80106908
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "AnimPick__14zNPCBalloonBoyFi16en_NPC_GOAL_SPOTP5xGoal")

// func_80106A3C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "FolkHandleMail__14zNPCBalloonBoyFP6NPCMsg")

// func_80106AB8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "ParseSysEvent__14zNPCBalloonBoyFP11NPCSysEvent")

// func_80106BBC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "PlatAnimSet__14zNPCBalloonBoyF16en_BBOY_PLATANIM")

// func_80106C38
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "PlatAnimSync__14zNPCBalloonBoyFv")

// func_80106C58
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "IAmBallooning__14zNPCBalloonBoyFv")

// func_80106CEC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "Init__15zNPCBubbleBuddyFP9xEntAsset")

// func_80106D40
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "Setup__15zNPCBubbleBuddyFv")

// func_80106E28
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "Reset__15zNPCBubbleBuddyFv")

// func_80106E60
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "RenderExtra__15zNPCBubbleBuddyFv")

// func_80106EE4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "zNPCBubbleBuddy_AlphaUpdate__Ff")

// func_80106FB8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "NPC_BubBud_RenderCB__FP8RpAtomic")

// func_801070E8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "FOLK_grul_goAlert__FP5xGoalPvP11en_trantypefPv")

// func_80107168
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "MERC_grul_goAlert__FP5xGoalPvP11en_trantypefPv")

// func_8010727C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "FOLK_InitEffects__Fv")

// func_801072E4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "FOLK_KillEffects__Fv")

// func_801072E8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "__ct__14zNPCNewsFishTVFi")

// func_80107324
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "__ct__12zNPCNewsFishFi")

// func_80107360
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "__ct__15zNPCMerManChairFi")

// func_8010739C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "__ct__15zNPCSandyBikiniFi")

// func_801073D8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "__ct__14zNPCBalloonBoyFi")

// func_80107414
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "__ct__15zNPCBubbleBuddyFi")

// func_80107450
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "__ct__8zNPCFishFi")

// func_8010748C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "__ct__12zNPCVillagerFi")

// func_801074D0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "__ct__7HiThereFv")

// func_8010750C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "__ct__Q28ztaskbox8callbackFv")

// func_8010751C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "GenShadCacheRad__12zNPCVillagerFv")

// func_80107524
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "get_said__12zNPCNewsFishFQ212zNPCNewsFish8say_enum")

// func_80107538
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "Render__15zNPCBubbleBuddyFv")

// func_80107548
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "PRIV_GetDriverData__8zNPCFishFv")

// func_80107550
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "ColChkByFlags__12zNPCVillagerCFv")

// func_80107558
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "ColPenByFlags__12zNPCVillagerCFv")

// func_80107560
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "SelfSetup__12zNPCNewsFishFv")

// func_80107564
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "ColChkFlags__15zNPCMerManChairCFv")

// func_8010756C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "ColPenFlags__15zNPCMerManChairCFv")

// func_80107574
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "PhysicsFlags__15zNPCMerManChairCFv")

// func_8010757C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "on_talk_stop__7HiThereFv")

// func_801075AC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "on_talk_start__7HiThereFv")

// func_801075DC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "ColChkFlags__14zNPCNewsFishTVCFv")

// func_801075E4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "ColPenFlags__14zNPCNewsFishTVCFv")

// func_801075EC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "ColChkByFlags__14zNPCNewsFishTVCFv")

// func_801075F4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "ColPenByFlags__14zNPCNewsFishTVCFv")

// func_801075FC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "PhysicsFlags__14zNPCNewsFishTVCFv")

// func_80107604
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "xUtil_choose_esc__0_i_esc__1___FPCiiPCf")

// func_80107718
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "HaveTarget__9NPCTargetFv")

// func_8010772C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "StatusGet__8ztaskboxCFv")

// func_80107734
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "on_talk_start__Q28ztaskbox8callbackFv")

// func_80107738
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "on_talk_stop__Q28ztaskbox8callbackFv")

// func_8010773C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3")
