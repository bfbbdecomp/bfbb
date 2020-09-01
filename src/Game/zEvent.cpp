#include "zEvent.h"

extern int* lbl_sEventTable[];

int* zEventName(unsigned int index) {
    return lbl_sEventTable[index];
}