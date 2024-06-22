#include "iTime.h"
#include "iSystem.h"

#include <types.h>
#include <dolphin.h>

static iTime sStartupTime;
static float32 sGameTime;

void iTimeInit()
{
    sStartupTime = OSGetTime();
}

void iTimeExit()
{
}

iTime iTimeGet()
{
    return OSGetTime() - sStartupTime;
}

float32 iTimeDiffSec(iTime time)
{
    return (float32)time / (GET_BUS_FREQUENCY() / 4);
}

float32 iTimeDiffSec(iTime t0, iTime t1)
{
    return iTimeDiffSec(t1 - t0);
}

void iTimeGameAdvance(float32 elapsed)
{
    sGameTime += elapsed;
}

void iTimeSetGame(float32 time)
{
    sGameTime = time;
}

void iProfileClear(uint32 sceneID)
{
    // Redacted. :}
}

void iFuncProfileDump()
{
    // Redacted. :}
}

void iFuncProfileParse(char* elfPath, int32 profile)
{
    // Redacted. :}
}
