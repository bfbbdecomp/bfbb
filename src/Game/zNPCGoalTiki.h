#ifndef ZNPCGOALTIKI_H
#define ZNPCGOALTIKI_H

#include "zNPCGoalCommon.h"

#include <types.h>

struct zNPCGoalTikiDead : zNPCGoalCommon
{
    float32 tmr_resurrect;

    int32 Exit(void* dat);
    void Clear();
};

struct zNPCGoalTikiDying : zNPCGoalCommon
{
    float32 tmr_dying;

    void Clear();
};

struct zNPCGoalTikiCount : zNPCGoalCommon
{
    float32 tmr_count;
    int32 beingCarried;

    void Clear();
};

struct zNPCGoalTikiHide : zNPCGoalCommon
{
    void Clear();
};

struct zNPCGoalTikiPatrol : zNPCGoalCommon
{
    xVec3 dest_pos;
    xVec3 vel;

    int32 Enter(void* dat);
    void Clear();
};

struct zNPCGoalTikiIdle : zNPCGoalCommon
{
    float32 tmr_wait;

    zNPCGoalTikiIdle(int32 goalID);
    void Clear();
};

xFactoryInst* GOALCreate_Tiki(int32 who, RyzMemGrow* grow, void* dat);

#endif