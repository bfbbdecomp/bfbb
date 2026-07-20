#ifndef _MSL_FILE_IO_H
#define _MSL_FILE_IO_H

#include "types.h"
#include "PowerPC_EABI_Support/MSL_C/MSL_Common/ansi_files.h"

FILE* fopen(const char* filename, const char* mode);
int fclose(FILE* file);
int fflush(FILE* file);
int __get_file_modes(const char* mode, file_modes* modes);

#endif
