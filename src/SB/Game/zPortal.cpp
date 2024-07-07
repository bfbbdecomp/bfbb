#include "xBase.h"
#include "xEvent.h"

#include "zPortal.h"
#include "zGlobals.h"
#include "zScene.h"

extern zGlobals globals;

void zPortalInit(void* portal, void* passet)
{
    zPortalInit((_zPortal*)portal, (xPortalAsset*)passet);
}

void zPortalInit(_zPortal* portal, xPortalAsset* passet)
{
    xBaseInit((xBase*)portal, (xBaseAsset*)passet);

    portal->passet = passet;
    portal->eventFunc = (xBaseEventCB)zPortalEventCB;

    if (portal->linkCount != 0)
    {
        portal->link = (xLinkAsset*)(portal->passet + 1);
    }
}

void zPortalReset(_zPortal* portal)
{
    xBaseReset((xBase*)portal, (xBaseAsset*)portal->passet);
}

void zPortalSave(_zPortal* ent, xSerial* s)
{
    xBaseSave((xBase*)ent, s);
}

void zPortalLoad(_zPortal* ent, xSerial* s)
{
    xBaseLoad((xBase*)ent, s);
}

S32 zPortalEventCB(xBase* from, xBase* to, U32 toEvent, const F32* toParam, xBase* b3)
{
    switch (toEvent)
    {
    case eEventReset:
    {
        zPortalReset((_zPortal*)to);
        break;
    }
    case eEventTeleportPlayer:
    {
        if (globals.player.Health != 0)
        {
            zSceneSwitch((_zPortal*)to, false);
        }
        break;
    }
    }
    return eEventEnable;
}
