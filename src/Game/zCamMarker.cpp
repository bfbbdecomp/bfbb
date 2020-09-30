#include "zCamMarker.h"

/*
void zCamMarkerInit(xBase* b, xCamAsset* asset)
{
    xBaseInit(b, asset);
    if (b->linkCount != 0) {
        // b->linkCount = asset->linkCount;
    }
    // b->eventFunc = 0;
    b->eventFunc = (xBaseEventCB) zCamMarkerEventCB; //
    b->link = 0;
}
*/
#pragma GLOBAL_ASM("asm/Game/zCamMarker.s", "zCamMarkerInit__FP5xBaseP9xCamAsset")

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
