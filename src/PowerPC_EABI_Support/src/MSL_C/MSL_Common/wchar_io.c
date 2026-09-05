#ifndef _MSL_WIDE_CHAR
#define _MSL_WIDE_CHAR
#endif

#include "PowerPC_EABI_Support/MSL_C/MSL_Common/wchar_io.h"

int fwide(FILE* file, int mode)
{
	if (!file || file->mMode.file_kind == __closed_file) {
		return 0;
	}

	switch (file->mMode.file_orientation) {
	case __unoriented:
		if (mode > 0) {
			file->mMode.file_orientation = __wide_oriented;
		} else if (mode < 0) {
			file->mMode.file_orientation = __char_oriented;
		}
		return mode;
	case __wide_oriented:
		return 1;
	case __char_oriented:
		return -1;
	}
}
