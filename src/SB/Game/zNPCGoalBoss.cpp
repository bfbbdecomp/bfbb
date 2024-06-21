#include "zNPCGoalBoss.h"

#include "zNPCGoals.h"
#include "zNPCTypeBossSandy.h"
#include "zNPCTypeBossSB1.h"
#include "zNPCTypeBossPatrick.h"

xFactoryInst* GOALCreate_Boss(int32 who, RyzMemGrow* grow, void*)
{
    xGoal* goal = NULL;

    switch (who)
    {
    case NPC_GOAL_EXIST:
    {
        goal = new (who, grow) zNPCGoalExist(who);
        break;
    }
    case NPC_GOAL_BOSSSANDYIDLE:
    {
        goal = new (who, grow) zNPCGoalBossSandyIdle(who);
        break;
    }
    case NPC_GOAL_BOSSSANDYTAUNT:
    {
        goal = new (who, grow) zNPCGoalBossSandyTaunt(who);
        break;
    }
    case NPC_GOAL_BOSSSANDYCHASE:
    {
        goal = new (who, grow) zNPCGoalBossSandyChase(who);
        break;
    }
    case NPC_GOAL_BOSSSANDYMELEE:
    {
        goal = new (who, grow) zNPCGoalBossSandyMelee(who);
        break;
    }
    case NPC_GOAL_BOSSSANDYNOHEAD:
    {
        goal = new (who, grow) zNPCGoalBossSandyNoHead(who);
        break;
    }
    case NPC_GOAL_BOSSSANDYELBOWDROP:
    {
        goal = new (who, grow) zNPCGoalBossSandyElbowDrop(who);
        break;
    }
    case NPC_GOAL_BOSSSANDYLEAP:
    {
        goal = new (who, grow) zNPCGoalBossSandyLeap(who);
        break;
    }
    case NPC_GOAL_BOSSSANDYSIT:
    {
        goal = new (who, grow) zNPCGoalBossSandySit(who);
        break;
    }
    case NPC_GOAL_BOSSSANDYGETUP:
    {
        goal = new (who, grow) zNPCGoalBossSandyGetUp(who);
        break;
    }
    case NPC_GOAL_BOSSSANDYRUNTOROPE:
    {
        goal = new (who, grow) zNPCGoalBossSandyRunToRope(who);
        break;
    }
    case NPC_GOAL_BOSSSANDYCLOTHESLINE:
    {
        goal = new (who, grow) zNPCGoalBossSandyClothesline(who);
        break;
    }
    case NPC_GOAL_BOSSSB1IDLE:
    {
        goal = new (who, grow) zNPCGoalBossSB1Idle(who);
        break;
    }
    case NPC_GOAL_BOSSSB1TAUNT:
    {
        goal = new (who, grow) zNPCGoalBossSB1Taunt(who);
        break;
    }
    case NPC_GOAL_BOSSSB1STOMP:
    {
        goal = new (who, grow) zNPCGoalBossSB1Stomp(who);
        break;
    }
    case NPC_GOAL_BOSSSB1SMASH:
    {
        goal = new (who, grow) zNPCGoalBossSB1Smash(who);
        break;
    }
    case NPC_GOAL_BOSSSB1DEFLATE:
    {
        goal = new (who, grow) zNPCGoalBossSB1Deflate(who);
        break;
    }
    case NPC_GOAL_BOSSPATIDLE:
    {
        goal = new (who, grow) zNPCGoalBossPatIdle(who);
        break;
    }
    case NPC_GOAL_BOSSPATTAUNT:
    {
        goal = new (who, grow) zNPCGoalBossPatTaunt(who);
        break;
    }
    case NPC_GOAL_BOSSPATHIT:
    {
        goal = new (who, grow) zNPCGoalBossPatHit(who);
        break;
    }
    case NPC_GOAL_BOSSPATSPIT:
    {
        goal = new (who, grow) zNPCGoalBossPatSpit(who);
        break;
    }
    case NPC_GOAL_BOSSPATRUN:
    {
        goal = new (who, grow) zNPCGoalBossPatRun(who);
        break;
    }
    case NPC_GOAL_BOSSPATSMACK:
    {
        goal = new (who, grow) zNPCGoalBossPatSmack(who);
        break;
    }
    case NPC_GOAL_BOSSPATFREEZE:
    {
        goal = new (who, grow) zNPCGoalBossPatFreeze(who);
        break;
    }
    case NPC_GOAL_BOSSPATSPAWN:
    {
        goal = new (who, grow) zNPCGoalBossPatSpawn(who);
        break;
    }
    case NPC_GOAL_BOSSPATSPIN:
    {
        goal = new (who, grow) zNPCGoalBossPatSpin(who);
        break;
    }
    case NPC_GOAL_BOSSPATFUDGE:
    {
        goal = new (who, grow) zNPCGoalBossPatFudge(who);
        break;
    }
    }

    return goal;
}