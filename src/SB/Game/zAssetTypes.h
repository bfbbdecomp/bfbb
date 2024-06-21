#ifndef ZASSETTYPES_H
#define ZASSETTYPES_H

#include <types.h>
#include <rwcore.h>
#include <rpworld.h>

#include "xJSP.h"

struct RwMemory
{
    uint8* start;
    uint32 length;
};

void FootstepHackSceneEnter();
void jsp_shadow_hack(xJSPHeader* param_1);

#endif
