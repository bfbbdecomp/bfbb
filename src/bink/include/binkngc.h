#ifndef BINKNGC_H
#define BINKNGC_H

#include "bink.h"

void radfree(void* ptr);
typedef void *(*RADMEMALLOC)(u32 size);
typedef void (*RADMEMFREE)(void* mem);

#endif
