#ifndef ZVAR_H
#define ZVAR_H

#include <types.h>

#include "xString.h"

struct zVarEntry
{
    U32 entry;
    U32 varNameID;
    S8* varName;
    U32 (*varCB)(void*);
};

extern zVarEntry zVarEntryTable[19];
/*
zVarEntryTable contents:
(index in table = num for all entries)
Num  | Name     | Callback
---------------------------------------------------
0x00 | 8025FFEB | zVarEntryCB_SndMode
0x01 | 8025FFF6 | zVarEntryCB_SndMusicVol
0x02 | 80260003 | zVarEntryCB_SndFXVol
0x03 | 8026000E | zVarEntryCB_MCAvailable
0x04 | 80260024 | zVarEntryCB_VibrationOn
0x05 | 80260034 | zVarEntryCB_CurrentSceneLetter
0x06 | 80260044 | zVarEntryCB_CurrentRoom
0x07 | 80260049 | zVarEntryCB_CurrentLevelPickup
0x08 | 80260063 | zVarEntryCB_CurrentLevelPSocks
0x09 | 8026006F | zVarEntryCB_TotalPSocks
0x0A | 80260081 | zVarEntryCB_Shinies
0x0B | 8026008F | zVarEntryCB_Spatulas
0x0C | 8026009F | zVarEntryCB_Date
0x0D | 802600AC | zVarEntryCB_Hour
0x0E | 802600B9 | zVarEntryCB_Minute
0x0F | 802600C8 | zVarEntryCB_CounterValue
0x10 | 802600D6 | zVarEntryCB_IsEnabled
0x11 | 802600EF | zVarEntryCB_IsVisible
0x0  | 00000000 | 0 --> Null terminator entry
*/

struct var_type
{
    substr name;
    S8* (*get_text)();
};

extern S32 bad_card_needed;

void zVarNewGame();
void zVarInit(zVarEntry* table);
U32 zVarEntryCB_VibrationOn(void* arg);
U32 zVarEntryCB_SndMode(void* arg);
U32 zVarEntryCB_SndMusicVol(void* arg);
U32 zVarEntryCB_SndFXVol(void* arg);

#endif
