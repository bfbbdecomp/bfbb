#include "dolphin/dsp.h"
#include "dolphin/os.h"

#include "dolphin/hw_regs.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef DEBUG
const char* __DSPVersion = "<< Dolphin SDK - DSP\tdebug build: Apr  5 2004 03:56:49 (0x2301) >>";
#else
const char* __DSPVersion = "<< Dolphin SDK - DSP\trelease build: Apr 17 2003 12:34:16 (0x2301) >>";
#endif

static s32 __DSP_init_flag = 0;
extern DSPTaskInfo* __DSP_tmp_task;
extern DSPTaskInfo* __DSP_last_task;
extern DSPTaskInfo* __DSP_first_task;
extern DSPTaskInfo* __DSP_curr_task;
extern DSPTaskInfo* __DSP_rude_task;
extern s32 __DSP_rude_task_pending;

extern void __DSPHandler(__OSInterrupt, OSContext*);
extern void __DSP_debug_printf(const char* fmt, ...);
extern void __DSP_boot_task(DSPTaskInfo* task);

u32 DSPCheckMailToDSP(void)
{
    return (__DSPRegs[0] >> 0xF) & 1;
}

u32 DSPCheckMailFromDSP(void)
{
    return (__DSPRegs[2] >> 0xF) & 1;
}

u32 DSPReadMailFromDSP()
{
    u16 reg1;
    u16 reg2;
    reg1 = __DSPRegs[2];
    reg2 = __DSPRegs[3];
    return reg1 << 16 | reg2;
}

void DSPSendMailToDSP(u32 mail)
{
    __DSPRegs[0] = mail >> 16;
    __DSPRegs[1] = mail;
}

void DSPInit(void)
{
    u32 oldInt;
    u16 reg;
    __DSP_debug_printf("DSPInit(): Build Date: %s %s\n", "Apr 17 2003", "12:34:16");

    if (__DSP_init_flag == 1)
    {
        return;
    }
    OSRegisterVersion(__DSPVersion);
    oldInt = OSDisableInterrupts();
    __OSSetInterruptHandler(7, __DSPHandler);
    __OSUnmaskInterrupts(0x1000000);
    reg = __DSPRegs[5];
    reg = (reg & ~0xA8) | 0x800;
    __DSPRegs[5] = reg;
    reg = __DSPRegs[5];
    reg = reg & ~0xAC;
    __DSPRegs[5] = reg;
    __DSP_tmp_task = 0;
    __DSP_curr_task = 0;
    __DSP_last_task = 0;
    __DSP_first_task = 0;
    __DSP_init_flag = 1;
    OSRestoreInterrupts(oldInt);
}

int DSPCheckInit()
{
    return __DSP_init_flag;
}

// it's possible to override this function but it wasn't done with DECL_WEAK(according to the symbol map)
DECL_WEAK DSPTaskInfo* DSPAddTask(DSPTaskInfo* task)
{
    u32 oldInt;
    oldInt = OSDisableInterrupts();
    __DSP_insert_task(task);
    task->state = 0;
    task->flags = 1;
    OSRestoreInterrupts(oldInt);
    if (task == __DSP_first_task)
    {
        __DSP_boot_task(task);
    }

    return task;
}

DSPTaskInfo* DSPCancelTask(DSPTaskInfo* task)
{
    BOOL old;

    old = OSDisableInterrupts();

    task->flags |= 2;

    OSRestoreInterrupts(old);
    return task;
}

DSPTaskInfo* DSPAssertTask(DSPTaskInfo* task)
{
    s32 old;

    old = OSDisableInterrupts();

    if (__DSP_curr_task == task)
    {
        __DSP_rude_task = task;
        __DSP_rude_task_pending = 1;
        OSRestoreInterrupts(old);
        return task;
    }

    if (task->priority < __DSP_curr_task->priority)
    {
        __DSP_rude_task = task;
        __DSP_rude_task_pending = 1;
        if (__DSP_curr_task->state == 1)
        {
            u32 enabled;

            enabled = OSDisableInterrupts();

            __DSPRegs[DSP_CONTROL_STATUS] = (__DSPRegs[DSP_CONTROL_STATUS] &
                                             ~(DSP_CSR_AIDINT | DSP_CSR_ARINT | DSP_CSR_DSPINT)) |
                                            DSP_CSR_PIINT;

            OSRestoreInterrupts(enabled);
        }

        OSRestoreInterrupts(old);
        return task;
    }

    OSRestoreInterrupts(old);
    return NULL;
}

#ifdef __cplusplus
}
#endif
