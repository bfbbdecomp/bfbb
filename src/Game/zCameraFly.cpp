#include "../Core/x/xBase.h"
#include "../Core/x/xEvent.h"
#include "../Core/x/xScene.h"

#include "zAssetTypes.h"
#include "zCameraFly.h"
#include "zCamera.h"
#include "zGlobals.h"
#include "zMusic.h"

#include <types.h>

extern float32 musVolume; // 1.0
extern float32 musDelay; // 2.0

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

#if 1

// func_8017C17C
#pragma GLOBAL_ASM("asm/Game/zCameraFly.s", "zCameraFlyProcessStopEvent__Fv")

#else

// Inside loop appears to be completely off, along with assignment of variables at the start.
uint32 zCameraFlyProcessStopEvent()
{
    // Ghidra disassembly.
    /*uint local_r3_28;
    xBase* pxVar1;
    uint uVar2;
    zScene* temp_3f17c03b02;

    temp_3f17c03b02 = globals.scenePreload;
    local_r3_28 = zCamera_FlyOnly();
    if (local_r3_28 == 0)
    {
        zMusicSetVolume(musVolume, musDelay);
    }
    uVar2 = 0;
    while (true)
    {
        if ((uint)temp_3f17c03b02->field_1 <= (uVar2 & 0xffff))
        {
            return 0;
        }
        pxVar1 = *(xBase**)(temp_3f17c03b02->field_2 + (uVar2 & 0xffff) * 4);
        if ((pxVar1->baseType == 0x3e) &&
            (*(uint32_t*)(pxVar1[1].id + 0x10) == zcam_flyasset_current))
            break;
        uVar2 = uVar2 + 1;
    }
    zEntEvent(pxVar1, eEventStop);
    return 1;*/

    // Attempted rewrite.
    zScene* scene;
    uint16 i;
    xBase* base;
    scene = globals.scenePreload;
    uint32 uVar1 = zCamera_FlyOnly();
    if (uVar1 == 0)
    {
        zMusicSetVolume(musVolume, musDelay);
    }
    while (true)
    {
        if (i >= scene->num_base)
        {
            return 0;
        }
        base = *(xBase**)(scene->base[i]);
        if ((base->baseType == 0x3e) && (*(uint32*)(base[1].id + 0x10) == zcam_flyasset_current))
        {
            break;
        }
    }
    zEntEvent(base, eEventStop);
    return 1;
}

#endif

#if 1

// func_8017C220
#pragma GLOBAL_ASM("asm/Game/zCameraFly.s", "zCameraFlyEventCB__FP5xBaseP5xBaseUiPCfP5xBase")

#else

// Just a template for later use.
int32 zCameraFlyEventCB(xBase* from, xBase* to, uint32 toEvent, const float32* toParam, xBase* b3)
{
    return eEventEnable;
}

#endif