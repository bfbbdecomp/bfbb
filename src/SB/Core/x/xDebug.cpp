#include "xDebug.h"

#include <types.h>

U32 gFrameCount;

// Remaining weak definitions will match once referenced e.g. iColor_tag::operator=

void xprintf(const char* msg, ...)
{
    // Redacted. :}
}

S32 xDebugModeAdd(const char* mode, void (*debugFunc)())
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

void __deadstripped_xDebug(F32 f, iColor_tag col)
{
    basic_rect<F32> r1;
    basic_rect<F32> r2;
    r1 = r2;
    r1.contract(f, f, f, f);

    F32 x = NSCREENX(f);
    F32 y = NSCREENY(f);
    
    xfont font;
    font = xfont::create(0, f, f, f, col, r1);
    xtextbox textbox = xtextbox::create(font, r1, 0, f, f, f, f);
    textbox.render(true);
}
