#ifndef _MSL_WIDE_CHAR
#define _MSL_WIDE_CHAR
#endif

#include "PowerPC_EABI_Support/MSL_C/MSL_Common/ansi_files.h"
#include "PowerPC_EABI_Support/MSL_C/MSL_Common/alloc.h"
#include "PowerPC_EABI_Support/MSL_C/MSL_Common/file_io.h"
#include "PowerPC_EABI_Support/MSL_C/MSL_Common/critical_regions.h"
#include "types.h"

#ifndef _IONBF
#define _IONBF 0
#endif

#ifndef _IOLBF
#define _IOLBF 1
#endif

#ifndef _IOFBF
#define _IOFBF 2
#endif

enum __io_results { __no_io_error, __io_error, __io_EOF };

void* malloc(size_t size);
int __load_buffer(FILE* file, size_t* bytes_loaded, int mode);
int __flush_buffer(FILE* file, size_t* bytes_flushed);
void __prep_buffer(FILE* file);

inline void __convert_from_newlines(char* buffer, size_t* length) {}
inline void __prep_buffer_inline(FILE* file)
{
    file->mBufferPtr = file->mBuffer;
    file->mBufferLength = file->mBufferSize;
    file->mBufferLength -= file->mPosition & file->mBufferAlignment;
    file->mBufferPosition = file->mPosition;
}

int setvbuf(FILE* file, char* buffer, int mode, size_t size)
{
    unsigned char* file_bytes;
    unsigned short mode_bits;
    int io_mode;

    file_bytes = (unsigned char*)file;
    mode_bits = *(unsigned short*)(file_bytes + 4);
    io_mode = (mode_bits >> 6) & 7;

    if (mode == _IONBF) {
        fflush(file);
    }

    if (file->mState.io_state != __neutral || io_mode == 0) {
        return -1;
    }

    if (mode != _IONBF && mode != _IOLBF && mode != _IOFBF) {
        return -1;
    }

    if (file->mBuffer != NULL && file->mState.free_buffer != 0) {
        free(file->mBuffer);
    }

    __begin_critical_region(2);

    file->mMode.buffer_mode = mode;
    file->mState.free_buffer = 0;
    file->mBuffer = (char*)&file->mCharBuffer;
    file->mBufferPtr = (char*)&file->mCharBuffer;
    file->mBufferSize = 1;
    file->mBufferLength = 0;
    file->mBufferAlignment = 0;

    if (mode == _IONBF || size < 1) {
        *file->mBufferPtr = 0;
        __end_critical_region(2);
        return 0;
    }

    if (buffer == NULL) {
        buffer = (char*)malloc(size);
        if (buffer == NULL) {
            __end_critical_region(2);
            return -1;
        }
        file->mState.free_buffer = 1;
    }

    file->mBuffer = buffer;
    file->mBufferPtr = file->mBuffer;
    file->mBufferSize = size;
    file->mBufferAlignment = 0;

    __end_critical_region(2);
    return 0;
}

int __flush_buffer(FILE* file, size_t* bytes_flushed)
{
    size_t buffer_len;
    int ioresult;

    buffer_len = file->mBufferPtr - file->mBuffer;

    if (buffer_len) {
        file->mBufferLength = buffer_len;

        if (!file->mMode.binary_io)
            __convert_from_newlines(file->mBuffer, (size_t*)&file->mBufferLength);

        ioresult = file->writeFunc(file->mHandle, file->mBuffer, (size_t*)&file->mBufferLength, file->ref_con);

        if (bytes_flushed)
            *bytes_flushed = file->mBufferLength;

        if (ioresult)
            return ioresult;

        file->mPosition += file->mBufferLength;
    }

    __prep_buffer_inline(file);

    return __no_io_error;
}

int __load_buffer(FILE* file, size_t* bytes_loaded, int mode)
{
    int ioresult;

    __prep_buffer_inline(file);

    if (mode == 1) {
        file->mBufferLength = file->mBufferSize;
    }

    ioresult = file->readFunc(file->mHandle, file->mBuffer, &file->mBufferLength, file->ref_con);

    if (ioresult == __io_EOF) {
        file->mBufferLength = 0;
    }

    if (bytes_loaded != NULL) {
        *bytes_loaded = file->mBufferLength;
    }

    if (ioresult != __no_io_error) {
        return ioresult;
    }

    file->mPosition += file->mBufferLength;

    return __no_io_error;
}

void __prep_buffer(FILE* file)
{
    __prep_buffer_inline(file);
}
