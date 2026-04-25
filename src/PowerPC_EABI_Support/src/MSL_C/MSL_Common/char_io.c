#include "types.h"

#ifndef _MSL_WIDE_CHAR
#define _MSL_WIDE_CHAR
#endif

#include "stdio.h"
#include "PowerPC_EABI_Support/MSL_C/MSL_Common/char_io.h"
#include "PowerPC_EABI_Support/MSL_C/MSL_Common/critical_regions.h"
#include "PowerPC_EABI_Support/MSL_C/MSL_Common/FILE_POS.h"
#include "PowerPC_EABI_Support/MSL_C/MSL_Common/misc_io.h"
#include "PowerPC_EABI_Support/MSL_C/MSL_Common/wchar_io.h"

#ifndef EOF
#define EOF (-1)
#endif

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

int __load_buffer(FILE* file, size_t* bytes_loaded, int mode);

int fputs(const char* s, FILE* stream)
{
    char c;
    int var_r3;
    unsigned long len;
    int ret = 0;

    __begin_critical_region(stdin_access);
    while (c = *s++, c != 0) {
        if (fwide(stream, -1) >= 0) {
            var_r3 = -1;
        } else {
            len = stream->mBufferLength;
            stream->mBufferLength = len - 1;

            if (len != 0) {
                char* buffer;

                buffer = stream->mBufferPtr;
                stream->mBufferPtr++;
                *buffer = var_r3 = c & 0xFF;
            } else {
                var_r3 = __put_char(c, stream);
            }
        }

        if (var_r3 == -1) {
            ret = -1;
            break;
        }
    }
    __end_critical_region(stdin_access);

    return ret;
}

int __put_char(int c, FILE* stream)
{
    int ret;
    int file_kind = stream->mMode.file_kind;
    stream->mBufferLength = 0;

    if (stream->mState.error != 0 || file_kind == __closed_file) {
        return -1;
    }

    if (file_kind == __console_file) {
        __stdio_atexit();
    }

    if (stream->mState.io_state == __neutral) {
        int io_mode = stream->mMode.io_mode;

        if (io_mode & __write) {
            if ((io_mode & __append) && fseek(stream, 0, 2) != 0) {
                return 0;
            }

            stream->mState.io_state = __writing;
            __prep_buffer(stream);
        }
    }

    if (stream->mState.io_state != __writing) {
        stream->mState.error = 1;
        ret = -1;
        stream->mBufferLength = 0;
    } else if ((stream->mMode.buffer_mode == 2 ||
                stream->mBufferSize ==
                    (unsigned int)stream->mBufferPtr - (unsigned int)stream->mBuffer) &&
               __flush_buffer(stream, NULL) != 0)
    {
        stream->mState.error = 1;
        ret = -1;
        stream->mBufferLength = 0;
    } else {
        stream->mBufferLength--;
        *stream->mBufferPtr++ = c;

        if (stream->mMode.buffer_mode != 2) {
            if ((stream->mMode.buffer_mode == 0 || c == 10) &&
                __flush_buffer(stream, NULL) != 0)
            {
                stream->mState.error = 1;
                ret = -1;
                stream->mBufferLength = 0;
                goto exit;
            }
            stream->mBufferLength = 0;
        }

        ret = c & 0xFF;
    }

exit:
    return ret;
}

char* fgets(char* s, int n, FILE* file)
{
    char* ptr;
    int c;

    ptr = s;
    if (--n < 0) {
        return NULL;
    }

    __begin_critical_region(stdin_access);

    if (n != 0) {
        do {
            if (fwide(file, -1) >= 0) {
                c = EOF;
            } else {
                unsigned long length;

                length = file->mBufferLength;
                file->mBufferLength = length - 1;

                if (length != 0) {
                    unsigned char* buffer;

                    buffer = (unsigned char*)file->mBufferPtr;
                    file->mBufferPtr = (char*)(buffer + 1);
                    c = *buffer;
                } else {
                    file->mBufferLength = 0;

                    if (file->mState.error != 0 || file->mMode.file_kind == __closed_file) {
                        c = EOF;
                    } else {
                        int io_state;

                        io_state = file->mState.io_state;
                        if (io_state == __writing || !(file->mMode.io_mode & __read)) {
                            file->mState.error = 1;
                            file->mBufferLength = 0;
                            c = EOF;
                        } else if (io_state >= __rereading) {
                            file->mState.io_state = io_state - 1;
                            if (io_state == __rereading) {
                                file->mBufferLength = file->mBufferLength2;
                            }
                            c = ((unsigned char*)file)[io_state + 0xC];
                        } else {
                            int load_result;

                            file->mState.io_state = __reading;
                            load_result = __load_buffer(file, NULL, 0);
                            if (load_result != __no_io_error || file->mBufferLength == 0) {
                                if (load_result == __io_error) {
                                    file->mState.error = 1;
                                    file->mBufferLength = 0;
                                } else {
                                    file->mState.io_state = __neutral;
                                    file->mState.eof = 1;
                                    file->mBufferLength = 0;
                                }
                                c = EOF;
                            } else {
                                unsigned long next_length;
                                unsigned char* next_buffer;

                                next_length = file->mBufferLength;
                                file->mBufferLength = next_length - 1;
                                next_buffer = (unsigned char*)file->mBufferPtr;
                                file->mBufferPtr = (char*)(next_buffer + 1);
                                c = *next_buffer;
                            }
                        }
                    }
                }
            }

            if (c == EOF) {
                if (file->mState.eof != 0 && ptr != s) {
                    break;
                }

                __end_critical_region(stdin_access);
                return NULL;
            }

            *ptr++ = c;
        } while (c != '\n' && --n);
    }

    __end_critical_region(stdin_access);
    *ptr = 0;

    return s;
}
