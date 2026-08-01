#ifndef BINK_SDK_VARBITS_H
#define BINK_SDK_VARBITS_H

#include "bink.h"

typedef u32 BITSTYPE;

#define BITSTYPELEN 32
#define BITSTYPEBYTES 4
#define BITSTOPMASK (1UL << (BITSTYPELEN - 1))
typedef BITSTYPE VARBITSTEMP;

/*
 * VARBITS can either live in a struct, or in local variables set up by
 * VARBITSLOCAL(name). The local macros build variable names with ##.
 */
#define VARBITSLOCAL(name)                                                                        \
    u32 PTR4* name##cur;                                                                          \
    BITSTYPE name##bits;                                                                          \
    u32 name##bitlen

typedef struct VARBITS
{
    u32 PTR4* cur;  /* Next source/dest word. */
    u32 PTR4* init; /* Original stream base for size/position calculations. */
    BITSTYPE bits; /* Low-order bit reservoir. */
    u32 bitlen;    /* Valid bits currently in the reservoir. */
} VARBITS;

typedef struct VARBITSEND
{
    u32 PTR4* cur;
    u32 PTR4* init;
    BITSTYPE bits;
    u32 bitlen;
    /* The macros do not update end; decoders carry it for bounds checks. */
    u32 PTR4* end;
} VARBITSEND;

extern const u32 VarBitsLens[BITSTYPELEN + 1];

#define VARBITS_ADVANCE_CUR(cur) ((cur) = (u32 PTR4*)((u8 PTR4*)(cur) + BITSTYPEBYTES))

/*
 * GetBitsLen(bits) = (1 << bits) - 1, except that bits == 32 is supported
 * and bits == 0 is not safe.
 */
#define GetBitsLen(val) (((u32)0xffffffff) >> (u32)(BITSTYPELEN - (val)))

/*
 * getbitlevel(n) is the number of bits that n uses for its on bits.
 * NOTE: getbitlevel(0) = 0.
 */
static RADINLINE u32 getbitlevelvar(register u32 value)
{
    u32 leading;

    __asm__ volatile("cntlzw %0,%1" : "=r"(leading) : "r"(value));
    return BITSTYPELEN - leading;
}

#define VarBitsOpen(vb, pointer)                                                                  \
    do {                                                                                          \
        (vb).cur = (vb).init = (pointer);                                                         \
        (vb).bits = 0;                                                                            \
        (vb).bitlen = 0;                                                                          \
    } while (0)

#define VarBitsLocalOpen(vb, pointer)                                                             \
    do {                                                                                          \
        vb##cur = (pointer);                                                                      \
        vb##bits = 0;                                                                             \
        vb##bitlen = 0;                                                                           \
    } while (0)

#define VarBitsPut(vb, val, size)                                                                 \
    {                                                                                             \
        u32 __s = size;                                                                           \
        u32 __v = (val) & VarBitsLens[__s];                                                       \
        (vb).bits |= __v << ((vb).bitlen);                                                        \
        (vb).bitlen += __s;                                                                       \
        if ((vb).bitlen >= BITSTYPELEN) {                                                         \
            *((vb).cur) = (vb).bits;                                                              \
            VARBITS_ADVANCE_CUR((vb).cur);                                                        \
            (vb).bitlen -= BITSTYPELEN;                                                           \
            if ((vb).bitlen) {                                                                    \
                (vb).bits = __v >> (__s - (vb).bitlen);                                           \
            } else {                                                                               \
                (vb).bits = 0;                                                                    \
            }                                                                                     \
        }                                                                                         \
    }

#define VarBitsPut1(vb, boolean)                                                                  \
    do {                                                                                          \
        if (boolean) {                                                                            \
            (vb).bits |= (1 << (vb).bitlen);                                                      \
        }                                                                                         \
        if (++(vb).bitlen == BITSTYPELEN) {                                                       \
            *((vb).cur) = (vb).bits;                                                              \
            VARBITS_ADVANCE_CUR((vb).cur);                                                        \
            (vb).bits = 0;                                                                        \
            (vb).bitlen = 0;                                                                      \
        }                                                                                         \
    } while (0)

#define VarBitsPuta1(vb)                                                                           \
    do {                                                                                           \
        (vb).bits |= (1 << (vb).bitlen);                                                           \
        if (++(vb).bitlen == BITSTYPELEN) {                                                        \
            *((vb).cur) = (vb).bits;                                                               \
            VARBITS_ADVANCE_CUR((vb).cur);                                                         \
            (vb).bits = 0;                                                                         \
            (vb).bitlen = 0;                                                                       \
        }                                                                                          \
    } while (0)

#define VarBitsPuta0(vb)                                                                           \
    do {                                                                                           \
        if (++(vb).bitlen == BITSTYPELEN) {                                                        \
            *((vb).cur) = (vb).bits;                                                               \
            VARBITS_ADVANCE_CUR((vb).cur);                                                         \
            (vb).bits = 0;                                                                         \
            (vb).bitlen = 0;                                                                       \
        }                                                                                          \
    } while (0)

#define VarBitsPutAlign(vb)                                                                       \
    do {                                                                                          \
        u32 __s2 = (BITSTYPELEN - (vb).bitlen) & (BITSTYPELEN - 1);                                \
        if (__s2) {                                                                               \
            VarBitsPut((vb), 0, __s2);                                                            \
        }                                                                                         \
    } while (0)

#define VarBitsFlushtoMemOnly(vb)                                                                 \
    do {                                                                                          \
        if ((vb).bitlen) {                                                                        \
            *((vb).cur) = (vb).bits;                                                              \
        }                                                                                         \
    } while (0)

#define VarBitsConvertPutToGet(gvb, pvb)                                                          \
    do {                                                                                          \
        if ((pvb).bitlen) {                                                                       \
            (gvb).bits = *((pvb).cur) >> (pvb).bitlen;                                            \
            (gvb).bitlen = BITSTYPELEN - (pvb).bitlen;                                           \
            (gvb).cur = (u32 PTR4*)((u8 PTR4*)(pvb).cur + BITSTYPEBYTES);                         \
        } else {                                                                                  \
            (gvb).bits = 0;                                                                       \
            (gvb).bitlen = 0;                                                                     \
            (gvb).cur = (pvb).cur;                                                                \
        }                                                                                         \
        (gvb).init = (pvb).init;                                                                  \
    } while (0)

#define VarBitsFlush(vb) VarBitsPutAlign(vb)
/* Total bits written from init through the current reservoir. */
#define VarBitsSize(vb) ((u32)((((u8 PTR4*)(vb).cur) - ((u8 PTR4*)(vb).init)) * 8 + (vb).bitlen))

#define VarBitsGet(val, type, vb, size)                                                           \
    {                                                                                             \
        u32 __s = (size);                                                                         \
        u32 __count = (vb).bitlen;                                                                \
        if (__count >= __s) {                                                                     \
            (val) = (type)(((vb).bits) & GetBitsLen(__s));                                        \
            ((vb).bits) >>= __s;                                                                  \
            ((vb).bitlen) = __count - __s;                                                        \
        } else {                                                                                  \
            register VARBITSTEMP __word = *((vb).cur);                                            \
            (val) = (type)((((vb).bits) | (__word << __count)) & GetBitsLen(__s));                \
            ((vb).bits) = __word >> (__s - __count);                                              \
            ((vb).bitlen) = __count + BITSTYPELEN - __s;                                          \
            VARBITS_ADVANCE_CUR((vb).cur);                                                        \
        }                                                                                         \
    }

#define VarBitsGetWithCheck(val, type, vb, size, endp, dowhat)                                    \
    do {                                                                                          \
        u32 __s = (size);                                                                         \
        u32 __count = (vb).bitlen;                                                                \
        if (__count < __s) {                                                                      \
            VARBITSTEMP __word;                                                                   \
            if ((u8 PTR4*)(vb).cur >= (u8 PTR4*)(endp)) {                                         \
                dowhat                                                                            \
            }                                                                                     \
            __word = *((vb).cur);                                                                 \
            (val) = (type)(((vb).bits | (__word << __count)) & GetBitsLen(__s));                  \
            (vb).bits = __word >> (__s - __count);                                                \
            (vb).bitlen = __count + BITSTYPELEN - __s;                                            \
            VARBITS_ADVANCE_CUR((vb).cur);                                                        \
        } else {                                                                                  \
            (val) = (type)((vb).bits & GetBitsLen(__s));                                          \
            (vb).bits >>= __s;                                                                    \
            (vb).bitlen = __count - __s;                                                          \
        }                                                                                         \
    } while (0)

/*
 * Get one bit. The temp receives unmasked bits for scratch use; the expression
 * result is the actual bit.
 */
#define VarBitsGet1(vb, temp)                                                                     \
    (((vb).bitlen == 0)                                                                           \
         ? ((temp) = *((vb).cur), VARBITS_ADVANCE_CUR((vb).cur),                                  \
            (vb).bits = ((VARBITSTEMP)(temp)) >> 1, (vb).bitlen = BITSTYPELEN - 1)                \
         : ((temp) = (vb).bits, (vb).bits >>= 1, --(vb).bitlen),                                  \
     ((temp) & 1))

#define VarBitsPeek(val, type, vb, size)                                                          \
    do {                                                                                          \
        u32 __s = (size);                                                                         \
        u32 __count = (vb).bitlen;                                                                \
        if (__count < __s) {                                                                      \
            VARBITSTEMP __word = *((vb).cur);                                                     \
            (val) = (type)(((vb).bits | (__word << __count)) & GetBitsLen(__s));                  \
        } else {                                                                                  \
            (val) = (type)((vb).bits & GetBitsLen(__s));                                          \
        }                                                                                         \
    } while (0)

#define VarBitsUse(vb, size)                                                                      \
    do {                                                                                          \
        u32 __s = (size);                                                                         \
        u32 __count = (vb).bitlen;                                                                \
        if (__count < __s) {                                                                      \
            VARBITSTEMP __word = *((vb).cur);                                                     \
            (vb).bits = __word >> (__s - __count);                                                \
            (vb).bitlen = __count + BITSTYPELEN - __s;                                            \
            VARBITS_ADVANCE_CUR((vb).cur);                                                        \
        } else {                                                                                  \
            (vb).bits >>= __s;                                                                    \
            (vb).bitlen = __count - __s;                                                          \
        }                                                                                         \
    } while (0)

#define VarBitsCopyToLocal(local, vb)                                                             \
    do {                                                                                          \
        local##cur = (vb).cur;                                                                    \
        local##bits = (vb).bits;                                                                  \
        local##bitlen = (vb).bitlen;                                                              \
    } while (0)

#define VarBitsCopyFromLocal(vb, local)                                                           \
    do {                                                                                          \
        (vb).cur = local##cur;                                                                    \
        (vb).bits = local##bits;                                                                  \
        (vb).bitlen = local##bitlen;                                                              \
    } while (0)

#define VarBitsLocalGet(val, type, vb, size)                                                      \
    do {                                                                                          \
        u32 __s = (size);                                                                         \
        u32 __count = vb##bitlen;                                                                 \
        if (__count < __s) {                                                                      \
            VARBITSTEMP __word = *vb##cur;                                                        \
            (val) = (type)((vb##bits | (__word << __count)) & GetBitsLen(__s));                   \
            vb##bits = __word >> (__s - __count);                                                 \
            vb##bitlen = __count + BITSTYPELEN - __s;                                             \
            VARBITS_ADVANCE_CUR(vb##cur);                                                         \
        } else {                                                                                  \
            (val) = (type)(vb##bits & GetBitsLen(__s));                                           \
            vb##bits >>= __s;                                                                     \
            vb##bitlen = __count - __s;                                                           \
        }                                                                                         \
    } while (0)

#define VarBitsLocalPeek(val, type, vb, size)                                                     \
    do {                                                                                          \
        u32 __s = (size);                                                                         \
        u32 __count = vb##bitlen;                                                                 \
        if (__count < __s) {                                                                      \
            VARBITSTEMP __word = *vb##cur;                                                        \
            (val) = (type)((vb##bits | (__word << __count)) & GetBitsLen(__s));                   \
        } else {                                                                                  \
            (val) = (type)(vb##bits & GetBitsLen(__s));                                           \
        }                                                                                         \
    } while (0)

#define VarBitsLocalUse(vb, size)                                                                 \
    do {                                                                                          \
        u32 __s = (size);                                                                         \
        u32 __count = vb##bitlen;                                                                 \
        if (__count < __s) {                                                                      \
            VARBITSTEMP __word = *vb##cur;                                                        \
            vb##bits = __word >> (__s - __count);                                                 \
            vb##bitlen = __count + BITSTYPELEN - __s;                                             \
            VARBITS_ADVANCE_CUR(vb##cur);                                                         \
        } else {                                                                                  \
            vb##bits >>= __s;                                                                     \
            vb##bitlen = __count - __s;                                                           \
        }                                                                                         \
    } while (0)

#define VarBitsLocalGetWithCheckBase(val, type, vb, size, mask, endp, dowhat, load)               \
    do {                                                                                          \
        u32 __s = (size);                                                                         \
        u32 __count = vb##bitlen;                                                                 \
        if (__count < __s) {                                                                      \
            VARBITSTEMP __word;                                                                   \
            if ((u8 PTR4*)vb##cur >= (u8 PTR4*)(endp)) {                                          \
                dowhat                                                                            \
            }                                                                                     \
            __word = load(vb##cur);                                                               \
            (val) = (type)((vb##bits | (__word << __count)) & (mask));                            \
            vb##bits = __word >> (__s - __count);                                                 \
            vb##bitlen = __count + BITSTYPELEN - __s;                                             \
            VARBITS_ADVANCE_CUR(vb##cur);                                                         \
        } else {                                                                                  \
            (val) = (type)(vb##bits & (mask));                                                    \
            vb##bits >>= __s;                                                                     \
            vb##bitlen = __count - __s;                                                           \
        }                                                                                         \
    } while (0)

#define radloadbitsnative(ptr) (*(BITSTYPE PTR4*)(ptr))
#define VarBitsLocalGetWithCheck(val, type, vb, size, endp, dowhat)                               \
    VarBitsLocalGetWithCheckBase(val, type, vb, size, GetBitsLen(size), endp, dowhat,             \
                                 radloadbitsnative)
#define VarBitsLocalGetWithCheckM(val, type, vb, size, mask, endp, dowhat)                        \
    VarBitsLocalGetWithCheckBase(val, type, vb, size, mask, endp, dowhat, radloadbitsnative)

#define VarBitsLocalGet1(vb, temp)                                                                \
    ((vb##bitlen == 0)                                                                            \
         ? ((temp) = *vb##cur, VARBITS_ADVANCE_CUR(vb##cur),                                      \
            vb##bits = ((VARBITSTEMP)(temp)) >> 1, vb##bitlen = BITSTYPELEN - 1)                  \
         : ((temp) = vb##bits, vb##bits >>= 1, --vb##bitlen),                                     \
     ((temp) & 1))

#define VarBitsLocalFill1WithCheck(vb, endp, cond, dowhat)                                        \
    do {                                                                                          \
        if (vb##bitlen == 0 && (cond)) {                                                          \
            if ((u8 PTR4*)vb##cur >= (u8 PTR4*)(endp)) {                                          \
                dowhat                                                                            \
            }                                                                                     \
            vb##bits = radloadbitsnative(vb##cur);                                                \
            VARBITS_ADVANCE_CUR(vb##cur);                                                         \
            vb##bitlen = BITSTYPELEN;                                                             \
        }                                                                                         \
    } while (0)

#define VarBitsLocalGet1WithCheck(val, vb, endp, dowhat)                                          \
    do {                                                                                          \
        VarBitsLocalFill1WithCheck(vb, endp, 1, dowhat);                                          \
        --vb##bitlen;                                                                             \
        (val) = vb##bits & 1;                                                                     \
        vb##bits >>= 1;                                                                           \
    } while (0)

#define VarBitsLocalPos(vb, origvb)                                                               \
    ((u32)((((u8 PTR4*)vb##cur) - ((u8 PTR4*)(origvb)->init)) * 8 + (BITSTYPELEN - vb##bitlen)))

#define VarBitsGetAlign(vb)                                                                       \
    do {                                                                                          \
        (vb).bitlen = 0;                                                                          \
    } while (0)

/* Current read bit position relative to init. */
#define VarBitsPos(vb) ((u32)((((u8 PTR4*)(vb).cur) - ((u8 PTR4*)(vb).init)) * 8 - (vb).bitlen))

#define CLASSIFY_SIGN(val)                                                                        \
    ((((u32)((s32)(val))) >> 31) + ((((u32)(-(s32)(val))) >> 30) & 2))

/* VarBitsCopy size is in bits; don't use this for big copies. */
void VarBitsCopy(VARBITS PTR4* dest, VARBITS PTR4* src, u32 size);

#endif
