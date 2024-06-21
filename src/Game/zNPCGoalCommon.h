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

    uint32 DoAutoAnim(en_NPC_GOAL_SPOT gspot, int32 forceRestart);
    uint32 DoExplicitAnim(uint32 anid, int32 forceRestart);

    const char* Name()
    {
        return NULL;
    }

    virtual void Clear()
    {
        this->flg_info = 0;
        xGoal::Clear();
    }

    virtual int32 Enter(float32 dt, void* updCtxt);
    virtual int32 Resume(float32, void* updCtxt);
    virtual int32 PreCalc(float32 dt, void* updCtxt);

    virtual int32 NPCMessage(NPCMsg* mail)
    {
        return 0;
    }

    virtual uint8 CollReview(void*)
    {
        return 0;
    }

protected:
    ~zNPCGoalCommon();
};

#endif