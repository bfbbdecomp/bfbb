#include "zNPCGoalCommon.h"

#include <types.h>

#if 1

// func_800D5114
#pragma GLOBAL_ASM("asm/Game/zNPCGoalCommon.s", "Enter__14zNPCGoalCommonFfPv")

#else

// WIP.
int32 zNPCGoalCommon::Enter(float32 dt, void* updCtxt)
{
    int32 gid = GIDOfPending(((zNPCGoalCommon*)updCtxt)->psyche);
    if (((zNPCGoalCommon*)updCtxt)->flg_npcgauto)
    {
        int32 id = ((xGoal*)updCtxt)->GetID();
        if (gid == 0 || id == gid)
        {
            ((zNPCGoalCommon*)updCtxt)->DoAutoAnim(NPC_GSPOT_START, 0);
        }
    }
    gid = xGoal::Enter(dt, updCtxt);
    return gid;
}

#endif

// func_800D51AC
#pragma GLOBAL_ASM("asm/Game/zNPCGoalCommon.s", "Resume__14zNPCGoalCommonFfPv")

// func_800D524C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalCommon.s", "PreCalc__14zNPCGoalCommonFfPv")

// func_800D5318
#pragma GLOBAL_ASM("asm/Game/zNPCGoalCommon.s", "DoAutoAnim__14zNPCGoalCommonF16en_NPC_GOAL_SPOTi")

// func_800D5388
#pragma GLOBAL_ASM("asm/Game/zNPCGoalCommon.s", "DoExplicitAnim__14zNPCGoalCommonFUii")

// func_800D5404
#pragma GLOBAL_ASM("asm/Game/zNPCGoalCommon.s", "Enter__5xGoalFfPv")

// func_800D540C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalCommon.s", "GetID__5xGoalCFv")

// func_800D5414
#pragma GLOBAL_ASM("asm/Game/zNPCGoalCommon.s", "Resume__5xGoalFfPv")

// func_800D541C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalCommon.s", "Exit__5xGoalFfPv")

// func_800D5424
#pragma GLOBAL_ASM("asm/Game/zNPCGoalCommon.s", "Suspend__5xGoalFfPv")

// func_800D542C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalCommon.s", "SysEvent__5xGoalFP5xBaseP5xBaseUiPCfP5xBasePi")

// func_800D5434
#pragma GLOBAL_ASM("asm/Game/zNPCGoalCommon.s", "Notice__8xPSYNoteF10en_psynoteP5xGoalPv")

// func_800D5438
#pragma GLOBAL_ASM("asm/Game/zNPCGoalCommon.s", "Name__14zNPCGoalCommonFv")

void zNPCGoalCommon::Clear()
{
    this->flg_info = 0;
    this->xGoal::Clear();
}

int32 zNPCGoalCommon::NPCMessage(NPCMsg* mail)
{
    return 0;
}

uint8 zNPCGoalCommon::CollReview()
{
    return 0;
}

uint32 zNPCCommon::AnimPick(int32 animID, en_NPC_GOAL_SPOT gspot, xGoal* goal)
{
    return 0;
}