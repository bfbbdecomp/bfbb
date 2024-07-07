#ifndef ZGOO_H
#define ZGOO_H

#include "xEnt.h"

#include <rwcore.h>
#include <rpworld.h>

void zGooInit(S32 nobj);
void zGooExit();
S32 zGooAdd(xEnt* obj, F32 depth, S32 freezeGroup);
S32 zGooIs(xEnt* obj, F32& depth, U32 playerCheck);
void zGooCollsBegin();
void zGooCollsEnd();
void zGooStopTide();
void zGooMeltFinished(RpAtomic* atomic);

#endif
