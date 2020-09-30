#ifndef ZCAMMARKER_H
#define ZCAMMARKER_H

#include "../Core/x/xBase.h"
#include "../Core/x/xCamera.h"
#include "zCamera.h"

struct zCamMarker : xBase
{
	xCamAsset* asset;
};

void zCamMarkerLoad(zCamMarker* m, xSerial* s);
void zCamMarkerSave(zCamMarker* m, xSerial* s);
void zCamMarkerInit(xBase* b, xCamAsset* asset);

#endif