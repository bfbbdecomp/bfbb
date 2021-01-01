#ifndef ISYSTEM_H
#define ISYSTEM_H

#include <types.h>

extern "C" {
void* malloc(uint32 __size);
}

#define GET_MAKER_CODE() (*((uint32*)0x80000004))
#define GET_BUS_FREQUENCY() (*((uint32*)0x800000F8))

#endif