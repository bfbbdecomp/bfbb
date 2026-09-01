#include "bink.h"
#include "expand.h"
#include "../bitplane.h"
#include "../dct.h"
#include "../varbits.h"
#include "binkngc.h"

#define BINK_BLOCK_SHIFT 3
#define BINK_BLOCK_SIDE 8
#define BINK_BLOCK_PIXELS (BINK_BLOCK_SIDE * BINK_BLOCK_SIDE)
#define BINK_RUN_BLOCK_LAST_PIXEL (BINK_BLOCK_PIXELS - 1)
#define BINK_BLOCK_ROUND_MASK (BINK_BLOCK_SIDE - 1)
#define BINK_BLOCK_ROUND(value) (((value) + BINK_BLOCK_ROUND_MASK) & ~BINK_BLOCK_ROUND_MASK)
#define BINK_BLOCK_PATTERN_OFFSET(offset, pitch) \
    (((offset) >> BINK_BLOCK_SHIFT) * (pitch) + ((offset) & BINK_BLOCK_ROUND_MASK))
#define BINK_BLOCK_ODD_ROW(row) (((row) & BINK_BLOCK_SIDE) != 0)
#define BINK_BUNDLE_WIDTH 0x200
#define BINK_CHROMA_SHIFT 1
#define BINK_CHROMA_ROUND(value) (((value) + 1) >> BINK_CHROMA_SHIFT)
#define BINK_LUMA_PLANE_SCALE 1
#define BINK_CHROMA_PLANE_SCALE 2
#define BINK_COLOR_BLOCK_BYTES BINK_BLOCK_PIXELS
#define BINK_PATTERN_BLOCK_BYTES BINK_BLOCK_SIDE
#define BINK_RUN_BLOCK_BYTES 0x30
#define BINK_BLOCK_TYPE_BITS 4
#define BINK_COLOR_BITS 8
#define BINK_PATTERN_BITS 8
#define BINK_MOTION_BITS 5
#define BINK_DC_START_BITS 11
#define BINK_RUN_BITS 4
typedef BITSTYPE EXPBITSTYPE;

#define EXP_BITS_PER_WORD BITSTYPELEN
#define EXP_LAST_BIT_INDEX (EXP_BITS_PER_WORD - 1)
#define EXP_WORD_BYTES BITSTYPEBYTES
#define EXP_U16_MASK 0xffff
#define HUFF4_SYMBOLS 16
#define HUFF4_SYMBOL_MASK 0xf
#define HUFF4_ALL_SYMBOLS_MASK 0xffff
#define HUFF4_USED_SHIFT 4
#define HUFF4_CODE_USED(code) ((code) >> HUFF4_USED_SHIFT)
#define HUFF4_CODE_SYMBOL(code) ((code) & HUFF4_SYMBOL_MASK)
#define HUFF4_CODE_VALUE(code, values) ((values)[HUFF4_CODE_SYMBOL(code)])
#define HUFF4_SUBTYPE_BITS 2
#define HUFF4_EXPLICIT_SUBTYPE_BITS 3
#define HUFF4_PAIR_COUNT 8
#define HUFF4_PAIR_SYMBOLS 2
#define HUFF4_QUARTER_SYMBOLS 4
#define HUFF4_HALF_SYMBOLS 8
#define HUFF4_LAST_QUARTER_SYMBOL (HUFF4_QUARTER_SYMBOLS * 3)
#define HUFF4_LAST_PAIR_SYMBOL (HUFF4_SYMBOLS - HUFF4_PAIR_SYMBOLS)
#define HUFF4_DECODE_1BYTE_SIZE HUFF4_SYMBOLS
#define HUFF4_DECODE_2BYTE_SIZE (HUFF4_SYMBOLS * 2)
#define HUFF4_DECODE_4BYTE_SIZE (HUFF4_SYMBOLS * 4)
#define HUFF4_DECODE_8BYTE_SIZE (HUFF4_SYMBOLS * 8)
#define HUFF4_MASK_4BYTE_SIZE (HUFF4_SYMBOLS * 4)
#define HUFF4_MASK_1BYTE_SIZE HUFF4_SYMBOLS
#define HUFF4_MERGE_PAIR_SIZE 4
#define HUFF4_RLE_LITERAL_COUNT 12
#define HUFF8_TABLE_STATES 16
#define BUNDLE_REPEAT_EXTRA 0x14
#define BUNDLE_REPEAT_THRESHOLD (BUNDLE_REPEAT_EXTRA + 2)
#define BINK_SIGNED_BYTE_BIAS 0x80
#define BINK_SIGNED_BYTE_MASK 0x7f
#define BINK_DELTA16_GROUP_MAX 8
#define BINK_BUNDLE_MIN_BYTE_BITS 8
#define BINK_BUNDLE_MIN_WORD_BITS 16
#define BINK_BYTE_BITS 8
#define BINK_WORD_ALIGN_MASK 3
#define BINK_PLANE_WORD_BYTES sizeof(u32)
#define BINK_WORK_BLOCK_SPAN (BINK_BLOCK_SIDE * BINK_CHROMA_PLANE_SCALE)
#define BINK_DC_BYTES sizeof(s16)
#define BINK_RESIDUE_LIMIT_BITS 7
#define BINK_DCT_QUANT_BITS 4
#define BINK_DCT_PATTERN_BITS 4
#define BINK_BLOCK_ROWS(rows) ((rows) >> BINK_BLOCK_SHIFT)
#define BINK_BUNDLE_COUNT_BASE(rows, pitch) (BINK_BLOCK_ROWS(rows) * (pitch) - 1)
#define BINK_BUNDLE_COUNT_BITS(width, count_base) \
    getbitlevelvar(((width) + (count_base)) & EXP_U16_MASK)
#define BINK_BUNDLE_INITIAL_VALUE(shift) (1 << ((shift) - 1))
#define BINK_BUNDLE_STORAGE_SIZE(width, rows, bits, pitch) \
    ((((width) * (bits)) >> BINK_BLOCK_SHIFT) + \
     ((BINK_BLOCK_ROWS(rows) * (pitch) * (bits)) >> BINK_BLOCK_SHIFT))
#define BINK_BUNDLE_ALIGN_SIZE(size) (((size) + BINK_WORD_ALIGN_MASK) & ~BINK_WORD_ALIGN_MASK)
#define BINK_BUNDLE_EMPTY_CUR(bundle) ((bundle)->data + EXP_WORD_BYTES)
#define BINK_MARK_WORK_BLOCK(work_row, work_col) ((work_row)[(work_col) >> BINK_CHROMA_SHIFT] = 1)
#define BINK_MOTION_SOURCE(old, pitch, mx, my) ((old) + (my) * (s32)(pitch) + (mx))
#define BINK_DCT_PATTERN_SCAN(pattern) (patterns + (pattern) * BINK_BLOCK_PIXELS)
#define BINK_FILL_WORD(value) \
    ((value) | ((value) << BINK_BYTE_BITS) | ((value) << (BINK_BYTE_BITS * 2)) | ((value) << (BINK_BYTE_BITS * 3)))
#define BINK_BLOCK_ROW_WORD(ptr, pitch, row, word) \
    (*(u32 PTR4*)((ptr) + (pitch) * (row) + (word) * BINK_PLANE_WORD_BYTES))
#define BINK_LINEAR_BLOCK_ROW_WORD(ptr, row, word) \
    (*(u32 PTR4*)((ptr) + (row) * BINK_BLOCK_SIDE + (word) * BINK_PLANE_WORD_BYTES))
#define BINK_HUFF4_RLE_LENGTH(value) \
    ((u8 PTR4*)&BINK_HUFF4_RLE_LENGTHS_PACKED)[(value) - HUFF4_RLE_LITERAL_COUNT]

enum BINKBLOCKTYPE
{
    BINK_BLOCK_SKIP,    /* Copy the previous-frame 8x8 block. */
    BINK_BLOCK_SCALED,  /* Decode a 16x16 block through the subblock bundle. */
    BINK_BLOCK_MOTION,  /* Copy an 8x8 block from the previous frame with motion offsets. */
    BINK_BLOCK_RUN,     /* Fill in scan-order color runs. */
    BINK_BLOCK_RESIDUE, /* Motion block plus residue bitplane coefficients. */
    BINK_BLOCK_INTRA,   /* Intra DCT block. */
    BINK_BLOCK_FILL,    /* Solid color block. */
    BINK_BLOCK_INTER,   /* Motion-compensated inter DCT block. */
    BINK_BLOCK_PATTERN, /* Two-color pattern block. */
    BINK_BLOCK_RAW      /* Uncoded 8x8 color block. */
};

const double BINK_HUFF4_DECODE0_ALIGN = 0.0;
const double BINK_HUFF4_DECODE_TABLES_ALIGN = 0.0;
static const u8 huff4decode00[HUFF4_DECODE_1BYTE_SIZE] = "@ABCDEFGHIJKLMNO";
static const u8 huff4decode01[HUFF4_DECODE_2BYTE_SIZE] =
    "\20A\20R\20S\20T\20U\20V\20W\20X\20A\20Y\20Z\20[\20\\\20]\20^\20_";
static const u8 huff4decode02[HUFF4_DECODE_2BYTE_SIZE] = " B!X T!\\ C!Z V!^ B!Y U!] C![ W!_";
static const u8 huff4decode03[HUFF4_DECODE_2BYTE_SIZE] = " C1X E2\\ D1Z V2^ C1Y E2] D1[ W2_";
static const u8 huff4decode04[HUFF4_DECODE_2BYTE_SIZE] = "0D2X1F3\\0E2Z1G3^0D2Y1F3]0E2[1G3_";
static const u8 huff4decode05[HUFF4_DECODE_2BYTE_SIZE] = "0FBJ1HD\\0GCK1IE^0FBJ1HD]0GCK1IE_";
static const u8 huff4decode06[HUFF4_DECODE_2BYTE_SIZE] = " EAI GC\\ FBZ HD^ EAI GC] FB[ HD_";
static const u8 huff4decode07[HUFF4_DECODE_4BYTE_SIZE] =
    "1S2h1U2l1T2j1f2n1S2i1U2m1T2k1g2o";
static const u8 huff4decode08[HUFF4_DECODE_4BYTE_SIZE] =
    "\20!\20R\20!\20h\20!\20d\20!\20l\20!\20S\20!\20j\20!\20f\20!\20n\20!\20R\20!\20i\20!\20e\20!\20m\20!\20S\20!\20k\20!\20g\20!\20o";
static const u8 huff4decode09[HUFF4_DECODE_4BYTE_SIZE] =
    "1TBh1VCl1UBj1WCn1TBi1VCm1UBk1WCo";
static const u8 huff4decode10[HUFF4_DECODE_4BYTE_SIZE] =
    " 2!U C!Y 2!W D!l 2!V C!j 2!X D!n 2!U C!Y 2!W D!m 2!V C!k 2!X D!o";
static const u8 huff4decode11[HUFF4_DECODE_4BYTE_SIZE] =
    "\20A\20U\20C\20Y\20B\20W\20D\20l\20A\20V\20C\20j\20B\20X\20D\20n\20A\20U\20C\20Y\20B\20W\20D\20m\20A\20V\20C\20k\20B\20X\20D\20o";
static const u8 huff4decode12[HUFF4_DECODE_4BYTE_SIZE] =
    " \"!S \"!h \"!U \"!l \"!T \"!j \"!f \"!n \"!S \"!i \"!U \"!m \"!T \"!k \"!g \"!o";
static const u8 huff4decode13[HUFF4_DECODE_8BYTE_SIZE] =
    "132d132x132f132|132e132z132g132~132d132y132f132}132e132{132g132";
static const u8 huff4decode14[HUFF4_DECODE_8BYTE_SIZE] =
    "132T132x132e132|132T132z132v132~132T132y132e132}132T132{132w132";
static const u8 huff4decode15[HUFF4_DECODE_8BYTE_SIZE] =
    " 2!4 3!e 2!4 3!i 2!4 3!g 2!4 3!| 2!4 3!f 2!4 3!z 2!4 3!h 2!4 3!~ 2!4 3!e 2!4 3!i 2!4 3!g 2!4 3!} 2!4 3!f 2!4 3!{ 2!4 3!h 2!4 3!";
static const u8 PTR4* huff4decodes[HUFF4_SYMBOLS] = {
    huff4decode00, huff4decode01, huff4decode02, huff4decode03,
    huff4decode04, huff4decode05, huff4decode06, huff4decode07,
    huff4decode08, huff4decode09, huff4decode10, huff4decode11,
    huff4decode12, huff4decode13, huff4decode14, huff4decode15,
};
static const u8 BINK_HUFF4_BITS_TO_PEEK[HUFF4_SYMBOLS] = "\4\5\5\5\5\5\5\6\6\6\6\6\6\7\7\7";
static const u8 mask2[HUFF4_MASK_4BYTE_SIZE] =
    "\0\0\0\0\377\0\0\0\0\377\0\0\377\377\0\0\0\0\377\0\377\0\377\0\0\377\377\0\377\377\377\0\0\0\0\377\377\0\0\377\0\377\0\377\377\377\0\377\0\0\377\377\377\0\377\377\0\377\377\377\377\377\377\377";
static const u8 mask1[HUFF4_MASK_4BYTE_SIZE] =
    "\377\377\377\377\0\377\377\377\377\0\377\377\0\0\377\377\377\377\0\377\0\377\0\377\377\0\0\377\0\0\0\377\377\377\377\0\0\377\377\0\377\0\377\0\0\0\377\0\377\377\0\0\0\377\0\0\377\0\0\0\0\0\0\0";
static const u8 mask4[HUFF4_MASK_1BYTE_SIZE] = "\0\0\0\0\377\377\0\0\0\0\377\377\377\377\377\377";
static const u8 mask3[HUFF4_MASK_1BYTE_SIZE] = "\377\377\377\377\0\0\377\377\377\377\0\0\0\0\0\0";
/* Huff4 symbols 12..15 expand to repeated block-type runs of 4, 8, 12, and 32. */
const u32 BINK_HUFF4_RLE_LENGTHS_PACKED = 0x04080c20;

typedef struct READBUNDLE
{
    u8 PTR4* cur;
    u8 PTR4* end;
    u32 bit_size;      /* Bits per direct bundle element. */
    u32 initial_value;
    u8 values[HUFF4_SYMBOLS]; /* Huffman symbol to Bink symbol translation list. */
    u32 bits_to_peek;
    const u8 PTR4* decode;
    u32 count_bits;   /* Bits used to read the next decoded-element count. */
    u8 PTR4* data;
} READBUNDLE;

typedef struct HUFF8TABLE
{
    u8 values[HUFF8_TABLE_STATES][HUFF4_SYMBOLS];
    u32 bits_to_peek[HUFF8_TABLE_STATES];
    const u8 PTR4* decode[HUFF8_TABLE_STATES];
    /* Last decoded high nibble selects the next color high-nibble codebook. */
    u32 state;
} HUFF8TABLE;

typedef VARBITS EXPBITS;

static void ReadHuffTable(EXPBITS PTR4* bits, const u8 PTR4* PTR4* decode,
                          u32 PTR4* bits_to_peek, u8 PTR4* values);

static void OpenReadBundle(u8 PTR4* bits, READBUNDLE PTR4* rb, s32 width, u32 rows,
                           s32 shift, s32 pitch, s32 use_initial_value)
{
    u32 count_base;

    rb->bit_size = shift;
    rb->cur = 0;
    rb->end = 0;
    count_base = BINK_BUNDLE_COUNT_BASE(rows, pitch);
    rb->count_bits = BINK_BUNDLE_COUNT_BITS(width, count_base);
    if (use_initial_value) {
        rb->initial_value = BINK_BUNDLE_INITIAL_VALUE(shift);
    } else {
        rb->initial_value = 0;
    }
    rb->data = bits;
}

static inline u32 exp_get_bits(EXPBITS PTR4* bits, u32 count)
{
    u32 bitcount;
    EXPBITSTYPE bitbuf;
    EXPBITSTYPE word;
    u32 mask;
    u32 value;

    mask = GetBitsLen(count);
    bitcount = bits->bitlen;
    if (bitcount > count - 1) {
        bitbuf = bits->bits;
        bits->bitlen = bitcount - count;
        bits->bits = bitbuf >> count;
    } else {
        bitbuf = bits->bits;
        word = *bits->cur++;
        bits->bitlen = bitcount + EXP_BITS_PER_WORD - count;
        bits->bits = word >> (count - bitcount);
        bitbuf |= word << bitcount;
    }

    value = bitbuf & mask;
    return value;
}

static inline u32 exp_get_bit(EXPBITS PTR4* bits)
{
    EXPBITSTYPE bitbuf;

    if (bits->bitlen != 0) {
        bitbuf = bits->bits;
        bits->bitlen--;
        bits->bits = bitbuf >> 1;
    } else {
        bitbuf = *bits->cur++;
        bits->bitlen = EXP_LAST_BIT_INDEX;
        bits->bits = bitbuf >> 1;
    }

    return bitbuf & 1;
}

static void simpmergesort(EXPBITS PTR4* bits, u8 PTR4* out, u8 PTR4* left,
                          u8 PTR4* right, s32 count)
{
    u8 value;
    s32 left_count;

    left_count = count;
    for (;;) {
        if (exp_get_bit(bits) != 0) {
            value = *right++;
            count--;
        } else {
            value = *left++;
            left_count--;
        }

        *out++ = value;
        if (left_count == 0) {
            break;
        }
        if (count == 0) {
            break;
        }
    }

    if (left_count != 0) {
        while (left_count != 0) {
            *out++ = *left++;
            left_count--;
        }
    } else {
        while (count != 0) {
            *out++ = *right++;
            count--;
        }
    }
}

static inline u32 exp_read_huff4(EXPBITS PTR4* bits, u32 bits_to_peek,
                                 const u8 PTR4* decode, u8 PTR4* values)
{
    u32 bitcount;
    EXPBITSTYPE bitbuf;
    EXPBITSTYPE word;
    u32 mask;
    u8 code;
    u32 used;
    u32 value;

    bitcount = bits->bitlen;
    mask = GetBitsLen(bits_to_peek);
    if (bitcount >= bits_to_peek) {
        bitbuf = bits->bits & mask;
        code = decode[bitbuf];
        used = HUFF4_CODE_USED(code);
        value = HUFF4_CODE_VALUE(code, values);
        bits->bits >>= used;
        bits->bitlen = bitcount - used;
    } else {
        word = *bits->cur;
        bitbuf = (bits->bits | (word << bitcount)) & mask;
        code = decode[bitbuf];
        used = HUFF4_CODE_USED(code);
        value = HUFF4_CODE_VALUE(code, values);
        if (bitcount > used - 1) {
            bits->bits >>= used;
            bits->bitlen = bitcount - used;
        } else {
            bits->bits = word >> (used - bitcount);
            bits->bitlen = bitcount + EXP_BITS_PER_WORD - used;
            bits->cur++;
        }
    }

    return value;
}

static inline u32 exp_read_huff8(EXPBITS PTR4* bits, u32 state, HUFF8TABLE PTR4* table)
{
    return exp_read_huff4(bits, table->bits_to_peek[state], table->decode[state],
                          table->values[state]);
}

static void ReadHuffTable(EXPBITS PTR4* vb, const u8 PTR4* PTR4* decode,
                          u32 PTR4* bits_to_peek, u8 PTR4* values)
{
    u32 mode;
    u32 subtype;
    u32 count;
    u32 remaining;
    u32 mask;
    u32 j;
    u32 i;
    u8 order[HUFF4_SYMBOLS];
    u8 merge01[HUFF4_MERGE_PAIR_SIZE];
    u8 merge23[HUFF4_MERGE_PAIR_SIZE];
    u8 merge45[HUFF4_MERGE_PAIR_SIZE];
    u8 merge67[HUFF4_MERGE_PAIR_SIZE];
    u8 PTR4* out;

    out = values;

    /* Each table stores a 4-bit codebook index plus a 16-entry symbol remap. */
    mode = exp_get_bits(vb, HUFF4_USED_SHIFT);
    *decode = huff4decodes[mode];
    *bits_to_peek = (u8)BINK_HUFF4_BITS_TO_PEEK[mode];
    if (mode == 0) {
        for (j = 0; j < HUFF4_SYMBOLS; ++j) {
            out[j] = j;
        }
        return;
    }

    if (exp_get_bit(vb) == 0) {
        /* Compact symbol shuffling: merge adjacent pair, quarter, and half lists. */
        subtype = exp_get_bits(vb, HUFF4_SUBTYPE_BITS);
        if (subtype == 0) {
            i = 0;
            count = HUFF4_PAIR_COUNT;
            do {
                if (exp_get_bit(vb) != 0) {
                    out[1] = i;
                    out[0] = i + 1;
                } else {
                    out[0] = i;
                    out[1] = i + 1;
                }
                out += HUFF4_PAIR_SYMBOLS;
                i += HUFF4_PAIR_SYMBOLS;
                count--;
            } while (count != 0);
        } else {
            u32 left;
            u32 right;

            left = 0;
            right = 1;
            for (i = 0; i < HUFF4_PAIR_COUNT; ++i) {
                if (exp_get_bit(vb) != 0) {
                    order[left] = right;
                    order[right] = left;
                } else {
                    order[left] = left;
                    order[right] = right;
                }
                left += HUFF4_PAIR_SYMBOLS;
                right += HUFF4_PAIR_SYMBOLS;
            }

            if (subtype == 1) {
                simpmergesort(vb, values, order, order + HUFF4_PAIR_SYMBOLS, HUFF4_PAIR_SYMBOLS);
                simpmergesort(vb, values + HUFF4_QUARTER_SYMBOLS,
                              order + HUFF4_QUARTER_SYMBOLS,
                              order + HUFF4_QUARTER_SYMBOLS + HUFF4_PAIR_SYMBOLS,
                              HUFF4_PAIR_SYMBOLS);
                simpmergesort(vb, values + HUFF4_HALF_SYMBOLS,
                              order + HUFF4_HALF_SYMBOLS,
                              order + HUFF4_HALF_SYMBOLS + HUFF4_PAIR_SYMBOLS,
                              HUFF4_PAIR_SYMBOLS);
                simpmergesort(vb, values + HUFF4_LAST_QUARTER_SYMBOL,
                              order + HUFF4_LAST_QUARTER_SYMBOL,
                              order + HUFF4_LAST_PAIR_SYMBOL, HUFF4_PAIR_SYMBOLS);
            } else {
                simpmergesort(vb, merge01, order, order + HUFF4_PAIR_SYMBOLS,
                              HUFF4_PAIR_SYMBOLS);
                simpmergesort(vb, merge23, order + HUFF4_QUARTER_SYMBOLS,
                              order + HUFF4_QUARTER_SYMBOLS + HUFF4_PAIR_SYMBOLS,
                              HUFF4_PAIR_SYMBOLS);
                simpmergesort(vb, merge45, order + HUFF4_HALF_SYMBOLS,
                              order + HUFF4_HALF_SYMBOLS + HUFF4_PAIR_SYMBOLS,
                              HUFF4_PAIR_SYMBOLS);
                simpmergesort(vb, merge67, order + HUFF4_LAST_QUARTER_SYMBOL,
                              order + HUFF4_LAST_PAIR_SYMBOL, HUFF4_PAIR_SYMBOLS);
                if (subtype == 2) {
                    simpmergesort(vb, values, merge01, merge23, HUFF4_QUARTER_SYMBOLS);
                    simpmergesort(vb, values + HUFF4_HALF_SYMBOLS, merge45, merge67,
                                  HUFF4_QUARTER_SYMBOLS);
                } else {
                    simpmergesort(vb, order, merge01, merge23, HUFF4_QUARTER_SYMBOLS);
                    simpmergesort(vb, order + HUFF4_HALF_SYMBOLS, merge45, merge67,
                                  HUFF4_QUARTER_SYMBOLS);
                    simpmergesort(vb, values, order, order + HUFF4_HALF_SYMBOLS,
                                  HUFF4_HALF_SYMBOLS);
                }
            }
        }
    } else {
        subtype = exp_get_bits(vb, HUFF4_EXPLICIT_SUBTYPE_BITS);
        remaining = HUFF4_ALL_SYMBOLS_MASK;
        for (count = 0; count <= subtype; ++count) {
            mode = exp_get_bits(vb, HUFF4_USED_SHIFT);
            values[count] = mode;
            remaining &= ~(1 << mode);
        }

        i = 0;
        mask = remaining;
        do {
            if ((mask & 1) != 0) {
                subtype++;
                values[subtype] = i;
            }
            i++;
            mask >>= 1;
        } while (mask != 0);
    }
}

static void StartReadHuff4Bundle(READBUNDLE PTR4* rb, EXPBITS PTR4* bits)
{
    ReadHuffTable(bits, &rb->decode, &rb->bits_to_peek, rb->values);
}

static void StartReadHuff8Bundle(READBUNDLE PTR4* rb, EXPBITS PTR4* bits,
                                 HUFF8TABLE PTR4* huff8_table)
{
    u32 PTR4* codes;
    const u8 PTR4* PTR4* huff_table;
    u8 PTR4* cur;
    u8 PTR4* end;

    cur = huff8_table->values[0];
    end = huff8_table->values[HUFF8_TABLE_STATES - 1];
    codes = huff8_table->bits_to_peek;
    huff_table = huff8_table->decode;
    do {
        ReadHuffTable(bits, huff_table, codes, cur);
        cur += HUFF4_SYMBOLS;
        ++codes;
        ++huff_table;
    } while (cur <= end);
    ReadHuffTable(bits, &rb->decode, &rb->bits_to_peek, rb->values);
    huff8_table->state = 0;
}

static void CheckReadRLEHuff4Bundle(READBUNDLE PTR4* bundle, EXPBITS PTR4* bits)
{
    u32 count;
    u8 PTR4* dest;
    u32 value;
    u32 last;
    u8 run;
    u8 PTR4* values;
    const u8 PTR4* decode;
    u32 peek;

    if (bundle->cur != bundle->end) {
        return;
    }

    count = exp_get_bits(bits, bundle->count_bits);
    if (count == 0) {
        /* Empty bundles point cur past data so callers see no decoded elements. */
        bundle->end = bundle->data;
        bundle->cur = BINK_BUNDLE_EMPTY_CUR(bundle);
        return;
    }

    bundle->cur = bundle->data;
    bundle->end = bundle->data + count;
    if (exp_get_bit(bits) == 0) {
        /* Literal Huff4 values above 11 repeat the previous decoded symbol. */
        dest = bundle->data;
        last = 0;
        values = bundle->values;
        decode = bundle->decode;
        peek = (u8)bundle->bits_to_peek;
        while (count != 0) {
            value = exp_read_huff4(bits, peek, decode, values);
            if (value > HUFF4_RLE_LITERAL_COUNT - 1) {
                u32 fill;

                /* Packed word stores four copies of the last byte for the run fill. */
                fill = last | (last << BINK_BYTE_BITS);
                run = BINK_HUFF4_RLE_LENGTH(value);
                count -= run;
                fill |= fill << BINK_BUNDLE_MIN_WORD_BITS;
                do {
                    *(u32 PTR4*)dest = fill;
                    dest += EXP_WORD_BYTES;
                    run -= EXP_WORD_BYTES;
                } while (run != 0);
            } else {
                *dest++ = (u8)value;
                count--;
                last = value;
            }
        }
    } else {
        value = exp_get_bits(bits, HUFF4_USED_SHIFT);
        memset(bundle->data, value, count);
    }
}

static void CheckReadHuff8Bundle(READBUNDLE PTR4* bundle, EXPBITS PTR4* bits,
                                 HUFF8TABLE PTR4* huff8_table)
{
    u32 count;
    u8 PTR4* dest;
    u8 PTR4* values;
    const u8 PTR4* decode;
    u32 peek;
    u32 state;
    u32 high;
    u32 low;
    u32 value;
    s32 remaining;
    s32 prev_remaining;

    if (bundle->cur != bundle->end) {
        return;
    }

    count = exp_get_bits(bits, bundle->count_bits);
    if (count == 0) {
        /* The empty sentinel matches the other bundle readers. */
        bundle->end = bundle->data;
        bundle->cur = BINK_BUNDLE_EMPTY_CUR(bundle);
        return;
    }

    dest = bundle->data;
    peek = bundle->bits_to_peek;
    bundle->cur = dest;
    bundle->end = dest + count;
    decode = bundle->decode;
    state = huff8_table->state;
    if (exp_get_bit(bits) != 0) {
        /* Negative remaining marks the old-format repeat packet variant. */
        count = -(count + BUNDLE_REPEAT_EXTRA);
    }
    values = bundle->values;
    remaining = (s32)count;
    do {
        prev_remaining = remaining;
        high = exp_read_huff8(bits, state, huff8_table);
        state = high;
        low = exp_read_huff4(bits, peek, decode, values);
        value = ((high & HUFF4_SYMBOL_MASK) << HUFF4_USED_SHIFT) | low;
        if ((value & BINK_SIGNED_BYTE_BIAS) == 0) {
            value |= BINK_SIGNED_BYTE_BIAS;
        } else {
            value = BINK_SIGNED_BYTE_BIAS - (value & BINK_SIGNED_BYTE_MASK);
        }
        *dest++ = (u8)value;
        remaining = prev_remaining - 1;
    } while (remaining > 0);

    if (remaining < -BUNDLE_REPEAT_THRESHOLD) {
        /* Repeat packets back-fill the whole bundle with the first decoded byte. */
        memset(bundle->data, *bundle->data, -(prev_remaining + BUNDLE_REPEAT_EXTRA));
    }
    huff8_table->state = state;
}

static void NewCheckReadHuff8Bundle(READBUNDLE PTR4* bundle, EXPBITS PTR4* bits,
                                    HUFF8TABLE PTR4* huff8_table)
{
    u32 count;
    u8 PTR4* dest;
    u8 PTR4* values;
    const u8 PTR4* decode;
    u32 peek;
    u32 state;
    u32 low;
    s32 remaining;
    s32 prev_remaining;

    if (bundle->cur != bundle->end) {
        return;
    }

    count = exp_get_bits(bits, bundle->count_bits);
    if (count == 0) {
        bundle->end = bundle->data;
        bundle->cur = BINK_BUNDLE_EMPTY_CUR(bundle);
        return;
    }

    dest = bundle->data;
    peek = bundle->bits_to_peek;
    bundle->cur = dest;
    bundle->end = dest + count;
    decode = bundle->decode;
    state = huff8_table->state;
    if (exp_get_bit(bits) != 0) {
        /* New-format Huff8 repeat packets keep the byte unsigned. */
        count = -count - BUNDLE_REPEAT_EXTRA;
    }
    values = bundle->values;
    remaining = (s32)count;
    do {
        prev_remaining = remaining;
        state = exp_read_huff8(bits, state, huff8_table);
        low = exp_read_huff4(bits, peek, decode, values);
        *dest++ = (u8)(low | (state << HUFF4_USED_SHIFT));
        remaining = prev_remaining - 1;
    } while (remaining > 0);

    if (remaining < -BUNDLE_REPEAT_THRESHOLD) {
        /* Match old-format repeat handling after the one-byte payload is decoded. */
        memset(bundle->data, *bundle->data, -(prev_remaining + BUNDLE_REPEAT_EXTRA));
    }
    huff8_table->state = state;
}

static void CheckReadHuff4Bundle(READBUNDLE PTR4* bundle, EXPBITS PTR4* bits)
{
    u32 count;
    u8 PTR4* dest;
    u8 PTR4* values;
    const u8 PTR4* decode;
    u32 peek;
    u32 value;

    if (bundle->cur != bundle->end) {
        return;
    }

    count = exp_get_bits(bits, bundle->count_bits);
    if (count == 0) {
        bundle->end = bundle->data;
        bundle->cur = BINK_BUNDLE_EMPTY_CUR(bundle);
        return;
    }

    bundle->cur = bundle->data;
    bundle->end = bundle->data + count;
    if (exp_get_bit(bits) == 0) {
        /* Direct Huff4 bundles decode one nibble-sized symbol per byte. */
        dest = bundle->data;
        values = bundle->values;
        decode = bundle->decode;
        peek = bundle->bits_to_peek;
        while (count != 0) {
            *dest++ = (u8)exp_read_huff4(bits, peek, decode, values);
            count--;
        }
    } else {
        value = exp_get_bits(bits, HUFF4_USED_SHIFT);
        memset(bundle->data, value, count);
    }
}

static void CheckReadHuff4PairBundle(READBUNDLE PTR4* bundle, EXPBITS PTR4* bits)
{
    u32 count;
    u8 PTR4* dest;
    u8 PTR4* values;
    const u8 PTR4* decode;
    u32 peek;
    u32 first;
    u32 second;

    if (bundle->cur != bundle->end) {
        return;
    }

    count = exp_get_bits(bits, bundle->count_bits);
    if (count == 0) {
        bundle->end = bundle->data;
        bundle->cur = BINK_BUNDLE_EMPTY_CUR(bundle);
        return;
    }

    dest = bundle->data;
    bundle->cur = dest;
    bundle->end = dest + count;
    values = bundle->values;
    decode = bundle->decode;
    peek = bundle->bits_to_peek;
    do {
        /* Pair bundles pack two Huff4 symbols into each output byte. */
        count--;
        first = exp_read_huff4(bits, peek, decode, values);
        second = exp_read_huff4(bits, peek, decode, values);
        *dest++ = (u8)(first | (second << HUFF4_USED_SHIFT));
    } while (count != 0);
}

static void CheckReadHuff4SBundle(READBUNDLE PTR4* bundle, EXPBITS PTR4* bits)
{
    u32 count;
    s8 PTR4* dest;
    u8 PTR4* values;
    const u8 PTR4* decode;
    u32 peek;
    s32 value;

    if (bundle->cur != bundle->end) {
        return;
    }

    count = exp_get_bits(bits, bundle->count_bits);
    if (count == 0) {
        bundle->end = bundle->data;
        bundle->cur = BINK_BUNDLE_EMPTY_CUR(bundle);
        return;
    }

    bundle->cur = bundle->data;
    bundle->end = bundle->data + count;
    if (exp_get_bit(bits) == 0) {
        /* Signed Huff4 bundles store a sign bit only for nonzero symbols. */
        dest = bundle->data;
        values = bundle->values;
        decode = bundle->decode;
        peek = bundle->bits_to_peek;
        count--;
        do {
            value = (s32)exp_read_huff4(bits, peek, decode, values);
            if (value != 0 && exp_get_bit(bits) != 0) {
                value = -value;
            }
            *dest++ = (s8)value;
        } while (count-- != 0);
    } else {
        value = (s32)exp_get_bits(bits, HUFF4_USED_SHIFT);
        if (value != 0 && exp_get_bit(bits) != 0) {
            value = -value;
        }
        memset(bundle->data, value, count);
    }
}

static void CheckReadDelta16Bundle(READBUNDLE PTR4* bundle, EXPBITS PTR4* bits)
{
    u32 count;
    u32 remaining;
    u32 group_count;
    u32 bit_count;
    u32 current;
    u32 value;
    s32 delta;
    s16 PTR4* dest;

    if (bundle->cur != bundle->end) {
        return;
    }

    count = exp_get_bits(bits, bundle->count_bits);
    if (count == 0) {
        bundle->end = bundle->data;
        bundle->cur = BINK_BUNDLE_EMPTY_CUR(bundle);
        return;
    }

    dest = (s16 PTR4*)bundle->data;
    if (bundle->initial_value == 0) {
        current = exp_get_bits(bits, bundle->bit_size) & EXP_U16_MASK;
    } else {
        current = exp_get_bits(bits, bundle->bit_size - 1) & EXP_U16_MASK;
        if (current != 0 && exp_get_bit(bits) != 0) {
            current = -current & EXP_U16_MASK;
        }
    }

    *dest++ = (s16)current;
    remaining = count - 1;
    bundle->cur = bundle->data;
    bundle->end = bundle->data + count * sizeof(*dest);
    while (remaining != 0) {
        group_count = remaining;
        if (group_count > BINK_DELTA16_GROUP_MAX) {
            group_count = BINK_DELTA16_GROUP_MAX;
        }

        bit_count = exp_get_bits(bits, HUFF4_USED_SHIFT);
        if (bit_count == 0) {
            radmemset16(dest, (u16)current, group_count * sizeof(*dest));
            dest += group_count;
            remaining -= group_count;
        } else {
            remaining -= group_count;
            while (group_count != 0) {
                group_count--;
                value = exp_get_bits(bits, bit_count) & EXP_U16_MASK;
                delta = (s32)(s16)value;
                if (delta != 0 && exp_get_bit(bits) != 0) {
                    delta = (s32)(s16)-value;
                }
                current = (current + delta) & EXP_U16_MASK;
                *dest++ = (s16)current;
            }
        }
    }
}

static inline void expand_run_block(u8 PTR4* dest,
                                    u32 pitch,
                                    READBUNDLE PTR4* colors,
                                    READBUNDLE PTR4* runs,
                                    EXPBITS PTR4* bits)
{
    const u8 PTR4* scan;
    u32 filled;

    scan = BINK_DCT_PATTERN_SCAN(exp_get_bits(bits, BINK_DCT_PATTERN_BITS));
    filled = 0;
    do {
        u32 count;

        count = *runs->cur++ + 1;
        filled += count;
        if (exp_get_bit(bits) != 0) {
            u8 value;

            value = *colors->cur++;
            do {
                u32 offset;

                offset = *scan++;
                dest[BINK_BLOCK_PATTERN_OFFSET(offset, pitch)] = value;
            } while (--count != 0);
        } else {
            do {
                u32 offset;

                offset = *scan++;
                dest[BINK_BLOCK_PATTERN_OFFSET(offset, pitch)] = *colors->cur++;
            } while (--count != 0);
        }
    } while (filled < BINK_RUN_BLOCK_LAST_PIXEL);

    if (filled == BINK_RUN_BLOCK_LAST_PIXEL) {
        u32 offset;

        offset = *scan++;
        dest[BINK_BLOCK_PATTERN_OFFSET(offset, pitch)] = *colors->cur++;
    }
}

static inline void expand_pattern_block(u8 PTR4* dest,
                                        u32 pitch,
                                        READBUNDLE PTR4* colors,
                                        READBUNDLE PTR4* patterns_bundle)
{
    u8 color0;
    u8 color1;
    u32 i;

    color0 = colors->cur[0];
    color1 = colors->cur[1];
    colors->cur += 2;
    for (i = 0; i < BINK_BLOCK_SIDE; ++i) {
        u32 bits;
        u32 j;

        bits = *patterns_bundle->cur++;
        for (j = 0; j < BINK_BLOCK_SIDE; ++j) {
            dest[i * pitch + j] = (bits & 1) != 0 ? color1 : color0;
            bits >>= 1;
        }
    }
}

static u32 getbunsize(s32 width, u32 rows, u32 bits, s32 pitch)
{
    if (bits < (BINK_BUNDLE_MIN_BYTE_BITS + 1)) {
        bits = BINK_BUNDLE_MIN_BYTE_BITS;
    } else if (bits < BINK_BUNDLE_MIN_WORD_BITS) {
        bits = BINK_BUNDLE_MIN_WORD_BITS;
    }
    return BINK_BUNDLE_ALIGN_SIZE(BINK_BUNDLE_STORAGE_SIZE(width, rows, bits, pitch));
}

void ExpandBundleSizes(u32 PTR4* sizes, u32 rows)
{
    /* Order matches the Bink value sources: block/subblock types, colors, patterns,
       motion X/Y, intra/inter DC, then run lengths. */
    sizes[BINK_BUNDLE_BLOCK_TYPES] = getbunsize(BINK_BUNDLE_WIDTH, rows, BINK_BLOCK_TYPE_BITS, 1);
    sizes[BINK_BUNDLE_SUBBLOCK_TYPES] =
        getbunsize(BINK_BUNDLE_WIDTH, rows >> BINK_CHROMA_SHIFT, BINK_BLOCK_TYPE_BITS, 1);
    sizes[BINK_BUNDLE_COLORS] =
        getbunsize(BINK_BUNDLE_WIDTH, rows, BINK_COLOR_BITS, BINK_COLOR_BLOCK_BYTES);
    sizes[BINK_BUNDLE_PATTERNS] =
        getbunsize(BINK_BUNDLE_WIDTH, rows, BINK_PATTERN_BITS, BINK_PATTERN_BLOCK_BYTES);
    sizes[BINK_BUNDLE_X_OFFSETS] = getbunsize(BINK_BUNDLE_WIDTH, rows, BINK_MOTION_BITS, 1);
    sizes[BINK_BUNDLE_Y_OFFSETS] = getbunsize(BINK_BUNDLE_WIDTH, rows, BINK_MOTION_BITS, 1);
    sizes[BINK_BUNDLE_INTRA_DC] = getbunsize(BINK_BUNDLE_WIDTH, rows, BINK_DC_START_BITS, 1);
    sizes[BINK_BUNDLE_INTER_DC] = getbunsize(BINK_BUNDLE_WIDTH, rows, BINK_DC_START_BITS, 1);
    sizes[BINK_BUNDLE_RUNS] =
        getbunsize(BINK_BUNDLE_WIDTH, rows, BINK_RUN_BITS, BINK_RUN_BLOCK_BYTES);
}

static u32 PTR4* ExpandPlane(u8 PTR4* out,
                        u8 PTR4* prev,
                        u32 width,
                        u32 height,
                        u32 pitch,
                        u32 PTR4* bundles,
                        u32 key_frame,
                        u8 PTR4* work,
                        u32 plane,
                        BUNDLEPOINTERS PTR4* table,
                        u32 flags)
{
    READBUNDLE block_types;
    READBUNDLE subblock_types;
    READBUNDLE colors;
    READBUNDLE patterns_bundle;
    READBUNDLE xoff;
    READBUNDLE yoff;
    READBUNDLE intra_dc;
    READBUNDLE inter_dc;
    READBUNDLE runs;
    HUFF8TABLE huff8_table;
    s16 dct_block[BINK_BLOCK_PIXELS];
    u8 motion_block[BINK_BLOCK_PIXELS];
    EXPBITS bitstate;
    void (*read_huff8)(READBUNDLE PTR4*, EXPBITS PTR4*, HUFF8TABLE PTR4*);
    u32 row;
    u32 col;
    u32 work_col;
    u32 work_pitch;
    enum BINKBLOCKTYPE block_type;
    u32 quant;
    u8 PTR4* dest;
    u8 PTR4* old;
    u8 PTR4* work_row;

    (void)key_frame;

    read_huff8 =
        (flags & BINKOLDFRAMEFORMAT) != 0 ? CheckReadHuff8Bundle : NewCheckReadHuff8Bundle;
    VarBitsOpen(bitstate, bundles);

    OpenReadBundle(table->typeptr, &block_types,
                   BINK_BUNDLE_WIDTH, width, BINK_BLOCK_TYPE_BITS, 1, 0);
    OpenReadBundle(table->type16ptr, &subblock_types,
                   BINK_BUNDLE_WIDTH, width >> BINK_CHROMA_SHIFT, BINK_BLOCK_TYPE_BITS, 1, 0);
    OpenReadBundle(table->colorptr, &colors, BINK_BUNDLE_WIDTH, width,
                   BINK_COLOR_BITS, BINK_COLOR_BLOCK_BYTES, 0);
    OpenReadBundle(table->bits2ptr, &patterns_bundle,
                   BINK_BUNDLE_WIDTH, width, BINK_PATTERN_BITS, BINK_PATTERN_BLOCK_BYTES, 0);
    OpenReadBundle(table->motionXptr, &xoff, BINK_BUNDLE_WIDTH, width,
                   BINK_MOTION_BITS, 1, 1);
    OpenReadBundle(table->motionYptr, &yoff, BINK_BUNDLE_WIDTH, width,
                   BINK_MOTION_BITS, 1, 1);
    OpenReadBundle(table->dctptr, &intra_dc, BINK_BUNDLE_WIDTH,
                   width, BINK_DC_START_BITS, 1, 0);
    OpenReadBundle(table->mdctptr, &inter_dc, BINK_BUNDLE_WIDTH,
                   width, BINK_DC_START_BITS, 1, 1);
    OpenReadBundle(table->patptr, &runs, BINK_BUNDLE_WIDTH, width,
                   BINK_RUN_BITS, BINK_RUN_BLOCK_BYTES, 0);

    StartReadHuff4Bundle(&block_types, &bitstate);
    StartReadHuff4Bundle(&subblock_types, &bitstate);
    StartReadHuff8Bundle(&colors, &bitstate, &huff8_table);
    StartReadHuff4Bundle(&patterns_bundle, &bitstate);
    StartReadHuff4Bundle(&xoff, &bitstate);
    StartReadHuff4Bundle(&yoff, &bitstate);
    StartReadHuff4Bundle(&runs, &bitstate);

    dest = out;
    old = prev;
    work_row = work;
    work_pitch = pitch / (BINK_WORK_BLOCK_SPAN / plane);
    row = 0;
    if (height != 0) {
    do {
        CheckReadRLEHuff4Bundle(&block_types, &bitstate);
        CheckReadRLEHuff4Bundle(&subblock_types, &bitstate);
        read_huff8(&colors, &bitstate, &huff8_table);
        CheckReadHuff4PairBundle(&patterns_bundle, &bitstate);
        CheckReadHuff4SBundle(&xoff, &bitstate);
        CheckReadHuff4SBundle(&yoff, &bitstate);
        CheckReadDelta16Bundle(&intra_dc, &bitstate);
        CheckReadDelta16Bundle(&inter_dc, &bitstate);
        CheckReadHuff4Bundle(&runs, &bitstate);

        col = 0;
        work_col = 0;
        while (col < width) {
            block_type = *block_types.cur;
            block_types.cur++;

            if (BINK_BLOCK_ODD_ROW(row) && block_type == BINK_BLOCK_SCALED) {
                col += BINK_BLOCK_SIDE;
                dest += BINK_BLOCK_SIDE;
                old += BINK_BLOCK_SIDE;
                work_col += plane;
                continue;
            }

            switch (block_type) {
            case BINK_BLOCK_SKIP: {
                u32 i;
                for (i = 0; i < BINK_BLOCK_SIDE; ++i) {
                    BINK_BLOCK_ROW_WORD(dest, pitch, i, 0) = BINK_BLOCK_ROW_WORD(old, pitch, i, 0);
                    BINK_BLOCK_ROW_WORD(dest, pitch, i, 1) = BINK_BLOCK_ROW_WORD(old, pitch, i, 1);
                }
                break;
            }
            case BINK_BLOCK_MOTION: {
                s32 mx = *(s8 PTR4*)xoff.cur;
                s32 my = *(s8 PTR4*)yoff.cur;
                u8 PTR4* motion;
                u32 i;

                BINK_MARK_WORK_BLOCK(work_row, work_col);
                xoff.cur++;
                yoff.cur++;
                motion = BINK_MOTION_SOURCE(old, pitch, mx, my);
                for (i = 0; i < BINK_BLOCK_SIDE; ++i) {
                    BINK_BLOCK_ROW_WORD(dest, pitch, i, 0) = BINK_BLOCK_ROW_WORD(motion, pitch, i, 0);
                    BINK_BLOCK_ROW_WORD(dest, pitch, i, 1) = BINK_BLOCK_ROW_WORD(motion, pitch, i, 1);
                }
                break;
            }
            case BINK_BLOCK_RESIDUE: {
                s32 mx = *(s8 PTR4*)xoff.cur;
                s32 my = *(s8 PTR4*)yoff.cur;
                u8 PTR4* motion;
                u32 i;

                BINK_MARK_WORK_BLOCK(work_row, work_col);
                xoff.cur++;
                yoff.cur++;
                motion = BINK_MOTION_SOURCE(old, pitch, mx, my);
                for (i = 0; i < BINK_BLOCK_SIDE; ++i) {
                    BINK_LINEAR_BLOCK_ROW_WORD(motion_block, i, 0) =
                        BINK_BLOCK_ROW_WORD(motion, pitch, i, 0);
                    BINK_LINEAR_BLOCK_ROW_WORD(motion_block, i, 1) =
                        BINK_BLOCK_ROW_WORD(motion, pitch, i, 1);
                }
                ReadBPLossyWithMotion((char PTR4*)dest, (s32)pitch, (BPBITSTREAM PTR4*)&bitstate,
                                      exp_get_bits(&bitstate, BINK_RESIDUE_LIMIT_BITS),
                                      (char PTR4*)motion_block);
                break;
            }
            case BINK_BLOCK_INTRA:
                BINK_MARK_WORK_BLOCK(work_row, work_col);
                dct_block[0] = *(s16 PTR4*)intra_dc.cur;
                intra_dc.cur += BINK_DC_BYTES;
                ReadBPLossless(dct_block, (BPBITSTREAM PTR4*)&bitstate);
                quant = exp_get_bits(&bitstate, BINK_DCT_QUANT_BITS);
                FastIDCT8x8(dest, pitch, dct_block, quant);
                break;
            case BINK_BLOCK_INTER: {
                s32 mx = *(s8 PTR4*)xoff.cur;
                s32 my = *(s8 PTR4*)yoff.cur;
                u8 PTR4* motion;
                u32 i;

                BINK_MARK_WORK_BLOCK(work_row, work_col);
                dct_block[0] = *(s16 PTR4*)inter_dc.cur;
                inter_dc.cur += BINK_DC_BYTES;
                xoff.cur++;
                yoff.cur++;
                motion = BINK_MOTION_SOURCE(old, pitch, mx, my);
                for (i = 0; i < BINK_BLOCK_SIDE; ++i) {
                    BINK_LINEAR_BLOCK_ROW_WORD(motion_block, i, 0) =
                        BINK_BLOCK_ROW_WORD(motion, pitch, i, 0);
                    BINK_LINEAR_BLOCK_ROW_WORD(motion_block, i, 1) =
                        BINK_BLOCK_ROW_WORD(motion, pitch, i, 1);
                }
                ReadBPLossless(dct_block, (BPBITSTREAM PTR4*)&bitstate);
                quant = exp_get_bits(&bitstate, BINK_DCT_QUANT_BITS);
                FastmIDCT8x8WithMotion(dest, (s32)pitch, dct_block, quant, motion_block);
                break;
            }
            case BINK_BLOCK_FILL: {
                u8 value = *colors.cur;
                u32 fill = BINK_FILL_WORD(value);
                u32 i;

                BINK_MARK_WORK_BLOCK(work_row, work_col);
                colors.cur++;
                for (i = 0; i < BINK_BLOCK_SIDE; ++i) {
                    BINK_BLOCK_ROW_WORD(dest, pitch, i, 0) = fill;
                    BINK_BLOCK_ROW_WORD(dest, pitch, i, 1) = fill;
                }
                break;
            }
            case BINK_BLOCK_PATTERN:
                BINK_MARK_WORK_BLOCK(work_row, work_col);
                expand_pattern_block(dest, pitch, &colors, &patterns_bundle);
                break;
            case BINK_BLOCK_RAW: {
                u32 i;

                BINK_MARK_WORK_BLOCK(work_row, work_col);
                for (i = 0; i < BINK_BLOCK_SIDE; ++i) {
                    BINK_BLOCK_ROW_WORD(dest, pitch, i, 0) =
                        BINK_LINEAR_BLOCK_ROW_WORD(colors.cur, i, 0);
                    BINK_BLOCK_ROW_WORD(dest, pitch, i, 1) =
                        BINK_LINEAR_BLOCK_ROW_WORD(colors.cur, i, 1);
                }
                colors.cur += BINK_COLOR_BLOCK_BYTES;
                break;
            }
            case BINK_BLOCK_RUN:
                BINK_MARK_WORK_BLOCK(work_row, work_col);
                expand_run_block(dest, pitch, &colors, &runs, &bitstate);
                break;
            case BINK_BLOCK_SCALED:
                block_type = *subblock_types.cur;
                subblock_types.cur++;
                if (block_type == BINK_BLOCK_FILL) {
                    colors.cur++;
                } else if (block_type == BINK_BLOCK_PATTERN) {
                    colors.cur += 2;
                    patterns_bundle.cur += BINK_PATTERN_BLOCK_BYTES;
                } else if (block_type == BINK_BLOCK_RAW) {
                    colors.cur += BINK_COLOR_BLOCK_BYTES;
                } else if (block_type == BINK_BLOCK_INTRA) {
                    dct_block[0] = *(s16 PTR4*)intra_dc.cur;
                    intra_dc.cur += BINK_DC_BYTES;
                    ReadBPLossless(dct_block, (BPBITSTREAM PTR4*)&bitstate);
                    quant = exp_get_bits(&bitstate, BINK_DCT_QUANT_BITS);
                    FastIDCT8x8d(dest, pitch, dct_block, quant);
                }
                BINK_MARK_WORK_BLOCK(work_row, work_col);
                col += BINK_BLOCK_SIDE;
                dest += BINK_BLOCK_SIDE;
                old += BINK_BLOCK_SIDE;
                work_col += plane;
                BINK_MARK_WORK_BLOCK(work_row, work_col);
                break;
            }

            col += BINK_BLOCK_SIDE;
            dest += BINK_BLOCK_SIDE;
            old += BINK_BLOCK_SIDE;
            work_col += plane;
        }

        if (plane == BINK_LUMA_PLANE_SCALE) {
            if (BINK_BLOCK_ODD_ROW(row)) {
                work_row += work_pitch;
            }
        } else {
            work_row += work_pitch;
        }
        row += BINK_BLOCK_SIDE;
        dest = out + row * pitch;
        old = prev + row * pitch;
    } while (row < height);
    }

    if (bitstate.bitlen != 0) {
        bitstate.cur++;
    }
    return bitstate.cur;
}

void ExpandBink(u8 PTR4* yout,
                u8 PTR4* yprev,
                u8 PTR4* aout,
                u8 PTR4* aprev,
                u8 PTR4* work,
                u32 width,
                u32 height,
                u32 pitch,
                u32 uvpitch,
                u32 PTR4* bundles,
                u32 key_frame,
                BUNDLEPOINTERS PTR4* table,
                u32 yflags,
                u32 aflags)
{
    u32 PTR4* next;
    u32 uv_width;
    u32 uv_height;
    u32 uv_size;

    if ((aflags & BINKALPHA) != 0) {
        if ((yflags & BINKALPHA) != 0) {
            ExpandPlane(aout, aprev, BINK_BLOCK_ROUND(width), BINK_BLOCK_ROUND(height),
                        pitch, bundles + 1, key_frame, work, BINK_LUMA_PLANE_SCALE, table,
                        yflags);
        }
        bundles = (u32 PTR4*)((u8 PTR4*)bundles + *bundles);
    }

    if ((yflags & BINKOLDFRAMEFORMAT) == 0) {
        bundles++;
    }

    next = ExpandPlane(yout, yprev, BINK_BLOCK_ROUND(width), BINK_BLOCK_ROUND(height),
                       pitch, bundles, key_frame, work, BINK_LUMA_PLANE_SCALE, table, yflags);
    if ((yflags & BINKOLDFRAMEFORMAT) == 0) {
        next = (u32 PTR4*)((u8 PTR4*)bundles + bundles[-1] - EXP_WORD_BYTES);
    }

    if ((yflags & BINKGRAYSCALE) == 0) {
        yout = yout + pitch * uvpitch;
        yprev = yprev + pitch * uvpitch;
        uvpitch >>= BINK_CHROMA_SHIFT;
        uv_width = BINK_BLOCK_ROUND(BINK_CHROMA_ROUND(width));
        uv_height = BINK_BLOCK_ROUND(BINK_CHROMA_ROUND(height));
        pitch >>= BINK_CHROMA_SHIFT;
        next = ExpandPlane(yout, yprev, uv_width, uv_height, pitch, next, key_frame, work,
                           BINK_CHROMA_PLANE_SCALE, table, yflags);
        uv_size = pitch * uvpitch;
        ExpandPlane(yout + uv_size, yprev + uv_size, uv_width, uv_height, pitch,
                    next, key_frame, work, BINK_CHROMA_PLANE_SCALE, table, yflags);
    }
}
