#ifndef _SIGNAL_H
#define _SIGNAL_H

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef void (*sig_func)(int sig);

int raise(int sig);

#ifdef __cplusplus
}
#endif

#endif
