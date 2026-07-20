#ifndef BINK_SDK_FFT_H
#define BINK_SDK_FFT_H

#include "bink.h"

void rdft(u32 n, s32 isgn, f32 PTR4* a, s32 PTR4* ip, f32 PTR4* w);
void ddct(u32 n, s32 isgn, f32 PTR4* a, s32 PTR4* ip, f32 PTR4* w);

#endif
