#include "xBehaviour.h"

WEAK void xGoal::SetPsyche(xPsyche* psyche)
{
    this->psyche = psyche;
}

WEAK const char* xGoal::Name()
{
    return NULL;
}

WEAK void xGoal::SetState(en_GOALSTATE state)
{
    this->stat = state;
}

WEAK en_GOALSTATE xGoal::GetState() const
{
    return this->stat;
}

WEAK xGoal* xListItem<xGoal>::Next()
{
    return this->next;
}

WEAK void xListItem<xGoal>::Insert(xGoal* list)
{
    xGoal* node = (xGoal*)this;

    node->prev = list;
    node->next = list->next;

    if (list->next)
    {
        list->next->prev = node;
    }

    list->next = node;
}

WEAK xGoal* xListItem<xGoal>::RemHead(xGoal** listhead)
{
    if (*listhead == NULL)
    {
        return NULL;
    }

    xGoal* oldhead = (*listhead)->Head();

    if (!oldhead)
    {
        *listhead = NULL;
    }
    else
    {
        *listhead = oldhead->Next();
        oldhead->Remove();
    }

    return oldhead;
}

WEAK xGoal* xListItem<xGoal>::Head()
{
    xGoal* node = (xGoal*)this;

    if (!node)
    {
        return node;
    }

    while (node->prev)
    {
        node = node->prev;
    }

    return node;
}

WEAK xBase* xGoal::GetOwner() const
{
    return this->psyche->GetClient();
}

void xGoal::Clear()
{
    this->stat = GOAL_STAT_UNKNOWN;
}

int32 xGoal::PreCalc(float32 dt, void* updCtxt)
{
    if (this->fun_precalc)
    {
        return this->fun_precalc(this, this->cbdata, dt, updCtxt);
    }

    return 0;
}

int32 xGoal::EvalRules(en_trantype* trantype, float32 dt, void* updCtxt)
{
    if (this->fun_chkRule)
    {
        return this->fun_chkRule(this, this->cbdata, trantype, dt, updCtxt);
    }

    return 0;
}

int32 xGoal::Process(en_trantype* trantype, float dt, void* ctxt, xScene* scene)
{
    if (this->fun_process)
    {
        return this->fun_process(this, this->cbdata, trantype, dt, ctxt);
    }

    return 0;
}