#ifndef ZNPCGOALSUBBOSS_H
#define ZNPCGOALSUBBOSS_H

#include "zNPCGoalCommon.h"

#define NPC_GOAL_ID_HERE NPC_GOAL_ID('M', 0)
#define NPC_GOAL_ID_KJIDLE NPC_GOAL_ID('M', 1)
#define NPC_GOAL_ID_KJBORED NPC_GOAL_ID('M', 2)
#define NPC_GOAL_ID_KJSPAWNKIDS NPC_GOAL_ID('M', 3)
#define NPC_GOAL_ID_KJTAUNT NPC_GOAL_ID('M', 4)
#define NPC_GOAL_ID_KJSHOCKGROUND NPC_GOAL_ID('M', 5)
#define NPC_GOAL_ID_KJDAMAGE NPC_GOAL_ID('M', 6)
#define NPC_GOAL_ID_KJDEATH NPC_GOAL_ID('M', 7)
#define NPC_GOAL_ID_PRAWNIDLE NPC_GOAL_ID('M', 8)
#define NPC_GOAL_ID_PRAWNBEAM NPC_GOAL_ID('M', 9)
#define NPC_GOAL_ID_PRAWNBOWL NPC_GOAL_ID('M', 10)
#define NPC_GOAL_ID_PRAWNDAMAGE NPC_GOAL_ID('M', 11)
#define NPC_GOAL_ID_PRAWNDEATH NPC_GOAL_ID('M', 12)

struct zNPCGoalHere : zNPCGoalCommon
{
    zNPCGoalHere(int32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

xFactoryInst* GOALCreate_SubBoss(int32 who, RyzMemGrow* grow, void*);

#endif