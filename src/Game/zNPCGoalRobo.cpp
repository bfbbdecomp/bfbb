#include "zNPCGoalRobo.h"

#include <types.h>

// GOALCreate_Robotic(int,RyzMemGrow*,void*)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "GOALCreate_Robotic__FiP10RyzMemGrowPv")

// zNPCGoalAlertFodder::CheckSpot(float)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "CheckSpot__19zNPCGoalAlertFodderFf")

// zNPCGoalAlertFodder::FlankPlayer(float)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "FlankPlayer__19zNPCGoalAlertFodderFf")

// zNPCGoalAlertFodder::GetInArena(float)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "GetInArena__19zNPCGoalAlertFodderFf")

// zNPCGoalAlertFodder::MoveEvade(float)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "MoveEvade__19zNPCGoalAlertFodderFf")

// zNPCGoalAlertFodBomb::Detonate()
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Detonate__20zNPCGoalAlertFodBombFv")

// zNPCGoalAlertFodBomb::SonarHoming(float)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "SonarHoming__20zNPCGoalAlertFodBombFf")

// zNPCGoalAlertFodBzzt::ToggleOrbit()
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "ToggleOrbit__20zNPCGoalAlertFodBzztFv")

// zNPCGoalAlertFodBzzt::OrbitPlayer(float)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "OrbitPlayer__20zNPCGoalAlertFodBzztFf")

// zNPCGoalAlertFodBzzt::GetInArena(float)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "GetInArena__20zNPCGoalAlertFodBzztFf")

// zNPCGoalAlertFodBzzt::DeathRayUpdate(float)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "DeathRayUpdate__20zNPCGoalAlertFodBzztFf")

// zNPCGoalAlertFodBzzt::DeathRayRender()
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "DeathRayRender__20zNPCGoalAlertFodBzztFv")

// zNPCGoalAlertChomper::CirclePlayer(float)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "CirclePlayer__20zNPCGoalAlertChomperFf")

// zNPCGoalAlertChomper::GetInArena(float)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "GetInArena__20zNPCGoalAlertChomperFf")

// zNPCGoalAlertChomper::CalcEvadePos(xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "CalcEvadePos__20zNPCGoalAlertChomperFP5xVec3")

// zNPCGoalAlertChomper::MoveEvadePos(const xVec3*,float)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "MoveEvadePos__20zNPCGoalAlertChomperFPC5xVec3f")

// zNPCGoalAlertChomper::CheckSpot(float)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "CheckSpot__20zNPCGoalAlertChomperFf")

// zNPCGoalAlertHammer::PlayerInSpot(float)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "PlayerInSpot__19zNPCGoalAlertHammerFf")

// zNPCGoalAlertHammer::MoveChase(float)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "MoveChase__19zNPCGoalAlertHammerFf")

// zNPCGoalAlertHammer::MoveEvade(float)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "MoveEvade__19zNPCGoalAlertHammerFf")

// zNPCGoalAlertTarTar::HoppyUpdate(en_trantype*,float)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "HoppyUpdate__19zNPCGoalAlertTarTarFP11en_trantypef")

// zNPCGoalAlertTarTar::GetInArena(float)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "GetInArena__19zNPCGoalAlertTarTarFf")

// zNPCGoalAlertGlove::FXTurbulence()
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "FXTurbulence__18zNPCGoalAlertGloveFv")

// zNPCGoalAlertGlove::FXWhirlwind()
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "FXWhirlwind__18zNPCGoalAlertGloveFv")

// zNPCGoalAlertGlove::CalcAttackVector()
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "CalcAttackVector__18zNPCGoalAlertGloveFv")

// zNPCGoalAlertGlove::CheckHandBones()
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "CheckHandBones__18zNPCGoalAlertGloveFv")

// zNPCGoalAlertMonsoon::MoveCorner(float)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "MoveCorner__20zNPCGoalAlertMonsoonFf")

// zNPCGoalAlertArf::DecideAttack()
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "DecideAttack__16zNPCGoalAlertArfFv")

// zNPCGoalAlertChuck::GetInArena(float)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "GetInArena__18zNPCGoalAlertChuckFf")

// zNPCGoalAlertChuck::ZoomMove(float)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "ZoomMove__18zNPCGoalAlertChuckFf")

// zNPCGoalAlertTubelet::ChkPrelimTran(en_trantype*,int*)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "ChkPrelimTran__20zNPCGoalAlertTubeletFP11en_trantypePi")

// zNPCGoalAlertTubelet::MoveToHome(float)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "MoveToHome__20zNPCGoalAlertTubeletFf")

// zNPCGoalAlertTubelet::PeteAttackBegin()
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "PeteAttackBegin__20zNPCGoalAlertTubeletFv")

// zNPCGoalAlertTubelet::PeteAttackParSys(float,int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "PeteAttackParSys__20zNPCGoalAlertTubeletFfi")

// zNPCGoalAlertTubelet::EmitSteam(float)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "EmitSteam__20zNPCGoalAlertTubeletFf")

// zNPCGoalAlertSlick::GetInArena(float)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "GetInArena__18zNPCGoalAlertSlickFf")

// zNPCGoalAlertSlick::MoveCorner(float)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "MoveCorner__18zNPCGoalAlertSlickFf")

// zNPCGoalAttackFodder::SyncCattleProd()
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "SyncCattleProd__20zNPCGoalAttackFodderFv")

// zNPCGoalAttackChomper::BreathAttack()
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "BreathAttack__21zNPCGoalAttackChomperFv")

// zNPCGoalAttackHammer::ChkPrelimTran(en_trantype*,int*)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "ChkPrelimTran__20zNPCGoalAttackHammerFP11en_trantypePi")

// zNPCGoalAttackHammer::PlayerTests(xVec3*,float)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "PlayerTests__20zNPCGoalAttackHammerFP5xVec3f")

// zNPCGoalAttackHammer::ShockwaveTests(xVec3*,float)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "ShockwaveTests__20zNPCGoalAttackHammerFP5xVec3f")

// zNPCGoalAttackHammer::TellBunnies()
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "TellBunnies__20zNPCGoalAttackHammerFv")

// zNPCGoalAttackHammer::ModifyAnimSpeed()
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "ModifyAnimSpeed__20zNPCGoalAttackHammerFv")

// zNPCGoalAttackHammer::FXStreakPrep()
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "FXStreakPrep__20zNPCGoalAttackHammerFv")

// zNPCGoalAttackHammer::FXStreakDone()
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "FXStreakDone__20zNPCGoalAttackHammerFv")

// zNPCGoalAttackHammer::FXStreakUpdate(xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "FXStreakUpdate__20zNPCGoalAttackHammerFP5xVec3")

// zNPCGoalAttackTarTar::CacheAimPoint()
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "CacheAimPoint__20zNPCGoalAttackTarTarFv")

// zNPCGoalAttackTarTar::ShootBlob(float,int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "ShootBlob__20zNPCGoalAttackTarTarFfi")

// zNPCGoalAttackMonsoon::SpitCloud(float)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "SpitCloud__21zNPCGoalAttackMonsoonFf")

// zNPCGoalAttackArfMelee::PlayerTests()
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "PlayerTests__22zNPCGoalAttackArfMeleeFv")

// zNPCGoalAttackArfMelee::FXStreakPrep()
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "FXStreakPrep__22zNPCGoalAttackArfMeleeFv")

// zNPCGoalAttackArfMelee::FXStreakDone()
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "FXStreakDone__22zNPCGoalAttackArfMeleeFv")

// zNPCGoalAttackArfMelee::FXStreakUpdate()
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "FXStreakUpdate__22zNPCGoalAttackArfMeleeFv")

// zNPCGoalAttackArf::SetAttackMode(int,int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "SetAttackMode__17zNPCGoalAttackArfFii")

// zNPCGoalAttackArf::LaunchBone(float,int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "LaunchBone__17zNPCGoalAttackArfFfi")

// zNPCGoalAttackArf::LaunchDoggie(float)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "LaunchDoggie__17zNPCGoalAttackArfFf")

// zNPCGoalAttackChuck::BombzAway(float)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "BombzAway__19zNPCGoalAttackChuckFf")

// zNPCGoalAttackSlick::FireOne(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "FireOne__19zNPCGoalAttackSlickFi")

// zNPCGoalDogLaunch::ViciousAttack(xVec3*,xVec3*,zMovePoint*,int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "ViciousAttack__17zNPCGoalDogLaunchFP5xVec3P5xVec3P10zMovePointi")

// zNPCGoalDogLaunch::PreCollide()
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "PreCollide__17zNPCGoalDogLaunchFv")

// zNPCGoalDogLaunch::BallisticUpdate(float)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "BallisticUpdate__17zNPCGoalDogLaunchFf")

// zNPCGoalDogLaunch::BubTrailCone(const xVec3*,int,const xVec3*,const xVec3*,const xMat3x3*)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "BubTrailCone__17zNPCGoalDogLaunchFPC5xVec3iPC5xVec3PC5xVec3PC7xMat3x3")

// zNPCGoalDogLaunch::FurryFlurry()
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "FurryFlurry__17zNPCGoalDogLaunchFv")

// zNPCGoalDogDash::HoundPlayer(float)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "HoundPlayer__15zNPCGoalDogDashFf")

// zNPCGoalDogPounce::Detonate()
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Detonate__17zNPCGoalDogPounceFv")

// zNPCGoalEvilPat::InputStun(NPCStunInfo*)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "InputStun__15zNPCGoalEvilPatFP11NPCStunInfo")

// zNPCGoalEvilPat::GlyphStart()
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "GlyphStart__15zNPCGoalEvilPatFv")

// zNPCGoalEvilPat::GlyphStop()
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "GlyphStop__15zNPCGoalEvilPatFv")

// zNPCGoalStunned::InputInfo(NPCStunInfo*)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "InputInfo__15zNPCGoalStunnedFP11NPCStunInfo")

// zNPCGoalLassoGrab::DoTurnAway(float)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "DoTurnAway__17zNPCGoalLassoGrabFf")

// zNPCGoalLassoThrow::ApplyYank(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "ApplyYank__18zNPCGoalLassoThrowFi")

// zNPCGoalDamage::InputInfo(NPCDamageInfo*)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "InputInfo__14zNPCGoalDamageFP13NPCDamageInfo")

// zNPCGoalKnock::InputInfo(NPCDamageInfo*)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "InputInfo__13zNPCGoalKnockFP13NPCDamageInfo")

// zNPCGoalKnock::StreakPrep()
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "StreakPrep__13zNPCGoalKnockFv")

// zNPCGoalKnock::StreakDone()
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "StreakDone__13zNPCGoalKnockFv")

// zNPCGoalKnock::StreakUpdate()
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "StreakUpdate__13zNPCGoalKnockFv")

// zNPCGoalAfterlife::DieTheGoodDeath()
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "DieTheGoodDeath__17zNPCGoalAfterlifeFv")

// zNPCGoalRespawn::LaunchRoboBits()
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "LaunchRoboBits__15zNPCGoalRespawnFv")

// zNPCGoalRespawn::DoAppearFX(float)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "DoAppearFX__15zNPCGoalRespawnFf")

// zNPCGoalRespawn::KickFromTheNest()
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "KickFromTheNest__15zNPCGoalRespawnFv")

// zNPCGoalRespawn::InputInfo(NPCSpawnInfo*)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "InputInfo__15zNPCGoalRespawnFP12NPCSpawnInfo")

// zNPCGoalTubePal::ChkPrelimTran(en_trantype*,int*)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "ChkPrelimTran__15zNPCGoalTubePalFP11en_trantypePi")

// zNPCGoalTubeDuckling::ChkPrelimTran(en_trantype*,int*)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "ChkPrelimTran__20zNPCGoalTubeDucklingFP11en_trantypePi")

// zNPCGoalTubeDuckling::MoveFrolic(float)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "MoveFrolic__20zNPCGoalTubeDucklingFf")

// zNPCGoalTubeDuckling::DuckStackInterpInit()
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "DuckStackInterpInit__20zNPCGoalTubeDucklingFv")

// zNPCGoalTubeDuckling::DuckStackInterp(float)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "DuckStackInterp__20zNPCGoalTubeDucklingFf")

// zNPCGoalTubeAttack::ChkPrelimTran(en_trantype*,int*)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "ChkPrelimTran__18zNPCGoalTubeAttackFP11en_trantypePi")

// zNPCGoalTubeAttack::LaserRender()
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "LaserRender__18zNPCGoalTubeAttackFv")

// zNPCGoalTubeAttack::MaryAttack(float,xScene*)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "MaryAttack__18zNPCGoalTubeAttackFfP6xScene")

// zNPCGoalTubeAttack::MarySpinUp(float)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "MarySpinUp__18zNPCGoalTubeAttackFf")

// zNPCGoalTubeAttack::MarySpinDown(float)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "MarySpinDown__18zNPCGoalTubeAttackFf")

// zNPCGoalTubeAttack::MaryzFury()
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "MaryzFury__18zNPCGoalTubeAttackFv")

// zNPCGoalTubeAttack::MaryzBlessing()
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "MaryzBlessing__18zNPCGoalTubeAttackFv")

// zNPCGoalTubeAttack::AttackDataReset()
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "AttackDataReset__18zNPCGoalTubeAttackFv")

// zNPCGoalTubeLasso::ChkPrelimTran(en_trantype*,int*)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "ChkPrelimTran__17zNPCGoalTubeLassoFP11en_trantypePi")

// zNPCGoalTubeLasso::MoveTryToEscape(float)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "MoveTryToEscape__17zNPCGoalTubeLassoFf")

// zNPCGoalTubeBirth::ChkPrelimTran(en_trantype*,int*)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "ChkPrelimTran__17zNPCGoalTubeBirthFP11en_trantypePi")

// zNPCGoalTubeBonked::CheckForTran(en_trantype*,int*)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "CheckForTran__18zNPCGoalTubeBonkedFP11en_trantypePi")

// zNPCGoalTubeDead::ChkPrelimTran(en_trantype*,int*)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "ChkPrelimTran__16zNPCGoalTubeDeadFP11en_trantypePi")

// zNPCGoalTubeDying::DeathByLasso(const xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "DeathByLasso__17zNPCGoalTubeDyingFPC5xVec3")

// ROBO_PrepRoboCop()
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "ROBO_PrepRoboCop__Fv")

// RoboToCntrIdx(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "RoboToCntrIdx__Fi")

// CollectBountyOnRobot(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "CollectBountyOnRobot__Fi")

// zNPCGoalTubeDead::zNPCGoalTubeDead(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__16zNPCGoalTubeDeadFi")

// zNPCGoalTubeDying::zNPCGoalTubeDying(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__17zNPCGoalTubeDyingFi")

// zNPCGoalTubeBonked::zNPCGoalTubeBonked(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__18zNPCGoalTubeBonkedFi")

// zNPCGoalTubeBirth::zNPCGoalTubeBirth(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__17zNPCGoalTubeBirthFi")

// zNPCGoalTubeLasso::zNPCGoalTubeLasso(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__17zNPCGoalTubeLassoFi")

// zNPCGoalTubeAttack::zNPCGoalTubeAttack(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__18zNPCGoalTubeAttackFi")

// zNPCGoalTubeDuckling::zNPCGoalTubeDuckling(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__20zNPCGoalTubeDucklingFi")

// zNPCGoalTubePal::zNPCGoalTubePal(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__15zNPCGoalTubePalFi")

// zNPCGoalDeflate::zNPCGoalDeflate(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__15zNPCGoalDeflateFi")

// zNPCGoalRespawn::zNPCGoalRespawn(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__15zNPCGoalRespawnFi")

// zNPCGoalAfterlife::zNPCGoalAfterlife(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__17zNPCGoalAfterlifeFi")

// zNPCGoalKnock::zNPCGoalKnock(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__13zNPCGoalKnockFi")

// zNPCGoalBashed::zNPCGoalBashed(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__14zNPCGoalBashedFi")

// zNPCGoalWound::zNPCGoalWound(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__13zNPCGoalWoundFi")

// zNPCGoalDamage::zNPCGoalDamage(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__14zNPCGoalDamageFi")

// zNPCGoalHokeyPokey::zNPCGoalHokeyPokey(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__18zNPCGoalHokeyPokeyFi")

// zNPCGoalTeleport::zNPCGoalTeleport(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__16zNPCGoalTeleportFi")

// zNPCGoalDogPounce::zNPCGoalDogPounce(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__17zNPCGoalDogPounceFi")

// zNPCGoalDogDash::zNPCGoalDogDash(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__15zNPCGoalDogDashFi")

// zNPCGoalDogBark::zNPCGoalDogBark(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__15zNPCGoalDogBarkFi")

// zNPCGoalDogLaunch::zNPCGoalDogLaunch(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__17zNPCGoalDogLaunchFi")

// zNPCGoalPatThrow::zNPCGoalPatThrow(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__16zNPCGoalPatThrowFi")

// zNPCGoalPatCarry::zNPCGoalPatCarry(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__16zNPCGoalPatCarryFi")

// zNPCGoalStunned::zNPCGoalStunned(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__15zNPCGoalStunnedFi")

// zNPCGoalEvilPat::zNPCGoalEvilPat(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__15zNPCGoalEvilPatFi")

// zNPCGoalLassoThrow::zNPCGoalLassoThrow(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__18zNPCGoalLassoThrowFi")

// zNPCGoalLassoGrab::zNPCGoalLassoGrab(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__17zNPCGoalLassoGrabFi")

// zNPCGoalLassoBase::zNPCGoalLassoBase(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__17zNPCGoalLassoBaseFi")

// zNPCGoalAttackSlick::zNPCGoalAttackSlick(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__19zNPCGoalAttackSlickFi")

// zNPCGoalAttackChuck::zNPCGoalAttackChuck(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__19zNPCGoalAttackChuckFi")

// zNPCGoalAttackArfMelee::zNPCGoalAttackArfMelee(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__22zNPCGoalAttackArfMeleeFi")

// zNPCGoalAttackArf::zNPCGoalAttackArf(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__17zNPCGoalAttackArfFi")

// zNPCGoalAttackMonsoon::zNPCGoalAttackMonsoon(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__21zNPCGoalAttackMonsoonFi")

// zNPCGoalAttackTarTar::zNPCGoalAttackTarTar(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__20zNPCGoalAttackTarTarFi")

// zNPCGoalAttackHammer::zNPCGoalAttackHammer(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__20zNPCGoalAttackHammerFi")

// zNPCGoalAttackChomper::zNPCGoalAttackChomper(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__21zNPCGoalAttackChomperFi")

// zNPCGoalAttackFodder::zNPCGoalAttackFodder(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__20zNPCGoalAttackFodderFi")

// zNPCGoalAttackFodder::CattleNotify::CattleNotify()
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__Q220zNPCGoalAttackFodder12CattleNotifyFv")

// HAZNotify::HAZNotify()
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__9HAZNotifyFv")

// zNPCGoalAttackCQC::zNPCGoalAttackCQC(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__17zNPCGoalAttackCQCFi")

// zNPCGoalAlertSlick::zNPCGoalAlertSlick(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__18zNPCGoalAlertSlickFi")

// zNPCGoalAlertTubelet::zNPCGoalAlertTubelet(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__20zNPCGoalAlertTubeletFi")

// zNPCGoalAlertChuck::zNPCGoalAlertChuck(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__18zNPCGoalAlertChuckFi")

// zNPCGoalAlertPuppy::zNPCGoalAlertPuppy(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__18zNPCGoalAlertPuppyFi")

// zNPCGoalAlertArf::zNPCGoalAlertArf(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__16zNPCGoalAlertArfFi")

// zNPCGoalAlertSleepy::zNPCGoalAlertSleepy(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__19zNPCGoalAlertSleepyFi")

// zNPCGoalAlertMonsoon::zNPCGoalAlertMonsoon(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__20zNPCGoalAlertMonsoonFi")

// zNPCGoalAlertGlove::zNPCGoalAlertGlove(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__18zNPCGoalAlertGloveFi")

// zNPCGoalAlertTarTar::zNPCGoalAlertTarTar(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__19zNPCGoalAlertTarTarFi")

// zNPCGoalAlertHammer::zNPCGoalAlertHammer(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__19zNPCGoalAlertHammerFi")

// zNPCGoalAlertFodBzzt::zNPCGoalAlertFodBzzt(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__20zNPCGoalAlertFodBzztFi")

// zNPCGoalAlertChomper::zNPCGoalAlertChomper(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__20zNPCGoalAlertChomperFi")

// zNPCGoalAlertFodBomb::zNPCGoalAlertFodBomb(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__20zNPCGoalAlertFodBombFi")

// zNPCGoalAlertFodder::zNPCGoalAlertFodder(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__19zNPCGoalAlertFodderFi")

// zNPCGoalAlert::zNPCGoalAlert(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__13zNPCGoalAlertFi")

// zNPCGoalChase::zNPCGoalChase(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__13zNPCGoalChaseFi")

// zNPCGoalGoHome::zNPCGoalGoHome(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__14zNPCGoalGoHomeFi")

// zNPCGoalEvade::zNPCGoalEvade(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__13zNPCGoalEvadeFi")

// zNPCGoalTaunt::zNPCGoalTaunt(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__13zNPCGoalTauntFi")

// zNPCGoalNotice::zNPCGoalNotice(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__14zNPCGoalNoticeFi")

// zNPCGoalDogLaunch::SilentSwimout(xVec3*,xVec3*,zMovePoint*)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "SilentSwimout__17zNPCGoalDogLaunchFP5xVec3P5xVec3P10zMovePoint")

// zNPCGoalDead::DieWithAWhimper()
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "DieWithAWhimper__12zNPCGoalDeadFv")

// zNPCGoalDead::DieWithABang()
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "DieWithABang__12zNPCGoalDeadFv")

// xGoal::AddFlags(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "AddFlags__5xGoalFi")

// xGoal::GetPsyche() const
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "GetPsyche__5xGoalCFv")

// zNPCCommon::XZVecToPlayer(xVec3*,float*)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "XZVecToPlayer__10zNPCCommonFP5xVec3Pf")

// zNPCCommon::BoneMat(int) const
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "BoneMat__10zNPCCommonCFi")

// zNPCCommon::BonePos(int) const
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "BonePos__10zNPCCommonCFi")

// zNPCCommon::XYZDstSqToPlayer(xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "XYZDstSqToPlayer__10zNPCCommonFP5xVec3")

// zNPCCommon::Center()
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Center__10zNPCCommonFv")

// zNPCCommon::ModelScaleSet(float)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "ModelScaleSet__10zNPCCommonFf")

// NPCC_DrawPlayerPredict(int,float,float)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "NPCC_DrawPlayerPredict__Fiff")

// NPCLaser::ColorSet(const RwRGBA*,const RwRGBA*)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "ColorSet__8NPCLaserFPC6RwRGBAPC6RwRGBA")

// xDrawCyl(const xVec3*,float,float,unsigned int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "xDrawCyl__FPC5xVec3ffUi")

// NPCArena::Radius(float)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Radius__8NPCArenaFf")

// NPCArena::Pos()
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Pos__8NPCArenaFv")

// NPCBattle::JoinBattle(zNPCRobot*)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "JoinBattle__9NPCBattleFP9zNPCRobot")

// NPCArena::IncludesPlayer(float,xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "IncludesPlayer__8NPCArenaFfP5xVec3")

// NPCArena::IsReady()
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "IsReady__8NPCArenaFv")

// NPCBattle::LeaveBattle(zNPCRobot*)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "LeaveBattle__9NPCBattleFP9zNPCRobot")

// NPCArena::IncludesNPC(zNPCCommon*,float,xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "IncludesNPC__8NPCArenaFP10zNPCCommonfP5xVec3")

// zNPCRobot::FacePlayer(float,float)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "FacePlayer__9zNPCRobotFff")

// NPCArena::DBG_Draw(zNPCCommon*)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "DBG_Draw__8NPCArenaFP10zNPCCommon")

// zNPCArfArf::GetTelepoint(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "GetTelepoint__10zNPCArfArfFi")

// xVec3::assign(float)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "assign__5xVec3Ff")

// NPCHazard::SetNPCOwner(zNPCCommon*)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "SetNPCOwner__9NPCHazardFP10zNPCCommon")

// NPCHazard::NotifyCBSet(HAZNotify*)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "NotifyCBSet__9NPCHazardFP9HAZNotify")

// LERP(float,unsigned char,unsigned char)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "LERP__FfUcUc")

// LERP(float,float,float)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "LERP__Ffff")

// SMOOTH(float,float,float)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "SMOOTH__Ffff")

// EASE(float)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "EASE__Ff")

// xMat3x3RMulVec(xVec3*,const xMat3x3*,const xVec3*)
namespace {
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3")
}
