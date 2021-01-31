#ifndef ISND_H
#define ISND_H

#include <types.h>

struct iSndVol
{
    int16 volL;
    int16 volR;
};

struct iSndInfo
{
    uint32 flags;
    iSndVol vol;
    uint32 pitch;
    int32 lastStreamBuffer;
};

void iSndSuspendCD(uint32);
void iSndInitSceneLoaded();
uint8 iSndIsPlaying(uint32 assetID);
void iSndWaitForDeadSounds();
void iSndSceneExit();

#endif