#include "dolphin/dvd.h"
#include "dolphin/gx/GXStruct.h"
#include "dolphin/os.h"
#include "dolphin/vi.h"

void __DVDPrintFatalMessage(void);

static void (*FatalFunc)(void) = NULL;

void __DVDPrintFatalMessage(void)
{
    if (!FatalFunc)
    {
        return;
    }
    FatalFunc();
}