#ifndef _MSL_COMMON_ARITH_H
#define _MSL_COMMON_ARITH_H

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct
{
    int quot; /* quotient */
    int rem; /* remainder */
} div_t;

long abs(long __x);
long labs(long __x);
div_t div(s32 __numer, s32 __denom);

#ifdef __cplusplus
};
#endif

#endif
