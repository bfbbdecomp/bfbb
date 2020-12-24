#ifndef XBEHAVEGOALSIMPLE_H
#define XBEHAVEGOALSIMPLE_H

#include <xBehaviour.h>
#include <xBase.h>

typedef struct xGoalGeneric;

struct xGoalGeneric : xGoal
{
	int32(*fun_enter)(xGoal*, void*, float32, void*);
	int32(*fun_exit)(xGoal*, void*, float32, void*);
	int32(*fun_suspend)(xGoal*, void*, float32, void*);
	int32(*fun_resume)(xGoal*, void*, float32, void*);
	int32(*fun_sysevent)(xGoal*, void*, xBase*, xBase*, uint32, float32*, xBase*, int32*);
	void* usrData;

	int8* Name();
	void Clear();
	int32 SysEvent(xBase* from, xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget, int32* handled);
	int32 Resume(float32 dt, void* updCtxt);
	int32 Suspend(float32 dt, void* updCtxt);
	int32 Exit(float32 dt, void* updCtxt);
	int32 Enter(float32 dt, void* updCtxt);
};

void Clear();
void Clear();

#endif