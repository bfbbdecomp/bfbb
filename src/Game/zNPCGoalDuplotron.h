#ifndef ZNPCGOALDUPLOTRON_H
#define ZNPCGOALDUPLOTRON_H

#include "zNPCGoalCommon.h"

#define NPC_GOAL_ID_DUPLOLIVE NPC_GOAL_ID('D', 0)
#define NPC_GOAL_ID_DUPLODEAD NPC_GOAL_ID('D', 1)

xFactoryInst* GOALCreate_Duplotron(int32 who, RyzMemGrow* grow, void*);

#endif