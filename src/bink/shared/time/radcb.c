#include "binkngc.h"
#include <dolphin/os/OSAlarm.h>

void RADCB_unregister_2_callbacks(BINKIO* io)
{
}

u32 RADCB_registered_count(BINKIO io)
{
    return io.ThreadTime;
}

u32 RADCB_try_to_suspend_handler(BINKIO* io)
{
}

void RADCB_suspend_handler(BINKIO* io)
{
    while (!RADCB_try_to_suspend_handler(io))
    {
        OSYieldThread();
    }
}

// TODO:
// BINKIO* as the arg probably isnt right
// io->callback_control is definitely wrong
void RADCB_resume_handler(BINKIO* io)
{
    if (io != NULL)
    {
        OSDisableInterrupts();
        io->callback_control[1] = io->callback_control[1] + -1;
        if (io->callback_control[1] == 0)
        {
            io->ReadHeader = 1;
        }
        OSRestoreInterrupts();
    }
}

void RADCB_try_to_suspend_callback(HBINK bnk, HBINK bnk1)
{
}

// (int param_1,int param_2)
void RADCB_suspend_callback(HBINK bnk, HBINK bnk1)
{
    return;
}

void RADCB_suspend_2_callbacks(BINKIO* io, BINKIO* io2, BINKIO* io3, BINKIO* io4)
{
    RADCB_suspend_callback(io, io2);
    RADCB_suspend_callback(io3, io4);
}

void RADCB_resume_callback(HBINK bnk, HBINK bnk1)
{
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
