#ifndef XBEHAVEGOALSIMPLE_H
#define XBEHAVEGOALSIMPLE_H

#include "xFactory.h"
#include "xRMemData.h"
#include "xBehaviour.h"

struct xGoalEmpty : xGoal
{
    xGoalEmpty(int32 goalID) : xGoal(goalID)
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
    int32 (*fun_enter)(xGoal*, void*, float32, void*);
    int32 (*fun_exit)(xGoal*, void*, float32, void*);
    int32 (*fun_suspend)(xGoal*, void*, float32, void*);
    int32 (*fun_resume)(xGoal*, void*, float32, void*);
    int32 (*fun_sysevent)(xGoal*, void*, xBase*, xBase*, uint32, const float32*, xBase*, int32*);
    void* usrData;

    xGoalGeneric(int32 goalID) : xGoal(goalID)
    {
    }

    virtual const char* Name()
    {
        return "xGoalGeneric";
    }

    virtual void Clear()
    {
    }

    virtual int32 Enter(float32 dt, void* updCtxt);
    virtual int32 Exit(float32 dt, void* updCtxt);
    virtual int32 Suspend(float32 dt, void* updCtxt);
    virtual int32 Resume(float32 dt, void* updCtxt);
    virtual int32 SysEvent(xBase* from, xBase* to, uint32 toEvent, const float32* toParam,
                           xBase* toParamWidget, int32* handled);
};

void xGoalSimple_RegisterTypes(xFactory* fac);
xFactoryInst* GOALCreate_Generic(int32 who, RyzMemGrow* growCtxt, void* dat);
void GOALDestroy_Generic(xFactoryInst* item);

#endif