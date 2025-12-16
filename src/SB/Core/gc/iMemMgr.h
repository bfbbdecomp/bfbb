#ifndef IMEMMGR_H
#define IMEMMGR_H

#include "dolphin/os/OSAlloc.h"
#include <types.h>

extern volatile OSHeapHandle the_heap;

void iMemInit();
void iMemExit();

#endif
