#ifndef ZNPCGOALCOMMON_H
#define ZNPCGOALCOMMON_H

#include "xBehaveMgr.h"
#include "xDynAsset.h"
#include "xEnt.h"
#include "xNPCBasic.h"
#include "zNPCTypeCommon.h"

struct zNPCGoalCommon : xGoal
{
    S32 flg_npcgauto; // 0x3c
    S32 flg_npcgable;
    U32 anid_played;
    S32 flg_info : 16; // 0x48
    S32 flg_user : 16; // 0x4a

    zNPCGoalCommon(S32 goalID) : xGoal(goalID)
    {
        flg_npcgauto |= ~(1 << 3);
    }

    U32 DoAutoAnim(en_NPC_GOAL_SPOT gspot, S32 forceRestart);
    U32 DoExplicitAnim(U32 anid, S32 forceRestart);

    const char* Name()
    {
        return NULL;
    }

    virtual void Clear()
    {
        this->flg_info = 0;
        xGoal::Clear();
    }

    virtual S32 Enter(F32 dt, void* updCtxt);
    virtual S32 Resume(F32, void* updCtxt);
    virtual S32 PreCalc(F32 dt, void* updCtxt);

    virtual S32 NPCMessage(NPCMsg* mail)
    {
        return 0;
    }

    virtual U8 CollReview(void*)
    {
        return 0;
    }

protected:
    ~zNPCGoalCommon();
};

#endif
