#ifndef ZSCRIPT_H
#define ZSCRIPT_H

#include <types.h>
#include "xBase.h"
#include "xDynAsset.h"

struct xScriptEventAsset
{
    float32 time;
    uint32 widget;
    uint32 paramEvent;
    float32 param[4];
    uint32 paramWidget;
};

struct xScriptAsset : xBaseAsset
{
    float32 scriptStartTime;
    uint32 eventCount;
};

struct _zScript : xBase
{
    xScriptAsset* tasset;
    uint8 state;
    uint8 more;
    uint8 pad[2];
    float32 time;
};

#define ZSCRIPT_STATE_READY (0)
#define ZSCRIPT_STATE_RUNNING (1)
#define ZSCRIPT_STATE_WAITING (3)

struct xScene;

void zScriptInit(void* data, void* asset);
void zScriptInit(xBase* data, xScriptAsset* asset);
void zScriptReset(_zScript* script);
void zScriptSave(_zScript* script, xSerial* s);
void zScriptLoad(_zScript* script, xSerial* s);
void zScriptUpdate(xBase* to, xScene*, float32 dt);

#endif
