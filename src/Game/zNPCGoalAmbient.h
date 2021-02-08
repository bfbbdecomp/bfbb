#ifndef ZNPCGOALAMBIENT_H
#define ZNPCGOALAMBIENT_H

#include "zNPCGoalCommon.h"

#define NPC_GOAL_ID_JELLYATTACK NPC_GOAL_ID('J', 0)
#define NPC_GOAL_ID_JELLYBUMPED NPC_GOAL_ID('J', 1)
#define NPC_GOAL_ID_JELLYBIRTH NPC_GOAL_ID('J', 2)

xFactoryInst* GOALCreate_Ambient(int32 who, RyzMemGrow* grow, void*);

#endif