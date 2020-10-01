#ifndef XCOUNTER_H
#define XCOUNTER_H

#include "xBase.h"

struct xCounterAsset : xBaseAsset
{
    int16 count;
};

struct _xCounter : xBase
{
    xCounterAsset* asset;
    int16 count;
    uint8 state;
    uint8 counterFlags;
};

void xCounterInit();
void xCounterInit(void* b, void* asset);
void xCounterInit(xBase* b, xCounterAsset* asset);
void xCounterReset(xBase* b);
void xCounterSave(_xCounter* ent, xSerial* s);
void xCounterLoad(_xCounter* ent, xSerial* s);
int xCounterEventCB(xBase*, xBase* to, uint32 toEvent, const float32*, xBase*);

#endif