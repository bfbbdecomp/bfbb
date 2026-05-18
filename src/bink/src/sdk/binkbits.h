#ifndef BINK_SDK_BINKBITS_H
#define BINK_SDK_BINKBITS_H

#include "bink.h"

typedef struct BINKVARBITS
{
    void PTR4* cur; /* Next word in the packed stream. */
    u32 bits;       /* Low-order bit reservoir. */
    u32 bitlen;     /* Valid bits currently in the reservoir. */
} BINKVARBITS;

#define BINKBITSLOCALS(name)                                                                      \
    void PTR4* name##cur;                                                                         \
    u32 name##bits;                                                                               \
    u32 name##bitlen

/* Local BinkBits state uses the same cur/bits/bitlen fields as BINKVARBITS. */
#define BINK_LOAD32(ptr) (*(const u32 PTR4*)(ptr))

#define BinkVarBitsOpen(vb, pointer)                                                              \
    do {                                                                                          \
        (vb).bits = BINK_LOAD32(pointer);                                                         \
        (vb).cur = ((u8 PTR4*)(pointer)) + 4;                                                      \
        (vb).bitlen = 32;                                                                         \
    } while (0)

#define BinkBitsGet(v, type, vb, len, mask)                                                       \
    do {                                                                                          \
        if (vb##bitlen < (len)) {                                                                 \
            register u32 nb = BINK_LOAD32((u32 PTR4*)vb##cur);                                    \
            (v) = (type)((vb##bits | (nb << vb##bitlen)) & (mask));                               \
            vb##bits = nb >> ((len)-vb##bitlen);                                                  \
            vb##bitlen = vb##bitlen + 32 - (len);                                                 \
            vb##cur = ((u8 PTR4*)vb##cur) + 4;                                                    \
        } else {                                                                                  \
            (v) = (type)(vb##bits & (mask));                                                      \
            vb##bits >>= (len);                                                                   \
            vb##bitlen -= (len);                                                                  \
        }                                                                                         \
    } while (0)

#define MAX_AT_LEAST_BITS 32

#define BinkBitsAtLeastStart(vb, len)                                                             \
    do {                                                                                          \
        if (vb##bitlen < (len)) {                                                                 \
            u32 nb = BINK_LOAD32((u32 PTR4*)vb##cur);                                             \
            vb##bits |= nb << vb##bitlen;                                                         \
        }                                                                                         \
    } while (0)

#define BinkBitsAtLeastEnd(vb)                                                                    \
    do {                                                                                          \
        if ((s32)vb##bitlen <= 0) {                                                               \
            vb##bits = BINK_LOAD32((u32 PTR4*)vb##cur) >> (-(s32)vb##bitlen);                     \
            vb##cur = ((u8 PTR4*)vb##cur) + 4;                                                    \
            vb##bitlen += 32;                                                                     \
        }                                                                                         \
    } while (0)

#define BINKBITSCOPY(name, from)                                                                  \
    do {                                                                                          \
        name##cur = from##cur;                                                                    \
        name##bits = from##bits;                                                                  \
        name##bitlen = from##bitlen;                                                              \
    } while (0)

#define BinkBitsInAtLeastPeek(vb) (vb##bits)
#define BinkBitsInAtLeastUse(vb, bl)                                                              \
    do {                                                                                          \
        vb##bits >>= (bl);                                                                        \
        vb##bitlen -= (bl);                                                                       \
    } while (0)

#define BinkBitsPeek(v, type, vb, len)                                                            \
    do {                                                                                          \
        BinkBitsAtLeastStart(vb, len);                                                            \
        (v) = (type)BinkBitsInAtLeastPeek(vb);                                                    \
    } while (0)

#define BinkBitsUse(vb, bl)                                                                       \
    do {                                                                                          \
        BinkBitsInAtLeastUse(vb, bl);                                                             \
        BinkBitsAtLeastEnd(vb);                                                                   \
    } while (0)

#define BinkVarBitsUse(vb, len)                                                                   \
    do {                                                                                          \
        (vb).bits >>= (len);                                                                      \
        (vb).bitlen -= (len);                                                                     \
    } while (0)

/* Copy between the struct form used by VarBits and the local BinkBits form. */
#define VarBitsCopyToBinkBits(local, vb)                                                          \
    do {                                                                                          \
        local##cur = (vb).cur;                                                                    \
        local##bits = (vb).bits;                                                                  \
        local##bitlen = (vb).bitlen;                                                              \
    } while (0)

#define BinkBitsCopyToVarBits(vb, local)                                                          \
    do {                                                                                          \
        (vb).cur = local##cur;                                                                    \
        (vb).bits = local##bits;                                                                  \
        (vb).bitlen = local##bitlen;                                                              \
    } while (0)

/* Return the consumed byte count rounded up to a 32-bit word boundary. */
#define BinkBitsSizeBytesRoundedToU32(local, base)                                                \
    ((((((u8 PTR4*)local##cur) - ((u8 PTR4*)(base))) - (local##bitlen / 8)) + 3) & ~3)

#define BinkVarBitsSizeBytesRoundedToU32(vb, base)                                                \
    ((((((u8 PTR4*)(vb).cur) - ((u8 PTR4*)(base))) - ((vb).bitlen / 8)) + 3) & ~3)

#endif
