#include "xDebug.h"

#include <types.h>

U32 gFrameCount;

extern F32 _781; // 0.0020833334f.
extern F32 _783; // 0.0015625f.

void xprintf(const char* msg, ...)
{
    // Redacted. :}
}

S32 xDebugModeAdd(char* mode, void(*debugFunc))
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

F32 NSCREENY(F32 scale)
{
    return _781 * scale;
}

F32 NSCREENX(F32 scale)
{
    return _783 * scale;
}
