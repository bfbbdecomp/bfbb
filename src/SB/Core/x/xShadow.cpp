#include "xShadow.h"

#include "rpcollis.h"
#include "rpworld.h"

#include "xMath.h"
#include "iCollide.h"
#include "iModel.h"
#include "zGlobals.h"
#include "zGrid.h"

#include <types.h>

RwRGBAReal ShadowLightColor = { 1.0f, 1.0f, 1.0f, 1.0f };

RpLight* ShadowLight;
static F32 SHADOW_BOTH;
RwCamera* ShadowCamera;
RwRaster* ShadowCameraRaster;
static RwRaster* ShadowRenderRaster;
U32 gShadowFlags;
F32 gShadowObjectRadius;
static S32 shadow_ent_count;
static F32 rscale;
static RwV3d gCamPos;
static RwRaster* gc_saveraster;
static xShadowMgr* sMgrList;
static S32 sMgrCount;
static S32 sMgrTotal;
static F32 ShadowStrength = 0.3f;

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
static void GCRestoreFrameBuffer();
RwCamera* ShadowCameraSetSpherePersp(RwCamera* camera, RwV3d* center, F32 radius);
S32 Im2DRenderQuad(F32 x1, F32 y1, F32 x2, F32 y2, F32 z, F32 recipCamZ, F32 uvOffset);
void InvertRaster(RwCamera* cam);
static S32 ShadowRender( RwCamera* shadowCamera, RwRaster* arg1, RpIntersection* shadowZone, F32 shadowFactor, F32 fadeDist);

/* Three more params than in DWARF.
RwCamera* ShadowCameraUpdate(RwCamera* shadowCamera, void* model, void(*renderCB)(void*))
*/
RwCamera* ShadowCameraUpdate(RwCamera* shadowCamera, void* model, void(*renderCB)(void*), RwV3d* center, F32 radius, S32 param_6 );

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

void xShadowSetLight(xVec3* target_pos, xVec3* in_vec, F32 param3) {
    xVec3 zvec;
    xMat4x3 matrix;
    RwFrame* camFrame;
    RwMatrixTag* camMatrix;

    xVec3Normalize(&zvec, in_vec);
    xMat3x3LookVec(&matrix, &zvec);
    zvec += *target_pos;
    camFrame = (RwFrame*)ShadowCamera->object.object.parent;
    camMatrix = &camFrame->modelling;
    xMat4x3Copy( (xMat4x3*) camMatrix,&matrix);
    RwFrameOrthoNormalize( camFrame);
    RwMatrixUpdate( camMatrix);
    RwFrameUpdateObjects( camFrame);
}

U32 xShadowCameraCreate()
{
    U32 setup = SetupShadow();
    return ((-setup | setup) >> 0x1f);
}

void xShadowCameraUpdate(void* model, void(*renderCB)(void*), xVec3* center, F32 radius, int shadowMode)
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

void xShadowRender(xEnt* ent, F32 max_dist) {
    xVec3 center;
    F32 radius;

    zEntGetShadowParams(ent, &center, &radius, (xEntShadow::radius_enum) 1);
    xShadowCameraUpdate(ent->model, modelRenderCB, &center, radius, 0);
    xShadowRender(&center, radius, max_dist);
}

void xShadow_ListAdd(xEnt* ent)
{
    xShadowManager_Add(ent);
}

S32 Im2DRenderQuad(F32 x1, F32 y1, F32 x2, F32 y2, F32 z, F32 recipCamZ, F32 uvOffset)
{

    RwIm2DVertex vx[4];

    vx[0].x = x1;
    vx[0].y = y1;
    vx[0].z = z;
    vx[0].emissiveColor.red = 0xFF;
    vx[0].emissiveColor.green = 0xFF;
    vx[0].emissiveColor.blue = 0xFF;
    vx[0].emissiveColor.alpha = 0xFF;
    vx[0].u = uvOffset;
    vx[0].v = uvOffset;

    vx[1].x = x1;
    vx[1].y = y2;
    vx[1].z = z;
    vx[1].emissiveColor.red = 0xFF;
    vx[1].emissiveColor.green = 0xFF;
    vx[1].emissiveColor.blue = 0xFF;
    vx[1].emissiveColor.alpha = 0xFF;
    vx[1].u = uvOffset;
    vx[1].v = 1.0f + uvOffset;

    vx[2].x = x2;
    vx[2].y = y1;
    vx[2].z = z;
    vx[2].emissiveColor.red = 0xFF;
    vx[2].emissiveColor.green = 0xFF;
    vx[2].emissiveColor.blue = 0xFF;
    vx[2].emissiveColor.alpha = 0xFF;
    vx[2].u = 1.0f + uvOffset;
    vx[2].v = uvOffset;

    vx[3].x = x2;
    vx[3].y = y2;
    vx[3].z = z;
    vx[3].emissiveColor.red = 0xFF;
    vx[3].emissiveColor.green = 0xFF;
    vx[3].emissiveColor.blue = 0xFF;
    vx[3].emissiveColor.alpha = 0xFF;
    vx[3].u = 1.0f + uvOffset;
    vx[3].v = 1.0f + uvOffset;

    RwIm2DRenderPrimitive(rwPRIMTYPETRISTRIP, vx,4);
    return 1;
}

void InvertRaster(RwCamera* cam)
{
    rwGameCube2DVertex vx[4];
    
    F32 cam_width = (F32)cam->frameBuffer->width;
    F32 cam_height = (F32)cam->frameBuffer->height;
    
    vx[0].x = 0.0f;
    vx[0].y = 0.0f;
    vx[0].z = RwIm2DGetNearScreenZ();
    vx[0].emissiveColor.red = 0xFF;
    vx[0].emissiveColor.green = 0xFF;
    vx[0].emissiveColor.blue = 0xFF;
    vx[0].emissiveColor.alpha = 0xFF;
    vx[0].u = 0.0f;
    vx[0].v = 0.0f;
    
    vx[1].x = 0.0f;
    vx[1].y = cam_height;
    vx[1].z = RwIm2DGetNearScreenZ();
    vx[1].emissiveColor.red = 0xFF;
    vx[1].emissiveColor.green = 0xFF;
    vx[1].emissiveColor.blue = 0xFF;
    vx[1].emissiveColor.alpha = 0xFF;
    vx[1].u = 0.0f;
    vx[1].v = 1.0f;
    
    vx[2].x = 0.0f;
    vx[2].y = cam_width;
    vx[2].z = RwIm2DGetNearScreenZ();
    vx[2].emissiveColor.red = 0xFF;
    vx[2].emissiveColor.green = 0xFF;
    vx[2].emissiveColor.blue = 0xFF;
    vx[2].emissiveColor.alpha = 0xFF;
    vx[2].u = 1.0f;
    vx[2].v = 0.0f;
    
    vx[3].x = cam_width;
    vx[3].y = cam_height;
    vx[3].z = RwIm2DGetNearScreenZ();
    vx[3].emissiveColor.red = 0xFF;
    vx[3].emissiveColor.green = 0xFF;
    vx[3].emissiveColor.blue = 0xFF;
    vx[3].emissiveColor.alpha = 0xFF;
    vx[3].u = 1.0f;
    vx[3].v = 0.0f;
    
    RwRenderStateSet(rwRENDERSTATEZTESTENABLE, (void*) 0);
    RwRenderStateSet(rwRENDERSTATETEXTURERASTER, (void*) 0);
    RwRenderStateSet(rwRENDERSTATEVERTEXALPHAENABLE, (void*) 1);
    RwRenderStateSet(rwRENDERSTATEDESTBLEND, (void*) 1);
    RwRenderStateSet(rwRENDERSTATESRCBLEND, (void*) 10);
    RwIm2DRenderPrimitive(rwPRIMTYPETRISTRIP, &vx[0], 4);
    RwRenderStateSet(rwRENDERSTATEZTESTENABLE, (void*) 1);
    RwRenderStateSet(rwRENDERSTATEDESTBLEND, (void*) 6);
    RwRenderStateSet(rwRENDERSTATESRCBLEND, (void*) 5);
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

RwCamera* ShadowCameraUpdate(RwCamera* shadowCamera, void* model, void(*renderCB)(void*), xVec3* center, F32 radius, S32 invertRasterFlag)
{
    RwRGBA bgColor [4];
    RwCamera* camera;
    S32 fogstate;

  bgColor[0].red = 0.0f;
  camera = *(RwCamera **)RwEngineInstance;
  RwRenderStateGet(rwRENDERSTATEFOGENABLE, &fogstate);
  RwRenderStateSet(rwRENDERSTATEFOGENABLE, 0);
  if (camera != (RwCamera *)0x0) {
    RwCameraEndUpdate(camera);
  }
  GCSaveFrameBuffer();
  shadowCamera->frameBuffer->width = shadowCamera->frameBuffer->width - 1;
  shadowCamera->frameBuffer->height = shadowCamera->frameBuffer->height - 1;
  RwCameraClear(shadowCamera, bgColor, 1);
  shadowCamera->frameBuffer->width = shadowCamera->frameBuffer->width + 1;
  shadowCamera->frameBuffer->height = shadowCamera->frameBuffer->height + 1;
  RwFrameOrthoNormalize( (RwFrame*) shadowCamera->object.object.parent);
  if (RwCameraBeginUpdate(shadowCamera) != 0) {
    iCameraFrustumPlanes( shadowCamera, globals.camera.frustplane );
    RwRenderStateSet(rwRENDERSTATETEXTURERASTER, 0);
    RwRenderStateSet(rwRENDERSTATEZWRITEENABLE, 0);
    RwRenderStateSet(rwRENDERSTATEZTESTENABLE, 0);
    RwRenderStateSet(rwRENDERSTATEVERTEXALPHAENABLE, (RwRaster*) 1U);
    if (invertRasterFlag == 0) {
      InvertRaster(shadowCamera);
    }
    RwRenderStateSet(rwRENDERSTATEZWRITEENABLE, (RwRaster*) 1U);
    RwRenderStateSet(rwRENDERSTATEZTESTENABLE, (RwRaster*) 1U);
    RwCameraEndUpdate(shadowCamera);
    RwGameCubeCameraTextureFlush(shadowCamera->frameBuffer, 0);
  }
  if (camera != (RwCamera *)0x0) {
    RwCameraBeginUpdate(camera);
    iCameraFrustumPlanes(camera, globals.camera.frustplane);
  }
  GCRestoreFrameBuffer();
  RwRenderStateSet(rwRENDERSTATEFOGENABLE, (void*) fogstate);
  return shadowCamera;
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

RwCamera* ShadowCameraSetSpherePersp(RwCamera* camera, RwV3d* center, F32 radius) {

    RwFrame* camFrame;
    RwMatrixTag* camMatrix;
    RwV3d* camPos;
    F32 objDepth;
    F32 nearZ;
    F32 farZ;

    camFrame = (RwFrame*) (camera->object.object.parent);
    objDepth = 572.95807f * radius;
    camMatrix = &camFrame->modelling;
    camPos = &camMatrix->pos;
    nearZ = objDepth - rscale * radius;
    farZ = objDepth + rscale * radius;
    camera->nearPlane = nearZ;
    camera->farPlane = farZ;
    RwCameraSetNearClipPlane(camera, nearZ);
    RwCameraSetFarClipPlane(camera, farZ);
    camPos = center;
    RwV3dIncrementScaledMacro( camPos, &camMatrix->at, -objDepth );
    camPos = &camMatrix->at;
    gCamPos = *camPos;
    RwMatrixUpdate(camMatrix);
    RwFrameUpdateObjects(camFrame);
    gShadowObjectRadius = radius;
    return camera;
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
