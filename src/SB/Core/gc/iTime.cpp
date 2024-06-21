#include "iTime.h"

#include <types.h>
#include <dolphin.h>

extern iTime sStartupTime;
extern float32 sGameTime;
extern float32 lbl_803CE1D8;

int32 iGetMinute()
{
    OSTime ticks = OSGetTime();
    OSCalendarTime td;
    OSTicksToCalendarTime(ticks, &td);
    return td.min;
}

int32 iGetHour()
{
    OSTime ticks = OSGetTime();
    OSCalendarTime td;
    OSTicksToCalendarTime(ticks, &td);
    return td.hour;
}

int32 iGetDay()
{
    OSTime ticks = OSGetTime();
    OSCalendarTime td;
    OSTicksToCalendarTime(ticks, &td);
    return td.mday;
}

int32 iGetMonth()
{
    OSTime ticks = OSGetTime();
    OSCalendarTime td;
    OSTicksToCalendarTime(ticks, &td);
    return td.mon + 1;
}

#if 0
// Template for future use.
char* iGetCurrFormattedDate(char* input)
{
}

#endif

#if 0
// WIP.
char* iGetCurrFormattedTime(char* input)
{
    OSTime ticks = OSGetTime();
    OSCalendarTime td;
    OSTicksToCalendarTime(ticks, &td);
    bool pm = false;
    // STUFF.
    char* ret = input;
    // STUFF.
    if (pm)
    {
        ret[8] = 'P';
        ret[9] = '.';
        ret[10] = 'M';
        ret[11] = '.';
    }
    else
    {
        ret[8] = 'A';
        ret[9] = '.';
        ret[10] = 'M';
        ret[11] = '.';
    }
    ret[12] = '\0';
    return ret + (0xd - (int32)input);
}

#endif

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
