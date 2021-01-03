#ifndef ITIME_H
#define ITIME_H

#include <types.h>

typedef int64 iTime;

int32 iGetMinute();
int32 iGetHour();
int32 iGetDay();
int32 iGetMonth();
char* iGetCurrFormattedDate(char* input);
char* iGetCurrFormattedTime(char* input);
void iTimeInit();
void iTimeExit();
iTime iTimeGet();
float32 iTimeDiffSec(iTime t0, iTime t1);
float32 iTimeDiffSec(iTime time);
void iTimeGameAdvance(float32 elapsed);
void iTimeSetGame(float32 time);
void iProfileClear(uint32 sceneID);
void iFuncProfileDump();
void iFuncProfileParse(char* elfPath, int32 profile);

#endif