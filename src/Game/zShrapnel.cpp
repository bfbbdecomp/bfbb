#include "zShrapnel.h"

#include <types.h>

// func_80127314
#pragma GLOBAL_ASM("asm/Game/zShrapnel.s", "zFrag_Alloc__F9zFragType")

// func_801273A8
#pragma GLOBAL_ASM("asm/Game/zShrapnel.s", "zFrag_Free__FP5zFrag")

// func_8012741C
#pragma GLOBAL_ASM("asm/Game/zShrapnel.s", "zShrapnel_GameInit__Fv")

// func_80127588
#pragma GLOBAL_ASM("asm/Game/zShrapnel.s", "zShrapnel_ProjectileSceneInit__FP20zFragProjectileAsset")

// func_801275F8
#pragma GLOBAL_ASM("asm/Game/zShrapnel.s", "zShrapnel_ParticleSceneInit__FP18zFragParticleAsset")

// func_80127634
#pragma GLOBAL_ASM("asm/Game/zShrapnel.s", "zShrapnel_SetShrapnelAssetInitCB__FP14zShrapnelAsset")

// func_80127684
#pragma GLOBAL_ASM("asm/Game/zShrapnel.s", "zShrapnel_SceneInit__FP6zScene")

// func_80127914
#pragma GLOBAL_ASM("asm/Game/zShrapnel.s", "zShrapnel_Update__Ff")

// func_80127A18
#pragma GLOBAL_ASM("asm/Game/zShrapnel.s", "zShrapnel_Reset__Fv")

// func_80127A88
#pragma GLOBAL_ASM("asm/Game/zShrapnel.s", "zShrapnel_Render__Fv")

// func_80127AC8
#pragma GLOBAL_ASM("asm/Game/zShrapnel.s", "zShrapnel_DefaultInit__FP14zShrapnelAssetP14xModelInstanceP5xVec3PFP5zFragP10zFragAsset_v")

// func_80127C98
#pragma GLOBAL_ASM("asm/Game/zShrapnel.s", "CinFragCB__FP5zFragP10zFragAsset")

// func_80127CF0
#pragma GLOBAL_ASM("asm/Game/zShrapnel.s", "zShrapnel_CinematicInit__FP14zShrapnelAssetP8RpAtomicP11RwMatrixTagP5xVec3PFP5zFragP10zFragAsset_v")

// func_80127E1C
#pragma GLOBAL_ASM("asm/Game/zShrapnel.s", "zFragLoc_Setup__FP13zFragLocationP14xModelInstance")

// func_80127E64
#pragma GLOBAL_ASM("asm/Game/zShrapnel.s", "zFragLoc_InitMat__FP13zFragLocationP7xMat4x3P14xModelInstance")

// func_80127F98
#pragma GLOBAL_ASM("asm/Game/zShrapnel.s", "zFragLoc_InitVec__FP13zFragLocationP5xVec3P14xModelInstance")

// func_801280D4
#pragma GLOBAL_ASM("asm/Game/zShrapnel.s", "zFragLoc_InitDir__FP13zFragLocationP5xVec3P14xModelInstance")

// func_801281D0
#pragma GLOBAL_ASM("asm/Game/zShrapnel.s", "zFrag_DefaultInit__FP5zFragP10zFragAsset")

// func_801283C4
#pragma GLOBAL_ASM("asm/Game/zShrapnel.s", "zFrag_DefaultParticleUpdate__FP5zFragf")

// func_80128474
#pragma GLOBAL_ASM("asm/Game/zShrapnel.s", "zFrag_ParticleManager__Ff")

// func_80128564
#pragma GLOBAL_ASM("asm/Game/zShrapnel.s", "zFrag_ProjectileCollData__FP5zFrag")

// func_80128614
#pragma GLOBAL_ASM("asm/Game/zShrapnel.s", "zFrag_ProjectileSetupPath__FP5zFragP20zFragProjectileAsset")

// func_8012891C
#pragma GLOBAL_ASM("asm/Game/zShrapnel.s", "zFrag_DefaultProjectileUpdate__FP5zFragf")

// func_801289EC
#pragma GLOBAL_ASM("asm/Game/zShrapnel.s", "zFrag_DeleteProjectile__FP5zFrag")

// func_80128A7C
#pragma GLOBAL_ASM("asm/Game/zShrapnel.s", "zFrag_ProjectileManager__Ff")

// func_80128E8C
#pragma GLOBAL_ASM("asm/Game/zShrapnel.s", "zFrag_DefaultLightningUpdate__FP5zFragf")

// func_80128F68
#pragma GLOBAL_ASM("asm/Game/zShrapnel.s", "zFrag_LightningManager__Ff")

// func_80129098
#pragma GLOBAL_ASM("asm/Game/zShrapnel.s", "zFrag_DefaultSoundUpdate__FP5zFragf")

// func_80129180
#pragma GLOBAL_ASM("asm/Game/zShrapnel.s", "zFrag_SoundManager__Ff")

// func_80129220
#pragma GLOBAL_ASM("asm/Game/zShrapnel.s", "zFrag_ProjectileRenderer__Fv")

// func_80129308
#pragma GLOBAL_ASM("asm/Game/zShrapnel.s", "zShrapnel_DestructObjInit__FP14zShrapnelAssetP14xModelInstanceP5xVec3PFP5zFragP10zFragAsset_v")

// func_801297A4
#pragma GLOBAL_ASM("asm/Game/zShrapnel.s", "zShrapnel_BB03FloorInit__FP14zShrapnelAssetP14xModelInstanceP5xVec3PFP5zFragP10zFragAsset_v")

// func_80129A7C
#pragma GLOBAL_ASM("asm/Game/zShrapnel.s", "BB03FloorChildCB__FP5zFragP10zFragAsset")

// func_80129AF8
#pragma GLOBAL_ASM("asm/Game/zShrapnel.s", "zShrapnel_BB03FloorChildInit__FP14zShrapnelAssetP14xModelInstanceP5xVec3PFP5zFragP10zFragAsset_v")

// func_80129B20
#pragma GLOBAL_ASM("asm/Game/zShrapnel.s", "zShrapnel_GlobalRobotInit__FP14zShrapnelAssetP14xModelInstanceP5xVec3PFP5zFragP10zFragAsset_v")

// func_80129D08
#pragma GLOBAL_ASM("asm/Game/zShrapnel.s", "zShrapnel_SpongebobInit__FP14zShrapnelAssetP14xModelInstanceP5xVec3PFP5zFragP10zFragAsset_v")

// func_80129F50
#pragma GLOBAL_ASM("asm/Game/zShrapnel.s", "xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3")
