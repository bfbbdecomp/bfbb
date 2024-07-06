#ifndef XDEBUG_H
#define XDEBUG_H

#include "xFont.h"

#include <types.h>

extern uint32 gFrameCount;

void xprintf(const char* msg, ...);
int32 xDebugModeAdd(char* mode, void(*debugFunc));
void xDebugInit();
void xDebugUpdate();
void xDebugExit();
void xDebugTimestampScreen();

void xDebugRemoveTweak(const char*);
void xDebugUpdate();

float32 NSCREENY(float32 scale);
float32 NSCREENX(float32 scale);

#endif
