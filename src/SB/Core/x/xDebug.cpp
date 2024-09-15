#include "xDebug.h"
#include "xFont.h"

#include "iColor.h"

#include <types.h>

U32 gFrameCount;

// Remaining weak definitions will match once referenced e.g. iColor_tag::operator=

void xprintf(const char* msg, ...)
{
    // Redacted. :}
}

S32 xDebugModeAdd(const char* mode, void(*debugFunc)())
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
    return (1.0f / 480) * scale;
}

F32 NSCREENX(F32 scale)
{
    return (1.0f / 640) * scale;
}