#include "zNPCGoalStd.h"

#include <types.h>

// GOALCreate_Standard(int,RyzMemGrow*,void*)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "GOALCreate_Standard__FiP10RyzMemGrowPv")

// zNPCGoalPushAnim::Enter(float,void*)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "Enter__16zNPCGoalPushAnimFfPv")

// zNPCGoalPushAnim::Exit(float,void*)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "Exit__16zNPCGoalPushAnimFfPv")

// zNPCGoalPushAnim::Process(en_trantype*,float,void*,xScene*)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "Process__16zNPCGoalPushAnimFP11en_trantypefPvP6xScene")

// zNPCGoalLoopAnim::Enter(float,void*)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "Enter__16zNPCGoalLoopAnimFfPv")

// zNPCGoalLoopAnim::Process(en_trantype*,float,void*,xScene*)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "Process__16zNPCGoalLoopAnimFP11en_trantypefPvP6xScene")

// zNPCGoalLoopAnim::MolestLoopAnim()
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "MolestLoopAnim__16zNPCGoalLoopAnimFv")

// zNPCGoalLoopAnim::UnmolestAnim()
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "UnmolestAnim__16zNPCGoalLoopAnimFv")

// zNPCGoalLoopAnim::LoopCountSet(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "LoopCountSet__16zNPCGoalLoopAnimFi")

// zNPCGoalLoopAnim::UseDefaultAnims()
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "UseDefaultAnims__16zNPCGoalLoopAnimFv")

// zNPCGoalLoopAnim::ValidateStages()
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "ValidateStages__16zNPCGoalLoopAnimFv")

// zNPCGoalPatrol::DoOnArriveStuff()
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "DoOnArriveStuff__14zNPCGoalPatrolFv")

// zNPCGoalPatrol::PickTransition(int*,en_trantype*)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "PickTransition__14zNPCGoalPatrolFPiP11en_trantype")

// zNPCGoalPatrol::MoveNormal(float)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "MoveNormal__14zNPCGoalPatrolFf")

// zNPCGoalPatrol::MoveSpline(float)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "MoveSpline__14zNPCGoalPatrolFf")

// zNPCGoalPatrol::Chk_AutoSmooth()
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "Chk_AutoSmooth__14zNPCGoalPatrolFv")

// zNPCGoalPatrol::MoveAutoSmooth(float)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "MoveAutoSmooth__14zNPCGoalPatrolFf")

// zNPCGoalWander::VerticalWander(float,const xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "VerticalWander__14zNPCGoalWanderFfPC5xVec3")

// zNPCGoalWander::CalcNewDir()
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "CalcNewDir__14zNPCGoalWanderFv")

// zNPCGoalDead::Enter(float,void*)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "Enter__12zNPCGoalDeadFfPv")

// zNPCGoalDEVAnimCycle::ASTGetNext(xAnimState*)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "ASTGetNext__20zNPCGoalDEVAnimCycleFP10xAnimState")

// zNPCGoalDEVAnimSpin::ASTMolestAnim(xAnimState*)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "ASTMolestAnim__19zNPCGoalDEVAnimSpinFP10xAnimState")

// zNPCGoalDEVAnimSpin::ASTUnmolestAnim()
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "ASTUnmolestAnim__19zNPCGoalDEVAnimSpinFv")

// zNPCGoalDEVHero::zNPCGoalDEVHero(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "__ct__15zNPCGoalDEVHeroFi")

// zNPCGoalDEVAnimSpin::zNPCGoalDEVAnimSpin(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "__ct__19zNPCGoalDEVAnimSpinFi")

// zNPCGoalDEVAnimCycle::zNPCGoalDEVAnimCycle(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "__ct__20zNPCGoalDEVAnimCycleFi")

// zNPCGoalLimbo::zNPCGoalLimbo(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "__ct__13zNPCGoalLimboFi")

// zNPCGoalNoManLand::zNPCGoalNoManLand(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "__ct__17zNPCGoalNoManLandFi")

// zNPCGoalDead::zNPCGoalDead(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "__ct__12zNPCGoalDeadFi")

// zNPCGoalFidget::zNPCGoalFidget(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "__ct__14zNPCGoalFidgetFi")

// zNPCGoalPushAnim::zNPCGoalPushAnim(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "__ct__16zNPCGoalPushAnimFi")

// zNPCGoalPatrol::zNPCGoalPatrol(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "__ct__14zNPCGoalPatrolFi")

// zNPCGoalWander::zNPCGoalWander(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "__ct__14zNPCGoalWanderFi")

// zNPCGoalWaiting::zNPCGoalWaiting(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "__ct__15zNPCGoalWaitingFi")

// zNPCGoalLoopAnim::zNPCGoalLoopAnim(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "__ct__16zNPCGoalLoopAnimFi")

// zNPCGoalIdle::zNPCGoalIdle(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "__ct__12zNPCGoalIdleFi")

// zNPCGoalLoopAnim::TriggerExit()
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "TriggerExit__16zNPCGoalLoopAnimFv")

// zNPCGoalDead::DieQuietly()
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "DieQuietly__12zNPCGoalDeadFv")

#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "__ct__17xListItem_esc__0_5xGoal_esc__1_Fv")

// xFactoryInst::~xFactoryInst()
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "__dt__12xFactoryInstFv")

// xFactoryInst::xFactoryInst()
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "__ct__12xFactoryInstFv")

// zNPCGoalCommon::zNPCGoalCommon(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "__ct__14zNPCGoalCommonFi")

// xGoal::xGoal(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "__ct__5xGoalFi")

// xGoal::SetFlags(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "SetFlags__5xGoalFi")

// zNPCCommon::XYZDstSqToPos(xVec3*,xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "XYZDstSqToPos__10zNPCCommonFP5xVec3P5xVec3")

// zNPCCommon::XYZVecToPos(xVec3*,xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "XYZVecToPos__10zNPCCommonFP5xVec3P5xVec3")

// xNPCBasic::RestoreColFlags()
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "RestoreColFlags__9xNPCBasicFv")

// xNPCBasic::DBG_IsNormLog(en_npcdcat,int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "DBG_IsNormLog__9xNPCBasicF10en_npcdcati")

// zMovePoint::RadiusZone()
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "RadiusZone__10zMovePointFv")

// zMovePoint::Delay()
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "Delay__10zMovePointFv")

// zMovePoint::PosGet()
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "PosGet__10zMovePointFv")

// NPCC_DstSq(const xVec3*,const xVec3*,xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "NPCC_DstSq__FPC5xVec3PC5xVec3P5xVec3")

// xPsyche::GIDOfSafety() const
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "GIDOfSafety__7xPsycheCFv")

#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "Remove__17xListItem_esc__0_5xGoal_esc__1_Fv")
