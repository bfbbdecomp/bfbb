#include "zShrapnel.h"

#include <types.h>

// zFrag_Alloc(zFragType)
#pragma GLOBAL_ASM("asm/Game/zShrapnel.s", "zFrag_Alloc__F9zFragType")

// zFrag_Free(zFrag*)
#pragma GLOBAL_ASM("asm/Game/zShrapnel.s", "zFrag_Free__FP5zFrag")

// zShrapnel_GameInit()
#pragma GLOBAL_ASM("asm/Game/zShrapnel.s", "zShrapnel_GameInit__Fv")

// zShrapnel_ProjectileSceneInit(zFragProjectileAsset*)
#pragma GLOBAL_ASM("asm/Game/zShrapnel.s", "zShrapnel_ProjectileSceneInit__FP20zFragProjectileAsset")

// zShrapnel_ParticleSceneInit(zFragParticleAsset*)
#pragma GLOBAL_ASM("asm/Game/zShrapnel.s", "zShrapnel_ParticleSceneInit__FP18zFragParticleAsset")

// zShrapnel_SetShrapnelAssetInitCB(zShrapnelAsset*)
#pragma GLOBAL_ASM("asm/Game/zShrapnel.s", "zShrapnel_SetShrapnelAssetInitCB__FP14zShrapnelAsset")

// zShrapnel_SceneInit(zScene*)
#pragma GLOBAL_ASM("asm/Game/zShrapnel.s", "zShrapnel_SceneInit__FP6zScene")

// zShrapnel_Update(float)
#pragma GLOBAL_ASM("asm/Game/zShrapnel.s", "zShrapnel_Update__Ff")

// zShrapnel_Reset()
#pragma GLOBAL_ASM("asm/Game/zShrapnel.s", "zShrapnel_Reset__Fv")

// zShrapnel_Render()
#pragma GLOBAL_ASM("asm/Game/zShrapnel.s", "zShrapnel_Render__Fv")

// zShrapnel_DefaultInit(zShrapnelAsset*,xModelInstance*,xVec3*,void (*)(zFrag*, zFragAsset*))
#pragma GLOBAL_ASM("asm/Game/zShrapnel.s", "zShrapnel_DefaultInit__FP14zShrapnelAssetP14xModelInstanceP5xVec3PFP5zFragP10zFragAsset_v")

// zShrapnel_CinematicInit(zShrapnelAsset*,RpAtomic*,RwMatrixTag*,xVec3*,void (*)(zFrag*, zFragAsset*))
#pragma GLOBAL_ASM("asm/Game/zShrapnel.s", "zShrapnel_CinematicInit__FP14zShrapnelAssetP8RpAtomicP11RwMatrixTagP5xVec3PFP5zFragP10zFragAsset_v")

// zFragLoc_Setup(zFragLocation*,xModelInstance*)
#pragma GLOBAL_ASM("asm/Game/zShrapnel.s", "zFragLoc_Setup__FP13zFragLocationP14xModelInstance")

// zFragLoc_InitMat(zFragLocation*,xMat4x3*,xModelInstance*)
#pragma GLOBAL_ASM("asm/Game/zShrapnel.s", "zFragLoc_InitMat__FP13zFragLocationP7xMat4x3P14xModelInstance")

// zFragLoc_InitVec(zFragLocation*,xVec3*,xModelInstance*)
#pragma GLOBAL_ASM("asm/Game/zShrapnel.s", "zFragLoc_InitVec__FP13zFragLocationP5xVec3P14xModelInstance")

// zFragLoc_InitDir(zFragLocation*,xVec3*,xModelInstance*)
#pragma GLOBAL_ASM("asm/Game/zShrapnel.s", "zFragLoc_InitDir__FP13zFragLocationP5xVec3P14xModelInstance")

// zFrag_DefaultInit(zFrag*,zFragAsset*)
#pragma GLOBAL_ASM("asm/Game/zShrapnel.s", "zFrag_DefaultInit__FP5zFragP10zFragAsset")

// zFrag_ParticleManager(float)
#pragma GLOBAL_ASM("asm/Game/zShrapnel.s", "zFrag_ParticleManager__Ff")

// zFrag_ProjectileCollData(zFrag*)
#pragma GLOBAL_ASM("asm/Game/zShrapnel.s", "zFrag_ProjectileCollData__FP5zFrag")

// zFrag_ProjectileSetupPath(zFrag*,zFragProjectileAsset*)
#pragma GLOBAL_ASM("asm/Game/zShrapnel.s", "zFrag_ProjectileSetupPath__FP5zFragP20zFragProjectileAsset")

// zFrag_DeleteProjectile(zFrag*)
#pragma GLOBAL_ASM("asm/Game/zShrapnel.s", "zFrag_DeleteProjectile__FP5zFrag")

// zFrag_ProjectileManager(float)
#pragma GLOBAL_ASM("asm/Game/zShrapnel.s", "zFrag_ProjectileManager__Ff")

// zFrag_LightningManager(float)
#pragma GLOBAL_ASM("asm/Game/zShrapnel.s", "zFrag_LightningManager__Ff")

// zFrag_SoundManager(float)
#pragma GLOBAL_ASM("asm/Game/zShrapnel.s", "zFrag_SoundManager__Ff")

// zFrag_ProjectileRenderer()
#pragma GLOBAL_ASM("asm/Game/zShrapnel.s", "zFrag_ProjectileRenderer__Fv")

// xMat3x3RMulVec(xVec3*,const xMat3x3*,const xVec3*)
namespace {
#pragma GLOBAL_ASM("asm/Game/zShrapnel.s", "xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3")
}
