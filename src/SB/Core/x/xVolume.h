#ifndef XVOLUME_H
#define XVOLUME_H

#include "xBase.h"
#include "xBound.h"

struct xVolumeAsset : xBaseAsset
{
    U32 flags;
    xBound bound;
    F32 rot;
    F32 xpivot;
    F32 zpivot;
};

struct xVolume : xBase
{
    xVolumeAsset* asset;

    void Init(xVolumeAsset* asset);
    void Reset();
    void Save(xSerial* s);
    void Load(xSerial* s);
    xBound* GetBound();
};

#endif
