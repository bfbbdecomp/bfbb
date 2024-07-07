#include "zNPCGoalStd.h"

#include <types.h>

#include "xNPCBasic.h"

#if 0

#else
zNPCGoalCommon::zNPCGoalCommon(S32 goalID) : xGoal(goalID)
{
    this->flg_npcgauto |= ~0x8;
}
#endif

#if 0
WEAK xGoal::xGoal(S32 goalID)
{
    this->goalID = goalID;
    this->flg_able = 0;
    this->stat = GOAL_STAT_UNKNOWN;
}
#endif

U8 xNPCBasic::PhysicsFlags() const
{
    return 0;
}

U8 xNPCBasic::ColPenByFlags() const
{
    return 0;
}

U8 xNPCBasic::ColChkByFlags() const
{
    return 0;
}

U8 xNPCBasic::ColPenFlags() const
{
    return 0;
}

U8 xNPCBasic::ColChkFlags() const
{
    return 0;
}
