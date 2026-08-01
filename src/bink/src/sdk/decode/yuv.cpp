#include "bink.h"
#include "ngc/ngcrgb.h"
#include "yuv.h"

typedef void (*CoreBlitFn)(u32);
typedef void (*RowBlitFn)(u32, u32);
typedef u32 (*ColBlitFn)(u32, s32);

#define YUV_TABLE_PLANE_SIZE 0x100
#define RGB_CLAMP_BIAS 0x100
#define RGB_CLAMP_HIGH_OFFSET 0x200
#define YUV_V_TO_GB_OFFSET 0x100
#define YUV_U_TO_GB_OFFSET 0x200
#define YUV_V_TO_R_OFFSET 0x300
#define YUY2_NEUTRAL_CHROMA 0x80008000U
#define YUY2_CHROMA_MASK 0xff00ff00U
#define YUV_MASK_BLOCK_PIXELS 0x10
#define YUV_MASK_BLOCK_SHIFT 4
#define YUV_MASK_BLOCK_PAIR_PIXELS 0x20
#define YUV_MASK_BLOCK_MASK (YUV_MASK_BLOCK_PIXELS - 1)
#define YUV_MASK_HALF_BLOCK_ROWS 8
#define YUV_MASK_HALF_BLOCKS 4
#define YUV_MASK_FULL_BLOCKS 8
#define YUV_CHROMA_BLOCK_BYTES 8
#define YUV_CHROMA_SHIFT 1
#define BINKSURFACE_INVALID 0xffffffffU
#define YUV_ROUND_SHIFT 15
#define YUV_ROUND_BIAS ((1 << YUV_ROUND_SHIFT) - 1)
#define YUV_LUMA_BLACK 0x10
#define YUV_LUMA_BLACK_CUTOFF (YUV_LUMA_BLACK + 1)
#define YUV_LUMA_WHITE_CUTOFF 0xeb
#define YUV_LUMA_MAX 0xfe
#define YUV_LUMA_RANGE 0xdb
#define YUV_CHROMA_CENTER 0x80
#define RGB_CHANNEL_MAX 0xff
#define RGB_MONO_WHITE 0xffffffU
#define YUV_COEFF_Y_TO_RGB 0x950a
#define YUV_COEFF_V_TO_GB 0x680f
#define YUV_COEFF_U_TO_GB 0x3225
#define YUV_COEFF_V_TO_R 0xcc4b
#define YUV_COEFF_U_TO_B 0x10235
#define RGB_DUP16 0x10001
#define RGB_HIGH16 0x10000
#define RGB_A4_SOURCE_MASK 0x1ffffe0
#define RGB_A4_SHIFT 7
#define YUV_ZOOM_ALIGN 0x20
#define YUV_ZOOM_ALIGN_MASK (YUV_ZOOM_ALIGN - 1)
#define YUV_ZOOM_ALIGN_SIZE(width) (((width) + YUV_ZOOM_ALIGN_MASK) & ~YUV_ZOOM_ALIGN_MASK)
#define YUV_ZOOM_BUFFER_COUNT 2
#define YUV_PACKED_WORD_BYTES 4
#define YUV_TESTING_WORDS 2
#define YUV_BLIT_PAD_WORDS 3
#define YUV_BYTES_PER_PIXEL_32 4
#define YUV_BYTES_PER_PIXEL_24 3
#define YUV_BYTES_PER_PIXEL_16 2
#define YUV_CORE_4X2_STEP 2
#define YUV_BLIT_ROW_BYTES(width, blits) ((width) * (blits)->bytes_per_pixel)
#define YUV_BLIT_ROW_BYTES_X2(width, blits) (YUV_BLIT_ROW_BYTES((width), (blits)) * 2)
#define YUV_BLIT_SCALED_PIXEL_BYTES(blits, scale) ((blits)->bytes_per_pixel * (scale))
#define YUV_BLIT_SCALED_ROW_BYTES(width, blits, scale) \
    ((width) * YUV_BLIT_SCALED_PIXEL_BYTES((blits), (scale)))

enum YUVTableOrder {
    YUV_TABLE_ORDER_NORMAL,
    YUV_TABLE_ORDER_RB_INVERTED
};

// Per-surface dispatch: packed core kernels handle aligned 4x2 blocks, while
// row/column helpers cover grayscale, scaled, masked, and odd-edge cases.
struct BLITS {
    u32 bytes_per_pixel;
    u32 even_step;
    CoreBlitFn even;
    u32 odd_step;
    CoreBlitFn odd;
    u32 masked_step;
    CoreBlitFn masked;
    u32 even_x2_step;
    CoreBlitFn even_x2;
    u32 odd_x2_step;
    CoreBlitFn odd_x2;
    u32 masked_x2_step;
    CoreBlitFn masked_x2;
    RowBlitFn row;
    ColBlitFn col;
    RowBlitFn rowm;
    ColBlitFn colm;
    RowBlitFn row2w;
    ColBlitFn col2w;
    RowBlitFn rowm2w;
    ColBlitFn colm2w;
    RowBlitFn row2h;
    ColBlitFn col2h;
    RowBlitFn rowm2h;
    ColBlitFn colm2h;
    RowBlitFn row2wh;
    ColBlitFn col2wh;
    RowBlitFn rowm2wh;
    ColBlitFn colm2wh;
    u32 pad[YUV_BLIT_PAD_WORDS];
};

extern "C" void PTR4* radmalloc(u32 size);
extern "C" void radfree(void PTR4* ptr);
extern "C" u32 mult64anddiv(u32 left, u32 right, u32 divisor);

static s32 origYUVTables[YUV_TABLE_SIZE];

static YUVTableOrder whichyuv = YUV_TABLE_ORDER_NORMAL;
extern "C" {
u32 rgb_layout = BINKSURFACE_INVALID;
}

static inline s32 yuv_round15(s32 value)
{
    if (value < 0) {
        value += YUV_ROUND_BIAS;
    }

    return value >> YUV_ROUND_SHIFT;
}

#define RGB565(y, r, g, b)                                                                                             \
    ((u16)clamp_r[RGB_CLAMP_BIAS + (r) + (y)] | (u16)clamp_g[RGB_CLAMP_BIAS + (g) + (y)] | (u16)clamp_b[RGB_CLAMP_BIAS + (b) + (y)])

#define RGB565_A4(y, r, g, b, a) (RGB565((y), (r), (g), (b)) | (u16)clamp_a4[(a)])
#define RGB565_M(y) ((u16)mono16[(y)])
#define RGB565_M_A4(y, a) (RGB565_M((y)) | (u16)clamp_a4[(a)])
#define RGB32_M(y) (mono32[(y)])
#define RGB32_M_A(y, a) (RGB32_M((y)) | ((u32)(a) << 24))
#define YUY2_M(y0, y1) ((u32)(y0) | YUY2_NEUTRAL_CHROMA | ((u32)(y1) << 16))

#define DECL_CORE(name) extern "C" void name(u32)
DECL_CORE(YUV_32_4x2_even);
DECL_CORE(YUV_32_4x2_odd);
DECL_CORE(YUV_32m_4x2);
DECL_CORE(YUV_32x2_4x2_even);
DECL_CORE(YUV_32x2_4x2_odd);
DECL_CORE(YUV_32mx2_4x2);
DECL_CORE(YUV_32a_4x2_even);
DECL_CORE(YUV_32a_4x2_odd);
DECL_CORE(YUV_32am_4x2);
DECL_CORE(YUV_32ax2_4x2_even);
DECL_CORE(YUV_32ax2_4x2_odd);
DECL_CORE(YUV_32amx2_4x2);
DECL_CORE(YUV_16_4x2_even);
DECL_CORE(YUV_16_4x2_odd);
DECL_CORE(YUV_16m_4x2);
DECL_CORE(YUV_16x2_4x2_even);
DECL_CORE(YUV_16x2_4x2_odd);
DECL_CORE(YUV_16mx2_4x2);
DECL_CORE(YUV_16a4_4x2_even);
DECL_CORE(YUV_16a4_4x2_odd);
DECL_CORE(YUV_16a4m_4x2);
DECL_CORE(YUV_16a4x2_4x2_even);
DECL_CORE(YUV_16a4x2_4x2_odd);
DECL_CORE(YUV_16a4mx2_4x2);
DECL_CORE(YUY2_4x2);
DECL_CORE(YUY2_m_4x2);
DECL_CORE(YUY2_x2_4x2);
DECL_CORE(YUY2_mx2_4x2);
#undef DECL_CORE

#define DECL_ROW(name) static void name(u32 phase, u32 count)
#define DECL_COL(name) static u32 name(u32 count, s32 phase)
DECL_ROW(dounaligned32rowm2w);
DECL_COL(dounaligned32colm2w);
DECL_ROW(dounaligned32rowm2h);
DECL_COL(dounaligned32colm2h);
DECL_ROW(dounaligned32rowm2wh);
DECL_COL(dounaligned32colm2wh);
DECL_ROW(dounaligned32rowm);
DECL_COL(dounaligned32colm);
DECL_ROW(dounaligned32row);
DECL_COL(dounaligned32col);
DECL_ROW(dounaligned32row2w);
DECL_COL(dounaligned32col2w);
DECL_ROW(dounaligned32row2h);
DECL_COL(dounaligned32col2h);
DECL_ROW(dounaligned32row2wh);
DECL_COL(dounaligned32col2wh);
DECL_ROW(dounaligned32arowm2w);
DECL_COL(dounaligned32acolm2w);
DECL_ROW(dounaligned32arowm2h);
DECL_COL(dounaligned32acolm2h);
DECL_ROW(dounaligned32arowm2wh);
DECL_COL(dounaligned32acolm2wh);
DECL_ROW(dounaligned32arowm);
DECL_COL(dounaligned32acolm);
DECL_ROW(dounaligned32arow);
DECL_COL(dounaligned32acol);
DECL_ROW(dounaligned32arow2w);
DECL_COL(dounaligned32acol2w);
DECL_ROW(dounaligned32arow2h);
DECL_COL(dounaligned32acol2h);
DECL_ROW(dounaligned32arow2wh);
DECL_COL(dounaligned32acol2wh);
DECL_ROW(dounaligned16rowm2h);
DECL_COL(dounaligned16colm2h);
DECL_ROW(dounaligned16rowm2w);
DECL_COL(dounaligned16colm2w);
DECL_ROW(dounaligned16rowm2wh);
DECL_COL(dounaligned16colm2wh);
DECL_ROW(dounaligned16rowm);
DECL_COL(dounaligned16colm);
DECL_ROW(dounaligned16row);
DECL_COL(dounaligned16col);
DECL_ROW(dounaligned16row2h);
DECL_COL(dounaligned16col2h);
DECL_ROW(dounaligned16row2w);
DECL_COL(dounaligned16col2w);
DECL_ROW(dounaligned16row2wh);
DECL_COL(dounaligned16col2wh);
DECL_ROW(dounaligned16a4rowm2h);
DECL_COL(dounaligned16a4colm2h);
DECL_ROW(dounaligned16a4rowm2w);
DECL_COL(dounaligned16a4colm2w);
DECL_ROW(dounaligned16a4rowm2wh);
DECL_COL(dounaligned16a4colm2wh);
DECL_ROW(dounaligned16a4rowm);
DECL_COL(dounaligned16a4colm);
DECL_ROW(dounaligned16a4row);
DECL_COL(dounaligned16a4col);
DECL_ROW(dounaligned16a4row2h);
DECL_COL(dounaligned16a4col2h);
DECL_ROW(dounaligned16a4row2w);
DECL_COL(dounaligned16a4col2w);
DECL_ROW(dounaligned16a4row2wh);
DECL_COL(dounaligned16a4col2wh);
DECL_ROW(dounalignedYUY2rowm2wh);
DECL_COL(dounalignedYUY2colm2wh);
DECL_ROW(dounalignedYUY2rowm2w);
DECL_COL(dounalignedYUY2colm2w);
DECL_ROW(dounalignedYUY2rowm2h);
DECL_COL(dounalignedYUY2colm2h);
DECL_ROW(dounalignedYUY2row2wh);
DECL_COL(dounalignedYUY2col2wh);
DECL_ROW(dounalignedYUY2row2w);
DECL_COL(dounalignedYUY2col2w);
DECL_ROW(dounalignedYUY2row2h);
DECL_COL(dounalignedYUY2col2h);
DECL_ROW(dounalignedYUY2rowm);
DECL_COL(dounalignedYUY2colm);
DECL_ROW(dounalignedYUY2row);
DECL_COL(dounalignedYUY2col);
#undef DECL_ROW
#undef DECL_COL

static u32 z2hsize = 0;
static void PTR4* z2hbuf1 = 0;
static void PTR4* z2hbuf2 = 0;
static u32 donetables = 0;
static void (*EVEN)(u32);
static void (*ODD)(u32);
static void (*EVENx)(u32);
static void (*ODDx)(u32);
static void (*dounalignedrow)(u32, u32);
static u32 (*dounalignedcol)(u32, s32);
static u32 align;
static u32 alignm1;
static u32 alignshift;
static u32 testing[YUV_TESTING_WORDS];
static BLITS blits32 = { YUV_BYTES_PER_PIXEL_32,
                         YUV_CORE_4X2_STEP, YUV_32_4x2_even,
                         YUV_CORE_4X2_STEP, YUV_32_4x2_odd,
                         YUV_CORE_4X2_STEP, YUV_32m_4x2,
                         YUV_CORE_4X2_STEP, YUV_32x2_4x2_even,
                         YUV_CORE_4X2_STEP, YUV_32x2_4x2_odd,
                         YUV_CORE_4X2_STEP, YUV_32mx2_4x2,
                         dounaligned32row, dounaligned32col,
                         dounaligned32rowm, dounaligned32colm,
                         dounaligned32row2w, dounaligned32col2w,
                         dounaligned32rowm2w, dounaligned32colm2w,
                         dounaligned32row2h, dounaligned32col2h,
                         dounaligned32rowm2h, dounaligned32colm2h,
                         dounaligned32row2wh, dounaligned32col2wh,
                         dounaligned32rowm2wh, dounaligned32colm2wh,
                         { 0, 0, 0 } };
static BLITS blits32a = { YUV_BYTES_PER_PIXEL_32,
                          YUV_CORE_4X2_STEP, YUV_32a_4x2_even,
                          YUV_CORE_4X2_STEP, YUV_32a_4x2_odd,
                          YUV_CORE_4X2_STEP, YUV_32am_4x2,
                          YUV_CORE_4X2_STEP, YUV_32ax2_4x2_even,
                          YUV_CORE_4X2_STEP, YUV_32ax2_4x2_odd,
                          YUV_CORE_4X2_STEP, YUV_32amx2_4x2,
                          dounaligned32arow, dounaligned32acol,
                          dounaligned32arowm, dounaligned32acolm,
                          dounaligned32arow2w, dounaligned32acol2w,
                          dounaligned32arowm2w, dounaligned32acolm2w,
                          dounaligned32arow2h, dounaligned32acol2h,
                          dounaligned32arowm2h, dounaligned32acolm2h,
                          dounaligned32arow2wh, dounaligned32acol2wh,
                          dounaligned32arowm2wh, dounaligned32acolm2wh,
                          { 0, 0, 0 } };
static BLITS blits16 = { YUV_BYTES_PER_PIXEL_16,
                         YUV_CORE_4X2_STEP, YUV_16_4x2_even,
                         YUV_CORE_4X2_STEP, YUV_16_4x2_odd,
                         YUV_CORE_4X2_STEP, YUV_16m_4x2,
                         YUV_CORE_4X2_STEP, YUV_16x2_4x2_even,
                         YUV_CORE_4X2_STEP, YUV_16x2_4x2_odd,
                         YUV_CORE_4X2_STEP, YUV_16mx2_4x2,
                         dounaligned16row, dounaligned16col,
                         dounaligned16rowm, dounaligned16colm,
                         dounaligned16row2w, dounaligned16col2w,
                         dounaligned16rowm2w, dounaligned16colm2w,
                         dounaligned16row2h, dounaligned16col2h,
                         dounaligned16rowm2h, dounaligned16colm2h,
                         dounaligned16row2wh, dounaligned16col2wh,
                         dounaligned16rowm2wh, dounaligned16colm2wh,
                         { 0, 0, 0 } };
static BLITS blits16a4 = { YUV_BYTES_PER_PIXEL_16,
                           YUV_CORE_4X2_STEP, YUV_16a4_4x2_even,
                           YUV_CORE_4X2_STEP, YUV_16a4_4x2_odd,
                           YUV_CORE_4X2_STEP, YUV_16a4m_4x2,
                           YUV_CORE_4X2_STEP, YUV_16a4x2_4x2_even,
                           YUV_CORE_4X2_STEP, YUV_16a4x2_4x2_odd,
                           YUV_CORE_4X2_STEP, YUV_16a4mx2_4x2,
                           dounaligned16a4row, dounaligned16a4col,
                           dounaligned16a4rowm, dounaligned16a4colm,
                           dounaligned16a4row2w, dounaligned16a4col2w,
                           dounaligned16a4rowm2w, dounaligned16a4colm2w,
                           dounaligned16a4row2h, dounaligned16a4col2h,
                           dounaligned16a4rowm2h, dounaligned16a4colm2h,
                           dounaligned16a4row2wh, dounaligned16a4col2wh,
                           dounaligned16a4rowm2wh, dounaligned16a4colm2wh,
                           { 0, 0, 0 } };
static BLITS blitsyuy2 = { YUV_BYTES_PER_PIXEL_16,
                           YUV_CORE_4X2_STEP, YUY2_4x2,
                           YUV_CORE_4X2_STEP, YUY2_4x2,
                           YUV_CORE_4X2_STEP, YUY2_m_4x2,
                           YUV_CORE_4X2_STEP, YUY2_x2_4x2,
                           YUV_CORE_4X2_STEP, YUY2_x2_4x2,
                           YUV_CORE_4X2_STEP, YUY2_mx2_4x2,
                           dounalignedYUY2row, dounalignedYUY2col,
                           dounalignedYUY2rowm, dounalignedYUY2colm,
                           dounalignedYUY2row2w, dounalignedYUY2col2w,
                           dounalignedYUY2rowm2w, dounalignedYUY2colm2w,
                           dounalignedYUY2row2h, dounalignedYUY2col2h,
                           dounalignedYUY2rowm2h, dounalignedYUY2colm2h,
                           dounalignedYUY2row2wh, dounalignedYUY2col2wh,
                           dounalignedYUY2rowm2wh, dounalignedYUY2colm2wh,
                           { 0, 0, 0 } };

#pragma dont_inline on
static void checkzoombufs(u32 width)
{
    u32 rounded;
    u32 size;

    rounded = YUV_ZOOM_ALIGN_SIZE(width);
    size = rounded * YUV_ZOOM_BUFFER_COUNT;
    if (size > z2hsize) {
        if (z2hbuf1 != 0) {
            radfree(z2hbuf1);
            z2hbuf1 = 0;
        }
        z2hbuf1 = radmalloc(size);
        z2hsize = size;
    }
    z2hbuf2 = (u8 PTR4*)z2hbuf1 + rounded;
}

static void zoom2heven(s32 count)
{
    u8 PTR4* dest0;
    u8 PTR4* dest1;
    u32 PTR4* y0;
    u32 PTR4* y1;
    u16 PTR4* u;
    u16 PTR4* v;
    u32 PTR4* a0;
    u32 PTR4* a1;
    s32 pitch_delta;

    dest1 = S.dest1;
    dest0 = S.dest0;
    y0 = S.y0;
    y1 = S.y1;
    a0 = S.a0;
    a1 = S.a1;
    u = S.u;
    v = S.v;
    EVENx(count);
    S.dest0 = dest0 + S.pitch;
    pitch_delta = S.dest1 - dest1;
    S.dest1 = dest1 + S.pitch;
    S.y0 = y0;
    S.y1 = y1;
    S.a0 = a0;
    S.a1 = a1;
    S.u = u;
    S.v = v;
    EVENx(count);
    S.dest0 = dest0 + pitch_delta;
    S.dest1 = dest1 + pitch_delta;
}

static void zoom2hodd(s32 count)
{
    u8 PTR4* dest0;
    u8 PTR4* dest1;
    u32 PTR4* y0;
    u32 PTR4* y1;
    u16 PTR4* u;
    u16 PTR4* v;
    u32 PTR4* a0;
    u32 PTR4* a1;
    s32 pitch_delta;

    dest1 = S.dest1;
    dest0 = S.dest0;
    y0 = S.y0;
    y1 = S.y1;
    a0 = S.a0;
    a1 = S.a1;
    u = S.u;
    v = S.v;
    ODDx(count);
    S.dest0 = dest0 + S.pitch;
    pitch_delta = S.dest1 - dest1;
    S.dest1 = dest1 + S.pitch;
    S.y0 = y0;
    S.y1 = y1;
    S.a0 = a0;
    S.a1 = a1;
    S.u = u;
    S.v = v;
    ODDx(count);
    S.dest0 = dest0 + pitch_delta;
    S.dest1 = dest1 + pitch_delta;
}

static void setup_scaling(u32 flags, u32 PTR4* pitch, u32 width, u32 srcpitch, BLITS PTR4* blits,
                          u32 PTR4* pitch_delta)
{
    u32 mode;
    u32 step;

    testing[0] = 0;
    S.pitch = *pitch;

    // BINKRBINVERT swaps the U/V contribution tables so the packed RGB helpers
    // can use the same per-pixel math for both channel orders.
    if ((flags & BINKRBINVERT) != 0) {
        if (whichyuv != YUV_TABLE_ORDER_RB_INVERTED) {
            whichyuv = YUV_TABLE_ORDER_RB_INVERTED;
            memcpy(YUVTables + YUV_V_TO_R_OFFSET, origYUVTables,
                   YUV_TABLE_PLANE_SIZE * sizeof(s32));
            memcpy(YUVTables + YUV_V_TO_GB_OFFSET, origYUVTables + YUV_U_TO_GB_OFFSET,
                   YUV_TABLE_PLANE_SIZE * sizeof(s32));
            memcpy(YUVTables + YUV_U_TO_GB_OFFSET, origYUVTables + YUV_V_TO_GB_OFFSET,
                   YUV_TABLE_PLANE_SIZE * sizeof(s32));
            memcpy(YUVTables, origYUVTables + YUV_V_TO_R_OFFSET,
                   YUV_TABLE_PLANE_SIZE * sizeof(s32));
        }
    } else if (whichyuv != YUV_TABLE_ORDER_NORMAL) {
        whichyuv = YUV_TABLE_ORDER_NORMAL;
        memcpy(YUVTables, origYUVTables, sizeof(origYUVTables));
    }

    mode = flags & BINKCOPYNOSCALING;

    if (mode == BINKCOPY2XH) {
        checkzoombufs(YUV_BLIT_ROW_BYTES(width, blits));
        *pitch *= 2;
        *pitch_delta = *pitch - YUV_BLIT_ROW_BYTES(width, blits);
        if ((flags & BINKGRAYSCALE) == 0) {
            step = blits->odd_step;
            EVENx = blits->even;
            ODDx = blits->odd;
            EVEN = (CoreBlitFn)zoom2heven;
            ODD = (CoreBlitFn)zoom2hodd;
            dounalignedrow = blits->row2h;
            dounalignedcol = blits->col2h;
            if (step < blits->even_step) {
                step = blits->even_step;
            }
        } else {
            step = blits->masked_step;
            EVENx = blits->masked;
            ODDx = EVENx;
            EVEN = (CoreBlitFn)zoom2heven;
            ODD = (CoreBlitFn)zoom2hodd;
            dounalignedrow = blits->rowm2h;
            dounalignedcol = blits->colm2h;
        }
    } else if (mode == BINKCOPY2XW || mode == BINKCOPY2XWHI) {
        *pitch_delta = *pitch - YUV_BLIT_ROW_BYTES_X2(width, blits);
        if ((flags & BINKGRAYSCALE) == 0) {
            step = blits->odd_x2_step;
            EVEN = blits->even_x2;
            ODD = blits->odd_x2;
            dounalignedrow = blits->row2w;
            dounalignedcol = blits->col2w;
            if (step < blits->even_x2_step) {
                step = blits->even_x2_step;
            }
        } else {
            step = blits->masked_x2_step;
            EVEN = blits->masked_x2;
            ODD = EVEN;
            dounalignedrow = blits->rowm2w;
            dounalignedcol = blits->colm2w;
        }
    } else if (mode == BINKCOPY2XWH) {
        checkzoombufs(YUV_BLIT_ROW_BYTES_X2(width, blits));
        *pitch *= 2;
        *pitch_delta = *pitch - YUV_BLIT_ROW_BYTES_X2(width, blits);
        if ((flags & BINKGRAYSCALE) == 0) {
            step = blits->odd_x2_step;
            EVENx = blits->even_x2;
            ODDx = blits->odd_x2;
            EVEN = (CoreBlitFn)zoom2heven;
            ODD = (CoreBlitFn)zoom2hodd;
            dounalignedrow = blits->row2wh;
            dounalignedcol = blits->col2wh;
            if (step < blits->even_x2_step) {
                step = blits->even_x2_step;
            }
        } else {
            step = blits->masked_x2_step;
            EVENx = blits->masked_x2;
            ODDx = EVENx;
            EVEN = (CoreBlitFn)zoom2heven;
            ODD = (CoreBlitFn)zoom2hodd;
            dounalignedrow = blits->rowm2wh;
            dounalignedcol = blits->colm2wh;
        }
    } else {
        *pitch_delta = *pitch - YUV_BLIT_ROW_BYTES(width, blits);
        if ((flags & BINKGRAYSCALE) == 0) {
            step = blits->odd_step;
            EVEN = blits->even;
            ODD = blits->odd;
            dounalignedrow = blits->row;
            dounalignedcol = blits->col;
            if (step < blits->even_step) {
                step = blits->even_step;
            }
        } else {
            step = blits->masked_step;
            EVEN = blits->masked;
            ODD = EVEN;
            dounalignedrow = blits->rowm;
            dounalignedcol = blits->colm;
        }
    }

    alignshift = step;
    align = 1 << alignshift;
    alignm1 = align - 1;
}

extern "C" {
// Generic rectangle blitter: scalar row/column helpers cover odd edges, then
// the aligned interior is handed to the 4x2 core kernels in the BLITS table.
static void YUV_blit(void PTR4* dest,
                     u32 destx,
                     u32 desty,
                     u32 destpitch,
                     void PTR4* src,
                     u32 srcx,
                     u32 srcy,
                     u32 srcw,
                     u32 srch,
                     u32 srcpitch,
                     u32 srcheight,
                     u32 flags,
                     void PTR4* alpha,
                     BLITS PTR4* blits)
{
    u32 pitch;
    u32 pitch_delta;
    u32 chroma_pitch;
    u32 mode;
    u32 endy;
    u32 align_count;
    s32 y_delta;
    s32 c_delta;
    s32 a_delta;
    u8 PTR4* ybase;
    u8 PTR4* abase;
    u8 PTR4* cbase;

    pitch = destpitch;
    mode = flags & BINKCOPYNOSCALING;

    if (mode == BINKCOPY1XI) {
        pitch *= 2;
        srcy >>= 1;
        srch >>= 1;
        srcheight >>= 1;
        srcpitch *= 2;
    }

    S.base = (u8 PTR4*)dest;
    if (blits->bytes_per_pixel == YUV_BYTES_PER_PIXEL_16) {
        if ((((u32)dest) & 3) == 2) {
            destx++;
            dest = (void PTR4*)(((u32)dest) & ~3);
        }
    } else if (blits->bytes_per_pixel == YUV_BYTES_PER_PIXEL_24) {
        if ((((u32)dest - 3) & 3) == 0) {
            destx++;
            dest = (void PTR4*)((u32)dest - 3);
        } else if ((((u32)dest - 6) & 3) == 0) {
            destx += 2;
            dest = (void PTR4*)((u32)dest - 6);
        } else if ((((u32)dest - 9) & 3) == 0) {
            destx += 3;
            dest = (void PTR4*)((u32)dest - 9);
        }
    }

    S.dest0 = (u8 PTR4*)dest + desty * destpitch + YUV_BLIT_ROW_BYTES(destx, blits);
    if (mode == BINKCOPY2XHI || mode == BINKCOPY2XWHI) {
        pitch *= 2;
    }

    setup_scaling(flags, &pitch, srcw, srch, blits, &pitch_delta);

    S.dest1 = S.dest0 + pitch;
    ybase = (u8 PTR4*)src + srcx + srcy * srcpitch;
    S.y0 = (u32 PTR4*)ybase;
    S.y1 = (u32 PTR4*)(ybase + srcpitch);

    if (alpha != 0) {
        abase = (u8 PTR4*)alpha + srcx + srcy * srcpitch;
        S.a0 = (u32 PTR4*)abase;
        S.a1 = (u32 PTR4*)(abase + srcpitch);
    } else {
        S.a0 = 0;
        S.a1 = 0;
    }

    chroma_pitch = srcpitch >> YUV_CHROMA_SHIFT;
    cbase = (u8 PTR4*)src + srcpitch * srcheight;
    if ((flags & BINKRBINVERT) != 0) {
        S.u = (u16 PTR4*)cbase;
        S.v = (u16 PTR4*)(cbase + chroma_pitch * (srcheight >> YUV_CHROMA_SHIFT));
    } else {
        S.v = (u16 PTR4*)cbase;
        S.u = (u16 PTR4*)(cbase + chroma_pitch * (srcheight >> YUV_CHROMA_SHIFT));
    }

    S.u = (u16 PTR4*)((u8 PTR4*)S.u + (srcx >> YUV_CHROMA_SHIFT) +
                       (srcy >> YUV_CHROMA_SHIFT) * chroma_pitch);
    S.v = (u16 PTR4*)((u8 PTR4*)S.v + (srcx >> YUV_CHROMA_SHIFT) +
                       (srcy >> YUV_CHROMA_SHIFT) * chroma_pitch);

    y_delta = srcpitch - srcw;
    a_delta = y_delta;
    c_delta = chroma_pitch - (srcw >> YUV_CHROMA_SHIFT);
    if ((srcw & 1) != 0 && (srcx & 1) != 0) {
        c_delta--;
    }

    endy = srcy + srch - 1;
    if ((srcy & 1) != 0 && (s32)srcy <= (s32)endy) {
        srcy++;
        dounalignedrow(srcx, srcw);
        S.dest0 += pitch_delta;
        S.dest1 = S.dest0 + pitch;
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + y_delta);
        S.y1 = (u32 PTR4*)((u8 PTR4*)S.y0 + srcpitch);
        S.u = (u16 PTR4*)((u8 PTR4*)S.u + c_delta);
        S.v = (u16 PTR4*)((u8 PTR4*)S.v + c_delta);
        if (alpha != 0) {
            S.a0 = (u32 PTR4*)((u8 PTR4*)S.a0 + a_delta);
            S.a1 = (u32 PTR4*)((u8 PTR4*)S.a0 + srcpitch);
        }
    }

    align_count = (4 - (destx & 3)) & 3;
    if (srcw < align_count) {
        align_count = srcw;
    }

    while ((s32)srcy < (s32)endy) {
        u32 phase;
        u32 count;
        u32 aligned;
        u32 blocks;
        u32 tail;

        phase = srcx;
        count = srcw;
        if (align_count != 0) {
            count -= align_count;
            phase = dounalignedcol(align_count, phase);
        }

        aligned = count & ~alignm1;
        blocks = aligned >> 2;
        tail = count - blocks * 4;

        if (blocks != 0) {
            if ((phase & 1) == 0) {
                EVEN(blocks);
            } else {
                ODD(blocks);
            }
        }

        if (tail != 0) {
            dounalignedcol(tail, phase + (aligned & ~3));
        }

        srcy += 2;
        S.dest0 = S.dest1 + pitch_delta;
        S.dest1 = S.dest0 + pitch;
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y1 + y_delta);
        S.y1 = (u32 PTR4*)((u8 PTR4*)S.y0 + srcpitch);
        S.u = (u16 PTR4*)((u8 PTR4*)S.u + c_delta);
        S.v = (u16 PTR4*)((u8 PTR4*)S.v + c_delta);
        if (alpha != 0) {
            S.a0 = (u32 PTR4*)((u8 PTR4*)S.a1 + a_delta);
            S.a1 = (u32 PTR4*)((u8 PTR4*)S.a0 + srcpitch);
        }
    }

    if ((s32)srcy <= (s32)endy) {
        dounalignedrow(srcx, srcw);
    }
}
}

static inline void blit_mask_block(u32 count, s32 y_delta, s32 c_delta, s32 pitch_delta, u32 srcpitch)
{
    RGBContext saved;
    s32 i;

    saved = S;
    i = YUV_MASK_HALF_BLOCK_ROWS;
    do {
        EVEN(count);
        i--;
        S.dest0 = S.dest1 + pitch_delta;
        S.dest1 = S.dest0 + S.pitch;
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y1 + y_delta);
        S.y1 = (u32 PTR4*)((u8 PTR4*)S.y0 + srcpitch);
        S.u = (u16 PTR4*)((u8 PTR4*)S.u + c_delta);
        S.v = (u16 PTR4*)((u8 PTR4*)S.v + c_delta);
        if (S.a0 != 0) {
            S.a0 = (u32 PTR4*)((u8 PTR4*)S.a1 + y_delta);
            S.a1 = (u32 PTR4*)((u8 PTR4*)S.a0 + srcpitch);
        }
    } while (i != 0);
    S = saved;
}

extern "C" {
// Dirty-mask blitter works in 16x16 mask blocks and falls back to the generic
// rectangle path for partial right and bottom edges.
static void YUV_blit_mask(void PTR4* dest,
                          u32 destx,
                          u32 desty,
                          u32 destpitch,
                          u8 PTR4* mask,
                          u32 maskpitch,
                          void PTR4* src,
                          u32 srcx,
                          u32 srcy,
                          u32 srcw,
                          u32 srch,
                          u32 srcpitch,
                          u32 srcheight,
                          u32 flags,
                          void PTR4* alpha,
                          BLITS PTR4* blits)
{
    u32 pitch16;
    u32 pitch32;
    u32 pitch_delta16;
    u32 pitch_delta32;
    u32 mode;
    u32 mask_step;
    u32 xscale;
    u32 chroma_pitch;
    u32 inner_x;
    u32 inner_y;
    u32 end_x;
    u32 end_y;
    u32 full_w;
    u32 full_h;
    u32 old_srcw;
    u32 old_srch;
    u32 old_srcheight;
    u32 old_srcpitch;
    u8 PTR4* maskp;
    u8 PTR4* ybase;
    u8 PTR4* abase;
    u8 PTR4* cbase;
    s32 y_delta16;
    s32 y_delta32;
    s32 c_delta16;
    s32 c_delta32;
    s32 row_skip;
    s32 mask_row_skip;

    old_srcw = srcw;
    old_srch = srch;
    old_srcheight = srcheight;
    old_srcpitch = srcpitch;

    pitch16 = destpitch;
    mode = flags & BINKCOPYNOSCALING;
    if (mode == BINKCOPY1XI) {
        pitch16 *= 2;
        srch >>= 1;
        srcy >>= 1;
        srcheight >>= 1;
        srcpitch *= 2;
        maskpitch *= 2;
        mask_step = maskpitch >> YUV_CHROMA_SHIFT;
    } else {
        mask_step = 0;
    }

    S.base = (u8 PTR4*)dest;
    S.dest0 = (u8 PTR4*)dest + desty * destpitch + YUV_BLIT_ROW_BYTES(destx, blits);
    if (mode == BINKCOPY2XHI || mode == BINKCOPY2XWHI) {
        pitch16 *= 2;
    }

    setup_scaling(flags, &pitch16, YUV_MASK_BLOCK_PIXELS, srch, blits, &pitch_delta16);
    pitch32 = pitch16;
    setup_scaling(flags, &pitch32, YUV_MASK_BLOCK_PAIR_PIXELS, srch, blits, &pitch_delta32);

    if (mode == BINKCOPY2XW || mode == BINKCOPY2XWHI || mode == BINKCOPY2XWH) {
        xscale = 2;
    } else {
        xscale = 1;
    }

    chroma_pitch = srcpitch >> YUV_CHROMA_SHIFT;
    S.dest1 = S.dest0 + pitch32;
    ybase = (u8 PTR4*)src + srcx + srcy * srcpitch;
    S.y0 = (u32 PTR4*)ybase;
    S.y1 = (u32 PTR4*)(ybase + srcpitch);
    if (alpha != 0) {
        abase = (u8 PTR4*)alpha + srcx + srcy * srcpitch;
        S.a0 = (u32 PTR4*)abase;
        S.a1 = (u32 PTR4*)(abase + srcpitch);
    } else {
        S.a0 = 0;
        S.a1 = 0;
    }

    cbase = (u8 PTR4*)src + srcpitch * srcheight;
    if ((flags & BINKRBINVERT) == 0) {
        S.v = (u16 PTR4*)cbase;
        S.u = (u16 PTR4*)(cbase + chroma_pitch * (srcheight >> YUV_CHROMA_SHIFT));
    } else {
        S.u = (u16 PTR4*)cbase;
        S.v = (u16 PTR4*)(cbase + chroma_pitch * (srcheight >> YUV_CHROMA_SHIFT));
    }
    S.u = (u16 PTR4*)((u8 PTR4*)S.u + (srcx >> YUV_CHROMA_SHIFT) +
                       (srcy >> YUV_CHROMA_SHIFT) * chroma_pitch);
    S.v = (u16 PTR4*)((u8 PTR4*)S.v + (srcx >> YUV_CHROMA_SHIFT) +
                       (srcy >> YUV_CHROMA_SHIFT) * chroma_pitch);

    y_delta16 = srcpitch - YUV_MASK_BLOCK_PIXELS;
    y_delta32 = srcpitch - YUV_MASK_BLOCK_PAIR_PIXELS;
    c_delta16 = chroma_pitch - YUV_CHROMA_BLOCK_BYTES;
    c_delta32 = chroma_pitch - YUV_MASK_BLOCK_PIXELS;
    row_skip = (pitch16 * YUV_MASK_BLOCK_MASK - YUV_BLIT_SCALED_ROW_BYTES(srcw, blits, xscale)) +
               YUV_BLIT_SCALED_ROW_BYTES(srcw & YUV_MASK_BLOCK_MASK, blits, xscale);
    mask_row_skip = maskpitch - (srcw >> YUV_MASK_BLOCK_SHIFT);

    end_y = srcy + srch - 1;
    end_x = srcx + srcw - 1;
    maskp = mask + maskpitch * (srcy >> YUV_MASK_BLOCK_SHIFT) +
            (((s32)srcx < 0 ? srcx + YUV_MASK_BLOCK_MASK : srcx) >> YUV_MASK_BLOCK_SHIFT);

    inner_y = srcy;
    while ((s32)(inner_y + YUV_MASK_BLOCK_MASK) <= (s32)end_y) {
        u32 next_y;
        u32 x;

        next_y = inner_y + YUV_MASK_BLOCK_PIXELS;
        x = srcx;
        while ((s32)(x + (YUV_MASK_BLOCK_PAIR_PIXELS - 1)) <= (s32)end_x) {
            u8 bits;

            bits = (maskp[0] != 0) ? 1 : 0;
            if (maskp[1] != 0) {
                bits += 2;
            }
            if (mask_step != 0) {
                u8 lower;
                lower = 0;
                if (maskp[mask_step] != 0) {
                    lower += 1;
                }
                if (maskp[mask_step + 1] != 0) {
                    lower += 2;
                }
                bits |= lower;
            }

            if (bits == 1) {
                blit_mask_block(YUV_MASK_HALF_BLOCKS, y_delta16, c_delta16, pitch_delta16, srcpitch);
            } else if (bits == 2) {
                RGBContext saved = S;
                S.dest0 += YUV_MASK_BLOCK_PIXELS;
                S.dest1 += YUV_MASK_BLOCK_PIXELS;
                S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + YUV_MASK_BLOCK_PIXELS);
                S.y1 = (u32 PTR4*)((u8 PTR4*)S.y1 + YUV_MASK_BLOCK_PIXELS);
                S.u = (u16 PTR4*)((u8 PTR4*)S.u + YUV_CHROMA_BLOCK_BYTES);
                S.v = (u16 PTR4*)((u8 PTR4*)S.v + YUV_CHROMA_BLOCK_BYTES);
                blit_mask_block(YUV_MASK_HALF_BLOCKS, y_delta16, c_delta16, pitch_delta16, srcpitch);
                S = saved;
            } else if (bits == 3) {
                blit_mask_block(YUV_MASK_FULL_BLOCKS, y_delta32, c_delta32, pitch_delta32, srcpitch);
            }

            maskp += 2;
            S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + YUV_MASK_BLOCK_PAIR_PIXELS);
            S.y1 = (u32 PTR4*)((u8 PTR4*)S.y1 + YUV_MASK_BLOCK_PAIR_PIXELS);
            S.u = (u16 PTR4*)((u8 PTR4*)S.u + YUV_MASK_BLOCK_PIXELS);
            S.v = (u16 PTR4*)((u8 PTR4*)S.v + YUV_MASK_BLOCK_PIXELS);
            S.dest0 += YUV_BLIT_SCALED_ROW_BYTES(YUV_MASK_BLOCK_PAIR_PIXELS, blits, xscale);
            S.dest1 += YUV_BLIT_SCALED_ROW_BYTES(YUV_MASK_BLOCK_PAIR_PIXELS, blits, xscale);
            x += YUV_MASK_BLOCK_PAIR_PIXELS;
        }

        if ((s32)(x + YUV_MASK_BLOCK_MASK) <= (s32)end_x) {
            u8 bits = *maskp++;
            if (mask_step != 0) {
                bits |= maskp[mask_step - 1];
            }
            if (bits != 0) {
                blit_mask_block(YUV_MASK_HALF_BLOCKS, y_delta16, c_delta16, pitch_delta16, srcpitch);
            }
            S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + YUV_MASK_BLOCK_PIXELS);
            S.y1 = (u32 PTR4*)((u8 PTR4*)S.y1 + YUV_MASK_BLOCK_PIXELS);
            S.u = (u16 PTR4*)((u8 PTR4*)S.u + YUV_CHROMA_BLOCK_BYTES);
            S.v = (u16 PTR4*)((u8 PTR4*)S.v + YUV_CHROMA_BLOCK_BYTES);
            S.dest0 += YUV_BLIT_SCALED_ROW_BYTES(YUV_MASK_BLOCK_PIXELS, blits, xscale);
            S.dest1 += YUV_BLIT_SCALED_ROW_BYTES(YUV_MASK_BLOCK_PIXELS, blits, xscale);
        }

        S.dest0 = S.dest1 + row_skip;
        S.dest1 = S.dest0 + pitch16;
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y1 + y_delta16 + (srcpitch * (YUV_MASK_BLOCK_PIXELS - 2)));
        S.y1 = (u32 PTR4*)((u8 PTR4*)S.y0 + srcpitch);
        S.u = (u16 PTR4*)((u8 PTR4*)S.u + c_delta16 + (chroma_pitch * 7));
        S.v = (u16 PTR4*)((u8 PTR4*)S.v + c_delta16 + (chroma_pitch * 7));
        maskp += mask_row_skip;
        inner_y = next_y;
    }

    if ((old_srcw & YUV_MASK_BLOCK_MASK) != 0) {
        full_w = old_srcw & ~YUV_MASK_BLOCK_MASK;
        YUV_blit(dest, destx + full_w * xscale, desty, destpitch, src, full_w, 0, old_srcw - full_w, old_srch,
                 old_srcpitch, old_srcheight, flags, alpha, blits);
    }

    if ((srch & YUV_MASK_BLOCK_MASK) != 0) {
        full_h = srch & ~YUV_MASK_BLOCK_MASK;
        YUV_blit(dest, destx, desty + mult64anddiv(full_h, pitch16 * old_srcheight, destpitch * srcpitch),
                 destpitch, src, 0, full_h, old_srcw, srch - full_h, old_srcpitch, old_srcheight, flags, alpha, blits);
    }
}
}

extern "C" void YUV_init(u32 flags)
{
    s32 i;
    s32 y;
    s32 uv;
    u32 red_bits;
    u32 green_bits;
    u32 blue_bits;
    u32 blue_shift;
    u32 red_down;
    u32 green_down;
    u32 blue_down;
    u32 red_mask;
    u32 green_mask;
    u32 blue_mask;
    u32 white;

    // Build luma/chroma contribution tables once, then rebuild the packed RGB
    // clamp tables when the destination surface format changes.
    if (donetables == 0) {
        for (i = 0; i < YUV_TABLE_PLANE_SIZE; i++) {
            if (i < YUV_LUMA_BLACK_CUTOFF) {
                y = 0;
            } else if (i < YUV_LUMA_WHITE_CUTOFF) {
                y = i - YUV_LUMA_BLACK;
                y = yuv_round15(y * YUV_COEFF_Y_TO_RGB);
            } else {
                y = YUV_LUMA_MAX;
            }

            ytable[i] = y;

            uv = i - YUV_CHROMA_CENTER;
            ytable_x4[i] = y << 2;
            YUVTables[YUV_V_TO_GB_OFFSET + i] = -yuv_round15(uv * YUV_COEFF_V_TO_GB);
            YUVTables[YUV_U_TO_GB_OFFSET + i] = -yuv_round15(uv * YUV_COEFF_U_TO_GB);
            YUVTables[YUV_V_TO_R_OFFSET + i] = yuv_round15(uv * YUV_COEFF_V_TO_R);
            YUVTables[i] = yuv_round15(uv * YUV_COEFF_U_TO_B);
        }

        for (i = 0; i < YUV_TABLE_PLANE_SIZE; i++) {
            clamptable[i] = 0;
            clamptable[RGB_CLAMP_BIAS + i] = i;
            clamptable[RGB_CLAMP_HIGH_OFFSET + i] = RGB_CHANNEL_MAX;
            clamp_ytable[i] = &clamptable[RGB_CLAMP_BIAS + ytable[i]];
        }

        donetables = 1;

        memcpy(origYUVTables, YUVTables, sizeof(origYUVTables));
    }

    if (rgb_layout == flags) {
        return;
    }

    if (flags == BINKSURFACE_INVALID) {
        return;
    }

    rgb_layout = flags;

    if (flags > BINKSURFACE555) {
        if (flags == BINKSURFACE655) {
            red_bits = 6;
            green_bits = 5;
            blue_bits = 5;
            blue_shift = 11;
        } else if (flags < BINKSURFACE655) {
            red_bits = 5;
            green_bits = 6;
            blue_bits = 5;
            blue_shift = 11;
        } else if (flags == BINKSURFACE664) {
            red_bits = 6;
            green_bits = 6;
            blue_bits = 4;
            blue_shift = 12;
        } else {
            red_bits = 0;
            green_bits = 0;
            blue_bits = 0;
            blue_shift = 0;
        }
    } else if (flags >= BINKSURFACE5551) {
        red_bits = 5;
        green_bits = 5;
        blue_bits = 5;
        blue_shift = 10;
    } else if (flags == BINKSURFACE4444) {
        red_bits = 4;
        green_bits = 4;
        blue_bits = 4;
        blue_shift = 8;
    } else {
        red_bits = 0;
        green_bits = 0;
        blue_bits = 0;
        blue_shift = 0;
    }

    red_down = 8 - red_bits;
    green_down = 8 - green_bits;
    blue_down = 8 - blue_bits;
    red_mask = (1 << red_bits) - 1;
    green_mask = ((1 << green_bits) - 1) << red_bits;
    blue_mask = ((1 << blue_bits) - 1) << blue_shift;
    white = (RGB_CHANNEL_MAX >> red_down) | ((RGB_CHANNEL_MAX >> green_down) << red_bits) |
            ((RGB_CHANNEL_MAX >> blue_down) << blue_shift);

    RGBshift[0] = 0;
    RGBshift[1] = 0;
    RGBshift[2] = red_bits;
    RGBshift[3] = 0;
    RGBshift[4] = blue_shift;
    RGBshift[5] = 0;
    RGBshift[6] = red_down;
    RGBshift[7] = green_down;
    RGBshift[8] = blue_down;
    RGBshift[9] = 0;
    RGBshift[10] = 0;
    RGBshift[11] = 0;
    for (i = 0; i < YUV_TABLE_PLANE_SIZE; i++) {
        u32 mono;
        u32 red;
        u32 green;
        u32 blue;

        if (i < YUV_LUMA_BLACK_CUTOFF) {
            mono16[i] = 0;
            mono16x2[i] = 0;
            mono32[i] = 0;
        } else if (i < YUV_LUMA_WHITE_CUTOFF) {
            mono = ((i - YUV_LUMA_BLACK) * RGB_CHANNEL_MAX) / YUV_LUMA_RANGE;
            y = (mono >> red_down) | ((mono >> green_down) << red_bits) | ((mono >> blue_down) << blue_shift);
            mono16x2[i] = y | (y << 16);
            mono32[i] = (mono << 16) | (mono << 8) | mono;
            mono16[i] = y;
        } else {
            mono16[i] = white;
            mono16x2[i] = white | (white << 16);
            mono32[i] = RGB_MONO_WHITE;
        }

        clamp_r[i] = 0;
        clamp_g[i] = 0;
        clamp_b[i] = 0;

        red = i >> red_down;
        green = (i >> green_down) << red_bits;
        blue = (i >> blue_down) << blue_shift;

        clamp_r[RGB_CLAMP_BIAS + i] = red;
        clamp_g[RGB_CLAMP_BIAS + i] = green;
        clamp_b[RGB_CLAMP_BIAS + i] = blue;
        clamp_r[RGB_CLAMP_HIGH_OFFSET + i] = red_mask;
        clamp_g[RGB_CLAMP_HIGH_OFFSET + i] = green_mask;
        clamp_b[RGB_CLAMP_HIGH_OFFSET + i] = blue_mask;

        clamp_rh[i] = clamp_r[i] << 16;
        clamp_gh[i] = clamp_g[i] << 16;
        clamp_bh[i] = clamp_b[i] << 16;
        clamp_a4[i] = (i & RGB_A4_SOURCE_MASK) << RGB_A4_SHIFT;

        clamp_rr[i] = 0;
        clamp_gg[i] = 0;
        clamp_bb[i] = 0;
        clamp_rr[RGB_CLAMP_BIAS + i] = red * RGB_DUP16;
        clamp_gg[RGB_CLAMP_BIAS + i] = green * RGB_DUP16;
        clamp_bb[RGB_CLAMP_BIAS + i] = blue * RGB_DUP16;
        clamp_rh[RGB_CLAMP_BIAS + i] = clamp_r[RGB_CLAMP_BIAS + i] << 16;
        clamp_gh[RGB_CLAMP_BIAS + i] = clamp_g[RGB_CLAMP_BIAS + i] << 16;
        clamp_bh[RGB_CLAMP_BIAS + i] = clamp_b[RGB_CLAMP_BIAS + i] << 16;

        clamp_rr[RGB_CLAMP_HIGH_OFFSET + i] = red_mask * RGB_DUP16;
        clamp_gg[RGB_CLAMP_HIGH_OFFSET + i] = green_mask * RGB_DUP16;
        clamp_bb[RGB_CLAMP_HIGH_OFFSET + i] = blue_mask * RGB_DUP16;
        clamp_rh[RGB_CLAMP_HIGH_OFFSET + i] = red_mask * RGB_HIGH16;
        clamp_gh[RGB_CLAMP_HIGH_OFFSET + i] = green_mask * RGB_HIGH16;
        clamp_bh[RGB_CLAMP_HIGH_OFFSET + i] = blue_mask * RGB_HIGH16;
    }
}

static void dounaligned32rowm2w(u32 phase, u32 count)
{
    const u32 PTR4* table;
    u8 y;
    u32 pixel;

    (void)phase;
    if (count-- == 0) {
        return;
    }

    table = mono32;
    do {
        y = *(u8 PTR4*)S.y0;
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + 1);
        pixel = table[y];
        ((u32 PTR4*)S.dest0)[0] = pixel;
        ((u32 PTR4*)S.dest0)[1] = pixel;
        S.dest0 += 8;
    } while (count-- != 0);
}

static u32 dounaligned32colm2w(u32 count, s32 phase)
{
    const u32 PTR4* table;
    u32 remaining;
    u8 y;
    u32 pixel;

    table = mono32;
    remaining = count;
    do {
        y = *(u8 PTR4*)S.y0;
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + 1);
        pixel = table[y];
        ((u32 PTR4*)S.dest0)[0] = pixel;
        ((u32 PTR4*)S.dest0)[1] = pixel;
        y = *(u8 PTR4*)S.y1;
        S.y1 = (u32 PTR4*)((u8 PTR4*)S.y1 + 1);
        pixel = table[y];
        ((u32 PTR4*)S.dest1)[0] = pixel;
        ((u32 PTR4*)S.dest1)[1] = pixel;
        S.dest0 += 8;
        S.dest1 += 8;
        remaining--;
    } while (remaining != 0);

    return phase + count;
}

static void dounaligned32rowm2h(u32 phase, u32 count)
{
    const u32 PTR4* table;
    u8 y;
    u32 pixel;

    (void)phase;
    if (count-- == 0) {
        return;
    }

    table = mono32;
    do {
        y = *(u8 PTR4*)S.y0;
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + 1);
        pixel = table[y];
        *(u32 PTR4*)S.dest0 = pixel;
        *(u32 PTR4*)(S.dest0 + S.pitch) = pixel;
        S.dest0 += YUV_PACKED_WORD_BYTES;
    } while (count-- != 0);
}

static u32 dounaligned32colm2h(u32 count, s32 phase)
{
    const u32 PTR4* table;
    u32 remaining;
    u8 y;
    u32 pixel;

    table = mono32;
    remaining = count;
    do {
        y = *(u8 PTR4*)S.y0;
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + 1);
        pixel = table[y];
        *(u32 PTR4*)S.dest0 = pixel;
        *(u32 PTR4*)(S.dest0 + S.pitch) = pixel;
        y = *(u8 PTR4*)S.y1;
        S.y1 = (u32 PTR4*)((u8 PTR4*)S.y1 + 1);
        pixel = table[y];
        *(u32 PTR4*)S.dest1 = pixel;
        *(u32 PTR4*)(S.dest1 + S.pitch) = pixel;
        S.dest0 += YUV_PACKED_WORD_BYTES;
        S.dest1 += YUV_PACKED_WORD_BYTES;
        remaining--;
    } while (remaining != 0);

    return phase + count;
}

static void dounaligned32rowm2wh(u32 phase, u32 count)
{
    const u32 PTR4* table;
    u8 y;
    u32 pixel;

    (void)phase;
    if (count-- == 0) {
        return;
    }

    table = mono32;
    do {
        y = *(u8 PTR4*)S.y0;
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + 1);
        pixel = table[y];
        ((u32 PTR4*)S.dest0)[0] = pixel;
        ((u32 PTR4*)S.dest0)[1] = pixel;
        *(u32 PTR4*)(S.dest0 + S.pitch) = pixel;
        *(u32 PTR4*)(S.dest0 + S.pitch + YUV_PACKED_WORD_BYTES) = pixel;
        S.dest0 += 8;
    } while (count-- != 0);
}

static u32 dounaligned32colm2wh(u32 count, s32 phase)
{
    const u32 PTR4* table;
    u32 remaining;
    u8 y;
    u32 pixel;

    table = mono32;
    remaining = count;
    do {
        y = *(u8 PTR4*)S.y0;
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + 1);
        pixel = table[y];
        ((u32 PTR4*)S.dest0)[0] = pixel;
        ((u32 PTR4*)S.dest0)[1] = pixel;
        *(u32 PTR4*)(S.dest0 + S.pitch) = pixel;
        *(u32 PTR4*)(S.dest0 + S.pitch + YUV_PACKED_WORD_BYTES) = pixel;
        y = *(u8 PTR4*)S.y1;
        S.y1 = (u32 PTR4*)((u8 PTR4*)S.y1 + 1);
        pixel = table[y];
        ((u32 PTR4*)S.dest1)[0] = pixel;
        ((u32 PTR4*)S.dest1)[1] = pixel;
        *(u32 PTR4*)(S.dest1 + S.pitch) = pixel;
        *(u32 PTR4*)(S.dest1 + S.pitch + YUV_PACKED_WORD_BYTES) = pixel;
        S.dest0 += 8;
        S.dest1 += 8;
        remaining--;
    } while (remaining != 0);

    return phase + count;
}

static void dounaligned32row2w(u32 phase, u32 count)
{
    u8 y;
    const u32 PTR4* ytable;
    u32 pixel;

    if (count-- == 0) {
        return;
    }

    do {
        phase++;
        S.b = YUVTables[*(u8 PTR4*)S.u];
        S.gb = YUVTables[YUV_U_TO_GB_OFFSET + *(u8 PTR4*)S.u] + YUVTables[YUV_V_TO_GB_OFFSET + *(u8 PTR4*)S.v];
        S.r = YUVTables[YUV_V_TO_R_OFFSET + *(u8 PTR4*)S.v];
        y = *(u8 PTR4*)S.y0;
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + 1);
        ytable = clamp_ytable[y];
        pixel = ytable[S.b] | (ytable[S.gb] << 8) | (ytable[S.r] << 16);
        ((u32 PTR4*)S.dest0)[0] = pixel;
        ((u32 PTR4*)S.dest0)[1] = pixel;
        S.dest0 += 8;
        if (((phase ^ 1) & 1) != 0) {
            S.u = (u16 PTR4*)((u8 PTR4*)S.u + 1);
            S.v = (u16 PTR4*)((u8 PTR4*)S.v + 1);
        }
    } while (count-- != 0);
}

static u32 dounaligned32col2w(u32 count, s32 phase)
{
    u8 y;
    const u32 PTR4* ytable;
    u32 pixel;

    do {
        phase++;
        S.b = YUVTables[*(u8 PTR4*)S.u];
        S.gb = YUVTables[YUV_U_TO_GB_OFFSET + *(u8 PTR4*)S.u] + YUVTables[YUV_V_TO_GB_OFFSET + *(u8 PTR4*)S.v];
        S.r = YUVTables[YUV_V_TO_R_OFFSET + *(u8 PTR4*)S.v];
        y = *(u8 PTR4*)S.y0;
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + 1);
        ytable = clamp_ytable[y];
        pixel = ytable[S.b] | (ytable[S.gb] << 8) | (ytable[S.r] << 16);
        ((u32 PTR4*)S.dest0)[0] = pixel;
        ((u32 PTR4*)S.dest0)[1] = pixel;
        y = *(u8 PTR4*)S.y1;
        S.y1 = (u32 PTR4*)((u8 PTR4*)S.y1 + 1);
        ytable = clamp_ytable[y];
        pixel = ytable[S.b] | (ytable[S.gb] << 8) | (ytable[S.r] << 16);
        ((u32 PTR4*)S.dest1)[0] = pixel;
        ((u32 PTR4*)S.dest1)[1] = pixel;
        S.dest0 += 8;
        S.dest1 += 8;
        if (((phase ^ 1) & 1) != 0) {
            S.u = (u16 PTR4*)((u8 PTR4*)S.u + 1);
            S.v = (u16 PTR4*)((u8 PTR4*)S.v + 1);
        }
        count--;
    } while (count != 0);

    return phase;
}

static void dounaligned32row2h(u32 phase, u32 count)
{
    u8 y;
    const u32 PTR4* ytable;
    u32 pixel;

    if (count-- == 0) {
        return;
    }

    do {
        phase++;
        S.b = YUVTables[*(u8 PTR4*)S.u];
        S.gb = YUVTables[YUV_U_TO_GB_OFFSET + *(u8 PTR4*)S.u] + YUVTables[YUV_V_TO_GB_OFFSET + *(u8 PTR4*)S.v];
        S.r = YUVTables[YUV_V_TO_R_OFFSET + *(u8 PTR4*)S.v];
        y = *(u8 PTR4*)S.y0;
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + 1);
        ytable = clamp_ytable[y];
        pixel = ytable[S.b] | (ytable[S.gb] << 8) | (ytable[S.r] << 16);
        *(u32 PTR4*)S.dest0 = pixel;
        *(u32 PTR4*)(S.dest0 + S.pitch) = pixel;
        S.dest0 += YUV_PACKED_WORD_BYTES;
        if (((phase ^ 1) & 1) != 0) {
            S.u = (u16 PTR4*)((u8 PTR4*)S.u + 1);
            S.v = (u16 PTR4*)((u8 PTR4*)S.v + 1);
        }
    } while (count-- != 0);
}

static u32 dounaligned32col2h(u32 count, s32 phase)
{
    u8 y;
    const u32 PTR4* ytable;
    u32 pixel;

    do {
        phase++;
        S.b = YUVTables[*(u8 PTR4*)S.u];
        S.gb = YUVTables[YUV_U_TO_GB_OFFSET + *(u8 PTR4*)S.u] + YUVTables[YUV_V_TO_GB_OFFSET + *(u8 PTR4*)S.v];
        S.r = YUVTables[YUV_V_TO_R_OFFSET + *(u8 PTR4*)S.v];
        y = *(u8 PTR4*)S.y0;
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + 1);
        ytable = clamp_ytable[y];
        pixel = ytable[S.b] | (ytable[S.gb] << 8) | (ytable[S.r] << 16);
        *(u32 PTR4*)S.dest0 = pixel;
        *(u32 PTR4*)(S.dest0 + S.pitch) = pixel;
        y = *(u8 PTR4*)S.y1;
        S.y1 = (u32 PTR4*)((u8 PTR4*)S.y1 + 1);
        ytable = clamp_ytable[y];
        pixel = ytable[S.b] | (ytable[S.gb] << 8) | (ytable[S.r] << 16);
        *(u32 PTR4*)S.dest1 = pixel;
        *(u32 PTR4*)(S.dest1 + S.pitch) = pixel;
        S.dest0 += YUV_PACKED_WORD_BYTES;
        S.dest1 += YUV_PACKED_WORD_BYTES;
        if (((phase ^ 1) & 1) != 0) {
            S.u = (u16 PTR4*)((u8 PTR4*)S.u + 1);
            S.v = (u16 PTR4*)((u8 PTR4*)S.v + 1);
        }
        count--;
    } while (count != 0);

    return phase;
}

static void dounaligned32row2wh(u32 phase, u32 count)
{
    u8 y;
    const u32 PTR4* ytable;
    u32 pixel;

    if (count-- == 0) {
        return;
    }

    do {
        phase++;
        S.b = YUVTables[*(u8 PTR4*)S.u];
        S.gb = YUVTables[YUV_U_TO_GB_OFFSET + *(u8 PTR4*)S.u] + YUVTables[YUV_V_TO_GB_OFFSET + *(u8 PTR4*)S.v];
        S.r = YUVTables[YUV_V_TO_R_OFFSET + *(u8 PTR4*)S.v];
        y = *(u8 PTR4*)S.y0;
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + 1);
        ytable = clamp_ytable[y];
        pixel = ytable[S.b] | (ytable[S.gb] << 8) | (ytable[S.r] << 16);
        ((u32 PTR4*)S.dest0)[0] = pixel;
        ((u32 PTR4*)S.dest0)[1] = pixel;
        *(u32 PTR4*)(S.dest0 + S.pitch) = pixel;
        *(u32 PTR4*)(S.dest0 + S.pitch + YUV_PACKED_WORD_BYTES) = pixel;
        S.dest0 += 8;
        if (((phase ^ 1) & 1) != 0) {
            S.u = (u16 PTR4*)((u8 PTR4*)S.u + 1);
            S.v = (u16 PTR4*)((u8 PTR4*)S.v + 1);
        }
    } while (count-- != 0);
}

static u32 dounaligned32col2wh(u32 count, s32 phase)
{
    u8 y;
    const u32 PTR4* ytable;
    u32 pixel;

    do {
        phase++;
        S.b = YUVTables[*(u8 PTR4*)S.u];
        S.gb = YUVTables[YUV_U_TO_GB_OFFSET + *(u8 PTR4*)S.u] + YUVTables[YUV_V_TO_GB_OFFSET + *(u8 PTR4*)S.v];
        S.r = YUVTables[YUV_V_TO_R_OFFSET + *(u8 PTR4*)S.v];
        y = *(u8 PTR4*)S.y0;
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + 1);
        ytable = clamp_ytable[y];
        pixel = ytable[S.b] | (ytable[S.gb] << 8) | (ytable[S.r] << 16);
        ((u32 PTR4*)S.dest0)[0] = pixel;
        ((u32 PTR4*)S.dest0)[1] = pixel;
        *(u32 PTR4*)(S.dest0 + S.pitch) = pixel;
        *(u32 PTR4*)(S.dest0 + S.pitch + YUV_PACKED_WORD_BYTES) = pixel;
        y = *(u8 PTR4*)S.y1;
        S.y1 = (u32 PTR4*)((u8 PTR4*)S.y1 + 1);
        ytable = clamp_ytable[y];
        pixel = ytable[S.b] | (ytable[S.gb] << 8) | (ytable[S.r] << 16);
        ((u32 PTR4*)S.dest1)[0] = pixel;
        ((u32 PTR4*)S.dest1)[1] = pixel;
        *(u32 PTR4*)(S.dest1 + S.pitch) = pixel;
        *(u32 PTR4*)(S.dest1 + S.pitch + YUV_PACKED_WORD_BYTES) = pixel;
        S.dest0 += 8;
        S.dest1 += 8;
        if (((phase ^ 1) & 1) != 0) {
            S.u = (u16 PTR4*)((u8 PTR4*)S.u + 1);
            S.v = (u16 PTR4*)((u8 PTR4*)S.v + 1);
        }
        count--;
    } while (count != 0);

    return phase;
}

static void dounaligned32rowm(u32 phase, u32 count)
{
    u8 y;

    (void)phase;
    if (count-- == 0) {
        return;
    }

    do {
        y = *(u8 PTR4*)S.y0;
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + 1);
        *(u32 PTR4*)S.dest0 = RGB32_M(y);
        S.dest0 += YUV_PACKED_WORD_BYTES;
    } while (count-- != 0);
}

static u32 dounaligned32colm(u32 count, s32 phase)
{
    u32 remaining;
    u8 y;

    remaining = count;
    do {
        y = *(u8 PTR4*)S.y0;
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + 1);
        *(u32 PTR4*)S.dest0 = RGB32_M(y);
        y = *(u8 PTR4*)S.y1;
        S.y1 = (u32 PTR4*)((u8 PTR4*)S.y1 + 1);
        *(u32 PTR4*)S.dest1 = RGB32_M(y);
        S.dest0 += YUV_PACKED_WORD_BYTES;
        S.dest1 += YUV_PACKED_WORD_BYTES;
        remaining--;
    } while (remaining != 0);

    return phase + count;
}

static void dounaligned32row(u32 phase, u32 count)
{
    u8 y;
    const u32 PTR4* ytable;

    if (count-- == 0) {
        return;
    }

    do {
        phase++;
        S.b = YUVTables[*(u8 PTR4*)S.u];
        S.gb = YUVTables[YUV_U_TO_GB_OFFSET + *(u8 PTR4*)S.u] + YUVTables[YUV_V_TO_GB_OFFSET + *(u8 PTR4*)S.v];
        S.r = YUVTables[YUV_V_TO_R_OFFSET + *(u8 PTR4*)S.v];
        y = *(u8 PTR4*)S.y0;
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + 1);
        ytable = clamp_ytable[y];
        *(u32 PTR4*)S.dest0 = ytable[S.b] | (ytable[S.gb] << 8) | (ytable[S.r] << 16);
        S.dest0 += YUV_PACKED_WORD_BYTES;
        if (((phase ^ 1) & 1) != 0) {
            S.u = (u16 PTR4*)((u8 PTR4*)S.u + 1);
            S.v = (u16 PTR4*)((u8 PTR4*)S.v + 1);
        }
    } while (count-- != 0);
}

static u32 dounaligned32col(u32 count, s32 phase)
{
    u8 y;
    const u32 PTR4* ytable;

    do {
        phase++;
        S.b = YUVTables[*(u8 PTR4*)S.u];
        S.gb = YUVTables[YUV_U_TO_GB_OFFSET + *(u8 PTR4*)S.u] + YUVTables[YUV_V_TO_GB_OFFSET + *(u8 PTR4*)S.v];
        S.r = YUVTables[YUV_V_TO_R_OFFSET + *(u8 PTR4*)S.v];
        y = *(u8 PTR4*)S.y0;
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + 1);
        ytable = clamp_ytable[y];
        *(u32 PTR4*)S.dest0 = ytable[S.b] | (ytable[S.gb] << 8) | (ytable[S.r] << 16);
        y = *(u8 PTR4*)S.y1;
        S.y1 = (u32 PTR4*)((u8 PTR4*)S.y1 + 1);
        ytable = clamp_ytable[y];
        *(u32 PTR4*)S.dest1 = ytable[S.b] | (ytable[S.gb] << 8) | (ytable[S.r] << 16);
        S.dest0 += YUV_PACKED_WORD_BYTES;
        S.dest1 += YUV_PACKED_WORD_BYTES;
        if (((phase ^ 1) & 1) != 0) {
            S.u++;
            S.v++;
        }
        count--;
    } while (count != 0);

    return phase;
}

extern "C" void YUV_blit_32bpp(void PTR4* dest,
                                u32 destx,
                                u32 desty,
                                u32 destpitch,
                                void PTR4* src,
                                u32 srcx,
                                u32 srcy,
                                u32 srcw,
                                u32 srch,
                                u32 srcpitch,
                                u32 srcheight,
                                u32 flags)
{
    YUV_blit(dest, destx, desty, destpitch, src, srcx, srcy, srcw, srch, srcpitch, srcheight, flags, 0, &blits32);
}

static void dounaligned32arowm2w(u32 phase, u32 count)
{
    const u32 PTR4* table;
    u8 PTR4* yptr;
    u8 PTR4* aptr;
    u8 y;
    u8 a;
    u32 pixel;

    (void)phase;
    if (count-- == 0) {
        return;
    }

    table = mono32;
    do {
        yptr = (u8 PTR4*)S.y0;
        aptr = (u8 PTR4*)S.a0;
        y = *yptr++;
        a = *aptr++;
        S.y0 = (u32 PTR4*)yptr;
        S.a0 = (u32 PTR4*)aptr;
        pixel = table[y] | (a << 24);
        ((u32 PTR4*)S.dest0)[0] = pixel;
        ((u32 PTR4*)S.dest0)[1] = pixel;
        S.dest0 += 8;
    } while (count-- != 0);
}

static u32 dounaligned32acolm2w(u32 count, s32 phase)
{
    const u32 PTR4* table;
    u32 remaining;
    u32 y;
    u32 a;
    u32 pixel;

    table = mono32;
    remaining = count;
    do {
        y = *(u8 PTR4*)S.y0;
        a = *(u8 PTR4*)S.a0;
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + 1);
        S.a0 = (u32 PTR4*)((u8 PTR4*)S.a0 + 1);
        pixel = table[y] | (a << 24);
        ((u32 PTR4*)S.dest0)[0] = pixel;
        ((u32 PTR4*)S.dest0)[1] = pixel;
        y = *(u8 PTR4*)S.y1;
        a = *(u8 PTR4*)S.a1;
        S.y1 = (u32 PTR4*)((u8 PTR4*)S.y1 + 1);
        S.a1 = (u32 PTR4*)((u8 PTR4*)S.a1 + 1);
        pixel = table[y] | (a << 24);
        ((u32 PTR4*)S.dest1)[0] = pixel;
        ((u32 PTR4*)S.dest1)[1] = pixel;
        S.dest0 += 8;
        S.dest1 += 8;
        remaining--;
    } while (remaining != 0);

    return phase + count;
}

static void dounaligned32arowm2h(u32 phase, u32 count)
{
    const u32 PTR4* table;
    u8 PTR4* yptr;
    u8 PTR4* aptr;
    u8 y;
    u8 a;
    u32 pixel;

    (void)phase;
    if (count-- == 0) {
        return;
    }

    table = mono32;
    do {
        yptr = (u8 PTR4*)S.y0;
        aptr = (u8 PTR4*)S.a0;
        y = *yptr++;
        a = *aptr++;
        S.y0 = (u32 PTR4*)yptr;
        S.a0 = (u32 PTR4*)aptr;
        pixel = table[y] | (a << 24);
        *(u32 PTR4*)S.dest0 = pixel;
        *(u32 PTR4*)(S.dest0 + S.pitch) = pixel;
        S.dest0 += YUV_PACKED_WORD_BYTES;
    } while (count-- != 0);
}

static u32 dounaligned32acolm2h(u32 count, s32 phase)
{
    const u32 PTR4* table;
    u32 remaining;
    u32 y;
    u32 a;
    u32 pixel;

    table = mono32;
    remaining = count;
    do {
        y = *(u8 PTR4*)S.y0;
        a = *(u8 PTR4*)S.a0;
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + 1);
        S.a0 = (u32 PTR4*)((u8 PTR4*)S.a0 + 1);
        pixel = table[y] | (a << 24);
        *(u32 PTR4*)S.dest0 = pixel;
        *(u32 PTR4*)(S.dest0 + S.pitch) = pixel;
        y = *(u8 PTR4*)S.y1;
        a = *(u8 PTR4*)S.a1;
        S.y1 = (u32 PTR4*)((u8 PTR4*)S.y1 + 1);
        S.a1 = (u32 PTR4*)((u8 PTR4*)S.a1 + 1);
        pixel = table[y] | (a << 24);
        *(u32 PTR4*)S.dest1 = pixel;
        *(u32 PTR4*)(S.dest1 + S.pitch) = pixel;
        S.dest0 += YUV_PACKED_WORD_BYTES;
        S.dest1 += YUV_PACKED_WORD_BYTES;
        remaining--;
    } while (remaining != 0);

    return phase + count;
}

static void dounaligned32arowm2wh(u32 phase, u32 count)
{
    const u32 PTR4* table;
    u8 PTR4* yptr;
    u8 PTR4* aptr;
    u8 y;
    u8 a;
    u32 pixel;

    (void)phase;
    if (count-- == 0) {
        return;
    }

    table = mono32;
    do {
        yptr = (u8 PTR4*)S.y0;
        aptr = (u8 PTR4*)S.a0;
        y = *yptr++;
        a = *aptr++;
        S.y0 = (u32 PTR4*)yptr;
        S.a0 = (u32 PTR4*)aptr;
        pixel = table[y] | (a << 24);
        ((u32 PTR4*)S.dest0)[0] = pixel;
        ((u32 PTR4*)S.dest0)[1] = pixel;
        *(u32 PTR4*)(S.dest0 + S.pitch) = pixel;
        *(u32 PTR4*)(S.dest0 + S.pitch + YUV_PACKED_WORD_BYTES) = pixel;
        S.dest0 += 8;
    } while (count-- != 0);
}

static u32 dounaligned32acolm2wh(u32 count, s32 phase)
{
    const u32 PTR4* table;
    u32 remaining;
    u32 y;
    u32 a;
    u32 pixel;

    table = mono32;
    remaining = count;
    do {
        y = *(u8 PTR4*)S.y0;
        a = *(u8 PTR4*)S.a0;
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + 1);
        S.a0 = (u32 PTR4*)((u8 PTR4*)S.a0 + 1);
        pixel = table[y] | (a << 24);
        ((u32 PTR4*)S.dest0)[0] = pixel;
        ((u32 PTR4*)S.dest0)[1] = pixel;
        *(u32 PTR4*)(S.dest0 + S.pitch) = pixel;
        *(u32 PTR4*)(S.dest0 + S.pitch + YUV_PACKED_WORD_BYTES) = pixel;
        y = *(u8 PTR4*)S.y1;
        a = *(u8 PTR4*)S.a1;
        S.y1 = (u32 PTR4*)((u8 PTR4*)S.y1 + 1);
        S.a1 = (u32 PTR4*)((u8 PTR4*)S.a1 + 1);
        pixel = table[y] | (a << 24);
        ((u32 PTR4*)S.dest1)[0] = pixel;
        ((u32 PTR4*)S.dest1)[1] = pixel;
        *(u32 PTR4*)(S.dest1 + S.pitch) = pixel;
        *(u32 PTR4*)(S.dest1 + S.pitch + YUV_PACKED_WORD_BYTES) = pixel;
        S.dest0 += 8;
        S.dest1 += 8;
        remaining--;
    } while (remaining != 0);

    return phase + count;
}

static void dounaligned32arow2w(u32 phase, u32 count)
{
    u32 remaining;
    u8 PTR4* yptr;
    u8 PTR4* aptr;
    u8 y;
    u8 a;
    const u32 PTR4* ytable;
    u32 pixel;

    remaining = count;
    if (remaining-- == 0) {
        return;
    }

    do {
        phase++;
        S.b = YUVTables[*(u8 PTR4*)S.u];
        S.gb = YUVTables[YUV_U_TO_GB_OFFSET + *(u8 PTR4*)S.u] + YUVTables[YUV_V_TO_GB_OFFSET + *(u8 PTR4*)S.v];
        S.r = YUVTables[YUV_V_TO_R_OFFSET + *(u8 PTR4*)S.v];
        yptr = (u8 PTR4*)S.y0;
        aptr = (u8 PTR4*)S.a0;
        y = *yptr++;
        S.y0 = (u32 PTR4*)yptr;
        ytable = clamp_ytable[y];
        a = *aptr++;
        S.a0 = (u32 PTR4*)aptr;
        pixel = ytable[S.b] | (ytable[S.gb] << 8) | (ytable[S.r] << 16) | ((u32)a << 24);
        ((u32 PTR4*)S.dest0)[0] = pixel;
        ((u32 PTR4*)S.dest0)[1] = pixel;
        S.dest0 += 8;
        if (((phase ^ 1) & 1) != 0) {
            S.u = (u16 PTR4*)((u8 PTR4*)S.u + 1);
            S.v = (u16 PTR4*)((u8 PTR4*)S.v + 1);
        }
    } while (remaining-- != 0);
}

static u32 dounaligned32acol2w(u32 count, s32 phase)
{
    u8 y;
    u8 a;
    const u32 PTR4* ytable;
    u32 pixel;

    do {
        phase++;
        S.b = YUVTables[*(u8 PTR4*)S.u];
        S.gb = YUVTables[YUV_U_TO_GB_OFFSET + *(u8 PTR4*)S.u] + YUVTables[YUV_V_TO_GB_OFFSET + *(u8 PTR4*)S.v];
        S.r = YUVTables[YUV_V_TO_R_OFFSET + *(u8 PTR4*)S.v];
        y = *(u8 PTR4*)S.y0;
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + 1);
        ytable = clamp_ytable[y];
        a = *(u8 PTR4*)S.a0;
        S.a0 = (u32 PTR4*)((u8 PTR4*)S.a0 + 1);
        pixel = ytable[S.b] | (ytable[S.gb] << 8) | (ytable[S.r] << 16) | ((u32)a << 24);
        ((u32 PTR4*)S.dest0)[0] = pixel;
        ((u32 PTR4*)S.dest0)[1] = pixel;
        y = *(u8 PTR4*)S.y1;
        S.y1 = (u32 PTR4*)((u8 PTR4*)S.y1 + 1);
        ytable = clamp_ytable[y];
        a = *(u8 PTR4*)S.a1;
        S.a1 = (u32 PTR4*)((u8 PTR4*)S.a1 + 1);
        pixel = ytable[S.b] | (ytable[S.gb] << 8) | (ytable[S.r] << 16) | ((u32)a << 24);
        ((u32 PTR4*)S.dest1)[0] = pixel;
        ((u32 PTR4*)S.dest1)[1] = pixel;
        S.dest0 += 8;
        S.dest1 += 8;
        if (((phase ^ 1) & 1) != 0) {
            S.u = (u16 PTR4*)((u8 PTR4*)S.u + 1);
            S.v = (u16 PTR4*)((u8 PTR4*)S.v + 1);
        }
        count--;
    } while (count != 0);

    return phase;
}

static void dounaligned32arow2h(u32 phase, u32 count)
{
    u32 remaining;
    u8 PTR4* yptr;
    u8 PTR4* aptr;
    u8 y;
    u8 a;
    const u32 PTR4* ytable;
    u32 pixel;

    remaining = count;
    if (remaining-- == 0) {
        return;
    }

    do {
        phase++;
        S.b = YUVTables[*(u8 PTR4*)S.u];
        S.gb = YUVTables[YUV_U_TO_GB_OFFSET + *(u8 PTR4*)S.u] + YUVTables[YUV_V_TO_GB_OFFSET + *(u8 PTR4*)S.v];
        S.r = YUVTables[YUV_V_TO_R_OFFSET + *(u8 PTR4*)S.v];
        yptr = (u8 PTR4*)S.y0;
        aptr = (u8 PTR4*)S.a0;
        y = *yptr++;
        S.y0 = (u32 PTR4*)yptr;
        ytable = clamp_ytable[y];
        a = *aptr++;
        S.a0 = (u32 PTR4*)aptr;
        pixel = ytable[S.b] | (ytable[S.gb] << 8) | (ytable[S.r] << 16) | ((u32)a << 24);
        *(u32 PTR4*)S.dest0 = pixel;
        *(u32 PTR4*)(S.dest0 + S.pitch) = pixel;
        S.dest0 += YUV_PACKED_WORD_BYTES;
        if (((phase ^ 1) & 1) != 0) {
            S.u = (u16 PTR4*)((u8 PTR4*)S.u + 1);
            S.v = (u16 PTR4*)((u8 PTR4*)S.v + 1);
        }
    } while (remaining-- != 0);
}

static u32 dounaligned32acol2h(u32 count, s32 phase)
{
    u8 y;
    u8 a;
    const u32 PTR4* ytable;
    u32 pixel;

    do {
        phase++;
        S.b = YUVTables[*(u8 PTR4*)S.u];
        S.gb = YUVTables[YUV_U_TO_GB_OFFSET + *(u8 PTR4*)S.u] + YUVTables[YUV_V_TO_GB_OFFSET + *(u8 PTR4*)S.v];
        S.r = YUVTables[YUV_V_TO_R_OFFSET + *(u8 PTR4*)S.v];
        y = *(u8 PTR4*)S.y0;
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + 1);
        ytable = clamp_ytable[y];
        a = *(u8 PTR4*)S.a0;
        S.a0 = (u32 PTR4*)((u8 PTR4*)S.a0 + 1);
        pixel = ytable[S.b] | (ytable[S.gb] << 8) | (ytable[S.r] << 16) | ((u32)a << 24);
        *(u32 PTR4*)S.dest0 = pixel;
        *(u32 PTR4*)(S.dest0 + S.pitch) = pixel;
        y = *(u8 PTR4*)S.y1;
        S.y1 = (u32 PTR4*)((u8 PTR4*)S.y1 + 1);
        ytable = clamp_ytable[y];
        a = *(u8 PTR4*)S.a1;
        S.a1 = (u32 PTR4*)((u8 PTR4*)S.a1 + 1);
        pixel = ytable[S.b] | (ytable[S.gb] << 8) | (ytable[S.r] << 16) | ((u32)a << 24);
        *(u32 PTR4*)S.dest1 = pixel;
        *(u32 PTR4*)(S.dest1 + S.pitch) = pixel;
        S.dest0 += YUV_PACKED_WORD_BYTES;
        S.dest1 += YUV_PACKED_WORD_BYTES;
        if (((phase ^ 1) & 1) != 0) {
            S.u = (u16 PTR4*)((u8 PTR4*)S.u + 1);
            S.v = (u16 PTR4*)((u8 PTR4*)S.v + 1);
        }
        count--;
    } while (count != 0);

    return phase;
}

static void dounaligned32arow2wh(u32 phase, u32 count)
{
    u32 remaining;
    u8 PTR4* yptr;
    u8 PTR4* aptr;
    u8 y;
    u8 a;
    const u32 PTR4* ytable;
    u32 pixel;

    remaining = count;
    if (remaining-- == 0) {
        return;
    }

    do {
        phase++;
        S.b = YUVTables[*(u8 PTR4*)S.u];
        S.gb = YUVTables[YUV_U_TO_GB_OFFSET + *(u8 PTR4*)S.u] + YUVTables[YUV_V_TO_GB_OFFSET + *(u8 PTR4*)S.v];
        S.r = YUVTables[YUV_V_TO_R_OFFSET + *(u8 PTR4*)S.v];
        yptr = (u8 PTR4*)S.y0;
        aptr = (u8 PTR4*)S.a0;
        y = *yptr++;
        S.y0 = (u32 PTR4*)yptr;
        ytable = clamp_ytable[y];
        a = *aptr++;
        S.a0 = (u32 PTR4*)aptr;
        pixel = ytable[S.b] | (ytable[S.gb] << 8) | (ytable[S.r] << 16) | ((u32)a << 24);
        ((u32 PTR4*)S.dest0)[0] = pixel;
        ((u32 PTR4*)S.dest0)[1] = pixel;
        *(u32 PTR4*)(S.dest0 + S.pitch) = pixel;
        *(u32 PTR4*)(S.dest0 + S.pitch + YUV_PACKED_WORD_BYTES) = pixel;
        S.dest0 += 8;
        if (((phase ^ 1) & 1) != 0) {
            S.u = (u16 PTR4*)((u8 PTR4*)S.u + 1);
            S.v = (u16 PTR4*)((u8 PTR4*)S.v + 1);
        }
    } while (remaining-- != 0);
}

static u32 dounaligned32acol2wh(u32 count, s32 phase)
{
    u8 y;
    u8 a;
    const u32 PTR4* ytable;
    u32 pixel;

    do {
        phase++;
        S.b = YUVTables[*(u8 PTR4*)S.u];
        S.gb = YUVTables[YUV_U_TO_GB_OFFSET + *(u8 PTR4*)S.u] + YUVTables[YUV_V_TO_GB_OFFSET + *(u8 PTR4*)S.v];
        S.r = YUVTables[YUV_V_TO_R_OFFSET + *(u8 PTR4*)S.v];
        y = *(u8 PTR4*)S.y0;
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + 1);
        ytable = clamp_ytable[y];
        a = *(u8 PTR4*)S.a0;
        S.a0 = (u32 PTR4*)((u8 PTR4*)S.a0 + 1);
        pixel = ytable[S.b] | (ytable[S.gb] << 8) | (ytable[S.r] << 16) | ((u32)a << 24);
        ((u32 PTR4*)S.dest0)[0] = pixel;
        ((u32 PTR4*)S.dest0)[1] = pixel;
        *(u32 PTR4*)(S.dest0 + S.pitch) = pixel;
        *(u32 PTR4*)(S.dest0 + S.pitch + YUV_PACKED_WORD_BYTES) = pixel;
        y = *(u8 PTR4*)S.y1;
        S.y1 = (u32 PTR4*)((u8 PTR4*)S.y1 + 1);
        ytable = clamp_ytable[y];
        a = *(u8 PTR4*)S.a1;
        S.a1 = (u32 PTR4*)((u8 PTR4*)S.a1 + 1);
        pixel = ytable[S.b] | (ytable[S.gb] << 8) | (ytable[S.r] << 16) | ((u32)a << 24);
        ((u32 PTR4*)S.dest1)[0] = pixel;
        ((u32 PTR4*)S.dest1)[1] = pixel;
        *(u32 PTR4*)(S.dest1 + S.pitch) = pixel;
        *(u32 PTR4*)(S.dest1 + S.pitch + YUV_PACKED_WORD_BYTES) = pixel;
        S.dest0 += 8;
        S.dest1 += 8;
        if (((phase ^ 1) & 1) != 0) {
            S.u = (u16 PTR4*)((u8 PTR4*)S.u + 1);
            S.v = (u16 PTR4*)((u8 PTR4*)S.v + 1);
        }
        count--;
    } while (count != 0);

    return phase;
}

static void dounaligned32arowm(u32 phase, u32 count)
{
    u32 remaining;
    u8 y;
    u8 a;

    (void)phase;
    remaining = count;
    if (remaining-- == 0) {
        return;
    }

    do {
        y = *(u8 PTR4*)S.y0;
        a = *(u8 PTR4*)S.a0;
        S.a0 = (u32 PTR4*)((u8 PTR4*)S.a0 + 1);
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + 1);
        *(u32 PTR4*)S.dest0 = RGB32_M_A(y, a);
        S.dest0 += YUV_PACKED_WORD_BYTES;
    } while (remaining-- != 0);
}

static u32 dounaligned32acolm(u32 count, s32 phase)
{
    u32 remaining;
    u8 PTR4* yptr;
    u8 PTR4* aptr;
    u8 y;
    u8 a;

    remaining = count;
    do {
        yptr = (u8 PTR4*)S.y0;
        aptr = (u8 PTR4*)S.a0;
        y = *yptr++;
        a = *aptr++;
        S.y0 = (u32 PTR4*)yptr;
        S.a0 = (u32 PTR4*)aptr;
        *(u32 PTR4*)S.dest0 = RGB32_M_A(y, a);
        yptr = (u8 PTR4*)S.y1;
        aptr = (u8 PTR4*)S.a1;
        y = *yptr++;
        a = *aptr++;
        S.y1 = (u32 PTR4*)yptr;
        S.a1 = (u32 PTR4*)aptr;
        *(u32 PTR4*)S.dest1 = RGB32_M_A(y, a);
        S.dest0 += YUV_PACKED_WORD_BYTES;
        S.dest1 += YUV_PACKED_WORD_BYTES;
        remaining--;
    } while (remaining != 0);

    return phase + count;
}

static void dounaligned32arow(u32 phase, u32 count)
{
    u32 remaining;
    u8 PTR4* yptr;
    u8 PTR4* aptr;
    u8 y;
    u8 a;
    const u32 PTR4* ytable;

    remaining = count;
    if (remaining-- == 0) {
        return;
    }

    do {
        phase++;
        S.b = YUVTables[*(u8 PTR4*)S.u];
        S.gb = YUVTables[YUV_U_TO_GB_OFFSET + *(u8 PTR4*)S.u] + YUVTables[YUV_V_TO_GB_OFFSET + *(u8 PTR4*)S.v];
        S.r = YUVTables[YUV_V_TO_R_OFFSET + *(u8 PTR4*)S.v];
        yptr = (u8 PTR4*)S.y0;
        aptr = (u8 PTR4*)S.a0;
        y = *yptr++;
        S.y0 = (u32 PTR4*)yptr;
        ytable = clamp_ytable[y];
        a = *aptr++;
        S.a0 = (u32 PTR4*)aptr;
        *(u32 PTR4*)S.dest0 = ytable[S.b] | (ytable[S.gb] << 8) | (ytable[S.r] << 16) | ((u32)a << 24);
        S.dest0 += YUV_PACKED_WORD_BYTES;
        if (((phase ^ 1) & 1) != 0) {
            S.u = (u16 PTR4*)((u8 PTR4*)S.u + 1);
            S.v = (u16 PTR4*)((u8 PTR4*)S.v + 1);
        }
    } while (remaining-- != 0);
}

static u32 dounaligned32acol(u32 count, s32 phase)
{
    u8 y;
    u8 a;
    const u32 PTR4* ytable;

    do {
        phase++;
        S.b = YUVTables[*(u8 PTR4*)S.u];
        S.gb = YUVTables[YUV_U_TO_GB_OFFSET + *(u8 PTR4*)S.u] + YUVTables[YUV_V_TO_GB_OFFSET + *(u8 PTR4*)S.v];
        S.r = YUVTables[YUV_V_TO_R_OFFSET + *(u8 PTR4*)S.v];
        y = *(u8 PTR4*)S.y0;
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + 1);
        ytable = clamp_ytable[y];
        a = *(u8 PTR4*)S.a0;
        S.a0 = (u32 PTR4*)((u8 PTR4*)S.a0 + 1);
        *(u32 PTR4*)S.dest0 = ytable[S.b] | (ytable[S.gb] << 8) | (ytable[S.r] << 16) | ((u32)a << 24);
        y = *(u8 PTR4*)S.y1;
        S.y1 = (u32 PTR4*)((u8 PTR4*)S.y1 + 1);
        ytable = clamp_ytable[y];
        a = *(u8 PTR4*)S.a1;
        S.a1 = (u32 PTR4*)((u8 PTR4*)S.a1 + 1);
        *(u32 PTR4*)S.dest1 = ytable[S.b] | (ytable[S.gb] << 8) | (ytable[S.r] << 16) | ((u32)a << 24);
        S.dest0 += YUV_PACKED_WORD_BYTES;
        S.dest1 += YUV_PACKED_WORD_BYTES;
        if (((phase ^ 1) & 1) != 0) {
            S.u = (u16 PTR4*)((u8 PTR4*)S.u + 1);
            S.v = (u16 PTR4*)((u8 PTR4*)S.v + 1);
        }
        count--;
    } while (count != 0);

    return phase;
}

extern "C" void YUV_blit_32abpp(void PTR4* dest,
                                 u32 destx,
                                 u32 desty,
                                 u32 destpitch,
                                 void PTR4* src,
                                 u32 srcx,
                                 u32 srcy,
                                 u32 srcw,
                                 u32 srch,
                                 u32 srcpitch,
                                 u32 srcheight,
                                 void PTR4* alpha,
                                 u32 flags)
{
    YUV_blit(dest, destx, desty, destpitch, src, srcx, srcy, srcw, srch, srcpitch, srcheight, flags, alpha, &blits32a);
}

static void dounaligned16rowm2h(u32 phase, u32 count)
{
    const u32 PTR4* table;
    u8 y;
    u16 pixel;

    (void)phase;
    if (count-- == 0) {
        return;
    }

    table = mono16;
    do {
        y = *(u8 PTR4*)S.y0;
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + 1);
        pixel = (u16)table[y];
        *(u16 PTR4*)S.dest0 = pixel;
        *(u16 PTR4*)(S.dest0 + S.pitch) = pixel;
        S.dest0 += 2;
    } while (count-- != 0);
}

static u32 dounaligned16colm2h(u32 count, s32 phase)
{
    const u32 PTR4* table;
    u32 remaining;
    u32 y;
    u16 pixel;

    table = mono16;
    remaining = count;
    do {
        y = *(u8 PTR4*)S.y0;
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + 1);
        pixel = (u16)table[y];
        *(u16 PTR4*)S.dest0 = pixel;
        *(u16 PTR4*)(S.dest0 + S.pitch) = pixel;
        y = *(u8 PTR4*)S.y1;
        S.y1 = (u32 PTR4*)((u8 PTR4*)S.y1 + 1);
        pixel = (u16)table[y];
        *(u16 PTR4*)S.dest1 = pixel;
        *(u16 PTR4*)(S.dest1 + S.pitch) = pixel;
        S.dest0 += 2;
        S.dest1 += 2;
        remaining--;
    } while (remaining != 0);

    return phase + count;
}

static void dounaligned16rowm2w(u32 phase, u32 count)
{
    const u32 PTR4* table;
    u8 y;
    u16 pixel;

    (void)phase;
    if (count-- == 0) {
        return;
    }

    table = mono16;
    do {
        y = *(u8 PTR4*)S.y0;
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + 1);
        pixel = (u16)table[y];
        ((u16 PTR4*)S.dest0)[0] = pixel;
        ((u16 PTR4*)S.dest0)[1] = pixel;
        S.dest0 += YUV_PACKED_WORD_BYTES;
    } while (count-- != 0);
}

static u32 dounaligned16colm2w(u32 count, s32 phase)
{
    const u32 PTR4* table;
    u32 remaining;
    u32 y;
    u16 pixel;

    table = mono16;
    remaining = count;
    do {
        y = *(u8 PTR4*)S.y0;
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + 1);
        pixel = (u16)table[y];
        ((u16 PTR4*)S.dest0)[0] = pixel;
        ((u16 PTR4*)S.dest0)[1] = pixel;
        y = *(u8 PTR4*)S.y1;
        S.y1 = (u32 PTR4*)((u8 PTR4*)S.y1 + 1);
        pixel = (u16)table[y];
        ((u16 PTR4*)S.dest1)[0] = pixel;
        ((u16 PTR4*)S.dest1)[1] = pixel;
        S.dest0 += YUV_PACKED_WORD_BYTES;
        S.dest1 += YUV_PACKED_WORD_BYTES;
        remaining--;
    } while (remaining != 0);

    return phase + count;
}

static void dounaligned16rowm2wh(u32 phase, u32 count)
{
    const u32 PTR4* table;
    u8 y;
    u16 pixel;

    (void)phase;
    if (count-- == 0) {
        return;
    }

    table = mono16;
    do {
        y = *(u8 PTR4*)S.y0;
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + 1);
        pixel = (u16)table[y];
        ((u16 PTR4*)S.dest0)[0] = pixel;
        ((u16 PTR4*)S.dest0)[1] = pixel;
        *(u16 PTR4*)(S.dest0 + S.pitch) = pixel;
        *(u16 PTR4*)(S.dest0 + S.pitch + 2) = pixel;
        S.dest0 += YUV_PACKED_WORD_BYTES;
    } while (count-- != 0);
}

static u32 dounaligned16colm2wh(u32 count, s32 phase)
{
    const u32 PTR4* table;
    u32 remaining;
    u32 y;
    u16 pixel;

    table = mono16;
    remaining = count;
    do {
        y = *(u8 PTR4*)S.y0;
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + 1);
        pixel = (u16)table[y];
        ((u16 PTR4*)S.dest0)[0] = pixel;
        ((u16 PTR4*)S.dest0)[1] = pixel;
        *(u16 PTR4*)(S.dest0 + S.pitch) = pixel;
        *(u16 PTR4*)(S.dest0 + S.pitch + 2) = pixel;
        y = *(u8 PTR4*)S.y1;
        S.y1 = (u32 PTR4*)((u8 PTR4*)S.y1 + 1);
        pixel = (u16)table[y];
        ((u16 PTR4*)S.dest1)[0] = pixel;
        ((u16 PTR4*)S.dest1)[1] = pixel;
        *(u16 PTR4*)(S.dest1 + S.pitch) = pixel;
        *(u16 PTR4*)(S.dest1 + S.pitch + 2) = pixel;
        S.dest0 += YUV_PACKED_WORD_BYTES;
        S.dest1 += YUV_PACKED_WORD_BYTES;
        remaining--;
    } while (remaining != 0);

    return phase + count;
}

static void dounaligned16row2h(u32 phase, u32 count)
{
    u32 remaining;
    u8 y;
    u32 ybase;
    u16 pixel;

    if (count == 0) {
        return;
    }
    remaining = count - 1;

    do {
        phase++;
        S.b = YUVTables[*(u8 PTR4*)S.u];
        S.gb = YUVTables[YUV_U_TO_GB_OFFSET + *(u8 PTR4*)S.u] + YUVTables[YUV_V_TO_GB_OFFSET + *(u8 PTR4*)S.v];
        S.r = YUVTables[YUV_V_TO_R_OFFSET + *(u8 PTR4*)S.v];
        y = *(u8 PTR4*)S.y0;
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + 1);
        ybase = ytable[y];
        pixel = RGB565(ybase, S.r, S.gb, S.b);
        *(u16 PTR4*)S.dest0 = pixel;
        *(u16 PTR4*)(S.dest0 + S.pitch) = pixel;
        S.dest0 += 2;
        if (((phase ^ 1) & 1) != 0) {
            S.u = (u16 PTR4*)((u8 PTR4*)S.u + 1);
            S.v = (u16 PTR4*)((u8 PTR4*)S.v + 1);
        }
    } while (remaining-- != 0);
}

static u32 dounaligned16col2h(u32 count, s32 phase)
{
    u32 remaining;
    u8 y;
    u32 ybase;
    u16 pixel;

    remaining = count;
    do {
        phase++;
        S.b = YUVTables[*(u8 PTR4*)S.u];
        S.gb = YUVTables[YUV_U_TO_GB_OFFSET + *(u8 PTR4*)S.u] + YUVTables[YUV_V_TO_GB_OFFSET + *(u8 PTR4*)S.v];
        S.r = YUVTables[YUV_V_TO_R_OFFSET + *(u8 PTR4*)S.v];
        y = *(u8 PTR4*)S.y0;
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + 1);
        ybase = ytable[y];
        pixel = RGB565(ybase, S.r, S.gb, S.b);
        *(u16 PTR4*)S.dest0 = pixel;
        *(u16 PTR4*)(S.dest0 + S.pitch) = pixel;
        y = *(u8 PTR4*)S.y1;
        S.y1 = (u32 PTR4*)((u8 PTR4*)S.y1 + 1);
        ybase = ytable[y];
        pixel = RGB565(ybase, S.r, S.gb, S.b);
        *(u16 PTR4*)S.dest1 = pixel;
        *(u16 PTR4*)(S.dest1 + S.pitch) = pixel;
        S.dest0 += 2;
        S.dest1 += 2;
        if (((phase ^ 1) & 1) != 0) {
            S.u = (u16 PTR4*)((u8 PTR4*)S.u + 1);
            S.v = (u16 PTR4*)((u8 PTR4*)S.v + 1);
        }
        remaining--;
    } while (remaining != 0);

    return phase;
}

static void dounaligned16row2w(u32 phase, u32 count)
{
    u32 remaining;
    u8 y;
    u32 ybase;
    u16 pixel;

    if (count == 0) {
        return;
    }
    remaining = count - 1;

    do {
        phase++;
        S.b = YUVTables[*(u8 PTR4*)S.u];
        S.gb = YUVTables[YUV_U_TO_GB_OFFSET + *(u8 PTR4*)S.u] + YUVTables[YUV_V_TO_GB_OFFSET + *(u8 PTR4*)S.v];
        S.r = YUVTables[YUV_V_TO_R_OFFSET + *(u8 PTR4*)S.v];
        y = *(u8 PTR4*)S.y0;
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + 1);
        ybase = ytable[y];
        pixel = RGB565(ybase, S.r, S.gb, S.b);
        ((u16 PTR4*)S.dest0)[0] = pixel;
        ((u16 PTR4*)S.dest0)[1] = pixel;
        S.dest0 += YUV_PACKED_WORD_BYTES;
        if (((phase ^ 1) & 1) != 0) {
            S.u = (u16 PTR4*)((u8 PTR4*)S.u + 1);
            S.v = (u16 PTR4*)((u8 PTR4*)S.v + 1);
        }
    } while (remaining-- != 0);
}

static u32 dounaligned16col2w(u32 count, s32 phase)
{
    u32 remaining;
    u8 y;
    u32 ybase;
    u16 pixel;

    remaining = count;
    do {
        phase++;
        S.b = YUVTables[*(u8 PTR4*)S.u];
        S.gb = YUVTables[YUV_U_TO_GB_OFFSET + *(u8 PTR4*)S.u] + YUVTables[YUV_V_TO_GB_OFFSET + *(u8 PTR4*)S.v];
        S.r = YUVTables[YUV_V_TO_R_OFFSET + *(u8 PTR4*)S.v];
        y = *(u8 PTR4*)S.y0;
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + 1);
        ybase = ytable[y];
        pixel = RGB565(ybase, S.r, S.gb, S.b);
        ((u16 PTR4*)S.dest0)[0] = pixel;
        ((u16 PTR4*)S.dest0)[1] = pixel;
        y = *(u8 PTR4*)S.y1;
        S.y1 = (u32 PTR4*)((u8 PTR4*)S.y1 + 1);
        ybase = ytable[y];
        pixel = RGB565(ybase, S.r, S.gb, S.b);
        ((u16 PTR4*)S.dest1)[0] = pixel;
        ((u16 PTR4*)S.dest1)[1] = pixel;
        S.dest0 += YUV_PACKED_WORD_BYTES;
        S.dest1 += YUV_PACKED_WORD_BYTES;
        if (((phase ^ 1) & 1) != 0) {
            S.u = (u16 PTR4*)((u8 PTR4*)S.u + 1);
            S.v = (u16 PTR4*)((u8 PTR4*)S.v + 1);
        }
        remaining--;
    } while (remaining != 0);

    return phase;
}

static void dounaligned16row2wh(u32 phase, u32 count)
{
    u32 remaining;
    u8 y;
    u32 ybase;
    u16 pixel;

    if (count == 0) {
        return;
    }
    remaining = count - 1;

    do {
        phase++;
        S.b = YUVTables[*(u8 PTR4*)S.u];
        S.gb = YUVTables[YUV_U_TO_GB_OFFSET + *(u8 PTR4*)S.u] + YUVTables[YUV_V_TO_GB_OFFSET + *(u8 PTR4*)S.v];
        S.r = YUVTables[YUV_V_TO_R_OFFSET + *(u8 PTR4*)S.v];
        y = *(u8 PTR4*)S.y0;
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + 1);
        ybase = ytable[y];
        pixel = RGB565(ybase, S.r, S.gb, S.b);
        ((u16 PTR4*)S.dest0)[0] = pixel;
        ((u16 PTR4*)S.dest0)[1] = pixel;
        *(u16 PTR4*)(S.dest0 + S.pitch) = pixel;
        *(u16 PTR4*)(S.dest0 + S.pitch + 2) = pixel;
        S.dest0 += YUV_PACKED_WORD_BYTES;
        if (((phase ^ 1) & 1) != 0) {
            S.u = (u16 PTR4*)((u8 PTR4*)S.u + 1);
            S.v = (u16 PTR4*)((u8 PTR4*)S.v + 1);
        }
    } while (remaining-- != 0);
}

static u32 dounaligned16col2wh(u32 count, s32 phase)
{
    u32 remaining;
    u8 y;
    u32 ybase;
    u16 pixel;

    remaining = count;
    do {
        phase++;
        S.b = YUVTables[*(u8 PTR4*)S.u];
        S.gb = YUVTables[YUV_U_TO_GB_OFFSET + *(u8 PTR4*)S.u] + YUVTables[YUV_V_TO_GB_OFFSET + *(u8 PTR4*)S.v];
        S.r = YUVTables[YUV_V_TO_R_OFFSET + *(u8 PTR4*)S.v];
        y = *(u8 PTR4*)S.y0;
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + 1);
        ybase = ytable[y];
        pixel = RGB565(ybase, S.r, S.gb, S.b);
        ((u16 PTR4*)S.dest0)[0] = pixel;
        ((u16 PTR4*)S.dest0)[1] = pixel;
        *(u16 PTR4*)(S.dest0 + S.pitch) = pixel;
        *(u16 PTR4*)(S.dest0 + S.pitch + 2) = pixel;
        y = *(u8 PTR4*)S.y1;
        S.y1 = (u32 PTR4*)((u8 PTR4*)S.y1 + 1);
        ybase = ytable[y];
        pixel = RGB565(ybase, S.r, S.gb, S.b);
        ((u16 PTR4*)S.dest1)[0] = pixel;
        ((u16 PTR4*)S.dest1)[1] = pixel;
        *(u16 PTR4*)(S.dest1 + S.pitch) = pixel;
        *(u16 PTR4*)(S.dest1 + S.pitch + 2) = pixel;
        S.dest0 += YUV_PACKED_WORD_BYTES;
        S.dest1 += YUV_PACKED_WORD_BYTES;
        if (((phase ^ 1) & 1) != 0) {
            S.u = (u16 PTR4*)((u8 PTR4*)S.u + 1);
            S.v = (u16 PTR4*)((u8 PTR4*)S.v + 1);
        }
        remaining--;
    } while (remaining != 0);

    return phase;
}

static void dounaligned16rowm(u32 phase, u32 count)
{
    const u32 PTR4* table;
    u8 y;

    (void)phase;
    if (count-- == 0) {
        return;
    }

    table = mono16;
    do {
        y = *(u8 PTR4*)S.y0;
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + 1);
        *(u16 PTR4*)S.dest0 = (u16)table[y];
        S.dest0 += 2;
    } while (count-- != 0);
}

static u32 dounaligned16colm(u32 count, s32 phase)
{
    const u32 PTR4* table;
    u32 remaining;
    u32 y;

    table = mono16;
    remaining = count;
    do {
        y = *(u8 PTR4*)S.y0;
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + 1);
        *(u16 PTR4*)S.dest0 = (u16)table[y];
        y = *(u8 PTR4*)S.y1;
        S.y1 = (u32 PTR4*)((u8 PTR4*)S.y1 + 1);
        *(u16 PTR4*)S.dest1 = (u16)table[y];
        S.dest0 += 2;
        S.dest1 += 2;
        remaining--;
    } while (remaining != 0);

    return phase + count;
}

static void dounaligned16row(u32 phase, u32 count)
{
    u32 remaining;
    u8 y;
    u32 ybase;

    if (count == 0) {
        return;
    }
    remaining = count - 1;

    do {
        phase++;
        S.b = YUVTables[*(u8 PTR4*)S.u];
        S.gb = YUVTables[YUV_U_TO_GB_OFFSET + *(u8 PTR4*)S.u] + YUVTables[YUV_V_TO_GB_OFFSET + *(u8 PTR4*)S.v];
        S.r = YUVTables[YUV_V_TO_R_OFFSET + *(u8 PTR4*)S.v];
        y = *(u8 PTR4*)S.y0;
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + 1);
        ybase = ytable[y];
        *(u16 PTR4*)S.dest0 = RGB565(ybase, S.r, S.gb, S.b);
        S.dest0 += 2;
        if (((phase ^ 1) & 1) != 0) {
            S.u = (u16 PTR4*)((u8 PTR4*)S.u + 1);
            S.v = (u16 PTR4*)((u8 PTR4*)S.v + 1);
        }
    } while (remaining-- != 0);
}

static u32 dounaligned16col(u32 count, s32 phase)
{
    u32 remaining;
    u8 y;
    u32 ybase;

    remaining = count;
    do {
        phase++;
        S.b = YUVTables[*(u8 PTR4*)S.u];
        S.gb = YUVTables[YUV_U_TO_GB_OFFSET + *(u8 PTR4*)S.u] + YUVTables[YUV_V_TO_GB_OFFSET + *(u8 PTR4*)S.v];
        S.r = YUVTables[YUV_V_TO_R_OFFSET + *(u8 PTR4*)S.v];
        y = *(u8 PTR4*)S.y0;
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + 1);
        ybase = ytable[y];
        *(u16 PTR4*)S.dest0 = RGB565(ybase, S.r, S.gb, S.b);
        y = *(u8 PTR4*)S.y1;
        S.y1 = (u32 PTR4*)((u8 PTR4*)S.y1 + 1);
        ybase = ytable[y];
        *(u16 PTR4*)S.dest1 = RGB565(ybase, S.r, S.gb, S.b);
        S.dest0 += 2;
        S.dest1 += 2;
        if (((phase ^ 1) & 1) != 0) {
            S.u = (u16 PTR4*)((u8 PTR4*)S.u + 1);
            S.v = (u16 PTR4*)((u8 PTR4*)S.v + 1);
        }
        remaining--;
    } while (remaining != 0);

    return phase;
}

extern "C" void YUV_blit_16bpp(void PTR4* dest,
                                u32 destx,
                                u32 desty,
                                u32 destpitch,
                                void PTR4* src,
                                u32 srcx,
                                u32 srcy,
                                u32 srcw,
                                u32 srch,
                                u32 srcpitch,
                                u32 srcheight,
                                u32 flags)
{
    YUV_blit(dest, destx, desty, destpitch, src, srcx, srcy, srcw, srch, srcpitch, srcheight, flags, 0, &blits16);
}

static void dounaligned16a4rowm2h(u32 phase, u32 count)
{
    const u32 PTR4* ytable;
    const u32 PTR4* atable;
    u8 y;
    u8 a;
    u16 pixel;

    (void)phase;
    if (count-- == 0) {
        return;
    }

    ytable = mono16;
    atable = clamp_a4;
    do {
        y = *(u8 PTR4*)S.y0;
        a = *(u8 PTR4*)S.a0;
        S.a0 = (u32 PTR4*)((u8 PTR4*)S.a0 + 1);
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + 1);
        pixel = (u16)atable[a] | (u16)ytable[y];
        *(u16 PTR4*)S.dest0 = pixel;
        *(u16 PTR4*)(S.dest0 + S.pitch) = pixel;
        S.dest0 += 2;
    } while (count-- != 0);
}

static u32 dounaligned16a4colm2h(u32 count, s32 phase)
{
    const u32 PTR4* ytable;
    const u32 PTR4* atable;
    u32 remaining;
    u8 y;
    u8 a;
    u16 pixel;

    ytable = mono16;
    atable = clamp_a4;
    remaining = count;
    do {
        y = *(u8 PTR4*)S.y0;
        a = *(u8 PTR4*)S.a0;
        S.a0 = (u32 PTR4*)((u8 PTR4*)S.a0 + 1);
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + 1);
        pixel = (u16)atable[a] | (u16)ytable[y];
        *(u16 PTR4*)S.dest0 = pixel;
        *(u16 PTR4*)(S.dest0 + S.pitch) = pixel;
        y = *(u8 PTR4*)S.y1;
        a = *(u8 PTR4*)S.a1;
        S.a1 = (u32 PTR4*)((u8 PTR4*)S.a1 + 1);
        S.y1 = (u32 PTR4*)((u8 PTR4*)S.y1 + 1);
        pixel = (u16)atable[a] | (u16)ytable[y];
        *(u16 PTR4*)S.dest1 = pixel;
        *(u16 PTR4*)(S.dest1 + S.pitch) = pixel;
        S.dest0 += 2;
        S.dest1 += 2;
        remaining--;
    } while (remaining != 0);

    return phase + count;
}

static void dounaligned16a4rowm2w(u32 phase, u32 count)
{
    u8 y;
    u8 a;
    u16 pixel;

    (void)phase;
    if (count-- == 0) {
        return;
    }

    do {
        y = *(u8 PTR4*)S.y0;
        a = *(u8 PTR4*)S.a0;
        S.a0 = (u32 PTR4*)((u8 PTR4*)S.a0 + 1);
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + 1);
        pixel = RGB565_M_A4(y, a);
        ((u16 PTR4*)S.dest0)[0] = pixel;
        ((u16 PTR4*)S.dest0)[1] = pixel;
        S.dest0 += YUV_PACKED_WORD_BYTES;
    } while (count-- != 0);
}

static u32 dounaligned16a4colm2w(u32 count, s32 phase)
{
    const u32 PTR4* ytable;
    const u32 PTR4* atable;
    u32 remaining;
    u8 y;
    u8 a;
    u16 pixel;

    ytable = mono16;
    atable = clamp_a4;
    remaining = count;
    do {
        y = *(u8 PTR4*)S.y0;
        a = *(u8 PTR4*)S.a0;
        S.a0 = (u32 PTR4*)((u8 PTR4*)S.a0 + 1);
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + 1);
        pixel = (u16)ytable[y] | (u16)atable[a];
        ((u16 PTR4*)S.dest0)[0] = pixel;
        ((u16 PTR4*)S.dest0)[1] = pixel;
        y = *(u8 PTR4*)S.y1;
        a = *(u8 PTR4*)S.a1;
        S.a1 = (u32 PTR4*)((u8 PTR4*)S.a1 + 1);
        S.y1 = (u32 PTR4*)((u8 PTR4*)S.y1 + 1);
        pixel = (u16)ytable[y] | (u16)atable[a];
        ((u16 PTR4*)S.dest1)[0] = pixel;
        ((u16 PTR4*)S.dest1)[1] = pixel;
        S.dest0 += YUV_PACKED_WORD_BYTES;
        S.dest1 += YUV_PACKED_WORD_BYTES;
        remaining--;
    } while (remaining != 0);

    return phase + count;
}

static void dounaligned16a4rowm2wh(u32 phase, u32 count)
{
    u8 y;
    u8 a;
    u16 pixel;

    (void)phase;
    if (count-- == 0) {
        return;
    }

    do {
        y = *(u8 PTR4*)S.y0;
        a = *(u8 PTR4*)S.a0;
        S.a0 = (u32 PTR4*)((u8 PTR4*)S.a0 + 1);
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + 1);
        pixel = RGB565_M_A4(y, a);
        ((u16 PTR4*)S.dest0)[0] = pixel;
        ((u16 PTR4*)S.dest0)[1] = pixel;
        *(u16 PTR4*)(S.dest0 + S.pitch) = pixel;
        *(u16 PTR4*)(S.dest0 + S.pitch + 2) = pixel;
        S.dest0 += YUV_PACKED_WORD_BYTES;
    } while (count-- != 0);
}

static u32 dounaligned16a4colm2wh(u32 count, s32 phase)
{
    u32 remaining;
    u8 y;
    u8 a;
    u16 pixel;

    remaining = count;
    do {
        y = *(u8 PTR4*)S.y0;
        a = *(u8 PTR4*)S.a0;
        S.a0 = (u32 PTR4*)((u8 PTR4*)S.a0 + 1);
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + 1);
        pixel = RGB565_M_A4(y, a);
        ((u16 PTR4*)S.dest0)[0] = pixel;
        ((u16 PTR4*)S.dest0)[1] = pixel;
        *(u16 PTR4*)(S.dest0 + S.pitch) = pixel;
        *(u16 PTR4*)(S.dest0 + S.pitch + 2) = pixel;
        y = *(u8 PTR4*)S.y1;
        a = *(u8 PTR4*)S.a1;
        S.a1 = (u32 PTR4*)((u8 PTR4*)S.a1 + 1);
        S.y1 = (u32 PTR4*)((u8 PTR4*)S.y1 + 1);
        pixel = RGB565_M_A4(y, a);
        ((u16 PTR4*)S.dest1)[0] = pixel;
        ((u16 PTR4*)S.dest1)[1] = pixel;
        *(u16 PTR4*)(S.dest1 + S.pitch) = pixel;
        *(u16 PTR4*)(S.dest1 + S.pitch + 2) = pixel;
        S.dest0 += YUV_PACKED_WORD_BYTES;
        S.dest1 += YUV_PACKED_WORD_BYTES;
        remaining--;
    } while (remaining != 0);

    return phase + count;
}

static void dounaligned16a4row2h(u32 phase, u32 count)
{
    u32 remaining;
    u8 PTR4* yptr;
    u8 PTR4* aptr;
    u8 y;
    u8 a;
    u32 ybase;
    u16 pixel;

    if (count == 0) {
        return;
    }
    remaining = count - 1;

    do {
        phase++;
        S.b = YUVTables[*(u8 PTR4*)S.u];
        S.gb = YUVTables[YUV_U_TO_GB_OFFSET + *(u8 PTR4*)S.u] + YUVTables[YUV_V_TO_GB_OFFSET + *(u8 PTR4*)S.v];
        S.r = YUVTables[YUV_V_TO_R_OFFSET + *(u8 PTR4*)S.v];
        yptr = (u8 PTR4*)S.y0;
        aptr = (u8 PTR4*)S.a0;
        y = *yptr++;
        S.y0 = (u32 PTR4*)yptr;
        ybase = ytable[y];
        a = *aptr++;
        S.a0 = (u32 PTR4*)aptr;
        pixel = RGB565_A4(ybase, S.r, S.gb, S.b, a);
        *(u16 PTR4*)S.dest0 = pixel;
        *(u16 PTR4*)(S.dest0 + S.pitch) = pixel;
        S.dest0 += 2;
        if (((phase ^ 1) & 1) != 0) {
            S.u = (u16 PTR4*)((u8 PTR4*)S.u + 1);
            S.v = (u16 PTR4*)((u8 PTR4*)S.v + 1);
        }
    } while (remaining-- != 0);
}

static u32 dounaligned16a4col2h(u32 count, s32 phase)
{
    u8 PTR4* yptr;
    u8 y;
    u8 a;
    u32 ybase;
    u16 pixel;

    do {
        phase++;
        S.b = YUVTables[*(u8 PTR4*)S.u];
        S.gb = YUVTables[YUV_U_TO_GB_OFFSET + *(u8 PTR4*)S.u] + YUVTables[YUV_V_TO_GB_OFFSET + *(u8 PTR4*)S.v];
        S.r = YUVTables[YUV_V_TO_R_OFFSET + *(u8 PTR4*)S.v];
        yptr = (u8 PTR4*)S.y0;
        y = *yptr++;
        S.y0 = (u32 PTR4*)yptr;
        ybase = ytable[y];
        a = *(u8 PTR4*)S.a0;
        S.a0 = (u32 PTR4*)((u8 PTR4*)S.a0 + 1);
        pixel = RGB565_A4(ybase, S.r, S.gb, S.b, a);
        *(u16 PTR4*)S.dest0 = pixel;
        *(u16 PTR4*)(S.dest0 + S.pitch) = pixel;
        yptr = (u8 PTR4*)S.y1;
        y = *yptr++;
        S.y1 = (u32 PTR4*)yptr;
        ybase = ytable[y];
        a = *(u8 PTR4*)S.a1;
        S.a1 = (u32 PTR4*)((u8 PTR4*)S.a1 + 1);
        pixel = RGB565_A4(ybase, S.r, S.gb, S.b, a);
        *(u16 PTR4*)S.dest1 = pixel;
        *(u16 PTR4*)(S.dest1 + S.pitch) = pixel;
        S.dest0 += 2;
        S.dest1 += 2;
        if (((phase ^ 1) & 1) != 0) {
            S.u = (u16 PTR4*)((u8 PTR4*)S.u + 1);
            S.v = (u16 PTR4*)((u8 PTR4*)S.v + 1);
        }
        count--;
    } while (count != 0);

    return phase;
}

static void dounaligned16a4row2w(u32 phase, u32 count)
{
    u32 remaining;
    u8 PTR4* yptr;
    u8 PTR4* aptr;
    u8 y;
    u8 a;
    u32 ybase;
    u16 pixel;

    if (count == 0) {
        return;
    }
    remaining = count - 1;

    do {
        phase++;
        S.b = YUVTables[*(u8 PTR4*)S.u];
        S.gb = YUVTables[YUV_U_TO_GB_OFFSET + *(u8 PTR4*)S.u] + YUVTables[YUV_V_TO_GB_OFFSET + *(u8 PTR4*)S.v];
        S.r = YUVTables[YUV_V_TO_R_OFFSET + *(u8 PTR4*)S.v];
        yptr = (u8 PTR4*)S.y0;
        aptr = (u8 PTR4*)S.a0;
        y = *yptr++;
        S.y0 = (u32 PTR4*)yptr;
        ybase = ytable[y];
        a = *aptr++;
        S.a0 = (u32 PTR4*)aptr;
        pixel = RGB565_A4(ybase, S.r, S.gb, S.b, a);
        ((u16 PTR4*)S.dest0)[0] = pixel;
        ((u16 PTR4*)S.dest0)[1] = pixel;
        S.dest0 += YUV_PACKED_WORD_BYTES;
        if (((phase ^ 1) & 1) != 0) {
            S.u = (u16 PTR4*)((u8 PTR4*)S.u + 1);
            S.v = (u16 PTR4*)((u8 PTR4*)S.v + 1);
        }
    } while (remaining-- != 0);
}

static u32 dounaligned16a4col2w(u32 count, s32 phase)
{
    u8 PTR4* yptr;
    u8 y;
    u8 a;
    u32 ybase;
    u16 pixel;

    do {
        phase++;
        S.b = YUVTables[*(u8 PTR4*)S.u];
        S.gb = YUVTables[YUV_U_TO_GB_OFFSET + *(u8 PTR4*)S.u] + YUVTables[YUV_V_TO_GB_OFFSET + *(u8 PTR4*)S.v];
        S.r = YUVTables[YUV_V_TO_R_OFFSET + *(u8 PTR4*)S.v];
        yptr = (u8 PTR4*)S.y0;
        y = *yptr++;
        S.y0 = (u32 PTR4*)yptr;
        ybase = ytable[y];
        a = *(u8 PTR4*)S.a0;
        S.a0 = (u32 PTR4*)((u8 PTR4*)S.a0 + 1);
        pixel = RGB565_A4(ybase, S.r, S.gb, S.b, a);
        ((u16 PTR4*)S.dest0)[0] = pixel;
        ((u16 PTR4*)S.dest0)[1] = pixel;
        yptr = (u8 PTR4*)S.y1;
        y = *yptr++;
        S.y1 = (u32 PTR4*)yptr;
        ybase = ytable[y];
        a = *(u8 PTR4*)S.a1;
        S.a1 = (u32 PTR4*)((u8 PTR4*)S.a1 + 1);
        pixel = RGB565_A4(ybase, S.r, S.gb, S.b, a);
        ((u16 PTR4*)S.dest1)[0] = pixel;
        ((u16 PTR4*)S.dest1)[1] = pixel;
        S.dest0 += YUV_PACKED_WORD_BYTES;
        S.dest1 += YUV_PACKED_WORD_BYTES;
        if (((phase ^ 1) & 1) != 0) {
            S.u = (u16 PTR4*)((u8 PTR4*)S.u + 1);
            S.v = (u16 PTR4*)((u8 PTR4*)S.v + 1);
        }
        count--;
    } while (count != 0);

    return phase;
}

static void dounaligned16a4row2wh(u32 phase, u32 count)
{
    u32 remaining;
    u8 PTR4* yptr;
    u8 PTR4* aptr;
    u8 y;
    u8 a;
    u32 ybase;
    u16 pixel;

    if (count == 0) {
        return;
    }
    remaining = count - 1;

    do {
        phase++;
        S.b = YUVTables[*(u8 PTR4*)S.u];
        S.gb = YUVTables[YUV_U_TO_GB_OFFSET + *(u8 PTR4*)S.u] + YUVTables[YUV_V_TO_GB_OFFSET + *(u8 PTR4*)S.v];
        S.r = YUVTables[YUV_V_TO_R_OFFSET + *(u8 PTR4*)S.v];
        yptr = (u8 PTR4*)S.y0;
        aptr = (u8 PTR4*)S.a0;
        y = *yptr++;
        S.y0 = (u32 PTR4*)yptr;
        ybase = ytable[y];
        a = *aptr++;
        S.a0 = (u32 PTR4*)aptr;
        pixel = RGB565_A4(ybase, S.r, S.gb, S.b, a);
        ((u16 PTR4*)S.dest0)[0] = pixel;
        ((u16 PTR4*)S.dest0)[1] = pixel;
        *(u16 PTR4*)(S.dest0 + S.pitch) = pixel;
        *(u16 PTR4*)(S.dest0 + S.pitch + 2) = pixel;
        S.dest0 += YUV_PACKED_WORD_BYTES;
        if (((phase ^ 1) & 1) != 0) {
            S.u = (u16 PTR4*)((u8 PTR4*)S.u + 1);
            S.v = (u16 PTR4*)((u8 PTR4*)S.v + 1);
        }
    } while (remaining-- != 0);
}

static u32 dounaligned16a4col2wh(u32 count, s32 phase)
{
    u8 PTR4* yptr;
    u8 PTR4* aptr;
    u8 y;
    u8 a;
    u32 ybase;
    u16 pixel;

    do {
        phase++;
        S.b = YUVTables[*(u8 PTR4*)S.u];
        S.gb = YUVTables[YUV_U_TO_GB_OFFSET + *(u8 PTR4*)S.u] + YUVTables[YUV_V_TO_GB_OFFSET + *(u8 PTR4*)S.v];
        S.r = YUVTables[YUV_V_TO_R_OFFSET + *(u8 PTR4*)S.v];
        yptr = (u8 PTR4*)S.y0;
        aptr = (u8 PTR4*)S.a0;
        y = *yptr++;
        S.y0 = (u32 PTR4*)yptr;
        ybase = ytable[y];
        a = *aptr++;
        S.a0 = (u32 PTR4*)aptr;
        pixel = RGB565_A4(ybase, S.r, S.gb, S.b, a);
        ((u16 PTR4*)S.dest0)[0] = pixel;
        ((u16 PTR4*)S.dest0)[1] = pixel;
        *(u16 PTR4*)(S.dest0 + S.pitch) = pixel;
        *(u16 PTR4*)(S.dest0 + S.pitch + 2) = pixel;
        yptr = (u8 PTR4*)S.y1;
        aptr = (u8 PTR4*)S.a1;
        y = *yptr++;
        S.y1 = (u32 PTR4*)yptr;
        ybase = ytable[y];
        a = *aptr++;
        S.a1 = (u32 PTR4*)aptr;
        pixel = RGB565_A4(ybase, S.r, S.gb, S.b, a);
        ((u16 PTR4*)S.dest1)[0] = pixel;
        ((u16 PTR4*)S.dest1)[1] = pixel;
        *(u16 PTR4*)(S.dest1 + S.pitch) = pixel;
        *(u16 PTR4*)(S.dest1 + S.pitch + 2) = pixel;
        S.dest0 += YUV_PACKED_WORD_BYTES;
        S.dest1 += YUV_PACKED_WORD_BYTES;
        if (((phase ^ 1) & 1) != 0) {
            S.u = (u16 PTR4*)((u8 PTR4*)S.u + 1);
            S.v = (u16 PTR4*)((u8 PTR4*)S.v + 1);
        }
        count--;
    } while (count != 0);

    return phase;
}

static void dounaligned16a4rowm(u32 phase, u32 count)
{
    u8 y;
    u8 a;

    (void)phase;
    if (count-- == 0) {
        return;
    }

    do {
        y = *(u8 PTR4*)S.y0;
        a = *(u8 PTR4*)S.a0;
        S.a0 = (u32 PTR4*)((u8 PTR4*)S.a0 + 1);
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + 1);
        *(u16 PTR4*)S.dest0 = RGB565_M_A4(y, a);
        S.dest0 += 2;
    } while (count-- != 0);
}

static u32 dounaligned16a4colm(u32 count, s32 phase)
{
    const u32 PTR4* ytable;
    const u32 PTR4* atable;
    u32 remaining;
    u8 y;
    u8 a;

    ytable = mono16;
    atable = clamp_a4;
    remaining = count;
    do {
        y = *(u8 PTR4*)S.y0;
        a = *(u8 PTR4*)S.a0;
        S.a0 = (u32 PTR4*)((u8 PTR4*)S.a0 + 1);
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + 1);
        *(u16 PTR4*)S.dest0 = (u16)ytable[y] | (u16)atable[a];
        y = *(u8 PTR4*)S.y1;
        a = *(u8 PTR4*)S.a1;
        S.a1 = (u32 PTR4*)((u8 PTR4*)S.a1 + 1);
        S.y1 = (u32 PTR4*)((u8 PTR4*)S.y1 + 1);
        *(u16 PTR4*)S.dest1 = (u16)ytable[y] | (u16)atable[a];
        S.dest0 += 2;
        S.dest1 += 2;
        remaining--;
    } while (remaining != 0);

    return phase + count;
}

static void dounaligned16a4row(u32 phase, u32 count)
{
    u32 remaining;
    u8 PTR4* yptr;
    u8 PTR4* aptr;
    u8 y;
    u8 a;
    u32 ybase;

    if (count == 0) {
        return;
    }
    remaining = count - 1;

    do {
        phase++;
        S.b = YUVTables[*(u8 PTR4*)S.u];
        S.gb = YUVTables[YUV_U_TO_GB_OFFSET + *(u8 PTR4*)S.u] + YUVTables[YUV_V_TO_GB_OFFSET + *(u8 PTR4*)S.v];
        S.r = YUVTables[YUV_V_TO_R_OFFSET + *(u8 PTR4*)S.v];
        yptr = (u8 PTR4*)S.y0;
        aptr = (u8 PTR4*)S.a0;
        y = *yptr++;
        S.y0 = (u32 PTR4*)yptr;
        ybase = ytable[y];
        a = *aptr++;
        S.a0 = (u32 PTR4*)aptr;
        *(u16 PTR4*)S.dest0 = RGB565_A4(ybase, S.r, S.gb, S.b, a);
        S.dest0 += 2;
        if (((phase ^ 1) & 1) != 0) {
            S.u = (u16 PTR4*)((u8 PTR4*)S.u + 1);
            S.v = (u16 PTR4*)((u8 PTR4*)S.v + 1);
        }
    } while (remaining-- != 0);
}

static u32 dounaligned16a4col(u32 count, s32 phase)
{
    u8 PTR4* yptr;
    u8 y;
    u8 a;
    u32 ybase;

    do {
        phase++;
        S.b = YUVTables[*(u8 PTR4*)S.u];
        S.gb = YUVTables[YUV_U_TO_GB_OFFSET + *(u8 PTR4*)S.u] + YUVTables[YUV_V_TO_GB_OFFSET + *(u8 PTR4*)S.v];
        S.r = YUVTables[YUV_V_TO_R_OFFSET + *(u8 PTR4*)S.v];
        yptr = (u8 PTR4*)S.y0;
        y = *yptr++;
        S.y0 = (u32 PTR4*)yptr;
        ybase = ytable[y];
        a = *(u8 PTR4*)S.a0;
        S.a0 = (u32 PTR4*)((u8 PTR4*)S.a0 + 1);
        *(u16 PTR4*)S.dest0 = RGB565_A4(ybase, S.r, S.gb, S.b, a);
        yptr = (u8 PTR4*)S.y1;
        y = *yptr++;
        S.y1 = (u32 PTR4*)yptr;
        ybase = ytable[y];
        a = *(u8 PTR4*)S.a1;
        S.a1 = (u32 PTR4*)((u8 PTR4*)S.a1 + 1);
        *(u16 PTR4*)S.dest1 = RGB565_A4(ybase, S.r, S.gb, S.b, a);
        S.dest0 += 2;
        S.dest1 += 2;
        if (((phase ^ 1) & 1) != 0) {
            S.u = (u16 PTR4*)((u8 PTR4*)S.u + 1);
            S.v = (u16 PTR4*)((u8 PTR4*)S.v + 1);
        }
        count--;
    } while (count != 0);

    return phase;
}

extern "C" void YUV_blit_16a4bpp(void PTR4* dest,
                                  u32 destx,
                                  u32 desty,
                                  u32 destpitch,
                                  void PTR4* src,
                                  u32 srcx,
                                  u32 srcy,
                                  u32 srcw,
                                  u32 srch,
                                  u32 srcpitch,
                                  u32 srcheight,
                                  void PTR4* alpha,
                                  u32 flags)
{
    YUV_blit(dest, destx, desty, destpitch, src, srcx, srcy, srcw, srch, srcpitch, srcheight, flags, alpha, &blits16a4);
}

static void dounalignedYUY2rowm2wh(u32 phase, u32 count)
{
    s32 remaining;
    u8 y0;
    u8 y1;
    u32 pixel0;
    u32 pixel1;

    (void)phase;
    remaining = count;
    remaining -= 2;
    if (remaining < 0) {
        return;
    }

    do {
        y0 = *(u8 PTR4*)S.y0;
        y1 = *((u8 PTR4*)S.y0 + 1);
        pixel0 = YUY2_NEUTRAL_CHROMA | y0 | ((u32)y0 << 16);
        pixel1 = YUY2_NEUTRAL_CHROMA | y1 | ((u32)y1 << 16);
        ((u32 PTR4*)S.dest0)[0] = pixel0;
        ((u32 PTR4*)S.dest0)[1] = pixel1;
        *(u32 PTR4*)(S.dest0 + S.pitch) = pixel0;
        *(u32 PTR4*)(S.dest0 + S.pitch + YUV_PACKED_WORD_BYTES) = pixel1;
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + 2);
        S.dest0 += 8;
        remaining -= 2;
    } while (remaining >= 0);
}

static u32 dounalignedYUY2colm2wh(u32 count, s32 phase)
{
    s32 remaining;
    u8 y0;
    u8 y1;
    u32 pixel0;
    u32 pixel1;

    remaining = count;
    do {
        remaining -= 2;
        y0 = *(u8 PTR4*)S.y0;
        y1 = *((u8 PTR4*)S.y0 + 1);
        pixel0 = YUY2_NEUTRAL_CHROMA | y0 | ((u32)y0 << 16);
        pixel1 = YUY2_NEUTRAL_CHROMA | y1 | ((u32)y1 << 16);
        ((u32 PTR4*)S.dest0)[0] = pixel0;
        ((u32 PTR4*)S.dest0)[1] = pixel1;
        *(u32 PTR4*)(S.dest0 + S.pitch) = pixel0;
        *(u32 PTR4*)(S.dest0 + S.pitch + YUV_PACKED_WORD_BYTES) = pixel1;
        y0 = *(u8 PTR4*)S.y1;
        y1 = *((u8 PTR4*)S.y1 + 1);
        pixel0 = YUY2_NEUTRAL_CHROMA | y0 | ((u32)y0 << 16);
        pixel1 = YUY2_NEUTRAL_CHROMA | y1 | ((u32)y1 << 16);
        ((u32 PTR4*)S.dest1)[0] = pixel0;
        ((u32 PTR4*)S.dest1)[1] = pixel1;
        *(u32 PTR4*)(S.dest1 + S.pitch) = pixel0;
        *(u32 PTR4*)(S.dest1 + S.pitch + YUV_PACKED_WORD_BYTES) = pixel1;
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + 2);
        S.y1 = (u32 PTR4*)((u8 PTR4*)S.y1 + 2);
        S.dest0 += 8;
        S.dest1 += 8;
    } while (remaining > 0);

    return phase + count;
}

static void dounalignedYUY2rowm2w(u32 phase, u32 count)
{
    s32 remaining;
    u8 y0;
    u8 y1;
    u32 pixel;

    (void)phase;
    remaining = count;
    remaining -= 2;
    if (remaining < 0) {
        return;
    }

    do {
        y0 = *(u8 PTR4*)S.y0;
        pixel = YUY2_NEUTRAL_CHROMA | y0 | ((u32)y0 << 16);
        ((u32 PTR4*)S.dest0)[0] = pixel;
        y1 = *((u8 PTR4*)S.y0 + 1);
        pixel = YUY2_NEUTRAL_CHROMA | y1 | ((u32)y1 << 16);
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + 2);
        ((u32 PTR4*)S.dest0)[1] = pixel;
        S.dest0 += 8;
        remaining -= 2;
    } while (remaining >= 0);
}

static u32 dounalignedYUY2colm2w(u32 count, s32 phase)
{
    s32 remaining;
    u8 y0;
    u8 y1;
    u32 pixel;

    remaining = count;
    do {
        remaining -= 2;
        y0 = *(u8 PTR4*)S.y0;
        pixel = YUY2_NEUTRAL_CHROMA | y0 | ((u32)y0 << 16);
        ((u32 PTR4*)S.dest0)[0] = pixel;
        y1 = *((u8 PTR4*)S.y0 + 1);
        pixel = YUY2_NEUTRAL_CHROMA | y1 | ((u32)y1 << 16);
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + 2);
        ((u32 PTR4*)S.dest0)[1] = pixel;
        y0 = *(u8 PTR4*)S.y1;
        pixel = YUY2_NEUTRAL_CHROMA | y0 | ((u32)y0 << 16);
        ((u32 PTR4*)S.dest1)[0] = pixel;
        y1 = *((u8 PTR4*)S.y1 + 1);
        pixel = YUY2_NEUTRAL_CHROMA | y1 | ((u32)y1 << 16);
        S.y1 = (u32 PTR4*)((u8 PTR4*)S.y1 + 2);
        ((u32 PTR4*)S.dest1)[1] = pixel;
        S.dest0 += 8;
        S.dest1 += 8;
    } while (remaining > 0);

    return phase + count;
}

static void dounalignedYUY2rowm2h(u32 phase, u32 count)
{
    s32 remaining;
    u8 y0;
    u8 y1;
    u32 pixel;

    (void)phase;
    remaining = count;
    remaining -= 2;
    if (remaining < 0) {
        return;
    }

    do {
        y0 = *(u8 PTR4*)S.y0;
        y1 = *((u8 PTR4*)S.y0 + 1);
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + 2);
        pixel = YUY2_M(y0, y1);
        *(u32 PTR4*)S.dest0 = pixel;
        *(u32 PTR4*)(S.dest0 + S.pitch) = pixel;
        S.dest0 += YUV_PACKED_WORD_BYTES;
        remaining -= 2;
    } while (remaining >= 0);
}

static u32 dounalignedYUY2colm2h(u32 count, s32 phase)
{
    s32 remaining;
    u8 y0;
    u8 y1;
    u32 pixel;

    remaining = count;
    do {
        remaining -= 2;
        y0 = *(u8 PTR4*)S.y0;
        y1 = *((u8 PTR4*)S.y0 + 1);
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + 2);
        pixel = YUY2_M(y0, y1);
        *(u32 PTR4*)S.dest0 = pixel;
        *(u32 PTR4*)(S.dest0 + S.pitch) = pixel;
        y0 = *(u8 PTR4*)S.y1;
        y1 = *((u8 PTR4*)S.y1 + 1);
        S.y1 = (u32 PTR4*)((u8 PTR4*)S.y1 + 2);
        pixel = YUY2_M(y0, y1);
        *(u32 PTR4*)S.dest1 = pixel;
        *(u32 PTR4*)(S.dest1 + S.pitch) = pixel;
        S.dest0 += YUV_PACKED_WORD_BYTES;
        S.dest1 += YUV_PACKED_WORD_BYTES;
    } while (remaining > 0);

    return phase + count;
}

static void dounalignedYUY2row2wh(u32 phase, u32 count)
{
    s32 remaining;
    u8 y0;
    u8 y1;
    u8 u;
    u8 v;
    u32 pixel0;
    u32 pixel1;

    (void)phase;
    remaining = count;
    remaining -= 2;
    if (remaining < 0) {
        return;
    }

    do {
        u = *(u8 PTR4*)S.u;
        S.u = (u16 PTR4*)((u8 PTR4*)S.u + 1);
        y0 = *(u8 PTR4*)S.y0;
        v = *(u8 PTR4*)S.v;
        S.v = (u16 PTR4*)((u8 PTR4*)S.v + 1);
        pixel0 = y0 | ((u32)u << 8) | ((u32)y0 << 16) | ((u32)v << 24);
        ((u32 PTR4*)S.dest0)[0] = pixel0;
        y1 = *((u8 PTR4*)S.y0 + 1);
        pixel1 = (pixel0 & YUY2_CHROMA_MASK) | y1 | ((u32)y1 << 16);
        ((u32 PTR4*)S.dest0)[1] = pixel1;
        *(u32 PTR4*)(S.dest0 + S.pitch) = pixel0;
        *(u32 PTR4*)(S.dest0 + S.pitch + YUV_PACKED_WORD_BYTES) = pixel1;
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + 2);
        S.dest0 += 8;
        remaining -= 2;
    } while (remaining >= 0);
}

static u32 dounalignedYUY2col2wh(u32 count, s32 phase)
{
    s32 remaining;
    u8 y0;
    u8 y1;
    u8 u;
    u8 v;
    u32 pixel0;
    u32 pixel1;
    u32 uv0;
    u32 uv1;

    remaining = count;
    do {
        remaining -= 2;
        u = *(u8 PTR4*)S.u;
        S.u = (u16 PTR4*)((u8 PTR4*)S.u + 1);
        v = *(u8 PTR4*)S.v;
        S.v = (u16 PTR4*)((u8 PTR4*)S.v + 1);
        y0 = *(u8 PTR4*)S.y0;
        pixel0 = y0 | ((u32)u << 8) | ((u32)y0 << 16) | ((u32)v << 24);
        y1 = *((u8 PTR4*)S.y0 + 1);
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + 2);
        pixel1 = (pixel0 & YUY2_CHROMA_MASK) | y1 | ((u32)y1 << 16);
        ((u32 PTR4*)S.dest0)[0] = pixel0;
        ((u32 PTR4*)S.dest0)[1] = pixel1;
        uv0 = pixel0 & YUY2_CHROMA_MASK;
        uv1 = pixel1 & YUY2_CHROMA_MASK;
        *(u32 PTR4*)(S.dest0 + S.pitch) = pixel0;
        *(u32 PTR4*)(S.dest0 + S.pitch + YUV_PACKED_WORD_BYTES) = pixel1;
        y0 = *(u8 PTR4*)S.y1;
        pixel0 = uv0 | y0 | ((u32)y0 << 16);
        y1 = *((u8 PTR4*)S.y1 + 1);
        S.y1 = (u32 PTR4*)((u8 PTR4*)S.y1 + 2);
        pixel1 = uv1 | y1 | ((u32)y1 << 16);
        ((u32 PTR4*)S.dest1)[0] = pixel0;
        ((u32 PTR4*)S.dest1)[1] = pixel1;
        *(u32 PTR4*)(S.dest1 + S.pitch) = pixel0;
        *(u32 PTR4*)(S.dest1 + S.pitch + YUV_PACKED_WORD_BYTES) = pixel1;
        S.dest0 += 8;
        S.dest1 += 8;
    } while (remaining > 0);

    return phase + count;
}

static void dounalignedYUY2row2w(u32 phase, u32 count)
{
    s32 remaining;
    u8 y0;
    u8 y1;
    u8 u;
    u8 v;
    u32 pixel;

    (void)phase;
    remaining = count;
    remaining -= 2;
    if (remaining < 0) {
        return;
    }

    do {
        u = *(u8 PTR4*)S.u;
        S.u = (u16 PTR4*)((u8 PTR4*)S.u + 1);
        y0 = *(u8 PTR4*)S.y0;
        v = *(u8 PTR4*)S.v;
        S.v = (u16 PTR4*)((u8 PTR4*)S.v + 1);
        pixel = y0 | ((u32)u << 8) | ((u32)y0 << 16) | ((u32)v << 24);
        ((u32 PTR4*)S.dest0)[0] = pixel;
        y1 = *((u8 PTR4*)S.y0 + 1);
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + 2);
        ((u32 PTR4*)S.dest0)[1] = (pixel & YUY2_CHROMA_MASK) | y1 | ((u32)y1 << 16);
        S.dest0 += 8;
        remaining -= 2;
    } while (remaining >= 0);
}

static u32 dounalignedYUY2col2w(u32 count, s32 phase)
{
    s32 remaining;
    u8 y0;
    u8 y1;
    u8 u;
    u8 v;
    u32 pixel;

    remaining = count;
    do {
        remaining -= 2;
        u = *(u8 PTR4*)S.u;
        S.u = (u16 PTR4*)((u8 PTR4*)S.u + 1);
        y0 = *(u8 PTR4*)S.y0;
        v = *(u8 PTR4*)S.v;
        S.v = (u16 PTR4*)((u8 PTR4*)S.v + 1);
        pixel = y0 | ((u32)u << 8) | ((u32)y0 << 16) | ((u32)v << 24);
        ((u32 PTR4*)S.dest0)[0] = pixel;
        y1 = *((u8 PTR4*)S.y0 + 1);
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + 2);
        pixel = (pixel & YUY2_CHROMA_MASK) | y1 | ((u32)y1 << 16);
        ((u32 PTR4*)S.dest0)[1] = pixel;
        y0 = *(u8 PTR4*)S.y1;
        pixel = (pixel & YUY2_CHROMA_MASK) | y0 | ((u32)y0 << 16);
        ((u32 PTR4*)S.dest1)[0] = pixel;
        y1 = *((u8 PTR4*)S.y1 + 1);
        S.y1 = (u32 PTR4*)((u8 PTR4*)S.y1 + 2);
        ((u32 PTR4*)S.dest1)[1] = (pixel & YUY2_CHROMA_MASK) | y1 | ((u32)y1 << 16);
        S.dest0 += 8;
        S.dest1 += 8;
    } while (remaining > 0);

    return phase + count;
}

static void dounalignedYUY2row2h(u32 phase, u32 count)
{
    s32 remaining;
    u8 y0;
    u8 y1;
    u8 u;
    u8 v;
    u32 pixel;

    (void)phase;
    remaining = count;
    remaining -= 2;
    if (remaining < 0) {
        return;
    }

    do {
        u = *(u8 PTR4*)S.u;
        S.u = (u16 PTR4*)((u8 PTR4*)S.u + 1);
        y0 = *(u8 PTR4*)S.y0;
        y1 = *((u8 PTR4*)S.y0 + 1);
        v = *(u8 PTR4*)S.v;
        S.v = (u16 PTR4*)((u8 PTR4*)S.v + 1);
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + 2);
        pixel = y0 | ((u32)u << 8) | ((u32)y1 << 16) | ((u32)v << 24);
        *(u32 PTR4*)S.dest0 = pixel;
        *(u32 PTR4*)(S.dest0 + S.pitch) = pixel;
        S.dest0 += YUV_PACKED_WORD_BYTES;
        remaining -= 2;
    } while (remaining >= 0);
}

static u32 dounalignedYUY2col2h(u32 count, s32 phase)
{
    s32 remaining;
    u8 y0;
    u8 y1;
    u8 u;
    u8 v;
    u32 pixel;

    remaining = count;
    do {
        remaining -= 2;
        u = *(u8 PTR4*)S.u;
        y0 = *(u8 PTR4*)S.y0;
        y1 = *((u8 PTR4*)S.y0 + 1);
        v = *(u8 PTR4*)S.v;
        S.u = (u16 PTR4*)((u8 PTR4*)S.u + 1);
        S.v = (u16 PTR4*)((u8 PTR4*)S.v + 1);
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + 2);
        pixel = y0 | ((u32)u << 8) | ((u32)y1 << 16) | ((u32)v << 24);
        *(u32 PTR4*)S.dest0 = pixel;
        *(u32 PTR4*)(S.dest0 + S.pitch) = pixel;
        pixel &= YUY2_CHROMA_MASK;
        y0 = *(u8 PTR4*)S.y1;
        y1 = *((u8 PTR4*)S.y1 + 1);
        S.y1 = (u32 PTR4*)((u8 PTR4*)S.y1 + 2);
        pixel = pixel | y0 | ((u32)y1 << 16);
        *(u32 PTR4*)S.dest1 = pixel;
        *(u32 PTR4*)(S.dest1 + S.pitch) = pixel;
        S.dest0 += YUV_PACKED_WORD_BYTES;
        S.dest1 += YUV_PACKED_WORD_BYTES;
    } while (remaining > 0);

    return phase + count;
}

static void dounalignedYUY2rowm(u32 phase, u32 count)
{
    s32 remaining;
    u8 y0;
    u8 y1;
    u32 pixel;

    (void)phase;
    remaining = count;
    remaining -= 2;
    if (remaining < 0) {
        return;
    }

    do {
        y1 = *((u8 PTR4*)S.y0 + 1);
        y0 = *(u8 PTR4*)S.y0;
        pixel = YUY2_NEUTRAL_CHROMA | y0 | ((u32)y1 << 16);
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + 2);
        *(u32 PTR4*)S.dest0 = pixel;
        S.dest0 += YUV_PACKED_WORD_BYTES;
        remaining -= 2;
    } while (remaining >= 0);
}

static u32 dounalignedYUY2colm(u32 count, s32 phase)
{
    s32 remaining;
    u8 y0;
    u8 y1;
    u32 pixel;

    remaining = count;
    do {
        remaining -= 2;
        y1 = *((u8 PTR4*)S.y0 + 1);
        y0 = *(u8 PTR4*)S.y0;
        pixel = YUY2_NEUTRAL_CHROMA | y0 | ((u32)y1 << 16);
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + 2);
        *(u32 PTR4*)S.dest0 = pixel;
        y1 = *((u8 PTR4*)S.y1 + 1);
        y0 = *(u8 PTR4*)S.y1;
        pixel = YUY2_NEUTRAL_CHROMA | y0 | ((u32)y1 << 16);
        S.y1 = (u32 PTR4*)((u8 PTR4*)S.y1 + 2);
        *(u32 PTR4*)S.dest1 = pixel;
        S.dest0 += YUV_PACKED_WORD_BYTES;
        S.dest1 += YUV_PACKED_WORD_BYTES;
    } while (remaining > 0);

    return phase + count;
}

static void dounalignedYUY2row(u32 phase, u32 count)
{
    s32 remaining;
    u8 y0;
    u8 y1;
    u8 u;
    u8 v;
    u32 pixel;

    (void)phase;
    remaining = count;
    remaining -= 2;
    if (remaining < 0) {
        return;
    }

    do {
        u = *(u8 PTR4*)S.u;
        S.u = (u16 PTR4*)((u8 PTR4*)S.u + 1);
        y0 = *(u8 PTR4*)S.y0;
        y1 = *((u8 PTR4*)S.y0 + 1);
        v = *(u8 PTR4*)S.v;
        S.v = (u16 PTR4*)((u8 PTR4*)S.v + 1);
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + 2);
        pixel = y0 | ((u32)u << 8) | ((u32)y1 << 16) | ((u32)v << 24);
        *(u32 PTR4*)S.dest0 = pixel;
        S.dest0 += YUV_PACKED_WORD_BYTES;
        remaining -= 2;
    } while (remaining >= 0);
}

static u32 dounalignedYUY2col(u32 count, s32 phase)
{
    s32 remaining;
    u8 y0;
    u8 y1;
    u8 u;
    u8 v;
    u32 pixel;

    remaining = count;
    do {
        remaining -= 2;
        u = *(u8 PTR4*)S.u;
        y0 = *(u8 PTR4*)S.y0;
        y1 = *((u8 PTR4*)S.y0 + 1);
        v = *(u8 PTR4*)S.v;
        S.u = (u16 PTR4*)((u8 PTR4*)S.u + 1);
        S.v = (u16 PTR4*)((u8 PTR4*)S.v + 1);
        S.y0 = (u32 PTR4*)((u8 PTR4*)S.y0 + 2);
        pixel = y0 | ((u32)u << 8) | ((u32)y1 << 16) | ((u32)v << 24);
        *(u32 PTR4*)S.dest0 = pixel;
        pixel &= YUY2_CHROMA_MASK;
        y0 = *(u8 PTR4*)S.y1;
        y1 = *((u8 PTR4*)S.y1 + 1);
        S.y1 = (u32 PTR4*)((u8 PTR4*)S.y1 + 2);
        *(u32 PTR4*)S.dest1 = pixel | y0 | ((u32)y1 << 16);
        S.dest0 += YUV_PACKED_WORD_BYTES;
        S.dest1 += YUV_PACKED_WORD_BYTES;
    } while (remaining > 0);

    return phase + count;
}

extern "C" void YUV_blit_YUY2(void PTR4* dest,
                               u32 destx,
                               u32 desty,
                               u32 destpitch,
                               void PTR4* src,
                               u32 srcx,
                               u32 srcy,
                               u32 srcw,
                               u32 srch,
                               u32 srcpitch,
                               u32 srcheight,
                               u32 flags)
{
    if ((((u32)dest) & 3) == 2) {
        destx++;
        dest = (void PTR4*)(((u32)dest) & ~3);
    }

    if ((destx & 1) != 0) {
        if ((srcx & 1) != 0) {
            srcx++;
        }
        destx++;
        srcw--;
    } else if ((srcx & 1) != 0) {
        srcx++;
        srcw--;
    }

    if ((srcw & 1) != 0) {
        srcw--;
    }

    YUV_blit(dest, destx, desty, destpitch, src, srcx, srcy, srcw, srch, srcpitch, srcheight, flags, 0, &blitsyuy2);
}

extern "C" void YUV_blit_32bpp_mask(void PTR4* dest,
                                     u32 destx,
                                     u32 desty,
                                     u32 destpitch,
                                     u8 PTR4* mask,
                                     u32 maskpitch,
                                     void PTR4* src,
                                     u32 srcx,
                                     u32 srcy,
                                     u32 srcw,
                                     u32 srch,
                                     u32 srcpitch,
                                     u32 srcheight,
                                     u32 flags)
{
    YUV_blit_mask(dest, destx, desty, destpitch, mask, maskpitch, src, srcx, srcy, srcw, srch, srcpitch, srcheight, flags,
                  0, &blits32);
}

extern "C" void YUV_blit_32abpp_mask(void PTR4* dest,
                                      u32 destx,
                                      u32 desty,
                                      u32 destpitch,
                                      u8 PTR4* mask,
                                      u32 maskpitch,
                                      void PTR4* src,
                                      u32 srcx,
                                      u32 srcy,
                                      u32 srcw,
                                      u32 srch,
                                      u32 srcpitch,
                                      u32 srcheight,
                                      void PTR4* alpha,
                                      u32 flags)
{
    YUV_blit_mask(dest, destx, desty, destpitch, mask, maskpitch, src, srcx, srcy, srcw, srch, srcpitch, srcheight, flags,
                  alpha, &blits32a);
}

extern "C" void YUV_blit_16bpp_mask(void PTR4* dest,
                                     u32 destx,
                                     u32 desty,
                                     u32 destpitch,
                                     u8 PTR4* mask,
                                     u32 maskpitch,
                                     void PTR4* src,
                                     u32 srcx,
                                     u32 srcy,
                                     u32 srcw,
                                     u32 srch,
                                     u32 srcpitch,
                                     u32 srcheight,
                                     u32 flags)
{
    YUV_blit_mask(dest, destx, desty, destpitch, mask, maskpitch, src, srcx, srcy, srcw, srch, srcpitch, srcheight, flags,
                  0, &blits16);
}

extern "C" void YUV_blit_16a4bpp_mask(void PTR4* dest,
                                       u32 destx,
                                       u32 desty,
                                       u32 destpitch,
                                       u8 PTR4* mask,
                                       u32 maskpitch,
                                       void PTR4* src,
                                       u32 srcx,
                                       u32 srcy,
                                       u32 srcw,
                                       u32 srch,
                                       u32 srcpitch,
                                       u32 srcheight,
                                       void PTR4* alpha,
                                       u32 flags)
{
    YUV_blit_mask(dest, destx, desty, destpitch, mask, maskpitch, src, srcx, srcy, srcw, srch, srcpitch, srcheight, flags,
                  alpha, &blits16a4);
}

extern "C" void YUV_blit_YUY2_mask(void PTR4* dest,
                                    u32 destx,
                                    u32 desty,
                                    u32 destpitch,
                                    u8 PTR4* mask,
                                    u32 maskpitch,
                                    void PTR4* src,
                                    u32 srcx,
                                    u32 srcy,
                                    u32 srcw,
                                    u32 srch,
                                    u32 srcpitch,
                                    u32 srcheight,
                                    u32 flags)
{
    YUV_blit_mask(dest, destx, desty, destpitch, mask, maskpitch, src, srcx, srcy, srcw, srch, srcpitch, srcheight, flags,
                  0, &blitsyuy2);
}

#pragma dont_inline reset
