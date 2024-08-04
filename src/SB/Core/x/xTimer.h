#ifndef XTIMER_H
#define XTIMER_H

#include "xBase.h"

struct xTimerAsset : xBaseAsset
{
    F32 seconds;
    F32 randomRange;
};

struct xTimer : xBase
{
    xTimerAsset* tasset;
    U8 state;
    U8 runsInPause;
    U16 flags;
    F32 secondsLeft;
};

struct xScene;

void xTimerInit(void* b, void* tasset);
void xTimerInit(xBase* b, xTimerAsset* tasset);
void xTimerReset(xTimer* ent);
void xTimerSave(xTimer* ent, xSerial* s);
void xTimerLoad(xTimer* ent, xSerial* s);
S32 xTimerEventCB(xBase*, xBase* to, U32 toEvent, const F32* toParam, xBase*);
void xTimerUpdate(xBase* to, xScene*, F32 dt);

#endif
