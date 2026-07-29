#include "types.h"

#ifndef _MSL_WIDE_CHAR
#define _MSL_WIDE_CHAR
#endif

#include "wchar.h"
#include "stdio.h"
#include "PowerPC_EABI_Support/MSL_C/MSL_Common/stdio_api.h"
#include "PowerPC_EABI_Support/MSL_C/MSL_Common/misc_io.h"
#include "PowerPC_EABI_Support/MSL_C/MSL_Common/critical_regions.h"

#ifndef _IONBF
#define _IONBF 0
#endif

#ifndef _IOLBF
#define _IOLBF 1
#endif

#ifndef _IOFBF
#define _IOFBF 2
#endif

#define set_error(file)    \
	do {                   \
		(file)->mState.error = 1; \
		(file)->mBufferLength = 0; \
	} while (0)

enum __io_modes {
	__read = 1,
	__write = 2,
	__append = 4
};

enum __io_results {
	__no_io_error,
	__io_error,
	__io_EOF
};

int __flush_line_buffered_output_files(void);
int __load_buffer(FILE* file, size_t* bytes_loaded, int alignment);
size_t __fread(void* pPtr, size_t memb_size, size_t num_memb, FILE* pFile);
size_t __fwrite(const void* pPtr, size_t memb_size, size_t num_memb, FILE* pFile);

size_t __fwrite(const void* pPtr, size_t memb_size, size_t num_memb, FILE* pFile)
{
	unsigned char* cur_ptr;
	size_t num_bytes, rem_bytes, bytes_written;
	int res, buff;

	if (fwide(pFile, 0) == 0) {
		fwide(pFile, -1);
	}

	rem_bytes = memb_size * num_memb;

	if (rem_bytes == 0 || pFile->mState.error || pFile->mMode.file_kind == __closed_file) {
		return 0;
	}

	if (pFile->mMode.file_kind == __console_file) {
		__stdio_atexit();
	}

	buff = !pFile->mMode.binary_io || pFile->mMode.buffer_mode == _IOFBF || pFile->mMode.buffer_mode == _IOLBF;

	if (pFile->mState.io_state == __neutral) {
		if (pFile->mMode.io_mode & __write) {
			if (pFile->mMode.io_mode & __append) {
				if (fseek(pFile, 0, 2)) {
					return 0;
				}
			}

			pFile->mState.io_state = __writing;
			__prep_buffer(pFile);
		}
	}

	if (pFile->mState.io_state != __writing) {
		set_error(pFile);
		return 0;
	}

	cur_ptr = (unsigned char*)pPtr;
	bytes_written = 0;

	if (rem_bytes && (pFile->mBufferPtr != pFile->mBuffer || buff)) {
		pFile->mBufferLength = pFile->mBufferSize - (pFile->mBufferPtr - pFile->mBuffer);

		do {
			unsigned char* nw = 0;

			num_bytes = pFile->mBufferLength;
			if (num_bytes > rem_bytes) {
				num_bytes = rem_bytes;
			}

			if (pFile->mMode.buffer_mode == _IOLBF && num_bytes) {
				if ((nw = (unsigned char*)__memrchr(cur_ptr, '\n', num_bytes)) != 0) {
					num_bytes = nw + 1 - cur_ptr;
				}
			}

			if (num_bytes) {
				memcpy(pFile->mBufferPtr, cur_ptr, num_bytes);

				cur_ptr += num_bytes;
				bytes_written += num_bytes;
				rem_bytes -= num_bytes;

				pFile->mBufferPtr += num_bytes;
				pFile->mBufferLength -= num_bytes;
			}

			if (pFile->mBufferLength == 0 || nw != 0 || pFile->mMode.buffer_mode == _IONBF) {
				res = __flush_buffer(pFile, 0);
				if (res != __no_io_error) {
					set_error(pFile);
					rem_bytes = 0;
					break;
				}
			}
		} while (rem_bytes && buff);
	}

	if (rem_bytes && !buff) {
		unsigned char* save_buf = (unsigned char*)pFile->mBuffer;
		size_t save_size = pFile->mBufferSize;

		pFile->mBuffer = (char*)cur_ptr;
		pFile->mBufferSize = rem_bytes;
		pFile->mBufferPtr = (char*)cur_ptr + rem_bytes;

		if (__flush_buffer(pFile, &num_bytes) != __no_io_error) {
			set_error(pFile);
		}

		bytes_written += num_bytes;

		pFile->mBuffer = (char*)save_buf;
		pFile->mBufferSize = save_size;

		__prep_buffer(pFile);
		pFile->mBufferLength = 0;
	}

	if (pFile->mMode.buffer_mode != _IOFBF) {
		pFile->mBufferLength = 0;
	}

	return (bytes_written + memb_size - 1) / memb_size;
}

size_t fwrite(const void* pPtr, size_t memb_size, size_t num_memb, FILE* pFile)
{
	size_t retval;

	__begin_critical_region(stdin_access);
	retval = __fwrite(pPtr, memb_size, num_memb, pFile);
	__end_critical_region(stdin_access);

	return retval;
}

size_t __fread(void* pPtr, size_t memb_size, size_t num_memb, FILE* pFile)
{
	int always_buffer, ioresult;
	unsigned char* cur_ptr;
	size_t num_bytes, rem_bytes, bytes_read;

	if (fwide(pFile, 0) == 0) {
		fwide(pFile, -1);
	}

	rem_bytes = memb_size * num_memb;

	if (rem_bytes == 0 || pFile->mState.error || pFile->mMode.file_kind == __closed_file) {
		return 0;
	}

	always_buffer = 1;
	if (pFile->mMode.binary_io && pFile->mMode.buffer_mode != _IOFBF) {
		always_buffer = 0;
	}

	if (pFile->mState.io_state == __neutral) {
		if (pFile->mMode.io_mode & __read) {
			pFile->mState.io_state = __reading;
			pFile->mBufferLength = 0;
		}
	}

	if (pFile->mState.io_state < __reading) {
		set_error(pFile);
		return 0;
	}

	if (pFile->mMode.buffer_mode & _IOLBF) {
		if (__flush_line_buffered_output_files()) {
			set_error(pFile);
			return 0;
		}
	}

	cur_ptr = (unsigned char*)pPtr;
	bytes_read = 0;

	if (rem_bytes && pFile->mState.io_state >= __rereading) {
		do {
			if (fwide(pFile, 0) == 1) {
				bytes_read += 2;
				rem_bytes -= 2;
				*(wchar_t*)cur_ptr = pFile->mUngetcWideBuffer[pFile->mState.io_state - __rereading];
				cur_ptr += 2;
			} else {
				bytes_read += 1;
				rem_bytes -= 1;
				*cur_ptr = pFile->mUngetcBuffer[pFile->mState.io_state - __rereading];
				cur_ptr += 1;
			}

			pFile->mState.io_state = pFile->mState.io_state - 1;
			if (rem_bytes == 0) {
				break;
			}
		} while (pFile->mState.io_state >= __rereading);

		if (pFile->mState.io_state == __reading) {
			pFile->mBufferLength = pFile->mBufferLength2;
		}
	}

	if (rem_bytes != 0 && (pFile->mBufferLength || always_buffer)) {
		do {
			if (pFile->mBufferLength == 0) {
				ioresult = __load_buffer(pFile, 0, 0);
				if (ioresult != __no_io_error) {
					if (ioresult == __io_error) {
						pFile->mState.error = 1;
						pFile->mBufferLength = 0;
					} else {
						pFile->mState.io_state = __neutral;
						pFile->mState.eof = 1;
						pFile->mBufferLength = 0;
					}
					rem_bytes = 0;
					break;
				}
			}

			num_bytes = pFile->mBufferLength;
			if (num_bytes > rem_bytes) {
				num_bytes = rem_bytes;
			}

			memcpy(cur_ptr, pFile->mBufferPtr, num_bytes);

			rem_bytes -= num_bytes;
			cur_ptr += num_bytes;
			bytes_read += num_bytes;
			pFile->mBufferPtr += num_bytes;
			pFile->mBufferLength -= num_bytes;

			if (rem_bytes == 0) {
				break;
			}
		} while (always_buffer);
	}

	if (rem_bytes != 0 && !always_buffer) {
		unsigned char* save_buf = (unsigned char*)pFile->mBuffer;
		size_t save_size = pFile->mBufferSize;

		pFile->mBuffer = (char*)cur_ptr;
		pFile->mBufferSize = rem_bytes;

		ioresult = __load_buffer(pFile, &num_bytes, 1);
		if (ioresult != __no_io_error) {
			if (ioresult == __io_error) {
				pFile->mState.error = 1;
				pFile->mBufferLength = 0;
			} else {
				pFile->mState.io_state = __neutral;
				pFile->mState.eof = 1;
				pFile->mBufferLength = 0;
			}
		}

		bytes_read += num_bytes;
		pFile->mBuffer = (char*)save_buf;
		pFile->mBufferSize = save_size;

		__prep_buffer(pFile);
		pFile->mBufferLength = 0;
	}

	return bytes_read / memb_size;
}

size_t fread(void* pPtr, size_t memb_size, size_t num_memb, FILE* pFile)
{
	size_t retval;

	__begin_critical_region(stdin_access);
	retval = __fread(pPtr, memb_size, num_memb, pFile);
	__end_critical_region(stdin_access);

	return retval;
}
