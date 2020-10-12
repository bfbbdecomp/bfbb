#ifndef XSTRING_H
#define XSTRING_H

#include <types.h>

struct substr
{
    int8* text;
    uint32 size;
};

uint32 xStrHash(const int8* str);
uint32 xStrHash(const int8* str, ulong32 size);
uint32 xStrHashCat(uint32 prefix, const int8* str);
int8* xStrupr(int8* string);

int32 imemcmp(void const* d1, void const* d2, ulong32 size);

extern "C" {
uint32 tolower__21_esc__2_unnamed_esc__2_xString_cpp_esc__2_Fc(uint32 param_1);
uint32 tolower__21_esc__2_unnamed_esc__2_xString_cpp_esc__2_Fi(uint32 param_1);
}

#endif