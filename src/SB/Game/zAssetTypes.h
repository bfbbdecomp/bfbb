#ifndef ZASSETTYPES_H
#define ZASSETTYPES_H

#include <types.h>
#include <rwcore.h>
#include <rpworld.h>
#include "xSnd.h"

#include "xJSP.h"

struct RwMemory
{
    U8* start;
    U32 length;
};

void FootstepHackSceneEnter();
void jsp_shadow_hack(xJSPHeader* param_1);

U32 xSndPlay3D(U32 id, F32 vol, F32 pitch, U32 priority, U32 flags, xEnt* pos, F32 radius,
    sound_category category, F32 delay);

#endif
