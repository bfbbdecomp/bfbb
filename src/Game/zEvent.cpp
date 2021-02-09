#include "zEvent.h"

extern char* sEventTable[eEventCount];

char* zEventName(uint32 eventEnum)
{
    return sEventTable[eventEnum];
}