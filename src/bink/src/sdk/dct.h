#ifndef BINK_SDK_DCT_H
#define BINK_SDK_DCT_H

#include "bink.h"

extern const u8 patterns[];
extern const u8 zigzag[];

void FastIDCT8x8(u8 PTR4* dest, s32 pitch, s16 PTR4* data, u32 quant);
void FastIDCT8x8d(u8 PTR4* dest, s32 pitch, s16 PTR4* data, u32 quant);
void FastmIDCT8x8(u8 PTR4* dest, s32 pitch, s16 PTR4* data, u32 quant);
void FastmIDCT8x8WithMotion(u8 PTR4* dest, s32 pitch, s16 PTR4* in, u32 quant, u8 PTR4* motion);
void FastFDCT8x8(s32 PTR4* out, u8 PTR4* in);
void FastFDCTs8x8(s32 PTR4* out, s8 PTR4* in);

#endif
