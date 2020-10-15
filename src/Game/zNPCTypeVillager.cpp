#include "zNPCTypeVillager.h"

#include <types.h>

// ZNPC_Villager_Startup()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "ZNPC_Villager_Startup__Fv")

// ZNPC_Villager_Shutdown()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "ZNPC_Villager_Shutdown__Fv")

// zNPCVillager_ScenePrepare()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "zNPCVillager_ScenePrepare__Fv")

// zNPCVillager_SceneFinish()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "zNPCVillager_SceneFinish__Fv")

// zNPCVillager_SceneReset()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "zNPCVillager_SceneReset__Fv")

// zNPCVillager_ScenePostInit()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "zNPCVillager_ScenePostInit__Fv")

// zNPCVillager_SceneTimestep(xScene*,float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "zNPCVillager_SceneTimestep__FP6xScenef")

// ZNPC_AnimTable_Villager(xAnimTable*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "ZNPC_AnimTable_Villager__FP10xAnimTable")

// ZNPC_AnimTable_BalloonBoy(xAnimTable*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "ZNPC_AnimTable_BalloonBoy__FP10xAnimTable")

// ZNPC_AnimTable_SuperFriend(xAnimTable*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "ZNPC_AnimTable_SuperFriend__FP10xAnimTable")

// zNPCVillager::Init(xEntAsset*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "Init__12zNPCVillagerFP9xEntAsset")

// zNPCVillager::Reset()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "Reset__12zNPCVillagerFv")

// zNPCVillager::ParseINI()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "ParseINI__12zNPCVillagerFv")

// zNPCVillager::ParseNonRandTalk()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "ParseNonRandTalk__12zNPCVillagerFv")

// zNPCVillager::Process(xScene*,float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "Process__12zNPCVillagerFP6xScenef")

// zNPCVillager::ChkCheatSize()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "ChkCheatSize__12zNPCVillagerFv")

// zNPCVillager::AnimPick(int,en_NPC_GOAL_SPOT,xGoal*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "AnimPick__12zNPCVillagerFi16en_NPC_GOAL_SPOTP5xGoal")

// zNPCVillager::FolkHandleMail(NPCMsg*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "FolkHandleMail__12zNPCVillagerFP6NPCMsg")

// zNPCVillager::PlayerIsStaring()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "PlayerIsStaring__12zNPCVillagerFv")

// zNPCVillager::AddTalking(xPsyche*,int (*)(xGoal*, void*, en_trantype*, float, void*),int (*)(xGoal*, void*, en_trantype*, float, void*),int (*)(xGoal*, void*, en_trantype*, float, void*),int (*)(xGoal*, void*, en_trantype*, float, void*))
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "AddTalking__12zNPCVillagerFP7xPsychePFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_i")

// zNPCVillager::FindMyConverse()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "FindMyConverse__12zNPCVillagerFv")

// zNPCVillager::TossMyConverse()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "TossMyConverse__12zNPCVillagerFv")

// zNPCFish::Init(xEntAsset*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "Init__8zNPCFishFP9xEntAsset")

// zNPCFish::Reset()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "Reset__8zNPCFishFv")

// zNPCFish::FishSoundTables()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "FishSoundTables__8zNPCFishFv")

// zNPCFish::SelfSetup()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "SelfSetup__8zNPCFishFv")

// zNPCFish::AnimPick(int,en_NPC_GOAL_SPOT,xGoal*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "AnimPick__8zNPCFishFi16en_NPC_GOAL_SPOTP5xGoal")

// zNPCFish::FolkHandleMail(NPCMsg*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "FolkHandleMail__8zNPCFishFP6NPCMsg")

// zNPCFish::MonitorCowering(xScene*,float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "MonitorCowering__8zNPCFishFP6xScenef")

// zNPCFish::CheckDoChat()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "CheckDoChat__8zNPCFishFv")

// zNPCNewsFish::IsTalking()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "IsTalking__12zNPCNewsFishFv")

// zNPCNewsFish::TalkOnScreen(int)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "TalkOnScreen__12zNPCNewsFishFi")

// zNPCNewsFish::say(zNPCNewsFish::say_enum,int)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "say__12zNPCNewsFishFQ212zNPCNewsFish8say_enumi")

// zNPCNewsFish::say(const zNPCNewsFish::say_enum*,unsigned long,int,int)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "say__12zNPCNewsFishFPCQ212zNPCNewsFish8say_enumUlii")

// zNPCNewsFish::reset_said()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "reset_said__12zNPCNewsFishFv")

// zNPCSandyBikini::VFXLeakyFaucet(float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "VFXLeakyFaucet__15zNPCSandyBikiniFf")

// zNPCBalloonBoy::PlatShadRend()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "PlatShadRend__14zNPCBalloonBoyFv")

// zNPCBalloonBoy::AddBallooning(xPsyche*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "AddBallooning__14zNPCBalloonBoyFP7xPsyche")

// zNPCBalloonBoy::ParseSysEvent(NPCSysEvent*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "ParseSysEvent__14zNPCBalloonBoyFP11NPCSysEvent")

// zNPCBalloonBoy::PlatAnimSet(en_BBOY_PLATANIM)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "PlatAnimSet__14zNPCBalloonBoyF16en_BBOY_PLATANIM")

// zNPCBalloonBoy::PlatAnimSync()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "PlatAnimSync__14zNPCBalloonBoyFv")

// zNPCBalloonBoy::IAmBallooning()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "IAmBallooning__14zNPCBalloonBoyFv")

// zNPCBubbleBuddy_AlphaUpdate(float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "zNPCBubbleBuddy_AlphaUpdate__Ff")

// FOLK_InitEffects()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "FOLK_InitEffects__Fv")

// FOLK_KillEffects()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "FOLK_KillEffects__Fv")

// zNPCNewsFishTV::zNPCNewsFishTV(int)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "__ct__14zNPCNewsFishTVFi")

// zNPCNewsFish::zNPCNewsFish(int)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "__ct__12zNPCNewsFishFi")

// zNPCMerManChair::zNPCMerManChair(int)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "__ct__15zNPCMerManChairFi")

// zNPCSandyBikini::zNPCSandyBikini(int)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "__ct__15zNPCSandyBikiniFi")

// zNPCBalloonBoy::zNPCBalloonBoy(int)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "__ct__14zNPCBalloonBoyFi")

// zNPCBubbleBuddy::zNPCBubbleBuddy(int)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "__ct__15zNPCBubbleBuddyFi")

// zNPCFish::zNPCFish(int)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "__ct__8zNPCFishFi")

// zNPCVillager::zNPCVillager(int)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "__ct__12zNPCVillagerFi")

// HiThere::HiThere()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "__ct__7HiThereFv")

// ztaskbox::callback::callback()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "__ct__Q28ztaskbox8callbackFv")

// zNPCNewsFish::get_said(zNPCNewsFish::say_enum)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "get_said__12zNPCNewsFishFQ212zNPCNewsFish8say_enum")

namespace {
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "xUtil_choose_esc__0_i_esc__1___FPCiiPCf")
}

// NPCTarget::HaveTarget()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "HaveTarget__9NPCTargetFv")

// ztaskbox::StatusGet() const
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "StatusGet__8ztaskboxCFv")

// xMat3x3RMulVec(xVec3*,const xMat3x3*,const xVec3*)
namespace {
#pragma GLOBAL_ASM("asm/Game/zNPCTypeVillager.s", "xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3")
}
