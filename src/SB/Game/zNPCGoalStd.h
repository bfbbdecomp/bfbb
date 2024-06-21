#ifndef ZNPCGOALSTD_H
#define ZNPCGOALSTD_H

#include "zNPCGoalCommon.h"

struct zNPCGoalDead : zNPCGoalCommon
{
    int32 flg_deadinfo;
    uint8 old_moreFlags;

    zNPCGoalDead(int32 goalID);

    virtual int32 Enter(float32 dt, void* updCtxt);
    virtual int32 Exit(float32 dt, void* updCtxt);

    void DieQuietly();

protected:
    ~zNPCGoalDead();
};

xFactoryInst* GOALCreate_Standard(int32 who, RyzMemGrow* grow, void*);
void GOALDestroy_Goal(xFactoryInst* inst);

#endif