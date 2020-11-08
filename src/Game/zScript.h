#ifndef ZSCRIPT_H
#define ZSCRIPT_H

#include <types.h>
#include "../Core/x/xBase.h"
#include "../Core/x/xDynAsset.h"

struct xScriptAsset : xBaseAsset
{
    float32 scriptStartTime;
    uint32 eventCount;
};

struct zScript : xBase
{
    xScriptAsset* tasset;
    uint8 state;
    uint8 more;
    uint8 pad[2];
    float32 time;
};

void zScriptInit(void* data, void* asset);
void zScriptInit(xBase* data, xScriptAsset* asset);
void zScriptReset(zScript* script);
void zScript_Save(zScript* script, xSerial* s);
void zScript_Load(zScript* script, xSerial* s);

#endif