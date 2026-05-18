#ifndef BINKNGC_H
#define BINKNGC_H

#include "bink.h"

u32 mult64anddiv(u32 left, u32 right, u32 divisor);
u32 mult64andshift(u32 left, u32 right, u32 shift);
void radmemset16(void PTR4* dest, u16 value, u32 size);
/* Milliseconds since the first call, derived from the GameCube OS timebase. */
u32 RADTimerRead(void);
/* Cycle timers store either the low timebase word or a full 64-bit timebase snapshot. */
void RADCycleTimerStartAddr(u32 PTR4* dest);
u32 RADCycleTimerDeltaAddr(u32 PTR4* dest);
void RADCycleTimerStartAddr64(u64 PTR4* dest);
void RADCycleTimerDeltaAddr64(u64 PTR4* dest);
#define RADCycleTimerStart(var) RADCycleTimerStartAddr(&(var))
#define RADCycleTimerDelta(var) RADCycleTimerDeltaAddr(&(var))
#define RADCycleTimerStart64(var) RADCycleTimerStartAddr64(&(var))
#define RADCycleTimerDelta64(var) RADCycleTimerDeltaAddr64(&(var))
void RADSetAudioMemory(RADMEMALLOC malloc_fn, RADMEMFREE free_fn);
/* Audio memory is supplied by the client; there is no ARAM heap fallback here. */
void PTR4* radaudiomalloc(u32 size);
void radaudiofree(void PTR4* ptr);
u32 div64(u32 high, u32 low, u32 divisor);
void ReadTimeBase(u32 PTR4* dest);

#endif
