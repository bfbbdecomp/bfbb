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

// func_8004C2D0
#pragma GLOBAL_ASM("asm/Core/x/xString.s", "xStrTok__FPcPCcPPc")

// func_8004C434
#pragma GLOBAL_ASM("asm/Core/x/xString.s", "xStrTokBuffer__FPCcPCcPv")

// func_8004C5AC
#pragma GLOBAL_ASM("asm/Core/x/xString.s", "xStricmp__FPCcPCc")

int8* xStrupr(int8* string)
{
    int8 p;

    while (p = *string, p != NULL)
    {
        bool isLowercase = false;

        // check if between lowercase ascii a-z
        if ((p >= 97) && (p <= 122))
        {
            isLowercase = true;
        }

        if (isLowercase)
        {
            // Uppercase ascii character is offset by 32
            p -= 32;
        }

        *string = p;
        string++;
    }
}

// func_8004C6E8
#pragma GLOBAL_ASM("asm/Core/x/xString.s", "xStrParseFloatList__FPfPCci")

// func_8004C88C
#pragma GLOBAL_ASM("asm/Core/x/xString.s", "imemcmp__FPCvPCvUl")

// @unnamed@xString_cpp@::tolower(char)
extern "C" {
uint32 tolower__21_esc__2_unnamed_esc__2_xString_cpp_esc__2_Fc(uint32 param_1)
{
    tolower__21_esc__2_unnamed_esc__2_xString_cpp_esc__2_Fi(param_1 & 0xff);
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

// func_8004C934
#pragma GLOBAL_ASM("asm/Core/x/xString.s", "icompare__FRC6substrRC6substr")

// func_8004C9B8
#pragma GLOBAL_ASM("asm/Core/x/xString.s", "atox__FRC6substrRUl")

// func_8004CA68
#pragma GLOBAL_ASM("asm/Core/x/xString.s", "find_char__FRC6substrRC6substr")
