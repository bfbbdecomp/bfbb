#ifndef ZCAMERAFLY_H
#define ZCAMERAFLY_H

#include <types.h>
#include "../Core/x/xBase.h"
#include "../Core/x/xDynAsset.h"
#include "../Core/x/xScene.h"

struct CameraFly_asset : xDynAsset
{
    uint32 flyID;
};

struct zCameraFly : xBase
{
    CameraFly_asset* casset;
};

void zCameraFly_Init(xBase& data, xDynAsset& asset, ulong32);
void zCameraFly_Init(zCameraFly* data, CameraFly_asset* asset);
void zCameraFly_Setup(zCameraFly* fly);
void zCameraFly_Update(xBase* to, xScene* scene, float32 dt);
void zCameraFly_Save(zCameraFly* fly, xSerial* s);
void zCameraFly_Load(zCameraFly* fly, xSerial* s);
uint32 zCameraFlyProcessStopEvent();
void zCameraFlyStart(uint32 id);
int32 zCameraFlyEventCB(xBase* from, xBase* to, uint32 toEvent, const float32* toParam, xBase* b3);

#endif