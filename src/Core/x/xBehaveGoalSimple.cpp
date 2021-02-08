#include "xBehaveGoalSimple.h"

void xGoalSimple_RegisterTypes(xFactory* fac)
{
    fac->RegItemType('GSM\x00', GOALCreate_Generic, GOALDestroy_Generic);
    fac->RegItemType('GSM\x01', GOALCreate_Generic, GOALDestroy_Generic);
}

xFactoryInst* GOALCreate_Generic(int32 who, RyzMemGrow* growCtxt, void*)
{
    xGoal* goal = NULL;

    switch (who)
    {
    case 'GSM\x00':
    {
        goal = new (who, growCtxt) xGoalGeneric(who);
        break;
    }
    case 'GSM\x01':
    {
        goal = new (who, growCtxt) xGoalEmpty(who);
        break;
    }
    }

    return goal;
}

void GOALDestroy_Generic(xFactoryInst* item)
{
    delete item;
}

int32 xGoalGeneric::Enter(float32 dt, void* updCtxt)
{
    if (this->fun_enter)
    {
        return this->fun_enter(this, this->usrData, dt, updCtxt);
    }

    return xGoal::Enter(dt, updCtxt);
}

int32 xGoalGeneric::Exit(float32 dt, void* updCtxt)
{
    if (this->fun_exit)
    {
        return this->fun_exit(this, this->usrData, dt, updCtxt);
    }

    return xGoal::Exit(dt, updCtxt);
}

int32 xGoalGeneric::Suspend(float32 dt, void* updCtxt)
{
    if (this->fun_suspend)
    {
        return this->fun_suspend(this, this->usrData, dt, updCtxt);
    }

    return xGoal::Suspend(dt, updCtxt);
}

int32 xGoalGeneric::Resume(float32 dt, void* updCtxt)
{
    if (this->fun_resume)
    {
        return this->fun_resume(this, this->usrData, dt, updCtxt);
    }

    return xGoal::Resume(dt, updCtxt);
}

int32 xGoalGeneric::SysEvent(xBase* from, xBase* to, uint32 toEvent, const float32* toParam,
                             xBase* toParamWidget, int32* handled)
{
    if (this->fun_sysevent)
    {
        return this->fun_sysevent(this, this->usrData, from, to, toEvent, toParam, toParamWidget,
                                  handled);
    }

    return xGoal::SysEvent(from, to, toEvent, toParam, toParamWidget, handled);
}