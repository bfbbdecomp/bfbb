#ifndef ZNPCSPAWNER_H
#define ZNPCSPAWNER_H

#include <types.h>

enum en_SM_NOTICES
{
    SM_NOTE_NPCDIED,
    SM_NOTE_NPCSTANDBY,
    SM_NOTE_NPCALIVE,
    SM_NOTE_DUPPAUSE,
    SM_NOTE_DUPRESUME,
    SM_NOTE_DUPSETDELAY,
    SM_NOTE_DUPDEAD,
    SM_NOTE_KILLKIDS,
    SM_NOTE_NOMORE,
    SM_NOTE_FORCE = 0x7fffffff
};

void zNPCSpawner_Startup();
void zNPCSpawner_Shutdown();

#endif