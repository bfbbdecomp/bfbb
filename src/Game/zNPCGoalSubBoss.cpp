#include "zNPCGoalSubBoss.h"

#include "zNPCTypeKingJelly.h"
#include "zNPCTypePrawn.h"

xFactoryInst* GOALCreate_SubBoss(int32 who, RyzMemGrow* grow, void*)
{
    xGoal* goal = NULL;

    switch (who)
    {
    case NPC_GOAL_ID_HERE:
    {
        goal = new (who, grow) zNPCGoalHere(who);
        break;
    }
    case NPC_GOAL_ID_KJIDLE:
    {
        goal = new (who, grow) zNPCGoalKJIdle(who);
        break;
    }
    case NPC_GOAL_ID_KJBORED:
    {
        goal = new (who, grow) zNPCGoalKJBored(who);
        break;
    }
    case NPC_GOAL_ID_KJSPAWNKIDS:
    {
        goal = new (who, grow) zNPCGoalKJSpawnKids(who);
        break;
    }
    case NPC_GOAL_ID_KJTAUNT:
    {
        goal = new (who, grow) zNPCGoalKJTaunt(who);
        break;
    }
    case NPC_GOAL_ID_KJSHOCKGROUND:
    {
        goal = new (who, grow) zNPCGoalKJShockGround(who);
        break;
    }
    case NPC_GOAL_ID_KJDAMAGE:
    {
        goal = new (who, grow) zNPCGoalKJDamage(who);
        break;
    }
    case NPC_GOAL_ID_KJDEATH:
    {
        goal = new (who, grow) zNPCGoalKJDeath(who);
        break;
    }
    case NPC_GOAL_ID_PRAWNIDLE:
    {
        goal = new (who, grow) zNPCGoalPrawnIdle(who);
        break;
    }
    case NPC_GOAL_ID_PRAWNBEAM:
    {
        goal = new (who, grow) zNPCGoalPrawnBeam(who);
        break;
    }
    case NPC_GOAL_ID_PRAWNBOWL:
    {
        goal = new (who, grow) zNPCGoalPrawnBowl(who);
        break;
    }
    case NPC_GOAL_ID_PRAWNDAMAGE:
    {
        goal = new (who, grow) zNPCGoalPrawnDamage(who);
        break;
    }
    case NPC_GOAL_ID_PRAWNDEATH:
    {
        goal = new (who, grow) zNPCGoalPrawnDeath(who);
        break;
    }
    }

    return goal;
}