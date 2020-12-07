#ifndef ZCAMMARKER_H
#define ZCAMMARKER_H

#include <types.h>
#include "zCamera.h"
#include "../Core/x/xBase.h"
#include "../Core/x/xCamera.h"
#include "../Core/x/xEvent.h"

struct zCamMarker : xBase
{
	xCamAsset* asset;
};

void zCamMarkerInit(xBase* b, xCamAsset* asset);
void zCamMarkerSave(zCamMarker* m, xSerial* s);
void zCamMarkerLoad(zCamMarker* m, xSerial* s);
int zCamMarkerEventCB(xBase* from, xBase* to, uint32 toEvent, const float32* toParam, xBase* b3);

#endif