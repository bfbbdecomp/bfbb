#ifndef ZNPCGOALBOSS_H
#define ZNPCGOALBOSS_H

#include "zNPCGoalCommon.h"

struct zNPCGoalExist : zNPCGoalCommon
{
    zNPCGoalExist(S32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

xFactoryInst* GOALCreate_Boss(S32 who, RyzMemGrow* grow, void*);

#endif
