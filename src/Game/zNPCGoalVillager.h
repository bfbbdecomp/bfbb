#ifndef ZNPCGOALVILLAGER_H
#define ZNPCGOALVILLAGER_H

#include "zNPCGoalCommon.h"

#define NPC_GOAL_ID_CHEER NPC_GOAL_ID('S', 8)
#define NPC_GOAL_ID_HURT NPC_GOAL_ID('S', 9)
#define NPC_GOAL_ID_PLAYERNEAR NPC_GOAL_ID('S', 10)
#define NPC_GOAL_ID_TALK NPC_GOAL_ID('S', 11)
#define NPC_GOAL_ID_CHATTER NPC_GOAL_ID('S', 12)
#define NPC_GOAL_ID_SPEAK NPC_GOAL_ID('S', 13)
#define NPC_GOAL_ID_BALLOON NPC_GOAL_ID('S', 14)
#define NPC_GOAL_ID_BOYRIDE NPC_GOAL_ID('S', 15)
#define NPC_GOAL_ID_BOYFALL NPC_GOAL_ID('S', 16)
#define NPC_GOAL_ID_BOYWEEP NPC_GOAL_ID('S', 17)
#define NPC_GOAL_ID_BOYSWIM NPC_GOAL_ID('S', 18)

class zNPCGoalPlayerNear
{
public:
    void DoCheatPanHandle();
};

xFactoryInst* GOALCreate_Villager(int32 who, RyzMemGrow* grow, void*);

#endif