#ifndef _STDLIB_H
#define _STDLIB_H

#include "types.h"
#include "stddef.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

typedef struct
{
    int quot; /* quotient */
    int rem; /* remainder */
} div_t;

typedef void (*msl_constraint_handler)(int, int, int);

double atof(const char*); // double (const char*)?
int atoi(const char* str);
unsigned long strtoul(const char* str, char** end, int base);

int rand();
void srand(u32 seed);

void free(void*);

void abort();
void exit(int status);

void* bsearch(const void* key, const void* base0, size_t nmemb, size_t size,
              int (*compar)(const void*, const void*));
void qsort(void*, size_t, size_t, int (*)(const void*, const void*));

long abs(long __x);
long labs(long __x);
div_t div(s32 __numer, s32 __denom);

int mbtowc(wchar_t* pwc, const char* s, size_t n);
int wctomb(char* s, wchar_t wchar);
int mbstowcs(wchar_t* pwc, const char* s, size_t n);
size_t wcstombs(char* s, const wchar_t* pwcs, size_t n);

void __exit(int status);
unsigned long __strtoul(int base, int max_width, int (*ReadProc)(void*, int, int),
                        void* ReadProcArg, int* chars_scanned, int* negative, int* overflow);
unsigned long long __strtoull(int base, int max_width, int (*ReadProc)(void*, int, int),
                              void* ReadProcArg, int* chars_scanned, int* negative, int* overflow);
long double __strtold(int max_width, int (*ReadProc)(void*, int, int), void* ReadProcArg,
                      int* chars_scanned, int* overflow);
int __mbtowc_noconv(wchar_t*, const char*, size_t);
int __wctomb_noconv(char*, wchar_t);
void __msl_runtime_constraint_violation_s(int param1, int param2, int param3);

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif
