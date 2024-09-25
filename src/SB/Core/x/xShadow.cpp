#include "xShadow.h"

#include "rpworld.h"

#include "xMath.h"
#include "iModel.h"
#include "zGlobals.h"

#include <types.h>

RwRGBAReal ShadowLightColor = { 1.0f, 1.0f, 1.0f, 1.0f };

RpLight* ShadowLight;
static F32 SHADOW_BOTH;
RwCamera* ShadowCamera;
RwRaster* ShadowCameraRaster;
static RwRaster* ShadowRenderRaster;
F32 gShadowObjectRadius;
static S32 shadow_ent_count;
static RwRaster* gc_saveraster;
static xShadowMgr* sMgrList;
static S32 sMgrCount;
static S32 sMgrTotal;

void xShadowInit();
static void ShadowCameraDestroy(RwCamera* shadowCamera);
static S32 SetupShadow();
static RwRaster* ShadowRasterCreate(S32 res);
static RwCamera* ShadowCameraCreatePersp(S32 param);
U32 xShadowCameraCreate();
void xShadowRenderWorld(xVec3* a, F32 b, F32 c);
void xShadow_ListAdd(xEnt* ent);
void xShadowManager_Add(xEnt* ent);
static void GCSaveFrameBuffer();
RwCamera* ShadowCameraSetSpherePersp(RwCamera* camera, RwV3d* center, float radius);
int Im2DRenderQuad(float x1, float y1, float x2, float y2, float z, float recipCamZ, float uvOffset);

/* Three more params than in DWARF.
RwCamera* ShadowCameraUpdate(RwCamera* shadowCamera, void* model, void(*renderCB)(void*))
*/
RwCamera* ShadowCameraUpdate(RwCamera* shadowCamera, void* model, void(*renderCB)(void*), RwV3d* center, float radius, int);

void xShadowInit()
{
    xShadowCameraCreate();
    gc_saveraster = RwRasterCreate(256, 256, 32, 0x504);
    shadow_ent_count = 0;
    ShadowLight = RpLightCreate(1);
    RpLightSetColor(ShadowLight, &ShadowLightColor);
    RwFrame* frame = RwFrameCreate();
    _rwObjectHasFrameSetFrame(ShadowLight, frame);
}

void xShadowRender(xVec3* a, F32 b, F32 c)
{
    xShadowRenderWorld(a, b, c);
}

static S32 SetupShadow()
{
    S32 res = 256;

    // Continuously halve res until it is less than or
    // equal to either display width or height.
    // On GCN, this routine normally won't happen,
    // as we're already below both dimensions.
    for (; (res > 640) || (res > 480); res >>= 1);

    ShadowCamera = ShadowCameraCreatePersp(res);
    if (ShadowCamera == NULL)
    {
        return 0;
    }
    ShadowCameraRaster = ShadowRasterCreate(res);
    if (ShadowCameraRaster == NULL)
    {
        return 0;
    }
    ShadowCamera->frameBuffer = ShadowCameraRaster;
    return 1;
}

void xShadowSetWorld(RpWorld* world)
{
    RpWorldAddCamera(world, ShadowCamera);
    SHADOW_BOTH = 2.0f;
}

U32 xShadowCameraCreate()
{
    U32 setup = SetupShadow();
    return ((-setup | setup) >> 0x1f);
}

void xShadowCameraUpdate(void* model, void(*renderCB)(void*), xVec3* center, float radius, int shadowMode)
{
    ShadowCameraSetSpherePersp(ShadowCamera, (RwV3d*)center, radius);
    ShadowCameraUpdate(ShadowCamera, model, renderCB, (RwV3d*)center, radius, shadowMode);
    ShadowRenderRaster = ShadowCameraRaster;
}

static void modelRenderCB(void* param)
{
    xModelRender((xModelInstance*)param);
}

S32 xShadowReceiveShadowSetup(xEnt* ent)
{
    if
    (
    (ent->model != NULL) &&
    (xEntIsVisible(ent)) &&
    (ent->baseFlags & 0x10) &&
    (!iModelCull(ent->model->Data, ent->model->Mat))
    )
    {
        return 1;
    }
    return 0;
}

void xShadow_ListAdd(xEnt* ent)
{
    xShadowManager_Add(ent);
}

void ShadowCameraDestroy(RwCamera* shadowCamera)
{
    if (shadowCamera == NULL)
    {
        return;
    }

    _rwFrameSyncDirty();
    RwFrame* parent = (RwFrame*)shadowCamera->object.object.parent;
    if (parent != NULL)
    {
        _rwObjectHasFrameSetFrame(shadowCamera, NULL);
        RwFrameDestroy(parent);
    }

    // Scheduling issue with RwRasterDestroy calls

    if (shadowCamera->zBuffer != NULL)
    {
        RwRasterDestroy(shadowCamera->zBuffer);
        shadowCamera->zBuffer = NULL;
    }

    if (shadowCamera->frameBuffer != NULL)
    {
        RwRasterDestroy(shadowCamera->frameBuffer);
        shadowCamera->frameBuffer = NULL;
    }

    RwCameraDestroy(shadowCamera);
}

static RwRaster* ShadowRasterCreate(S32 res)
{
    return RwRasterCreate(res, res, 0, 5);
}

void GCSaveFrameBuffer()
{
    RwGameCubeCameraTextureFlush(gc_saveraster, 0);
}

static void GCRestoreFrameBuffer()
{
    RwCamera* cam = *(RwCamera**)RwEngineInstance;
    F32 recipCamZ = (1.0f / cam->farPlane);

    RwRenderStateSet(rwRENDERSTATESRCBLEND,      (void*)2);
    RwRenderStateSet(rwRENDERSTATEDESTBLEND,     (void*)1);
    RwRenderStateSet(rwRENDERSTATEZTESTENABLE,   (void*)0);
    RwRenderStateSet(rwRENDERSTATEZWRITEENABLE,  (void*)0);
    RwRenderStateSet(rwRENDERSTATETEXTUREFILTER, (void*)1);
    RwRenderStateSet(rwRENDERSTATETEXTURERASTER, gc_saveraster);

    Im2DRenderQuad(0.0f, 0.0f, 256.0f, 256.0f, RwIm2DGetFarScreenZ(), recipCamZ, 0.001953125f);

    RwRenderStateSet(rwRENDERSTATEZTESTENABLE,  (void*)1);
    RwRenderStateSet(rwRENDERSTATEZWRITEENABLE, (void*)1);
    RwRenderStateSet(rwRENDERSTATESRCBLEND,     (void*)5);
    RwRenderStateSet(rwRENDERSTATEDESTBLEND,    (void*)6);
}

static RwCamera* ShadowCameraCreatePersp(S32 param)
{
    RwCamera* cam = RwCameraCreate();
    if (cam != NULL)
    {
        _rwObjectHasFrameSetFrame(cam, RwFrameCreate());

        RwV2d viewWin;
        viewWin.x = DEG2RAD(10);
        viewWin.y = DEG2RAD(10);

        RwCameraSetViewWindow(cam, &viewWin);

        if (cam->object.object.parent != NULL)
        {
            RwRaster* raster = RwRasterCreate(param, param, 0, 1);
            if (raster != NULL)
            {
                cam->zBuffer = raster;
                return cam;
            }
        }
    }
    ShadowCameraDestroy(cam);
    return NULL;
}

void xShadowManager_Init(S32 numEnts)
{
    sMgrList = (xShadowMgr*)xMemAlloc(gActiveHeap, numEnts << 4, 0);
    sMgrTotal = numEnts;
    sMgrCount = 0; // Scheduling off
}

void xShadowManager_Reset()
{
    sMgrCount = 0;
}

void xShadowManager_Add(xEnt* ent)
{
    for (int i = 0; i < sMgrCount; i++)
    {
        if (sMgrList[i].ent == ent)
        {
            return;
        }
    }

    if (sMgrCount < sMgrTotal)
    {
        sMgrList[sMgrCount].ent = ent;
        sMgrList[sMgrCount].cache = 0;
        sMgrList[sMgrCount].priority = 1000;
        sMgrList[sMgrCount].cacheReady = 0;
        sMgrCount++;
    }
}

void xShadowManager_Remove(xEnt* ent)
{
    int a = 0;
    for (int i = 6; i < sMgrCount; i++)
    {
        sMgrList[i].cache = NULL;
        a++;
    }

    a = 0;
    int i = 0;
    while (a < sMgrCount)
    {
        if (ent == sMgrList[i].ent)
        {
            sMgrList[i] = sMgrList[sMgrCount - 1];
            sMgrCount--;
        }
        else
        {
            i++;
            a++;
        }
    }
}