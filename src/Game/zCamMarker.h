#ifndef ZCAMMARKER_H
#define ZCAMMARKER_H

#include "../Core/x/xBase.h"
#include "../Core/x/xCamera.h"
#include "zCamera.h"

struct zCamMarker : xBase
{
	xCamAsset* asset;
};

int zCamMarkerEventCB(xBase* b1, xBase* b2, unsigned int par3, const float* par4, xBase* b3);
void zCamMarkerLoad(zCamMarker* m, xSerial* s);
void zCamMarkerSave(zCamMarker* m, xSerial* s);
void zCamMarkerInit(xBase* b, xCamAsset* asset);

#endif