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

extern uint32 mem_base_alloc;
extern uint32 add;
extern uint32 size;
extern int32 gEmergencyMemLevel;
extern OSHeapHandle the_heap;
extern void* bad_val;
extern void* MemoryFunctions[4];
extern uint16 last_error;
extern OSContext* last_context;

void** psGetMemoryFunctions()
{
    return MemoryFunctions;
}

void iVSync()
{
    VIWaitForRetrace();
}

uint16 my_dsc(uint16 dsc)
{
    return dsc;
}





//

void MemoryProtectionErrorHandler(uint16 last, OSContext* ctx, uint64 unk1, uint64 unk2)
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










int32 RenderWareExit()
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
void mem_null(uint32 param_1, uint32 param_2)
{
    add = param_1;
    size = param_2;
}

void* malloc(uint32 __size)
{
    if ((int32)__size <= 0)
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
        // if (*(uint32*)((int32)__ptr + -4) + 0x2153 == 0xbeef)
        if (*(int32*)((int32)__ptr + -4) == -0x21524111)
        {
            free((void*)((int32)__ptr - 32));
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

int32 iGetMinute()
{
    OSTime ticks = OSGetTime();
    OSCalendarTime td;
    OSTicksToCalendarTime(ticks, &td);
    return td.min;
}

int32 iGetHour()
{
    OSTime ticks = OSGetTime();
    OSCalendarTime td;
    OSTicksToCalendarTime(ticks, &td);
    return td.hour;
}

int32 iGetDay()
{
    OSTime ticks = OSGetTime();
    OSCalendarTime td;
    OSTicksToCalendarTime(ticks, &td);
    return td.mday;
}

int32 iGetMonth()
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
    return ret + (0xd - (int32)input);
}

#endif
