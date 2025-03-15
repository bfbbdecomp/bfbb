#ifndef ZNPCGOALROBO_H
#define ZNPCGOALROBO_H

#include "zNPCGoalCommon.h"
#include "zNPCGoalStd.h"
#include "xColor.cpp"
class zNPCGoalNotice : public zNPCGoalPushAnim
{
public:
    zNPCGoalNotice(S32 id) : zNPCGoalPushAnim(id)
    {
        SetFlags(2);
    }
};

void ROBO_PrepRoboCop();
xFactoryInst* GOALCreate_Robotic(S32 who, RyzMemGrow* grow, void*);

#endif
