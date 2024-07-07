#ifndef ZSCRIPT_H
#define ZSCRIPT_H

#include <types.h>
#include "xBase.h"
#include "xDynAsset.h"

struct xScriptEventAsset
{
    F32 time;
    U32 widget;
    U32 paramEvent;
    F32 param[4];
    U32 paramWidget;
};

struct xScriptAsset : xBaseAsset
{
    F32 scriptStartTime;
    U32 eventCount;
};

struct _zScript : xBase
{
    xScriptAsset* tasset;
    U8 state;
    U8 more;
    U8 pad[2];
    F32 time;
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
void zScriptUpdate(xBase* to, xScene*, F32 dt);

#endif
