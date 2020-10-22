#include "zNPCGoalAmbient.h"

#include <types.h>

// GOALCreate_Ambient(int,RyzMemGrow*,void*)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalAmbient.s", "GOALCreate_Ambient__FiP10RyzMemGrowPv")

// zNPCGoalJellyBumped::MoveSwoosh(float)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalAmbient.s", "MoveSwoosh__19zNPCGoalJellyBumpedFf")

// zNPCGoalJellyBumped::PlayWithAnimSpd()
#pragma GLOBAL_ASM("asm/Game/zNPCGoalAmbient.s", "PlayWithAnimSpd__19zNPCGoalJellyBumpedFv")

// zNPCGoalJellyBumped::StreakPrep()
#pragma GLOBAL_ASM("asm/Game/zNPCGoalAmbient.s", "StreakPrep__19zNPCGoalJellyBumpedFv")

// zNPCGoalJellyBumped::StreakDone()
#pragma GLOBAL_ASM("asm/Game/zNPCGoalAmbient.s", "StreakDone__19zNPCGoalJellyBumpedFv")

// zNPCGoalJellyBumped::StreakUpdate()
#pragma GLOBAL_ASM("asm/Game/zNPCGoalAmbient.s", "StreakUpdate__19zNPCGoalJellyBumpedFv")

// zNPCGoalJellyBumped::ExtractAimDir(xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalAmbient.s", "ExtractAimDir__19zNPCGoalJellyBumpedFP5xVec3")

// zNPCGoalJellyBumped::CalcEndPoint(xVec3*,const xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalAmbient.s", "CalcEndPoint__19zNPCGoalJellyBumpedFP5xVec3PC5xVec3")

// zNPCGoalJellyAttack::ZapperStart()
#pragma GLOBAL_ASM("asm/Game/zNPCGoalAmbient.s", "ZapperStart__19zNPCGoalJellyAttackFv")

// zNPCGoalJellyAttack::ZapperStop()
#pragma GLOBAL_ASM("asm/Game/zNPCGoalAmbient.s", "ZapperStop__19zNPCGoalJellyAttackFv")

// zNPCGoalJellyAttack::ZapperUpdate()
#pragma GLOBAL_ASM("asm/Game/zNPCGoalAmbient.s", "ZapperUpdate__19zNPCGoalJellyAttackFv")

// zNPCGoalJellyBirth::BirthInfoSet(const xVec3*,float)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalAmbient.s", "BirthInfoSet__18zNPCGoalJellyBirthFPC5xVec3f")

// zNPCGoalJellyBirth::zNPCGoalJellyBirth(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalAmbient.s", "__ct__18zNPCGoalJellyBirthFi")

// zNPCGoalJellyAttack::zNPCGoalJellyAttack(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalAmbient.s", "__ct__19zNPCGoalJellyAttackFi")

// zNPCGoalJellyBumped::zNPCGoalJellyBumped(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalAmbient.s", "__ct__19zNPCGoalJellyBumpedFi")

// xMat3x3RMulVec(xVec3*,const xMat3x3*,const xVec3*)
namespace {
#pragma GLOBAL_ASM("asm/Game/zNPCGoalAmbient.s", "xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3")
}
