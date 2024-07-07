#include "zCamMarker.h"

void zCamMarkerInit(xBase* b, xCamAsset* asset)
{
    xBaseInit(b, asset);

    // xCamAsset, like most of the asset types, extends from xBaseAsset
    // they all have a xLinkAsset array at the end (or near the end) of their data
    // in xCamAsset's case, the xLinkAsset array appears right after it
    if (b->linkCount)
    {
        b->link = (xLinkAsset*)(asset + 1);
    }

    b->eventFunc = (xBaseEventCB)zCamMarkerEventCB;
    ((zCamMarker*)b)->asset = asset;
}

void zCamMarkerSave(zCamMarker* m, xSerial* s)
{
    xBaseSave(m, s);
}

void zCamMarkerLoad(zCamMarker* m, xSerial* s)
{
    xBaseLoad(m, s);
}

S32 zCamMarkerEventCB(xBase* from, xBase* to, U32 toEvent, const F32* toParam, xBase* b3)
{
    switch (toEvent)
    {
    case eEventOn:
    case eEventSwitch:
    {
        zCameraDoTrans(((zCamMarker*)to)->asset, *toParam);
        break;
    }
    case eEventStartConversation:
    {
        zCameraSetConvers(true);
        break;
    }
    case eEventEndConversation:
    {
        zCameraSetConvers(false);
        break;
    }
    }

    return eEventEnable;
}
