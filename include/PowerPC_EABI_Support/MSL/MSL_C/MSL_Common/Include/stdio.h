#ifndef _MSL_STDIO
#define _MSL_STDIO

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _FILE
{
    U8 pad[0x50];
} FILE;

extern FILE __files[4];

#define stdin &(__files[0])
#define stdout &(__files[1])
#define stderr &(__files[2])

int sprintf(char* s, const char* format, ...);
void printf(const char* format, ...);
int fprintf(FILE* stream, const char* format, ...);

#ifdef __cplusplus
}
#endif

#endif
