#include "zNPCGoalStd.h"

#include <types.h>

// func_800D5480
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "GOALCreate_Standard__FiP10RyzMemGrowPv")

// func_800D56F8
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "GOALDestroy_Goal__FP12xFactoryInst")

// func_800D571C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "Enter__16zNPCGoalPushAnimFfPv")

// func_800D5758
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "Exit__16zNPCGoalPushAnimFfPv")

// func_800D5780
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "Resume__16zNPCGoalPushAnimFfPv")

// func_800D57AC
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "Process__16zNPCGoalPushAnimFP11en_trantypefPvP6xScene")

// func_800D5914
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "Enter__16zNPCGoalLoopAnimFfPv")

// func_800D5A30
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "Exit__16zNPCGoalLoopAnimFfPv")

// func_800D5A84
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "Process__16zNPCGoalLoopAnimFP11en_trantypefPvP6xScene")

// func_800D5C0C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "MolestLoopAnim__16zNPCGoalLoopAnimFv")

// func_800D5C6C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "UnmolestAnim__16zNPCGoalLoopAnimFv")

// func_800D5CC0
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "LoopCountSet__16zNPCGoalLoopAnimFi")

// func_800D5CE4
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "UseDefaultAnims__16zNPCGoalLoopAnimFv")

// func_800D5DE4
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "ValidateStages__16zNPCGoalLoopAnimFv")

// func_800D5E70
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "Enter__12zNPCGoalIdleFfPv")

// func_800D5F58
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "Exit__12zNPCGoalIdleFfPv")

// func_800D5FB4
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "Suspend__12zNPCGoalIdleFfPv")

// func_800D6010
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "Resume__12zNPCGoalIdleFfPv")

// func_800D6104
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "Process__12zNPCGoalIdleFP11en_trantypefPvP6xScene")

// func_800D6274
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "NPCMessage__12zNPCGoalIdleFP6NPCMsg")

// func_800D62D0
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "Enter__14zNPCGoalPatrolFfPv")

// func_800D6348
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "Exit__14zNPCGoalPatrolFfPv")

// func_800D6408
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "Resume__14zNPCGoalPatrolFfPv")

// func_800D6488
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "Process__14zNPCGoalPatrolFP11en_trantypefPvP6xScene")

// func_800D6664
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "DoOnArriveStuff__14zNPCGoalPatrolFv")

// func_800D6738
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "PickTransition__14zNPCGoalPatrolFPiP11en_trantype")

// func_800D6814
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "MoveNormal__14zNPCGoalPatrolFf")

// func_800D6AE0
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "MoveSpline__14zNPCGoalPatrolFf")

// func_800D6DB8
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "Chk_AutoSmooth__14zNPCGoalPatrolFv")

// func_800D6E94
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "MoveAutoSmooth__14zNPCGoalPatrolFf")

// func_800D7394
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "Enter__14zNPCGoalFidgetFfPv")

// func_800D7438
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "Exit__14zNPCGoalFidgetFfPv")

// func_800D7494
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "Enter__14zNPCGoalWanderFfPv")

// func_800D7704
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "Resume__14zNPCGoalWanderFfPv")

// func_800D77A0
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "Process__14zNPCGoalWanderFP11en_trantypefPvP6xScene")

// func_800D7AA8
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "VerticalWander__14zNPCGoalWanderFfPC5xVec3")

// func_800D7D18
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "CalcNewDir__14zNPCGoalWanderFv")

// func_800D7EF8
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "Enter__15zNPCGoalWaitingFfPv")

// func_800D806C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "Resume__15zNPCGoalWaitingFfPv")

// func_800D8138
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "Exit__15zNPCGoalWaitingFfPv")

// func_800D8194
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "Process__15zNPCGoalWaitingFP11en_trantypefPvP6xScene")

// func_800D82AC
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "Enter__12zNPCGoalDeadFfPv")

// func_800D8378
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "Exit__12zNPCGoalDeadFfPv")

// func_800D840C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "Enter__13zNPCGoalLimboFfPv")

// func_800D8460
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "NPCMessage__13zNPCGoalLimboFP6NPCMsg")

// func_800D84FC
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "Enter__20zNPCGoalDEVAnimCycleFfPv")

// func_800D8568
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "Exit__20zNPCGoalDEVAnimCycleFfPv")

// func_800D8588
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "Process__20zNPCGoalDEVAnimCycleFP11en_trantypefPvP6xScene")

// func_800D8670
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "NPCMessage__20zNPCGoalDEVAnimCycleFP6NPCMsg")

// func_800D8724
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "ASTGetNext__20zNPCGoalDEVAnimCycleFP10xAnimState")

// func_800D8758
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "Enter__19zNPCGoalDEVAnimSpinFfPv")

// func_800D87E0
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "Exit__19zNPCGoalDEVAnimSpinFfPv")

// func_800D8834
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "Process__19zNPCGoalDEVAnimSpinFP11en_trantypefPvP6xScene")

// func_800D88D8
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "NPCMessage__19zNPCGoalDEVAnimSpinFP6NPCMsg")

// func_800D898C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "ASTMolestAnim__19zNPCGoalDEVAnimSpinFP10xAnimState")

// func_800D89F8
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "ASTUnmolestAnim__19zNPCGoalDEVAnimSpinFv")

// func_800D8A4C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "Enter__15zNPCGoalDEVHeroFfPv")

// func_800D8A6C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "Exit__15zNPCGoalDEVHeroFfPv")

// func_800D8A8C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "Process__15zNPCGoalDEVHeroFP11en_trantypefPvP6xScene")

// func_800D8B28
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "NPCMessage__15zNPCGoalDEVHeroFP6NPCMsg")

// func_800D8BDC
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "__ct__15zNPCGoalDEVHeroFi")

// func_800D8C24
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "__ct__19zNPCGoalDEVAnimSpinFi")

// func_800D8C6C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "__ct__20zNPCGoalDEVAnimCycleFi")

// func_800D8CB4
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "__ct__13zNPCGoalLimboFi")

// func_800D8CF0
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "__ct__17zNPCGoalNoManLandFi")

// func_800D8D2C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "__ct__12zNPCGoalDeadFi")

// func_800D8D74
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "__ct__14zNPCGoalFidgetFi")

// func_800D8DB0
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "__ct__16zNPCGoalPushAnimFi")

// func_800D8DF8
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "__ct__14zNPCGoalPatrolFi")

// func_800D8E40
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "__ct__14zNPCGoalWanderFi")

// func_800D8E90
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "__ct__15zNPCGoalWaitingFi")

// func_800D8ECC
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "__ct__16zNPCGoalLoopAnimFi")

// func_800D8F14
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "__ct__12zNPCGoalIdleFi")

// func_800D8F68
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "TriggerExit__16zNPCGoalLoopAnimFv")

// func_800D8F74
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "DieQuietly__12zNPCGoalDeadFv")

// func_800D8F90
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "__ct__17xListItem_esc__0_5xGoal_esc__1_Fv")

// func_800D8FA4
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "__dt__12xFactoryInstFv")

// func_800D8FE0
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "__ct__12xFactoryInstFv")

// func_800D8FF4
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "__ct__14zNPCGoalCommonFi")

// func_800D9040
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "__ct__5xGoalFi")

// func_800D90A0
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "SetFlags__5xGoalFi")

// func_800D90A8
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "XYZDstSqToPos__10zNPCCommonFP5xVec3P5xVec3")

// func_800D90EC
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "XYZVecToPos__10zNPCCommonFP5xVec3P5xVec3")

// func_800D9134
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "RestoreColFlags__9xNPCBasicFv")

// func_800D91D8
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "PhysicsFlags__9xNPCBasicCFv")

// func_800D91E0
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "ColPenByFlags__9xNPCBasicCFv")

// func_800D91E8
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "ColChkByFlags__9xNPCBasicCFv")

// func_800D91F0
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "ColPenFlags__9xNPCBasicCFv")

// func_800D91F8
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "ColChkFlags__9xNPCBasicCFv")

// func_800D9200
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "DBG_IsNormLog__9xNPCBasicF10en_npcdcati")

// func_800D9208
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "RadiusZone__10zMovePointFv")

// func_800D9214
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "Delay__10zMovePointFv")

// func_800D9220
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "PosGet__10zMovePointFv")

// func_800D9228
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "NPCC_DstSq__FPC5xVec3PC5xVec3P5xVec3")

// func_800D926C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "GIDOfSafety__7xPsycheCFv")

// func_800D9274
#pragma GLOBAL_ASM("asm/Game/zNPCGoalStd.s", "Remove__17xListItem_esc__0_5xGoal_esc__1_Fv")
