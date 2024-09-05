#ifndef _MSL_STRING_H
#define _MSL_STRING_H

#include <size_t.h>

#ifdef __cplusplus
extern "C" {
#endif

void* memset(void*, int, size_t);
void* memcpy(void*, const void*, size_t);
int memcmp(const void* ptr1, const void* ptr2, size_t num);
size_t strlen(const char*);
char* strcpy(char* dest, const char* source);
char* strncpy(char* dest, const char* source, size_t n);
char* strcat(char* dest, const char* source);
int strcmp(const char* a, const char* b);
int stricmp(const char* a, const char* b);
int strcmpi(const char* a, const char* b);
char* strstr(const char* haystack, const char* needle);
int atoi(const char* s);

#ifdef __cplusplus
}
#endif

#endif
