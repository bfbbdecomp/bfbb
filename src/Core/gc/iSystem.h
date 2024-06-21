#ifndef ISYSTEM_H
#define ISYSTEM_H

#include <types.h>
#include <dolphin.h>

extern "C" {
void* malloc(uint32 __size);
void free(void* __ptr);
}

void iVSync();

#define GET_MAKER_CODE() (*((uint32*)0x80000004))
#define GET_BUS_FREQUENCY() (*((uint32*)0x800000F8))

void** psGetMemoryFunctions();
void iVSync();
uint16 my_dsc(uint16 dsc);

void MemoryProtectionErrorHandler(uint16 last, OSContext* ctx, uint64 unk1, uint64 unk2);
void TRCInit();

void null_func();

#endif