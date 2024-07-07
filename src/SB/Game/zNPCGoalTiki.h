#ifndef ZNPCGOALTIKI_H
#define ZNPCGOALTIKI_H

#include "zNPCGoalCommon.h"

struct zNPCGoalTikiIdle : zNPCGoalCommon
{
    F32 tmr_wait;

    zNPCGoalTikiIdle(S32 goalID) : zNPCGoalCommon(goalID)
    {
    }

    virtual void Clear()
    {
    }

    virtual S32 Enter(F32, void*);
};

struct zNPCGoalTikiPatrol : zNPCGoalCommon
{
    xVec3 dest_pos;
    xVec3 vel;

    zNPCGoalTikiPatrol(S32 goalID) : zNPCGoalCommon(goalID)
    {
    }

    virtual void Clear()
    {
    }

    virtual S32 Enter(F32, void*);
};

struct zNPCGoalTikiHide : zNPCGoalCommon
{
    zNPCGoalTikiHide(S32 goalID) : zNPCGoalCommon(goalID)
    {
    }

    virtual void Clear()
    {
    }

    virtual S32 Enter(F32, void*);
    virtual S32 Exit(F32, void*);
};

struct zNPCGoalTikiCount : zNPCGoalCommon
{
    F32 tmr_count;
    S32 beingCarried;

    zNPCGoalTikiCount(S32 goalID) : zNPCGoalCommon(goalID)
    {
    }

    virtual void Clear()
    {
    }

    virtual S32 Enter(F32, void*);
};

struct zNPCGoalTikiDying : zNPCGoalCommon
{
    F32 tmr_dying;

    zNPCGoalTikiDying(S32 goalID) : zNPCGoalCommon(goalID)
    {
    }

    virtual void Clear()
    {
    }

    virtual S32 Enter(F32, void*);
    virtual S32 Exit(F32, void*);
};

struct zNPCGoalTikiDead : zNPCGoalCommon
{
    F32 tmr_resurrect;

    zNPCGoalTikiDead(S32 goalID) : zNPCGoalCommon(goalID)
    {
    }

    virtual void Clear()
    {
    }

    virtual S32 Enter(F32, void*);
    virtual S32 Exit(F32, void*);
};

xFactoryInst* GOALCreate_Tiki(S32 who, RyzMemGrow* grow, void* dat);

#endif
