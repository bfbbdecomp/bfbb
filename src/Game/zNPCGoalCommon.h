#ifndef ZNPCGOALCOMMON_H
#define ZNPCGOALCOMMON_H

#include "../Core/x/xBehaveMgr.h"

enum en_NPC_GOAL_SPOT
{
    NPC_GSPOT_START = 0x20,
    NPC_GSPOT_RESUME,
    NPC_GSPOT_FINISH,
    NPC_GSPOT_STARTALT,
    NPC_GSPOT_ALTA,
    NPC_GSPOT_ALTB,
    NPC_GSPOT_PATROLPAUSE,
    NPC_GSPOT_NOMORE,
    NPC_GSPOT_FORCEINT = 0x7fffffff
};

struct zNPCGoalCommon : xGoal
{
    int32 flg_npcgauto;
    int32 flg_npcgable;
    uint32 anid_played;
    struct
    {
        int32 flg_info : 16;
        int32 flg_user : 16;
    };

    zNPCGoalCommon(int32 goalID);
    uint32 DoExplicitAnim(uint32 anid, int32 forceRestart);
    uint32 DoAutoAnim(en_NPC_GOAL_SPOT gspot, int32 forceRestart);
    int32 PreCalc(float32 dt, void* updCtxt);
    int32 Resume();
    int32 Enter();
    ~zNPCGoalCommon();
};

#endif