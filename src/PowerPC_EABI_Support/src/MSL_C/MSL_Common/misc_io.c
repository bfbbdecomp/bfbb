#include "PowerPC_EABI_Support/MSL_C/MSL_Common/misc_io.h"

extern void (*__stdio_exit)(void);

extern void __close_all(void);

void __stdio_atexit(void) { __stdio_exit = __close_all; }

int feof(FILE* stream)
{
	return stream->mState.eof;
}

void clearerr(FILE* stream)
{
	stream->mState.eof = 0;
	stream->mState.error = 0;
}
