#ifndef __DOLPHIN_H__
#define __DOLPHIN_H__

#include "dolphin/types.h"
#include "dolphin/gx.h"

extern "C" {
void OSPanic(int8* param_1, uint32 param_2, int8* param_3);
void* OSAllocFromHeap(void* handle_t, uint32 size_t);
void OSFreeToHeap(void* handle_t, void* param_2);
}

#endif