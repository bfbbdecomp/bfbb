#include "zNPCTypeCommon.h"

#include <types.h>

// ZNPC_Create_Common(int,RyzMemGrow*,void*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "ZNPC_Create_Common__FiP10RyzMemGrowPv")

// ZNPC_Common_Startup()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "ZNPC_Common_Startup__Fv")

// ZNPC_Common_Shutdown()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "ZNPC_Common_Shutdown__Fv")

// zNPCCommon_ScenePrepare()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "zNPCCommon_ScenePrepare__Fv")

// zNPCCommon_SceneFinish()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "zNPCCommon_SceneFinish__Fv")

// zNPCCommon_SceneReset()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "zNPCCommon_SceneReset__Fv")

// zNPCCommon_ScenePostInit()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "zNPCCommon_ScenePostInit__Fv")

// zNPCCommon_Timestep(xScene*,float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "zNPCCommon_Timestep__FP6xScenef")

// zNPCCommon::Init(xEntAsset*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "Init__10zNPCCommonFP9xEntAsset")

// zNPCCommon::InitBounds()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "InitBounds__10zNPCCommonFv")

// zNPCCommon::Setup()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "Setup__10zNPCCommonFv")

// zNPCCommon::Reset()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "Reset__10zNPCCommonFv")

// zNPCCommon::Destroy()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "Destroy__10zNPCCommonFv")

// zNPCCommon::Damage(en_NPC_DAMAGE_TYPE,xBase*,const xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "Damage__10zNPCCommonF18en_NPC_DAMAGE_TYPEP5xBasePC5xVec3")

// zNPCCommon::Respawn(const xVec3*,zMovePoint*,zMovePoint*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "Respawn__10zNPCCommonFPC5xVec3P10zMovePointP10zMovePoint")

// zNPCCommon::NPCMessage(NPCMsg*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "NPCMessage__10zNPCCommonFP6NPCMsg")

// zNPCCommon::Process(xScene*,float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "Process__10zNPCCommonFP6xScenef")

// zNPCCommon::BUpdate(xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "BUpdate__10zNPCCommonFP5xVec3")

// zNPCCommon::BoundAsRadius(int) const
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "BoundAsRadius__10zNPCCommonCFi")

// zNPCCommon::NewTime(xScene*,float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "NewTime__10zNPCCommonFP6xScenef")

// zNPCCommon::SysEvent(xBase*,xBase*,unsigned int,const float*,xBase*,int*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "SysEvent__10zNPCCommonFP5xBaseP5xBaseUiPCfP5xBasePi")

// zNPCCommon::ConvertHitEvent(xBase*,xBase*,unsigned int,const float*,xBase*,int*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "ConvertHitEvent__10zNPCCommonFP5xBaseP5xBaseUiPCfP5xBasePi")

// zNPCCommon::VelStop()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "VelStop__10zNPCCommonFv")

// zNPCCommon::ThrottleAdjust(float,float,float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "ThrottleAdjust__10zNPCCommonFfff")

// zNPCCommon::ThrottleAccel(float,int,float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "ThrottleAccel__10zNPCCommonFfif")

// zNPCCommon::ThrottleApply(float,const xVec3*,int)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "ThrottleApply__10zNPCCommonFfPC5xVec3i")

// zNPCCommon::TurnToFace(float,const xVec3*,float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "TurnToFace__10zNPCCommonFfPC5xVec3f")

// zNPCCommon::ParseLinks()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "ParseLinks__10zNPCCommonFv")

// zNPCCommon::ParseINI()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "ParseINI__10zNPCCommonFv")

// zNPCCommon::CollideReview()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "CollideReview__10zNPCCommonFv")

// zNPCCommon::IsMountableType(en_ZBASETYPE)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "IsMountableType__10zNPCCommonF12en_ZBASETYPE")

// zNPCCommon::TagVerts()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "TagVerts__10zNPCCommonFv")

// zNPCCommon::GetVertPos(en_mdlvert,xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "GetVertPos__10zNPCCommonF10en_mdlvertP5xVec3")

// zNPCCommon::IsAttackFrame(float,int)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "IsAttackFrame__10zNPCCommonFfi")

// zNPCCommon::GiveReward()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "GiveReward__10zNPCCommonFv")

// zNPCPlyrSnd_Reset()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "zNPCPlyrSnd_Reset__Fv")

// zNPCPlyrSnd_Update(float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "zNPCPlyrSnd_Update__Ff")

// zNPCCommon::PlayerKiltMe()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "PlayerKiltMe__10zNPCCommonFv")

// zNPCCommon::ISeePlayer()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "ISeePlayer__10zNPCCommonFv")

// zNPCCommon::ConfigSceneDone()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "ConfigSceneDone__10zNPCCommonFv")

// zNPCCommon::ConfigCreate(unsigned int)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "ConfigCreate__10zNPCCommonFUi")

// zNPCCommon::ConfigFind(unsigned int)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "ConfigFind__10zNPCCommonFUi")

// zNPCCommon::GetParm(en_npcparm,int*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "GetParm__10zNPCCommonF10en_npcparmPi")

// zNPCCommon::GetParm(en_npcparm,float*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "GetParm__10zNPCCommonF10en_npcparmPf")

// zNPCCommon::GetParm(en_npcparm,xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "GetParm__10zNPCCommonF10en_npcparmP5xVec3")

// zNPCCommon::GetParm(en_npcparm,zMovePoint**)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "GetParm__10zNPCCommonF10en_npcparmPP10zMovePoint")

// zNPCCommon::CanDoSplines()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "CanDoSplines__10zNPCCommonFv")

// zNPCCommon::FirstAssigned()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "FirstAssigned__10zNPCCommonFv")

// zNPCCommon::MvptReset(zMovePoint*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "MvptReset__10zNPCCommonFP10zMovePoint")

// zNPCCommon::MvptCycle()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "MvptCycle__10zNPCCommonFv")

// zNPCCommon::HaveLOSToPos(xVec3*,float,xScene*,xBase*,xCollis*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "HaveLOSToPos__10zNPCCommonFP5xVec3fP6xSceneP5xBaseP7xCollis")

// zNPCCommon::ModelAtomicHide(int,xModelInstance*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "ModelAtomicHide__10zNPCCommonFiP14xModelInstance")

// zNPCCommon::ModelAtomicShow(int,xModelInstance*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "ModelAtomicShow__10zNPCCommonFiP14xModelInstance")

// zNPCCommon::ModelAtomicFind(int,int,xModelInstance*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "ModelAtomicFind__10zNPCCommonFiiP14xModelInstance")

// zNPCCommon::ModelScaleSet(float,float,float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "ModelScaleSet__10zNPCCommonFfff")

// zNPCCommon::AnimStart(unsigned int,int)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "AnimStart__10zNPCCommonFUii")

// zNPCCommon::AnimSetState(unsigned int,float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "AnimSetState__10zNPCCommonFUif")

// zNPCCommon::AnimFindState(unsigned int)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "AnimFindState__10zNPCCommonFUi")

// zNPCCommon::AnimCurSingle()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "AnimCurSingle__10zNPCCommonFv")

// zNPCCommon::AnimCurState()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "AnimCurState__10zNPCCommonFv")

// zNPCCommon::AnimCurStateID()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "AnimCurStateID__10zNPCCommonFv")

// zNPCCommon::AnimDuration(xAnimState*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "AnimDuration__10zNPCCommonFP10xAnimState")

// zNPCCommon::AnimTimeRemain(xAnimState*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "AnimTimeRemain__10zNPCCommonFP10xAnimState")

// zNPCCommon::AnimTimeCurrent()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "AnimTimeCurrent__10zNPCCommonFv")

// zNPCSettings_MakeDummy()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "zNPCSettings_MakeDummy__Fv")

// zNPCSettings_Find(unsigned int)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "zNPCSettings_Find__FUi")

// zNPCCommon::Vibrate(float,float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "Vibrate__10zNPCCommonFff")

// zNPCCommon::Vibrate(en_npcvibe,float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "Vibrate__10zNPCCommonF10en_npcvibef")

// zNPCCommon::MatPosSet(xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "MatPosSet__10zNPCCommonFP5xVec3")

// NPCC_NPCIsConversing()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "NPCC_NPCIsConversing__Fv")

// zNPCCommon_WonderReset()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "zNPCCommon_WonderReset__Fv")

// zNPCCommon::WonderOfTalking(int,xBase*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "WonderOfTalking__10zNPCCommonFiP5xBase")

// zNPCCommon::SomethingWonderful()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "SomethingWonderful__10zNPCCommonFv")

// zNPCCommon::SndPlayFromAFX(zAnimFxSound*,unsigned int*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "SndPlayFromAFX__10zNPCCommonFP12zAnimFxSoundPUi")

// zNPCCommon::SndPlayFromSFX(xSFX*,unsigned int*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "SndPlayFromSFX__10zNPCCommonFP4xSFXPUi")

// zNPCCommon::SndPlayRandom(en_NPC_SOUND)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "SndPlayRandom__10zNPCCommonF12en_NPC_SOUND")

// zNPCCommon::SndStart(unsigned int,NPCSndProp*,float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "SndStart__10zNPCCommonFUiP10NPCSndPropf")

// zNPCCommon::SndIsAnyPlaying()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "SndIsAnyPlaying__10zNPCCommonFv")

// zNPCCommon::SndChanIsBusy(int)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "SndChanIsBusy__10zNPCCommonFi")

// zNPCCommon::SndKillSounds(int,int)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "SndKillSounds__10zNPCCommonFii")

// zNPCCommon::SndQueUpdate(float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "SndQueUpdate__10zNPCCommonFf")

// zNPCCommon::LassoInit()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "LassoInit__10zNPCCommonFv")

// zNPCCommon::LassoSetup()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "LassoSetup__10zNPCCommonFv")

// zNPCCommon::LassoUseGuides(int,int)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "LassoUseGuides__10zNPCCommonFii")

// zNPCCommon::LassoGetAnims(xModelInstance*,xModelInstance*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "LassoGetAnims__10zNPCCommonFP14xModelInstanceP14xModelInstance")

// zNPCCommon::LassoSyncAnims(en_lassanim)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "LassoSyncAnims__10zNPCCommonF11en_lassanim")

// zNPCCommon::GimmeLassInfo()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "GimmeLassInfo__10zNPCCommonFv")

// zNPCCommon::LassoNotify(en_LASSO_EVENT)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "LassoNotify__10zNPCCommonF14en_LASSO_EVENT")

// zNPCCommon::AddBaseline(xPsyche*,int (*)(xGoal*, void*, en_trantype*, float, void*),int (*)(xGoal*, void*, en_trantype*, float, void*),int (*)(xGoal*, void*, en_trantype*, float, void*),int (*)(xGoal*, void*, en_trantype*, float, void*),int (*)(xGoal*, void*, en_trantype*, float, void*))
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "AddBaseline__10zNPCCommonFP7xPsychePFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_i")

// zNPCCommon::AddScripting(xPsyche*,int (*)(xGoal*, void*, en_trantype*, float, void*),int (*)(xGoal*, void*, en_trantype*, float, void*),int (*)(xGoal*, void*, en_trantype*, float, void*),int (*)(xGoal*, void*, en_trantype*, float, void*),int (*)(xGoal*, void*, en_trantype*, float, void*),int (*)(xGoal*, void*, en_trantype*, float, void*),int (*)(xGoal*, void*, en_trantype*, float, void*))
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "AddScripting__10zNPCCommonFP7xPsychePFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_i")

// zNPCCommon::AddDEVGoals(xPsyche*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "AddDEVGoals__10zNPCCommonFP7xPsyche")

// NPCC_BuildStandardAnimTran(xAnimTable*,char**,int*,int,float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "NPCC_BuildStandardAnimTran__FP10xAnimTablePPcPiif")

// zNPCCommon_EjectPhlemOnPawz()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "zNPCCommon_EjectPhlemOnPawz__Fv")

// zNPCCommon::zNPCCommon(int)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "__ct__10zNPCCommonFi")

// zNPCCommon::DBG_Name()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "DBG_Name__10zNPCCommonFv")

// zNPCCommon::DBG_AddTweakers()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "DBG_AddTweakers__10zNPCCommonFv")

// zNPCCommon::DBG_RptDataSize()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "DBG_RptDataSize__10zNPCCommonFv")

// zNPCCommon::DBG_InstName()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "DBG_InstName__10zNPCCommonFv")

// zNPCCommon::ModelScaleSet(const xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "ModelScaleSet__10zNPCCommonFPC5xVec3")

// zNPCCommon::AnimGetTable()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "AnimGetTable__10zNPCCommonFv")

// zNPCCommon::DuploOwner(zNPCCommon*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "DuploOwner__10zNPCCommonFP10zNPCCommon")

// xNPCBasic::xNPCBasic(int)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "__ct__9xNPCBasicFi")

// xNPCBasic::Setup()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "Setup__9xNPCBasicFv")

// xNPCBasic::Move(xScene*,float,xEntFrame*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "Move__9xNPCBasicFP6xScenefP9xEntFrame")

// xNPCBasic::SysEvent(xBase*,xBase*,unsigned int,const float*,xBase*,int*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "SysEvent__9xNPCBasicFP5xBaseP5xBaseUiPCfP5xBasePi")

// xNPCBasic::DBG_PStatOn(en_npcperf)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "DBG_PStatOn__9xNPCBasicF10en_npcperf")

// xNPCBasic::DBG_PStatCont(en_npcperf)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "DBG_PStatCont__9xNPCBasicF10en_npcperf")

// xNPCBasic::Render()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "Render__9xNPCBasicFv")

// zNPCSettings::operator =(const zNPCSettings&)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "__as__12zNPCSettingsFRC12zNPCSettings")

// xDynAsset::operator =(const xDynAsset&)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "__as__9xDynAssetFRC9xDynAsset")

// xBaseAsset::operator =(const xBaseAsset&)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "__as__10xBaseAssetFRC10xBaseAsset")

// xPsyche::ImmTranOn()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "ImmTranOn__7xPsycheFv")

// xPsyche::ImmTranOff()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "ImmTranOff__7xPsycheFv")

// xPsyche::ImmTranIsOn()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "ImmTranIsOn__7xPsycheFv")

// xPsyche::HasGoal(int)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "HasGoal__7xPsycheFi")

#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "Next__21xListItem_esc__0_9NPCConfig_esc__1_Fv")

// zMovePoint::HasSpline()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "HasSpline__10zMovePointFv")

#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "xUtil_choose_esc__0_f_esc__1___FPCfiPCf")

// xSndIsPlaying(unsigned int,unsigned int)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "xSndIsPlaying__FUiUi")

// xGoal::SetCallbacks(int (*)(xGoal*, void*, en_trantype*, float, void*),int (*)(xGoal*, void*, en_trantype*, float, void*),int (*)(xGoal*, void*, float, void*),void*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "SetCallbacks__5xGoalFPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvfPv_iPv")

#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "Insert__21xListItem_esc__0_9NPCConfig_esc__1_FP9NPCConfig")
