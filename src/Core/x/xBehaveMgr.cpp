#include "xBehaveMgr.h"

#include <types.h>

// func_8010CE24
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "xBehaveMgr_Startup__Fv")

// func_8010CE8C
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "xBehaveMgr_Shutdown__Fv")

// func_8010CED4
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "xBehaveMgr_GetSelf__Fv")

// func_8010CEDC
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "xBehaveMgr_GoalFactory__Fv")

// func_8010CF00
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "xBehaveMgr_ScenePrepare__Fv")

// func_8010CF24
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "xBehaveMgr_SceneFinish__Fv")

// func_8010CF48
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "xBehaveMgr_SceneReset__Fv")

// func_8010CF6C
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "Startup__10xBehaveMgrFii")

// func_8010D018
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "RegBuiltIn__10xBehaveMgrFv")

// func_8010D03C
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "Subscribe__10xBehaveMgrFP5xBasei")

// func_8010D0A8
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "UnSubscribe__10xBehaveMgrFP7xPsyche")

// func_8010D0F8
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "ScenePrepare__10xBehaveMgrFv")

// func_8010D0FC
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "SceneFinish__10xBehaveMgrFv")

// func_8010D120
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "SceneReset__10xBehaveMgrFv")

// func_8010D188
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "BrainBegin__7xPsycheFv")

// func_8010D1C8
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "BrainExtend__7xPsycheFv")

// func_8010D208
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "BrainEnd__7xPsycheFv")

// func_8010D240
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "AddGoal__7xPsycheFiPv")

// func_8010D2E4
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "FreshWipe__7xPsycheFv")

// func_8010D35C
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "SetOwner__7xPsycheFP5xBasePv")

// func_8010D398
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "KillBrain__7xPsycheFP8xFactory")

// func_8010D3CC
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "Lobotomy__7xPsycheFP8xFactory")

// func_8010D430
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "Amnesia__7xPsycheFi")

// func_8010D4CC
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "IndexInStack__7xPsycheCFi")

// func_8010D534
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "GetCurGoal__7xPsycheCFv")

// func_8010D558
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "GIDInStack__7xPsycheCFi")

// func_8010D5C4
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "GIDOfActive__7xPsycheCFv")

// func_8010D604
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "GIDOfPending__7xPsycheCFv")

// func_8010D638
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "GetPrevRecovery__7xPsycheCFi")

// func_8010D730
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "GoalSet__7xPsycheFii")

// func_8010D858
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "GoalPush__7xPsycheFii")

// func_8010D9B0
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "GoalPopToBase__7xPsycheFi")

// func_8010DA50
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "GoalPopRecover__7xPsycheFi")

// func_8010DB40
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "GoalPop__7xPsycheFii")

// func_8010DCF8
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "GoalSwap__7xPsycheFii")

// func_8010DE08
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "GoalNone__7xPsycheFii")

// func_8010DF04
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "SetTopState__7xPsycheF12en_GOALSTATE")

// func_8010DF3C
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "FindGoal__7xPsycheFi")

// func_8010E00C
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "ForceTran__7xPsycheFfPv")

// func_8010E060
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "Timestep__7xPsycheFfPv")

// func_8010E260
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "ParseTranRequest__7xPsycheF11en_trantypei")

// func_8010E378
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "TranGoal__7xPsycheFfPv")

// func_8010E8A8
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "TimerGet__7xPsycheF11en_xpsytime")

// func_8010E8D4
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "TimerClear__7xPsycheFv")

// func_8010E8F4
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "TimerUpdate__7xPsycheFf")

// func_8010E938
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "__ct__10xBehaveMgrFv")

// func_8010E93C
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "__dt__10xBehaveMgrFv")

// func_8010E978
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "ExpTranOn__7xPsycheFv")

// func_8010E988
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "ExpTranOff__7xPsycheFv")

// func_8010E998
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "ExpTranIsOn__7xPsycheFv")

// func_8010E9AC
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "DBG_HistAdd__7xPsycheFi")
