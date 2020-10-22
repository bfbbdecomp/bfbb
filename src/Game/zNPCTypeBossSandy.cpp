#include "zNPCTypeBossSandy.h"

#include <types.h>

// on_change_newsfish(const tweak_info&)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "on_change_newsfish__FRC10tweak_info")

// SpringRender(SandyLimbSpring*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "SpringRender__FP15SandyLimbSpring")

// zNPCBSandy_BossDamageEffect_Init()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "zNPCBSandy_BossDamageEffect_Init__Fv")

// zNPCBSandy_BossDamageEffect(xModelInstance*,unsigned int)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "zNPCBSandy_BossDamageEffect__FP14xModelInstanceUi")

// zNPCBSandy_BossDamageEffect_Update(float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "zNPCBSandy_BossDamageEffect_Update__Ff")

// zNPCBSandy::CalcMagnetizeInfo()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "CalcMagnetizeInfo__10zNPCBSandyFv")

// zNPCBSandy::InitFX()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "InitFX__10zNPCBSandyFv")

// zNPCBSandy::UpdateFX(float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "UpdateFX__10zNPCBSandyFf")

// UpdateSandyBossCam(zNPCBSandy*,float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "UpdateSandyBossCam__FP10zNPCBSandyf")

// GetBonePos(xVec3*,xMat4x3*,int,xVec3*)
namespace
{
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "GetBonePos__FP5xVec3P7xMat4x3iP5xVec3")
}

// MakeOBBFor(int,int,xEnt*,xMat4x3*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "MakeOBBFor__FiiP4xEntP7xMat4x3")

// zNPCBSandy::hiddenByCutscene()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "hiddenByCutscene__10zNPCBSandyFv")

// zNPCBSandy_AddBoundEntsToGrid(zScene*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "zNPCBSandy_AddBoundEntsToGrid__FP6zScene")

// zNPCBSandy_GameIsPaused(zScene*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "zNPCBSandy_GameIsPaused__FP6zScene")

// xBinaryCamera::add_tweaks(const char*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "add_tweaks__13xBinaryCameraFPCc")

// xBinaryCamera::set_targets(const xVec3&,const xVec3&,float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "set_targets__13xBinaryCameraFRC5xVec3RC5xVec3f")

// xMat3x3RMulVec(xVec3*,const xMat3x3*,const xVec3*)
namespace {
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3")
}

// zNPCGoalBossSandyLeap::Name()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "Name__21zNPCGoalBossSandyLeapFv")
