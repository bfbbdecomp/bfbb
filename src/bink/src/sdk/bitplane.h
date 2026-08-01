#ifndef BINK_SDK_BITPLANE_H
#define BINK_SDK_BITPLANE_H

#include "bink.h"

typedef u32 BPBITSTYPE;

#define BPBITSTYPELEN 32
#define BPBITSTYPEBYTES 4

typedef struct BPBITSTREAM
{
    u32 PTR4* cur;
    u32 PTR4* init;
    BPBITSTYPE bits;
    u32 bitlen; /* Number of valid low-order bits currently buffered. */
} BPBITSTREAM;

u32 LenBPLossless(s16 PTR4* vals);
void WriteBPLossless(BPBITSTREAM PTR4* bits, s16 PTR4* vals);
u32 WriteBPLossy(BPBITSTREAM PTR4* bits, char PTR4* vals);
void ReadBPLossless(s16 PTR4* out, BPBITSTREAM PTR4* bits);
void ReadBPLossy(s16 PTR4* out, BPBITSTREAM PTR4* bits, s32 limit);
void ReadBPLossyWithMotion(char PTR4* out, s32 pitch, BPBITSTREAM PTR4* bits, s32 limit,
                           char PTR4* prev);

#endif
