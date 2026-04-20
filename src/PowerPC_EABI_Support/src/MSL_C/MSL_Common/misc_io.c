#include "PowerPC_EABI_Support/MSL_C/MSL_Common/misc_io.h"

extern void (*__stdio_exit)(void);

extern void __close_all(void);

void clearerr(FILE* stream)
{
	stream->mState.eof = 0;
	stream->mState.error = 0;
}

void feof(void)
{
	// UNUSED FUNCTION
}

void ferror(void)
{
	// UNUSED FUNCTION
}

void perror(void)
{
	// UNUSED FUNCTION
}

void __stdio_atexit(void) { __stdio_exit = __close_all; }
