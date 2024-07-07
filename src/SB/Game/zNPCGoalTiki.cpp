#include "zNPCGoalTiki.h"

#include "zNPCGoals.h"
#include "zNPCTypeTiki.h"
#include "zRumble.h"

#include "xEvent.h"
#include "zNPCTypes.h"

extern F32 _836_0;
extern F32 _837_3;
extern F32 _862_2;
extern F32 _863_1;

xFactoryInst* GOALCreate_Tiki(S32 who, RyzMemGrow* grow, void*)
{
    xGoal* goal;

    switch (who)
    {
    case NPC_GOAL_TIKIIDLE:
    {
        goal = new (who, grow) zNPCGoalTikiIdle(who);
        break;
    }
    case NPC_GOAL_TIKIPATROL:
    {
        goal = new (who, grow) zNPCGoalTikiPatrol(who);
        break;
    }
    case NPC_GOAL_TIKIHIDE:
    {
        goal = new (who, grow) zNPCGoalTikiHide(who);
        break;
    }
    case NPC_GOAL_TIKICOUNT:
    {
        goal = new (who, grow) zNPCGoalTikiCount(who);
        break;
    }
    case NPC_GOAL_TIKIDYING:
    {
        goal = new (who, grow) zNPCGoalTikiDying(who);
        break;
    }
    case NPC_GOAL_TIKIDEAD:
    {
        goal = new (who, grow) zNPCGoalTikiDead(who);
        break;
    }
    default:
    {
        goal = new (who, grow) zNPCGoalTikiIdle(who);
        break;
    }
    }

    return goal;
}

S32 zNPCGoalTikiIdle::Enter(F32, void*)
{
    zNPCTiki* tiki = (zNPCTiki*)GetOwner();

    if (tiki->SelfType() == NPC_TYPE_TIKI_THUNDER)
    {
        tmr_wait = _836_0;
    }
    else if (!tiki->nav_dest)
    {
        tmr_wait = _837_3;
    }
    else
    {
        tmr_wait = zMovePointGetDelay(tiki->nav_dest);
    }

    return 0;
}

S32 zNPCGoalTikiPatrol::Enter(F32, void*)
{
    zNPCTiki* tiki = (zNPCTiki*)GetOwner();

    xVec3Copy(&dest_pos, zMovePointGetPos(tiki->nav_dest));
    xVec3Sub(&vel, &dest_pos, &tiki->v1);
    xVec3Normalize(&vel, &vel);
    xVec3SMulBy(&vel, tiki->cfg_npc->spd_moveMax);

    return 0;
}

S32 zNPCGoalTikiHide::Enter(F32, void*)
{
    zNPCTiki* tiki = (zNPCTiki*)GetOwner();

    tiki->flg_vuln = 0;

    return 0;
}

S32 zNPCGoalTikiHide::Exit(F32, void*)
{
    zNPCTiki* tiki = (zNPCTiki*)GetOwner();

    tiki->flg_vuln = 0xFFFF0001;

    return 0;
}

S32 zNPCGoalTikiCount::Enter(F32, void*)
{
    zNPCTiki* tiki = (zNPCTiki*)GetOwner();

    tmr_count = _862_2;
    beingCarried = 0;

    tiki->t1 = _863_1;

    return 0;
}

S32 zNPCGoalTikiDying::Enter(F32, void*)
{
    zNPCTiki* tiki = (zNPCTiki*)GetOwner();

    tmr_dying = tiki->timeToLive;
    tiki->flg_vuln = 0;

    return 0;
}

S32 zNPCGoalTikiDying::Exit(F32, void*)
{
    zNPCTiki* tiki = (zNPCTiki*)GetOwner();

    zNPCTiki_ExplodeFX(tiki);
    zRumbleStart(SDR_Tiki, tiki);

    return 0;
}

S32 zNPCGoalTikiDead::Enter(F32, void*)
{
    zNPCTiki* tiki = (zNPCTiki*)GetOwner();

    tiki->tikiFlag &= ~0x300;
    tiki->tikiFlag |= 0x100;

    xEntHide(tiki);

    tiki->chkby = XENT_COLLTYPE_NONE;
    tiki->penby = XENT_COLLTYPE_NONE;

    tiki->GiveReward();

    zEntEvent(tiki->id, eEventDeath);

    return 0;
}

S32 zNPCGoalTikiDead::Exit(F32, void*)
{
    zNPCTiki* tiki = (zNPCTiki*)GetOwner();

    xEntShow(tiki);

    tiki->chkby = XENT_COLLTYPE_PLYR;
    tiki->penby = XENT_COLLTYPE_PLYR;
    tiki->flg_vuln = 0xFFFF0001;

    return 0;
}
