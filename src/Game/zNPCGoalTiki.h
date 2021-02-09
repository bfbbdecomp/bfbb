#ifndef ZNPCGOALTIKI_H
#define ZNPCGOALTIKI_H

#include "zNPCGoalCommon.h"

struct zNPCGoalTikiIdle : zNPCGoalCommon
{
    float32 tmr_wait;

    zNPCGoalTikiIdle(int32 goalID) : zNPCGoalCommon(goalID)
    {
    }

    virtual void Clear()
    {
    }

    virtual int32 Enter(float32, void*);
};

struct zNPCGoalTikiPatrol : zNPCGoalCommon
{
    xVec3 dest_pos;
    xVec3 vel;

    zNPCGoalTikiPatrol(int32 goalID) : zNPCGoalCommon(goalID)
    {
    }

    virtual void Clear()
    {
    }

    virtual int32 Enter(float32, void*);
};

struct zNPCGoalTikiHide : zNPCGoalCommon
{
    zNPCGoalTikiHide(int32 goalID) : zNPCGoalCommon(goalID)
    {
    }

    virtual void Clear()
    {
    }

    virtual int32 Enter(float32, void*);
    virtual int32 Exit(float32, void*);
};

struct zNPCGoalTikiCount : zNPCGoalCommon
{
    float32 tmr_count;
    int32 beingCarried;

    zNPCGoalTikiCount(int32 goalID) : zNPCGoalCommon(goalID)
    {
    }

    virtual void Clear()
    {
    }

    virtual int32 Enter(float32, void*);
};

struct zNPCGoalTikiDying : zNPCGoalCommon
{
    float32 tmr_dying;

    zNPCGoalTikiDying(int32 goalID) : zNPCGoalCommon(goalID)
    {
    }

    virtual void Clear()
    {
    }

    virtual int32 Enter(float32, void*);
    virtual int32 Exit(float32, void*);
};

struct zNPCGoalTikiDead : zNPCGoalCommon
{
    float32 tmr_resurrect;

    zNPCGoalTikiDead(int32 goalID) : zNPCGoalCommon(goalID)
    {
    }

    virtual void Clear()
    {
    }

    virtual int32 Enter(float32, void*);
    virtual int32 Exit(float32, void*);
};

xFactoryInst* GOALCreate_Tiki(int32 who, RyzMemGrow* grow, void* dat);

#endif