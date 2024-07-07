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

//

void MemoryProtectionErrorHandler(U16 last, OSContext* ctx, U64 unk1, U64 unk2)
{
    last_error = last;
    last_context = ctx;
    if (ctx->fpscr)
    {
        null_func();
    }
}

#if 0
// WIP.
void TRCInit()
{
    iTRCDisk::Init();
    iTRCDisk::SetPadStopRumblingFunction(iPadStopRumble);
    iTRCDisk::SetSndSuspendFunction(iSndSuspend);
    iTRCDisk::SetSndResumeFunction(iSndResume);
    iTRCDisk::SetSndKillFunction(iSndDIEDIEDIE);
    iTRCDisk::SetMovieSuspendFunction(iFMV::Suspend);
    iTRCDisk::SetMovieResumeFunction(iFMV::Resume);
    ResetButton::SetSndKillFunction(iSndDIEDIEDIE);
}

#endif

/*
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
}
*/

S32 RenderWareExit()
{
    RwEngineStop();
    RwEngineClose();
    return RwEngineTerm();
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
        // TODO: clear this up
        // some number is compared against 0xbeef in the assembly.
        // 0xbeef was probably a hardcoded constant Heavy iron used.
        // if (*(U32*)((S32)__ptr + -4) + 0x2153 == 0xbeef)
        if (*(S32*)((S32)__ptr + -4) == -0x21524111)
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

#if 0
// Template for future use.
char* iGetCurrFormattedDate(char* input)
{
}

#endif

#if 0
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

#endif
