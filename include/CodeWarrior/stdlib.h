#ifndef _MSL_STDLIB
#define _MSL_STDLIB

#include <size_t.h>

#ifdef __cplusplus
extern "C" {
#endif

int rand(void);
int atoi(const char* nptr);
double atof(const char* nptr);
void exit(int __status);
void qsort(void*, size_t, size_t, int (*)(const void*, const void*));
long abs(long n);

#ifdef __cplusplus
}
#endif

#endif