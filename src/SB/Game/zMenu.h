#ifndef ZMENU_H
#define ZMENU_H

#include <types.h>

bool menu_fmv_played;

U32 zMenuUpdateMode();
U32 zMenuIsPaused();
S32 zMenuLoopContinue();
void zMenuFirstBootSet(U32 isFirstBoot);
void zMenuFMVPlay(char*, U32, F32, bool, bool);
bool zMenuCardCheckStartup(S32* bytesNeeded, S32* availOnDisk, S32* neededFiles);
S32 zMenuGetBadCard();
U32 zMenuGetCorruptFiles(char name[][64]);
S32 zMenuIsFirstBoot();

#endif
