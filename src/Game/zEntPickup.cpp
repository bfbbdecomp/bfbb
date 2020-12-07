#include "zEntPickup.h"

#include <types.h>

// func_800627CC
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "PickupFallPhysics__FP10zEntPickupP6xScenef")

// func_80062980
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "isRewardPickup__FP10zEntPickup")

// func_80062A08
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "zEntPickup_Startup__Fv")

// func_80062A0C
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "zEntPickupInit__FPvPv")

// func_80062A2C
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "zEntPickupInit__FP10zEntPickupP9xEntAsset")

// func_80062DD8
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "zEntPickup_Setup__FP10zEntPickup")

// func_80062DF8
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "zEntPickup_Setup__Fv")

// func_80062F28
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "zEntPickupEventCB__FP5xBaseP5xBaseUiPCfP5xBase")

// func_800631E8
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "zEntPickup_FlyToInterface__FP10zEntPickupf")

// func_800631EC
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "zEntPickup_CheckAllPickupsAgainstPlayer__FP6xScenef")

// func_80063240
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "CheckPickupAgainstPlayer__FP4xEntPv")

// func_800635C8
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "zEntPickup_DoPickup__FP10zEntPickup")

// func_80063690
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "zEntPickup_GivePickup__FP10zEntPickup")

// func_80063914
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "collectPickup__FP10zEntPickup")

// func_80063AD4
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "zEntPickup_GiveAllRewardsNow__Fv")

// func_80063C9C
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "zEntPickup_Update__FP10zEntPickupP6xScenef")

// func_80064464
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "zEntPickup_Reset__FP10zEntPickup")

// func_8006451C
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "zEntPickup_Save__FP10zEntPickupP7xSerial")

// func_80064588
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "zEntPickup_Load__FP10zEntPickupP7xSerial")

// func_80064708
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "zEntPickup_FlushGrabbed__Fv")

// func_800647E0
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "zEntPickup_MakeDroppable__FP10zEntPickupP5xVec3P5xBase")

// func_8006485C
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "zEntPickup_Drop__FP10zEntPickup")

// func_800649A8
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "ShowPickupFx__FP10zEntPickup")

// func_800649D4
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "zEntPickup_UpdateFX__FP10zEntPickupP6xScenef")

// func_80064FA0
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "set_alpha_blend__FP14xModelInstance")

// func_80064FC4
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "zEntPickup_Render__FP10zEntPickupUi")

// func_8006509C
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "zEntPickup_RenderOne__FP4xEnt")

// func_800651CC
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "zEntPickup_RenderList__FP10zEntPickupUi")

// func_8006541C
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "zEntPickup_UpdateFlyToInterface__FP10zEntPickupUif")

// func_800659D8
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "rewardRequest__FUiP5xVec35xVec3")

// func_80065AD0
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "zEntPickup_SceneEnter__Fv")

// func_80065AF0
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "zEntPickup_SceneReset__Fv")

// func_80065B08
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "zEntPickup_SceneUpdate__Ff")

// func_80065E84
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "spawnNRewards__FPUiUiP5xVec35xVec3")

// func_80066000
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "zEntPickup_SpawnNRewards__FPUiUiP5xVec3")

// func_80066044
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "zEntPickup_SpawnNRewards__FPUiUi5xVec3")

// func_8006608C
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "zEntPickup_RewardPostSetup__Fv")

// func_80066128
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "__as__9zLODTableFRC9zLODTable")

// func_8006616C
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "xVec3DistFast__FPC5xVec3PC5xVec3")

// func_800661C4
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "xMat3x3MulRotC__FP7xMat3x3P7xMat3x3ffff")
