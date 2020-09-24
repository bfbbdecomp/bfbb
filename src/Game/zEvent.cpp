#include "zEvent.h"
#include "../Core/x/xEvent.h"

extern char* sEventTable[eEventCount];

char* zEventName(unsigned int eventEnum) {
    return sEventTable[eventEnum];
}