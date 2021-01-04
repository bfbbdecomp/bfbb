#include "../Core/x/xVec3.h"
#include "../Core/x/xMath3.h"

#include "zNPCTypeBossPatrick.h"

#include <types.h>

// func_80160144
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "ZNPC_AnimTable_BossPatrick__Fv")

// func_8016085C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "UpdatePatrickBossCam__FP12zNPCBPatrickf")

// func_80160964
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "GetBonePos__FP5xVec3P7xMat4x3iP5xVec3")

// func_80160A0C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "BoundEventCB__FP5xBaseP5xBaseUiPCfP5xBase")

// func_80160A14
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "Pat_ResetGlobalStuff__Fv")

// func_80160A18
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "Init__12zNPCBPatrickFP9xEntAsset")

// func_80160C14
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "on_change_newsfish__FRC10tweak_info")

// func_80160C68
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "on_change_recenter__FRC10tweak_info")

// func_80160C7C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "Setup__12zNPCBPatrickFv")

// func_801613B0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "SelfSetup__12zNPCBPatrickFv")

// func_801615CC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "Reset__12zNPCBPatrickFv")

// func_80161A3C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "Destroy__12zNPCBPatrickFv")

// func_80161A9C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s",                                               \
                   "AnimPick__12zNPCBPatrickFi16en_NPC_GOAL_SPOTP5xGoal")

// func_80161C28
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "Process__12zNPCBPatrickFP6xScenef")

// func_801633C0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s",                                               \
                   "DuploNotice__12zNPCBPatrickF13en_SM_NOTICESPv")

// func_80163418
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s",                                               \
                   "Damage__12zNPCBPatrickF18en_NPC_DAMAGE_TYPEP5xBasePC5xVec3")

// func_801635F0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "zNPCBPatrick_AddBoundEntsToGrid__FP6zScene")

// func_801636E0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "zNPCBPatrick_GameIsPaused__FP6zScene")

// func_80163724
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "RenderGlobs__12zNPCBPatrickFv")

// func_80163994
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "RenderFrozenPlayer__12zNPCBPatrickFv")

// func_80163B40
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "RenderExtra__12zNPCBPatrickFv")

// func_80163BC4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "NewTime__12zNPCBPatrickFP6xScenef")

// func_80163CA8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "nextGoal__12zNPCBPatrickFv")

// func_80163D60
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "getNextFreeGlob__12zNPCBPatrickFv")

// func_80163D9C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "playSplat__12zNPCBPatrickFP5xVec3")

// func_80163F88
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "canSpawnChucks__12zNPCBPatrickFv")

// func_80163FCC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "gotoRound__12zNPCBPatrickFi")

// func_801641BC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "hiddenByCutscene__12zNPCBPatrickFv")

// func_801644A4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s",                                               \
                   "ConveyorTimeLeft__12zNPCBPatrickFP9zPlatformP5xVec3")

// func_8016454C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s",                                               \
                   "ParabolaHitsConveyors__12zNPCBPatrickFP9xParabolaP7xCollis")

// func_80164718
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s",                                               \
                   "bossPatBoxCheckCollide__12zNPCBPatrickFP10bossPatBox")

// func_801647E4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s",                                               \
                   "bossPatBoxUpdate__12zNPCBPatrickFP10bossPatBoxf")

// func_80164A94
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "idleCB__FP5xGoalPvP11en_trantypefPv")

// func_80164B40
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "tauntCB__FP5xGoalPvP11en_trantypefPv")

// func_80164C00
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "hitCB__FP5xGoalPvP11en_trantypefPv")

// func_80164CD4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "spitCB__FP5xGoalPvP11en_trantypefPv")

// func_80164DAC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "runCB__FP5xGoalPvP11en_trantypefPv")

// func_80164E60
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "smackCB__FP5xGoalPvP11en_trantypefPv")

// func_80164F14
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "freezeCB__FP5xGoalPvP11en_trantypefPv")

// func_80164FC8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "spawnCB__FP5xGoalPvP11en_trantypefPv")

// func_80165094
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "spinCB__FP5xGoalPvP11en_trantypefPv")

// func_80165320
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "fudgeCB__FP5xGoalPvP11en_trantypefPv")

// func_80165408
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "Pat_FaceTarget__FP12zNPCBPatrickPC5xVec3ff")

// func_80165570
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "Enter__19zNPCGoalBossPatIdleFfPv")

// func_801655F8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s",                                               \
                   "Process__19zNPCGoalBossPatIdleFP11en_trantypefPvP6xScene")

// func_801656A0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "Enter__20zNPCGoalBossPatTauntFfPv")

// func_80165878
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s",                                               \
                   "Process__20zNPCGoalBossPatTauntFP11en_trantypefPvP6xScene")

// func_80165920
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "Enter__18zNPCGoalBossPatHitFfPv")

// func_80165AB8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s",                                               \
                   "Process__18zNPCGoalBossPatHitFP11en_trantypefPvP6xScene")

// func_80165B60
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "Exit__18zNPCGoalBossPatHitFfPv")

// func_80165C14
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "Enter__19zNPCGoalBossPatSpitFfPv")

// func_80165CA0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s",                                               \
                   "Process__19zNPCGoalBossPatSpitFP11en_trantypefPvP6xScene")

// func_8016614C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "Enter__18zNPCGoalBossPatRunFfPv")

// func_80166204
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s",                                               \
                   "Process__18zNPCGoalBossPatRunFP11en_trantypefPvP6xScene")

// func_8016628C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "Exit__18zNPCGoalBossPatRunFfPv")

// func_801662E8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "Enter__20zNPCGoalBossPatSmackFfPv")

// func_8016636C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s",                                               \
                   "Process__20zNPCGoalBossPatSmackFP11en_trantypefPvP6xScene")

// func_80166700
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "StartFreezeBreath__Fv")

// func_80166728
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "EmitFreezeBreath__FP5xVec3P5xVec3fff")

// func_80166858
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "StopFreezeBreath__Fv")

// func_80166888
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "Enter__21zNPCGoalBossPatFreezeFfPv")

// func_80166940
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s",                                               \
                   "Process__21zNPCGoalBossPatFreezeFP11en_trantypefPvP6xScene")

// func_80166B24
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "Enter__20zNPCGoalBossPatSpawnFfPv")

// func_80166B9C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s",                                               \
                   "Process__20zNPCGoalBossPatSpawnFP11en_trantypefPvP6xScene")

// func_80166D64
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "Enter__19zNPCGoalBossPatSpinFfPv")

// func_80167098
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s",                                               \
                   "Process__19zNPCGoalBossPatSpinFP11en_trantypefPvP6xScene")

// func_80168094
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "Exit__19zNPCGoalBossPatSpinFfPv")

// func_801680F8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "Enter__20zNPCGoalBossPatFudgeFfPv")

// func_80168188
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s",                                               \
                   "Process__20zNPCGoalBossPatFudgeFP11en_trantypefPvP6xScene")

void xMat3x3RMulVec(xVec3* o, const xMat3x3* m, const xVec3* v)
{
    float32 x = m->right.x * v->x + m->up.x * v->y + m->at.x * v->z;
    float32 y = m->right.y * v->x + m->up.y * v->y + m->at.y * v->z;
    float32 z = m->right.z * v->x + m->up.z * v->y + m->at.z * v->z;

    o->x = x;
    o->y = y;
    o->z = z;
}

// func_80168A90
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s",                                               \
                   "xDebugAddTweak__FPCcPUiUiUiPC14tweak_callbackPvUi")
