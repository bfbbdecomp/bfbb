#include "zNPCGoalTiki.h"
#include "zNPCTypeTiki.h"

#include <types.h>

// func_800ECBFC
#pragma GLOBAL_ASM("asm/Game/zNPCGoalTiki.s", "GOALCreate_Tiki__FiP10RyzMemGrowPv")

// func_800ECD90
#pragma GLOBAL_ASM("asm/Game/zNPCGoalTiki.s", "Enter__16zNPCGoalTikiIdleFfPv")

// func_800ECE08
#pragma GLOBAL_ASM("asm/Game/zNPCGoalTiki.s", "Enter__18zNPCGoalTikiPatrolFfPv")

// func_800ECE84
#pragma GLOBAL_ASM("asm/Game/zNPCGoalTiki.s", "Enter__16zNPCGoalTikiHideFfPv")

// func_800ECEB0
#pragma GLOBAL_ASM("asm/Game/zNPCGoalTiki.s", "Exit__16zNPCGoalTikiHideFfPv")

// func_800ECEE0
#pragma GLOBAL_ASM("asm/Game/zNPCGoalTiki.s", "Enter__17zNPCGoalTikiCountFfPv")

// func_800ECF28
#pragma GLOBAL_ASM("asm/Game/zNPCGoalTiki.s", "Enter__17zNPCGoalTikiDyingFfPv")

// func_800ECF68
#pragma GLOBAL_ASM("asm/Game/zNPCGoalTiki.s", "Exit__17zNPCGoalTikiDyingFfPv")

// func_800ECFA8
#pragma GLOBAL_ASM("asm/Game/zNPCGoalTiki.s", "Enter__16zNPCGoalTikiDeadFfPv")

// func_800ED014
#pragma GLOBAL_ASM("asm/Game/zNPCGoalTiki.s", "Exit__16zNPCGoalTikiDeadFfPv")

// func_800ED060
#pragma GLOBAL_ASM("asm/Game/zNPCGoalTiki.s", "__ct__16zNPCGoalTikiDeadFi")

// func_800ED09C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalTiki.s", "__ct__17zNPCGoalTikiDyingFi")

// func_800ED0D8
#pragma GLOBAL_ASM("asm/Game/zNPCGoalTiki.s", "__ct__17zNPCGoalTikiCountFi")

// func_800ED114
#pragma GLOBAL_ASM("asm/Game/zNPCGoalTiki.s", "__ct__16zNPCGoalTikiHideFi")

// func_800ED150
#pragma GLOBAL_ASM("asm/Game/zNPCGoalTiki.s", "__ct__18zNPCGoalTikiPatrolFi")

#if 1

// func_800ED18C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalTiki.s", "__ct__16zNPCGoalTikiIdleFi")

#else

// Need to make it so compiler likes this.
zNPCGoalTikiIdle::zNPCGoalTikiIdle(int32 goalID) : zNPCGoalCommon(goalID)
{
    this->flg_npcgauto = -0x7fd6bfe4;
}

#endif

void zNPCGoalTikiDead::Clear()
{
}

void zNPCGoalTikiDying::Clear()
{
}

void zNPCGoalTikiCount::Clear()
{
}

void zNPCGoalTikiHide::Clear()
{
}

void zNPCGoalTikiPatrol::Clear()
{
}

void zNPCGoalTikiIdle::Clear()
{
}
