#include "zCamMarker.h"

void zCamMarkerInit(xBase* b, xCamAsset* asset)
{
    xBaseInit(b, asset);
    /*
        xCamAsset, like most of the asset types, extends from xBaseAsset
        they all have a xLinkAsset array at the end (or near the end) of their data
        in xCamAsset's case, the xLinkAsset array appears right after it
    */
    if (b->linkCount != 0)
    {
        b->link = (xLinkAsset*)(asset + 1);
    }
    b->eventFunc = (xBaseEventCB) zCamMarkerEventCB;
    ((zCamMarker*) b)->asset = asset;
}

void zCamMarkerSave(zCamMarker* m, xSerial* s)
{
    xBaseSave(m, s);
}

void zCamMarkerLoad(zCamMarker* m, xSerial* s)
{
    xBaseLoad(m, s);
}

/*
int zCamMarkerEventCB(xBase* b1, xBase* b2, unsigned int par3, const float* par4, xBase* b3)
{
    if (par3 == 0x14f)
    {
        zCameraSetConvers(true);
    }
}*/
// int zCamMarkerEventCB(xBase* to, unsigned int toEvent, float* toParam);
#pragma GLOBAL_ASM("asm/Game/zCamMarker.s", "zCamMarkerEventCB__FP5xBaseP5xBaseUiPCfP5xBase")
