#ifndef _MSL_STDLIB
#define _MSL_STDLIB

#ifdef __cplusplus
extern "C" {
#endif

int rand(void);
int atoi(const char* nptr);
double atof(const char* nptr);
void exit(int32 __status);

#ifdef __cplusplus
}
#endif

#endif