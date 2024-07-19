#include <types.h>
#include "rwcore.h"
#include "rwplcore.h"
#include "xMath3.h"
#include "xShadow.h"
#include "xVec3.h"

static RwRaster* gc_saveraster;
static RpLight* ShadowLight;
static const RwRGBAReal ShadowLightColor =
{
    0, 0, 0, 1
};
static RwCamera* ShadowCamera;
static RwRaster* ShadowCameraRaster;
static RwRaster* ShadowRenderRaster;
static int shadow_ent_count;
static float SHADOW_BOTH;

void xShadowInit()
{
    xShadowCameraCreate();
    gc_saveraster = RwRasterCreate(256, 256, 32, 1284);
    shadow_ent_count = 0; // Scheduling
    ShadowLight = RpLightCreate(1);
    RpLightSetColor(ShadowLight, &ShadowLightColor); // Scheduling
    RwFrame* frame = RwFrameCreate();
    _rwObjectHasFrameSetFrame(ShadowLight, frame);
}

void xShadowRender(xVec3* center, F32 radius, F32 max_dist)
{
    xShadowRenderWorld(center, radius, max_dist);
}

S32 SetupShadow()
{
    S32 res;
    for (res = 256; res > 640 || res > 480; res >>= 1) ;

    ShadowCamera = ShadowCameraCreatePersp(res);

    if (ShadowCamera == 0)
    {
        return 0;
    }
    else
    {
        ShadowCameraRaster = ShadowRasterCreate(res);
        if (ShadowCameraRaster == 0)
        {
            return 0;
        }
        else
        {
            ShadowCamera->frameBuffer = ShadowCameraRaster;
        }
    }

    return 1;
}

void xShadowSetWorld(RpWorld* world)
{
  RpWorldAddCamera(world, ShadowCamera);
  SHADOW_BOTH = 2.0f;
}

void xShadowSetLight(xVec3* target_pos, xVec3* in_vec, F32 value)
{
    xVec3 zvec;
    xMat4x3 matrix;
    RwFrame* camFrame;
    RwMatrixTag* camMatrix;

    xVec3Normalize(&zvec, (const xVec3*)in_vec);
    xMat3x3LookVec(&matrix, (const xVec3*)&zvec);
    matrix.pos = (*target_pos);
    camFrame = (RwFrame*)ShadowCamera->object.object.parent;
    camMatrix = &camFrame->modelling;
    xMat4x3Copy((xMat4x3*)camMatrix, (const xMat4x3*)&matrix);
    RwFrameOrthoNormalize(camFrame);
    RwMatrixUpdate(camMatrix);
    RwFrameUpdateObjects(camFrame);
}

U32 xShadowCameraCreate()
{
    U32 res = SetupShadow();
    return (-res | res) >> 0x1f;
}

void xShadowCameraUpdate(void* model, void(*renderCB)(void*), xVec3* center, F32 radius, S32 shadowMode)
{
    ShadowCameraSetSpherePersp(ShadowCamera, (RwV3d*)center, radius);
    ShadowCameraUpdate(ShadowCamera, model, renderCB, center, radius, shadowMode);
    ShadowRenderRaster = ShadowCameraRaster;
}
