#ifndef _STRING_H
#define _STRING_H

#include "types.h"
#include "Runtime/__mem.h"

#ifdef __cplusplus
extern "C" {
#endif

char* strcpy(char*, const char*);
char* strncpy(char*, const char*, size_t);

char* strcat(char*, const char*);
char* strncat(char*, const char*, size_t);

int strcmp(const char*, const char*);
int strncmp(const char*, const char*, size_t);
int strcmpi(const char* a, const char* b);
char* strchr(const char*, int);
char* strstr(const char*, const char*);
char* strrchr(const char* str, int chr);
char* strtok(char* str, const char* delimiters);
size_t strlen(const char*);
long strtol(const char* str, char** end, int base);

int memcmp(const void*, const void*, size_t);
void* memchr(const void* src, int val, size_t n);
void* memmove(void*, const void*, size_t);

int stricmp(const char*, const char*);
int strnicmp(const char* s1, const char* s2, int n);

int __msl_strnicmp(const char* s1, const char* s2, int n);
void* __memrchr(const void* src, int val, size_t n);
void __copy_longs_aligned(void* dst, const void* src, size_t len);
void __copy_longs_rev_aligned(void* dst, const void* src, size_t len);
void __copy_longs_unaligned(void* dst, const void* src, size_t len);
void __copy_longs_rev_unaligned(void* dst, const void* src, size_t len);

#ifdef __cplusplus
}
#endif
#endif
