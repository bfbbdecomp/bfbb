#ifndef ZMENU_H
#define ZMENU_H

#include <types.h>

uint32 zMenuUpdateMode();
uint32 zMenuIsPaused();
uint32 zMenuLoopContinue();
void zMenuFirstBootSet(uint32 isFirstBoot);
void zMenuFMVPlay(int8*, uint32, float32, bool, bool);
bool zMenuCardCheckStartup(int32* bytesNeeded, int32* availOnDisk, int32* neededFiles);
int32 zMenuGetBadCard();
uint32 zMenuGetCorruptFiles(int8 name[][64]);

#endif