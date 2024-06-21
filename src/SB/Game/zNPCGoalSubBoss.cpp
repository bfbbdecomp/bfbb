#include "zNPCGoalSubBoss.h"

#include "zNPCGoals.h"
#include "zNPCTypeKingJelly.h"
#include "zNPCTypePrawn.h"

xFactoryInst* GOALCreate_SubBoss(int32 who, RyzMemGrow* grow, void*)
{
    xGoal* goal = NULL;

    switch (who)
    {
    case NPC_GOAL_HERE:
    {
        goal = new (who, grow) zNPCGoalHere(who);
        break;
    }
    case NPC_GOAL_KJIDLE:
    {
        goal = new (who, grow) zNPCGoalKJIdle(who);
        break;
    }
    case NPC_GOAL_KJBORED:
    {
        goal = new (who, grow) zNPCGoalKJBored(who);
        break;
    }
    case NPC_GOAL_KJSPAWNKIDS:
    {
        goal = new (who, grow) zNPCGoalKJSpawnKids(who);
        break;
    }
    case NPC_GOAL_KJTAUNT:
    {
        goal = new (who, grow) zNPCGoalKJTaunt(who);
        break;
    }
    case NPC_GOAL_KJSHOCKGROUND:
    {
        goal = new (who, grow) zNPCGoalKJShockGround(who);
        break;
    }
    case NPC_GOAL_KJDAMAGE:
    {
        goal = new (who, grow) zNPCGoalKJDamage(who);
        break;
    }
    case NPC_GOAL_KJDEATH:
    {
        goal = new (who, grow) zNPCGoalKJDeath(who);
        break;
    }
    case NPC_GOAL_PRAWNIDLE:
    {
        goal = new (who, grow) zNPCGoalPrawnIdle(who);
        break;
    }
    case NPC_GOAL_PRAWNBEAM:
    {
        goal = new (who, grow) zNPCGoalPrawnBeam(who);
        break;
    }
    case NPC_GOAL_PRAWNBOWL:
    {
        goal = new (who, grow) zNPCGoalPrawnBowl(who);
        break;
    }
    case NPC_GOAL_PRAWNDAMAGE:
    {
        goal = new (who, grow) zNPCGoalPrawnDamage(who);
        break;
    }
    case NPC_GOAL_PRAWNDEATH:
    {
        goal = new (who, grow) zNPCGoalPrawnDeath(who);
        break;
    }
    }

    return goal;
}