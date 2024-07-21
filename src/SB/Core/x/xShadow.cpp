#include "xCollide.h"
#include "xQuickCull.h"
#include <types.h>
#include "iModel.h"
#include "rpcollis.h"
#include "rwcore.h"
#include "rwplcore.h"
#include "xMath3.h"
#include "xShadow.h"
#include "xVec3.h"
#include "zGlobals.h"

RwRaster* gc_saveraster;
RpLight* ShadowLight;
const RwRGBAReal ShadowLightColor =
{
    0, 0, 0, 1
};
RwCamera* ShadowCamera;
RwRaster* ShadowCameraRaster;
RwRaster* ShadowRenderRaster;
S32 shadow_ent_count;
float SHADOW_BOTH;
U32 gShadowFlags;

extern xGlobals* xglobals;
extern zGlobals globals;

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

void xShadowRenderWorld(xVec3* center, F32 radius, F32 max_dist)
{
    // RpIntersection shadowZone;
    // F32 fadeDistance;
    // xSphere zone;
    // RwFrame* camFrame;
    // RwMatrixTag* camMatrix;
    // xVec3* at;
    // xVec3* up;
    // xVec3* rt;
    // xRay3 R[1];
    // xCollis entcoll[1];
    // xCollis envcoll[1];
    // F32 sf[2][3];
    // U32 hit_env;
    // U32 hit_ent;
    // F32 ent_dist;
    // F32 env_dist;
    // xVec3 ent_pos;
    // xVec3 env_pos;
    // S32 i;
    // xQCData q;

    // xQCControl ctrl;

    // camFrame = (RwFrame*)ShadowCamera->object.lFrame.next;
    // // F32 value = 0.0f;
    // gShadowFlags = 0;
    // // Initialization here

    // xVec3Init(&ent_pos, 0, 0, 0);
    // xVec3Init(&env_pos, 0, 0, 0);
    // entcoll[0].tohit = ent_pos;
    // envcoll[0].tohit = *center;

    // xVec3AddScaled(&envcoll[0].tohit, (const xVec3*)&ShadowCamera->object.object.parent, 0.0f); // offset 0x10
    // xVec3AddScaled(&envcoll[0].tohit, (const xVec3*)&ShadowCamera->object.object.parent, 0.0f); // offset 0x20
    // xQuickCullForRay(&ctrl, &q, (const xRay3*)&R);

    // xRayHitsEnt(globals.sceneCur, &R[0], &q, &ent, (void*)&entcoll[0]);
    // xRayHitsEnt(globals.sceneCur, &R[0], &q, &ent, (void*)&entcoll[0]);
}

void modelRenderCB(void* model)
{
    xModelRender((xModelInstance*)model);
}

U32 xShadowReceiveShadowSetup(xEnt* ent)
{
    if (ent->model != NULL && xEntIsVisible(ent))
    {
        if ((ent->baseFlags & 0x10) && !iModelCull(ent->model->Data, ent->model->Mat))
        {
            return 1;
        }
    }

    return 0;
}
