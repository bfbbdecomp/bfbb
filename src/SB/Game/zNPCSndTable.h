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
void NPCS_SndTimersUpdate(F32 dt);
void NPCS_SndTimersReset();
void NPCS_SndTypePlayed(en_NPC_SOUND sndtype, F32 delayNext);
S32 NPCS_SndOkToPlay(en_NPC_SOUND sndtype);
void NPCS_SndTablePrepare(NPCSndTrax* trax);
NPCSndProp* NPCS_SndFindProps(en_NPC_SOUND sndtype);
en_NPC_SOUND NPCS_SndTypeFromHash(U32 aid_snd, NPCSndTrax* cust, NPCSndTrax* share);
void NPCS_Shutdown();

#endif
