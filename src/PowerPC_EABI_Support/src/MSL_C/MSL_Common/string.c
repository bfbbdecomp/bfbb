#include "string.h"
#include "stddef.h"

#define K1 0x80808080
#define K2 0xFEFEFEFF

const unsigned char strtok_delimiter_table_init[32] = { 0 };

static const char msl_string_table_1[] = "\0"
    "Argument list too long\0"
    "Permission denied\0"
    "Resource temporarily unavailable\0"
    "Bad file descriptor\0"
    "Device busy\0"
    "No child processes\0"
    "Resource deadlock avoided\0"
    "Numerical argument out of domain\0"
    "File exists\0"
    "Bad address\0"
    "File too large\0"
    "File Position Error\0"
    "Wide character encoding error\0"
    "Interrupted system call\0"
    "Invalid argument\0"
    "Input/output error\0"
    "Is a directory\0"
    "Too many open files\0"
    "Too many links\0"
    "File name too long\0"
    "Too many open files in system\0"
    "Operation not supported by device\0"
    "No such file or directory\0"
    "No error detected\0"
    "Exec format error\0"
    "No locks available\0"
    "Cannot allocate memory\0"
    "No space left on device\0"
    "Function not implemented\0"
    "Not a directory\0"
    "Directory not empty\0"
    "Inappropriate ioctl for device\0"
    "Device not configured\0"
    "Operation not permitted\0"
    "Broken pipe\0"
    "Result too large\0"
    "Read-only file system\0"
    "Signal error\0"
    "Illegal seek\0"
    "No such process\0"
    "Unknown error\0"
    "Cross-device link\0"
    "Unknown Error (%d)";

char* strtok_null = (char*)msl_string_table_1;
char* strtok_ptr  = (char*)msl_string_table_1;

char* strstr(const char* str, const char* pat)
{
    const unsigned char* s1 = (const unsigned char*)str - 1;
    const unsigned char* p1 = (const unsigned char*)pat - 1;
    unsigned long firstc, c1, c2;

    if ((pat == 0) || (!(firstc = *++p1))) {
        return (char*)str;
    }

    while (c1 = *++s1) {
        if (c1 == firstc) {
            const unsigned char* s2 = s1 - 1;
            const unsigned char* p2 = p1 - 1;

            while ((c1 = *++s2) == (c2 = *++p2) && c1)
                ;

            if (!c2)
                return (char*)s1;
        }
    }

    return NULL;
}

char* strtok(char* str, const char* delim)
{
    unsigned char delimiter_table[32];
    int ch;
    unsigned char* p;
    char* tokenStart;

    ((unsigned int*)delimiter_table)[0] = ((const unsigned int*)strtok_delimiter_table_init)[0];
    ((unsigned int*)delimiter_table)[1] = ((const unsigned int*)strtok_delimiter_table_init)[1];
    ((unsigned int*)delimiter_table)[2] = ((const unsigned int*)strtok_delimiter_table_init)[2];
    ((unsigned int*)delimiter_table)[3] = ((const unsigned int*)strtok_delimiter_table_init)[3];
    ((unsigned int*)delimiter_table)[4] = ((const unsigned int*)strtok_delimiter_table_init)[4];
    ((unsigned int*)delimiter_table)[5] = ((const unsigned int*)strtok_delimiter_table_init)[5];
    ((unsigned int*)delimiter_table)[6] = ((const unsigned int*)strtok_delimiter_table_init)[6];
    ((unsigned int*)delimiter_table)[7] = ((const unsigned int*)strtok_delimiter_table_init)[7];

    if (str != NULL) {
        strtok_ptr = str;
    }

    p = (unsigned char*)delim - 1;
    while ((ch = *++p) != '\0') {
        delimiter_table[(ch & 0xFF) >> 3] |= 1 << (ch & 7);
    }

    p = (unsigned char*)strtok_ptr - 1;
    while ((ch = *++p) != '\0') {
        if ((delimiter_table[(ch & 0xFF) >> 3] & (1 << (ch & 7))) == 0) {
            break;
        }
    }

    if (ch == '\0') {
        strtok_ptr = strtok_null;
        return NULL;
    }

    tokenStart = (char*)p;
    while ((ch = *++p) != '\0') {
        if ((delimiter_table[(ch & 0xFF) >> 3] & (1 << (ch & 7))) != 0) {
            break;
        }
    }

    if (ch == '\0') {
        strtok_ptr = strtok_null;
    } else {
        strtok_ptr = (char*)(p + 1);
        *p = '\0';
    }

    return tokenStart;
}

char* strchr(const char* str, int c)
{
    const unsigned char* p = (unsigned char*)str - 1;
    unsigned long chr      = (c & 0xFF);

    unsigned long ch;
    while (ch = *++p) {
        if (ch == chr) {
            return (char*)p;
        }
    }

    return chr ? NULL : (char*)p;
}

int strncmp(const char* str1, const char* str2, size_t n)
{
    const unsigned char* p1 = (unsigned char*)str1 - 1;
    const unsigned char* p2 = (unsigned char*)str2 - 1;
    unsigned long c1, c2;

    n++;

    while (--n)
        if ((c1 = *++p1) != (c2 = *++p2))
            return (c1 - c2);
        else if (!c1)
            break;
    return 0;
}

int strcmp(const char* str1, const char* str2)
{
    register unsigned char* left  = (unsigned char*)str1;
    register unsigned char* right = (unsigned char*)str2;
    unsigned long align, l1, r1, x;

    l1 = *left;
    r1 = *right;
    if (l1 - r1) {
        return l1 - r1;
    }

    if ((align = ((int)left & 3)) != ((int)right & 3)) {
        goto bytecopy;
    }

    if (align) {
        if (l1 == 0) {
            return 0;
        }
        for (align = 3 - align; align; align--) {
            l1 = *(++left);
            r1 = *(++right);
            if (l1 - r1) {
                return l1 - r1;
            }
            if (l1 == 0) {
                return 0;
            }
        }
        left++;
        right++;
    }

    l1 = *(int*)left;
    r1 = *(int*)right;
    x  = l1 + K2;
    if (x & K1) {
        goto adjust;
    }

    while (l1 == r1) {
        l1 = *(++((int*)(left)));
        r1 = *(++((int*)(right)));
        x  = l1 + K2;
        if (x & K1) {
            goto adjust;
        }
    }

    if (l1 > r1) {
        return 1;
    }
    return -1;

adjust:
    l1 = *left;
    r1 = *right;
    if (l1 - r1) {
        return l1 - r1;
    }

bytecopy:
    if (l1 == 0) {
        return 0;
    }

    do {
        l1 = *(++left);
        r1 = *(++right);
        if (l1 - r1) {
            return l1 - r1;
        }
        if (l1 == 0) {
            return 0;
        }
    } while (1);
}

char* strncat(char* dst, const char* src, size_t n)
{
    const unsigned char* srcPtr = (const unsigned char*)src - 1;
    unsigned char* dstPtr       = (unsigned char*)dst - 1;

    while (*++dstPtr) {
    }

    --dstPtr;
    n++;
    while (--n) {
        if (!(*++dstPtr = *++srcPtr)) {
            --dstPtr;
            break;
        }
    }

    *++dstPtr = 0;
    return dst;
}

char* strcat(char* dst, const char* src)
{
    const unsigned char* p = (const unsigned char*)src - 1;
    unsigned char* q       = (unsigned char*)dst - 1;

    while (*++q)
        ;

    q--;

    while (*++q = *++p)
        ;

    return dst;
}

char* strncpy(char* dst, const char* src, size_t n)
{
    const unsigned char* p = (const unsigned char*)src - 1;
    unsigned char* q       = (unsigned char*)dst - 1;

    n++;
    while (--n) {
        if (!(*++q = *++p)) {
            while (--n) {
                *++q = 0;
            }
            break;
        }
    }

    return dst;
}

char* strcpy(char* dst, const char* src)
{
    register unsigned char *destb, *fromb;
    register unsigned long w, t, align;

    fromb = (unsigned char*)src;
    destb = (unsigned char*)dst;

    if ((align = ((int)fromb & 3)) != ((int)destb & 3)) {
        goto bytecopy;
    }

    if (align) {
        if ((*destb = *fromb) == 0) {
            return dst;
        }

        for (align = 3 - align; align; align--) {
            if ((*(++destb) = *(++fromb)) == 0) {
                return dst;
            }
        }
        ++destb;
        ++fromb;
    }

    w = *((int*)(fromb));

    t = w + K2;

    t &= K1;
    if (t) {
        goto bytecopy;
    }
    --((int*)(destb));

    do {
        *(++((int*)(destb))) = w;
        w                    = *(++((int*)(fromb)));

        t = w + K2;
        t &= K1;
        if (t) {
            goto adjust;
        }
    } while (1);

adjust:
    ++((int*)(destb));

bytecopy:
    if ((*destb = *fromb) == 0) {
        return dst;
    }

    do {
        if ((*(++destb) = *(++fromb)) == 0) {
            return dst;
        }
    } while (1);

    return dst;
}

size_t strlen(const char* str)
{
    size_t len       = -1;
    unsigned char* p = (unsigned char*)str - 1;

    do {
        len++;
    } while (*++p);

    return len;
}
