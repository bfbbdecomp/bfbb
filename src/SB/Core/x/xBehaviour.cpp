#include "xBehaviour.h"

xBase* xGoal::GetOwner() const
{
    return this->psyche->GetClient();
}

void xGoal::Clear()
{
    this->stat = GOAL_STAT_UNKNOWN;
}

S32 xGoal::PreCalc(F32 dt, void* updCtxt)
{
    if (this->fun_precalc)
    {
        return this->fun_precalc(this, this->cbdata, dt, updCtxt);
    }

    return 0;
}

S32 xGoal::EvalRules(en_trantype* trantype, F32 dt, void* updCtxt)
{
    if (this->fun_chkRule)
    {
        return this->fun_chkRule(this, this->cbdata, trantype, dt, updCtxt);
    }

    return 0;
}

S32 xGoal::Process(en_trantype* trantype, float dt, void* ctxt, xScene* scene)
{
    if (this->fun_process)
    {
        return this->fun_process(this, this->cbdata, trantype, dt, ctxt);
    }

    return 0;
}
