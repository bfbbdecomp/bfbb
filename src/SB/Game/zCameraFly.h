#ifndef ZCAMERAFLY_H
#define ZCAMERAFLY_H

#include <types.h>
#include "xBase.h"
#include "xDynAsset.h"
#include "xScene.h"

struct CameraFly_asset : xDynAsset
{
    U32 flyID;
};

struct zCameraFly : xBase
{
    CameraFly_asset* casset;
};

void zCameraFly_Init(xBase& data, xDynAsset& asset, size_t);
void zCameraFly_Init(zCameraFly* data, CameraFly_asset* asset);
void zCameraFly_Setup(zCameraFly* fly);
void zCameraFly_Update(xBase* to, xScene* scene, F32 dt);
void zCameraFly_Save(zCameraFly* fly, xSerial* s);
void zCameraFly_Load(zCameraFly* fly, xSerial* s);
U32 zCameraFlyProcessStopEvent();
void zCameraFlyStart(U32 id);
S32 zCameraFlyEventCB(xBase* from, xBase* to, U32 toEvent, const F32* toParam, xBase* b3);

#endif
