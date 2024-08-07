#include "xBase.h"

#include "xEvent.h"

#include "zScript.h"
#include "zScene.h"
#include "zGlobals.h"

#include <types.h>

S32 zScriptEventCB(xBase* to, xBase* from, U32 event, const F32* param, xBase*);

void zScriptInit(void* data, void* asset)
{
    zScriptInit((xBase*)data, (xScriptAsset*)asset);
}

void zScriptInit(xBase* b, xScriptAsset* tasset)
{
    _zScript* script = (_zScript*)b;
    xBaseInit(script, tasset);
    script->eventFunc = &zScriptEventCB;
    script->tasset = tasset;
    if (script->linkCount != 0)
    {
        script->link = (xLinkAsset*)(script->tasset + 1);
        script->link += tasset->eventCount;
    }
    else
    {
        script->link = NULL;
    }

    script->time = script->tasset->scriptStartTime;
    script->more = TRUE;
}

void zScriptReset(_zScript* script)
{
    xBaseReset((xBase*)script, (xBaseAsset*)script->tasset);
    script->time = script->tasset->scriptStartTime;
    script->more = TRUE;
}

void zScriptSave(_zScript* script, xSerial* s)
{
    xBaseSave((xBase*)script, s);
}

void zScriptLoad(_zScript* script, xSerial* s)
{
    xBaseLoad((xBase*)script, s);
}

S32 zScriptEventCB(xBase* to, xBase* from, U32 event, const F32*, xBase*)
{
    _zScript* fromScript = (_zScript*)from;
    switch (event)
    {
    case eEventRun:
        fromScript->state = ZSCRIPT_STATE_RUNNING;
        break;
    case eEventStop:
        if (fromScript->state == ZSCRIPT_STATE_RUNNING ||
            fromScript->state == ZSCRIPT_STATE_WAITING)
        {
            fromScript->state = ZSCRIPT_STATE_READY;
        }
        break;
    case eEventExpired:
        fromScript->state = ZSCRIPT_STATE_READY;
        break;
    case eEventScriptReset:
        fromScript->state = ZSCRIPT_STATE_READY;
        fromScript->time = fromScript->tasset->scriptStartTime;
        break;
    case eEventWaitForInput:
        if (fromScript->state == ZSCRIPT_STATE_RUNNING)
        {
            fromScript->state = ZSCRIPT_STATE_WAITING;
        }
        break;
    case eEventReset:
        zScriptReset(fromScript);
        break;
    }
    return eEventEnable;
}

void zScriptExecuteEvents(_zScript* script, F32 start, F32 end)
{
    script->more = 0;

    xScriptEventAsset* a = (xScriptEventAsset*)(script->tasset + 1);
    for (U32 i = 0; i < script->tasset->eventCount; ++i)
    {
        if (a[i].widget != 0 && a[i].time >= start)
        {
            if (a[i].time < end)
            {
                if (xBase* widget = zSceneFindObject(a[i].widget))
                {
                    xBase* paramWidget =
                        (!a[i].paramWidget) ? NULL : zSceneFindObject(a[i].paramWidget);
                    zEntEvent(script, 0, widget, a[i].paramEvent, a[i].param, paramWidget, 0);
                }
            }
            else
            {
                script->more = 1;
            }
        }
    }
}

void zScriptUpdate(xBase* obj, xScene* scene, F32 dt)
{
    _zScript* script = (_zScript*)obj;
    if (script->state == ZSCRIPT_STATE_RUNNING)
    {
        zScriptExecuteEvents(script, script->time, script->time + dt);
        script->time += dt;
        if (!script->more && script->state == ZSCRIPT_STATE_WAITING)
        {
            zEntEvent(script, eEventExpired);
        }
    }
    else if (script->state == ZSCRIPT_STATE_WAITING)
    {
        if (globals.pad0 && (globals.pad0->on & 0x40000))
        {
            script->state = ZSCRIPT_STATE_RUNNING;
        }
    }
}
