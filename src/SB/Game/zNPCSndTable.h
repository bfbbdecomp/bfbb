#ifndef ZNPCSNDTABLE_H
#define ZNPCSNDTABLE_H

#include "zNPCSndLists.h"

#include <types.h>

struct NPCSndQueue //0x14
{
    U32 sndDirect; //0x0
    en_NPC_SOUND sndtype; //0x4
    S32 flg_snd; //0x8
    F32 tmr_delay; //0xC
    F32 radius; //0x10
};

void NPCS_Startup();
void NPCS_SndTimersReset();
void NPCS_SndTimersUpdate(F32 dt);
void NPCS_SndTablePrepare(NPCSndTrax* trax);
void NPCS_Shutdown();

#endif
