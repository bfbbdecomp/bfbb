#include "zNPCGoalTiki.h"

#include "zNPCTypeTiki.h"
#include "zRumble.h"

#include "../Core/x/xEvent.h"

extern float32 _836_0;
extern float32 _837_3;
extern float32 _862_2;
extern float32 _863_1;

xFactoryInst* GOALCreate_Tiki(int32 who, RyzMemGrow* grow, void*)
{
    xGoal* goal;

    switch (who)
    {
    case 'NGT0':
    {
        goal = new (who, grow) zNPCGoalTikiIdle(who);
        break;
    }
    case 'NGT1':
    {
        goal = new (who, grow) zNPCGoalTikiPatrol(who);
        break;
    }
    case 'NGT2':
    {
        goal = new (who, grow) zNPCGoalTikiHide(who);
        break;
    }
    case 'NGT3':
    {
        goal = new (who, grow) zNPCGoalTikiCount(who);
        break;
    }
    case 'NGT4':
    {
        goal = new (who, grow) zNPCGoalTikiDying(who);
        break;
    }
    case 'NGT5':
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

int32 zNPCGoalTikiIdle::Enter(float32, void*)
{
    zNPCTiki* tiki = (zNPCTiki*)GetOwner();

    if (tiki->SelfType() == 'NTT3')
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

int32 zNPCGoalTikiPatrol::Enter(float32, void*)
{
    zNPCTiki* tiki = (zNPCTiki*)GetOwner();

    xVec3Copy(&dest_pos, zMovePointGetPos(tiki->nav_dest));
    xVec3Sub(&vel, &dest_pos, &tiki->v1);
    xVec3Normalize(&vel, &vel);
    xVec3SMulBy(&vel, tiki->cfg_npc->spd_moveMax);

    return 0;
}

int32 zNPCGoalTikiHide::Enter(float32, void*)
{
    zNPCTiki* tiki = (zNPCTiki*)GetOwner();

    tiki->flg_vuln = 0;

    return 0;
}

int32 zNPCGoalTikiHide::Exit(float32, void*)
{
    zNPCTiki* tiki = (zNPCTiki*)GetOwner();

    tiki->flg_vuln = 0xFFFF0001;

    return 0;
}

int32 zNPCGoalTikiCount::Enter(float32, void*)
{
    zNPCTiki* tiki = (zNPCTiki*)GetOwner();

    tmr_count = _862_2;
    beingCarried = 0;

    tiki->t1 = _863_1;

    return 0;
}

int32 zNPCGoalTikiDying::Enter(float32, void*)
{
    zNPCTiki* tiki = (zNPCTiki*)GetOwner();

    tmr_dying = tiki->timeToLive;
    tiki->flg_vuln = 0;

    return 0;
}

int32 zNPCGoalTikiDying::Exit(float32, void*)
{
    zNPCTiki* tiki = (zNPCTiki*)GetOwner();

    zNPCTiki_ExplodeFX(tiki);
    zRumbleStart(SDR_Tiki, tiki);

    return 0;
}

int32 zNPCGoalTikiDead::Enter(float32, void*)
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

int32 zNPCGoalTikiDead::Exit(float32, void*)
{
    zNPCTiki* tiki = (zNPCTiki*)GetOwner();

    xEntShow(tiki);

    tiki->chkby = XENT_COLLTYPE_PLYR;
    tiki->penby = XENT_COLLTYPE_PLYR;
    tiki->flg_vuln = 0xFFFF0001;

    return 0;
}