#ifndef ZVOLUME_H
#define ZVOLUME_H

#include "../Core/x/xVolume.h"

struct zVolume : xVolume
{
};

void zVolumeInit();
void zVolumeSetup();
zVolume* zVolumeGetVolume(uint16 n);
void zVolume_OccludePrecalc(xVec3* camPos);
int32 zVolumeEventCB(xBase*, xBase* to, uint32 toEvent, const float32*, xBase*);

#endif