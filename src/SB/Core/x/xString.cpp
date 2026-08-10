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
        map[*ctrl >> 3] |= (U8)(1 << (*ctrl & 0x7));
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

char* xStrTokBuffer(const char* string, const char* control, void* buffer)
{
    char** nextoken = (char**)buffer;
    char* dest = (char*)buffer + 4;
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
        map[*ctrl >> 3] |= (U8)(1 << (*ctrl & 0x7));
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
            str++;
            break;
        }

        *dest++ = *str;
        str++;
    }

    *dest = '\0';
    *nextoken = (char*)str;

    if (string == (char*)str)
    {
        return NULL;
    }

    return (char*)buffer + 4;
}

S32 xStricmp(const char* string1, const char* string2)
{
    S32 result = 0;

    while (((*string1 >= 'a' && *string1 <= 'z' ? *string1 - 32 : *string1) ==
            (*string2 >= 'a' && *string2 <= 'z' ? *string2 - 32 : *string2)) &&
           result == 0)
    {
        if (*string1 == '\0' || *string2 == '\0')
        {
            result = 1;
        }
        else
        {
            string1++;
            string2++;
        }
    }

    if (*string1 == *string2)
    {
        return 0;
    }

    if ((*string1 >= 'a' && *string1 <= 'z' ? *string1 - 32 : *string1) <
        (*string2 >= 'a' && *string2 <= 'z' ? *string2 - 32 : *string2))
    {
        return -1;
    }

    return 1;
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
    char* str;
    S32 index;
    S32 digits;
    S32 negate;
    char* numstart;
    char savech;

    str = (char*)strbuf;
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
    const char* s1 = (const char*)d1;
    const char* s2 = (const char*)d2;
    size_t i;

    for (i = 0; i < size; i++, s1++, s2++)
    {
        S32 cval1 = tolower(*s1);
        S32 cval2 = tolower(*s2);
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

size_t atox(const substr& s, size_t& read_size)
{
    const char* p = s.text;
    size_t size = s.size;
    size_t total;
    size_t v;

    if (p == NULL)
    {
        return 0;
    }

    total = 0;

    if (size > 8)
    {
        size = 8;
    }

    read_size = 0;

    while (read_size < size)
    {
        U8 c = *p;

        if (c >= '0' && c <= '9')
        {
            v = c - '0';
        }
        else if (c >= 'a' && c <= 'f')
        {
            v = c - 'a' + 10;
        }
        else if (c >= 'A' && c <= 'F')
        {
            v = c - 'A' + 10;
        }
        else
        {
            return total;
        }

        total = (total << 4) + v;
        p++;
        read_size++;
    }

    return total;
}

// Scan for any of the delimiters in 'cs', specialized by delimiter count.
#define FIND_CHAR_SCAN(match)                                                                      \
    for (i = s.size; i > 0 && *p != '\0'; i--, p++)                                                \
    {                                                                                              \
        if (match)                                                                                 \
        {                                                                                          \
            return p;                                                                              \
        }                                                                                          \
    }                                                                                              \
    break

const char* find_char(const substr& s, const substr& cs)
{
    const char* p;
    const char* d;
    S32 i;

    if (s.text == NULL || cs.text == NULL)
    {
        return NULL;
    }

    p = s.text;
    d = cs.text;

    switch (cs.size)
    {
    case 0:
        break;
    case 1:
        FIND_CHAR_SCAN(*p == d[0]);
    case 2:
        FIND_CHAR_SCAN(*p == d[0] || *p == d[1]);
    case 3:
        FIND_CHAR_SCAN(*p == d[0] || *p == d[1] || *p == d[2]);
    case 4:
        FIND_CHAR_SCAN(*p == d[0] || *p == d[1] || *p == d[2] || *p == d[3]);
    case 5:
        FIND_CHAR_SCAN(*p == d[0] || *p == d[1] || *p == d[2] || *p == d[3] || *p == d[4]);
    case 6:
        FIND_CHAR_SCAN(*p == d[0] || *p == d[1] || *p == d[2] || *p == d[3] || *p == d[4] ||
                       *p == d[5]);
    case 7:
        FIND_CHAR_SCAN(*p == d[0] || *p == d[1] || *p == d[2] || *p == d[3] || *p == d[4] ||
                       *p == d[5] || *p == d[6]);
    case 8:
        FIND_CHAR_SCAN(*p == d[0] || *p == d[1] || *p == d[2] || *p == d[3] || *p == d[4] ||
                       *p == d[5] || *p == d[6] || *p == d[7]);
    case 9:
        FIND_CHAR_SCAN(*p == d[0] || *p == d[1] || *p == d[2] || *p == d[3] || *p == d[4] ||
                       *p == d[5] || *p == d[6] || *p == d[7] || *p == d[8]);
    case 10:
        FIND_CHAR_SCAN(*p == d[0] || *p == d[1] || *p == d[2] || *p == d[3] || *p == d[4] ||
                       *p == d[5] || *p == d[6] || *p == d[7] || *p == d[8] || *p == d[9]);
    case 11:
        FIND_CHAR_SCAN(*p == d[0] || *p == d[1] || *p == d[2] || *p == d[3] || *p == d[4] ||
                       *p == d[5] || *p == d[6] || *p == d[7] || *p == d[8] || *p == d[9] ||
                       *p == d[10]);
    default:
        for (i = s.size; i > 0 && *p != '\0'; i--, p++)
        {
            const char* q;

            for (q = d; *q != '\0'; q++)
            {
                if (*p == *q)
                {
                    return p;
                }
            }
        }
        break;
    }

    return NULL;
}
