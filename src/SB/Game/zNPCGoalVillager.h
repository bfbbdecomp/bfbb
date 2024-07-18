#ifndef ZNPCGOALVILLAGER_H
#define ZNPCGOALVILLAGER_H

#include "zNPCGoalCommon.h"

class zNPCGoalPlayerNear : zNPCGoalCommon
{
public:
    void DoCheatPanHandle();
};

class zNPCGoalBalloon : zNPCGoalCommon
{
    virtual S32 Enter(F32 ft, void* updCtxt);
    virtual S32 Exit(F32 ft, void* updCtxt);
    virtual S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* scene);
    virtual S32 NPCMessage(NPCMsg* mail);
};

class zNPCGoalBoyRide : zNPCGoalCommon
{
    virtual S32 Enter(F32 ft, void* updCtxt);
    virtual S32 Exit(F32 ft, void* updCtxt);
    virtual S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* scene);
    virtual S32 NPCMessage(NPCMsg* mail);
};

xFactoryInst* GOALCreate_Villager(S32 who, RyzMemGrow* grow, void*);

#endif
