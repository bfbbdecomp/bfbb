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

xGoal* xListItem<xGoal>::Next()
{
    return this->next;
}

void xListItem<xGoal>::Insert(xGoal* list)
{
    this->prev = list;
    this->next = list->next;
    if (list->next != NULL)
    {
        (xListItem<xGoal>*)list->next->prev = this;
    }
    (xListItem<xGoal>*)list->next = this;
}

#if 1

// func_8010E9FC
#pragma GLOBAL_ASM("asm/Core/x/xBehaviour.s", "RemHead__17xListItem_esc__0_5xGoal_esc__1_FPP5xGoal")

#else

// Two instructions near the end are reversed.
xGoal* xListItem<xGoal>::RemHead(xGoal** listhead)
{
    xGoal* tmp;
    xGoal* next;
    if (*listhead == NULL)
    {
        tmp = NULL;
    }
    else
    {
        tmp = ((xListItem<xGoal>*)*listhead)->Head();
        if (tmp == NULL)
        {
            *listhead = NULL;
        }
        else
        {
            next = tmp->Next();
            *listhead = next;
            tmp->Remove();
        }
    }
    return tmp;
}

#endif

#if 1

// func_8010EA6C
#pragma GLOBAL_ASM("asm/Core/x/xBehaviour.s", "Head__17xListItem_esc__0_5xGoal_esc__1_Fv")

#else

// Something wrong with the comparison it looks like.
xGoal* xListItem<xGoal>::Head()
{
    xGoal* curr = (xGoal*)this;
    if (curr == NULL)
    {
        return NULL;
    }
    xGoal* prev;
    do
    {
        prev = curr;
        curr = prev->prev;
    } while (curr != NULL);
    return prev;
}

#endif

#if 1

// func_8010EA94
#pragma GLOBAL_ASM("asm/Core/x/xBehaviour.s", "GetOwner__5xGoalCFv")

#else

// The instructions are in reverse for some reason.
xBase* xGoal::GetOwner()
{
    return (xBase*)this->psyche->GetClient();
}

#endif

void xGoal::Clear()
{
    this->stat = GOAL_STAT_UNKNOWN;
}

int32 xGoal::PreCalc(float32 dt, void* updCtxt)
{
    return this->fun_precalc ? (this->fun_precalc)(this, this->cbdata, dt, updCtxt) : NULL;
}

int32 xGoal::EvalRules(en_trantype* trantype, float32 dt, void* updCtxt)
{
    return this->fun_chkRule ? (this->fun_chkRule)(this, this->cbdata, trantype, dt, updCtxt) :
                               NULL;
}

int32 xGoal::Process(en_trantype* trantype, float dt, void* ctxt, xScene* scene)
{
    return this->fun_process ? (this->fun_process)(this, this->cbdata, trantype, dt, ctxt) : NULL;
}

xPsyche* xPsyche::GetClient()
{
    return *(xPsyche**)this;
}