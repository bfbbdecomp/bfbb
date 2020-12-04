#include "zNPCTypeBossSandy.h"

#include <types.h>

// func_8013D054
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "on_change_newsfish__FRC10tweak_info")

// func_8013D094
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "on_change_shockwave__FRC10tweak_info")

// func_8013D100
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "ZNPC_AnimTable_BossSandy__Fv")

// func_8013D880
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s",                                                 \
                   "HeadIsCarried__FP15xAnimTransitionP11xAnimSinglePv")

// func_8013D8A4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s",                                                 \
                   "HeadNotCarried__FP15xAnimTransitionP11xAnimSinglePv")

// func_8013D8CC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s",                                                 \
                   "HeadIsShocked__FP15xAnimTransitionP11xAnimSinglePv")

// func_8013D8DC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s",                                                 \
                   "HeadNotShocked__FP15xAnimTransitionP11xAnimSinglePv")

// func_8013D8F4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "ZNPC_AnimTable_BossSandyHead__Fv")

// func_8013DB38
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "ZNPC_AnimTable_BossSandyScoreboard__Fv")

// func_8013DCA0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "Init__10zNPCBSandyFP9xEntAsset")

// func_8013E418
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "Setup__10zNPCBSandyFv")

// func_8013E5EC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "SelfSetup__10zNPCBSandyFv")

// func_8013E830
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "Reset__10zNPCBSandyFv")

// func_8013F1AC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "ParseINI__10zNPCBSandyFv")

// func_8013F1F8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s",                                                 \
                   "AnimPick__10zNPCBSandyFi16en_NPC_GOAL_SPOTP5xGoal")

// func_8013F36C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "SpringRender__FP15SandyLimbSpring")

// func_8013F6B8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "zNPCBSandy_BossDamageEffect_Init__Fv")

// func_8013F6D8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s",                                                 \
                   "zNPCBSandy_BossDamageEffect__FP14xModelInstanceUi")

// func_8013F87C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "zNPCBSandy_BossDamageEffect_Update__Ff")

// func_8013F9BC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "Render__10zNPCBSandyFv")

// func_8013FCA8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "CalcMagnetizeInfo__10zNPCBSandyFv")

// func_8013FD68
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "InitFX__10zNPCBSandyFv")

// func_80140150
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "UpdateFX__10zNPCBSandyFf")

// func_8014032C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "UpdateSandyBossCam__FP10zNPCBSandyf")

// func_801404CC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "GetBonePos__FP5xVec3P7xMat4x3iP5xVec3")

// func_80140574
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "MakeOBBFor__FiiP4xEntP7xMat4x3")

// func_801406F8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "BoundEventCB__FP5xBaseP5xBaseUiPCfP5xBase")

// func_8014075C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "Process__10zNPCBSandyFP6xScenef")

// func_80141668
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "hiddenByCutscene__10zNPCBSandyFv")

// func_8014184C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s",                                                 \
                   "Damage__10zNPCBSandyF18en_NPC_DAMAGE_TYPEP5xBasePC5xVec3")

// func_80141864
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "zNPCBSandy_AddBoundEntsToGrid__FP6zScene")

// func_8014198C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "zNPCBSandy_GameIsPaused__FP6zScene")

// func_801419D0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "NewTime__10zNPCBSandyFP6xScenef")

// func_80142150
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "idleCB__FP5xGoalPvP11en_trantypefPv")

// func_80142250
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "tauntCB__FP5xGoalPvP11en_trantypefPv")

// func_8014239C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "chaseCB__FP5xGoalPvP11en_trantypefPv")

// func_80142660
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "meleeCB__FP5xGoalPvP11en_trantypefPv")

// func_8014289C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "noHeadCB__FP5xGoalPvP11en_trantypefPv")

// func_8014292C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "elbowDropCB__FP5xGoalPvP11en_trantypefPv")

// func_80142AA0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "leapCB__FP5xGoalPvP11en_trantypefPv")

// func_80142B54
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "sitCB__FP5xGoalPvP11en_trantypefPv")

// func_80142C64
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "getUpCB__FP5xGoalPvP11en_trantypefPv")

// func_80142DE8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "runToRopeCB__FP5xGoalPvP11en_trantypefPv")

// func_80142ED8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "clotheslineCB__FP5xGoalPvP11en_trantypefPv")

// func_80142FDC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "Enter__21zNPCGoalBossSandyIdleFfPv")

// func_80143090
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s",                                                 \
                   "Process__21zNPCGoalBossSandyIdleFP11en_trantypefPvP6xScene")

// func_801431E4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "Exit__21zNPCGoalBossSandyIdleFfPv")

// func_80143238
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "Enter__22zNPCGoalBossSandyTauntFfPv")

// func_801432F4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s",                                                 \
                   "Process__22zNPCGoalBossSandyTauntFP11en_trantypefPvP6xScene")

// func_8014340C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "Enter__22zNPCGoalBossSandyChaseFfPv")

// func_80143468
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s",                                                 \
                   "Process__22zNPCGoalBossSandyChaseFP11en_trantypefPvP6xScene")

// func_801435A4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "Exit__22zNPCGoalBossSandyChaseFfPv")

// func_801435F8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "Enter__22zNPCGoalBossSandyMeleeFfPv")

// func_80143718
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "Exit__22zNPCGoalBossSandyMeleeFfPv")

// func_80143798
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s",                                                 \
                   "Process__22zNPCGoalBossSandyMeleeFP11en_trantypefPvP6xScene")

// func_8014393C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "Enter__23zNPCGoalBossSandyNoHeadFfPv")

// func_80143A04
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s",                                                 \
                   "Process__23zNPCGoalBossSandyNoHeadFP11en_trantypefPvP6xScene")

// func_80144378
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "Enter__26zNPCGoalBossSandyElbowDropFfPv")

// func_801444BC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s",                                                 \
                   "Process__26zNPCGoalBossSandyElbowDropFP11en_trantypefPvP6xScene")

// func_80144754
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "Exit__26zNPCGoalBossSandyElbowDropFfPv")

// func_8014478C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "Enter__21zNPCGoalBossSandyLeapFfPv")

// func_801449A0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s",                                                 \
                   "Process__21zNPCGoalBossSandyLeapFP11en_trantypefPvP6xScene")

// func_80144E20
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "Exit__21zNPCGoalBossSandyLeapFfPv")

// func_80144E48
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "Enter__20zNPCGoalBossSandySitFfPv")

// func_80144F58
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s",                                                 \
                   "Process__20zNPCGoalBossSandySitFP11en_trantypefPvP6xScene")

// func_80145698
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "Exit__20zNPCGoalBossSandySitFfPv")

// func_80145704
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "Enter__22zNPCGoalBossSandyGetUpFfPv")

// func_8014583C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s",                                                 \
                   "Process__22zNPCGoalBossSandyGetUpFP11en_trantypefPvP6xScene")

// func_80145868
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "Enter__26zNPCGoalBossSandyRunToRopeFfPv")

// func_80145AB4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s",                                                 \
                   "Process__26zNPCGoalBossSandyRunToRopeFP11en_trantypefPvP6xScene")

// func_80145BE8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "Exit__26zNPCGoalBossSandyRunToRopeFfPv")

// func_80145C10
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "Enter__28zNPCGoalBossSandyClotheslineFfPv")

// func_80145D90
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s",                                                 \
                   "Process__28zNPCGoalBossSandyClotheslineFP11en_trantypefPvP6xScene")

// func_8014657C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "add_tweaks__13xBinaryCameraFPCc")

// func_80146580
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "set_targets__13xBinaryCameraFRC5xVec3RC5xVec3f")

// func_80146590
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3")

// func_801465F4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "Name__21zNPCGoalBossSandyLeapFv")
