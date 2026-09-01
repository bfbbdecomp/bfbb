#include "binkngc.h"
#include "radcb.h"
#include <dolphin/os/OSAlarm.h>
#include <dolphin/os/OSThread.h>

typedef struct RAD_LOW_MEM RAD_LOW_MEM;

#define RAD_LOW_MEM_BUS_CLOCK_OFFSET 0xf8
#define RADCB_MILLISECONDS_PER_SECOND 1000
#define RADCB_BUS_CLOCK_DIVISOR 4000
#define RADCB_STATE_STOPPED 0
#define RADCB_STATE_RUNNING 1
#define RADCB_STATE_SUSPENDING 2
#define RADCB_UNREGISTER_FREE_EMPTY_HANDLER 1

struct RAD_LOW_MEM
{
    u8 pad[RAD_LOW_MEM_BUS_CLOCK_OFFSET];
    u32 bus_clock;
};

struct RADCB_HANDLER
{
    u32 state;
    volatile u32 suspend_count;
    OSAlarm alarm; /* Periodic timer that drives the callback list. */
    RADCB_CALLBACK PTR4* callbacks;
    u32 count; /* Tick counter passed to poll/run callbacks. */
    u32 registered_count;
    u32 pad;
};

#define RADCB_HANDLER_ALARM_OFFSET ((u32)&((RADCB_HANDLER PTR4*)0)->alarm)
#define RADCB_HANDLER_FROM_ALARM(alarm) ((RADCB_HANDLER PTR4*)((u8 PTR4*)(alarm) - RADCB_HANDLER_ALARM_OFFSET))

BOOL OSDisableInterrupts(void);
BOOL OSEnableInterrupts(void);
BOOL OSRestoreInterrupts(BOOL level);
void RADCB_free_handler(RADCB_HANDLER PTR4* handler);

static u32 remove_cb_from_list(RADCB_HANDLER PTR4* handler, RADCB_CALLBACK PTR4* callback)
{
    RADCB_CALLBACK PTR4* cb;

    if (handler == 0) {
        return 0;
    }

    cb = handler->callbacks;
    if (cb == callback) {
        handler->callbacks = cb->next;
        return 1;
    }

    while (cb->next != 0) {
        if (cb->next == callback) {
            cb->next = callback->next;
            return 1;
        }
        cb = cb->next;
    }

    return 0;
}

static void call_callbacks(RADCB_HANDLER PTR4* handler)
{
    RADCB_CALLBACK PTR4* cb;

    ++handler->count;

    if (handler->state == RADCB_STATE_RUNNING) {
        cb = handler->callbacks;
        while (cb != 0) {
            if (cb->state == RADCB_STATE_RUNNING) {
                cb->result = cb->poll(cb, handler->count);
                if (cb->result != 0) {
                    cb->run(cb, handler->count);
                }
            }
            cb = cb->next;
        }
    }
}

static void RAD_callback_timer(OSAlarm* alarm, OSContext* context)
{
    RADCB_HANDLER PTR4* handler = RADCB_HANDLER_FROM_ALARM(alarm);
    BOOL enabled;

    if (handler != 0 && handler->callbacks != 0) {
        enabled = OSEnableInterrupts();
        call_callbacks(handler);
        OSRestoreInterrupts(enabled);
    }
}

RADCB_HANDLER PTR4* RADCB_allocate_handler(u32 rate)
{
    OSAlarm PTR4* alarm;
    OSTime now;
    u32 period;
    volatile RAD_LOW_MEM PTR4* low_mem;
    RADCB_HANDLER PTR4* handler = (RADCB_HANDLER PTR4*)radmalloc(sizeof(*handler));
    volatile RADCB_HANDLER PTR4* init;

    if (handler != 0) {
        alarm = &handler->alarm;
        init = handler;
        memset(handler, 0, sizeof(*handler));
        init->state = RADCB_STATE_STOPPED;
        init->count = 1;
        init->registered_count = 0;
        init->suspend_count = 1;
        init->callbacks = 0;

        now = OSGetTime();
        low_mem = (volatile RAD_LOW_MEM PTR4*)0x80000000;
        period = (RADCB_MILLISECONDS_PER_SECOND / rate) *
                 (low_mem->bus_clock / RADCB_BUS_CLOCK_DIVISOR);
        OSSetPeriodicAlarm(alarm, now, period, RAD_callback_timer);
    }

    return handler;
}

void RADCB_register_callback(RADCB_HANDLER PTR4* handler, RADCB_CALLBACK PTR4* callback,
                             RADCB_POLL poll, RADCB_RUN run)
{
    BOOL enabled;

    enabled = OSDisableInterrupts();

    callback->state = RADCB_STATE_RUNNING;
    callback->poll = poll;
    callback->run = run;
    callback->suspend_count = 0;
    callback->next = handler->callbacks;
    handler->callbacks = callback;
    ++handler->registered_count;

    OSRestoreInterrupts(enabled);
}

u32 RADCB_unregister_callback(RADCB_HANDLER PTR4* handler, RADCB_CALLBACK PTR4* callback,
                              u32 flags)
{
    u32 freed = 0;
    BOOL enabled;

    if (handler != 0 && callback != 0 && callback->run != 0 && callback->poll != 0) {
        enabled = OSDisableInterrupts();
        if (remove_cb_from_list(handler, callback) != 0) {
            --handler->registered_count;
            if ((flags & RADCB_UNREGISTER_FREE_EMPTY_HANDLER) != 0 && handler->callbacks == 0) {
                freed = 1;
                RADCB_free_handler(handler);
            }
        }
        OSRestoreInterrupts(enabled);
    }

    return freed;
}

u32 RADCB_unregister_2_callbacks(RADCB_HANDLER PTR4* handler1, RADCB_CALLBACK PTR4* callback1,
                                 RADCB_HANDLER PTR4* handler2, RADCB_CALLBACK PTR4* callback2,
                                 u32 flags)
{
    return RADCB_unregister_callback(handler1, callback1, flags) |
           (RADCB_unregister_callback(handler2, callback2, flags) << 1);
}

u32 RADCB_registered_count(RADCB_HANDLER PTR4* handler)
{
    return handler->registered_count;
}

u32 RADCB_try_to_suspend_handler(RADCB_HANDLER PTR4* handler)
{
    u32 suspended;
    BOOL enabled;

    if (handler != 0) {
        enabled = OSDisableInterrupts();
        if (handler->state == RADCB_STATE_RUNNING) {
            handler->state = RADCB_STATE_SUSPENDING;
        }
        ++handler->suspend_count;
        OSRestoreInterrupts(enabled);

        suspended = 1;
        if (handler->state == RADCB_STATE_RUNNING) {
            suspended = 0;
        }
    } else {
        suspended = 1;
    }

    return suspended;
}

void RADCB_suspend_handler(RADCB_HANDLER PTR4* handler)
{
    while (RADCB_try_to_suspend_handler(handler) == 0) {
        OSYieldThread();
    }
}

void RADCB_resume_handler(RADCB_HANDLER PTR4* handler)
{
    BOOL enabled;

    if (handler != 0) {
        enabled = OSDisableInterrupts();
        --handler->suspend_count;
        if (handler->suspend_count == 0) {
            handler->state = RADCB_STATE_RUNNING;
        }
        OSRestoreInterrupts(enabled);
    }
}

u32 RADCB_try_to_suspend_callback(RADCB_HANDLER PTR4* handler, RADCB_CALLBACK PTR4* callback)
{
    u32 suspended;
    BOOL enabled;

    if (handler != 0 && callback != 0 && callback->run != 0 && callback->poll != 0) {
        enabled = OSDisableInterrupts();
        if (callback->state == RADCB_STATE_RUNNING) {
            callback->state = RADCB_STATE_SUSPENDING;
        }
        ++callback->suspend_count;
        OSRestoreInterrupts(enabled);

        suspended = 1;
        if (callback->state == RADCB_STATE_RUNNING) {
            suspended = 0;
        }
    } else {
        suspended = 1;
    }

    return suspended;
}

void RADCB_suspend_callback(RADCB_HANDLER PTR4* handler, RADCB_CALLBACK PTR4* callback)
{
    if (handler != 0 && callback != 0 && callback->run != 0 && callback->poll != 0) {
        while (RADCB_try_to_suspend_callback(handler, callback) == 0) {
            OSYieldThread();
        }
    }
}

void RADCB_suspend_2_callbacks(RADCB_HANDLER PTR4* handler1, RADCB_CALLBACK PTR4* callback1,
                               RADCB_HANDLER PTR4* handler2, RADCB_CALLBACK PTR4* callback2)
{
    RADCB_suspend_callback(handler1, callback1);
    RADCB_suspend_callback(handler2, callback2);
}

void RADCB_resume_callback(RADCB_HANDLER PTR4* handler, RADCB_CALLBACK PTR4* callback)
{
    BOOL enabled;

    if (handler != 0 && callback != 0 && callback->run != 0 && callback->poll != 0) {
        enabled = OSDisableInterrupts();
        --callback->suspend_count;
        if (callback->suspend_count == 0) {
            callback->state = RADCB_STATE_RUNNING;
        }
        OSRestoreInterrupts(enabled);
    }
}

void RADCB_suspend_2_handlers(RADCB_HANDLER PTR4* handler1, RADCB_HANDLER PTR4* handler2)
{
    RADCB_suspend_handler(handler1);
    RADCB_suspend_handler(handler2);
}

void RADCB_free_handler(RADCB_HANDLER PTR4* handler)
{
    if (handler != 0) {
        RADCB_suspend_handler(handler);
        OSCancelAlarm(&handler->alarm);
        radfree(handler);
    }
}

void RADCB_free_2_handlers(RADCB_HANDLER PTR4* handler1, RADCB_HANDLER PTR4* handler2)
{
    RADCB_free_handler(handler1);
    RADCB_free_handler(handler2);
}

void RADCB_idle_on_callbacks(void)
{
}

u32 RADCB_callback_size(void)
{
    return sizeof(RADCB_CALLBACK);
}
