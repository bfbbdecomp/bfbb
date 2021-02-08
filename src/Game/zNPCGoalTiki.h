#ifndef ZNPCGOALTIKI_H
#define ZNPCGOALTIKI_H

#include "zNPCGoalCommon.h"

#define NPC_GOAL_ID_TIKIIDLE NPC_GOAL_ID('T', 0)
#define NPC_GOAL_ID_TIKIPATROL NPC_GOAL_ID('T', 1)
#define NPC_GOAL_ID_TIKIHIDE NPC_GOAL_ID('T', 2)
#define NPC_GOAL_ID_TIKICOUNT NPC_GOAL_ID('T', 3)
#define NPC_GOAL_ID_TIKIDYING NPC_GOAL_ID('T', 4)
#define NPC_GOAL_ID_TIKIDEAD NPC_GOAL_ID('T', 5)

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