#ifndef ZGAME_H
#define ZGAME_H

#include "zEntPlayer.h"

extern _CurrentPlayer gPendingPlayer;
extern float32 sTimeElapsed;
extern uint32 gLevelChanged;
extern uint8 sHackSmoothedUpdate;
extern uint32 gBusStopIsRunning;

void zGameSetupPlayer();
void xDrawBegin();
void xDrawEnd();
int32 zGameIsPaused();
void zGameScreenTransitionBegin();
void zGameScreenTransitionUpdate(float32 percentComplete, char* msg);
void zGameScreenTransitionUpdate(float32 percentComplete, char* msg, uint8* rgba);
void zGameScreenTransitionEnd();

#endif