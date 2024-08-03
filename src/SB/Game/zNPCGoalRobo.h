#ifndef ZNPCGOALROBO_H
#define ZNPCGOALROBO_H

#include "zNPCGoalCommon.h"
#include "zNPCGoalStd.h"
class zNPCGoalNotice : public zNPCGoalPushAnim
{
public:
    zNPCGoalNotice(S32);
};

void ROBO_PrepRoboCop();
xFactoryInst* GOALCreate_Robotic(S32 who, RyzMemGrow* grow, void*);

#endif
