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

uint8 iSndIsPlaying(uint32 assetID);

#endif