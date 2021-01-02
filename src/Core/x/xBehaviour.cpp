#include "xBehaviour.h"

#include <types.h>

void xGoal::SetPsyche(xPsyche* psyche)
{
    this->psyche = psyche;
}

char* xGoal::Name()
{
    return NULL;
}

void xGoal::SetState(en_GOALSTATE state)
{
    this->stat = state;
}

en_GOALSTATE xGoal::GetState()
{
    return this->stat;
}

// func_8010E9D0
#pragma GLOBAL_ASM("asm/Core/x/xBehaviour.s", "Next__17xListItem_esc__0_5xGoal_esc__1_Fv")

// func_8010E9D8
#pragma GLOBAL_ASM("asm/Core/x/xBehaviour.s", "Insert__17xListItem_esc__0_5xGoal_esc__1_FP5xGoal")

// func_8010E9FC
#pragma GLOBAL_ASM("asm/Core/x/xBehaviour.s", "RemHead__17xListItem_esc__0_5xGoal_esc__1_FPP5xGoal")

// func_8010EA6C
#pragma GLOBAL_ASM("asm/Core/x/xBehaviour.s", "Head__17xListItem_esc__0_5xGoal_esc__1_Fv")

#if 1

// func_8010EA94
#pragma GLOBAL_ASM("asm/Core/x/xBehaviour.s", "GetOwner__5xGoalCFv")

#else

// The instructions are in reverse for some reason.
xBase* xGoal::GetOwner()
{
    return this->psyche->GetClient();
}

#endif

void xGoal::Clear()
{
    this->stat = GOAL_STAT_UNKNOWN;
}

// func_8010EAC4
#pragma GLOBAL_ASM("asm/Core/x/xBehaviour.s", "PreCalc__5xGoalFfPv")

// func_8010EB04
#pragma GLOBAL_ASM("asm/Core/x/xBehaviour.s", "EvalRules__5xGoalFP11en_trantypefPv")

// func_8010EB48
#pragma GLOBAL_ASM("asm/Core/x/xBehaviour.s", "Process__5xGoalFP11en_trantypefPvP6xScene")

xPsyche* xPsyche::GetClient()
{
    return *(xPsyche**)this;
}