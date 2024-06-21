#ifndef ZNPCGOALSUBBOSS_H
#define ZNPCGOALSUBBOSS_H

#include "zNPCGoalCommon.h"

struct zNPCGoalHere : zNPCGoalCommon
{
    zNPCGoalHere(int32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

xFactoryInst* GOALCreate_SubBoss(int32 who, RyzMemGrow* grow, void*);

#endif