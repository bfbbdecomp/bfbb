#include "zCamMarker.h"

void zCamMarkerInit(xBase* b, xCamAsset* asset)
{
    xBaseInit(b, asset);

    // xCamAsset, like most of the asset types, extends from xBaseAsset
    // they all have a xLinkAsset array at the end (or near the end) of their data
    // in xCamAsset's case, the xLinkAsset array appears right after it
    if (b->linkCount != 0)
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

int32 zCamMarkerEventCB(xBase* from, xBase* to, uint32 toEvent, const float32* toParam, xBase* b3)
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