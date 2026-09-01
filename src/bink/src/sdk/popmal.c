#include "popmal.h"
#include "binkngc.h"

#define PUSHMALLOC_STATIC_SLOTS 32
#define PUSHMALLOC_GROW_RECORD_BYTES 16
#define PUSHMALLOC_PTR_TABLE_BYTES 8
#define PUSHMALLOC_ALIGN_BITS 5
#define PUSHMALLOC_ALIGNMENT (1 << PUSHMALLOC_ALIGN_BITS)
#define PUSHMALLOC_ALIGN_MASK (PUSHMALLOC_ALIGNMENT - 1)
#define PUSHMALLOC_ALIGN_BIAS (PUSHMALLOC_ALIGNMENT + 1)

static void PTR4* PTR4* ptrs[PUSHMALLOC_STATIC_SLOTS];
static u32 amt[PUSHMALLOC_STATIC_SLOTS];

static u32 pushtot = 0;
static u32 pushcur = 0;
/* Pending suballocations: each entry stores the caller's pointer slot and byte count. */
static void PTR4* PTR4* PTR4* pushptr = ptrs;
static u32 PTR4* pushamt = amt;
static u32 cursize = PUSHMALLOC_STATIC_SLOTS;

void pushmalloc(void PTR4* PTR4* ptr, u32 amount)
{
    if (cursize == pushcur) {
        void PTR4* newmem = radmalloc(cursize * PUSHMALLOC_GROW_RECORD_BYTES);
        void PTR4* PTR4* PTR4* newptrs = (void PTR4* PTR4* PTR4*)newmem;
        u32 PTR4* newamt =
            (u32 PTR4*)((u8 PTR4*)newmem + (cursize * PUSHMALLOC_PTR_TABLE_BYTES));

        memcpy(newptrs, pushptr, cursize * sizeof(*pushptr));
        memcpy(newamt, pushamt, cursize * sizeof(*pushamt));

        cursize += cursize;
        if (cursize != PUSHMALLOC_STATIC_SLOTS * 2) {
            radfree(pushptr);
        }

        pushptr = newptrs;
        pushamt = newamt;
    }

    amount = Round32(amount);
    amount += ((((pushtot >> PUSHMALLOC_ALIGN_BITS) & PUSHMALLOC_ALIGN_MASK) -
                ((amount >> PUSHMALLOC_ALIGN_BITS) & PUSHMALLOC_ALIGN_MASK) +
                PUSHMALLOC_ALIGN_BIAS) &
               PUSHMALLOC_ALIGN_MASK)
              << PUSHMALLOC_ALIGN_BITS;

    pushtot += amount;
    pushamt[pushcur] = amount;
    {
        volatile u32 PTR4* cur = &pushcur;
        u32 slot = *cur;

        ((void PTR4* PTR4* volatile PTR4*)pushptr)[slot] = ptr;
        ++slot;
        *cur = slot;
    }
}

u32 popmalloctotal(void)
{
    return pushtot;
}

void PTR4* popmalloc(u32 amount)
{
    u32 i;
    u32 base = Round32(amount);
    void PTR4* mem = radmalloc(pushtot + base);

    pushtot = 0;

    if (mem != 0) {
        /* Lay out all queued allocations immediately after the base object. */
        u8 PTR4* cur = (u8 PTR4*)mem + base;

        for (i = 0; i < pushcur; ++i) {
            *pushptr[i] = cur;
            cur += pushamt[i];
        }
    }

    pushcur = 0;
    return mem;
}
