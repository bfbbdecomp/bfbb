#include "xString.h"

#include <types.h>

uint32 xStrHash(const int8* str)
{
    uint32 hash = 0;
    uint32 i;

    while (i = *str, i != NULL)
    {
        hash = (i - (i & (int32)i >> 1 & 0x20) & 0xff) + hash * 0x83;
        str++;
    }

    return hash;
}

uint32 xStrHash(const int8* str, ulong32 size)
{
    uint32 hash = 0;
    uint32 i = 0;
    uint32 c;

    while (i < size && (c = *str, c != NULL))
    {
        i++;
        str++;
        hash = (c - (c & (int32)c >> 1 & 0x20) & 0xff) + hash * 0x83;
    }

    return hash;
}

uint32 xStrHashCat(uint32 prefix, const int8* str)
{
    uint32 hash;
    uint32 i;

    while (i = *str, i != NULL)
    {
        str++;
        hash = (i - (i & (int32)i >> 1 & 0x20) & 0xff) + hash * 0x83;
    }

    return hash;
}

char* xStrupr(char* string)
{
    char* p = string;

    while (*p != '\0')
    {
        *p = (*p >= 'a' && *p <= 'z' ? *p - 32 : *p);

        p++;
    }

    return string;
}

// @unnamed@xString_cpp@::tolower(char)
extern "C" {
uint32 tolower__21_esc__2_unnamed_esc__2_xString_cpp_esc__2_Fc(uint32 param_1)
{
    return tolower__21_esc__2_unnamed_esc__2_xString_cpp_esc__2_Fi(param_1 & 0xff);
}
}

// @unnamed@xString_cpp@::tolower(int)
extern "C" {
uint32 tolower__21_esc__2_unnamed_esc__2_xString_cpp_esc__2_Fi(uint32 param_1)
{
    return param_1 | ((param_1 >> 1) & 32);
}
}

/*
// Non-matching
int32 icompare(const substr& s1, const substr& s2)
{
    int32 result;
    uint32 len;

    len = s2.size;

    if (s1.size < s2.size)
    {
        len = s1.size;
    }

    result = imemcmp(s1.text, s2.text, len);

    if (result == 0)
    {
        if (s1.size == s2.size)
        {
            result = 0;
        }
        else
        {
            result = 1;
            if (s1.size < s2.size)
            {
                result = -1;
            }
        }
    }
    return result;
}
*/
