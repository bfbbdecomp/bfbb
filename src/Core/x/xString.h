#ifndef XSTRING_H
#define XSTRING_H

#include <types.h>

struct substr
{
    int8* text;
    uint32 size;
};

uint32 xStrHash(const char* str);
uint32 xStrHash(const char* str, ulong32 size);
uint32 xStrHashCat(uint32 prefix, const char* str);
char* xStrupr(char* string);
int32 xStricmp(const int8* string1, const int8* string2);

int32 imemcmp(void const* d1, void const* d2, ulong32 size);
int32 icompare(const substr& s1, const substr& s2);

extern "C" {
uint32 tolower__21_esc__2_unnamed_esc__2_xString_cpp_esc__2_Fc(uint32 param_1);
uint32 tolower__21_esc__2_unnamed_esc__2_xString_cpp_esc__2_Fi(uint32 param_1);
}

#endif