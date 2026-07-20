#include "binkngc.h"
#include "bink.h"
#include "dolphin/os/OSAlloc.h"
#include "dolphin/os/OSTime.h"

static RADMEMALLOC usermalloc = NULL;
static RADMEMFREE userfree = NULL;
static RADMEMALLOC userarammalloc = NULL;
static RADMEMFREE useraramfree = NULL;

/* OSGetTime runs at the GameCube timer clock: 40.5 MHz, or 40500 ticks/ms. */
#define RAD_TIMER_TICKS_PER_MS 40500
#define RAD_TIMER_HIGH_QUOTIENT 0x19e40
/* Reciprocal multiply constants for the remaining 64-bit ticks-to-ms division. */
#define RAD_TIMER_RECIP_MAGIC 0xCF2049A1
#define RAD_TIMER_RECIP_SHIFT 15
#define RAD_DIV_RECIP_NUMERATOR 0xFFFFFFFF
#define RAD_DIV_ROUND_TO_HIGH_WORD 0xFFFF
#define RAD_DIV_IS_POWER_OF_TWO(value) (((value) & ((value) - 1)) == 0)
#define RAD_DIV_HIGH_WORD_CEIL(value) (((value) + RAD_DIV_ROUND_TO_HIGH_WORD) >> 16)

#define RAD_ALLOC_ALIGNMENT 0x20
#define RAD_ALLOC_ALIGNMENT_MASK (RAD_ALLOC_ALIGNMENT - 1)
#define RAD_ALLOC_HEADER_SIZE 0x40
#define RAD_ALLOC_OFFSET_MASK 0xFF
#define RAD_INVALID_ALLOC_SIZE 0xFFFFFFFF
#define RAD_INVALID_USER_ALLOC ((void PTR4*)-1)
#define RAD_MEMSET16_PER_WORD 2
#define RAD_MEMSET16_WORD_SHIFT 16
#define RAD_TIMEBASE_HIGH_WORD 0
#define RAD_TIMEBASE_LOW_WORD 1

typedef enum RADAllocOwner
{
    RAD_ALLOC_SYSTEM_OWNED = 0,
    RAD_ALLOC_USER_OWNED = 3
} RADAllocOwner;

typedef struct RADAllocPrefix
{
    RADMEMFREE custom_free; /* Only valid for user-owned allocations. */
    u16 reserved;
    u8 owner;  /* RAD_ALLOC_SYSTEM_OWNED or RAD_ALLOC_USER_OWNED. */
    u8 offset; /* Bytes from the raw allocation to the aligned user pointer. */
} RADAllocPrefix;

typedef struct RADTimebase
{
    u32 high;
    u32 low;
} RADTimebase;

#define RAD_ALLOC_PREFIX(ptr) (((RADAllocPrefix PTR4*)(ptr)) - 1)
#define RAD_ALLOC_PREFIX_CUSTOM_FREE(ptr) (RAD_ALLOC_PREFIX(ptr)->custom_free)
#define RAD_ALLOC_PREFIX_OWNER(ptr) (RAD_ALLOC_PREFIX(ptr)->owner)
#define RAD_ALLOC_PREFIX_OFFSET(ptr) (RAD_ALLOC_PREFIX(ptr)->offset)
#define RAD_ALLOC_BASE(ptr) ((u8 PTR4*)(ptr) - RAD_ALLOC_PREFIX_OFFSET(ptr))

static inline u32 radcntlzw(u32 value)
{
    u32 result;
    __asm__("cntlzw %0, %1" : "=r"(result) : "r"(value));
    return result;
}

u32 mult64anddiv(u32 left, u32 right, u32 divisor)
{
    u32 hi;
    u32 lo;
    u32 quotient;

    __asm__("mulhwu %0, %2, %3\n\tmullw %1, %2, %3" : "=&r"(hi), "=&r"(lo) : "r"(left), "r"(right));

    /* Fast path for exact power-of-two divisors after the 64-bit multiply. */
    if (RAD_DIV_IS_POWER_OF_TWO(divisor)) {
        u32 clz = radcntlzw(divisor);
        lo >>= (31 - clz);
        hi <<= (clz + 1);
        return lo | hi;
    }

    {
        u32 recip = RAD_DIV_RECIP_NUMERATOR / divisor;
        u32 upper = RAD_DIV_HIGH_WORD_CEIL(divisor);

        quotient = 0;

        /* Estimate the high-word quotient first so the correction loop is small. */
        if (upper != 0) {
            u32 clz = radcntlzw(hi);
            u32 est = (hi << clz) / upper;
            s32 adj = 16 - (s32)clz;
            s32 sign = adj >> 31;
            u32 rshift = (u32)(-(s32)adj) & (u32)sign;
            u32 lshift = (u32)adj & ~(u32)sign;
            est = (est >> rshift) << lshift;
            quotient = est;
            {
                u32 prod_hi, prod_lo;
                __asm__("mulhwu %0, %2, %3\n\tmullw %1, %2, %3" : "=&r"(prod_hi), "=&r"(prod_lo) : "r"(est), "r"(divisor));
                __asm__("subfc %0, %3, %0\n\tsubfe %1, %2, %1" : "+r"(lo), "+r"(hi) : "r"(prod_hi), "r"(prod_lo));
            }
        }

        while (hi != 0) {
            u32 step = recip * hi;
            u32 prod_hi, prod_lo;
            __asm__("mulhwu %0, %2, %3\n\tmullw %1, %2, %3" : "=&r"(prod_hi), "=&r"(prod_lo) : "r"(step), "r"(divisor));
            __asm__("subfc %0, %3, %0\n\tsubfe %1, %2, %1" : "+r"(lo), "+r"(hi) : "r"(prod_hi), "r"(prod_lo));
            quotient += step;
        }

        quotient += lo / divisor;
    }

    return quotient;
}

u32 mult64andshift(u32 left, u32 right, u32 shift)
{
    u32 hi, lo;
    __asm__("mulhwu %1, %2, %3\n\tmullw %0, %2, %3" : "=&r"(lo), "=&r"(hi) : "r"(left), "r"(right));
    lo >>= shift;
    hi <<= (32 - shift);
    return lo | hi;
}

void radmemset16(void PTR4* dest, u16 value, u32 size) {
    int half_size = size >> (RAD_MEMSET16_PER_WORD - 1);
    int sprayed_value = (value << RAD_MEMSET16_WORD_SHIFT) | value;
    u16 PTR4* d16 = dest;
    u32 PTR4* d32 = dest;
    
    while (half_size--) {
        *d32++ = sprayed_value;
    }

    d16 = (u16 PTR4*)d32;
    if ((size & 1))
        *d16 = value;
}

u32 RADTimerRead(void)
{
    static OSTime starttime;
    OSTime now;
    u32 quotient;
    u32 high_prod;
    u32 low_prod;

    now = OSGetTime();

    if (starttime == 0) {
        starttime = now;
    }

    now -= starttime;
    /* Convert elapsed OS ticks to milliseconds without a full 64-bit divide. */
    quotient = (u32)(now >> 32) * RAD_TIMER_HIGH_QUOTIENT;
    now -= (u64)RAD_TIMER_TICKS_PER_MS * quotient;
    low_prod = (u32)(((u64)(u32)now * RAD_TIMER_RECIP_MAGIC) >> 32);
    high_prod = (u32)(now >> 32) * RAD_TIMER_RECIP_MAGIC;

    return quotient + ((low_prod + high_prod) >> RAD_TIMER_RECIP_SHIFT);
}

static inline void radtimebase(RADTimebase PTR4* dest)
{
    u32 h1, l, h2;
    /* Read TBU/TBL/TBU until the high word is stable across the low-word read. */
    __asm__ volatile(
        "0:\n\t"
        "mftb %0, 269\n\t"
        "mftb %1, 268\n\t"
        "mftb %2, 269\n\t"
        "cmpw %0, %2\n\t"
        "bne 0b\n\t"
        "stw %0, 0(%3)\n\t"
        "stw %1, 4(%3)"
        : "=&r"(h1), "=&r"(l), "=r"(h2)
        : "r"(dest)
        : "memory"
    );
}

void RADCycleTimerStartAddr(u32 PTR4* dest)
{
    RADTimebase tb;
    radtimebase(&tb);
    *dest = tb.low;
}

u32 RADCycleTimerDeltaAddr(u32 PTR4* dest)
{
    RADTimebase tb;
    u32 delta;
    radtimebase(&tb);
    delta = tb.low - *dest;
    *dest = delta;
    return delta;
}

void RADCycleTimerStartAddr64(u64 PTR4* dest)
{
    radtimebase((RADTimebase PTR4*)dest);
}

void RADCycleTimerDeltaAddr64(u64 PTR4* dest)
{
    RADTimebase tb;
    u32 PTR4* delta = (u32 PTR4*)dest;
    u32 prevhi, prevlo, nowhi, nowlo;
    u32 dlo, dhi;
    radtimebase(&tb);
    nowlo = tb.low;
    prevhi = delta[RAD_TIMEBASE_HIGH_WORD];
    prevlo = delta[RAD_TIMEBASE_LOW_WORD];
    nowhi = tb.high;
    /* Store the unsigned 64-bit delta in the same high/low memory layout. */
    __asm__("subfc %0, %2, %4\n\tsubfe %1, %3, %5" : "=r"(dlo), "=r"(dhi) : "r"(prevlo), "r"(prevhi), "r"(nowlo), "r"(nowhi));
    delta[RAD_TIMEBASE_LOW_WORD] = dlo;
    delta[RAD_TIMEBASE_HIGH_WORD] = dhi;
}

void ReadTimeBase(u32 PTR4* dest)
{
    radtimebase((RADTimebase PTR4*)dest);
}

void RADSetMemory(RADMEMALLOC malloc_fn, RADMEMFREE free_fn) {
    usermalloc = malloc_fn;
    userfree = free_fn;
}

void PTR4* radmalloc(u32 size)
{
    u32 request;
    void PTR4* rawBlock;
    u8 fromUser;
    u32 addr;
    u32 offset;
    u8 PTR4* aligned;

    if (size == 0 || size == RAD_INVALID_ALLOC_SIZE)
        return 0;
    /* Reserve room for the prefix and enough slack to return a 32-byte aligned pointer. */
    request   = size + RAD_ALLOC_HEADER_SIZE;
    if (usermalloc != 0 && (rawBlock = usermalloc(request))) {
        if (rawBlock != 0 && rawBlock != RAD_INVALID_USER_ALLOC) {
            fromUser = RAD_ALLOC_USER_OWNED;
        } else {
            return 0;
        }
    } else {
        rawBlock = OSAllocFromHeap(__OSCurrHeap, request);
        if (rawBlock == 0) {
            return 0;
        }
        fromUser= RAD_ALLOC_SYSTEM_OWNED;
    }
    addr    = (u32)rawBlock;
    offset  = (u32)(RAD_ALLOC_HEADER_SIZE - (addr & RAD_ALLOC_ALIGNMENT_MASK)) & RAD_ALLOC_OFFSET_MASK;
    aligned  = (u8 PTR4*)rawBlock + offset;
    RAD_ALLOC_PREFIX(aligned)->offset = (u8)offset;
    RAD_ALLOC_PREFIX(aligned)->owner = fromUser;
    if (fromUser == RAD_ALLOC_USER_OWNED)
        RAD_ALLOC_PREFIX(aligned)->custom_free = userfree;
    return aligned;
}

void radfree(void PTR4* ptr)
{
    u8 PTR4* ptrU8 = (u8 PTR4*)ptr;
    RADMEMFREE custom_free;

    if (ptr)
    {
        if (RAD_ALLOC_PREFIX_OWNER(ptrU8) == RAD_ALLOC_USER_OWNED)
        {
            custom_free = RAD_ALLOC_PREFIX_CUSTOM_FREE(ptrU8);
            custom_free(RAD_ALLOC_BASE(ptrU8));
        }
        else
        {
            OSFreeToHeap(__OSCurrHeap, RAD_ALLOC_BASE(ptrU8));
        }
    }
}

void RADSetAudioMemory(RADMEMALLOC malloc_fn, RADMEMFREE free_fn) {
    userarammalloc = malloc_fn;
    useraramfree = free_fn;
}

void PTR4* radaudiomalloc(u32 size) {
    /* Bink's GameCube sound path expects the client to provide ARAM allocation hooks. */
    if (userarammalloc) {
        return userarammalloc(size);
    }
    return NULL;
}

void radaudiofree(void PTR4* ptr) {
    if (useraramfree) {
        useraramfree(ptr);
    }
}

u32 div64(u32 high, u32 low, u32 divisor)
{
    u32 hi = high;
    u32 quotient;

    /* 64-bit numerator, 32-bit divisor helper used by the Bink platform layer. */
    if (RAD_DIV_IS_POWER_OF_TWO(divisor)) {
        u32 clz = radcntlzw(divisor);
        return (low >> (31 - clz)) | (hi << (clz + 1));
    }

    {
        u32 recip = RAD_DIV_RECIP_NUMERATOR / divisor;
        u32 upper = RAD_DIV_HIGH_WORD_CEIL(divisor);

        quotient = 0;

        if (upper != 0) {
            u32 clz = radcntlzw(hi);
            u32 est = (hi << clz) / upper;
            s32 adj = 16 - (s32)clz;
            s32 sign = adj >> 31;
            u32 rshift = (u32)(-(s32)adj) & (u32)sign;
            u32 lshift = (u32)adj & ~(u32)sign;
            est = (est >> rshift) << lshift;
            quotient = est;
            {
                u32 prod_hi, prod_lo;
                __asm__("mulhwu %0, %2, %3\n\tmullw %1, %2, %3" : "=&r"(prod_hi), "=&r"(prod_lo) : "r"(est), "r"(divisor));
                __asm__("subfc %0, %3, %0\n\tsubfe %1, %2, %1" : "+r"(low), "+r"(hi) : "r"(prod_hi), "r"(prod_lo));
            }
        }

        while (hi != 0) {
            u32 step = recip * hi;
            u32 prod_hi, prod_lo;
            __asm__("mulhwu %0, %2, %3\n\tmullw %1, %2, %3" : "=&r"(prod_hi), "=&r"(prod_lo) : "r"(step), "r"(divisor));
            __asm__("subfc %0, %3, %0\n\tsubfe %1, %2, %1" : "+r"(low), "+r"(hi) : "r"(prod_hi), "r"(prod_lo));
            quotient += step;
        }

        quotient += low / divisor;
    }

    return quotient;
}
