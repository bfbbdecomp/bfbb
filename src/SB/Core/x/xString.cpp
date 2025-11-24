#include "xString.h"
#include "xMath.h"

#include <types.h>

U32 xStrHash(const char* str)
{
    U32 hash = 0;
    U32 i;

    while (i = *str, i != NULL)
    {
        hash = (i - (i & (S32)i >> 1 & 0x20) & 0xff) + hash * 0x83;
        str++;
    }

    return hash;
}

U32 xStrHash(const char* str, size_t size)
{
    U32 hash = 0;
    U32 i = 0;
    U32 c;

    while (i < size && (c = *str, c != NULL))
    {
        i++;
        str++;
        hash = (c - (c & (S32)c >> 1 & 0x20) & 0xff) + hash * 0x83;
    }

    return hash;
}

U32 xStrHashCat(U32 prefix, const char* str)
{
    U32 hash;
    U32 i;

    while (i = *str, i != NULL)
    {
        str++;
        hash = (i - (i & (S32)i >> 1 & 0x20) & 0xff) + hash * 0x83;
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

namespace
{
    U32 tolower(char param_1);
    U32 tolower(S32 param_1);
} // namespace

S32 imemcmp(void const* d1, void const* d2, size_t size)
{
    const char* s1 = (char*)d1;
    const char* s2 = (char*)d2;

    for (size_t i = 0; i < size; i++)
    {
        S32 cval1 = tolower(s1[i]);
        S32 cval2 = tolower(s2[i]);
        if (cval1 != cval2)
        {
            return cval1 - cval2;
}
}

    return 0;
}

namespace
{
    U32 tolower(char param_1)
    {
        return tolower((S32)param_1);
    }

    U32 tolower(S32 param_1)
{
    return param_1 | ((param_1 >> 1) & 32);
}
} // End anonymous namespace

S32 icompare(const substr& s1, const substr& s2)
{
    U32 len = MIN(s1.size, s2.size);
    S32 result = imemcmp(s1.text, s2.text, len);
    switch (result)
    {
        case 0:
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
        break;
    }
    return result;
}
