#ifndef ZNPCTYPEBOSSSB1_H
#define ZNPCTYPEBOSSSB1_H

#include "zNPCTypeBoss.h"
#include "zNPCGoalCommon.h"

#include "xFX.h"

struct zNPCB_SB1 : zNPCBoss
{
    xModelInstance* m_subModels[6]; // 0x2b4
    xModelTag m_leftArmTags[4]; // 0x2CC
    xModelTag m_rightArmTags[4]; // 0x34C
    xModelTag m_feetTags[4]; // 0x3CC
    F32 m_tauntTimer; // 0x44C
    zEnt* m_armColl[2]; // 0x450
    zEnt* m_bodyColl; // 0x458
    zEnt* m_armTgt[2]; // 0x45C
    xFXRing* m_stompRing[16]; // 0x464
    U8 attacking; // 0x4A4
    F32 attack_delay; // 0x4A8

    zNPCB_SB1(S32 myType);
    void Init(xEntAsset*);
    void Reset();
    void NewTime(xScene* xscn, F32 dt);
    F32 AttackTimeLeft();
    void HoldUpDude();
    void ThanksImDone();
};

struct zNPCGoalBossSB1Idle : zNPCGoalCommon
{
    F32 timeInGoal;

    zNPCGoalBossSB1Idle(S32 goalID) : zNPCGoalCommon(goalID)
    {
    }

    S32 Enter(F32 dt, void* updCtxt);
    S32 Process(en_trantype* trantype, float dt, void* ctxt, xScene* scene);
};

struct zNPCGoalBossSB1Taunt : zNPCGoalCommon
{
    F32 timeInGoal;

    zNPCGoalBossSB1Taunt(S32 goalID) : zNPCGoalCommon(goalID)
    {
    }

    S32 Enter(F32 dt, void* updCtxt);
    S32 Process(en_trantype* trantype, float dt, void* ctxt, xScene* scene);
};

struct zNPCGoalBossSB1Stomp : zNPCGoalCommon
{
    F32 timeInGoal;

    zNPCGoalBossSB1Stomp(S32 goalID) : zNPCGoalCommon(goalID)
    {
    }

    S32 Enter(F32 dt, void* updCtxt);
    S32 Process(en_trantype* trantype, float dt, void* ctxt, xScene* scene);
};

struct zNPCGoalBossSB1Smash : zNPCGoalCommon
{
    F32 timeInGoal;

    zNPCGoalBossSB1Smash(S32 goalID) : zNPCGoalCommon(goalID)
    {
    }

    S32 Enter(F32 dt, void* updCtxt);
};

struct zNPCGoalBossSB1Deflate : zNPCGoalCommon
{
    F32 timeInGoal; // 0x4C
    RwV3d morphVertBuf[600]; // 0x50
    RwV3d* targetVec; // 0x1C70
    RwV3d* modelVec; // 0x1C74
    RpGeometry* modelGeom; // 0x1C78
    S32 morphVertCount; // 0x1C7C
    F32 morphInvTime; // 0x1C80

    zNPCGoalBossSB1Deflate(S32 goalID) : zNPCGoalCommon(goalID)
    {
    }

    S32 Enter(F32 dt, void* updCtxt);
};

#endif
