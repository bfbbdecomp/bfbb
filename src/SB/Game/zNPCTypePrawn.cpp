#include "zNPCTypePrawn.h"

#include <types.h>

void zNPCPrawn::render_debug()
{
}

void zNPCPrawn::update_particles(float)
{
}

void xDebugAddTweak(const char*, xVec3*, const tweak_callback*, void*, U32)
{
}

U8 zNPCPrawn::PhysicsFlags() const
{
    return 3;
}

U8 zNPCPrawn::ColPenByFlags() const
{
    return 16;
}

U8 zNPCPrawn::ColChkByFlags() const
{
    return 16;
}

U8 zNPCPrawn::ColPenFlags() const
{
    return 0;
}
