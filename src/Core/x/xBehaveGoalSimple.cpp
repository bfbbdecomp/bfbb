#include "xBehaveGoalSimple.h"

#include <types.h>

extern const char xBehaveGoalSimple_strings[];

void xGoalSimple_RegisterTypes(xFactory* fac)
{
    fac->RegItemType(0x47534d00, GOALCreate_Generic, GOALDestroy_Generic); // GSM 0
    fac->RegItemType(0x47534d01, GOALCreate_Generic, GOALDestroy_Generic); // GSM 1
}

#if 1

// func_8010EBF8
#pragma GLOBAL_ASM("asm/Core/x/xBehaveGoalSimple.s", "GOALCreate_Generic__FiP10RyzMemGrowPv")

#else

// WIP.
xFactoryInst* GOALCreate_Generic(int32 who, RyzMemGrow* growCtxt, void* dat)
{
    xGoalGeneric* goal = NULL;
    switch (who)
    {
    case 0x47534d00:
        goal = new RyzMemData break;
    case 0x47534d01:
        break;
    }
    xFactoryInst* ret = NULL;
    if (goal != NULL)
    {
        ret =
    }
}

#endif

void GOALDestroy_Generic(xFactoryInst* item)
{
    delete item;
}

int32 xGoalGeneric::Enter(float32 dt, void* updCtxt)
{
    if (this->fun_enter != NULL)
    {
        return this->fun_enter(this, this->usrData, dt, updCtxt);
    }
    else
    {
        return this->xGoal::Enter(dt, updCtxt);
    }
}

int32 xGoalGeneric::Exit(float32 dt, void* updCtxt)
{
    if (this->fun_exit != NULL)
    {
        return this->fun_exit(this, this->usrData, dt, updCtxt);
    }
    else
    {
        return this->xGoal::Exit(dt, updCtxt);
    }
}

int32 xGoalGeneric::Suspend(float32 dt, void* updCtxt)
{
    if (this->fun_suspend != NULL)
    {
        return this->fun_suspend(this, this->usrData, dt, updCtxt);
    }
    else
    {
        return this->xGoal::Suspend(dt, updCtxt);
    }
}

int32 xGoalGeneric::Resume(float32 dt, void* updCtxt)
{
    if (this->fun_resume != NULL)
    {
        return this->fun_resume(this, this->usrData, dt, updCtxt);
    }
    else
    {
        return this->xGoal::Resume(dt, updCtxt);
    }
}

int32 xGoalGeneric::SysEvent(xBase* from, xBase* to, uint32 toEvent, const float32* toParam,
                             xBase* toParamWidget, int32* handled)
{
    if (this->fun_sysevent != NULL)
    {
        return this->fun_sysevent(this, this->usrData, from, to, toEvent, toParam, toParamWidget,
                                  handled);
    }
    else
    {
        return this->xGoal::SysEvent(from, to, toEvent, toParam, toParamWidget, handled);
    }
}

// Once the vtables are properly defined, these "should" be correct.
#if 1

// func_8010EE3C
#pragma GLOBAL_ASM("asm/Core/x/xBehaveGoalSimple.s", "__ct__10xGoalEmptyFi")

// func_8010EE78
#pragma GLOBAL_ASM("asm/Core/x/xBehaveGoalSimple.s", "__ct__12xGoalGenericFi")

#else

xGoalEmpty::xGoalEmpty(int32 goalID) : xGoal(goalID)
{
}

xGoalGeneric::xGoalGeneric(int32 goalID) : xGoal(goalID)
{
}

#endif

const char* xGoalGeneric::Name()
{
    return &xBehaveGoalSimple_strings[0];
}

void xGoalGeneric::Clear()
{
}

const char* xGoalEmpty::Name()
{
    return &xBehaveGoalSimple_strings[0xd];
}

void xGoalEmpty::Clear()
{
}
