#ifndef ZGAME_H
#define ZGAME_H

#include "zEntPlayer.h"

extern _CurrentPlayer gPendingPlayer;
extern uint32 gBusStopIsRunning;

void zGameSetupPlayer();
void xDrawBegin();
void xDrawEnd();
int32 zGameIsPaused();

#endif