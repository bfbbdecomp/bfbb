#ifndef ZMENU_H
#define ZMENU_H

#include <types.h>

S8 menu_fmv_played;

U32 zMenuUpdateMode();
U32 zMenuIsPaused();
S32 zMenuLoopContinue();
void zMenuFirstBootSet(U32 isFirstBoot);
void zMenuFMVPlay(S8*, U32, F32, bool, bool);
bool zMenuCardCheckStartup(S32* bytesNeeded, S32* availOnDisk, S32* neededFiles);
S32 zMenuGetBadCard();
U32 zMenuGetCorruptFiles(S8 name[][64]);
S32 zMenuIsFirstBoot();

#endif
