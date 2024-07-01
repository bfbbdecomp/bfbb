#ifndef XSTRING_H
#define XSTRING_H

#include <types.h>

struct substr
{
    const char* text;
    ulong32 size;

    static substr create(const char* text, ulong32 size);
};

// substr constructor
#define SUBSTR(str) (str), (sizeof((str)) - 1)

uint32 xStrHash(const char* str);
uint32 xStrHash(const char* str, ulong32 size);
uint32 xStrHashCat(uint32 prefix, const char* str);
char* xStrupr(char* string);
int32 xStricmp(const int8* string1, const int8* string2);
char* xStrTok(char* string, const char* control, char** nextoken);
int32 xStrParseFloatList(float32* dest, const int8* strbuf, int32 max);

int32 imemcmp(void const* d1, void const* d2, ulong32 size);
int32 icompare(const substr& s1, const substr& s2);

ulong32 rskip_ws(substr& s);
ulong32 rskip_ws(const char*& text, ulong32& size);
bool is_ws(char c);
const char* find_char(const substr& s, char c);
const char* find_char(const substr& s, const substr& cs);
const char* skip_ws(substr& s);
const char* skip_ws(const char*& text, ulong32& size);
ulong32 atox(const substr& s);
ulong32 atox(const substr& s, ulong32& read_size);
ulong32 trim_ws(substr& s);
ulong32 trim_ws(const char*& text, ulong32& size);

extern "C" {
uint32 tolower__21_esc__2_unnamed_esc__2_xString_cpp_esc__2_Fc(uint32 param_1);
uint32 tolower__21_esc__2_unnamed_esc__2_xString_cpp_esc__2_Fi(uint32 param_1);
}

#endif
