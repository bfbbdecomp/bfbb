#ifndef _STDIO_H
#define _STDIO_H

#include "types.h"
#include "stdarg.h"

typedef unsigned long __file_handle;
typedef unsigned long fpos_t;
typedef struct _IO_FILE _IO_FILE, *P_IO_FILE;

#define __ungetc_buffer_size 2

enum __file_kinds { __closed_file, __disk_file, __console_file, __unavailable_file };

enum __file_orientation { __unoriented, __char_oriented, __wide_oriented };

typedef struct __file_modes {
	u32 open_mode : 2;
	u32 io_mode : 3;
	u32 buffer_mode : 2;
	u32 file_kind : 3;

#ifdef _MSL_WIDE_CHAR
	u32 file_orientation : 2;
#endif /* _MSL_WIDE_CHAR */

	u32 binary_io : 1;
} file_modes;

enum __io_states { __neutral, __writing, __reading, __rereading };

typedef struct __file_states {
	u32 io_state : 3;
	u32 free_buffer : 1;

	u8 eof;
	u8 error;
} file_states;

typedef void* __ref_con;
typedef void (*__idle_proc)(void);
typedef int (*__pos_proc)(__file_handle file, fpos_t* position, int mode, __ref_con ref_con);
typedef int (*__io_proc)(__file_handle file, char* buff, size_t* count, __ref_con ref_con);
typedef int (*__close_proc)(__file_handle file);

struct _IO_FILE {
	__file_handle mHandle;                           // _00
	file_modes mMode;                                // _04
	file_states mState;                              // _08
	u8 mIsDynamicallyAllocated;                      // _0C
	u8 mCharBuffer;                                  // _0D
	u8 mCharBufferOverflow;                          // _0E
	u8 mUngetcBuffer[__ungetc_buffer_size];          // _0F
	wchar_t mUngetcWideBuffer[__ungetc_buffer_size]; // _12
	u32 mPosition;                                   // _18
	char* mBuffer;                                   // _1C
	u32 mBufferSize;                                 // _20
	char* mBufferPtr;                                // _24
	u32 mBufferLength;                               // _28
	u32 mBufferAlignment;                            // _2C
	u32 mBufferLength2;                              // _30
	u32 mBufferPosition;                             // _34
	__pos_proc positionFunc;                         // _38
	__io_proc readFunc;                              // _3C
	__io_proc writeFunc;                             // _40
	__close_proc closeFunc;                          // _44
	__ref_con ref_con;                               // _48
	_IO_FILE* mNextFile;                             // _4C
};

typedef struct _IO_FILE FILE;

extern FILE __files[4];

#define stdin  &(__files[0])
#define stdout &(__files[1])
#define stderr &(__files[2])

enum __ReadProcActions { __GetAChar, __UngetAChar, __TestForError };

enum __WReadProcActions { __GetAwChar, __UngetAwChar, __TestForwcsError };

typedef struct {
	char* CharStr;
	size_t MaxCharCount;
	size_t CharsWritten;
} __OutStrCtrl;

typedef struct {
	char* NextChar;
	int NullCharDetected;
} __InStrCtrl;

typedef struct {
	wchar_t* wCharStr;
	size_t MaxCharCount;
	size_t CharsWritten;
} __wOutStrCtrl;

typedef struct {
	wchar_t* wNextChar;
	int wNullCharDetected;
} __wInStrCtrl;

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

extern void (*__stdio_exit)(void);

int fclose(FILE* file);
int fflush(FILE* file);

int fseek(FILE *stream, fpos_t offset, int whence);
int _fseek(FILE *stream, fpos_t offset, int whence);
int ftell(FILE *stream);
int _ftell(FILE *stream);

// fread
size_t fwrite(const void* pPtr, size_t memb_size, size_t num_memb, FILE* pFile);

int fputs(const char* str, FILE* stream);

void printf(const char*, ...);
// printf_s
int fprintf(FILE*, const char* format, ...);
// fprintf_s
int vprintf(const char*, va_list);
// vprintf_s
// vfprintf
// vfprintf_s
int vsnprintf(char*, size_t, const char*, va_list);
// vsnprintf_s
int vsprintf(char*, const char*, va_list);
// vsprintf_s
int snprintf(char*, size_t, const char*, ...);
// snprintf_s
int sprintf(char*, const char*, ...);
// sprintf_s

// fscanf
// fscanf_s
// vscanf
// scanf
// scanf_s
// vfscanf
// vfscanf_s
int vsscanf(const char*, const char*, va_list);
// vsscanf_s
int sscanf(const char*, const char*, ...);
// sscanf_s

void __convert_from_newlines(char *buffer, size_t *length);
int __flush_buffer(FILE* file, size_t* length);
void __prep_buffer(FILE* file);
u32 __flush_all();
int __put_char(int c, FILE* stream);
void __stdio_atexit();
// __fread
size_t __fwrite(const void* pPtr, size_t memb_size, size_t num_memb, FILE* pFile);
int __StringRead(void*, int, int);
// wint_t __wStringRead(void*, wint_t, int);

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif
