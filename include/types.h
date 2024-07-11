#ifndef BFBB_TYPES_H
#define BFBB_TYPES_H

// Note: only include this header inside BFBB-related headers/source code files.
// Don't include this in any RenderWare, system, bink, etc. files

#ifdef GAMECUBE
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef signed long long S64;

typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned long long U64;

typedef float F32;
typedef double F64;
#endif

#ifdef NULL
#undef NULL
#endif
#define NULL 0

#ifdef TRUE
#undef TRUE
#endif
#define TRUE 1

#ifdef FALSE
#undef FALSE
#endif
#define FALSE 0

#ifdef __MWERKS__
#define __declspec(x)
// #define asm
#endif

#define WEAK __declspec(weak)

#endif
