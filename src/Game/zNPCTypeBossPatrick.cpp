#include "zNPCTypeBossPatrick.h"

#include <types.h>

// ZNPC_AnimTable_BossPatrick()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "ZNPC_AnimTable_BossPatrick__Fv")

// UpdatePatrickBossCam(zNPCBPatrick*,float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "UpdatePatrickBossCam__FP12zNPCBPatrickf")

// GetBonePos(xVec3*,xMat4x3*,int,xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "GetBonePos__FP5xVec3P7xMat4x3iP5xVec3")

// Pat_ResetGlobalStuff()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "Pat_ResetGlobalStuff__Fv")

// zNPCBPatrick_AddBoundEntsToGrid(zScene*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "zNPCBPatrick_AddBoundEntsToGrid__FP6zScene")

// zNPCBPatrick_GameIsPaused(zScene*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "zNPCBPatrick_GameIsPaused__FP6zScene")

// zNPCBPatrick::RenderGlobs()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "RenderGlobs__12zNPCBPatrickFv")

// zNPCBPatrick::RenderFrozenPlayer()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "RenderFrozenPlayer__12zNPCBPatrickFv")

// zNPCBPatrick::nextGoal()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "nextGoal__12zNPCBPatrickFv")

// zNPCBPatrick::getNextFreeGlob()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "getNextFreeGlob__12zNPCBPatrickFv")

// zNPCBPatrick::playSplat(xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "playSplat__12zNPCBPatrickFP5xVec3")

// zNPCBPatrick::canSpawnChucks()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "canSpawnChucks__12zNPCBPatrickFv")

// zNPCBPatrick::gotoRound(int)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "gotoRound__12zNPCBPatrickFi")

// zNPCBPatrick::hiddenByCutscene()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "hiddenByCutscene__12zNPCBPatrickFv")

// zNPCBPatrick::ConveyorTimeLeft(zPlatform*,xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "ConveyorTimeLeft__12zNPCBPatrickFP9zPlatformP5xVec3")

// zNPCBPatrick::ParabolaHitsConveyors(xParabola*,xCollis*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "ParabolaHitsConveyors__12zNPCBPatrickFP9xParabolaP7xCollis")

// zNPCBPatrick::bossPatBoxCheckCollide(bossPatBox*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "bossPatBoxCheckCollide__12zNPCBPatrickFP10bossPatBox")

// zNPCBPatrick::bossPatBoxUpdate(bossPatBox*,float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "bossPatBoxUpdate__12zNPCBPatrickFP10bossPatBoxf")

// Pat_FaceTarget(zNPCBPatrick*,const xVec3*,float,float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "Pat_FaceTarget__FP12zNPCBPatrickPC5xVec3ff")

// StartFreezeBreath()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "StartFreezeBreath__Fv")

// EmitFreezeBreath(xVec3*,xVec3*,float,float,float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "EmitFreezeBreath__FP5xVec3P5xVec3fff")

// StopFreezeBreath()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "StopFreezeBreath__Fv")

// xMat3x3RMulVec(xVec3*,const xMat3x3*,const xVec3*)
namespace {
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3")
}

// xDebugAddTweak(const char*,unsigned int*,unsigned int,unsigned int,const tweak_callback*,void*,unsigned int)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossPatrick.s", "xDebugAddTweak__FPCcPUiUiUiPC14tweak_callbackPvUi")
