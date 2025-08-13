#include "iSystem.h"

#include <types.h>

#include <rwcore.h>

#include "xDebug.h"
#include "xMath.h"
#include "xSnd.h"
#include "xPad.h"
#include "xMemMgr.h"

#include "iSystem.h"
#include "iFile.h"
#include "iTime.h"
#include "iTRC.h"

extern U32 mem_base_alloc;
extern U32 add;
extern U32 size;
extern S32 gEmergencyMemLevel;
extern OSHeapHandle the_heap;
extern void* bad_val;
extern void* MemoryFunctions[4];
extern U16 last_error;
extern OSContext* last_context;

// Taken from iSystem.s
// Defining these here makes the stringBase0 offsets match in the later functions.
static char* str1 = "Level %d, Warning $03d: %s\n";
static char* str2 = "FPE: Invalid operation: ";
static char* str3 = "SNaN\n";
static char* str4 = "Infinity - Infinity\n";
static char* str5 = "Infinity / Infinity\n";
static char* str6 = "0 / 0\n";
static char* str7 = "Infinity * 0\n";
static char* str8 = "Invalid compare\n";
static char* str9 = "Software request\n";
static char* str10 = "Invalid square root\n";
static char* str11 = "Invalid integer convert\n";
static char* str12 = "FPE: Overflow\n";
static char* str13 = "FPE: Underflow\n";
static char* str14 = "FPE: Zero division\n";
static char* str15 = "FPE: Inexact result\n";
static char* str16 = "iSystem.cpp";
static char* str17 = "Unable to initialize memory system.\n";
static char* str18 = "(With apologies to Jim Morrison) This the end, my only friend, The End.";
static char* str19 = "%s.rw3";

void** psGetMemoryFunctions()
{
    return MemoryFunctions;
}

void iVSync()
{
    VIWaitForRetrace();
}

U16 my_dsc(U16 dsc)
{
    return dsc;
}

void FloatingPointErrorHandler(U16 last, OSContext* ctxt, U64 unk1, U64 unk2)
{
    U32 uVar2;
    uVar2 = (ctxt->fpscr) & 0xf8 << 0x16 | 0x1f80700;
    if ((uVar2 & 0x20000000) != 0)
    {
        OSReport("FPE: Invalid operation: ");

        if ((uVar2 & 0x1000000) != 0)
        {
            OSReport("SNaN\n");
        }
        if ((uVar2 & 0x800000) != 0)
        {
            OSReport("Infinity - Infinity\n");
        }
        if ((uVar2 & 0x400000) != 0)
        {
            OSReport("Infinity / Infinity\n");
        }
        if ((uVar2 & 0x200000) != 0)
        {
            OSReport("0 / 0\n");
        }
        if ((uVar2 & 0x100000) != 0)
        {
            OSReport("Infinity * 0\n");
        }
        if ((uVar2 & 0x80000) != 0)
        {
            OSReport("Invalid compare\n");
        }
        if ((uVar2 & 0x400) != 0)
        {
            OSReport("Software request\n");
        }
        if ((uVar2 & 0x200) != 0)
        {
            OSReport("Invalid square root\n");
        }
        if ((uVar2 & 0x100) != 0)
        {
            OSReport("Invalid integer convert\n");
        }
    }
    if ((uVar2 & 0x10000000) != 0)
    {
        OSReport("FPE: Overflow\n");
    }
    if ((uVar2 & 0x8000000) != 0)
    {
        OSReport("FPE: Underflow\n");
    }
    if ((uVar2 & 0x4000000) != 0)
    {
        OSReport("FPE: Zero division\n");
    }
    if ((uVar2 & 0x2000000) != 0)
    {
        OSReport("FPE: Inexact result\n");
    }
    ctxt->srr0 = ctxt->srr0 + 4;
}

void MemoryProtectionErrorHandler(U16 last, OSContext* ctx, U64 unk1, U64 unk2)
{
    last_error = last;
    last_context = ctx;
    if (ctx->fpscr)
    {
        null_func();
    }
}

// FIXME: Define a bunch of functions :)
void TRCInit()
{
    iTRCDisk::Init();
    // iTRCDisk::SetPadStopRumblingFunction(iPadStopRumble);
    // iTRCDisk::SetSndSuspendFunction(iSndSuspend);
    // iTRCDisk::SetSndResumeFunction(iSndResume);
    // iTRCDisk::SetSndKillFunction(iSndDIEDIEDIE);
    // iTRCDisk::SetMovieSuspendFunction(iFMV::Suspend);
    // iTRCDisk::SetMovieResumeFunction(iFMV::Resume);
    // ResetButton::SetSndKillFunction(iSndDIEDIEDIE);
}

S32 RenderWareExit()
{
    RwEngineStop();
    RwEngineClose();
    return RwEngineTerm();
}

void iSystemExit()
{
    xDebugExit();
    xMathExit();
    RenderWareExit();
    xSndExit();
    xPadKill();
    iFileExit();
    iTimeExit();
    xMemExit();
    OSPanic("iSystem.cpp", 0x21d,
            "(With apologies to Jim Morrison) This the end, my only friend, The End.");
}

void null_func()
{
    mem_base_alloc += 4;
}

extern "C" {
void mem_null(U32 param_1, U32 param_2)
{
    add = param_1;
    size = param_2;
}

void* malloc(U32 __size)
{
    if ((S32)__size <= 0)
    {
        return NULL;
    }

    void* result = OSAllocFromHeap(the_heap, __size);

    if (result == NULL)
    {
        null_func();
    }

    return result;
}

void free(void* __ptr)
{
    if (__ptr != NULL)
    {
        OSFreeToHeap(the_heap, __ptr);
    }
}
}

void _rwDolphinHeapFree(void* __ptr)
{
    if (__ptr == bad_val)
    {
        mem_null(0, 0);
    }
    if (__ptr != NULL)
    {
        if (*(S32*)((S32)__ptr - 4) == 0xDEADBEEF)
        {
            free((void*)((S32)__ptr - 32));
        }
        else
        {
            null_func();
            if (gEmergencyMemLevel != 0)
            {
                xMemPopBase(gEmergencyMemLevel);
                gEmergencyMemLevel = 0;
            }
        }
    }
}

S32 iGetMinute()
{
    OSTime ticks = OSGetTime();
    OSCalendarTime td;
    OSTicksToCalendarTime(ticks, &td);
    return td.min;
}

S32 iGetHour()
{
    OSTime ticks = OSGetTime();
    OSCalendarTime td;
    OSTicksToCalendarTime(ticks, &td);
    return td.hour;
}

S32 iGetDay()
{
    OSTime ticks = OSGetTime();
    OSCalendarTime td;
    OSTicksToCalendarTime(ticks, &td);
    return td.mday;
}

S32 iGetMonth()
{
    OSTime ticks = OSGetTime();
    OSCalendarTime td;
    OSTicksToCalendarTime(ticks, &td);
    return td.mon + 1;
}

// Template for future use. TODO
char* iGetCurrFormattedDate(char* input)
{
    return NULL;
}

// WIP.
char* iGetCurrFormattedTime(char* input)
{
    OSTime ticks = OSGetTime();
    OSCalendarTime td;
    OSTicksToCalendarTime(ticks, &td);
    bool pm = false;
    // STUFF.
    char* ret = input;
    // STUFF.
    if (pm)
    {
        ret[8] = 'P';
        ret[9] = '.';
        ret[10] = 'M';
        ret[11] = '.';
    }
    else
    {
        ret[8] = 'A';
        ret[9] = '.';
        ret[10] = 'M';
        ret[11] = '.';
    }
    ret[12] = '\0';
    return ret + (0xd - (S32)input);
}
