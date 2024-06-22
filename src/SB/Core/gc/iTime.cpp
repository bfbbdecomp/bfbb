#include "iTime.h"

#include <types.h>
#include <dolphin.h>

extern iTime sStartupTime;
extern float32 sGameTime;
extern float32 lbl_803CE1D8;

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

#if 0
// I can't seem to figure out the float operations going on here. It looks the setup is fairly right though?
float32 iTimeDiffSec(iTime time)
{
    return (float32)time / (176 - lbl_803CE1D8);
}

#endif

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
