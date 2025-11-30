#include "xString.h"
#include "rwplcore.h"
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

char* xStrTok(char* string, const char* control, char** nextoken)
{
    U8* str;
    U8* ctrl;
    U8 map[32];
    S32 count;

    for (S32 i = 0; i < 32; i++)
    {
        map[i] = 0;
    }

    ctrl = (U8*)control;

    do
    {
        map[*ctrl >> 3] |= 1 << (*ctrl & 0x7);
    } while (*ctrl++ != '\0');

    str = (string) ? (U8*)string : (U8*)*nextoken;

    while (map[(*str >> 3) & 0x1F] & (1 << (*str & 0x7)) && *str != '\0')
    {
        str++;
    }

    string = (char*)str;

    while (*str != '\0')
    {
        if (map[(*str >> 3) & 0x1F] & (1 << (*str & 0x7)))
        {
            *str = '\0';
            str++;
            break;
        }

        str++;
    }

    *nextoken = (char*)str;

    if (string == (char*)str)
    {
        string = NULL;
    }

    return string;
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

S32 xStrParseFloatList(F32* dest, const char* strbuf, S32 max)
{
    char* str = (char*)strbuf;
    S32 index;
    S32 digits;
    bool negate;
    char* numstart;
    char savech;

    if (!str)
    {
        return 0;
    }

    for (index = 0; *str != '\0' && index < max; index++)
    {
        while (*str == '\t' || *str == ' ' || *str == '[' || *str == ']' || *str == '{' ||
               *str == '}' || *str == '(' || *str == ')' || *str == '+' || *str == ',' ||
               *str == ':' || *str == ';')
        {
            str++;
        }

        if (*str == '\0')
        {
            return index;
        }

        if (*str == '-')
        {
            negate = TRUE;
            str++;

            while (*str == '\t' || *str == ' ')
            {
                str++;
            }
        }
        else
        {
            negate = FALSE;
        }

        numstart = str;
        digits = 0;

        while ((*str >= '0' && *str <= '9') || *str == '.' || *str == 'E' || *str == 'e' ||
               *str == 'f')
        {
            if (*str >= '0' && *str <= '9')
            {
                digits++;
            }

            str++;
        }

        if (digits == 0)
        {
            return index;
        }

        savech = *str;

        *str = '\0';
        *dest = xatof(numstart);

        if (negate)
        {
            *dest = -*dest;
        }

        *str = savech;
        dest++;
    }

    return index;
}

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
