#ifndef _WCHAR_H
#define _WCHAR_H

#include "types.h"
#include "stdio.h"

#ifdef __cplusplus
extern "C" {
#endif

int fwide(FILE* stream, int mode);

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif
