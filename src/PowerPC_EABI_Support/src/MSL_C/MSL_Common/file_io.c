#include "types.h"
#include "string.h"
#include "PowerPC_EABI_Support/MSL_C/MSL_Common/ansi_files.h"
#include "PowerPC_EABI_Support/MSL_C/MSL_Common/FILE_POS.h"
#include "PowerPC_EABI_Support/MSL_C/MSL_Common/critical_regions.h"
#include "PowerPC_EABI_Support/MSL_C/MSL_Common/misc_io.h"

#ifndef SEEK_END
#define SEEK_END 2
#endif

enum __open_modes { __must_exist, __create_if_necessary, __create_or_truncate };
enum __io_modes { __read = 1, __write = 2, __read_write = 3, __append = 4 };
enum __io_results { __no_io_error, __io_error, __io_EOF };

extern FILE* __find_unopened_file(void);
extern void __init_file(FILE* file, file_modes mode, unsigned char* buffer, unsigned long buffer_size);
extern int __open_file(const char* name, file_modes mode, __file_handle* handle);

inline static FILE* freopen(const char* name, const char* mode, FILE* file)
{
	file_modes modes;
	u32 pos;

	__stdio_atexit();

	if (!file) {
		return NULL;
	}

	if (file && file->mMode.file_kind != __closed_file) {
		if (file == NULL) {
			__flush_all();
		}
		else if (file->mState.error == 0 && file->mMode.file_kind != __closed_file) {
			if (file->mMode.io_mode != 1) {
				if (file->mState.io_state >= 3) {
					file->mState.io_state = 2;
				}

				if (file->mState.io_state == 2) {
					file->mBufferLength = 0;
				}

				if (file->mState.io_state != 1) {
					file->mState.io_state = 0;
				}
				else {
					if (file->mMode.file_kind != __disk_file || (pos = ftell(file)) < 0) {
						pos = 0;
					}

					if (__flush_buffer(file, 0) != 0) {
						file->mState.error = 1;
						file->mBufferLength = 0;
					}
					else {
						file->mState.io_state = 0;
						file->mPosition = pos;
						file->mBufferLength = 0;
					}
				}
			}
		}

		(*file->closeFunc)(file->mHandle);
		file->mMode.file_kind = __closed_file;
		file->mHandle = 0;

		if (file->mState.free_buffer) {
			free(file->mBuffer);
		}
	}
	clearerr(file);

	if (!__get_file_modes(mode, &modes)) {
		return NULL;
	}

	__init_file(file, modes, 0, 0x1000);

	if (__open_file(name, modes, &file->mHandle)) {
		file->mMode.file_kind = __closed_file;
		if (file->mState.free_buffer) {
			free(file->mBuffer);
		}
		return NULL;
	}

	if (modes.io_mode & __append) {
		fseek(file, 0, SEEK_END);
	}

	return file;
}

int fclose(FILE* file)
{
	int flush_result, close_result;

	if (file == NULL)
		return (-1);
	if (file->mMode.file_kind == __closed_file)
		return (0);

	flush_result = fflush(file);
	close_result = (*file->closeFunc)(file->mHandle);

	file->mMode.file_kind = __closed_file;
	file->mHandle = 0;

	if (file->mState.free_buffer)
		free(file->mBuffer);
	return ((flush_result || close_result) ? -1 : 0);
}

int fflush(FILE* file)
{
	u32 pos;

	if (file == NULL)
	{
		return __flush_all();
	}

	if (file->mState.error != 0 || file->mMode.file_kind == __closed_file)
	{
		return -1;
	}

	if (file->mMode.io_mode == 1)
	{
		return 0;
	}

	if (file->mState.io_state >= 3)
	{
		file->mState.io_state = 2;
	}

	if (file->mState.io_state == 2)
	{
		file->mBufferLength = 0;
	}

	if (file->mState.io_state != 1)
	{
		file->mState.io_state = 0;
		return 0;
	}

	if (file->mMode.file_kind != __disk_file || (pos = ftell(file)) < 0)
		pos = 0;

	if (__flush_buffer(file, 0) != 0)
	{
		file->mState.error = 1;
		file->mBufferLength = 0;
		return -1;
	}

	file->mState.io_state = 0;
	file->mPosition = pos;
	file->mBufferLength = 0;
	return 0;
}

FILE* fopen(const char* name, const char* mode)
{
	FILE* file;

	__begin_critical_region(stdin_access);
	file = freopen(name, mode, __find_unopened_file());
	__end_critical_region(stdin_access);

	return file;
}

int __get_file_modes(const char* mode, file_modes* modes)
{
	const char* mode_ptr;
	signed char mode_char;
	int mode_str;
	unsigned char open_mode;
	int io_mode;

	modes->file_kind = __disk_file;
	mode_char = mode[0];
	mode_str = mode_char;
#ifdef _MSL_WIDE_CHAR
	modes->file_orientation = __unoriented;
#endif
	modes->binary_io = 0;

	switch (mode_str)
	{
	case 'r':
		open_mode = __must_exist;
		break;
	case 'w':
		open_mode = __create_or_truncate;
		break;
	case 'a':
		open_mode = __create_if_necessary;
		break;
	default:
		return 0;
	}

	modes->open_mode = open_mode;
	mode_ptr = mode + 1;

	switch (*mode_ptr++)
	{
	case 'b':
		modes->binary_io = 1;
		if (*mode_ptr == '+') {
			mode_str = (mode_str << 8) | '+';
		}
		break;
	case '+':
		mode_str = (mode_str << 8) | '+';
		if (*mode_ptr == 'b') {
			modes->binary_io = 1;
		}
		break;
	}

	switch (mode_str)
	{
	case 'r':
		io_mode = __read;
		break;
	case 'w':
		io_mode = __write;
		break;
	case 'a':
		io_mode = __write | __append;
		break;
	case 'r+':
		io_mode = __read_write;
		break;
	case 'w+':
		io_mode = __read_write;
		break;
	case 'a+':
		io_mode = __read_write | __append;
		break;
	}

	modes->io_mode = io_mode;
	return 1;
}

int __msl_strnicmp(const char* s1, const char* s2, int n)
{
    int i;
    char c1, c2;

    for (i = 0; i < n; i++)
    {
        c1 = tolower(*s1++);
        c2 = tolower(*s2++);

        if (c1 < c2)
        {
            return -1;
        }

        if (c1 > c2)
        {
            return 1;
        }

        if (c1 == '\0')
        {
            return 0;
        }
    }
    return 0;
}
