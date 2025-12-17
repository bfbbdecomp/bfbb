#ifndef IMEMMGR_H
#define IMEMMGR_H

#include "dolphin/os/OSAlloc.h"
#include <types.h>

extern U32 mem_base_alloc;
extern volatile OSHeapHandle the_heap;

void iMemInit();
void iMemExit();

#endif
