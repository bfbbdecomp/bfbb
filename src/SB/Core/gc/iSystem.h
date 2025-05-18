#ifndef ISYSTEM_H
#define ISYSTEM_H

#include <types.h>
#include <dolphin.h>

extern "C" {
void* malloc(U32 __size);
void free(void* __ptr);
}

void iVSync();

#define GET_MAKER_CODE() (*((U32*)0x80000004))
#define GET_BUS_FREQUENCY() (*((U32*)0x800000F8))

void** psGetMemoryFunctions();
void iVSync();
U16 my_dsc(U16 dsc);

void iSystemInit(U32 options);
void iSystemExit();
void MemoryProtectionErrorHandler(U16 last, OSContext* ctx, U64 unk1, U64 unk2);
void TRCInit();

void null_func();

#endif
