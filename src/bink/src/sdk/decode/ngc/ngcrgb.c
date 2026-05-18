#include "bink.h"
#include "ngcrgb.h"

// GameCube texture memory is tiled in four-row groups. These helpers convert
// the linear Bink row pointers in S into the swizzled destination addresses
// used by the RGB and alpha 4x2 core kernels.
#define RGB_TILE_ROWS 4
#define RGB_TILE_ROW_BITS 2
#define RGB_TILE_ROW_MASK (RGB_TILE_ROWS - 1)
#define RGB_TILE_ROW_SHIFT 3
#define RGB_16BIT_TILE_ALIGN_MASK 0x1f
#define RGB_32BIT_TILE_ALIGN_MASK 0x3f
#define RGB_BYTES_PER_PIXEL32 4
#define RGB_16_4X2_ROW_BYTES 8
#define RGB_16_X2_4X2_ROW_BYTES 16
#define RGB_32_4X2_ROW_BYTES 16
#define RGB_32_X2_4X2_ROW_BYTES 32
#define RGB_TILE_HALF_BLOCK_WORDS 8
#define RGB_TILE_BLOCK_WORDS 16
#define RGB_TILE_X2_BLOCK_WORDS 32
#define RGB_TILE_PITCH16(pitch) (((pitch) * RGB_BYTES_PER_PIXEL32 + RGB_16BIT_TILE_ALIGN_MASK) & ~RGB_16BIT_TILE_ALIGN_MASK)
#define RGB_TILE_PITCH32(pitch) (((pitch) * RGB_BYTES_PER_PIXEL32 + RGB_32BIT_TILE_ALIGN_MASK) & ~RGB_32BIT_TILE_ALIGN_MASK)
#define RGB_TILE_ROW(ptr, base, pitch) ((s32)((u8 PTR4*)(ptr) - (base)) / (s32)(pitch))
#define RGB_TILE_ROW_START(base, row, pitch) ((base) + (row) * (pitch))
#define RGB_TILE_LOC(base, ptr, pitch, tilePitch, row)                                                                 \
    ((base) + (tilePitch) * ((u32)(row) >> RGB_TILE_ROW_BITS) +                                                       \
     (((u32)(row) & RGB_TILE_ROW_MASK) << RGB_TILE_ROW_SHIFT) +                                                       \
     (((u8 PTR4*)(ptr) - RGB_TILE_ROW_START((base), (row), (pitch))) << RGB_TILE_ROW_BITS))
#define RGB_BYTE_MASK 0xff
#define RGB_WORD_BYTE3(word) (((word) >> 24) & RGB_BYTE_MASK)
#define RGB_WORD_BYTE2(word) (((word) >> 16) & RGB_BYTE_MASK)
#define RGB_WORD_BYTE1(word) (((word) >> 8) & RGB_BYTE_MASK)
#define RGB_WORD_BYTE0(word) ((word) & RGB_BYTE_MASK)
#define RGB_WORD_LO_MASK 0x0000ffff
#define RGB_WORD_HI_MASK 0xffff0000
#define RGB_ALPHA0_MASK 0xff000000
#define RGB_ALPHA2_MASK 0x0000ff00

#define RGB_CLAMP_BIAS 0x100
#define YUV_V_TO_GB_OFFSET 0x100
#define YUV_U_TO_GB_OFFSET 0x200
#define YUV_V_TO_R_OFFSET 0x300

#define RGB565(y, r, g, b)                                                                                             \
    ((u16)clamp_b[RGB_CLAMP_BIAS + (y) + (b)] | (u16)clamp_r[RGB_CLAMP_BIAS + (y) + (r)] |                   \
     (u16)clamp_g[RGB_CLAMP_BIAS + (y) + (g)])

#define RGB565_BIASED(cr, cg, cb, y, r, g, b)                                                                          \
    ((u16)(cb)[(y) + (r)] | (u16)(cr)[(y) + (b)] | (u16)(cg)[(y) + (g)])
#define RGB565_PAIR(pixel) (((pixel) << 16) | (pixel))
#define RGB565_A4(y, r, g, b, a) (RGB565((y), (r), (g), (b)) | (u16)clamp_a4[(a)])
#define RGB565_A4_BIASED(cr, cg, cb, ca, y, r, g, b, a)                                                               \
    ((u16)(cb)[(y) + (r)] | (u16)(cr)[(y) + (b)] | (u16)(cg)[(y) + (g)] | (u16)(ca)[(a)])

// Core kernels consume two luma rows and one chroma row, producing a 4x2 tile
// chunk. The monochrome paths use mono16/mono32 directly, while color paths
// bias through the YUV contribution tables prepared by YUV_init.
void YUV_32_4x2_even(u32 count)
{
    u16 vword;
    u16 uword;
    u32 yv0;
    u32 yv1;
    u32 PTR4* dest0;
    u32 PTR4* dest1;
    u32 PTR4* y1;
    u32 PTR4* y0;
    u16 PTR4* u;
    u16 PTR4* v;
    u32 pitch;
    u8 PTR4* base;
    s32 row0;
    s32 row1;
    u32 tiledPitch;
    s32 PTR4* u_to_b;
    s32 PTR4* v_to_gb;
    s32 PTR4* u_to_gb;
    s32 PTR4* v_to_r;

    dest0 = (u32 PTR4*)S.dest0;
    base = S.base;
    dest1 = (u32 PTR4*)S.dest1;
    pitch = S.pitch;
    tiledPitch = RGB_TILE_PITCH32(pitch);

    row0 = RGB_TILE_ROW(dest0, base, pitch);
    row1 = RGB_TILE_ROW(dest1, base, pitch);
    dest0 = (u32 PTR4*)RGB_TILE_LOC(base, dest0, pitch, tiledPitch, row0);
    dest1 = (u32 PTR4*)RGB_TILE_LOC(base, dest1, pitch, tiledPitch, row1);

    S.dest0 += count * RGB_32_4X2_ROW_BYTES;
    S.dest1 += count * RGB_32_4X2_ROW_BYTES;
    y1 = S.y1;
    y0 = S.y0;
    u = S.u;
    v = S.v;
    u_to_b = YUVTables;
    v_to_gb = YUVTables + YUV_V_TO_GB_OFFSET;
    u_to_gb = YUVTables + YUV_U_TO_GB_OFFSET;
    v_to_r = YUVTables + YUV_V_TO_R_OFFSET;

    do {
        u32 vhi;
        u32 uhi;
        u32 vlo;
        u32 ulo;
        u32 PTR4* y00;
        u32 PTR4* y01;
        u32 PTR4* y10;
        u32 PTR4* y11;
        s32 r;
        s32 b;
        s32 gb;

        vword = *v++;
        yv0 = *y0++;
        vhi = RGB_WORD_BYTE1(vword);
        uword = *u++;
        uhi = RGB_WORD_BYTE1(uword);

        y00 = clamp_ytable[RGB_WORD_BYTE3(yv0)];
        y01 = clamp_ytable[RGB_WORD_BYTE2(yv0)];
        gb = v_to_gb[vhi] + u_to_gb[uhi];
        r = v_to_r[vhi];
        b = u_to_b[uhi];
        yv1 = *y1++;
        dest0[0] = (y00[r] << 16) | y01[r];
        dest0[8] = (y00[gb] << 24) | (y00[b] << 16) | (y01[gb] << 8) | y01[b];

        y10 = clamp_ytable[RGB_WORD_BYTE3(yv1)];
        y11 = clamp_ytable[RGB_WORD_BYTE2(yv1)];
        dest1[0] = (y10[r] << 16) | y11[r];
        dest1[8] = (y10[gb] << 24) | (y10[b] << 16) | (y11[gb] << 8) | y11[b];

        vlo = RGB_WORD_BYTE0(vword);
        ulo = RGB_WORD_BYTE0(uword);
        y00 = clamp_ytable[RGB_WORD_BYTE1(yv0)];
        y01 = clamp_ytable[RGB_WORD_BYTE0(yv0)];
        gb = v_to_gb[vlo] + u_to_gb[ulo];
        r = v_to_r[vlo];
        b = u_to_b[ulo];
        dest0[1] = (y00[r] << 16) | y01[r];
        dest0[9] = (y00[gb] << 24) | (y00[b] << 16) | (y01[gb] << 8) | y01[b];
        dest0 += RGB_TILE_BLOCK_WORDS;

        y10 = clamp_ytable[RGB_WORD_BYTE1(yv1)];
        y11 = clamp_ytable[RGB_WORD_BYTE0(yv1)];
        dest1[1] = (y10[r] << 16) | y11[r];
        dest1[9] = (y10[gb] << 24) | (y10[b] << 16) | (y11[gb] << 8) | y11[b];
        dest1 += RGB_TILE_BLOCK_WORDS;

        count--;
    } while (count != 0);

    S.u = u;
    S.v = v;
    S.y0 = y0;
    S.y1 = y1;
}
void YUV_32x2_4x2_even(u32 count)
{
    u16 vword;
    u16 uword;
    u32 yv0;
    u32 yv1;
    u32 PTR4* dest0;
    u32 PTR4* dest1;
    u32 PTR4* y1;
    u32 PTR4* y0;
    u16 PTR4* u;
    u16 PTR4* v;
    u32 pitch;
    u8 PTR4* base;
    s32 row0;
    s32 row1;
    u32 tiledPitch;
    s32 PTR4* u_to_b;
    s32 PTR4* v_to_gb;
    s32 PTR4* u_to_gb;
    s32 PTR4* v_to_r;

    dest0 = (u32 PTR4*)S.dest0;
    base = S.base;
    dest1 = (u32 PTR4*)S.dest1;
    pitch = S.pitch;
    tiledPitch = RGB_TILE_PITCH32(pitch);

    row0 = RGB_TILE_ROW(dest0, base, pitch);
    row1 = RGB_TILE_ROW(dest1, base, pitch);
    dest0 = (u32 PTR4*)RGB_TILE_LOC(base, dest0, pitch, tiledPitch, row0);
    dest1 = (u32 PTR4*)RGB_TILE_LOC(base, dest1, pitch, tiledPitch, row1);

    S.dest0 += count * RGB_32_X2_4X2_ROW_BYTES;
    S.dest1 += count * RGB_32_X2_4X2_ROW_BYTES;
    y1 = S.y1;
    y0 = S.y0;
    u = S.u;
    v = S.v;
    u_to_b = YUVTables;
    v_to_gb = YUVTables + YUV_V_TO_GB_OFFSET;
    u_to_gb = YUVTables + YUV_U_TO_GB_OFFSET;
    v_to_r = YUVTables + YUV_V_TO_R_OFFSET;

    do {
        u32 vhi;
        u32 uhi;
        u32 vlo;
        u32 ulo;
        u32 PTR4* y00;
        u32 PTR4* y01;
        u32 PTR4* y10;
        u32 PTR4* y11;
        s32 r;
        s32 b;
        s32 gb;

        vword = *v++;
        yv0 = *y0++;
        uword = *u++;
        vhi = RGB_WORD_BYTE1(vword);
        uhi = RGB_WORD_BYTE1(uword);

        y00 = clamp_ytable[RGB_WORD_BYTE3(yv0)];
        y01 = clamp_ytable[RGB_WORD_BYTE2(yv0)];
        r = v_to_r[vhi];
        gb = v_to_gb[vhi] + u_to_gb[uhi];
        b = u_to_b[uhi];
        yv1 = *y1++;

        dest0[0] = (y00[r] << 16) | y00[r];
        dest0[1] = (y01[r] << 16) | y01[r];
        dest0[8] = (y00[gb] << 24) | (y00[b] << 16) | (y00[gb] << 8) | y00[b];
        dest0[9] = (y01[gb] << 24) | (y01[b] << 16) | (y01[gb] << 8) | y01[b];

        y10 = clamp_ytable[RGB_WORD_BYTE3(yv1)];
        y11 = clamp_ytable[RGB_WORD_BYTE2(yv1)];
        dest1[0] = (y10[r] << 16) | y10[r];
        dest1[1] = (y11[r] << 16) | y11[r];
        dest1[8] = (y10[gb] << 24) | (y10[b] << 16) | (y10[gb] << 8) | y10[b];
        dest1[9] = (y11[gb] << 24) | (y11[b] << 16) | (y11[gb] << 8) | y11[b];

        vlo = RGB_WORD_BYTE0(vword);
        ulo = RGB_WORD_BYTE0(uword);
        y00 = clamp_ytable[RGB_WORD_BYTE1(yv0)];
        y01 = clamp_ytable[RGB_WORD_BYTE0(yv0)];
        r = v_to_r[vlo];
        gb = v_to_gb[vlo] + u_to_gb[ulo];
        b = u_to_b[ulo];
        dest0[16] = (y00[r] << 16) | y00[r];
        dest0[17] = (y01[r] << 16) | y01[r];
        dest0[24] = (y00[gb] << 24) | (y00[b] << 16) | (y00[gb] << 8) | y00[b];
        dest0[25] = (y01[gb] << 24) | (y01[b] << 16) | (y01[gb] << 8) | y01[b];
        dest0 += RGB_TILE_X2_BLOCK_WORDS;

        y10 = clamp_ytable[RGB_WORD_BYTE1(yv1)];
        y11 = clamp_ytable[RGB_WORD_BYTE0(yv1)];
        dest1[16] = (y10[r] << 16) | y10[r];
        dest1[17] = (y11[r] << 16) | y11[r];
        dest1[24] = (y10[gb] << 24) | (y10[b] << 16) | (y10[gb] << 8) | y10[b];
        dest1[25] = (y11[gb] << 24) | (y11[b] << 16) | (y11[gb] << 8) | y11[b];
        dest1 += RGB_TILE_X2_BLOCK_WORDS;

        count--;
    } while (count != 0);

    S.u = u;
    S.v = v;
    S.y0 = y0;
    S.y1 = y1;
}

void YUV_32m_4x2(u32 count)
{
    u32 PTR4* dest0;
    u32 PTR4* dest1;
    u32 PTR4* y0;
    u32 PTR4* y1;
    u32 pitch;
    u8 PTR4* base;
    u8 PTR4* dest0_start;
    u8 PTR4* dest1_start;
    s32 row0;
    s32 row1;
    u32 tiledPitch;

    dest0_start = S.dest0;
    base = S.base;
    dest1_start = S.dest1;
    dest0 = (u32 PTR4*)dest0_start;
    dest1 = (u32 PTR4*)dest1_start;
    pitch = S.pitch;
    tiledPitch = RGB_TILE_PITCH32(pitch);

    row0 = RGB_TILE_ROW(dest0, base, pitch);
    row1 = RGB_TILE_ROW(dest1, base, pitch);
    dest0 = (u32 PTR4*)RGB_TILE_LOC(base, dest0, pitch, tiledPitch, row0);
    dest1 = (u32 PTR4*)RGB_TILE_LOC(base, dest1, pitch, tiledPitch, row1);

    S.dest0 = dest0_start + count * RGB_32_4X2_ROW_BYTES;
    S.dest1 = dest1_start + count * RGB_32_4X2_ROW_BYTES;

    y0 = S.y0;
    y1 = S.y1;

    do {
        u32 yv0 = *y0++;
        u32 yv1 = *y1++;
        u32 a = mono32[RGB_WORD_BYTE3(yv0)];
        u32 b = mono32[RGB_WORD_BYTE2(yv0)];
        u32 c = mono32[RGB_WORD_BYTE1(yv0)];
        u32 d = mono32[RGB_WORD_BYTE0(yv0)];

        dest0[0] = (a & RGB_WORD_HI_MASK) | (b >> 16);
        dest0[1] = (c & RGB_WORD_HI_MASK) | (d >> 16);
        dest0[8] = (a << 16) | (b & RGB_WORD_LO_MASK);
        dest0[9] = (c << 16) | (d & RGB_WORD_LO_MASK);

        a = mono32[RGB_WORD_BYTE3(yv1)];
        b = mono32[RGB_WORD_BYTE2(yv1)];
        c = mono32[RGB_WORD_BYTE1(yv1)];
        d = mono32[RGB_WORD_BYTE0(yv1)];
        dest1[0] = (a & RGB_WORD_HI_MASK) | (b >> 16);
        dest1[1] = (c & RGB_WORD_HI_MASK) | (d >> 16);
        dest1[8] = (a << 16) | (b & RGB_WORD_LO_MASK);
        dest1[9] = (c << 16) | (d & RGB_WORD_LO_MASK);

        dest0 += RGB_TILE_BLOCK_WORDS;
        dest1 += RGB_TILE_BLOCK_WORDS;
        --count;
    } while (count != 0);

    S.y0 = y0;
    S.y1 = y1;
}

void YUV_32mx2_4x2(u32 count)
{
    u32 PTR4* dest0;
    u32 PTR4* dest1;
    u32 PTR4* y0;
    u32 PTR4* y1;
    u32 pitch;
    u8 PTR4* base;
    u8 PTR4* dest0_start;
    u8 PTR4* dest1_start;
    s32 row0;
    s32 row1;
    u32 tiledPitch;

    dest0_start = S.dest0;
    base = S.base;
    dest1_start = S.dest1;
    dest0 = (u32 PTR4*)dest0_start;
    dest1 = (u32 PTR4*)dest1_start;
    pitch = S.pitch;
    tiledPitch = RGB_TILE_PITCH32(pitch);

    row0 = RGB_TILE_ROW(dest0, base, pitch);
    row1 = RGB_TILE_ROW(dest1, base, pitch);
    dest0 = (u32 PTR4*)RGB_TILE_LOC(base, dest0, pitch, tiledPitch, row0);
    dest1 = (u32 PTR4*)RGB_TILE_LOC(base, dest1, pitch, tiledPitch, row1);

    S.dest0 = dest0_start + count * RGB_32_X2_4X2_ROW_BYTES;
    S.dest1 = dest1_start + count * RGB_32_X2_4X2_ROW_BYTES;

    y0 = S.y0;
    y1 = S.y1;

    do {
        u32 yv0 = *y0++;
        u32 yv1 = *y1++;
        u32 a = mono32[RGB_WORD_BYTE3(yv0)];
        u32 b = mono32[RGB_WORD_BYTE2(yv0)];
        u32 c = mono32[RGB_WORD_BYTE1(yv0)];
        u32 d = mono32[RGB_WORD_BYTE0(yv0)];

        dest0[0] = (a & RGB_WORD_HI_MASK) | (a >> 16);
        dest0[1] = (b & RGB_WORD_HI_MASK) | (b >> 16);
        dest0[8] = (a << 16) | (a & RGB_WORD_LO_MASK);
        dest0[9] = (b << 16) | (b & RGB_WORD_LO_MASK);
        dest0[16] = (c & RGB_WORD_HI_MASK) | (c >> 16);
        dest0[17] = (d & RGB_WORD_HI_MASK) | (d >> 16);
        dest0[24] = (c << 16) | (c & RGB_WORD_LO_MASK);
        dest0[25] = (d << 16) | (d & RGB_WORD_LO_MASK);

        a = mono32[RGB_WORD_BYTE3(yv1)];
        b = mono32[RGB_WORD_BYTE2(yv1)];
        c = mono32[RGB_WORD_BYTE1(yv1)];
        d = mono32[RGB_WORD_BYTE0(yv1)];
        dest1[0] = (a & RGB_WORD_HI_MASK) | (a >> 16);
        dest1[1] = (b & RGB_WORD_HI_MASK) | (b >> 16);
        dest1[8] = (a << 16) | (a & RGB_WORD_LO_MASK);
        dest1[9] = (b << 16) | (b & RGB_WORD_LO_MASK);
        dest1[16] = (c & RGB_WORD_HI_MASK) | (c >> 16);
        dest1[17] = (d & RGB_WORD_HI_MASK) | (d >> 16);
        dest1[24] = (c << 16) | (c & RGB_WORD_LO_MASK);
        dest1[25] = (d << 16) | (d & RGB_WORD_LO_MASK);

        dest0 += RGB_TILE_X2_BLOCK_WORDS;
        dest1 += RGB_TILE_X2_BLOCK_WORDS;
        --count;
    } while (count != 0);

    S.y0 = y0;
    S.y1 = y1;
}

void YUV_16_4x2_even(u32 count)
{
    u16 uword;
    u16 vword;
    u32 yv0;
    u32 yv1;
    u32 PTR4* dest0;
    u32 PTR4* dest1;
    u32 PTR4* y0;
    u32 PTR4* y1;
    u16 PTR4* u;
    u16 PTR4* v;
    u32 pitch;
    u8 PTR4* base;
    s32 row0;
    s32 row1;
    u32 tiledPitch;
    s32 PTR4* u_to_b;
    s32 PTR4* v_to_gb;
    s32 PTR4* u_to_gb;
    s32 PTR4* v_to_r;
    u32 PTR4* clamp_r_base;
    u32 PTR4* clamp_g_base;
    u32 PTR4* clamp_b_base;

    dest0 = (u32 PTR4*)S.dest0;
    dest1 = (u32 PTR4*)S.dest1;
    y0 = S.y0;
    y1 = S.y1;
    u = S.u;
    v = S.v;
    pitch = S.pitch;
    base = S.base;
    tiledPitch = RGB_TILE_PITCH16(pitch);
    u_to_b = YUVTables;
    v_to_gb = YUVTables + YUV_V_TO_GB_OFFSET;
    u_to_gb = YUVTables + YUV_U_TO_GB_OFFSET;
    v_to_r = YUVTables + YUV_V_TO_R_OFFSET;
    clamp_r_base = clamp_r + RGB_CLAMP_BIAS;
    clamp_g_base = clamp_g + RGB_CLAMP_BIAS;
    clamp_b_base = clamp_b + RGB_CLAMP_BIAS;

    row0 = RGB_TILE_ROW(dest0, base, pitch);
    row1 = RGB_TILE_ROW(dest1, base, pitch);
    dest0 = (u32 PTR4*)RGB_TILE_LOC(base, dest0, pitch, tiledPitch, row0);
    dest1 = (u32 PTR4*)RGB_TILE_LOC(base, dest1, pitch, tiledPitch, row1);

    S.dest0 += count * RGB_16_4X2_ROW_BYTES;
    S.dest1 += count * RGB_16_4X2_ROW_BYTES;

    do {
        u32 uhi;
        u32 vhi;
        u32 ulo;
        u32 vlo;
        s32 rb;
        s32 gb;
        s32 bb;
        s32 ya;
        s32 yb;

        uword = *u++;
        vword = *v++;
        yv0 = *y0++;
        uhi = RGB_WORD_BYTE1(uword);
        vhi = RGB_WORD_BYTE1(vword);
        rb = u_to_b[uhi];
        gb = u_to_gb[uhi] + v_to_gb[vhi];
        bb = v_to_r[vhi];
        ya = ytable[RGB_WORD_BYTE3(yv0)];
        yb = ytable[RGB_WORD_BYTE2(yv0)];
        yv1 = *y1++;
        dest0[0] = (RGB565_BIASED(clamp_r_base, clamp_g_base, clamp_b_base, ya, rb, gb, bb) << 16) |
                   RGB565_BIASED(clamp_r_base, clamp_g_base, clamp_b_base, yb, rb, gb, bb);

        ya = ytable[RGB_WORD_BYTE3(yv1)];
        yb = ytable[RGB_WORD_BYTE2(yv1)];
        dest1[0] = (RGB565_BIASED(clamp_r_base, clamp_g_base, clamp_b_base, ya, rb, gb, bb) << 16) |
                   RGB565_BIASED(clamp_r_base, clamp_g_base, clamp_b_base, yb, rb, gb, bb);

        ulo = RGB_WORD_BYTE0(uword);
        vlo = RGB_WORD_BYTE0(vword);
        rb = u_to_b[ulo];
        gb = u_to_gb[ulo] + v_to_gb[vlo];
        bb = v_to_r[vlo];
        ya = ytable[RGB_WORD_BYTE1(yv0)];
        yb = ytable[RGB_WORD_BYTE0(yv0)];
        dest0[1] = (RGB565_BIASED(clamp_r_base, clamp_g_base, clamp_b_base, ya, rb, gb, bb) << 16) |
                   RGB565_BIASED(clamp_r_base, clamp_g_base, clamp_b_base, yb, rb, gb, bb);
        dest0 += RGB_TILE_HALF_BLOCK_WORDS;

        ya = ytable[RGB_WORD_BYTE1(yv1)];
        yb = ytable[RGB_WORD_BYTE0(yv1)];
        dest1[1] = (RGB565_BIASED(clamp_r_base, clamp_g_base, clamp_b_base, ya, rb, gb, bb) << 16) |
                   RGB565_BIASED(clamp_r_base, clamp_g_base, clamp_b_base, yb, rb, gb, bb);
        dest1 += RGB_TILE_HALF_BLOCK_WORDS;

        count--;
    } while (count != 0);

    S.u = u;
    S.v = v;
    S.y0 = y0;
    S.y1 = y1;
}

void YUV_16x2_4x2_even(u32 count)
{
    u16 uword;
    u16 vword;
    u32 yv0;
    u32 yv1;
    u32 PTR4* dest0;
    u32 PTR4* dest1;
    u32 PTR4* y0;
    u32 PTR4* y1;
    u16 PTR4* u;
    u16 PTR4* v;
    u32 pitch;
    u8 PTR4* base;
    s32 row0;
    s32 row1;
    u32 tiledPitch;
    s32 PTR4* u_to_b;
    s32 PTR4* v_to_gb;
    s32 PTR4* u_to_gb;
    s32 PTR4* v_to_r;
    u32 PTR4* clamp_r_base;
    u32 PTR4* clamp_g_base;
    u32 PTR4* clamp_b_base;

    dest0 = (u32 PTR4*)S.dest0;
    dest1 = (u32 PTR4*)S.dest1;
    y0 = S.y0;
    y1 = S.y1;
    u = S.u;
    v = S.v;
    pitch = S.pitch;
    base = S.base;
    tiledPitch = RGB_TILE_PITCH16(pitch);
    u_to_b = YUVTables;
    v_to_gb = YUVTables + YUV_V_TO_GB_OFFSET;
    u_to_gb = YUVTables + YUV_U_TO_GB_OFFSET;
    v_to_r = YUVTables + YUV_V_TO_R_OFFSET;
    clamp_r_base = clamp_r + RGB_CLAMP_BIAS;
    clamp_g_base = clamp_g + RGB_CLAMP_BIAS;
    clamp_b_base = clamp_b + RGB_CLAMP_BIAS;

    row0 = RGB_TILE_ROW(dest0, base, pitch);
    row1 = RGB_TILE_ROW(dest1, base, pitch);
    dest0 = (u32 PTR4*)RGB_TILE_LOC(base, dest0, pitch, tiledPitch, row0);
    dest1 = (u32 PTR4*)RGB_TILE_LOC(base, dest1, pitch, tiledPitch, row1);

    S.dest0 += count * RGB_16_X2_4X2_ROW_BYTES;
    S.dest1 += count * RGB_16_X2_4X2_ROW_BYTES;

    do {
        u32 uhi;
        u32 vhi;
        u32 ulo;
        u32 vlo;
        u32 pix;
        s32 rb;
        s32 gb;
        s32 bb;
        s32 ya;
        s32 yb;

        uword = *u++;
        vword = *v++;
        yv0 = *y0++;
        uhi = RGB_WORD_BYTE1(uword);
        vhi = RGB_WORD_BYTE1(vword);
        rb = u_to_b[uhi];
        gb = u_to_gb[uhi] + v_to_gb[vhi];
        bb = v_to_r[vhi];
        ya = ytable[RGB_WORD_BYTE3(yv0)];
        yb = ytable[RGB_WORD_BYTE2(yv0)];
        yv1 = *y1++;
        pix = RGB565_BIASED(clamp_r_base, clamp_g_base, clamp_b_base, ya, rb, gb, bb);
        dest0[0] = RGB565_PAIR(pix);
        pix = RGB565_BIASED(clamp_r_base, clamp_g_base, clamp_b_base, yb, rb, gb, bb);
        dest0[1] = RGB565_PAIR(pix);

        ya = ytable[RGB_WORD_BYTE3(yv1)];
        yb = ytable[RGB_WORD_BYTE2(yv1)];
        pix = RGB565_BIASED(clamp_r_base, clamp_g_base, clamp_b_base, ya, rb, gb, bb);
        dest1[0] = RGB565_PAIR(pix);
        pix = RGB565_BIASED(clamp_r_base, clamp_g_base, clamp_b_base, yb, rb, gb, bb);
        dest1[1] = RGB565_PAIR(pix);

        ulo = RGB_WORD_BYTE0(uword);
        vlo = RGB_WORD_BYTE0(vword);
        rb = u_to_b[ulo];
        gb = u_to_gb[ulo] + v_to_gb[vlo];
        bb = v_to_r[vlo];
        ya = ytable[RGB_WORD_BYTE1(yv0)];
        yb = ytable[RGB_WORD_BYTE0(yv0)];
        pix = RGB565_BIASED(clamp_r_base, clamp_g_base, clamp_b_base, ya, rb, gb, bb);
        dest0[8] = RGB565_PAIR(pix);
        pix = RGB565_BIASED(clamp_r_base, clamp_g_base, clamp_b_base, yb, rb, gb, bb);
        dest0[9] = RGB565_PAIR(pix);
        dest0 += RGB_TILE_BLOCK_WORDS;

        ya = ytable[RGB_WORD_BYTE1(yv1)];
        yb = ytable[RGB_WORD_BYTE0(yv1)];
        pix = RGB565_BIASED(clamp_r_base, clamp_g_base, clamp_b_base, ya, rb, gb, bb);
        dest1[8] = RGB565_PAIR(pix);
        pix = RGB565_BIASED(clamp_r_base, clamp_g_base, clamp_b_base, yb, rb, gb, bb);
        dest1[9] = RGB565_PAIR(pix);
        dest1 += RGB_TILE_BLOCK_WORDS;

        count--;
    } while (count != 0);

    S.u = u;
    S.v = v;
    S.y0 = y0;
    S.y1 = y1;
}

void YUV_16m_4x2(u32 count)
{
    u32 PTR4* dest0;
    u32 PTR4* dest1;
    u32 PTR4* y0;
    u32 PTR4* y1;
    u32 pitch;
    u8 PTR4* base;
    u8 PTR4* dest0_start;
    u8 PTR4* dest1_start;
    s32 row0;
    s32 row1;
    u32 tiledPitch;
    u32 PTR4* table;

    dest0_start = S.dest0;
    dest1_start = S.dest1;
    dest0 = (u32 PTR4*)dest0_start;
    dest1 = (u32 PTR4*)dest1_start;
    y0 = S.y0;
    y1 = S.y1;
    pitch = S.pitch;
    base = S.base;
    tiledPitch = RGB_TILE_PITCH16(pitch);
    table = mono16;

    row0 = RGB_TILE_ROW(dest0, base, pitch);
    row1 = RGB_TILE_ROW(dest1, base, pitch);
    dest0 = (u32 PTR4*)RGB_TILE_LOC(base, dest0, pitch, tiledPitch, row0);
    dest1 = (u32 PTR4*)RGB_TILE_LOC(base, dest1, pitch, tiledPitch, row1);

    S.dest0 = dest0_start + count * RGB_16_4X2_ROW_BYTES;
    S.dest1 = dest1_start + count * RGB_16_4X2_ROW_BYTES;

    do {
        u32 yv0 = *y0++;
        u32 yv1 = *y1++;
        u32 a = (u16)table[RGB_WORD_BYTE3(yv0)];
        u32 b = (u16)table[RGB_WORD_BYTE2(yv0)];
        u32 c = (u16)table[RGB_WORD_BYTE1(yv0)];
        u32 d = (u16)table[RGB_WORD_BYTE0(yv0)];

        dest0[0] = (a << 16) | b;
        dest0[1] = (c << 16) | d;

        a = (u16)table[RGB_WORD_BYTE3(yv1)];
        b = (u16)table[RGB_WORD_BYTE2(yv1)];
        c = (u16)table[RGB_WORD_BYTE1(yv1)];
        d = (u16)table[RGB_WORD_BYTE0(yv1)];
        dest1[0] = (a << 16) | b;
        dest1[1] = (c << 16) | d;

        dest0 += RGB_TILE_HALF_BLOCK_WORDS;
        dest1 += RGB_TILE_HALF_BLOCK_WORDS;
        --count;
    } while (count != 0);

    S.y0 = y0;
    S.y1 = y1;
}

void YUV_16mx2_4x2(u32 count)
{
    u32 PTR4* dest0;
    u32 PTR4* dest1;
    u32 PTR4* y0;
    u32 PTR4* y1;
    u32 pitch;
    u8 PTR4* base;
    u8 PTR4* dest0_start;
    u8 PTR4* dest1_start;
    s32 row0;
    s32 row1;
    u32 tiledPitch;
    u32 PTR4* table;

    dest0_start = S.dest0;
    dest1_start = S.dest1;
    dest0 = (u32 PTR4*)dest0_start;
    dest1 = (u32 PTR4*)dest1_start;
    y0 = S.y0;
    y1 = S.y1;
    pitch = S.pitch;
    base = S.base;
    tiledPitch = RGB_TILE_PITCH16(pitch);
    table = mono16;

    row0 = RGB_TILE_ROW(dest0, base, pitch);
    row1 = RGB_TILE_ROW(dest1, base, pitch);
    dest0 = (u32 PTR4*)RGB_TILE_LOC(base, dest0, pitch, tiledPitch, row0);
    dest1 = (u32 PTR4*)RGB_TILE_LOC(base, dest1, pitch, tiledPitch, row1);

    S.dest0 = dest0_start + count * RGB_16_X2_4X2_ROW_BYTES;
    S.dest1 = dest1_start + count * RGB_16_X2_4X2_ROW_BYTES;

    do {
        u32 yv0 = *y0++;
        u32 yv1 = *y1++;
        u32 a = (u16)table[RGB_WORD_BYTE3(yv0)];
        u32 b = (u16)table[RGB_WORD_BYTE2(yv0)];
        u32 c = (u16)table[RGB_WORD_BYTE1(yv0)];
        u32 d = (u16)table[RGB_WORD_BYTE0(yv0)];

        dest0[0] = (a << 16) | a;
        dest0[1] = (b << 16) | b;
        dest0[8] = (c << 16) | c;
        dest0[9] = (d << 16) | d;

        a = (u16)table[RGB_WORD_BYTE3(yv1)];
        b = (u16)table[RGB_WORD_BYTE2(yv1)];
        c = (u16)table[RGB_WORD_BYTE1(yv1)];
        d = (u16)table[RGB_WORD_BYTE0(yv1)];
        dest1[0] = (a << 16) | a;
        dest1[1] = (b << 16) | b;
        dest1[8] = (c << 16) | c;
        dest1[9] = (d << 16) | d;

        dest0 += RGB_TILE_BLOCK_WORDS;
        dest1 += RGB_TILE_BLOCK_WORDS;
        --count;
    } while (count != 0);

    S.y0 = y0;
    S.y1 = y1;
}

void YUV_32a_4x2_even(u32 count)
{
    u16 vword;
    u16 uword;
    u32 yv0;
    u32 yv1;
    u32 av0;
    u32 av1;
    u32 PTR4* dest0;
    u32 PTR4* dest1;
    u32 PTR4* y1;
    u32 PTR4* y0;
    u16 PTR4* u;
    u16 PTR4* v;
    u32 PTR4* a0;
    u32 PTR4* a1;
    u32 pitch;
    u8 PTR4* base;
    s32 row0;
    s32 row1;
    u32 tiledPitch;
    s32 PTR4* u_to_b;
    s32 PTR4* v_to_gb;
    s32 PTR4* u_to_gb;
    s32 PTR4* v_to_r;

    dest0 = (u32 PTR4*)S.dest0;
    dest1 = (u32 PTR4*)S.dest1;
    y1 = S.y1;
    y0 = S.y0;
    u = S.u;
    v = S.v;
    a0 = S.a0;
    a1 = S.a1;
    pitch = S.pitch;
    base = S.base;
    tiledPitch = RGB_TILE_PITCH32(pitch);
    u_to_b = YUVTables;
    v_to_gb = YUVTables + YUV_V_TO_GB_OFFSET;
    u_to_gb = YUVTables + YUV_U_TO_GB_OFFSET;
    v_to_r = YUVTables + YUV_V_TO_R_OFFSET;

    row0 = RGB_TILE_ROW(dest0, base, pitch);
    row1 = RGB_TILE_ROW(dest1, base, pitch);
    dest0 = (u32 PTR4*)RGB_TILE_LOC(base, dest0, pitch, tiledPitch, row0);
    dest1 = (u32 PTR4*)RGB_TILE_LOC(base, dest1, pitch, tiledPitch, row1);

    S.dest0 += count * RGB_32_4X2_ROW_BYTES;
    S.dest1 += count * RGB_32_4X2_ROW_BYTES;

    do {
        u32 vhi;
        u32 uhi;
        u32 vlo;
        u32 ulo;
        u32 PTR4* y00;
        u32 PTR4* y01;
        u32 PTR4* y10;
        u32 PTR4* y11;
        s32 r;
        s32 b;
        s32 gb;

        yv0 = *y0++;
        vword = *v++;
        av0 = *a0++;
        uword = *u++;
        av1 = *a1++;
        yv1 = *y1++;
        vhi = RGB_WORD_BYTE1(vword);
        uhi = RGB_WORD_BYTE1(uword);

        y00 = clamp_ytable[RGB_WORD_BYTE3(yv0)];
        y01 = clamp_ytable[RGB_WORD_BYTE2(yv0)];
        r = v_to_r[vhi];
        gb = v_to_gb[vhi] + u_to_gb[uhi];
        b = u_to_b[uhi];
        dest0[0] = (av0 & RGB_ALPHA0_MASK) | (y00[r] << 16) | ((av0 >> 8) & RGB_ALPHA2_MASK) | y01[r];
        dest0[8] = (y00[gb] << 24) | (y00[b] << 16) | (y01[gb] << 8) | y01[b];

        y10 = clamp_ytable[RGB_WORD_BYTE3(yv1)];
        y11 = clamp_ytable[RGB_WORD_BYTE2(yv1)];
        dest1[0] = (av1 & RGB_ALPHA0_MASK) | (y10[r] << 16) | ((av1 >> 8) & RGB_ALPHA2_MASK) | y11[r];
        dest1[8] = (y10[gb] << 24) | (y10[b] << 16) | (y11[gb] << 8) | y11[b];

        vlo = RGB_WORD_BYTE0(vword);
        ulo = RGB_WORD_BYTE0(uword);
        y00 = clamp_ytable[RGB_WORD_BYTE1(yv0)];
        y01 = clamp_ytable[RGB_WORD_BYTE0(yv0)];
        r = v_to_r[vlo];
        gb = v_to_gb[vlo] + u_to_gb[ulo];
        b = u_to_b[ulo];
        dest0[1] = ((av0 & RGB_ALPHA2_MASK) | y00[r]) << 16 | (RGB_WORD_BYTE0(av0) << 8) | y01[r];
        dest0[9] = (y00[gb] << 24) | (y00[b] << 16) | (y01[gb] << 8) | y01[b];
        dest0 += RGB_TILE_BLOCK_WORDS;

        y10 = clamp_ytable[RGB_WORD_BYTE1(yv1)];
        y11 = clamp_ytable[RGB_WORD_BYTE0(yv1)];
        dest1[1] = ((av1 & RGB_ALPHA2_MASK) | y10[r]) << 16 | (RGB_WORD_BYTE0(av1) << 8) | y11[r];
        dest1[9] = (y10[gb] << 24) | (y10[b] << 16) | (y11[gb] << 8) | y11[b];
        dest1 += RGB_TILE_BLOCK_WORDS;

        count--;
    } while (count != 0);

    S.v = v;
    S.u = u;
    S.y1 = y1;
    S.y0 = y0;
    S.a0 = a0;
    S.a1 = a1;
}

void YUV_32ax2_4x2_even(u32 count)
{
    u16 vword;
    u16 uword;
    u32 yv0;
    u32 yv1;
    u32 av0;
    u32 av1;
    u32 PTR4* dest0;
    u32 PTR4* dest1;
    u32 PTR4* y1;
    u32 PTR4* y0;
    u16 PTR4* u;
    u16 PTR4* v;
    u32 PTR4* a0;
    u32 PTR4* a1;
    u32 pitch;
    u8 PTR4* base;
    s32 row0;
    s32 row1;
    u32 tiledPitch;
    s32 PTR4* u_to_b;
    s32 PTR4* v_to_gb;
    s32 PTR4* u_to_gb;
    s32 PTR4* v_to_r;

    dest0 = (u32 PTR4*)S.dest0;
    base = S.base;
    dest1 = (u32 PTR4*)S.dest1;
    pitch = S.pitch;
    tiledPitch = RGB_TILE_PITCH32(pitch);

    row0 = RGB_TILE_ROW(dest0, base, pitch);
    row1 = RGB_TILE_ROW(dest1, base, pitch);
    dest0 = (u32 PTR4*)RGB_TILE_LOC(base, dest0, pitch, tiledPitch, row0);
    dest1 = (u32 PTR4*)RGB_TILE_LOC(base, dest1, pitch, tiledPitch, row1);

    S.dest0 += count * RGB_32_X2_4X2_ROW_BYTES;
    S.dest1 += count * RGB_32_X2_4X2_ROW_BYTES;
    y1 = S.y1;
    y0 = S.y0;
    u = S.u;
    v = S.v;
    a0 = S.a0;
    a1 = S.a1;
    u_to_b = YUVTables;
    v_to_gb = YUVTables + YUV_V_TO_GB_OFFSET;
    u_to_gb = YUVTables + YUV_U_TO_GB_OFFSET;
    v_to_r = YUVTables + YUV_V_TO_R_OFFSET;

    do {
        u32 vhi;
        u32 uhi;
        u32 vlo;
        u32 ulo;
        u32 PTR4* y00;
        u32 PTR4* y01;
        u32 PTR4* y10;
        u32 PTR4* y11;
        u32 alpha0;
        u32 alpha1;
        s32 r;
        s32 b;
        s32 gb;

        vword = *v++;
        yv0 = *y0++;
        uword = *u++;
        av0 = *a0++;
        av1 = *a1++;
        yv1 = *y1++;
        vhi = RGB_WORD_BYTE1(vword);
        uhi = RGB_WORD_BYTE1(uword);
        alpha0 = av0 & RGB_ALPHA0_MASK;
        alpha1 = RGB_WORD_BYTE2(av0);

        y00 = clamp_ytable[RGB_WORD_BYTE3(yv0)];
        y01 = clamp_ytable[RGB_WORD_BYTE2(yv0)];
        r = v_to_r[vhi];
        gb = v_to_gb[vhi] + u_to_gb[uhi];
        b = u_to_b[uhi];

        dest0[0] = alpha0 | (y00[r] << 16) | (RGB_WORD_BYTE3(av0) << 8) | y00[r];
        dest0[1] = (alpha1 << 24) | (y01[r] << 16) | (alpha1 << 8) | y01[r];
        dest0[8] = (y00[gb] << 24) | (y00[b] << 16) | (y00[gb] << 8) | y00[b];
        dest0[9] = (y01[gb] << 24) | (y01[b] << 16) | (y01[gb] << 8) | y01[b];

        alpha0 = av1 & RGB_ALPHA0_MASK;
        alpha1 = RGB_WORD_BYTE2(av1);
        y10 = clamp_ytable[RGB_WORD_BYTE3(yv1)];
        y11 = clamp_ytable[RGB_WORD_BYTE2(yv1)];
        dest1[0] = alpha0 | (y10[r] << 16) | (RGB_WORD_BYTE3(av1) << 8) | y10[r];
        dest1[1] = (alpha1 << 24) | (y11[r] << 16) | (alpha1 << 8) | y11[r];
        dest1[8] = (y10[gb] << 24) | (y10[b] << 16) | (y10[gb] << 8) | y10[b];
        dest1[9] = (y11[gb] << 24) | (y11[b] << 16) | (y11[gb] << 8) | y11[b];

        vlo = RGB_WORD_BYTE0(vword);
        ulo = RGB_WORD_BYTE0(uword);
        y00 = clamp_ytable[RGB_WORD_BYTE1(yv0)];
        y01 = clamp_ytable[RGB_WORD_BYTE0(yv0)];
        r = v_to_r[vlo];
        gb = v_to_gb[vlo] + u_to_gb[ulo];
        b = u_to_b[ulo];

        alpha0 = RGB_WORD_BYTE1(av0);
        alpha1 = RGB_WORD_BYTE0(av0);
        dest0[16] = (alpha0 << 24) | (y00[r] << 16) | (alpha0 << 8) | y00[r];
        dest0[17] = (alpha1 << 24) | (y01[r] << 16) | (alpha1 << 8) | y01[r];
        dest0[24] = (y00[gb] << 24) | (y00[b] << 16) | (y00[gb] << 8) | y00[b];
        dest0[25] = (y01[gb] << 24) | (y01[b] << 16) | (y01[gb] << 8) | y01[b];
        dest0 += RGB_TILE_X2_BLOCK_WORDS;

        alpha0 = RGB_WORD_BYTE1(av1);
        alpha1 = RGB_WORD_BYTE0(av1);
        y10 = clamp_ytable[RGB_WORD_BYTE1(yv1)];
        y11 = clamp_ytable[RGB_WORD_BYTE0(yv1)];
        dest1[16] = (alpha0 << 24) | (y10[r] << 16) | (alpha0 << 8) | y10[r];
        dest1[17] = (alpha1 << 24) | (y11[r] << 16) | (alpha1 << 8) | y11[r];
        dest1[24] = (y10[gb] << 24) | (y10[b] << 16) | (y10[gb] << 8) | y10[b];
        dest1[25] = (y11[gb] << 24) | (y11[b] << 16) | (y11[gb] << 8) | y11[b];
        dest1 += RGB_TILE_X2_BLOCK_WORDS;

        count--;
    } while (count != 0);

    S.y0 = y0;
    S.y1 = y1;
    S.u = u;
    S.v = v;
    S.a0 = a0;
    S.a1 = a1;
}

void YUV_32am_4x2(u32 count)
{
    u32 PTR4* dest0;
    u32 PTR4* dest1;
    u32 PTR4* y0;
    u32 PTR4* y1;
    u32 PTR4* a0;
    u32 PTR4* a1;
    u32 pitch;
    u8 PTR4* base;
    s32 row0;
    s32 row1;
    u32 tiledPitch;

    dest0 = (u32 PTR4*)S.dest0;
    base = S.base;
    dest1 = (u32 PTR4*)S.dest1;
    pitch = S.pitch;
    tiledPitch = RGB_TILE_PITCH32(pitch);

    row0 = RGB_TILE_ROW(dest0, base, pitch);
    row1 = RGB_TILE_ROW(dest1, base, pitch);
    dest0 = (u32 PTR4*)RGB_TILE_LOC(base, dest0, pitch, tiledPitch, row0);
    dest1 = (u32 PTR4*)RGB_TILE_LOC(base, dest1, pitch, tiledPitch, row1);

    S.dest0 += count * RGB_32_4X2_ROW_BYTES;
    S.dest1 += count * RGB_32_4X2_ROW_BYTES;

    y0 = S.y0;
    y1 = S.y1;
    a0 = S.a0;
    a1 = S.a1;

    do {
        u32 yv0 = *y0++;
        u32 av0 = *a0++;
        u32 yv1 = *y1++;
        u32 av1 = *a1++;
        u32 p0 = mono32[RGB_WORD_BYTE3(yv0)];
        u32 p1 = mono32[RGB_WORD_BYTE2(yv0)];
        u32 p2 = mono32[RGB_WORD_BYTE1(yv0)];
        u32 p3 = mono32[RGB_WORD_BYTE0(yv0)];

        dest0[0] = (av0 & RGB_ALPHA0_MASK) | (p0 & RGB_WORD_HI_MASK) | (p1 >> 16) | ((av0 >> 8) & RGB_ALPHA2_MASK);
        dest0[1] =
            ((av0 & RGB_ALPHA2_MASK) << 16) | (p2 & RGB_WORD_HI_MASK) | (p3 >> 16) | (RGB_WORD_BYTE0(av0) << 8);
        dest0[8] = (p0 << 16) | (p1 & RGB_WORD_LO_MASK);
        dest0[9] = (p2 << 16) | (p3 & RGB_WORD_LO_MASK);

        p0 = mono32[RGB_WORD_BYTE3(yv1)];
        p1 = mono32[RGB_WORD_BYTE2(yv1)];
        p2 = mono32[RGB_WORD_BYTE1(yv1)];
        p3 = mono32[RGB_WORD_BYTE0(yv1)];
        dest1[0] = (av1 & RGB_ALPHA0_MASK) | (p0 & RGB_WORD_HI_MASK) | (p1 >> 16) | ((av1 >> 8) & RGB_ALPHA2_MASK);
        dest1[1] =
            ((av1 & RGB_ALPHA2_MASK) << 16) | (p2 & RGB_WORD_HI_MASK) | (p3 >> 16) | (RGB_WORD_BYTE0(av1) << 8);
        dest1[8] = (p0 << 16) | (p1 & RGB_WORD_LO_MASK);
        dest1[9] = (p2 << 16) | (p3 & RGB_WORD_LO_MASK);

        dest0 += RGB_TILE_BLOCK_WORDS;
        dest1 += RGB_TILE_BLOCK_WORDS;
        --count;
    } while (count != 0);

    S.y0 = y0;
    S.y1 = y1;
    S.a0 = a0;
    S.a1 = a1;
}

void YUV_32amx2_4x2(u32 count)
{
    u32 PTR4* dest0;
    u32 PTR4* dest1;
    u32 PTR4* y0;
    u32 PTR4* y1;
    u32 PTR4* a0;
    u32 PTR4* a1;
    u32 pitch;
    u8 PTR4* base;
    s32 row0;
    s32 row1;
    u32 tiledPitch;

    dest0 = (u32 PTR4*)S.dest0;
    base = S.base;
    dest1 = (u32 PTR4*)S.dest1;
    pitch = S.pitch;
    tiledPitch = RGB_TILE_PITCH32(pitch);

    row0 = RGB_TILE_ROW(dest0, base, pitch);
    row1 = RGB_TILE_ROW(dest1, base, pitch);
    dest0 = (u32 PTR4*)RGB_TILE_LOC(base, dest0, pitch, tiledPitch, row0);
    dest1 = (u32 PTR4*)RGB_TILE_LOC(base, dest1, pitch, tiledPitch, row1);

    S.dest0 += count * RGB_32_X2_4X2_ROW_BYTES;
    S.dest1 += count * RGB_32_X2_4X2_ROW_BYTES;

    y0 = S.y0;
    y1 = S.y1;
    a0 = S.a0;
    a1 = S.a1;

    do {
        u32 yv0 = *y0++;
        u32 av0 = *a0++;
        u32 yv1 = *y1++;
        u32 av1 = *a1++;
        u32 p0 = mono32[RGB_WORD_BYTE3(yv0)];
        u32 p1 = mono32[RGB_WORD_BYTE2(yv0)];
        u32 p2 = mono32[RGB_WORD_BYTE1(yv0)];
        u32 p3 = mono32[RGB_WORD_BYTE0(yv0)];
        u32 a_hi0 = av0 & RGB_ALPHA0_MASK;
        u32 a_hi1 = RGB_WORD_BYTE2(av0) << 24;
        u32 a_lo0 = RGB_WORD_BYTE3(av0) << 8;
        u32 a_lo1 = RGB_WORD_BYTE2(av0) << 8;

        dest0[0] = a_hi0 | (p0 & RGB_WORD_HI_MASK) | (p0 >> 16) | a_lo0;
        dest0[1] = a_hi1 | (p1 & RGB_WORD_HI_MASK) | (p1 >> 16) | a_lo1;
        dest0[8] = (p0 << 16) | (p0 & RGB_WORD_LO_MASK);
        dest0[9] = (p1 << 16) | (p1 & RGB_WORD_LO_MASK);
        dest0[16] = a_hi0 | (p2 & RGB_WORD_HI_MASK) | (p2 >> 16) | a_lo0;
        dest0[17] = a_hi1 | (p3 & RGB_WORD_HI_MASK) | (p3 >> 16) | a_lo1;
        dest0[24] = (p2 << 16) | (p2 & RGB_WORD_LO_MASK);
        dest0[25] = (p3 << 16) | (p3 & RGB_WORD_LO_MASK);

        p0 = mono32[RGB_WORD_BYTE3(yv1)];
        p1 = mono32[RGB_WORD_BYTE2(yv1)];
        p2 = mono32[RGB_WORD_BYTE1(yv1)];
        p3 = mono32[RGB_WORD_BYTE0(yv1)];
        a_hi0 = av1 & RGB_ALPHA0_MASK;
        a_hi1 = RGB_WORD_BYTE2(av1) << 24;
        a_lo0 = RGB_WORD_BYTE3(av1) << 8;
        a_lo1 = RGB_WORD_BYTE2(av1) << 8;
        dest1[0] = a_hi0 | (p0 & RGB_WORD_HI_MASK) | (p0 >> 16) | a_lo0;
        dest1[1] = a_hi1 | (p1 & RGB_WORD_HI_MASK) | (p1 >> 16) | a_lo1;
        dest1[8] = (p0 << 16) | (p0 & RGB_WORD_LO_MASK);
        dest1[9] = (p1 << 16) | (p1 & RGB_WORD_LO_MASK);
        dest1[16] = a_hi0 | (p2 & RGB_WORD_HI_MASK) | (p2 >> 16) | a_lo0;
        dest1[17] = a_hi1 | (p3 & RGB_WORD_HI_MASK) | (p3 >> 16) | a_lo1;
        dest1[24] = (p2 << 16) | (p2 & RGB_WORD_LO_MASK);
        dest1[25] = (p3 << 16) | (p3 & RGB_WORD_LO_MASK);

        dest0 += RGB_TILE_X2_BLOCK_WORDS;
        dest1 += RGB_TILE_X2_BLOCK_WORDS;
        --count;
    } while (count != 0);

    S.y0 = y0;
    S.y1 = y1;
    S.a0 = a0;
    S.a1 = a1;
}

void YUV_16a4_4x2_even(u32 count)
{
    u16 uword;
    u16 vword;
    u32 yv0;
    u32 yv1;
    u32 av0;
    u32 av1;
    u32 PTR4* dest0;
    u32 PTR4* dest1;
    u32 PTR4* y0;
    u32 PTR4* y1;
    u16 PTR4* u;
    u16 PTR4* v;
    u32 PTR4* a0;
    u32 PTR4* a1;
    u32 pitch;
    u8 PTR4* base;
    s32 row0;
    s32 row1;
    u32 tiledPitch;
    s32 PTR4* u_to_b;
    s32 PTR4* v_to_gb;
    s32 PTR4* u_to_gb;
    s32 PTR4* v_to_r;

    dest0 = (u32 PTR4*)S.dest0;
    dest1 = (u32 PTR4*)S.dest1;
    y0 = S.y0;
    y1 = S.y1;
    u = S.u;
    v = S.v;
    a0 = S.a0;
    a1 = S.a1;
    pitch = S.pitch;
    base = S.base;
    tiledPitch = RGB_TILE_PITCH16(pitch);
    u_to_b = YUVTables;
    v_to_gb = YUVTables + YUV_V_TO_GB_OFFSET;
    u_to_gb = YUVTables + YUV_U_TO_GB_OFFSET;
    v_to_r = YUVTables + YUV_V_TO_R_OFFSET;

    row0 = RGB_TILE_ROW(dest0, base, pitch);
    row1 = RGB_TILE_ROW(dest1, base, pitch);
    dest0 = (u32 PTR4*)RGB_TILE_LOC(base, dest0, pitch, tiledPitch, row0);
    dest1 = (u32 PTR4*)RGB_TILE_LOC(base, dest1, pitch, tiledPitch, row1);

    S.dest0 += count * RGB_16_4X2_ROW_BYTES;
    S.dest1 += count * RGB_16_4X2_ROW_BYTES;

    do {
        u32 uhi;
        u32 vhi;
        u32 ulo;
        u32 vlo;
        s32 rb;
        s32 gb;
        s32 bb;
        s32 ya;
        s32 yb;

        uword = *u++;
        vword = *v++;
        yv0 = *y0++;
        av0 = *a0++;
        uhi = RGB_WORD_BYTE1(uword);
        vhi = RGB_WORD_BYTE1(vword);
        rb = u_to_b[uhi];
        gb = u_to_gb[uhi] + v_to_gb[vhi];
        bb = v_to_r[vhi];
        ya = ytable[RGB_WORD_BYTE3(yv0)];
        yb = ytable[RGB_WORD_BYTE2(yv0)];
        yv1 = *y1++;
        av1 = *a1++;
        dest0[0] = (RGB565_A4(ya, rb, gb, bb, RGB_WORD_BYTE3(av0)) << 16) |
                   RGB565_A4(yb, rb, gb, bb, RGB_WORD_BYTE2(av0));

        ya = ytable[RGB_WORD_BYTE3(yv1)];
        yb = ytable[RGB_WORD_BYTE2(yv1)];
        dest1[0] = (RGB565_A4(ya, rb, gb, bb, RGB_WORD_BYTE3(av1)) << 16) |
                   RGB565_A4(yb, rb, gb, bb, RGB_WORD_BYTE2(av1));

        ulo = RGB_WORD_BYTE0(uword);
        vlo = RGB_WORD_BYTE0(vword);
        rb = u_to_b[ulo];
        gb = u_to_gb[ulo] + v_to_gb[vlo];
        bb = v_to_r[vlo];
        ya = ytable[RGB_WORD_BYTE1(yv0)];
        yb = ytable[RGB_WORD_BYTE0(yv0)];
        dest0[1] = (RGB565_A4(ya, rb, gb, bb, RGB_WORD_BYTE1(av0)) << 16) |
                   RGB565_A4(yb, rb, gb, bb, RGB_WORD_BYTE0(av0));
        dest0 += RGB_TILE_HALF_BLOCK_WORDS;

        ya = ytable[RGB_WORD_BYTE1(yv1)];
        yb = ytable[RGB_WORD_BYTE0(yv1)];
        dest1[1] = (RGB565_A4(ya, rb, gb, bb, RGB_WORD_BYTE1(av1)) << 16) |
                   RGB565_A4(yb, rb, gb, bb, RGB_WORD_BYTE0(av1));
        dest1 += RGB_TILE_HALF_BLOCK_WORDS;

        count--;
    } while (count != 0);

    S.u = u;
    S.v = v;
    S.y0 = y0;
    S.y1 = y1;
    S.a0 = a0;
    S.a1 = a1;
}

void YUV_16a4x2_4x2_even(u32 count)
{
    u16 uword;
    u16 vword;
    u32 yv0;
    u32 yv1;
    u32 av0;
    u32 av1;
    u32 PTR4* dest0;
    u32 PTR4* dest1;
    u32 PTR4* y0;
    u32 PTR4* y1;
    u16 PTR4* u;
    u16 PTR4* v;
    u32 PTR4* a0;
    u32 PTR4* a1;
    u32 pitch;
    u8 PTR4* base;
    s32 row0;
    s32 row1;
    u32 tiledPitch;
    s32 PTR4* u_to_b;
    s32 PTR4* v_to_gb;
    s32 PTR4* u_to_gb;
    s32 PTR4* v_to_r;
    u32 PTR4* clamp_r_base;
    u32 PTR4* clamp_g_base;
    u32 PTR4* clamp_b_base;
    u32 PTR4* clamp_a4_base;

    dest0 = (u32 PTR4*)S.dest0;
    dest1 = (u32 PTR4*)S.dest1;
    y0 = S.y0;
    y1 = S.y1;
    u = S.u;
    v = S.v;
    a0 = S.a0;
    a1 = S.a1;
    pitch = S.pitch;
    base = S.base;
    tiledPitch = RGB_TILE_PITCH16(pitch);
    u_to_b = YUVTables;
    v_to_gb = YUVTables + YUV_V_TO_GB_OFFSET;
    u_to_gb = YUVTables + YUV_U_TO_GB_OFFSET;
    v_to_r = YUVTables + YUV_V_TO_R_OFFSET;
    clamp_r_base = clamp_r + RGB_CLAMP_BIAS;
    clamp_g_base = clamp_g + RGB_CLAMP_BIAS;
    clamp_b_base = clamp_b + RGB_CLAMP_BIAS;
    clamp_a4_base = clamp_a4;

    row0 = RGB_TILE_ROW(dest0, base, pitch);
    row1 = RGB_TILE_ROW(dest1, base, pitch);
    dest0 = (u32 PTR4*)RGB_TILE_LOC(base, dest0, pitch, tiledPitch, row0);
    dest1 = (u32 PTR4*)RGB_TILE_LOC(base, dest1, pitch, tiledPitch, row1);

    S.dest0 += count * RGB_16_X2_4X2_ROW_BYTES;
    S.dest1 += count * RGB_16_X2_4X2_ROW_BYTES;

    do {
        u32 uhi;
        u32 vhi;
        u32 ulo;
        u32 vlo;
        u32 pix;
        s32 rb;
        s32 gb;
        s32 bb;
        s32 ya;
        s32 yb;

        uword = *u++;
        vword = *v++;
        yv0 = *y0++;
        av0 = *a0++;
        uhi = RGB_WORD_BYTE1(uword);
        vhi = RGB_WORD_BYTE1(vword);
        rb = u_to_b[uhi];
        gb = u_to_gb[uhi] + v_to_gb[vhi];
        bb = v_to_r[vhi];
        ya = ytable[RGB_WORD_BYTE3(yv0)];
        yb = ytable[RGB_WORD_BYTE2(yv0)];
        yv1 = *y1++;
        av1 = *a1++;

        pix = RGB565_A4_BIASED(clamp_r_base, clamp_g_base, clamp_b_base, clamp_a4_base, ya, rb, gb, bb, RGB_WORD_BYTE3(av0));
        dest0[0] = RGB565_PAIR(pix);
        pix = RGB565_A4_BIASED(clamp_r_base, clamp_g_base, clamp_b_base, clamp_a4_base, yb, rb, gb, bb, RGB_WORD_BYTE2(av0));
        dest0[1] = RGB565_PAIR(pix);

        ya = ytable[RGB_WORD_BYTE3(yv1)];
        yb = ytable[RGB_WORD_BYTE2(yv1)];
        pix = RGB565_A4_BIASED(clamp_r_base, clamp_g_base, clamp_b_base, clamp_a4_base, ya, rb, gb, bb, RGB_WORD_BYTE3(av1));
        dest1[0] = RGB565_PAIR(pix);
        pix = RGB565_A4_BIASED(clamp_r_base, clamp_g_base, clamp_b_base, clamp_a4_base, yb, rb, gb, bb, RGB_WORD_BYTE2(av1));
        dest1[1] = RGB565_PAIR(pix);

        ulo = RGB_WORD_BYTE0(uword);
        vlo = RGB_WORD_BYTE0(vword);
        rb = u_to_b[ulo];
        gb = u_to_gb[ulo] + v_to_gb[vlo];
        bb = v_to_r[vlo];
        ya = ytable[RGB_WORD_BYTE1(yv0)];
        yb = ytable[RGB_WORD_BYTE0(yv0)];
        pix = RGB565_A4_BIASED(clamp_r_base, clamp_g_base, clamp_b_base, clamp_a4_base, ya, rb, gb, bb, RGB_WORD_BYTE1(av0));
        dest0[8] = RGB565_PAIR(pix);
        pix = RGB565_A4_BIASED(clamp_r_base, clamp_g_base, clamp_b_base, clamp_a4_base, yb, rb, gb, bb, RGB_WORD_BYTE0(av0));
        dest0[9] = RGB565_PAIR(pix);
        dest0 += RGB_TILE_BLOCK_WORDS;

        ya = ytable[RGB_WORD_BYTE1(yv1)];
        yb = ytable[RGB_WORD_BYTE0(yv1)];
        pix = RGB565_A4_BIASED(clamp_r_base, clamp_g_base, clamp_b_base, clamp_a4_base, ya, rb, gb, bb, RGB_WORD_BYTE1(av1));
        dest1[8] = RGB565_PAIR(pix);
        pix = RGB565_A4_BIASED(clamp_r_base, clamp_g_base, clamp_b_base, clamp_a4_base, yb, rb, gb, bb, RGB_WORD_BYTE0(av1));
        dest1[9] = RGB565_PAIR(pix);
        dest1 += RGB_TILE_BLOCK_WORDS;

        count--;
    } while (count != 0);

    S.u = u;
    S.v = v;
    S.y0 = y0;
    S.y1 = y1;
    S.a0 = a0;
    S.a1 = a1;
}

void YUV_16a4m_4x2(u32 count)
{
    u32 PTR4* dest0;
    u32 PTR4* dest1;
    u32 PTR4* y0;
    u32 PTR4* y1;
    u32 PTR4* a0;
    u32 PTR4* a1;
    u32 pitch;
    u8 PTR4* base;
    u8 PTR4* dest0_start;
    u8 PTR4* dest1_start;
    s32 row0;
    s32 row1;
    u32 tiledPitch;

    dest0_start = S.dest0;
    dest1_start = S.dest1;
    dest0 = (u32 PTR4*)dest0_start;
    dest1 = (u32 PTR4*)dest1_start;
    y0 = S.y0;
    y1 = S.y1;
    a0 = S.a0;
    a1 = S.a1;
    pitch = S.pitch;
    base = S.base;
    tiledPitch = RGB_TILE_PITCH16(pitch);

    row0 = RGB_TILE_ROW(dest0, base, pitch);
    row1 = RGB_TILE_ROW(dest1, base, pitch);
    dest0 = (u32 PTR4*)RGB_TILE_LOC(base, dest0, pitch, tiledPitch, row0);
    dest1 = (u32 PTR4*)RGB_TILE_LOC(base, dest1, pitch, tiledPitch, row1);

    S.dest0 = dest0_start + count * RGB_16_4X2_ROW_BYTES;
    S.dest1 = dest1_start + count * RGB_16_4X2_ROW_BYTES;

    do {
        u32 av0 = *a0++;
        u32 yv0 = *y0++;
        u32 av1 = *a1++;
        u32 yv1 = *y1++;
        u32 p0 = (u16)clamp_a4[RGB_WORD_BYTE3(av0)] | (u16)mono16[RGB_WORD_BYTE3(yv0)];
        u32 p1 = (u16)clamp_a4[RGB_WORD_BYTE2(av0)] | (u16)mono16[RGB_WORD_BYTE2(yv0)];
        u32 p2 = (u16)clamp_a4[RGB_WORD_BYTE1(av0)] | (u16)mono16[RGB_WORD_BYTE1(yv0)];
        u32 p3 = (u16)clamp_a4[RGB_WORD_BYTE0(av0)] | (u16)mono16[RGB_WORD_BYTE0(yv0)];

        dest0[0] = (p0 << 16) | p1;
        dest0[1] = (p2 << 16) | p3;

        p0 = (u16)clamp_a4[RGB_WORD_BYTE3(av1)] | (u16)mono16[RGB_WORD_BYTE3(yv1)];
        p1 = (u16)clamp_a4[RGB_WORD_BYTE2(av1)] | (u16)mono16[RGB_WORD_BYTE2(yv1)];
        p2 = (u16)clamp_a4[RGB_WORD_BYTE1(av1)] | (u16)mono16[RGB_WORD_BYTE1(yv1)];
        p3 = (u16)clamp_a4[RGB_WORD_BYTE0(av1)] | (u16)mono16[RGB_WORD_BYTE0(yv1)];
        dest1[0] = (p0 << 16) | p1;
        dest1[1] = (p2 << 16) | p3;

        dest0 += RGB_TILE_HALF_BLOCK_WORDS;
        dest1 += RGB_TILE_HALF_BLOCK_WORDS;
        --count;
    } while (count != 0);

    S.y0 = y0;
    S.y1 = y1;
    S.a0 = a0;
    S.a1 = a1;
}

void YUV_16a4mx2_4x2(u32 count)
{
    u32 PTR4* dest0;
    u32 PTR4* dest1;
    u32 PTR4* y0;
    u32 PTR4* y1;
    u32 PTR4* a0;
    u32 PTR4* a1;
    u32 pitch;
    u8 PTR4* base;
    u8 PTR4* dest0_start;
    u8 PTR4* dest1_start;
    s32 row0;
    s32 row1;
    u32 tiledPitch;

    dest0_start = S.dest0;
    dest1_start = S.dest1;
    dest0 = (u32 PTR4*)dest0_start;
    dest1 = (u32 PTR4*)dest1_start;
    y0 = S.y0;
    y1 = S.y1;
    a0 = S.a0;
    a1 = S.a1;
    pitch = S.pitch;
    base = S.base;
    tiledPitch = RGB_TILE_PITCH16(pitch);

    row0 = RGB_TILE_ROW(dest0, base, pitch);
    row1 = RGB_TILE_ROW(dest1, base, pitch);
    dest0 = (u32 PTR4*)RGB_TILE_LOC(base, dest0, pitch, tiledPitch, row0);
    dest1 = (u32 PTR4*)RGB_TILE_LOC(base, dest1, pitch, tiledPitch, row1);

    S.dest0 = dest0_start + count * RGB_16_X2_4X2_ROW_BYTES;
    S.dest1 = dest1_start + count * RGB_16_X2_4X2_ROW_BYTES;

    do {
        u32 av0 = *a0++;
        u32 yv0 = *y0++;
        u32 av1 = *a1++;
        u32 yv1 = *y1++;
        u32 p0 = (u16)clamp_a4[RGB_WORD_BYTE3(av0)] | (u16)mono16[RGB_WORD_BYTE3(yv0)];
        u32 p1 = (u16)clamp_a4[RGB_WORD_BYTE2(av0)] | (u16)mono16[RGB_WORD_BYTE2(yv0)];
        u32 p2 = (u16)clamp_a4[RGB_WORD_BYTE1(av0)] | (u16)mono16[RGB_WORD_BYTE1(yv0)];
        u32 p3 = (u16)clamp_a4[RGB_WORD_BYTE0(av0)] | (u16)mono16[RGB_WORD_BYTE0(yv0)];

        dest0[0] = (p0 << 16) | p0;
        dest0[1] = (p1 << 16) | p1;
        dest0[8] = (p2 << 16) | p2;
        dest0[9] = (p3 << 16) | p3;

        p0 = (u16)clamp_a4[RGB_WORD_BYTE3(av1)] | (u16)mono16[RGB_WORD_BYTE3(yv1)];
        p1 = (u16)clamp_a4[RGB_WORD_BYTE2(av1)] | (u16)mono16[RGB_WORD_BYTE2(yv1)];
        p2 = (u16)clamp_a4[RGB_WORD_BYTE1(av1)] | (u16)mono16[RGB_WORD_BYTE1(yv1)];
        p3 = (u16)clamp_a4[RGB_WORD_BYTE0(av1)] | (u16)mono16[RGB_WORD_BYTE0(yv1)];
        dest1[0] = (p0 << 16) | p0;
        dest1[1] = (p1 << 16) | p1;
        dest1[8] = (p2 << 16) | p2;
        dest1[9] = (p3 << 16) | p3;

        dest0 += RGB_TILE_BLOCK_WORDS;
        dest1 += RGB_TILE_BLOCK_WORDS;
        --count;
    } while (count != 0);

    S.y0 = y0;
    S.y1 = y1;
    S.a0 = a0;
    S.a1 = a1;
}

void YUV_16_4x2_odd(void)
{
}

void YUV_32_4x2_odd(void)
{
}

void YUV_16x2_4x2_odd(void)
{
}

void YUV_16a4x2_4x2_odd(void)
{
}

void YUV_32x2_4x2_odd(void)
{
}

void YUV_16a4_4x2_odd(void)
{
}

void YUV_32a_4x2_odd(void)
{
}

void YUV_32ax2_4x2_odd(void)
{
}

void PTR4* GetTiledRgbLoc(void PTR4* ptr, u32 tilePitch)
{
    s32 row;

    row = RGB_TILE_ROW(ptr, S.base, S.pitch);

    return RGB_TILE_LOC(S.base, ptr, S.pitch, tilePitch, row);
}
