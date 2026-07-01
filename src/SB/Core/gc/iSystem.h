#ifndef ISYSTEM_H
#define ISYSTEM_H

#include "rwplcore.h"
#include <types.h>
#include <dolphin.h>

extern "C" {
void* malloc(U32 __size);
void free(void* __ptr);
}

#define DLFILE_BUF_SIZE 0x2800

struct dlFile // fabricated based on skyFile dwarf
{
    U8 readBuffer[DLFILE_BUF_SIZE]; // 0x00
    DVDFileInfo fileInfo; // 0x2800
    S32 POS; // 0x283C
    U32 SOF; // 0x2840
    U32 bufferPos; // 0x2844
    S32 accessMode; // 0x2848
};

struct dlFSUnkGlobals // entirely fabricated
{
    RwFileFunctions fileFuncs; // 0x00
    RwFreeList* unk_2C; // 0x2C
};

void iVSync();

#define GET_MAKER_CODE() (*((U32*)0x80000004))
#define GET_BUS_FREQUENCY() (*((U32*)0x800000F8))

struct RwMemoryFunctions* psGetMemoryFunctions();
void iVSync();

void iSystemInit(U32 options);
void iSystemExit();

void null_func();

#endif
