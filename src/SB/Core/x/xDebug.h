#ifndef XDEBUG_H
#define XDEBUG_H

#include "xFont.h"

#include <types.h>

extern U32 gFrameCount;

void xprintf(const char* msg, ...);
S32 xDebugModeAdd(char* mode, void(*debugFunc));
void xDebugInit();
void xDebugUpdate();
void xDebugExit();
void xDebugTimestampScreen();

void xDebugRemoveTweak(const char*);
void xDebugUpdate();

F32 NSCREENY(F32 scale);
F32 NSCREENX(F32 scale);

#endif
