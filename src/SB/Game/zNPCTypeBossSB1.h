#ifndef ZNPCTYPEBOSSSB1_H
#define ZNPCTYPEBOSSSB1_H

#include "zNPCTypeBoss.h"
#include "zNPCGoalCommon.h"

#include "xFX.h"

struct zNPCB_SB1 : zNPCBoss
{
    xModelInstance* m_subModels[6];
    xModelTag m_leftArmTags[4];
    xModelTag m_rightArmTags[4];
    xModelTag m_feetTags[4];
    F32 m_tauntTimer;
    zEnt* m_armColl[2];
    zEnt* m_bodyColl;
    zEnt* m_armTgt[2];
    xFXRing* m_stompRing[16];
    U8 attacking;
    F32 attack_delay;

    zNPCB_SB1(S32 myType);
};

struct zNPCGoalBossSB1Idle : zNPCGoalCommon
{
    F32 timeInGoal;

    zNPCGoalBossSB1Idle(S32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

struct zNPCGoalBossSB1Taunt : zNPCGoalCommon
{
    F32 timeInGoal;

    zNPCGoalBossSB1Taunt(S32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

struct zNPCGoalBossSB1Stomp : zNPCGoalCommon
{
    F32 timeInGoal;

    zNPCGoalBossSB1Stomp(S32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

struct zNPCGoalBossSB1Smash : zNPCGoalCommon
{
    F32 timeInGoal;

    zNPCGoalBossSB1Smash(S32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

struct zNPCGoalBossSB1Deflate : zNPCGoalCommon
{
    F32 timeInGoal;
    RwV3d morphVertBuf[600];
    RwV3d* targetVec;
    RwV3d* modelVec;
    RpGeometry* modelGeom;
    S32 morphVertCount;
    F32 morphInvTime;

    zNPCGoalBossSB1Deflate(S32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

#endif
