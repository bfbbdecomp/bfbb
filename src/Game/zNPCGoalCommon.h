#ifndef ZNPCGOALCOMMON_H
#define ZNPCGOALCOMMON_H

#include "../Core/x/xBehaveMgr.h"
#include "../Core/x/xDynAsset.h"
#include "../Core/x/xEnt.h"
#include "../Core/x/xNPCBasic.h"
#include "zNPCTypeCommon.h"

struct zNPCGoalCommon : xGoal
{
    int32 flg_npcgauto;
    int32 flg_npcgable;
    uint32 anid_played;
    int32 flg_info : 16;
    int32 flg_user : 16;

    zNPCGoalCommon(int32 goalID);
    uint32 DoExplicitAnim(uint32 anid, int32 forceRestart);
    uint32 DoAutoAnim(en_NPC_GOAL_SPOT gspot, int32 forceRestart);
    int32 PreCalc(float32 dt, void* updCtxt);
    int32 Resume();
    int32 Enter(float32 dt, void* updCtxt);
    void Clear();
    int32 NPCMessage(NPCMsg* mail);
    uint8 CollReview();
    ~zNPCGoalCommon();
};

#endif