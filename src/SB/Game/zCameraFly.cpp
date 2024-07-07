#include <types.h>

#include "xBase.h"
#include "xEvent.h"
#include "xScene.h"

#include "zBase.h"
#include "zCameraFly.h"
#include "zCamera.h"
#include "zGlobals.h"
#include "zMusic.h"

extern U32 zcam_flyasset_current;

void zCameraFly_Init(xBase& data, xDynAsset& asset, size_t)
{
    zCameraFly_Init((zCameraFly*)&data, (CameraFly_asset*)&asset);
}

void zCameraFly_Init(zCameraFly* data, CameraFly_asset* asset)
{
    xBaseInit((xBase*)data, (xBaseAsset*)asset);
    data->casset = asset;
    data->eventFunc = (xBaseEventCB)zCameraFlyEventCB;

    if (data->linkCount)
    {
        data->link = (xLinkAsset*)(asset + 1);
    }
    else
    {
        data->link = NULL;
    }
}

void zCameraFly_Setup(zCameraFly* fly)
{
    fly->baseFlags |= (U16)2;
}

void zCameraFly_Update(xBase* to, xScene* scene, F32 dt)
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

U32 zCameraFlyProcessStopEvent()
{
    zScene* s = globals.sceneCur;

    if (!zCamera_FlyOnly())
    {
        zMusicSetVolume(1.0f, 2.0f);
    }

    for (U16 i = 0; i < s->num_base; i++)
    {
        xBase* entry = s->base[i];
        if (entry->baseType == eBaseTypeCameraFly)
        {
            U32 id = ((zCameraFly*)entry)->casset->flyID;
            if (id == zcam_flyasset_current)
            {
                zEntEvent(entry, eEventStop);
                return 1;
            }
        }
    }

    return 0;
}

S32 zCameraFlyEventCB(xBase* from, xBase* to, U32 toEvent, const F32* toParam, xBase* b3)
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
