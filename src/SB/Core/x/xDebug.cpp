#include "xDebug.h"

#include <types.h>

uint32 gFrameCount;

extern float32 _781; // 0.0020833334f.
extern float32 _783; // 0.0015625f.

void xprintf(const char* msg, ...)
{
    // Redacted. :}
}

int32 xDebugModeAdd(char* mode, void(*debugFunc))
{
    // Redacted. :}
    return -1;
}

void xDebugInit()
{
    // Redacted. :}
}

void xDebugUpdate()
{
    // Redacted. :}
}

void xDebugExit()
{
    // Redacted. :}
}

void xDebugTimestampScreen()
{
    // Redacted. :}
}

void xtextbox::render(bool cache) const
{
    render(temp_layout(cache), 0, -1);
}

float32 NSCREENY(float32 scale)
{
    return _781 * scale;
}

float32 NSCREENX(float32 scale)
{
    return _783 * scale;
}
