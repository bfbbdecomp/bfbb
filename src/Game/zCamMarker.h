#ifndef ZCAMMARKER_H
#define ZCAMMARKER_H

#include "../Core/x/xBase.h"
#include "../Core/x/xCamera.h"
#include "../Core/x/xEvent.h"
#include "zCamera.h"

struct zCamMarker : xBase
{
	xCamAsset* asset;
};

void zCamMarkerInit(xBase* b, xCamAsset* asset);
void zCamMarkerSave(zCamMarker* m, xSerial* s);
void zCamMarkerLoad(zCamMarker* m, xSerial* s);
int zCamMarkerEventCB(xBase* from, xBase* to, unsigned int toEvent, const float* toParam, xBase* b3);

#endif