#include "zNPCTypeRobot.h"

#include <types.h>

// ZNPC_Robot_Startup()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ZNPC_Robot_Startup__Fv")

// PlayTheFiddle()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "PlayTheFiddle__Fv")

// ZNPC_Robot_Shutdown()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ZNPC_Robot_Shutdown__Fv")

// zNPCRobot_ScenePrepare()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "zNPCRobot_ScenePrepare__Fv")

// zNPCRobot_SceneFinish()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "zNPCRobot_SceneFinish__Fv")

// zNPCRobot_SceneReset()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "zNPCRobot_SceneReset__Fv")

// zNPCRobot_ScenePostInit()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "zNPCRobot_ScenePostInit__Fv")

// zNPCRobot_Timestep(xScene*,float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "zNPCRobot_Timestep__FP6xScenef")

// ZNPC_AnimTable_RobotBase(xAnimTable*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ZNPC_AnimTable_RobotBase__FP10xAnimTable")

// zNPCRobot::Init(xEntAsset*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "Init__9zNPCRobotFP9xEntAsset")

// zNPCRobot::Reset()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "Reset__9zNPCRobotFv")

// zNPCRobot::ParseINI()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ParseINI__9zNPCRobotFv")

// zNPCRobot::Process(xScene*,float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "Process__9zNPCRobotFP6xScenef")

// zNPCRobot::NewTime(xScene*,float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "NewTime__9zNPCRobotFP6xScenef")

// zNPCRobot::SelfSetup()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "SelfSetup__9zNPCRobotFv")

// zNPCRobot::AnimPick(int,en_NPC_GOAL_SPOT,xGoal*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "AnimPick__9zNPCRobotFi16en_NPC_GOAL_SPOTP5xGoal")

// zNPCRobot::DoAliveStuff(float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "DoAliveStuff__9zNPCRobotFf")

// zNPCRobot::CheckFalling(float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "CheckFalling__9zNPCRobotFf")

// zNPCRobot::BunnyHopSet(xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "BunnyHopSet__9zNPCRobotFP5xVec3")

// zNPCRobot::AddLassoing(xPsyche*,int (*)(xGoal*, void*, en_trantype*, float, void*),int (*)(xGoal*, void*, en_trantype*, float, void*),int (*)(xGoal*, void*, en_trantype*, float, void*),int (*)(xGoal*, void*, en_trantype*, float, void*),int (*)(xGoal*, void*, en_trantype*, float, void*))
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "AddLassoing__9zNPCRobotFP7xPsychePFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_i")

// zNPCRobot::AddMiscTypical(xPsyche*,int (*)(xGoal*, void*, en_trantype*, float, void*),int (*)(xGoal*, void*, en_trantype*, float, void*),int (*)(xGoal*, void*, en_trantype*, float, void*))
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "AddMiscTypical__9zNPCRobotFP7xPsychePFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_i")

// zNPCRobot::AddStunThrow(xPsyche*,int (*)(xGoal*, void*, en_trantype*, float, void*),int (*)(xGoal*, void*, en_trantype*, float, void*),int (*)(xGoal*, void*, en_trantype*, float, void*),int (*)(xGoal*, void*, en_trantype*, float, void*))
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "AddStunThrow__9zNPCRobotFP7xPsychePFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_i")

// zNPCRobot::AddDamage(xPsyche*,int (*)(xGoal*, void*, en_trantype*, float, void*),int (*)(xGoal*, void*, en_trantype*, float, void*),int (*)(xGoal*, void*, en_trantype*, float, void*),int (*)(xGoal*, void*, en_trantype*, float, void*),int (*)(xGoal*, void*, en_trantype*, float, void*))
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "AddDamage__9zNPCRobotFP7xPsychePFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_i")

// zNPCRobot::AddSpawning(xPsyche*,int (*)(xGoal*, void*, en_trantype*, float, void*),int (*)(xGoal*, void*, en_trantype*, float, void*))
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "AddSpawning__9zNPCRobotFP7xPsychePFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_i")

// zNPCRobot::IsWounded()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "IsWounded__9zNPCRobotFv")

// zNPCRobot::SyncStunGlyph(float,float,float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "SyncStunGlyph__9zNPCRobotFfff")

// zNPCRobot::LassoNotify(en_LASSO_EVENT)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "LassoNotify__9zNPCRobotF14en_LASSO_EVENT")

// zNPCRobot::InflictPain(int,int)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "InflictPain__9zNPCRobotFii")

// zNPCRobot::TurnThemHeads()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "TurnThemHeads__9zNPCRobotFv")

// zNPCRobot::FacePos(xVec3*,float,float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "FacePos__9zNPCRobotFP5xVec3ff")

// zNPCRobot::FaceAntiPlayer(float,float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "FaceAntiPlayer__9zNPCRobotFff")

// zNPCRobot::CornerOfArena(xVec3*,float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "CornerOfArena__9zNPCRobotFP5xVec3f")

// zNPCRobot::MoveTowardsArena(float,float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "MoveTowardsArena__9zNPCRobotFff")

// zNPCRobot::ShowerConfetti(xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ShowerConfetti__9zNPCRobotFP5xVec3")

// zNPCRobot_TubeConfetti(const xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "zNPCRobot_TubeConfetti__FPC5xVec3")

// zNPCFodBomb::BlinkerReset()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "BlinkerReset__11zNPCFodBombFv")

// zNPCFodBomb::BlinkerUpdate(float,float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "BlinkerUpdate__11zNPCFodBombFff")

// zNPCFodBomb::BlinkerRender()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "BlinkerRender__11zNPCFodBombFv")

// zNPCFodBzzt_ResetDanceParty()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "zNPCFodBzzt_ResetDanceParty__Fv")

// zNPCFodBzzt_DoTheHokeyPokey(float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "zNPCFodBzzt_DoTheHokeyPokey__Ff")

// zNPCFodBzzt::DiscoReset()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "DiscoReset__11zNPCFodBzztFv")

// zNPCFodBzzt::DiscoUpdate(float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "DiscoUpdate__11zNPCFodBzztFf")

// RANGEWRAP(float*,float,float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "RANGEWRAP__FPfff")

// zNPCFodBzzt::DiscoRender()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "DiscoRender__11zNPCFodBzztFv")

// RxObjSpace3DVertex::operator =(const RxObjSpace3DVertex&)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "__as__18RxObjSpace3DVertexFRC18RxObjSpace3DVertex")

// zNPCChomper::BreathTrail()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "BreathTrail__11zNPCChomperFv")

// zNPCMonsoon::FoulWeather(float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "FoulWeather__11zNPCMonsoonFf")

// zNPCSleepy_Timestep(float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "zNPCSleepy_Timestep__Ff")

// zNPCSleepy::NightLightPos(xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "NightLightPos__10zNPCSleepyFP5xVec3")

// zNPCSleepy::NightLightUVStep(float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "NightLightUVStep__10zNPCSleepyFf")

// zNPCSleepy::SnoreNZeez(float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "SnoreNZeez__10zNPCSleepyFf")

// zNPCSleepy::RepelMissile(float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "RepelMissile__10zNPCSleepyFf")

// zNPCSleepy::RepelBowlBall(float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "RepelBowlBall__10zNPCSleepyFf")

// zNPCSleepy::ConeOfRange(float,int)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ConeOfRange__10zNPCSleepyFfi")

// zNPCSleepy::RendConeOfDeath(int)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "RendConeOfDeath__10zNPCSleepyFi")

// zNPCSleepy::RendConeRange()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "RendConeRange__10zNPCSleepyFv")

// zNPCArfArf::ParseChild(xBase*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ParseChild__10zNPCArfArfFP5xBase")

// zNPCArfArf::AdoptADoggie()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "AdoptADoggie__10zNPCArfArfFv")

// zNPCArfDog::BlinkReset()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "BlinkReset__10zNPCArfDogFv")

// zNPCArfDog::BlinkUpdate(float,float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "BlinkUpdate__10zNPCArfDogFff")

// zNPCArfDog::BlinkRender()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "BlinkRender__10zNPCArfDogFv")

// zNPCTubelet::ParseChild(xBase*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ParseChild__11zNPCTubeletFP5xBase")

// zNPCTubelet::PrepTheBand()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "PrepTheBand__11zNPCTubeletFv")

// zNPCTubelet::Bonk()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "Bonk__11zNPCTubeletFv")

// zNPCTubelet::Unbonk()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "Unbonk__11zNPCTubeletFv")

// zNPCTubelet::Chk_IsBonked()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "Chk_IsBonked__11zNPCTubeletFv")

// zNPCTubelet::PainInTheBand()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "PainInTheBand__11zNPCTubeletFv")

// zNPCTubelet::Chk_NonAlertBonk(float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "Chk_NonAlertBonk__11zNPCTubeletFf")

// zNPCTubeSlave::WeGotAGig()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "WeGotAGig__13zNPCTubeSlaveFv")

// zNPCTubeSlave::PartyOn()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "PartyOn__13zNPCTubeSlaveFv")

// zNPCTubeSlave::SetMaster(zNPCTubelet*,en_tubespot)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "SetMaster__13zNPCTubeSlaveFP11zNPCTubelet11en_tubespot")

// zNPCTubeSlave::PosStacked(xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "PosStacked__13zNPCTubeSlaveFP5xVec3")

// zNPCTubeSlave::DoLaserRendering()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "DoLaserRendering__13zNPCTubeSlaveFv")

// zNPCSlick::StuffToDoIfAlive(float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "StuffToDoIfAlive__9zNPCSlickFf")

// zNPCSlick::ShieldUpdate(float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ShieldUpdate__9zNPCSlickFf")

// zNPCSlick::ShieldCollide(float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ShieldCollide__9zNPCSlickFf")

// zNPCSlick::ShieldFX(float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ShieldFX__9zNPCSlickFf")

// WhereTheWildThingsAre(xModelInstance*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "WhereTheWildThingsAre__FP14xModelInstance")

// zNPCSlick::ShieldGeneratorDamaged()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ShieldGeneratorDamaged__9zNPCSlickFv")

// zNPCSlick::RopePopsShield()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "RopePopsShield__9zNPCSlickFv")

// zNPCSlick::IsShield() const
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "IsShield__9zNPCSlickCFv")

// zNPCSlick::ShieldHide()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ShieldHide__9zNPCSlickFv")

// zNPCSlick::ShieldShow()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ShieldShow__9zNPCSlickFv")

// zNPCSlick::YouOwnSlipFX()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "YouOwnSlipFX__9zNPCSlickFv")

// zNPCSlick::SlipSlidenAway(float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "SlipSlidenAway__9zNPCSlickFf")

// ROBO_InitEffects()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ROBO_InitEffects__Fv")

// ROBO_KillEffects()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ROBO_KillEffects__Fv")

// zNPCRobot::DoFX_Motorboat(float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "DoFX_Motorboat__9zNPCRobotFf")

// zNPCRobot::VFXStarTrek(float,xVec3*,xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "VFXStarTrek__9zNPCRobotFfP5xVec3P5xVec3")

// zNPCRobot::LaunchProjectile(en_npchaz,float,float,en_mdlvert,float,float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "LaunchProjectile__9zNPCRobotF9en_npchazff10en_mdlvertff")

// NPCArena::IncludesPos(xVec3*,float,xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "IncludesPos__8NPCArenaFP5xVec3fP5xVec3")

// NPCArena::PctFromHome(xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "PctFromHome__8NPCArenaFP5xVec3")

// NPCArena::DstSqFromHome(xVec3*,xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "DstSqFromHome__8NPCArenaFP5xVec3P5xVec3")

// NPCArena::NeedToCycle(zNPCCommon*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "NeedToCycle__8NPCArenaFP10zNPCCommon")

// NPCArena::Cycle(zNPCCommon*,int)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "Cycle__8NPCArenaFP10zNPCCommoni")

// NPCArena::NextBestNav(zNPCCommon*,zMovePoint*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "NextBestNav__8NPCArenaFP10zNPCCommonP10zMovePoint")

// NPCArena::SetHome(zNPCCommon*,zMovePoint*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "SetHome__8NPCArenaFP10zNPCCommonP10zMovePoint")

// NPCArena::AdjustHome(zNPCCommon*,xVec3*,float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "AdjustHome__8NPCArenaFP10zNPCCommonP5xVec3f")

// NPCArena::SyncHomeFromNav()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "SyncHomeFromNav__8NPCArenaFv")

// UVAModelInfo::Clear()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "Clear__12UVAModelInfoFv")

// UVAModelInfo::UVVelSet(float,float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "UVVelSet__12UVAModelInfoFff")

// UVAModelInfo::Valid() const
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "Valid__12UVAModelInfoCFv")

// zNPCSlick::zNPCSlick(int)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "__ct__9zNPCSlickFi")

// zNPCTubeSlave::zNPCTubeSlave(int)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "__ct__13zNPCTubeSlaveFi")

// zNPCTubelet::zNPCTubelet(int)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "__ct__11zNPCTubeletFi")

// TubeNotice::TubeNotice()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "__ct__10TubeNoticeFv")

// xPSYNote::xPSYNote()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "__ct__8xPSYNoteFv")

// zNPCChuck::zNPCChuck(int)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "__ct__9zNPCChuckFi")

// zNPCArfArf::zNPCArfArf(int)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "__ct__10zNPCArfArfFi")

// zNPCArfDog::zNPCArfDog(int)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "__ct__10zNPCArfDogFi")

// zNPCSleepy::zNPCSleepy(int)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "__ct__10zNPCSleepyFi")

// zNPCMonsoon::zNPCMonsoon(int)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "__ct__11zNPCMonsoonFi")

// zNPCGlove::zNPCGlove(int)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "__ct__9zNPCGloveFi")

// zNPCTarTar::zNPCTarTar(int)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "__ct__10zNPCTarTarFi")

// zNPCHammer::zNPCHammer(int)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "__ct__10zNPCHammerFi")

// zNPCCritter::zNPCCritter(int)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "__ct__11zNPCCritterFi")

// zNPCChomper::zNPCChomper(int)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "__ct__11zNPCChomperFi")

// zNPCFodBzzt::zNPCFodBzzt(int)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "__ct__11zNPCFodBzztFi")

// zNPCFodBomb::zNPCFodBomb(int)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "__ct__11zNPCFodBombFi")

// zNPCFodder::zNPCFodder(int)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "__ct__10zNPCFodderFi")

// zNPCRobot::zNPCRobot(int)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "__ct__9zNPCRobotFi")

// zNPCRobot::IsDead()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "IsDead__9zNPCRobotFv")

// xEntIsEnabled(xEnt*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "xEntIsEnabled__FP4xEnt")

// xPsyche::SetSafety(int)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "SetSafety__7xPsycheFi")

// xPsyche::SetNotify(xPSYNote*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "SetNotify__7xPsycheFP8xPSYNote")

// xGoal::GetFlags() const
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "GetFlags__5xGoalCFv")

namespace {
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "xUtil_choose_esc__0_i_esc__1___FPCiiPCf")
}

// NPCLaser::Prepare()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "Prepare__8NPCLaserFv")

// NPCLaser::RadiusSet(float,float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "RadiusSet__8NPCLaserFff")

// NPCLaser::UVScrollSet(float,float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "UVScrollSet__8NPCLaserFff")

// NPCLaser::TextureSet(RwRaster*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "TextureSet__8NPCLaserFP8RwRaster")

// NPCLaser::TextureGet()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "TextureGet__8NPCLaserFv")

// NPCLaser::UVScrollUpdate(float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "UVScrollUpdate__8NPCLaserFf")

// xMat3x3RMulVec(xVec3*,const xMat3x3*,const xVec3*)
namespace {
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3")
}

// zMovePoint::RadiusArena()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "RadiusArena__10zMovePointFv")

// zMovePoint::NodeByIndex(int)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "NodeByIndex__10zMovePointFi")

// zMovePoint::NumNodes()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "NumNodes__10zMovePointFv")
