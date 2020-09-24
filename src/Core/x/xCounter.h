#ifndef XCOUNTER_H
#define XCOUNTER_H

#include "xBase.h"

struct xCounterAsset : xBaseAsset
{
    short count;
};

struct _xCounter : xBase
{
    xCounterAsset* asset;
    short count;
    unsigned char state;
    unsigned char counterFlags;
};

void xCounterInit();
void xCounterInit(void* b, void* asset);
void xCounterInit(xBase* b, xCounterAsset* asset);
void xCounterReset(xBase* b);
void xCounterSave(_xCounter* ent, xSerial* s);
void xCounterLoad(_xCounter* ent, xSerial* s);
int xCounterEventCB(xBase*, xBase* to, unsigned int toEvent, const float*, xBase*);

#endif