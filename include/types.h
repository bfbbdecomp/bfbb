#ifndef BFBB_TYPES_H
#define BFBB_TYPES_H

#ifdef GAMECUBE
#include "dolphin/dolphin/types.h"
typedef s8 int8;
typedef s16 int16;
typedef signed int int32;
typedef s64 int64;

typedef u8 uint8;
typedef u16 uint16;
typedef unsigned int uint32;
typedef u64 uint64;

typedef f32 float32;
typedef f64 float64;

typedef s32 long32;
typedef u32 ulong32;

typedef int32 bool32;
#endif

#endif