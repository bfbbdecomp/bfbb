#ifndef RADCB_H
#define RADCB_H

#include "radbase.h"

typedef struct RADCB_HANDLER RADCB_HANDLER;
typedef struct RADCB_CALLBACK RADCB_CALLBACK;
typedef u32(RADLINK PTR4* RADCB_POLL)(RADCB_CALLBACK PTR4* callback, u32 count);
typedef void(RADLINK PTR4* RADCB_RUN)(RADCB_CALLBACK PTR4* callback, u32 count);

struct RADCB_CALLBACK
{
    RADCB_CALLBACK PTR4* next;
    u32 unused;
    u32 result; /* Last nonzero poll result for this callback. */
    u32 state;
    volatile u32 suspend_count;
    RADCB_POLL poll;
    RADCB_RUN run;
};

#define RADCB_CALLBACK_STORAGE_WORDS 16

typedef union RADCB_CALLBACK_STORAGE
{
    RADCB_CALLBACK callback;
    u32 words[RADCB_CALLBACK_STORAGE_WORDS];
} RADCB_CALLBACK_STORAGE;

RADCB_HANDLER PTR4* RADCB_allocate_handler(u32 rate);
void RADCB_register_callback(RADCB_HANDLER PTR4* handler, RADCB_CALLBACK PTR4* callback,
                             RADCB_POLL poll, RADCB_RUN run);
u32 RADCB_unregister_callback(RADCB_HANDLER PTR4* handler, RADCB_CALLBACK PTR4* callback,
                              u32 flags);
u32 RADCB_unregister_2_callbacks(RADCB_HANDLER PTR4* handler1, RADCB_CALLBACK PTR4* callback1,
                                 RADCB_HANDLER PTR4* handler2, RADCB_CALLBACK PTR4* callback2,
                                 u32 flags);
u32 RADCB_registered_count(RADCB_HANDLER PTR4* handler);
u32 RADCB_try_to_suspend_handler(RADCB_HANDLER PTR4* handler);
void RADCB_suspend_handler(RADCB_HANDLER PTR4* handler);
void RADCB_resume_handler(RADCB_HANDLER PTR4* handler);
u32 RADCB_try_to_suspend_callback(RADCB_HANDLER PTR4* handler, RADCB_CALLBACK PTR4* callback);
void RADCB_suspend_callback(RADCB_HANDLER PTR4* handler, RADCB_CALLBACK PTR4* callback);
void RADCB_suspend_2_callbacks(RADCB_HANDLER PTR4* handler1, RADCB_CALLBACK PTR4* callback1,
                               RADCB_HANDLER PTR4* handler2, RADCB_CALLBACK PTR4* callback2);
void RADCB_resume_callback(RADCB_HANDLER PTR4* handler, RADCB_CALLBACK PTR4* callback);
void RADCB_suspend_2_handlers(RADCB_HANDLER PTR4* handler1, RADCB_HANDLER PTR4* handler2);
void RADCB_free_handler(RADCB_HANDLER PTR4* handler);
void RADCB_free_2_handlers(RADCB_HANDLER PTR4* handler1, RADCB_HANDLER PTR4* handler2);
void RADCB_idle_on_callbacks(void);
u32 RADCB_callback_size(void);

#endif
