#ifndef XCOUNTER_H
#define XCOUNTER_H

#include "xBase.h"

struct xCounterAsset : xBaseAsset
{
    S16 count;
};

struct _xCounter : xBase
{
    xCounterAsset* asset;
    S16 count;
    U8 state;
    U8 counterFlags;
};

#define XCOUNTER_ISSPATULA 0x1

void xCounterInit();
void xCounterInit(void* b, void* asset);
void xCounterInit(xBase* b, xCounterAsset* asset);
void xCounterReset(xBase* b);
void xCounterSave(_xCounter* ent, xSerial* s);
void xCounterLoad(_xCounter* ent, xSerial* s);
int xCounterEventCB(xBase*, xBase* to, U32 toEvent, const F32*, xBase*);

#endif
