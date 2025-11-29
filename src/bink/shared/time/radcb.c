#include "binkngc.h"
#include <dolphin/os/OSAlarm.h>

// TODO: review the args here and make sure these make some sort of sense.
// Considering there are multiple different structs that these functions could access and still match try to be mindful of which you use
// Using BINKREALTIME seems to make the most sense at this moment

void RADCB_register_callback(BINKSUMMARY* bnk, BINKSUMMARY* bnkReal, HBINK bnk3, HBINK bnk4)
{
}

u32 RADCB_unregister_callback(BINKREALTIME* bnk, BINKREALTIME* bnk1, u32 tmp)
{
    int iVar1;
    u32 uVar2;

    uVar2 = 0;
    if ((((bnk != 0) && (bnk1 != 0)) && (bnk1->FramesAudioDecompTime != 0)) &&
        bnk1->FramesVideoDecompTime != 0)
    {
        OSDisableInterrupts();
        if (((remove_cb_from_list(bnk, bnk1) != 0) && (bnk = bnk + -1, (tmp & 1) != 0)) &&
            (bnk == 0))
        {
            uVar2 = 1;
            RADCB_free_handler(bnk);
        }
        OSRestoreInterrupts();
    }
    return uVar2;
}

u32 RADCB_unregister_2_callbacks(BINKIO* io, BINKIO* io2, BINKIO* io3, BINKIO* io4, u32 tmp)
{
    return RADCB_unregister_callback(io, io2, tmp) | RADCB_unregister_callback(io3, io4, tmp) << 1;
}

u32 RADCB_registered_count(BINKIO io)
{
    return io.ThreadTime;
}

u32 RADCB_try_to_suspend_handler(BINKREALTIME* bnk)
{
    u32 tmpReg;

    if ((bnk != 0))
    {
        OSDisableInterrupts();
        if (bnk->FrameNum == 1)
        {
            bnk->FrameNum = 2;
        }
        bnk->FrameRate = bnk->FrameRate + 1;
        OSRestoreInterrupts();
        tmpReg = 1;
        if (bnk->FrameNum == 1)
        {
            tmpReg = 0;
        }
    }
    else
    {
        tmpReg = 1;
    }
    return tmpReg;
}

void RADCB_suspend_handler(BINKIO* io)
{
    while (!RADCB_try_to_suspend_handler(io))
    {
        OSYieldThread();
    }
}

void RADCB_resume_handler(BINKREALTIME* bnk)
{
    if (bnk != NULL)
    {
        OSDisableInterrupts();
        bnk->FrameRate = bnk->FrameRate + -1;
        if (bnk->FrameRate == 0)
        {
            bnk->FrameNum = 1;
        }
        OSRestoreInterrupts();
    }
}

HBINK RADCB_try_to_suspend_callback(HBINK bnk, BINKREALTIME* bnk1)
{
    u32 tmpReg;

    if ((((bnk != 0) && (bnk1 != 0)) && (bnk1->FramesAudioDecompTime != 0)) &&
        bnk1->FramesVideoDecompTime != 0)
    {
        OSDisableInterrupts();
        if (bnk1->Frames == 1)
        {
            bnk1->Frames = 2;
        }
        bnk1->FramesTime = bnk1->FramesTime + 1;
        OSRestoreInterrupts();
        tmpReg = 1;
        if (bnk1->Frames == 1)
        {
            tmpReg = 0;
        }
    }
    else
    {
        tmpReg = 1;
    }
    return tmpReg;
}

void RADCB_suspend_callback(HBINK bnk, BINKREALTIME* bnk1)
{
    if ((((bnk != 0) && (bnk1 != 0)) && (bnk1->FramesAudioDecompTime != 0)) &&
        bnk1->FramesVideoDecompTime != 0)
    {
        while (RADCB_try_to_suspend_callback(bnk, bnk1) == 0)
        {
            OSYieldThread();
        }
    }
}

void RADCB_suspend_2_callbacks(BINKIO* io, BINKIO* io2, BINKIO* io3, BINKIO* io4)
{
    RADCB_suspend_callback(io, io2);
    RADCB_suspend_callback(io3, io4);
}

// TODO:
// Make sure that this function is correct.
// To get this match I had to mark FramesTime as volatile in the header
void RADCB_resume_callback(HBINK bnk, BINKREALTIME* bnk1)
{
    if ((((bnk != 0) && (bnk1 != 0)) && (bnk1->FramesAudioDecompTime != 0)) &&
        bnk1->FramesVideoDecompTime != 0)
    {
        OSDisableInterrupts();
        bnk1->FramesTime--;
        if (bnk1->FramesTime == 0)
        {
            bnk1->Frames = 1;
        }

        OSRestoreInterrupts();
    }
}

void RADCB_suspend_2_handlers(BINKIO* io, BINKIO* io2)
{
    RADCB_suspend_handler(io);
    RADCB_suspend_handler(io2);
}

void RADCB_free_handler(RADARAMCALLBACKS* callback)
{
    if (callback != NULL)
    {
        RADCB_suspend_handler(callback);
        OSCancelAlarm(callback + 1);
        radfree(callback);
    }
}

void RADCB_free_2_handlers(BINKIO* io, BINKIO* io2)
{
    RADCB_free_handler(io);
    RADCB_free_handler(io2);
}

void RADCB_idle_on_callbacks()
{
}

u32 RADCB_callback_size()
{
    return 28;
}
