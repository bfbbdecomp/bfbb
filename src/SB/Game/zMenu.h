#ifndef ZMENU_H
#define ZMENU_H

#include <types.h>

int8 menu_fmv_played;

uint32 zMenuUpdateMode();
uint32 zMenuIsPaused();
int32 zMenuLoopContinue();
void zMenuFirstBootSet(uint32 isFirstBoot);
void zMenuFMVPlay(int8*, uint32, float32, bool, bool);
bool zMenuCardCheckStartup(int32* bytesNeeded, int32* availOnDisk, int32* neededFiles);
int32 zMenuGetBadCard();
uint32 zMenuGetCorruptFiles(int8 name[][64]);
int32 zMenuIsFirstBoot();

#endif
