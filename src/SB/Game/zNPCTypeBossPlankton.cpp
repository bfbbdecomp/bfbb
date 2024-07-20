#include "zNPCTypeBossPlankton.h"

#include <types.h>

void zNPCBPlankton::render_debug()
{
}

void zNPCBPlankton::update_animation(float)
{
}

S32 zNPCBPlankton::IsAlive()
{
    return 1;
}

U8 zNPCBPlankton::ColPenFlags() const
{
    return 0;
}

U8 zNPCBPlankton::ColChkFlags() const
{
    return 0;
}

U8 zNPCBPlankton::ColChkByFlags() const
{
    return 16;
}

S32 zNPCGoalBPlanktonBomb::Process(en_trantype*, float, void*, xScene*)
{
    return 0;
}

S32 zNPCGoalBPlanktonMissle::Process(en_trantype*, float, void*, xScene*)
{
    return 0;
}

S32 zNPCGoalBPlanktonWall::Process(en_trantype*, float, void*, xScene*)
{
    return 0;
}

S32 zNPCGoalBPlanktonMove::Process(en_trantype*, float, void*, xScene*)
{
    return 0;
}

S32 zNPCGoalBPlanktonTaunt::Process(en_trantype*, float, void*, xScene*)
{
    return 0;
}
