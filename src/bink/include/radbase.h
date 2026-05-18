#ifndef __RADBASEH__
#define __RADBASEH__

#define RADCOPYRIGHT "Copyright (C) 1994-2003, RAD Game Tools, Inc."

#define RADINLINE inline

#define RADLINK
#define RADEXPLINK
#define RADEXPFUNC RADDEFFUNC
#define PTR4

#ifndef RADDEFFUNC

#ifdef __cplusplus
#define RADDEFFUNC extern "C"
#define RADDEFSTART extern "C" {
#define RADDEFEND }
#define RADDEFINEDATA extern "C"
#define RADDECLAREDATA extern "C"
#define RADDEFAULT(val) = val
#else
#define RADDEFFUNC
#define RADDEFSTART
#define RADDEFEND
#define RADDEFINEDATA
#define RADDECLAREDATA extern
#define RADDEFAULT(val)
#endif

#endif

#define RAD_ATTRIBUTE_ALIGN(num) __attribute__((aligned(num)))

#define INTADDR signed long
#define UINTADDR unsigned long
#define SINTa signed long
#define UINTa unsigned long

#include <dolphin/types.h>

typedef void PTR4* (RADLINK PTR4* RADMEMALLOC)(u32 bytes);
typedef void (RADLINK PTR4* RADMEMFREE)(void PTR4* ptr);

RADEXPFUNC void RADEXPLINK RADSetMemory(RADMEMALLOC a, RADMEMFREE f);
RADEXPFUNC void PTR4* RADEXPLINK radmalloc(u32 numbytes);
RADEXPFUNC void RADEXPLINK radfree(void PTR4* ptr);

#endif
