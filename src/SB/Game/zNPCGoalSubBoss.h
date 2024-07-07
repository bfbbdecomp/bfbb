#ifndef ZNPCGOALSUBBOSS_H
#define ZNPCGOALSUBBOSS_H

#include "zNPCGoalCommon.h"

struct zNPCGoalHere : zNPCGoalCommon
{
    zNPCGoalHere(S32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

xFactoryInst* GOALCreate_SubBoss(S32 who, RyzMemGrow* grow, void*);

#endif
