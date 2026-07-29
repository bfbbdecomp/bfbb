#ifndef _MSL_MATH_API_H
#define _MSL_MATH_API_H

#include "PowerPC_EABI_Support/MSL_C/MSL_Common/ansi_files.h"

extern void (*__stdio_exit)(void);

void clearerr(FILE* stream);
void __stdio_atexit();

#endif
