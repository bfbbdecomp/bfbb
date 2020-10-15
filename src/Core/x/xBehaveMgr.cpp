#include "xBehaveMgr.h"

#include <types.h>

// xBehaveMgr_Startup()
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "xBehaveMgr_Startup__Fv")

// xBehaveMgr_Shutdown()
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "xBehaveMgr_Shutdown__Fv")

// xBehaveMgr_GetSelf()
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "xBehaveMgr_GetSelf__Fv")

// xBehaveMgr_GoalFactory()
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "xBehaveMgr_GoalFactory__Fv")

// xBehaveMgr_ScenePrepare()
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "xBehaveMgr_ScenePrepare__Fv")

// xBehaveMgr_SceneFinish()
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "xBehaveMgr_SceneFinish__Fv")

// xBehaveMgr_SceneReset()
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "xBehaveMgr_SceneReset__Fv")

// xBehaveMgr::Startup(int,int)
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "Startup__10xBehaveMgrFii")

// xBehaveMgr::RegBuiltIn()
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "RegBuiltIn__10xBehaveMgrFv")

// xBehaveMgr::Subscribe(xBase*,int)
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "Subscribe__10xBehaveMgrFP5xBasei")

// xBehaveMgr::UnSubscribe(xPsyche*)
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "UnSubscribe__10xBehaveMgrFP7xPsyche")

// xBehaveMgr::ScenePrepare()
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "ScenePrepare__10xBehaveMgrFv")

// xBehaveMgr::SceneFinish()
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "SceneFinish__10xBehaveMgrFv")

// xBehaveMgr::SceneReset()
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "SceneReset__10xBehaveMgrFv")

// xPsyche::BrainBegin()
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "BrainBegin__7xPsycheFv")

// xPsyche::BrainExtend()
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "BrainExtend__7xPsycheFv")

// xPsyche::BrainEnd()
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "BrainEnd__7xPsycheFv")

// xPsyche::AddGoal(int,void*)
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "AddGoal__7xPsycheFiPv")

// xPsyche::FreshWipe()
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "FreshWipe__7xPsycheFv")

// xPsyche::SetOwner(xBase*,void*)
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "SetOwner__7xPsycheFP5xBasePv")

// xPsyche::KillBrain(xFactory*)
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "KillBrain__7xPsycheFP8xFactory")

// xPsyche::Lobotomy(xFactory*)
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "Lobotomy__7xPsycheFP8xFactory")

// xPsyche::Amnesia(int)
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "Amnesia__7xPsycheFi")

// xPsyche::IndexInStack(int) const
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "IndexInStack__7xPsycheCFi")

// xPsyche::GetCurGoal() const
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "GetCurGoal__7xPsycheCFv")

// xPsyche::GIDInStack(int) const
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "GIDInStack__7xPsycheCFi")

// xPsyche::GIDOfActive() const
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "GIDOfActive__7xPsycheCFv")

// xPsyche::GIDOfPending() const
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "GIDOfPending__7xPsycheCFv")

// xPsyche::GetPrevRecovery(int) const
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "GetPrevRecovery__7xPsycheCFi")

// xPsyche::GoalSet(int,int)
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "GoalSet__7xPsycheFii")

// xPsyche::GoalPush(int,int)
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "GoalPush__7xPsycheFii")

// xPsyche::GoalPopToBase(int)
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "GoalPopToBase__7xPsycheFi")

// xPsyche::GoalPopRecover(int)
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "GoalPopRecover__7xPsycheFi")

// xPsyche::GoalPop(int,int)
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "GoalPop__7xPsycheFii")

// xPsyche::GoalSwap(int,int)
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "GoalSwap__7xPsycheFii")

// xPsyche::GoalNone(int,int)
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "GoalNone__7xPsycheFii")

// xPsyche::SetTopState(en_GOALSTATE)
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "SetTopState__7xPsycheF12en_GOALSTATE")

// xPsyche::FindGoal(int)
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "FindGoal__7xPsycheFi")

// xPsyche::ForceTran(float,void*)
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "ForceTran__7xPsycheFfPv")

// xPsyche::Timestep(float,void*)
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "Timestep__7xPsycheFfPv")

// xPsyche::ParseTranRequest(en_trantype,int)
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "ParseTranRequest__7xPsycheF11en_trantypei")

// xPsyche::TranGoal(float,void*)
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "TranGoal__7xPsycheFfPv")

// xPsyche::TimerGet(en_xpsytime)
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "TimerGet__7xPsycheF11en_xpsytime")

// xPsyche::TimerClear()
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "TimerClear__7xPsycheFv")

// xPsyche::TimerUpdate(float)
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "TimerUpdate__7xPsycheFf")

// xBehaveMgr::xBehaveMgr()
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "__ct__10xBehaveMgrFv")

// xBehaveMgr::~xBehaveMgr()
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "__dt__10xBehaveMgrFv")

// xPsyche::ExpTranOn()
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "ExpTranOn__7xPsycheFv")

// xPsyche::ExpTranOff()
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "ExpTranOff__7xPsycheFv")

// xPsyche::ExpTranIsOn()
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "ExpTranIsOn__7xPsycheFv")

// xPsyche::DBG_HistAdd(int)
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "DBG_HistAdd__7xPsycheFi")
