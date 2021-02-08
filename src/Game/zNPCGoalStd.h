#ifndef ZNPCGOALSTD_H
#define ZNPCGOALSTD_H

#include "zNPCGoalCommon.h"

#define NPC_GOAL_ID_IDLE NPC_GOAL_ID('N', 0)
#define NPC_GOAL_ID_WANDER NPC_GOAL_ID('N', 1)
#define NPC_GOAL_ID_PATROL NPC_GOAL_ID('N', 2)
#define NPC_GOAL_ID_FIDGET NPC_GOAL_ID('N', 3)
#define NPC_GOAL_ID_WAITING NPC_GOAL_ID('N', 4)
#define NPC_GOAL_ID_DEAD NPC_GOAL_ID('N', 5)
#define NPC_GOAL_ID_NOMANLAND NPC_GOAL_ID('N', 6)
#define NPC_GOAL_ID_LIMBO NPC_GOAL_ID('N', 7)
#define NPC_GOAL_ID_DEVANIMCYCLE NPC_GOAL_ID('X', 0)
#define NPC_GOAL_ID_DEVANIMSPIN NPC_GOAL_ID('X', 1)
#define NPC_GOAL_ID_DEVANIMHERO NPC_GOAL_ID('X', 2)

struct zNPCGoalDead : zNPCGoalCommon
{
    int32 flg_deadinfo;
    uint8 old_moreFlags;

    int32 Exit();
    int32 Enter(float32 dt, void* updCtxt);
    void DieQuietly();
};

xFactoryInst* GOALCreate_Standard(int32 who, RyzMemGrow* grow, void*);
void GOALDestroy_Goal(xFactoryInst* inst);

#endif