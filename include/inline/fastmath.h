#ifndef __FASTMATH_H__
#define __FASTMATH_H__

#include <types.h>

#define RET_REG fp1
#define V1_XY fp2
#define V1_Z fp3
#define V2_XY fp4
#define V2_Z fp5
#define D1_XY fp6
#define D1_Z fp7
#define D2_XY fp8
#define D2_Z fp9
#define W1_XY fp10
#define W1_Z fp11
#define W2_XY fp12
#define W2_Z fp13

typedef struct
{
    float32 x, y, z;
} Vec;

// All this essentially does is do "*dst = *src;"
#define PSVECCopy(dst, src)                                                                        \
    asm {\
		psq_l fp0, 0(src), 0, 0; /* Load src->x and src->y into fp0. */ \
		psq_l fp1, 8(src), 1, 0; /* Load src->z only into fp1. */ \
		psq_st fp0, 0(dst), 0, 0; /* Store fp0 into dst->x and dst->y. */ \
		psq_st fp1, 8(dst), 1, 0; /* Store only the first half of fp1 into dst->z. */              \
    }

// I can't figure out how to get this as a C-style inline function, so use this in an ASM function or block.
#define PSVECDotProduct(vec1, vec2)                                                                \
    nofralloc;                                                                                     \
    psq_l fp2, 4(vec1), 0, 0;                                                                      \
    psq_l fp3, 4(vec2), 0, 0;                                                                      \
    ps_mul fp2, fp2, fp3;                                                                          \
    psq_l fp5, 0(vec1), 0, 0;                                                                      \
    psq_l fp4, 0(vec2), 0, 0;                                                                      \
    ps_madd fp3, fp5, fp4, fp2;                                                                    \
    ps_sum0 fp1, fp3, fp2, fp2;                                                                    \
    blr;

#endif