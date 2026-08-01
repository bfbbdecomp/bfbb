#ifndef POPMAL_H
#define POPMAL_H

#include "bink.h"

#define Round32(num) (((num) + 31) & ~31)
#define PushMallocBytesForXPtrs(count) (((count) * sizeof(void PTR4*)) + ((count) * sizeof(u64)) + 64)

void pushmalloc(void PTR4* PTR4* ptr, u32 amount);
u32 popmalloctotal(void);
void PTR4* popmalloc(u32 amount);

#define popfree(ptr, memfree) memfree(ptr)

#endif
