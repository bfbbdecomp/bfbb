#include "bink.h"
#include "bitplane.h"
#include "dct.h"
#include "varbits.h"

#define BP_BITS_PER_WORD BPBITSTYPELEN
#define BP_WORD_TOP_BIT (BP_BITS_PER_WORD - 1)
#define BP_S32_SIGN_SHIFT BP_WORD_TOP_BIT
#define BP_S16_SIGN_SHIFT 15
#define BP_BLOCK_COEFFS 64
#define BP_AC_COEFFS (BP_BLOCK_COEFFS - 1)
#define BP_LOSSY_OUTPUT_COEFFS 32
#define BP_TREE_NODES 68
#define BP_TREE_GROUPS 16
#define BP_TREE_LAST_GROUP (BP_TREE_GROUPS - 1)
#define BP_TREE_HIGH_GROUPS 8
#define BP_TREE_CHILD_COUNT 4
#define BP_TREE_ADDED_CHILD_COUNT (BP_TREE_CHILD_COUNT - 1)
#define BP_TREE_CHILD1_INDEX 1
#define BP_TREE_CHILD2_INDEX 2
#define BP_TREE_CHILD3_INDEX 3
#define BP_TREE_CHILD1_BASE (BP_TREE_CHILD_COUNT * 1)
#define BP_TREE_CHILD2_BASE (BP_TREE_CHILD_COUNT * 2)
#define BP_TREE_CHILD3_BASE (BP_TREE_CHILD_COUNT * 3)
#define BP_TREE_GROUP_INDEX(index) ((index) >> 2)
#define BP_NEXT_TREE_GROUP(ptr) ((ptr) + BP_TREE_CHILD_COUNT)
#define BP_FIRST_LOSSLESS_TREE_GROUP_INDEX BP_TREE_CHILD_COUNT
#define BP_FIRST_LOSSLESS_TREE_GROUP_END_INDEX (BP_FIRST_LOSSLESS_TREE_GROUP_INDEX + BP_TREE_CHILD3_INDEX)
#define BP_FIRST_LOSSY_TREE_GROUP_END_INDEX BP_TREE_CHILD3_INDEX
#define BP_TREE_GROUP1_INDEX 1
#define BP_TREE_GROUP6_INDEX 6
#define BP_TREE_GROUP11_INDEX 11
#define BP_TREE_HIGH_GROUP0_INDEX 2
#define BP_TREE_HIGH_GROUP1_INDEX 7
#define BP_TREE_HIGH_GROUP2_INDEX 12
#define BP_TREE_HIGH_GROUP0_CHILD0_INDEX 3
#define BP_TREE_HIGH_GROUP1_CHILD0_INDEX 8
#define BP_TREE_HIGH_GROUP2_CHILD0_INDEX 13
#define BP_BYTE_MASK 0xff
#define BP_U16_MASK 0xffff
#define BP_SIGN_BIT 0x80
#define BP_NEGATIVE_COEFF_SIGN 0xffff
#define BP_POSITIVE_COEFF_SIGN 1
#define BP_ABS_COEFF(value, sign) (((sign) ^ (value)) - (sign))
#define BP_TREE_KIND_MASK 0x300
/* Write-side tree nodes pack kind, coefficient/group index, and bit depth. */
#define BP_TREE_INDEX_SHIFT 10
#define BP_TREE_GROUP_SHIFT 12
#define BP_TREE_HIGH_GROUP_SHIFT 14
#define BP_TREE_BASE_MASK 0xfc00
#define BP_TREE_INDEX_STRIDE 0x400
#define BP_COEFF1_INDEX 1
#define BP_COEFF2_INDEX 2
#define BP_COEFF3_INDEX 3
#define BP_GROUP1_NODE_BASE (1 << BP_TREE_GROUP_SHIFT)
#define BP_GROUP6_NODE_BASE (6 << BP_TREE_GROUP_SHIFT)
#define BP_GROUP11_NODE_BASE (11 << BP_TREE_GROUP_SHIFT)
#define BP_COEFF1_LEAF_BASE (7 << 8)
#define BP_COEFF2_LEAF_BASE (11 << 8)
#define BP_COEFF3_LEAF_BASE (15 << 8)
#define BP_READ_TREE_KIND_MASK 3
/* Read-side nodes pack the same logical tree into byte-sized entries. */
#define BP_READ_TREE_INDEX_SHIFT 2
#define BP_READ_TREE_BASE_MASK 0xfc
#define BP_READ_TREE_CHILD_COUNT BP_TREE_CHILD_COUNT
#define BP_READ_TREE_CHILD1_BASE (BP_READ_TREE_CHILD_COUNT * 1)
#define BP_READ_TREE_CHILD2_BASE (BP_READ_TREE_CHILD_COUNT * 2)
#define BP_READ_TREE_CHILD3_BASE (BP_READ_TREE_CHILD_COUNT * 3)
#define BP_READ_TREE_NODE(index, kind) (((index) << BP_READ_TREE_INDEX_SHIFT) + (kind))
#define BP_READ_TREE_INDEX(node) ((node) >> BP_READ_TREE_INDEX_SHIFT)
#define BP_READ_TREE_BASE(node) ((node) & BP_READ_TREE_BASE_MASK)
#define BP_READ_TREE_GROUP_BASE(group) ((group) * BP_READ_TREE_CHILD_COUNT)
#define BP_READ_TREE_GROUP(group) BP_READ_TREE_NODE(BP_READ_TREE_GROUP_BASE(group), BP_READ_TREE_HIGH_NODE)
#define BP_READ_TREE_GROUP1_ROOT BP_READ_TREE_GROUP(1)
#define BP_READ_TREE_GROUP6_ROOT BP_READ_TREE_GROUP(6)
#define BP_READ_TREE_GROUP11_ROOT BP_READ_TREE_GROUP(11)
#define BP_READ_TREE_BRANCH(index) BP_READ_TREE_NODE(index, BP_READ_TREE_BRANCH_NODE)
#define BP_READ_TREE_COEFF(index) BP_READ_TREE_NODE(index, BP_READ_TREE_COEFF_NODE)
#define BP_READ_TREE_COEFF1_ROOT BP_READ_TREE_COEFF(BP_COEFF1_INDEX)
#define BP_READ_TREE_COEFF2_ROOT BP_READ_TREE_COEFF(BP_COEFF2_INDEX)
#define BP_READ_TREE_COEFF3_ROOT BP_READ_TREE_COEFF(BP_COEFF3_INDEX)
#define BP_READ_TREE_BRANCH_FROM_NODE(node) (BP_READ_TREE_BASE(node) + BP_READ_TREE_BRANCH_NODE)
#define BP_READ_TREE_GROUP_FROM_INDEX(index) BP_READ_TREE_NODE((index) + BP_READ_TREE_CHILD_COUNT, BP_READ_TREE_GROUP_NODE)
#define BP_LOSSLESS_ROOT_NODES 6
#define BP_LOSSY_ROOT_NODES 4
#define BP_LOSSLESS_LEVEL_BITS 4
#define BP_LOSSLESS_LEVEL_MASK 0xf
#define BP_LOSSY_LEVEL_BITS 3
#define BP_LOSSY_LEVEL_MASK 7
#define BP_ZIGZAG_COEFF(vals, index) ((vals)[zigzag[index]])

typedef enum BPWriteTreeKind
{
    BP_TREE_GROUP_NODE = 0x100,
    BP_TREE_AFTER_GROUP_NODE = BP_TREE_GROUP_NODE + 1,
    BP_TREE_BRANCH_NODE = 0x200,
    BP_TREE_COEFF_NODE = 0x300
} BPWriteTreeKind;

typedef enum BPReadTreeKind
{
    BP_READ_TREE_HIGH_NODE = 0,
    BP_READ_TREE_GROUP_NODE = 1,
    BP_READ_TREE_BRANCH_NODE = 2,
    BP_READ_TREE_COEFF_NODE = 3
} BPReadTreeKind;

typedef struct BPCOEFFPAIR
{
    s16 first;
    s16 second;
} BPCOEFFPAIR;

typedef union BPLOSSYBLOCK
{
    s8 bytes[BP_BLOCK_COEFFS];
    s16 words[BP_LOSSY_OUTPUT_COEFFS];
} BPLOSSYBLOCK;

void readlossy(void PTR4* out, BPBITSTREAM PTR4* bits, s32 limit);

#define BP_STREAM(bits) ((BPBITSTREAM*)(bits))
#define BP_STREAM_CUR(bits) (BP_STREAM(bits)->cur)
#define BP_STREAM_BITS(bits) (BP_STREAM(bits)->bits)
#define BP_STREAM_BITLEN(bits) (BP_STREAM(bits)->bitlen)

#define PUT_BP_BIT(bits, bit)                                                                                          \
    do {                                                                                                               \
        u32 _bitcount;                                                                                                 \
        if (bit) {                                                                                                     \
            BP_STREAM_BITS(bits) |= 1 << BP_STREAM_BITLEN(bits);                                                       \
        }                                                                                                              \
        _bitcount = BP_STREAM_BITLEN(bits);                                                                            \
        BP_STREAM_BITLEN(bits) = _bitcount + 1;                                                                        \
        if (_bitcount + 1 == BP_BITS_PER_WORD) {                                                                       \
            *BP_STREAM_CUR(bits) = BP_STREAM_BITS(bits);                                                               \
            BP_STREAM_BITLEN(bits) = 0;                                                                                \
            BP_STREAM_BITS(bits) = 0;                                                                                  \
            BP_STREAM_CUR(bits) = BP_STREAM_CUR(bits) + 1;                                                            \
        }                                                                                                              \
    } while (0)

#define PUT_BP_BITS(bits, value, size, mask)                                                                            \
    do {                                                                                                               \
        BPBITSTYPE _value = (value) & (mask);                                                                            \
        u32 _bitcount = BP_STREAM_BITLEN(bits) + (size);                                                               \
        BPBITSTYPE _bitbuf = BP_STREAM_BITS(bits) | (_value << BP_STREAM_BITLEN(bits));                                \
        BP_STREAM_BITLEN(bits) = _bitcount;                                                                            \
        BP_STREAM_BITS(bits) = _bitbuf;                                                                                \
        if (_bitcount >= BP_BITS_PER_WORD) {                                                                           \
            *BP_STREAM_CUR(bits) = _bitbuf;                                                                            \
            _bitcount = BP_STREAM_BITLEN(bits) - BP_BITS_PER_WORD;                                                     \
            BP_STREAM_CUR(bits) = BP_STREAM_CUR(bits) + 1;                                                            \
            BP_STREAM_BITLEN(bits) = _bitcount;                                                                        \
            BP_STREAM_BITS(bits) = 0;                                                                                  \
            if (_bitcount != 0) {                                                                                      \
                BP_STREAM_BITS(bits) = _value >> ((size) - _bitcount);                                                 \
            }                                                                                                          \
        }                                                                                                              \
    } while (0)

u32 LenBPLossless(s16 PTR4* vals)
{
    u16 entry;
    u16 kind;
    u32 sign;
    u32 bits;
    u32 maxbits;
    s32 len;
    s32 count;
    u8 PTR4* group_ptr;
    u8 PTR4* len_ptr;
    u32 value;
    u16 PTR4* cur;
    u16 PTR4* restart;
    u16 PTR4* end;
    u16 PTR4* roots;
    s32 total;
    u16 tree_nodes[BP_TREE_NODES];
    u8 lens[BP_BLOCK_COEFFS];
    u8 groups[BP_TREE_GROUPS];
    u8 hi_groups[BP_TREE_HIGH_GROUPS];
    s32 active;

    /* Lossless bitplanes code AC coefficient magnitudes by zigzag bit depth. */
    count = BP_AC_COEFFS;
    maxbits = 0;
    len = 1;
    do {
        value = (u32)BP_ZIGZAG_COEFF(vals, len);
        sign = (s32)value >> BP_S32_SIGN_SHIFT;
        bits = getbitlevelvar(BP_ABS_COEFF(value, sign) & BP_U16_MASK) & BP_BYTE_MASK;
        if (maxbits < bits) {
            maxbits = bits;
        }
        lens[len] = (u8)bits;
        len++;
        count--;
    } while (count != 0);

    /* Each four-coefficient subtree inherits the deepest child bit depth. */
    len = BP_FIRST_LOSSLESS_TREE_GROUP_INDEX;
    count = BP_TREE_LAST_GROUP;
    active = maxbits != 0;
    group_ptr = lens + BP_FIRST_LOSSLESS_TREE_GROUP_END_INDEX;
    len_ptr = lens;
    do {
        len_ptr = BP_NEXT_TREE_GROUP(len_ptr);
        bits = *len_ptr;
        if (*len_ptr < len_ptr[1]) {
            bits = len_ptr[1];
        }
        if (bits < group_ptr[-1]) {
            bits = group_ptr[-1];
        }
        if (bits < *group_ptr) {
            bits = *group_ptr;
        }
        groups[BP_TREE_GROUP_INDEX(len)] = (u8)bits;
        group_ptr = BP_NEXT_TREE_GROUP(group_ptr);
        len += BP_TREE_CHILD_COUNT;
        count--;
    } while (count != 0);

    if (groups[BP_TREE_HIGH_GROUP0_INDEX] < groups[BP_TREE_HIGH_GROUP0_CHILD0_INDEX]) {
        groups[BP_TREE_HIGH_GROUP0_INDEX] = groups[BP_TREE_HIGH_GROUP0_CHILD0_INDEX];
    }
    if (groups[BP_TREE_HIGH_GROUP0_INDEX] < groups[BP_TREE_HIGH_GROUP0_CHILD0_INDEX + BP_TREE_CHILD1_INDEX]) {
        groups[BP_TREE_HIGH_GROUP0_INDEX] = groups[BP_TREE_HIGH_GROUP0_CHILD0_INDEX + BP_TREE_CHILD1_INDEX];
    }
    if (groups[BP_TREE_HIGH_GROUP0_INDEX] < groups[BP_TREE_HIGH_GROUP0_CHILD0_INDEX + BP_TREE_CHILD2_INDEX]) {
        groups[BP_TREE_HIGH_GROUP0_INDEX] = groups[BP_TREE_HIGH_GROUP0_CHILD0_INDEX + BP_TREE_CHILD2_INDEX];
    }
    hi_groups[0] = groups[BP_TREE_HIGH_GROUP0_INDEX];
    if (groups[BP_TREE_HIGH_GROUP1_INDEX] < groups[BP_TREE_HIGH_GROUP1_CHILD0_INDEX]) {
        groups[BP_TREE_HIGH_GROUP1_INDEX] = groups[BP_TREE_HIGH_GROUP1_CHILD0_INDEX];
    }
    if (groups[BP_TREE_HIGH_GROUP1_INDEX] < groups[BP_TREE_HIGH_GROUP1_CHILD0_INDEX + BP_TREE_CHILD1_INDEX]) {
        groups[BP_TREE_HIGH_GROUP1_INDEX] = groups[BP_TREE_HIGH_GROUP1_CHILD0_INDEX + BP_TREE_CHILD1_INDEX];
    }
    if (groups[BP_TREE_HIGH_GROUP1_INDEX] < groups[BP_TREE_HIGH_GROUP1_CHILD0_INDEX + BP_TREE_CHILD2_INDEX]) {
        groups[BP_TREE_HIGH_GROUP1_INDEX] = groups[BP_TREE_HIGH_GROUP1_CHILD0_INDEX + BP_TREE_CHILD2_INDEX];
    }
    hi_groups[1] = groups[BP_TREE_HIGH_GROUP1_INDEX];
    if (groups[BP_TREE_HIGH_GROUP2_INDEX] < groups[BP_TREE_HIGH_GROUP2_CHILD0_INDEX]) {
        groups[BP_TREE_HIGH_GROUP2_INDEX] = groups[BP_TREE_HIGH_GROUP2_CHILD0_INDEX];
    }
    if (groups[BP_TREE_HIGH_GROUP2_INDEX] < groups[BP_TREE_HIGH_GROUP2_CHILD0_INDEX + BP_TREE_CHILD1_INDEX]) {
        groups[BP_TREE_HIGH_GROUP2_INDEX] = groups[BP_TREE_HIGH_GROUP2_CHILD0_INDEX + BP_TREE_CHILD1_INDEX];
    }
    if (groups[BP_TREE_HIGH_GROUP2_INDEX] < groups[BP_TREE_HIGH_GROUP2_CHILD0_INDEX + BP_TREE_CHILD2_INDEX]) {
        groups[BP_TREE_HIGH_GROUP2_INDEX] = groups[BP_TREE_HIGH_GROUP2_CHILD0_INDEX + BP_TREE_CHILD2_INDEX];
    }
    hi_groups[2] = groups[BP_TREE_HIGH_GROUP2_INDEX];

    len = 4;
    if (groups[BP_TREE_GROUP1_INDEX] < groups[BP_TREE_HIGH_GROUP0_INDEX]) {
        groups[BP_TREE_GROUP1_INDEX] = groups[BP_TREE_HIGH_GROUP0_INDEX];
    }
    roots = tree_nodes + BP_TREE_CHILD_COUNT;
    roots[0] = groups[BP_TREE_GROUP1_INDEX] | BP_GROUP1_NODE_BASE;
    if (groups[BP_TREE_GROUP6_INDEX] < groups[BP_TREE_HIGH_GROUP1_INDEX]) {
        groups[BP_TREE_GROUP6_INDEX] = groups[BP_TREE_HIGH_GROUP1_INDEX];
    }
    roots[1] = groups[BP_TREE_GROUP6_INDEX] | BP_GROUP6_NODE_BASE;
    if (groups[BP_TREE_GROUP11_INDEX] < groups[BP_TREE_HIGH_GROUP2_INDEX]) {
        groups[BP_TREE_GROUP11_INDEX] = groups[BP_TREE_HIGH_GROUP2_INDEX];
    }
    roots[2] = groups[BP_TREE_GROUP11_INDEX] | BP_GROUP11_NODE_BASE;
    roots[3] = lens[BP_COEFF1_INDEX] + BP_COEFF1_LEAF_BASE;
    roots[4] = lens[BP_COEFF2_INDEX] + BP_COEFF2_LEAF_BASE;
    roots[5] = lens[BP_COEFF3_INDEX] + BP_COEFF3_LEAF_BASE;
    cur = roots;
    end = roots + BP_LOSSLESS_ROOT_NODES;

    /* Expand pending group/branch/coeff nodes one bitplane level at a time. */
    for (; 1 < maxbits; maxbits = (maxbits - 1) & BP_BYTE_MASK) {
        total = len;
        restart = cur;
        if (cur < end) {
            do {
                entry = *cur;
                len = total;
                if ((entry == 0) || (len = total + 1, (entry & BP_BYTE_MASK) != maxbits)) {
                    cur++;
                } else {
                    kind = entry & BP_TREE_KIND_MASK;
                    if (kind == BP_TREE_GROUP_NODE) {
                        kind = entry >> BP_TREE_INDEX_SHIFT;
                        bits = (u32)(entry >> BP_TREE_GROUP_SHIFT);
                        *cur = (u16)groups[bits] + (entry & BP_TREE_BASE_MASK) + BP_TREE_BRANCH_NODE;
                        *end = (u16)groups[bits + BP_TREE_CHILD1_INDEX] + (kind + BP_TREE_CHILD1_BASE) * BP_TREE_INDEX_STRIDE + BP_TREE_BRANCH_NODE;
                        end[1] = (u16)groups[bits + BP_TREE_CHILD2_INDEX] + (kind + BP_TREE_CHILD2_BASE) * BP_TREE_INDEX_STRIDE + BP_TREE_BRANCH_NODE;
                        end[2] = (u16)groups[bits + BP_TREE_CHILD3_INDEX] + (kind + BP_TREE_CHILD3_BASE) * BP_TREE_INDEX_STRIDE + BP_TREE_BRANCH_NODE;
                        end += BP_TREE_ADDED_CHILD_COUNT;
                    } else if ((kind < BP_TREE_AFTER_GROUP_NODE) && ((entry & BP_TREE_KIND_MASK) == 0)) {
                        *cur = (u16)hi_groups[entry >> BP_TREE_HIGH_GROUP_SHIFT] + ((entry >> BP_TREE_INDEX_SHIFT) + BP_TREE_CHILD1_BASE) * BP_TREE_INDEX_STRIDE + BP_TREE_GROUP_NODE;
handle_children:
                        kind = entry >> BP_TREE_INDEX_SHIFT;
                        len = total + 5;
                        if (lens[kind] == maxbits) {
                            len += maxbits;
                        } else {
                            *--restart = (u16)lens[kind] | (entry & BP_TREE_BASE_MASK) + BP_TREE_COEFF_NODE;
                        }
                        if (lens[kind + BP_TREE_CHILD1_INDEX] == maxbits) {
                            len += maxbits;
                        } else {
                            *--restart = (u16)lens[kind + BP_TREE_CHILD1_INDEX] | (kind + BP_TREE_CHILD1_INDEX) * BP_TREE_INDEX_STRIDE + BP_TREE_COEFF_NODE;
                        }
                        if (lens[kind + BP_TREE_CHILD2_INDEX] == maxbits) {
                            len += maxbits;
                        } else {
                            *--restart = (u16)lens[kind + BP_TREE_CHILD2_INDEX] | (kind + BP_TREE_CHILD2_INDEX) * BP_TREE_INDEX_STRIDE + BP_TREE_COEFF_NODE;
                        }
                        if (lens[kind + BP_TREE_CHILD3_INDEX] == maxbits) {
                            len += maxbits;
                        } else {
                            *--restart = (u16)lens[kind + BP_TREE_CHILD3_INDEX] | (kind + BP_TREE_CHILD3_INDEX) * BP_TREE_INDEX_STRIDE + BP_TREE_COEFF_NODE;
                        }
                    } else if (kind == BP_TREE_BRANCH_NODE) {
                        *cur = 0;
                        cur++;
                        goto handle_children;
                    } else {
                        if (kind == BP_TREE_COEFF_NODE) {
                            *cur = 0;
                            len += maxbits;
                        }
                        cur++;
                    }
                }
                total = len;
            } while (cur < end);
        }
        cur = restart;
    }

    if (active && (total = len, restart = cur, cur < end)) {
        do {
            entry = *cur;
            len = total;
            if ((entry == 0) || (len = total + 1, (entry & BP_BYTE_MASK) != 1)) {
                cur++;
            } else {
                kind = entry & BP_TREE_KIND_MASK;
                if (kind == BP_TREE_GROUP_NODE) {
                    kind = entry >> BP_TREE_INDEX_SHIFT;
                    maxbits = (u32)(entry >> BP_TREE_GROUP_SHIFT);
                    *cur = (u16)groups[maxbits] + (entry & BP_TREE_BASE_MASK) + BP_TREE_BRANCH_NODE;
                    *end = (u16)groups[maxbits + BP_TREE_CHILD1_INDEX] + (kind + BP_TREE_CHILD1_BASE) * BP_TREE_INDEX_STRIDE + BP_TREE_BRANCH_NODE;
                    end[1] = (u16)groups[maxbits + BP_TREE_CHILD2_INDEX] + (kind + BP_TREE_CHILD2_BASE) * BP_TREE_INDEX_STRIDE + BP_TREE_BRANCH_NODE;
                    end[2] = (u16)groups[maxbits + BP_TREE_CHILD3_INDEX] + (kind + BP_TREE_CHILD3_BASE) * BP_TREE_INDEX_STRIDE + BP_TREE_BRANCH_NODE;
                    end += BP_TREE_ADDED_CHILD_COUNT;
                } else if ((kind < BP_TREE_AFTER_GROUP_NODE) && ((entry & BP_TREE_KIND_MASK) == 0)) {
                    *cur = (u16)hi_groups[entry >> BP_TREE_HIGH_GROUP_SHIFT] + ((entry >> BP_TREE_INDEX_SHIFT) + BP_TREE_CHILD1_BASE) * BP_TREE_INDEX_STRIDE + BP_TREE_GROUP_NODE;
handle_final_children:
                    kind = entry >> BP_TREE_INDEX_SHIFT;
                    len = total + 5;
                    if (lens[kind] == 1) {
                        len = total + 6;
                    } else {
                        *--restart = (u16)lens[kind] | (entry & BP_TREE_BASE_MASK) + BP_TREE_COEFF_NODE;
                    }
                    if (lens[kind + BP_TREE_CHILD1_INDEX] == 1) {
                        len++;
                    } else {
                        *--restart = (u16)lens[kind + BP_TREE_CHILD1_INDEX] | (kind + BP_TREE_CHILD1_INDEX) * BP_TREE_INDEX_STRIDE + BP_TREE_COEFF_NODE;
                    }
                    if (lens[kind + BP_TREE_CHILD2_INDEX] == 1) {
                        len++;
                    } else {
                        *--restart = (u16)lens[kind + BP_TREE_CHILD2_INDEX] | (kind + BP_TREE_CHILD2_INDEX) * BP_TREE_INDEX_STRIDE + BP_TREE_COEFF_NODE;
                    }
                    if (lens[kind + BP_TREE_CHILD3_INDEX] == 1) {
                        len++;
                    } else {
                        *--restart = (u16)lens[kind + BP_TREE_CHILD3_INDEX] | (kind + BP_TREE_CHILD3_INDEX) * BP_TREE_INDEX_STRIDE + BP_TREE_COEFF_NODE;
                    }
                } else if (kind == BP_TREE_BRANCH_NODE) {
                    *cur = 0;
                    cur++;
                    goto handle_final_children;
                } else {
                    if (kind == BP_TREE_COEFF_NODE) {
                        *cur = 0;
                        len = total + 2;
                    }
                    cur++;
                }
            }
            total = len;
        } while (cur < end);
    }

    return len;
}

void WriteBPLossless(BPBITSTREAM PTR4* bits, s16 PTR4* vals)
{
    u16 entry;
    u16 sign;
    u16 kind;
    s32 i;
    s32 count;
    u8 PTR4* group_ptr;
    u8 PTR4* len_ptr;
    u32 maxbits;
    u32 lenbits;
    u32 bit_count;
    BPBITSTYPE bit_buf;
    u16 PTR4* cur;
    s16 PTR4* ordered_cur;
    u16 PTR4* restart;
    u16 PTR4* end;
    u16 PTR4* roots;
    u16 tree_nodes[BP_TREE_NODES];
    u8 lens[BP_BLOCK_COEFFS];
    u8 groups[BP_TREE_GROUPS];
    u8 hi_groups[BP_TREE_HIGH_GROUPS];
    u16 absvals[BP_BLOCK_COEFFS];
    s16 ordered[BP_BLOCK_COEFFS];

    /* Put coefficients in scan order before building bit-depth tables. */
    count = BP_BLOCK_COEFFS;
    i = 0;
    ordered_cur = ordered;
    do {
        *ordered_cur = BP_ZIGZAG_COEFF(vals, i);
        i++;
        ordered_cur++;
        count--;
    } while (count != 0);

    count = BP_BLOCK_COEFFS;
    i = 0;
    do {
        entry = (u16)ordered[i];
        sign = (s16)entry >> BP_S16_SIGN_SHIFT;
        absvals[i] = BP_ABS_COEFF(entry, sign);
        i++;
        count--;
    } while (count != 0);

    /* The writer uses the same grouped bit-depth tree measured by LenBPLossless. */
    maxbits = 0;
    count = BP_AC_COEFFS;
    i = 1;
    cur = absvals;
    do {
        cur++;
        lenbits = getbitlevelvar((u32)*cur) & BP_BYTE_MASK;
        if (maxbits < lenbits) {
            maxbits = lenbits;
        }
        lens[i] = (u8)lenbits;
        i++;
        count--;
    } while (count != 0);

    i = BP_FIRST_LOSSLESS_TREE_GROUP_INDEX;
    count = BP_TREE_LAST_GROUP;
    group_ptr = lens + BP_FIRST_LOSSLESS_TREE_GROUP_END_INDEX;
    len_ptr = lens;
    do {
        len_ptr = BP_NEXT_TREE_GROUP(len_ptr);
        lenbits = *len_ptr;
        if (*len_ptr < len_ptr[1]) {
            lenbits = len_ptr[1];
        }
        if (lenbits < group_ptr[-1]) {
            lenbits = group_ptr[-1];
        }
        if (lenbits < *group_ptr) {
            lenbits = *group_ptr;
        }
        groups[BP_TREE_GROUP_INDEX(i)] = (u8)lenbits;
        group_ptr = BP_NEXT_TREE_GROUP(group_ptr);
        i += BP_TREE_CHILD_COUNT;
        count--;
    } while (count != 0);

    if (groups[BP_TREE_HIGH_GROUP0_INDEX] < groups[BP_TREE_HIGH_GROUP0_CHILD0_INDEX]) {
        groups[BP_TREE_HIGH_GROUP0_INDEX] = groups[BP_TREE_HIGH_GROUP0_CHILD0_INDEX];
    }
    if (groups[BP_TREE_HIGH_GROUP0_INDEX] < groups[BP_TREE_HIGH_GROUP0_CHILD0_INDEX + BP_TREE_CHILD1_INDEX]) {
        groups[BP_TREE_HIGH_GROUP0_INDEX] = groups[BP_TREE_HIGH_GROUP0_CHILD0_INDEX + BP_TREE_CHILD1_INDEX];
    }
    if (groups[BP_TREE_HIGH_GROUP0_INDEX] < groups[BP_TREE_HIGH_GROUP0_CHILD0_INDEX + BP_TREE_CHILD2_INDEX]) {
        groups[BP_TREE_HIGH_GROUP0_INDEX] = groups[BP_TREE_HIGH_GROUP0_CHILD0_INDEX + BP_TREE_CHILD2_INDEX];
    }
    hi_groups[0] = groups[BP_TREE_HIGH_GROUP0_INDEX];
    if (groups[BP_TREE_HIGH_GROUP1_INDEX] < groups[BP_TREE_HIGH_GROUP1_CHILD0_INDEX]) {
        groups[BP_TREE_HIGH_GROUP1_INDEX] = groups[BP_TREE_HIGH_GROUP1_CHILD0_INDEX];
    }
    if (groups[BP_TREE_HIGH_GROUP1_INDEX] < groups[BP_TREE_HIGH_GROUP1_CHILD0_INDEX + BP_TREE_CHILD1_INDEX]) {
        groups[BP_TREE_HIGH_GROUP1_INDEX] = groups[BP_TREE_HIGH_GROUP1_CHILD0_INDEX + BP_TREE_CHILD1_INDEX];
    }
    if (groups[BP_TREE_HIGH_GROUP1_INDEX] < groups[BP_TREE_HIGH_GROUP1_CHILD0_INDEX + BP_TREE_CHILD2_INDEX]) {
        groups[BP_TREE_HIGH_GROUP1_INDEX] = groups[BP_TREE_HIGH_GROUP1_CHILD0_INDEX + BP_TREE_CHILD2_INDEX];
    }
    hi_groups[1] = groups[BP_TREE_HIGH_GROUP1_INDEX];
    if (groups[BP_TREE_HIGH_GROUP2_INDEX] < groups[BP_TREE_HIGH_GROUP2_CHILD0_INDEX]) {
        groups[BP_TREE_HIGH_GROUP2_INDEX] = groups[BP_TREE_HIGH_GROUP2_CHILD0_INDEX];
    }
    if (groups[BP_TREE_HIGH_GROUP2_INDEX] < groups[BP_TREE_HIGH_GROUP2_CHILD0_INDEX + BP_TREE_CHILD1_INDEX]) {
        groups[BP_TREE_HIGH_GROUP2_INDEX] = groups[BP_TREE_HIGH_GROUP2_CHILD0_INDEX + BP_TREE_CHILD1_INDEX];
    }
    if (groups[BP_TREE_HIGH_GROUP2_INDEX] < groups[BP_TREE_HIGH_GROUP2_CHILD0_INDEX + BP_TREE_CHILD2_INDEX]) {
        groups[BP_TREE_HIGH_GROUP2_INDEX] = groups[BP_TREE_HIGH_GROUP2_CHILD0_INDEX + BP_TREE_CHILD2_INDEX];
    }

    bit_count = BP_STREAM_BITLEN(bits) + BP_LOSSLESS_LEVEL_BITS;
    lenbits = maxbits & VarBitsLens[BP_LOSSLESS_LEVEL_BITS];
    hi_groups[2] = groups[BP_TREE_HIGH_GROUP2_INDEX];
    bit_buf = BP_STREAM_BITS(bits) | (lenbits << BP_STREAM_BITLEN(bits));
    BP_STREAM_BITLEN(bits) = bit_count;
    BP_STREAM_BITS(bits) = bit_buf;
    if (bit_count >= BP_BITS_PER_WORD) {
        *BP_STREAM_CUR(bits) = bit_buf;
        bit_buf = BP_STREAM_BITLEN(bits) - BP_BITS_PER_WORD;
        BP_STREAM_CUR(bits) = BP_STREAM_CUR(bits) + 1;
        BP_STREAM_BITLEN(bits) = bit_buf;
        BP_STREAM_BITS(bits) = 0;
        if (bit_buf != 0) {
            BP_STREAM_BITS(bits) = lenbits >> (BP_LOSSLESS_LEVEL_BITS - bit_buf);
        }
    }

    if (groups[BP_TREE_GROUP1_INDEX] < groups[BP_TREE_HIGH_GROUP0_INDEX]) {
        groups[BP_TREE_GROUP1_INDEX] = groups[BP_TREE_HIGH_GROUP0_INDEX];
    }
    roots = tree_nodes + BP_TREE_CHILD_COUNT;
    roots[0] = groups[BP_TREE_GROUP1_INDEX] | BP_GROUP1_NODE_BASE;
    if (groups[BP_TREE_GROUP6_INDEX] < groups[BP_TREE_HIGH_GROUP1_INDEX]) {
        groups[BP_TREE_GROUP6_INDEX] = groups[BP_TREE_HIGH_GROUP1_INDEX];
    }
    roots[1] = groups[BP_TREE_GROUP6_INDEX] | BP_GROUP6_NODE_BASE;
    if (groups[BP_TREE_GROUP11_INDEX] < groups[BP_TREE_HIGH_GROUP2_INDEX]) {
        groups[BP_TREE_GROUP11_INDEX] = groups[BP_TREE_HIGH_GROUP2_INDEX];
    }
    roots[2] = groups[BP_TREE_GROUP11_INDEX] | BP_GROUP11_NODE_BASE;
    roots[3] = lens[BP_COEFF1_INDEX] + BP_COEFF1_LEAF_BASE;
    roots[4] = lens[BP_COEFF2_INDEX] + BP_COEFF2_LEAF_BASE;
    roots[5] = lens[BP_COEFF3_INDEX] + BP_COEFF3_LEAF_BASE;

    cur = roots;
    end = roots + BP_LOSSLESS_ROOT_NODES;
    do {
        if (maxbits == 0) {
            return;
        }
        lenbits = maxbits - 1;
        restart = cur;
        /* Active children at lower bit depths are pushed before the current cursor. */
        if (cur < end) {
            do {
                entry = *cur;
                if (entry == 0) {
next_lossless_node:
                    cur++;
                } else {
                    sign = (entry & BP_BYTE_MASK) != maxbits;
                    PUT_BP_BIT(bits, !sign);
                    if (sign) {
                        goto next_lossless_node;
                    }
                    kind = entry & BP_TREE_KIND_MASK;
                    if (kind == BP_TREE_GROUP_NODE) {
                        kind = entry >> BP_TREE_INDEX_SHIFT;
                        count = (u32)(entry >> BP_TREE_GROUP_SHIFT);
                        *cur = (u16)groups[count] + (entry & BP_TREE_BASE_MASK) + BP_TREE_BRANCH_NODE;
                        *end = (u16)groups[count + BP_TREE_CHILD1_INDEX] + (kind + BP_TREE_CHILD1_BASE) * BP_TREE_INDEX_STRIDE + BP_TREE_BRANCH_NODE;
                        end[1] = (u16)groups[count + BP_TREE_CHILD2_INDEX] + (kind + BP_TREE_CHILD2_BASE) * BP_TREE_INDEX_STRIDE + BP_TREE_BRANCH_NODE;
                        end[2] = (u16)groups[count + BP_TREE_CHILD3_INDEX] + (kind + BP_TREE_CHILD3_BASE) * BP_TREE_INDEX_STRIDE + BP_TREE_BRANCH_NODE;
                        end += BP_TREE_ADDED_CHILD_COUNT;
                    } else if (kind < BP_TREE_AFTER_GROUP_NODE) {
                        if ((entry & BP_TREE_KIND_MASK) == 0) {
                            *cur = (u16)hi_groups[entry >> BP_TREE_HIGH_GROUP_SHIFT] + ((entry >> BP_TREE_INDEX_SHIFT) + BP_TREE_CHILD1_BASE) * BP_TREE_INDEX_STRIDE + BP_TREE_GROUP_NODE;
handle_lossless_children:
                            kind = entry >> BP_TREE_INDEX_SHIFT;
                            PUT_BP_BIT(bits, lens[kind] != maxbits);
                            if (lens[kind] == maxbits) {
                                PUT_BP_BITS(bits, absvals[kind], lenbits, VarBitsLens[lenbits]);
                                PUT_BP_BIT(bits, ordered[kind] < 0);
                            } else {
                                *--restart = (u16)lens[kind] | (entry & BP_TREE_BASE_MASK) + BP_TREE_COEFF_NODE;
                            }

                            i = kind + BP_TREE_CHILD1_INDEX;
                            PUT_BP_BIT(bits, lens[i] != maxbits);
                            if (lens[i] == maxbits) {
                                PUT_BP_BITS(bits, absvals[i], lenbits, VarBitsLens[lenbits]);
                                PUT_BP_BIT(bits, ordered[i] < 0);
                            } else {
                                *--restart = (u16)lens[i] | i * BP_TREE_INDEX_STRIDE + BP_TREE_COEFF_NODE;
                            }

                            i = kind + BP_TREE_CHILD2_INDEX;
                            PUT_BP_BIT(bits, lens[i] != maxbits);
                            if (lens[i] == maxbits) {
                                PUT_BP_BITS(bits, absvals[i], lenbits, VarBitsLens[lenbits]);
                                PUT_BP_BIT(bits, ordered[i] < 0);
                            } else {
                                *--restart = (u16)lens[i] | i * BP_TREE_INDEX_STRIDE + BP_TREE_COEFF_NODE;
                            }

                            i = kind + BP_TREE_CHILD3_INDEX;
                            PUT_BP_BIT(bits, lens[i] != maxbits);
                            if (lens[i] == maxbits) {
                                PUT_BP_BITS(bits, absvals[i], lenbits, VarBitsLens[lenbits]);
                                PUT_BP_BIT(bits, ordered[i] < 0);
                            } else {
                                *--restart = (u16)lens[i] | i * BP_TREE_INDEX_STRIDE + BP_TREE_COEFF_NODE;
                            }
                        }
                    } else {
                        if (kind == BP_TREE_BRANCH_NODE) {
                            *cur = 0;
                            cur++;
                            goto handle_lossless_children;
                        }
                        if (kind == BP_TREE_COEFF_NODE) {
                            kind = entry >> BP_TREE_INDEX_SHIFT;
                            PUT_BP_BITS(bits, absvals[kind], lenbits, VarBitsLens[lenbits]);
                            PUT_BP_BIT(bits, ordered[kind] < 0);
                            *cur = 0;
                        }
                        goto next_lossless_node;
                    }
                }
            } while (cur < end);
        }
        maxbits = lenbits & BP_BYTE_MASK;
        cur = restart;
    } while (1);
}

void ReadBPLossless(s16 PTR4* out, BPBITSTREAM PTR4* bits)
{
    u32 code;
    u32 PTR4* words;
    BPBITSTYPE bitbuf;
    u32 bitcount;
    s32 shift;
    u32 level;
    u32 maxlevel;
    u32 active;
    u32 highbit;
    u32 value;
    u32 mask;
    u8 PTR4* cur;
    u8 PTR4* next;
    u8 PTR4* tree_end;
    u8 node;
    u8 kind;
    u32 base;
    u8 tree[BP_BLOCK_COEFFS];
    u16 coeffs[BP_BLOCK_COEFFS];
    BPBITSTREAM bitcopy;

    bitcopy = *bits;
    words = bitcopy.cur;
    bitbuf = bitcopy.bits;
    bitcount = bitcopy.bitlen;
    memset(coeffs, 0, sizeof(coeffs));

    /* The stream starts with the maximum active lossless bitplane level. */
    if (bitcount < BP_LOSSLESS_LEVEL_BITS) {
        shift = BP_LOSSLESS_LEVEL_BITS - bitcount;
        code = bitbuf & BP_BYTE_MASK;
        bitbuf = *words;
        words++;
        code |= bitbuf << bitcount;
        bitbuf >>= shift;
        bitcount = bitcount + BP_BITS_PER_WORD - BP_LOSSLESS_LEVEL_BITS;
    } else {
        code = bitbuf & BP_BYTE_MASK;
        bitbuf >>= BP_LOSSLESS_LEVEL_BITS;
        bitcount -= BP_LOSSLESS_LEVEL_BITS;
    }

    maxlevel = code & BP_LOSSLESS_LEVEL_MASK;
    active = maxlevel != 0;
    /* Root nodes mirror WriteBPLossless: three grouped roots plus coeffs 1..3. */
    tree[0] = BP_READ_TREE_GROUP1_ROOT;
    tree[1] = BP_READ_TREE_GROUP6_ROOT;
    tree[2] = BP_READ_TREE_GROUP11_ROOT;
    tree[3] = BP_READ_TREE_COEFF1_ROOT;
    tree[4] = BP_READ_TREE_COEFF2_ROOT;
    tree[5] = BP_READ_TREE_COEFF3_ROOT;

    cur = tree;
    tree_end = tree + BP_LOSSLESS_ROOT_NODES;
    highbit = (u16)(1 << (maxlevel - 1));

    /* Non-final planes read lower magnitude bits plus a sign for new coeffs. */
    while (1 < maxlevel) {
        level = (maxlevel - 1) & BP_BYTE_MASK;
        next = cur;
        highbit = (s16)highbit >> 1;
        if (cur < tree_end) {
            mask = VarBitsLens[level];
            do {
                node = *cur;
                if (node == 0) {
next_lossless_read_node:
                    cur++;
                } else {
                    if (bitcount == 0) {
                        code = *words;
                        bitcount = BP_WORD_TOP_BIT;
                        words++;
                        bitbuf = code >> 1;
                        if ((code & 1) == 0) {
                            goto next_lossless_read_node;
                        }
                    } else {
                        bitcount = bitcount - 1;
                        code = bitbuf & 1;
                        bitbuf >>= 1;
                        if (code == 0) {
                            goto next_lossless_read_node;
                        }
                    }

                    kind = node & BP_READ_TREE_KIND_MASK;
                    if (kind == BP_READ_TREE_GROUP_NODE) {
                        kind = BP_READ_TREE_INDEX(node);
                        *cur = BP_READ_TREE_BRANCH_FROM_NODE(node);
                        *tree_end = BP_READ_TREE_NODE(kind + BP_READ_TREE_CHILD1_BASE, BP_READ_TREE_BRANCH_NODE);
                        tree_end[1] = BP_READ_TREE_NODE(kind + BP_READ_TREE_CHILD2_BASE, BP_READ_TREE_BRANCH_NODE);
                        tree_end[2] = BP_READ_TREE_NODE(kind + BP_READ_TREE_CHILD3_BASE, BP_READ_TREE_BRANCH_NODE);
                        tree_end += BP_TREE_ADDED_CHILD_COUNT;
                    } else {
                        if (kind < BP_READ_TREE_BRANCH_NODE) {
                            if ((node & BP_READ_TREE_KIND_MASK) != BP_READ_TREE_HIGH_NODE) {
                                goto next_lossless_read_node;
                            }
                            *cur = BP_READ_TREE_GROUP_FROM_INDEX(BP_READ_TREE_INDEX(node));
                        } else {
                            if (kind != BP_READ_TREE_BRANCH_NODE) {
                                if (kind == BP_READ_TREE_COEFF_NODE) {
                                    value = bitbuf & mask;
                                    if (bitcount < level) {
                                        code = *words++;
                                        value |= code << bitcount;
                                        bitbuf = code >> (level - bitcount);
                                        bitcount = bitcount + BP_BITS_PER_WORD - level;
                                    } else {
                                        bitbuf >>= level;
                                        bitcount = bitcount - level;
                                    }
                                    value = (value & mask) | highbit;
                                    if (bitcount == 0) {
                                        code = *words;
                                        bitcount = BP_WORD_TOP_BIT;
                                        words++;
                                        bitbuf = code >> 1;
                                    } else {
                                        bitcount = bitcount - 1;
                                        code = bitbuf & 1;
                                        bitbuf >>= 1;
                                    }
                                    if ((code & 1) != 0) {
                                        value = -value;
                                    }
                                    coeffs[BP_READ_TREE_INDEX(node)] = (u16)value;
                                    *cur = 0;
                                }
                                goto next_lossless_read_node;
                            }
                            *cur = 0;
                            cur++;
                        }

                        base = BP_READ_TREE_INDEX(node);
#define READ_LOSSLESS_CHILD(slot, label)                                                                               \
                        do {                                                                                           \
                            if (bitcount == 0) {                                                                       \
                                code = *words;                                                                         \
                                bitcount = BP_WORD_TOP_BIT;                                                            \
                                bitbuf = code >> 1;                                                                    \
                                words++;                                                                               \
                                if ((code & 1) != 0) {                                                                 \
                                    next--;                                                                            \
                                    *next = BP_READ_TREE_COEFF(slot);                                                  \
                                    goto label;                                                                        \
                                }                                                                                      \
                            } else {                                                                                   \
                                bitcount = bitcount - 1;                                                               \
                                code = bitbuf & 1;                                                                     \
                                bitbuf >>= 1;                                                                          \
                                if (code != 0) {                                                                       \
                                    next--;                                                                            \
                                    *next = BP_READ_TREE_COEFF(slot);                                                  \
                                    goto label;                                                                        \
                                }                                                                                      \
                            }                                                                                          \
                            value = bitbuf & mask;                                                                     \
                            if (bitcount < level) {                                                                    \
                                code = *words++;                                                                       \
                                value |= code << bitcount;                                                             \
                                bitbuf = code >> (level - bitcount);                                                   \
                                bitcount = bitcount + BP_BITS_PER_WORD - level;                                        \
                            } else {                                                                                   \
                                bitbuf >>= level;                                                                      \
                                bitcount = bitcount - level;                                                           \
                            }                                                                                          \
                            value = (value & mask) | highbit;                                                          \
                            if (bitcount == 0) {                                                                       \
                                code = *words;                                                                         \
                                bitcount = BP_WORD_TOP_BIT;                                                            \
                                words++;                                                                               \
                                bitbuf = code >> 1;                                                                    \
                            } else {                                                                                   \
                                bitcount = bitcount - 1;                                                               \
                                code = bitbuf & 1;                                                                     \
                                bitbuf >>= 1;                                                                          \
                            }                                                                                          \
                            if ((code & 1) != 0) {                                                                     \
                                value = -value;                                                                        \
                            }                                                                                          \
                            coeffs[slot] = (u16)value;                                                                 \
                        } while (0)
                        READ_LOSSLESS_CHILD(base, after_lossless_child0);
after_lossless_child0:
                        READ_LOSSLESS_CHILD(base + BP_TREE_CHILD1_INDEX, after_lossless_child1);
after_lossless_child1:
                        READ_LOSSLESS_CHILD(base + BP_TREE_CHILD2_INDEX, after_lossless_child2);
after_lossless_child2:
                        READ_LOSSLESS_CHILD(base + BP_TREE_CHILD3_INDEX, after_lossless_child3);
after_lossless_child3:
#undef READ_LOSSLESS_CHILD
                        ;
                    }
                }
            } while (cur < tree_end);
        }
        maxlevel = level;
        cur = next;
    }

    /* Level one coeffs need only a sign bit; their magnitude is implicit. */
    if (active && cur < tree_end) {
        next = cur;
        do {
            node = *cur;
            if (node == 0) {
next_lossless_final_node:
                cur++;
            } else {
                if (bitcount == 0) {
                    code = *words;
                    bitcount = BP_WORD_TOP_BIT;
                    words++;
                    bitbuf = code >> 1;
                    if ((code & 1) == 0) {
                        goto next_lossless_final_node;
                    }
                } else {
                    bitcount = bitcount - 1;
                    code = bitbuf & 1;
                    bitbuf >>= 1;
                    if (code == 0) {
                        goto next_lossless_final_node;
                    }
                }
                kind = node & BP_READ_TREE_KIND_MASK;
                if (kind == BP_READ_TREE_GROUP_NODE) {
                    kind = BP_READ_TREE_INDEX(node);
                    *cur = BP_READ_TREE_BRANCH_FROM_NODE(node);
                    *tree_end = BP_READ_TREE_NODE(kind + BP_READ_TREE_CHILD1_BASE, BP_READ_TREE_BRANCH_NODE);
                    tree_end[1] = BP_READ_TREE_NODE(kind + BP_READ_TREE_CHILD2_BASE, BP_READ_TREE_BRANCH_NODE);
                    tree_end[2] = BP_READ_TREE_NODE(kind + BP_READ_TREE_CHILD3_BASE, BP_READ_TREE_BRANCH_NODE);
                    tree_end += BP_TREE_ADDED_CHILD_COUNT;
                } else {
                    if (kind < BP_READ_TREE_BRANCH_NODE) {
                        if ((node & BP_READ_TREE_KIND_MASK) != BP_READ_TREE_HIGH_NODE) {
                            goto next_lossless_final_node;
                        }
                        *cur = BP_READ_TREE_GROUP_FROM_INDEX(BP_READ_TREE_INDEX(node));
                    } else {
                        if (kind != BP_READ_TREE_BRANCH_NODE) {
                            if (kind == BP_READ_TREE_COEFF_NODE) {
                                if (bitcount == 0) {
                                    code = *words;
                                    bitcount = BP_WORD_TOP_BIT;
                                    words++;
                                    bitbuf = code >> 1;
                                } else {
                                    bitcount = bitcount - 1;
                                    code = bitbuf & 1;
                                    bitbuf >>= 1;
                                }
                                coeffs[BP_READ_TREE_INDEX(node)] = (code & 1) ? BP_NEGATIVE_COEFF_SIGN : BP_POSITIVE_COEFF_SIGN;
                                *cur = 0;
                            }
                            goto next_lossless_final_node;
                        }
                        *cur = 0;
                        cur++;
                    }

                    base = BP_READ_TREE_INDEX(node);
#define READ_LOSSLESS_FINAL_CHILD(slot, label)                                                                          \
                    do {                                                                                                \
                        if (bitcount == 0) {                                                                            \
                            code = *words;                                                                              \
                            bitcount = BP_WORD_TOP_BIT;                                                                 \
                            bitbuf = code >> 1;                                                                         \
                            words++;                                                                                    \
                            if ((code & 1) != 0) {                                                                      \
                                next--;                                                                                 \
                                *next = BP_READ_TREE_COEFF(slot);                                                       \
                                goto label;                                                                             \
                            }                                                                                           \
                        } else {                                                                                        \
                            bitcount = bitcount - 1;                                                                    \
                            code = bitbuf & 1;                                                                          \
                            bitbuf >>= 1;                                                                               \
                            if (code != 0) {                                                                            \
                                next--;                                                                                 \
                                *next = BP_READ_TREE_COEFF(slot);                                                       \
                                goto label;                                                                             \
                            }                                                                                           \
                        }                                                                                               \
                        if (bitcount == 0) {                                                                            \
                            code = *words;                                                                              \
                            bitcount = BP_WORD_TOP_BIT;                                                                 \
                            words++;                                                                                    \
                            bitbuf = code >> 1;                                                                         \
                        } else {                                                                                        \
                            bitcount = bitcount - 1;                                                                    \
                            code = bitbuf & 1;                                                                          \
                            bitbuf >>= 1;                                                                               \
                        }                                                                                               \
                        coeffs[slot] = (code & 1) ? BP_NEGATIVE_COEFF_SIGN : BP_POSITIVE_COEFF_SIGN;                                                        \
                    } while (0)
                    READ_LOSSLESS_FINAL_CHILD(base, after_lossless_final0);
after_lossless_final0:
                    READ_LOSSLESS_FINAL_CHILD(base + BP_TREE_CHILD1_INDEX, after_lossless_final1);
after_lossless_final1:
                    READ_LOSSLESS_FINAL_CHILD(base + BP_TREE_CHILD2_INDEX, after_lossless_final2);
after_lossless_final2:
                    READ_LOSSLESS_FINAL_CHILD(base + BP_TREE_CHILD3_INDEX, after_lossless_final3);
after_lossless_final3:
#undef READ_LOSSLESS_FINAL_CHILD
                    ;
                }
            }
        } while (cur < tree_end);
    }

    bitcopy.cur = words;
    bitcopy.bits = bitbuf;
    bitcopy.bitlen = bitcount;
    *bits = bitcopy;
    (void)tree;

    /* Scatter scan-order coefficients back into the 8x8 block. */
    out[1] = coeffs[1];
#define COPY_BP_COEFF_PAIR(out_index, coeff_index)                                                                      \
    (*(BPCOEFFPAIR PTR4*)(out + (out_index)) = *(BPCOEFFPAIR PTR4*)(coeffs + (coeff_index)))
    COPY_BP_COEFF_PAIR(2, 4);
    COPY_BP_COEFF_PAIR(4, 8);
    COPY_BP_COEFF_PAIR(6, 12);
    COPY_BP_COEFF_PAIR(8, 2);
    COPY_BP_COEFF_PAIR(10, 6);
    COPY_BP_COEFF_PAIR(12, 10);
    COPY_BP_COEFF_PAIR(14, 14);
    COPY_BP_COEFF_PAIR(16, 24);
    COPY_BP_COEFF_PAIR(18, 44);
    COPY_BP_COEFF_PAIR(20, 16);
    COPY_BP_COEFF_PAIR(22, 20);
    COPY_BP_COEFF_PAIR(24, 26);
    COPY_BP_COEFF_PAIR(26, 46);
    COPY_BP_COEFF_PAIR(28, 18);
    COPY_BP_COEFF_PAIR(30, 22);
    COPY_BP_COEFF_PAIR(32, 28);
    COPY_BP_COEFF_PAIR(34, 32);
    COPY_BP_COEFF_PAIR(36, 48);
    COPY_BP_COEFF_PAIR(38, 52);
    COPY_BP_COEFF_PAIR(40, 30);
    COPY_BP_COEFF_PAIR(42, 34);
    COPY_BP_COEFF_PAIR(44, 50);
    COPY_BP_COEFF_PAIR(46, 54);
    COPY_BP_COEFF_PAIR(48, 36);
    COPY_BP_COEFF_PAIR(50, 40);
    COPY_BP_COEFF_PAIR(52, 56);
    COPY_BP_COEFF_PAIR(54, 60);
    COPY_BP_COEFF_PAIR(56, 38);
    COPY_BP_COEFF_PAIR(58, 42);
    COPY_BP_COEFF_PAIR(60, 58);
    COPY_BP_COEFF_PAIR(62, 62);
#undef COPY_BP_COEFF_PAIR
}

u32 WriteBPLossy(BPBITSTREAM PTR4* bits, char PTR4* vals)
{
    u16 entry;
    s32 i;
    s32 count;
    u8 PTR4* group_ptr;
    u8 PTR4* len_ptr;
    u32 maxbits;
    u32 lenbits;
    u32 bit_count;
    BPBITSTYPE bit_buf;
    u16 PTR4* cur;
    u16 PTR4* insert;
    u16 PTR4* next_node;
    u16 PTR4* roots;
    u16 mask;
    s16 node_entry;
    u16 tree_nodes[BP_TREE_NODES];
    u8 lens[BP_BLOCK_COEFFS];
    u8 groups[BP_TREE_GROUPS];
    u8 hi_groups[BP_TREE_HIGH_GROUPS];
    u8 ordered[BP_BLOCK_COEFFS];
    u8 absvals[BP_BLOCK_COEFFS];
    u8 temp[BP_BLOCK_COEFFS];

    /* Lossy bitplanes scan all 64 byte coefficients, including DC. */
    count = BP_BLOCK_COEFFS;
    i = 0;
    do {
        ordered[i] = BP_ZIGZAG_COEFF(vals, i);
        i++;
        count--;
    } while (count != 0);

    i = 0;
    count = BP_BLOCK_COEFFS;
    do {
        entry = (s8)ordered[i] >> 7;
        absvals[i] = (entry ^ ordered[i]) - entry;
        i++;
        count--;
    } while (count != 0);

    maxbits = 0;
    i = 0;
    count = BP_BLOCK_COEFFS;
    do {
        lenbits = getbitlevelvar((u32)absvals[i]) & BP_BYTE_MASK;
        if (maxbits < lenbits) {
            maxbits = lenbits;
        }
        lens[i] = (u8)lenbits;
        i++;
        count--;
    } while (count != 0);

    if (maxbits == 0) {
        return 0;
    }

    /* Group tables use the deepest bit depth of each four-coefficient branch. */
    count = BP_TREE_GROUPS;
    i = 0;
    group_ptr = lens + BP_FIRST_LOSSY_TREE_GROUP_END_INDEX;
    len_ptr = lens;
    do {
        lenbits = *len_ptr;
        if (*len_ptr < len_ptr[1]) {
            lenbits = len_ptr[1];
        }
        if (lenbits < group_ptr[-1]) {
            lenbits = group_ptr[-1];
        }
        if (lenbits < *group_ptr) {
            lenbits = *group_ptr;
        }
        groups[BP_TREE_GROUP_INDEX(i)] = (u8)lenbits;
        group_ptr = BP_NEXT_TREE_GROUP(group_ptr);
        len_ptr = BP_NEXT_TREE_GROUP(len_ptr);
        i += BP_TREE_CHILD_COUNT;
        count--;
    } while (count != 0);

    if (groups[BP_TREE_HIGH_GROUP0_INDEX] < groups[BP_TREE_HIGH_GROUP0_CHILD0_INDEX]) {
        groups[BP_TREE_HIGH_GROUP0_INDEX] = groups[BP_TREE_HIGH_GROUP0_CHILD0_INDEX];
    }
    if (groups[BP_TREE_HIGH_GROUP0_INDEX] < groups[BP_TREE_HIGH_GROUP0_CHILD0_INDEX + BP_TREE_CHILD1_INDEX]) {
        groups[BP_TREE_HIGH_GROUP0_INDEX] = groups[BP_TREE_HIGH_GROUP0_CHILD0_INDEX + BP_TREE_CHILD1_INDEX];
    }
    if (groups[BP_TREE_HIGH_GROUP0_INDEX] < groups[BP_TREE_HIGH_GROUP0_CHILD0_INDEX + BP_TREE_CHILD2_INDEX]) {
        groups[BP_TREE_HIGH_GROUP0_INDEX] = groups[BP_TREE_HIGH_GROUP0_CHILD0_INDEX + BP_TREE_CHILD2_INDEX];
    }
    hi_groups[0] = groups[BP_TREE_HIGH_GROUP0_INDEX];
    if (groups[BP_TREE_HIGH_GROUP1_INDEX] < groups[BP_TREE_HIGH_GROUP1_CHILD0_INDEX]) {
        groups[BP_TREE_HIGH_GROUP1_INDEX] = groups[BP_TREE_HIGH_GROUP1_CHILD0_INDEX];
    }
    if (groups[BP_TREE_HIGH_GROUP1_INDEX] < groups[BP_TREE_HIGH_GROUP1_CHILD0_INDEX + BP_TREE_CHILD1_INDEX]) {
        groups[BP_TREE_HIGH_GROUP1_INDEX] = groups[BP_TREE_HIGH_GROUP1_CHILD0_INDEX + BP_TREE_CHILD1_INDEX];
    }
    if (groups[BP_TREE_HIGH_GROUP1_INDEX] < groups[BP_TREE_HIGH_GROUP1_CHILD0_INDEX + BP_TREE_CHILD2_INDEX]) {
        groups[BP_TREE_HIGH_GROUP1_INDEX] = groups[BP_TREE_HIGH_GROUP1_CHILD0_INDEX + BP_TREE_CHILD2_INDEX];
    }
    hi_groups[1] = groups[BP_TREE_HIGH_GROUP1_INDEX];
    if (groups[BP_TREE_HIGH_GROUP2_INDEX] < groups[BP_TREE_HIGH_GROUP2_CHILD0_INDEX]) {
        groups[BP_TREE_HIGH_GROUP2_INDEX] = groups[BP_TREE_HIGH_GROUP2_CHILD0_INDEX];
    }
    if (groups[BP_TREE_HIGH_GROUP2_INDEX] < groups[BP_TREE_HIGH_GROUP2_CHILD0_INDEX + BP_TREE_CHILD1_INDEX]) {
        groups[BP_TREE_HIGH_GROUP2_INDEX] = groups[BP_TREE_HIGH_GROUP2_CHILD0_INDEX + BP_TREE_CHILD1_INDEX];
    }
    if (groups[BP_TREE_HIGH_GROUP2_INDEX] < groups[BP_TREE_HIGH_GROUP2_CHILD0_INDEX + BP_TREE_CHILD2_INDEX]) {
        groups[BP_TREE_HIGH_GROUP2_INDEX] = groups[BP_TREE_HIGH_GROUP2_CHILD0_INDEX + BP_TREE_CHILD2_INDEX];
    }

    bit_count = BP_STREAM_BITLEN(bits) + BP_LOSSY_LEVEL_BITS;
    lenbits = (maxbits - 1) & VarBitsLens[BP_LOSSY_LEVEL_BITS];
    hi_groups[2] = groups[BP_TREE_HIGH_GROUP2_INDEX];
    bit_buf = BP_STREAM_BITS(bits) | (lenbits << BP_STREAM_BITLEN(bits));
    BP_STREAM_BITLEN(bits) = bit_count;
    BP_STREAM_BITS(bits) = bit_buf;
    if (bit_count >= BP_BITS_PER_WORD) {
        *BP_STREAM_CUR(bits) = bit_buf;
        bit_buf = BP_STREAM_BITLEN(bits) - BP_BITS_PER_WORD;
        BP_STREAM_CUR(bits) = BP_STREAM_CUR(bits) + 1;
        BP_STREAM_BITLEN(bits) = bit_buf;
        BP_STREAM_BITS(bits) = 0;
        if (bit_buf != 0) {
            BP_STREAM_BITS(bits) = lenbits >> (BP_LOSSY_LEVEL_BITS - bit_buf);
        }
    }

    if (groups[BP_TREE_GROUP1_INDEX] < groups[BP_TREE_HIGH_GROUP0_INDEX]) {
        groups[BP_TREE_GROUP1_INDEX] = groups[BP_TREE_HIGH_GROUP0_INDEX];
    }
    roots = tree_nodes + BP_TREE_CHILD_COUNT;
    roots[0] = groups[BP_TREE_GROUP1_INDEX] | BP_GROUP1_NODE_BASE;
    if (groups[BP_TREE_GROUP6_INDEX] < groups[BP_TREE_HIGH_GROUP1_INDEX]) {
        groups[BP_TREE_GROUP6_INDEX] = groups[BP_TREE_HIGH_GROUP1_INDEX];
    }
    roots[1] = groups[BP_TREE_GROUP6_INDEX] | BP_GROUP6_NODE_BASE;
    if (groups[BP_TREE_GROUP11_INDEX] < groups[BP_TREE_HIGH_GROUP2_INDEX]) {
        groups[BP_TREE_GROUP11_INDEX] = groups[BP_TREE_HIGH_GROUP2_INDEX];
    }
    roots[2] = groups[BP_TREE_GROUP11_INDEX] | BP_GROUP11_NODE_BASE;
    roots[3] = groups[0] + BP_TREE_BRANCH_NODE;

    cur = roots;
    next_node = roots + BP_LOSSY_ROOT_NODES;
    mask = (u16)(1 << (maxbits - 1));
    i = 0;
    for (; maxbits != 0; maxbits = (maxbits - 1) & BP_BYTE_MASK) {
        count = 0;
        /* Coefficients introduced on earlier planes emit one residual bit here. */
        if (0 < i) {
            do {
                PUT_BP_BIT(bits, (temp[count] & mask) != 0);
                count++;
            } while (count < i);
        }

        insert = cur;
        if (cur < next_node) {
            do {
                node_entry = *cur;
                if (node_entry == 0) {
next_lossy_node:
                    cur++;
                } else {
                    count = (node_entry & BP_BYTE_MASK) != maxbits;
                    PUT_BP_BIT(bits, !count);
                    if (count) {
                        goto next_lossy_node;
                    }

                    lenbits = node_entry & BP_TREE_KIND_MASK;
                    if (lenbits == BP_TREE_GROUP_NODE) {
                        lenbits = node_entry >> BP_TREE_INDEX_SHIFT;
                        count = (u32)(node_entry >> BP_TREE_GROUP_SHIFT);
                        *cur = (u16)groups[count] + (node_entry & BP_TREE_BASE_MASK) + BP_TREE_BRANCH_NODE;
                        next_node[0] = (u16)groups[count + BP_TREE_CHILD1_INDEX] + (lenbits + BP_TREE_CHILD1_BASE) * BP_TREE_INDEX_STRIDE + BP_TREE_BRANCH_NODE;
                        next_node[1] = (u16)groups[count + BP_TREE_CHILD2_INDEX] + (lenbits + BP_TREE_CHILD2_BASE) * BP_TREE_INDEX_STRIDE + BP_TREE_BRANCH_NODE;
                        next_node[2] = (u16)groups[count + BP_TREE_CHILD3_INDEX] + (lenbits + BP_TREE_CHILD3_BASE) * BP_TREE_INDEX_STRIDE + BP_TREE_BRANCH_NODE;
                        next_node += BP_TREE_ADDED_CHILD_COUNT;
                    } else if (lenbits < BP_TREE_AFTER_GROUP_NODE) {
                        if ((node_entry & BP_TREE_KIND_MASK) == 0) {
                            *cur = (u16)hi_groups[node_entry >> BP_TREE_HIGH_GROUP_SHIFT] + ((node_entry >> BP_TREE_INDEX_SHIFT) + BP_TREE_CHILD1_BASE) * BP_TREE_INDEX_STRIDE + BP_TREE_GROUP_NODE;
handle_lossy_children:
                            lenbits = node_entry >> BP_TREE_INDEX_SHIFT;
                            PUT_BP_BIT(bits, lens[lenbits] != maxbits);
                            if (lens[lenbits] == maxbits) {
                                temp[i] = absvals[lenbits];
                                i++;
                                PUT_BP_BIT(bits, (ordered[lenbits] & BP_SIGN_BIT) != 0);
                            } else {
                                --insert;
                                *insert = (u16)lens[lenbits] | (node_entry & BP_TREE_BASE_MASK) + BP_TREE_COEFF_NODE;
                            }

                            PUT_BP_BIT(bits, lens[lenbits + BP_TREE_CHILD1_INDEX] != maxbits);
                            entry = lens[lenbits + BP_TREE_CHILD1_INDEX];
                            if (entry == maxbits) {
                                temp[i] = absvals[lenbits + BP_TREE_CHILD1_INDEX];
                                i++;
                                PUT_BP_BIT(bits, (ordered[lenbits + BP_TREE_CHILD1_INDEX] & BP_SIGN_BIT) != 0);
                            } else {
                                --insert;
                                *insert = (u16)entry | (lenbits + BP_TREE_CHILD1_INDEX) * BP_TREE_INDEX_STRIDE + BP_TREE_COEFF_NODE;
                            }

                            PUT_BP_BIT(bits, lens[lenbits + BP_TREE_CHILD2_INDEX] != maxbits);
                            entry = lens[lenbits + BP_TREE_CHILD2_INDEX];
                            if (entry == maxbits) {
                                temp[i] = absvals[lenbits + BP_TREE_CHILD2_INDEX];
                                i++;
                                PUT_BP_BIT(bits, (ordered[lenbits + BP_TREE_CHILD2_INDEX] & BP_SIGN_BIT) != 0);
                            } else {
                                --insert;
                                *insert = (u16)entry | (lenbits + BP_TREE_CHILD2_INDEX) * BP_TREE_INDEX_STRIDE + BP_TREE_COEFF_NODE;
                            }

                            PUT_BP_BIT(bits, lens[lenbits + BP_TREE_CHILD3_INDEX] != maxbits);
                            entry = lens[lenbits + BP_TREE_CHILD3_INDEX];
                            if (entry == maxbits) {
                                temp[i] = absvals[lenbits + BP_TREE_CHILD3_INDEX];
                                i++;
                                PUT_BP_BIT(bits, (ordered[lenbits + BP_TREE_CHILD3_INDEX] & BP_SIGN_BIT) != 0);
                            } else {
                                --insert;
                                *insert = (u16)entry | (lenbits + BP_TREE_CHILD3_INDEX) * BP_TREE_INDEX_STRIDE + BP_TREE_COEFF_NODE;
                            }
                        } else {
                            goto next_lossy_node;
                        }
                    } else {
                        if (lenbits == BP_TREE_BRANCH_NODE) {
                            *cur = 0;
                            cur++;
                            goto handle_lossy_children;
                        }
                        if (lenbits == BP_TREE_COEFF_NODE) {
                            temp[i] = absvals[node_entry >> BP_TREE_INDEX_SHIFT];
                            i++;
                            PUT_BP_BIT(bits, (ordered[node_entry >> BP_TREE_INDEX_SHIFT] & BP_SIGN_BIT) != 0);
                            *cur = 0;
                        }
                        goto next_lossy_node;
                    }
                }
            } while (cur < next_node);
        }
        cur = insert;
        mask = (s16)mask >> 1;
    }

    return 1;
}

#pragma dont_inline on
void readlossy(void PTR4* out, BPBITSTREAM PTR4* bits, s32 limit)
{
    s32 reached_limit;
    s8 sample;
    u32 old_bitcount;
    u32 levels_remaining;
    u8 node_kind;
    u8 PTR4* tree_end;
    s32 bit_value;
    s32 active_count;
    u8 PTR4* node_ptr;
    u8 node;
    u32 code;
    u32 bit;
    s32 delta;
    s32 scan;
    BPBITSTYPE word;
    u8 PTR4* next_node_ptr;
    s32 sample_count;
    u8 tree[BP_TREE_NODES];
    u8 order[BP_BLOCK_COEFFS];
    BPBITSTREAM bitcopy;
    u32 PTR4* words;
    BPBITSTYPE bitbuf;
    u32 bitcount;
    s8 PTR4* dest;
    BPBITSTREAM PTR4* bitstate;

    dest = (s8 PTR4*)out;
    bitcopy = *bits;
    bitstate = &bitcopy;
    words = bitstate->cur;
    bitbuf = bitstate->bits;
    bitcount = bitstate->bitlen;
    sample_count = 0;
    memset(dest, 0, BP_BLOCK_COEFFS);

    /* Lossy blocks store max level minus one in the stream header. */
    word = bitbuf;
    old_bitcount = bitcount;
    if (bitcount < BP_LOSSY_LEVEL_BITS) {
        bit_value = BP_LOSSY_LEVEL_BITS - bitcount;
        code = bitbuf & BP_BYTE_MASK;
        word = *words;
        bitcount = bitcount + BP_BITS_PER_WORD - BP_LOSSY_LEVEL_BITS;
        words = words + 1;
        bitbuf = word >> bit_value;
        code = code | word << old_bitcount;
    } else {
        bitcount = bitcount - BP_LOSSY_LEVEL_BITS;
        bitbuf = bitbuf >> BP_LOSSY_LEVEL_BITS;
        code = word & BP_BYTE_MASK;
    }
    levels_remaining = (code & BP_LOSSY_LEVEL_MASK) + 1;
    tree[0] = BP_READ_TREE_GROUP1_ROOT;
    tree[1] = BP_READ_TREE_GROUP6_ROOT;
    tree[2] = BP_READ_TREE_GROUP11_ROOT;
    bit_value = (s32)(s8)(1 << (code & BP_LOSSY_LEVEL_MASK));
    tree[3] = BP_READ_TREE_BRANCH(0);
    tree_end = tree + BP_LOSSY_ROOT_NODES;
    active_count = 0;
    node_ptr = tree;
    do {
        if (levels_remaining == 0) {
            goto done;
        }
        scan = 0;
        /* Active coefficients receive one refinement bit at each lower plane. */
        if (0 < active_count) {
            do {
                word = bitbuf;
                if (bitcount == 0) {
                    word = *words;
                    bitcount = BP_WORD_TOP_BIT;
                    words = words + 1;
                    bitbuf = word >> 1;
                } else {
                    bitcount = bitcount - 1;
                    bitbuf = bitbuf >> 1;
                }
                if ((word & 1) != 0) {
                    sample = dest[(u32)order[scan]];
                    delta = bit_value;
                    if (sample < 0) {
                        delta = -bit_value;
                    }
                    dest[(u32)order[scan]] = sample + (s8)delta;
                    reached_limit = sample_count == limit;
                    sample_count = sample_count + 1;
                    if (reached_limit) {
                        goto done;
                    }
                }
                scan = scan + 1;
            } while (scan < active_count);
        }
        next_node_ptr = node_ptr;
        if (node_ptr < tree_end) {
            scan = -bit_value;
read_node:
            node = *node_ptr;
            if (node == 0) {
next_node:
                node_ptr = node_ptr + 1;
            } else {
                if (bitcount == 0) {
                    word = *words;
                    bitcount = BP_WORD_TOP_BIT;
                    words = words + 1;
                    bitbuf = word >> 1;
                    if ((word & 1) != 0) {
                        goto decode_node;
                    }
                    goto next_node;
                }
                bitcount = bitcount - 1;
                code = bitbuf & 1;
                bitbuf = bitbuf >> 1;
                if (code == 0) {
                    goto next_node;
                }
decode_node:
                node_kind = node & BP_READ_TREE_KIND_MASK;
                if (node_kind == BP_READ_TREE_GROUP_NODE) {
                    node_kind = BP_READ_TREE_INDEX(node);
                    *node_ptr = BP_READ_TREE_BRANCH_FROM_NODE(node);
                    *tree_end = BP_READ_TREE_NODE(node_kind + BP_READ_TREE_CHILD1_BASE, BP_READ_TREE_BRANCH_NODE);
                    tree_end[1] = BP_READ_TREE_NODE(node_kind + BP_READ_TREE_CHILD2_BASE, BP_READ_TREE_BRANCH_NODE);
                    tree_end[2] = BP_READ_TREE_NODE(node_kind + BP_READ_TREE_CHILD3_BASE, BP_READ_TREE_BRANCH_NODE);
                    tree_end = tree_end + BP_TREE_ADDED_CHILD_COUNT;
                    goto node_done;
                }
                if (node_kind < BP_READ_TREE_BRANCH_NODE) {
                    if ((node & BP_READ_TREE_KIND_MASK) != BP_READ_TREE_HIGH_NODE) {
                        goto next_node;
                    }
                    *node_ptr = BP_READ_TREE_GROUP_FROM_INDEX(BP_READ_TREE_INDEX(node));
                } else {
                    if (node_kind != BP_READ_TREE_BRANCH_NODE) {
                        if (node_kind != BP_READ_TREE_COEFF_NODE) {
                            goto next_node;
                        }
                        order[active_count] = BP_READ_TREE_INDEX(node);
                        /* Deferred coeff nodes already carry their scan index. */
                        word = bitbuf;
                        active_count = active_count + 1;
                        if (bitcount == 0) {
                            word = *words;
                            bitcount = BP_WORD_TOP_BIT;
                            words = words + 1;
                            bitbuf = word >> 1;
                        } else {
                            bitcount = bitcount - 1;
                            bitbuf = bitbuf >> 1;
                        }
                        delta = scan;
                        if ((word & 1) == 0) {
                            delta = bit_value;
                        }
                        dest[(u32)BP_READ_TREE_INDEX(node)] = (s8)delta;
                        reached_limit = sample_count == limit;
                        sample_count = sample_count + 1;
                        if (reached_limit) {
                            goto done;
                        }
                        *node_ptr = 0;
                        goto next_node;
                    }
                    *node_ptr = 0;
                    node_ptr = node_ptr + 1;
                }
                code = (u32)BP_READ_TREE_INDEX(node);
                if (bitcount == 0) {
                    word = *words;
                    bitcount = BP_WORD_TOP_BIT;
                    bitbuf = word >> 1;
                    words = words + 1;
                    if ((word & 1) != 0) {
push_0:
                        next_node_ptr = next_node_ptr + -1;
                        *next_node_ptr = BP_READ_TREE_BASE(node) + BP_READ_TREE_COEFF_NODE;
                        goto after_0;
                    }
                } else {
                    bitcount = bitcount - 1;
                    word = bitbuf >> 1;
                    bit = bitbuf & 1;
                    bitbuf = word;
                    if (bit != 0) {
                        goto push_0;
                    }
                }
                order[active_count] = BP_READ_TREE_INDEX(node);
                /* A zero child-presence bit introduces the coefficient immediately. */
                active_count = active_count + 1;
                if (bitcount == 0) {
                    bitbuf = *words;
                    bitcount = BP_WORD_TOP_BIT;
                    words = words + 1;
                } else {
                    bitcount = bitcount - 1;
                }
                bit = bitbuf & 1;
                bitbuf = bitbuf >> 1;
                delta = scan;
                if (bit == 0) {
                    delta = bit_value;
                }
                dest[code] = (s8)delta;
                reached_limit = sample_count == limit;
                sample_count = sample_count + 1;
                if (reached_limit) {
                    goto done;
                }
after_0:
                node = (u8)(code + BP_TREE_CHILD1_INDEX);
                if (bitcount == 0) {
                    word = *words;
                    bitcount = BP_WORD_TOP_BIT;
                    bitbuf = word >> 1;
                    words = words + 1;
                    if ((word & 1) != 0) {
push_1:
                        next_node_ptr = next_node_ptr + -1;
                        *next_node_ptr = BP_READ_TREE_COEFF(node);
                        goto after_1;
                    }
                } else {
                    bitcount = bitcount - 1;
                    word = bitbuf >> 1;
                    bit = bitbuf & 1;
                    bitbuf = word;
                    if (bit != 0) {
                        goto push_1;
                    }
                }
                order[active_count] = node;
                /* Nonzero children are pushed for later planes instead. */
                active_count = active_count + 1;
                if (bitcount == 0) {
                    bitbuf = *words;
                    bitcount = BP_WORD_TOP_BIT;
                    words = words + 1;
                } else {
                    bitcount = bitcount - 1;
                }
                bit = bitbuf & 1;
                bitbuf = bitbuf >> 1;
                delta = scan;
                if (bit == 0) {
                    delta = bit_value;
                }
                dest[code + BP_TREE_CHILD1_INDEX] = (s8)delta;
                reached_limit = sample_count == limit;
                sample_count = sample_count + 1;
                if (reached_limit) {
                    goto done;
                }
after_1:
                node = (u8)(code + BP_TREE_CHILD2_INDEX);
                if (bitcount == 0) {
                    word = *words;
                    bitcount = BP_WORD_TOP_BIT;
                    bitbuf = word >> 1;
                    words = words + 1;
                    if ((word & 1) != 0) {
push_2:
                        next_node_ptr = next_node_ptr + -1;
                        *next_node_ptr = BP_READ_TREE_COEFF(node);
                        goto after_2;
                    }
                } else {
                    bitcount = bitcount - 1;
                    word = bitbuf >> 1;
                    bit = bitbuf & 1;
                    bitbuf = word;
                    if (bit != 0) {
                        goto push_2;
                    }
                }
                order[active_count] = node;
                active_count = active_count + 1;
                if (bitcount == 0) {
                    bitbuf = *words;
                    bitcount = BP_WORD_TOP_BIT;
                    words = words + 1;
                } else {
                    bitcount = bitcount - 1;
                }
                bit = bitbuf & 1;
                bitbuf = bitbuf >> 1;
                delta = scan;
                if (bit == 0) {
                    delta = bit_value;
                }
                dest[code + BP_TREE_CHILD2_INDEX] = (s8)delta;
                reached_limit = sample_count == limit;
                sample_count = sample_count + 1;
                if (reached_limit) {
                    goto done;
                }
after_2:
                word = bitbuf;
                node = (u8)(code + BP_TREE_CHILD3_INDEX);
                if (bitcount == 0) {
                    word = *words;
                    bitcount = BP_WORD_TOP_BIT;
                    words = words + 1;
                    bitbuf = word >> 1;
                } else {
                    bitcount = bitcount - 1;
                    bitbuf = bitbuf >> 1;
                }
                if ((word & 1) == 0) {
                    order[active_count] = node;
                    word = bitbuf;
                    /* The sign bit follows the first nonzero magnitude bit. */
                    active_count = active_count + 1;
                    if (bitcount == 0) {
                        word = *words;
                        bitcount = BP_WORD_TOP_BIT;
                        words = words + 1;
                        bitbuf = word >> 1;
                    } else {
                        bitcount = bitcount - 1;
                        bitbuf = bitbuf >> 1;
                    }
                    delta = scan;
                    if ((word & 1) == 0) {
                        delta = bit_value;
                    }
                    dest[code + BP_TREE_CHILD3_INDEX] = (s8)delta;
                    reached_limit = sample_count == limit;
                    sample_count = sample_count + 1;
                    if (reached_limit) {
                        goto done;
                    }
                } else {
                    next_node_ptr = next_node_ptr + -1;
                    *next_node_ptr = BP_READ_TREE_COEFF(node);
                }
            }
node_done:
            if (tree_end <= node_ptr) {
                goto level_done;
            }
            goto read_node;
        }
level_done:
        bit_value = bit_value >> 1;
        levels_remaining = (levels_remaining - 1) & BP_BYTE_MASK;
        node_ptr = next_node_ptr;
    } while (1);

done:
    bitcopy.bitlen = bitcount;
    bitcopy.cur = words;
    bitcopy.bits = bitbuf;
    *bits = bitcopy;
}
#pragma dont_inline reset

void ReadBPLossy(s16 PTR4* out, BPBITSTREAM PTR4* bits, s32 limit)
{
    BPLOSSYBLOCK coeffs;

    readlossy(coeffs.bytes, bits, limit);
    out[0] = coeffs.words[0];
    out[1] = coeffs.words[2];
    out[2] = coeffs.words[4];
    out[3] = coeffs.words[6];
    out[4] = coeffs.words[1];
    out[5] = coeffs.words[3];
    out[6] = coeffs.words[5];
    out[7] = coeffs.words[7];
    out[8] = coeffs.words[12];
    out[9] = coeffs.words[22];
    out[10] = coeffs.words[8];
    out[11] = coeffs.words[10];
    out[12] = coeffs.words[13];
    out[13] = coeffs.words[23];
    out[14] = coeffs.words[9];
    out[15] = coeffs.words[11];
    out[16] = coeffs.words[14];
    out[17] = coeffs.words[16];
    out[18] = coeffs.words[24];
    out[19] = coeffs.words[26];
    out[20] = coeffs.words[15];
    out[21] = coeffs.words[17];
    out[22] = coeffs.words[25];
    out[23] = coeffs.words[27];
    out[24] = coeffs.words[18];
    out[25] = coeffs.words[20];
    out[26] = coeffs.words[28];
    out[27] = coeffs.words[30];
    out[28] = coeffs.words[19];
    out[29] = coeffs.words[21];
    out[30] = coeffs.words[29];
    out[31] = coeffs.words[31];
}

void ReadBPLossyWithMotion(char PTR4* out, s32 pitch, BPBITSTREAM PTR4* bits, s32 limit,
                           char PTR4* prev)
{
    char temp[BP_BLOCK_COEFFS];
    char PTR4* dst = out;
    char PTR4* src = prev;

    readlossy(temp, bits, limit);
    dst[0] = temp[0] + src[0];
    dst[1] = temp[1] + src[1];
    dst[2] = temp[4] + src[2];
    dst[3] = temp[5] + src[3];
    dst[4] = temp[8] + src[4];
    dst[5] = temp[9] + src[5];
    dst[6] = temp[12] + src[6];
    dst[7] = temp[13] + src[7];
    dst += pitch;
    dst[0] = temp[2] + src[8];
    dst[1] = temp[3] + src[9];
    dst[2] = temp[6] + src[10];
    dst[3] = temp[7] + src[11];
    dst[4] = temp[10] + src[12];
    dst[5] = temp[11] + src[13];
    dst[6] = temp[14] + src[14];
    dst[7] = temp[15] + src[15];
    dst += pitch;
    dst[0] = temp[24] + src[16];
    dst[1] = temp[25] + src[17];
    dst[2] = temp[44] + src[18];
    dst[3] = temp[45] + src[19];
    dst[4] = temp[16] + src[20];
    dst[5] = temp[17] + src[21];
    dst[6] = temp[20] + src[22];
    dst[7] = temp[21] + src[23];
    dst = dst + pitch;
    dst[0] = temp[26] + src[24];
    dst[1] = temp[27] + src[25];
    dst[2] = temp[46] + src[26];
    dst[3] = temp[47] + src[27];
    dst[4] = temp[18] + src[28];
    dst[5] = temp[19] + src[29];
    dst[6] = temp[22] + src[30];
    dst[7] = temp[23] + src[31];
    dst = dst + pitch;
    dst[0] = temp[28] + src[32];
    dst[1] = temp[29] + src[33];
    dst[2] = temp[32] + src[34];
    dst[3] = temp[33] + src[35];
    dst[4] = temp[48] + src[36];
    dst[5] = temp[49] + src[37];
    dst[6] = temp[52] + src[38];
    dst[7] = temp[53] + src[39];
    dst = dst + pitch;
    dst[0] = temp[30] + src[40];
    dst[1] = temp[31] + src[41];
    dst[2] = temp[34] + src[42];
    dst[3] = temp[35] + src[43];
    dst[4] = temp[50] + src[44];
    dst[5] = temp[51] + src[45];
    dst[6] = temp[54] + src[46];
    dst[7] = temp[55] + src[47];
    dst = dst + pitch;
    dst[0] = temp[36] + src[48];
    dst[1] = temp[37] + src[49];
    dst[2] = temp[40] + src[50];
    dst[3] = temp[41] + src[51];
    dst[4] = temp[56] + src[52];
    dst[5] = temp[57] + src[53];
    dst[6] = temp[60] + src[54];
    dst[7] = temp[61] + src[55];
    dst = dst + pitch;
    dst[0] = temp[38] + src[56];
    dst[1] = temp[39] + src[57];
    dst[2] = temp[42] + src[58];
    dst[3] = temp[43] + src[59];
    dst[4] = temp[58] + src[60];
    dst[5] = temp[59] + src[61];
    dst[6] = temp[62] + src[62];
    dst[7] = temp[63] + src[63];
}
