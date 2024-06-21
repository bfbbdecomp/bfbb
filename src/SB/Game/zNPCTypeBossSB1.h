#ifndef ZNPCTYPEBOSSSB1_H
#define ZNPCTYPEBOSSSB1_H

#include "zNPCTypeBoss.h"
#include "zNPCGoalCommon.h"

#include "../Core/x/xFX.h"

struct zNPCB_SB1 : zNPCBoss
{
    xModelInstance* m_subModels[6];
    xModelTag m_leftArmTags[4];
    xModelTag m_rightArmTags[4];
    xModelTag m_feetTags[4];
    float32 m_tauntTimer;
    zEnt* m_armColl[2];
    zEnt* m_bodyColl;
    zEnt* m_armTgt[2];
    xFXRing* m_stompRing[16];
    uint8 attacking;
    float32 attack_delay;

    zNPCB_SB1(int32 myType);
};

struct zNPCGoalBossSB1Idle : zNPCGoalCommon
{
    float32 timeInGoal;

    zNPCGoalBossSB1Idle(int32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

struct zNPCGoalBossSB1Taunt : zNPCGoalCommon
{
    float32 timeInGoal;

    zNPCGoalBossSB1Taunt(int32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

struct zNPCGoalBossSB1Stomp : zNPCGoalCommon
{
    float32 timeInGoal;

    zNPCGoalBossSB1Stomp(int32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

struct zNPCGoalBossSB1Smash : zNPCGoalCommon
{
    float32 timeInGoal;

    zNPCGoalBossSB1Smash(int32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

struct zNPCGoalBossSB1Deflate : zNPCGoalCommon
{
    float32 timeInGoal;
    RwV3d morphVertBuf[600];
    RwV3d* targetVec;
    RwV3d* modelVec;
    RpGeometry* modelGeom;
    int32 morphVertCount;
    float32 morphInvTime;

    zNPCGoalBossSB1Deflate(int32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

#endif