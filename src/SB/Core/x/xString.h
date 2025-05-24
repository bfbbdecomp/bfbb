#ifndef XSTRING_H
#define XSTRING_H

#include <types.h>
//#include <stddef.h>

struct substr
{
    const char* text;
    size_t size;

    static substr create(const char* text, size_t size);
};

// substr constructor
#define SUBSTR(str) (str), (sizeof((str)) - 1)

U32 xStrHash(const char* str);
U32 xStrHash(const char* str, size_t size);
U32 xStrHashCat(U32 prefix, const char* str);
char* xStrupr(char* string);
S32 xStricmp(const char* string1, const char* string2);
char* xStrTok(char* string, const char* control, char** nextoken);
char* xStrTokBuffer(const char* string, const char* control, void* buffer);
S32 xStrParseFloatList(F32* dest, const char* strbuf, S32 max);

S32 imemcmp(void const* d1, void const* d2, size_t size);
S32 icompare(const substr& s1, const substr& s2);

size_t rskip_ws(substr& s);
size_t rskip_ws(const char*& text, size_t& size);
bool is_ws(char c);
const char* find_char(const substr& s, char c);
const char* find_char(const substr& s, const substr& cs);
const char* skip_ws(substr& s);
const char* skip_ws(const char*& text, size_t& size);
size_t atox(const substr& s);
size_t atox(const substr& s, size_t& read_size);
size_t trim_ws(substr& s);
size_t trim_ws(const char*& text, size_t& size);

extern "C" {
U32 tolower__21_esc__2_unnamed_esc__2_xString_cpp_esc__2_Fc(U32 param_1);
U32 tolower__21_esc__2_unnamed_esc__2_xString_cpp_esc__2_Fi(U32 param_1);
}

#endif
