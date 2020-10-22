#include "zEntPickup.h"

#include <types.h>

// PickupFallPhysics(zEntPickup*,xScene*,float)
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "PickupFallPhysics__FP10zEntPickupP6xScenef")

// isRewardPickup(zEntPickup*)
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "isRewardPickup__FP10zEntPickup")

// zEntPickup_Startup()
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "zEntPickup_Startup__Fv")

// zEntPickupInit(zEntPickup*,xEntAsset*)
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "zEntPickupInit__FP10zEntPickupP9xEntAsset")

// zEntPickup_Setup(zEntPickup*)
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "zEntPickup_Setup__FP10zEntPickup")

// zEntPickup_Setup()
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "zEntPickup_Setup__Fv")

// zEntPickup_FlyToInterface(zEntPickup*,float)
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "zEntPickup_FlyToInterface__FP10zEntPickupf")

// zEntPickup_CheckAllPickupsAgainstPlayer(xScene*,float)
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "zEntPickup_CheckAllPickupsAgainstPlayer__FP6xScenef")

// zEntPickup_DoPickup(zEntPickup*)
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "zEntPickup_DoPickup__FP10zEntPickup")

// zEntPickup_GivePickup(zEntPickup*)
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "zEntPickup_GivePickup__FP10zEntPickup")

// collectPickup(zEntPickup*)
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "collectPickup__FP10zEntPickup")

// zEntPickup_GiveAllRewardsNow()
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "zEntPickup_GiveAllRewardsNow__Fv")

// zEntPickup_Reset(zEntPickup*)
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "zEntPickup_Reset__FP10zEntPickup")

// zEntPickup_Save(zEntPickup*,xSerial*)
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "zEntPickup_Save__FP10zEntPickupP7xSerial")

// zEntPickup_Load(zEntPickup*,xSerial*)
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "zEntPickup_Load__FP10zEntPickupP7xSerial")

// zEntPickup_FlushGrabbed()
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "zEntPickup_FlushGrabbed__Fv")

// zEntPickup_MakeDroppable(zEntPickup*,xVec3*,xBase*)
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "zEntPickup_MakeDroppable__FP10zEntPickupP5xVec3P5xBase")

// zEntPickup_Drop(zEntPickup*)
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "zEntPickup_Drop__FP10zEntPickup")

// ShowPickupFx(zEntPickup*)
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "ShowPickupFx__FP10zEntPickup")

// zEntPickup_UpdateFX(zEntPickup*,xScene*,float)
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "zEntPickup_UpdateFX__FP10zEntPickupP6xScenef")

// set_alpha_blend(xModelInstance*)
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "set_alpha_blend__FP14xModelInstance")

// zEntPickup_Render(zEntPickup*,unsigned int)
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "zEntPickup_Render__FP10zEntPickupUi")

// zEntPickup_RenderOne(xEnt*)
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "zEntPickup_RenderOne__FP4xEnt")

// zEntPickup_RenderList(zEntPickup*,unsigned int)
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "zEntPickup_RenderList__FP10zEntPickupUi")

// zEntPickup_UpdateFlyToInterface(zEntPickup*,unsigned int,float)
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "zEntPickup_UpdateFlyToInterface__FP10zEntPickupUif")

// rewardRequest(unsigned int,xVec3*,xVec3)
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "rewardRequest__FUiP5xVec35xVec3")

// zEntPickup_SceneEnter()
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "zEntPickup_SceneEnter__Fv")

// zEntPickup_SceneReset()
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "zEntPickup_SceneReset__Fv")

// zEntPickup_SceneUpdate(float)
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "zEntPickup_SceneUpdate__Ff")

// spawnNRewards(unsigned int*,unsigned int,xVec3*,xVec3)
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "spawnNRewards__FPUiUiP5xVec35xVec3")

// zEntPickup_SpawnNRewards(unsigned int*,unsigned int,xVec3*)
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "zEntPickup_SpawnNRewards__FPUiUiP5xVec3")

// zEntPickup_SpawnNRewards(unsigned int*,unsigned int,xVec3)
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "zEntPickup_SpawnNRewards__FPUiUi5xVec3")

// zEntPickup_RewardPostSetup()
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "zEntPickup_RewardPostSetup__Fv")

// zLODTable::operator =(const zLODTable&)
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "__as__9zLODTableFRC9zLODTable")

// xVec3DistFast(const xVec3*,const xVec3*)
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "xVec3DistFast__FPC5xVec3PC5xVec3")

// xMat3x3MulRotC(xMat3x3*,xMat3x3*,float,float,float,float)
#pragma GLOBAL_ASM("asm/Game/zEntPickup.s", "xMat3x3MulRotC__FP7xMat3x3P7xMat3x3ffff")
