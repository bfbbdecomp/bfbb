#ifndef ZNPCGOALROBO_H
#define ZNPCGOALROBO_H

#include "zNPCGoalCommon.h"
#include "zNPCGoalStd.h"
struct zNPCGoalNotice : public zNPCGoalPushAnim
{
    zNPCGoalNotice(S32 id) : zNPCGoalPushAnim(id)
    {
        SetFlags(2);
    }

    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn);
};

void ROBO_PrepRoboCop();
xFactoryInst* GOALCreate_Robotic(S32 who, RyzMemGrow* grow, void*);

#endif
