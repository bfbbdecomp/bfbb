#ifndef ZVOLUME_H
#define ZVOLUME_H

#include "xVolume.h"

struct zVolume : xVolume
{
};

extern S32 gOccludeCount;

void zVolumeInit();
void zVolumeSetup();
zVolume* zVolumeGetVolume(U16 n);
void zVolume_OccludePrecalc(xVec3* camPos);
S32 zVolumeEventCB(xBase*, xBase* to, U32 toEvent, const F32*, xBase*);

#endif
