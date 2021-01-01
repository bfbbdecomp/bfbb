#ifndef ZNPCGOALSTD_H
#define ZNPCGOALSTD_H

#include "zNPCGoalCommon.h"

struct zNPCGoalDead : zNPCGoalCommon
{
    int32 flg_deadinfo;
    uint8 old_moreFlags;

    int32 Exit();
    int32 Enter(float32 dt, void* updCtxt);
    void DieQuietly();
};

#endif