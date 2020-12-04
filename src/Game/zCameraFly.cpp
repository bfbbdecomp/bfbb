#include "../Core/x/xBase.h"
#include "../Core/x/xEvent.h"
#include "../Core/x/xScene.h"

#include "zAssetTypes.h"
#include "zCameraFly.h"
#include "zCamera.h"
#include "zGlobals.h"
#include "zMusic.h"

#include <types.h>

void zCameraFly_Init(xBase& data, xDynAsset& asset)
{
    zCameraFly_Init((zCameraFly*)&data, (CameraFly_asset*)&asset);
}

void zCameraFly_Init(zCameraFly* data, CameraFly_asset* asset)
{
    xBaseInit((xBase*)data, (xBaseAsset*)asset);
    data->casset = asset;
    data->eventFunc = (xBaseEventCB)zCameraFlyEventCB;
    if (data->linkCount != 0)
    {
        *(CameraFly_asset**)&data->link = asset + 1;
    }
    else
    {
        data->link = NULL;
    }
}

void zCameraFly_Setup(zCameraFly* fly)
{
    fly->baseFlags |= (uint16)2;
}

void zCameraFly_Update(xBase* to, xScene* scene, float32 dt)
{
}

void zCameraFly_Save(zCameraFly* fly, xSerial* s)
{
    xBaseSave((xBase*)fly, s);
}

void zCameraFly_Load(zCameraFly* fly, xSerial* s)
{
    xBaseLoad((xBase*)fly, s);
}

uint32 zCameraFlyProcessStopEvent()
{
    zScene* s = globals.sceneCur;

    if (!zCamera_FlyOnly())
    {
        zMusicSetVolume(1.0f, 2.0f);
    }

    for (uint16 i = 0; i < s->num_base; ++i)
    {
        xBase* entry = s->base[i];
        if (entry->baseType == 0x3e)
        {
            uint32 id = ((zCameraFly*)entry)->casset->flyID;
            if (id == zcam_flyasset_current)
            {
                zEntEvent(entry, 0x13);
                return 1;
            }
        }
    }

    return 0;
}

int32 zCameraFlyEventCB(xBase* from, xBase* to, uint32 toEvent, const float32* toParam, xBase* b3)
{
    zCameraFly* fly = (zCameraFly*)to;
    switch (toEvent)
    {
    case eEventEnable:
        xBaseEnable(fly);
        break;

    case eEventDisable:
        xBaseDisable(fly);
        break;

    case eEventRun:
        if (xBaseIsEnabled(fly))
        {
            zCameraFlyStart(fly->casset->flyID);
        }
        break;

    case eEventStop:
        break;

    case eEventSceneBegin:
        break;
    }
    return eEventEnable;
}