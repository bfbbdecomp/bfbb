#ifndef BINK_DECODE_NGC_NGCRGB_H
#define BINK_DECODE_NGC_NGCRGB_H

#include "bink.h"

#define RGB_CONTEXT_RESERVED_SIZE 0x18
#define RGB_LUMA_TABLE_SIZE 0x104
#define RGB_CLAMP_TABLE_SIZE 0x304
#define RGB_MONO_TABLE_SIZE 0x100
#define YUV_TABLE_SIZE 0x400
#define RGB_SHIFT_TABLE_SIZE 0xc
#define NGC_TABLE_ALIGNMENT 32

typedef struct RGBContext
{
    u8 PTR4* dest0;
    u8 PTR4* dest1;
    u32 PTR4* y0;
    u32 PTR4* y1;
    u16 PTR4* u;
    u16 PTR4* v;
    u32 PTR4* a0;
    u32 PTR4* a1;
    s32 gb;
    s32 b;
    s32 r;
    u8 pad[RGB_CONTEXT_RESERVED_SIZE];
    s32 pitch;
    u8 PTR4* base;
} RGBContext;

#ifdef __cplusplus
extern "C" {
#endif

extern u32 ytable[RGB_LUMA_TABLE_SIZE];
extern u32 ytable_x4[RGB_LUMA_TABLE_SIZE];
extern u32 PTR4* clamp_ytable[RGB_LUMA_TABLE_SIZE];
extern u32 clamptable[RGB_CLAMP_TABLE_SIZE];
extern u32 clamp_a4[RGB_LUMA_TABLE_SIZE];
extern u32 clamp_r[RGB_CLAMP_TABLE_SIZE];
extern u32 clamp_g[RGB_CLAMP_TABLE_SIZE];
extern u32 clamp_b[RGB_CLAMP_TABLE_SIZE];
extern u32 clamp_rh[RGB_CLAMP_TABLE_SIZE];
extern u32 clamp_gh[RGB_CLAMP_TABLE_SIZE];
extern u32 clamp_bh[RGB_CLAMP_TABLE_SIZE];
extern u32 clamp_rr[RGB_CLAMP_TABLE_SIZE];
extern u32 clamp_gg[RGB_CLAMP_TABLE_SIZE];
extern u32 clamp_bb[RGB_CLAMP_TABLE_SIZE];
extern u32 mono16[RGB_MONO_TABLE_SIZE];
extern u32 mono16x2[RGB_MONO_TABLE_SIZE];
extern u32 mono32[RGB_MONO_TABLE_SIZE];
extern RGBContext S;
extern s32 YUVTables[YUV_TABLE_SIZE];
extern u32 RGBshift[RGB_SHIFT_TABLE_SIZE];

#ifdef __cplusplus
}
#endif

#endif
