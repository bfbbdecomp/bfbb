#ifndef XBEHAVEGOALSIMPLE_H
#define XBEHAVEGOALSIMPLE_H

#include "xFactory.h"
#include "xRMemData.h"
#include "xBehaviour.h"

struct xGoalEmpty : xGoal
{
    xGoalEmpty(S32 goalID) : xGoal(goalID)
    {
    }

    virtual const char* Name()
    {
        return "xGoalEmpty";
    }

    virtual void Clear()
    {
    }
};

struct xGoalGeneric : xGoal
{
    S32 (*fun_enter)(xGoal*, void*, F32, void*);
    S32 (*fun_exit)(xGoal*, void*, F32, void*);
    S32 (*fun_suspend)(xGoal*, void*, F32, void*);
    S32 (*fun_resume)(xGoal*, void*, F32, void*);
    S32 (*fun_sysevent)(xGoal*, void*, xBase*, xBase*, U32, const F32*, xBase*, S32*);
    void* usrData;

    xGoalGeneric(S32 goalID) : xGoal(goalID)
    {
    }

    virtual const char* Name()
    {
        return "xGoalGeneric";
    }

    virtual void Clear()
    {
    }

    virtual S32 Enter(F32 dt, void* updCtxt);
    virtual S32 Exit(F32 dt, void* updCtxt);
    virtual S32 Suspend(F32 dt, void* updCtxt);
    virtual S32 Resume(F32 dt, void* updCtxt);
    virtual S32 SysEvent(xBase* from, xBase* to, U32 toEvent, const F32* toParam,
                           xBase* toParamWidget, S32* handled);
};

void xGoalSimple_RegisterTypes(xFactory* fac);
xFactoryInst* GOALCreate_Generic(S32 who, RyzMemGrow* growCtxt, void* dat);
void GOALDestroy_Generic(xFactoryInst* item);

#endif
