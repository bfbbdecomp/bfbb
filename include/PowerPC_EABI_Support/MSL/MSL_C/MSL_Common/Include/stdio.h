#ifndef _MSL_STDIO
#define _MSL_STDIO

#ifdef __cplusplus
extern "C" {
#endif

int sprintf(char* s, const char* format, ...);
void printf(const char* format, ...);

#ifdef __cplusplus
}
#endif

#endif