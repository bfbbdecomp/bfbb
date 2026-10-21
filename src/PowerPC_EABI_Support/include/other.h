#ifndef _OTHER_H
#define _OTHER_H

#include "types.h"

#define _MSL_CANT_THROW __attribute__((nothrow))

#define _MSL_THROW throw()

#ifndef _MSL_LOCALDATA
#define _MSL_LOCALDATA(_a) _a
#endif

#define __std(ref) ref

#define SIGDIGLEN 36

typedef struct decimal {
	char sign;
	char unk1;
	s16 exp;
	struct {
		u8 length;
		u8 text[36];
		u8 unk41;
	} sig;
} decimal;

typedef struct decform {
	char style;
	char unk1;
	short digits;
} decform;

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

enum critical_regions {
	atexit_funcs_access,
	malloc_pool_access,
	stdin_access,
	stdout_access,
	stderr_access,
	files_access,
	console_status_access,
	signal_funcs_access,
	thread_access,
	num_critical_regions
};

void __init_critical_regions(void);
void __kill_critical_regions(void);
void __begin_critical_region(int region);
void __end_critical_region(int region);

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

void __ull2dec(decimal*, u64);
void __timesdec(decimal*, const decimal*, const decimal*);
void __str2dec(decimal*, const char*, short);
void __two_exp(decimal*, long);
BOOL __equals_dec(const decimal*, const decimal*);
BOOL __less_dec(const decimal*, const decimal*);
void __minus_dec(decimal*, const decimal*, const decimal*);
void __num2dec_internal(decimal*, double);
void __num2dec(const decform*, double, decimal*);
double __dec2num(const decimal*);

#endif
