#ifndef ZGOO_H
#define ZGOO_H

#include "../Core/x/xEnt.h"

#include <rwcore.h>
#include <rpworld.h>

void zGooInit(int32 nobj);
void zGooExit();
int32 zGooAdd(xEnt* obj, float32 depth, int32 freezeGroup);
int32 zGooIs(xEnt* obj, float32& depth, uint32 playerCheck);
void zGooCollsBegin();
void zGooCollsEnd();
void zGooStopTide();
void zGooMeltFinished(RpAtomic* atomic);

#endif