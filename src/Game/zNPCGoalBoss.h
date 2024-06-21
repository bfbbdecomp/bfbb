#ifndef ZNPCGOALBOSS_H
#define ZNPCGOALBOSS_H

#include "zNPCGoalCommon.h"

struct zNPCGoalExist : zNPCGoalCommon
{
    zNPCGoalExist(int32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

xFactoryInst* GOALCreate_Boss(int32 who, RyzMemGrow* grow, void*);

#endif