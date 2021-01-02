#ifndef ITIME_H
#define ITIME_H

#include <types.h>

typedef int64 iTime;

iTime iTimeGet();
uint32 iGetCurrFormattedDate(int8* str);
uint32 iGetCurrFormattedTime(int8* str);
uint32 iGetMinute();
uint32 iGetHour();
uint32 iGetMonth();
uint32 iGetDay();

#endif