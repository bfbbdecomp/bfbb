#include "iCamera.h"

#include "xShadow.h"

#include "iScrFX.h"
#include "iMath.h"

#include "zGlobals.h"

#include <string.h>

extern float32 sCameraNearClip;
extern float32 sCameraFarClip;
extern RwCamera* sMainGameCamera;

extern float32 _640_0;
extern float32 _706_0;
extern float32 _707_1;
extern float32 _708_3;
extern float32 _709_1;
extern float32 _741_3;
extern float32 _742_1;
extern float32 _743_1;
extern float64 _769_1;
extern float64 _826_0;

RwCamera* iCameraCreate(int32 width, int32 height, int32 mainGameCamera)
{
    RwV2d vw;
    RwCamera* camera;

    camera = RwCameraCreate();

    RwCameraSetFrame(camera, RwFrameCreate());
    RwCameraSetRaster(camera, RwRasterCreate(width, height, 0, rwRASTERTYPECAMERA));
    RwCameraSetZRaster(camera, RwRasterCreate(width, height, 0, rwRASTERTYPEZBUFFER));
    RwCameraSetFarClipPlane(camera, sCameraFarClip);
    RwCameraSetNearClipPlane(camera, sCameraNearClip);

    vw.x = _640_0;
    vw.y = _640_0;

    RwCameraSetViewWindow(camera, &vw);

    if (mainGameCamera)
    {
        iScrFxCameraCreated(camera);
        sMainGameCamera = camera;
    }

    return camera;
}

void iCameraDestroy(RwCamera* camera)
{
    RpWorld* pWorld;
    RwRaster* raster;
    RwFrame* frame;

    _rwFrameSyncDirty();

    pWorld = RwCameraGetWorld(camera);

    if (pWorld)
    {
        RpWorldRemoveCamera(pWorld, camera);
    }

    if (camera == sMainGameCamera)
    {
        iScrFxCameraDestroyed(camera);
        sMainGameCamera = NULL;
    }

    if (camera)
    {
        frame = RwCameraGetFrame(camera);

        if (frame)
        {
            RwCameraSetFrame(camera, NULL);
            RwFrameDestroy(frame);
        }

        raster = RwCameraGetRaster(camera);

        if (raster)
        {
            RwRasterDestroy(raster);
            RwCameraSetRaster(camera, NULL);
        }

        raster = RwCameraGetZRaster(camera);

        if (raster)
        {
            RwRasterDestroy(raster);
            RwCameraSetZRaster(camera, NULL);
        }

        RwCameraDestroy(camera);
    }
}

void iCameraBegin(RwCamera* cam, int32 clear)
{
    if (clear)
    {
        if (xglobals->fog.type != rwFOGTYPENAFOGTYPE)
        {
            RwCameraClear(cam, &xglobals->fog.bgcolor, rwCAMERACLEARIMAGE | rwCAMERACLEARZ);
        }
        else
        {
            RwCameraClear(cam, NULL, rwCAMERACLEARZ);
        }
    }

    RwCameraSetNearClipPlane(cam, sCameraNearClip);
    RwCameraBeginUpdate(cam);
}

void iCameraEnd(RwCamera* cam)
{
    iScrFxCameraEndScene(cam);
    RwCameraEndUpdate(cam);
    iScrFxPostCameraEnd(cam);
}

void iCameraShowRaster(RwCamera* cam)
{
    RwCameraShowRaster(cam, NULL, 0);
}

void iCameraFrustumPlanes(RwCamera* cam, xVec4* frustplane)
{
    RwFrustumPlane* rwPlane;

    rwPlane = &cam->frustumPlanes[2];
    frustplane[0].x = rwPlane->plane.normal.x;
    frustplane[1].x = rwPlane->plane.normal.y;
    frustplane[2].x = rwPlane->plane.normal.z;
    frustplane[3].x = rwPlane->plane.distance;

    rwPlane = &cam->frustumPlanes[4];
    frustplane[0].y = rwPlane->plane.normal.x;
    frustplane[1].y = rwPlane->plane.normal.y;
    frustplane[2].y = rwPlane->plane.normal.z;
    frustplane[3].y = rwPlane->plane.distance;

    rwPlane = &cam->frustumPlanes[5];
    frustplane[0].z = rwPlane->plane.normal.x;
    frustplane[1].z = rwPlane->plane.normal.y;
    frustplane[2].z = rwPlane->plane.normal.z;
    frustplane[3].z = rwPlane->plane.distance;

    rwPlane = &cam->frustumPlanes[3];
    frustplane[0].w = rwPlane->plane.normal.x;
    frustplane[1].w = rwPlane->plane.normal.y;
    frustplane[2].w = rwPlane->plane.normal.z;
    frustplane[3].w = rwPlane->plane.distance;

    rwPlane = &cam->frustumPlanes[1];
    frustplane[4].x = rwPlane->plane.normal.x;
    frustplane[5].x = rwPlane->plane.normal.y;
    frustplane[6].x = rwPlane->plane.normal.z;
    frustplane[7].x = rwPlane->plane.distance;

    rwPlane = &cam->frustumPlanes[0];
    frustplane[4].y = rwPlane->plane.normal.x;
    frustplane[5].y = rwPlane->plane.normal.y;
    frustplane[6].y = rwPlane->plane.normal.z;
    frustplane[7].y = rwPlane->plane.distance;

    rwPlane = &cam->frustumPlanes[2];
    frustplane[4].z = rwPlane->plane.normal.x;
    frustplane[5].z = rwPlane->plane.normal.y;
    frustplane[6].z = rwPlane->plane.normal.z;
    frustplane[7].z = rwPlane->plane.distance;

    rwPlane = &cam->frustumPlanes[4];
    frustplane[4].w = rwPlane->plane.normal.x;
    frustplane[5].w = rwPlane->plane.normal.y;
    frustplane[6].w = rwPlane->plane.normal.z;
    frustplane[7].w = rwPlane->plane.distance;

    rwPlane = &cam->frustumPlanes[2];
    frustplane[8].x = rwPlane->plane.normal.x;
    frustplane[9].x = rwPlane->plane.normal.y;
    frustplane[10].x = rwPlane->plane.normal.z;
    frustplane[11].x = rwPlane->plane.distance;

    rwPlane = &cam->frustumPlanes[4];
    frustplane[8].y = rwPlane->plane.normal.x;
    frustplane[9].y = rwPlane->plane.normal.y;
    frustplane[10].y = rwPlane->plane.normal.z;
    frustplane[11].y = rwPlane->plane.distance;

    rwPlane = &cam->frustumPlanes[5];
    frustplane[8].z = rwPlane->plane.normal.x;
    frustplane[9].z = rwPlane->plane.normal.y;
    frustplane[10].z = rwPlane->plane.normal.z;
    frustplane[11].z = rwPlane->plane.distance;

    rwPlane = &cam->frustumPlanes[3];
    frustplane[8].w = rwPlane->plane.normal.x;
    frustplane[9].w = rwPlane->plane.normal.y;
    frustplane[10].w = rwPlane->plane.normal.z;
    frustplane[11].w = rwPlane->plane.distance;
}

void iCameraUpdatePos(RwCamera* cam, xMat4x3* pos)
{
    RwFrame* f;
    RwMatrix* m;

    f = RwCameraGetFrame(cam);
    m = RwFrameGetMatrix(f);

    xMat4x3Copy((xMat4x3*)m, pos);

    m = RwFrameGetLTM(f);

    xMat4x3Copy((xMat4x3*)m, pos);

    RwFrameOrthoNormalize(f);
    RwFrameUpdateObjects(f);
}

#ifdef NON_MATCHING
void iCameraSetFOV(RwCamera* cam, float32 fov)
{
    RwV2d vw;

    vw.x = itan(_706_0 * (_707_1 * fov) / _708_3);

    // non-matching: frsp instruction is here for some reason
    vw.y = _709_1 * vw.x;

    RwCameraSetViewWindow(cam, &vw);
}
#endif

void iCameraAssignEnv(RwCamera* camera, iEnv* env_geom)
{
    globalCamera = camera;

    RpWorldAddCamera(env_geom->world, camera);
    xShadowSetWorld(env_geom->world);
}

void iCamGetViewMatrix(RwCamera* camera, xMat4x3* view_matrix)
{
    RwMatrix* rw_view;

    memset(view_matrix, 0, sizeof(xMat4x3));

    rw_view = RwCameraGetViewMatrix(camera);

    view_matrix->right.x = rw_view->right.x;
    view_matrix->right.y = rw_view->right.y;
    view_matrix->right.z = rw_view->right.z;
    view_matrix->up.x = rw_view->up.x;
    view_matrix->up.y = rw_view->up.y;
    view_matrix->up.z = rw_view->up.z;
    view_matrix->at.x = rw_view->at.x;
    view_matrix->at.y = rw_view->at.y;
    view_matrix->at.z = rw_view->at.z;
    view_matrix->pos.x = rw_view->pos.x;
    view_matrix->pos.y = rw_view->pos.y;
    view_matrix->pos.z = rw_view->pos.z;
}

#ifdef NON_MATCHING
void iCameraSetNearFarClip(float32 nearPlane, float32 farPlane)
{
    if (nearPlane <= *(const float32*)&_742_1)
    {
        nearPlane = _741_3;
    }

    sCameraNearClip = nearPlane;

    // non-matching: _742_1 is loaded too early

    if (farPlane <= *(const float32*)&_742_1)
    {
        farPlane = _743_1;
    }

    sCameraFarClip = farPlane;
}
#endif

#ifdef NON_MATCHING
void iCameraSetFogParams(iFogParams* fp, float32 time)
{
    if (!fp || fp->type == rwFOGTYPENAFOGTYPE)
    {
        xglobals->fog.type = rwFOGTYPENAFOGTYPE;
        xglobals->fogA.type = rwFOGTYPENAFOGTYPE;
    }
    else if (_742_1 == time || fp->type != xglobals->fogA.type)
    {
        xglobals->fog = *fp;
        xglobals->fogA = *fp;
        xglobals->fog_t0 = 0;
    }
    else
    {
        xglobals->fogA = xglobals->fog;
        xglobals->fogB = *fp;

        // todo
    }
}
#endif

iFogParams& iFogParams::operator=(const iFogParams& other) // temp
{
    this->type = other.type;
    this->start = other.start;
    this->stop = other.stop;
    this->density = other.density;
    *(uint32*)&this->fogcolor = *(uint32*)&other.fogcolor;
    *(uint32*)&this->bgcolor = *(uint32*)&other.bgcolor;
    this->table = other.table;

    return *this;
}




void iCameraSetFogRenderStates()
{
    RwCamera* pCamera;
    iFogParams* pFogParams;
    uint32 bite_me;

    pCamera = RwCameraGetCurrentCamera();
    pFogParams = &xglobals->fog;

    if (pFogParams->type == rwFOGTYPENAFOGTYPE)
    {
        RwRenderStateSet(rwRENDERSTATEFOGENABLE, (void*)FALSE);

        RwCameraSetFarClipPlane(pCamera, sCameraFarClip);
    }
    else
    {
        bite_me = (pFogParams->fogcolor.alpha << 24) | (pFogParams->fogcolor.red << 16) |
                  (pFogParams->fogcolor.green << 8) | pFogParams->fogcolor.blue;

        RwRenderStateSet(rwRENDERSTATEFOGENABLE, (void*)TRUE);
        RwRenderStateSet(rwRENDERSTATEFOGTYPE, (void*)pFogParams->type);
        RwRenderStateSet(rwRENDERSTATEFOGCOLOR, (void*)bite_me);
        RwRenderStateSet(rwRENDERSTATEFOGDENSITY, (void*)&pFogParams->density);

        RwCameraSetFogDistance(pCamera, pFogParams->start);
        RwCameraSetFarClipPlane(pCamera, pFogParams->stop);
    }
}
