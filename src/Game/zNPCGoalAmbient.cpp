#include <types.h>

#include "../Core/x/xMath3.h"
#include "../Core/x/xVec3.h"

#include "zNPCGoalAmbient.h"

// func_8018FDC4
#pragma GLOBAL_ASM("asm/Game/zNPCGoalAmbient.s", "GOALCreate_Ambient__FiP10RyzMemGrowPv")

// func_8018FEA8
#pragma GLOBAL_ASM("asm/Game/zNPCGoalAmbient.s", "Enter__19zNPCGoalJellyBumpedFfPv")

// func_8018FF68
#pragma GLOBAL_ASM("asm/Game/zNPCGoalAmbient.s", "Exit__19zNPCGoalJellyBumpedFfPv")

// func_8018FFEC
#pragma GLOBAL_ASM("asm/Game/zNPCGoalAmbient.s",                                                   \
                   "Process__19zNPCGoalJellyBumpedFP11en_trantypefPvP6xScene")

// func_80190144
#pragma GLOBAL_ASM("asm/Game/zNPCGoalAmbient.s", "MoveSwoosh__19zNPCGoalJellyBumpedFf")

// func_80190220
#pragma GLOBAL_ASM("asm/Game/zNPCGoalAmbient.s", "PlayWithAnimSpd__19zNPCGoalJellyBumpedFv")

// func_801902D0
#pragma GLOBAL_ASM("asm/Game/zNPCGoalAmbient.s", "StreakPrep__19zNPCGoalJellyBumpedFv")

// func_8019032C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalAmbient.s", "StreakDone__19zNPCGoalJellyBumpedFv")

// func_80190368
#pragma GLOBAL_ASM("asm/Game/zNPCGoalAmbient.s", "StreakUpdate__19zNPCGoalJellyBumpedFv")

// func_801903D0
#pragma GLOBAL_ASM("asm/Game/zNPCGoalAmbient.s", "ExtractAimDir__19zNPCGoalJellyBumpedFP5xVec3")

// func_80190488
#pragma GLOBAL_ASM("asm/Game/zNPCGoalAmbient.s",                                                   \
                   "CalcEndPoint__19zNPCGoalJellyBumpedFP5xVec3PC5xVec3")

// func_801905C8
#pragma GLOBAL_ASM("asm/Game/zNPCGoalAmbient.s", "Enter__19zNPCGoalJellyAttackFfPv")

// func_8019064C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalAmbient.s", "Exit__19zNPCGoalJellyAttackFfPv")

// func_801906A0
#pragma GLOBAL_ASM("asm/Game/zNPCGoalAmbient.s",                                                   \
                   "Process__19zNPCGoalJellyAttackFP11en_trantypefPvP6xScene")

// func_80190714
#pragma GLOBAL_ASM("asm/Game/zNPCGoalAmbient.s", "ZapperStart__19zNPCGoalJellyAttackFv")

// func_8019082C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalAmbient.s", "ZapperStop__19zNPCGoalJellyAttackFv")

// func_8019089C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalAmbient.s", "ZapperUpdate__19zNPCGoalJellyAttackFv")

// func_80190BC8
#pragma GLOBAL_ASM("asm/Game/zNPCGoalAmbient.s", "Enter__18zNPCGoalJellyBirthFfPv")

// func_80190C9C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalAmbient.s",                                                   \
                   "Process__18zNPCGoalJellyBirthFP11en_trantypefPvP6xScene")

// func_80190DF8
#pragma GLOBAL_ASM("asm/Game/zNPCGoalAmbient.s", "BirthInfoSet__18zNPCGoalJellyBirthFPC5xVec3f")

// func_80190E44
#pragma GLOBAL_ASM("asm/Game/zNPCGoalAmbient.s", "__ct__18zNPCGoalJellyBirthFi")

// func_80190E8C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalAmbient.s", "__ct__19zNPCGoalJellyAttackFi")

// func_80190ED4
#pragma GLOBAL_ASM("asm/Game/zNPCGoalAmbient.s", "__ct__19zNPCGoalJellyBumpedFi")

void xMat3x3RMulVec(xVec3* o, const xMat3x3* m, const xVec3* v)
{
    float32 x = m->right.x * v->x + m->up.x * v->y + m->at.x * v->z;
    float32 y = m->right.y * v->x + m->up.y * v->y + m->at.y * v->z;
    float32 z = m->right.z * v->x + m->up.z * v->y + m->at.z * v->z;

    o->x = x;
    o->y = y;
    o->z = z;
}
