#ifndef RADCD_H
#define RADCB_H

#include "bink.h"

void RADCB_unregister_2_callbacks(BINKIO* io);
U32 RADCB_registered_count(BINKIO io);
U32 RADCB_try_to_suspend_handler(BINKIO* io);
void RADCB_suspend_handler(BINKIO* io);
void RADCB_resume_handler(BINKIO* io);
void RADCB_try_to_suspend_callback(HBINK bnk, HBINK bnk1);
void RADCB_suspend_callback(HBINK bnk, HBINK bnk1);
void RADCB_suspend_2_callbacks(BINKIO* io, BINKIO* io2, BINKIO* io3, BINKIO* io4);
void RADCB_resume_callback(HBINK bnk, HBINK bnk1);
void RADCB_suspend_2_handlers(BINKIO* io, BINKIO* io2);
void RADCB_free_handler(RADARAMCALLBACKS* callback);
void RADCB_free_2_handlers(BINKIO* io, BINKIO* io2);
void RADCB_idle_on_callbacks();
U32 RADCB_callback_size();

#endif
