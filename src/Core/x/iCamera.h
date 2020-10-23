#ifndef ICAMERA_H
#define ICAMERA_H

#include <rwcore.h>
#include <types.h>

#include "xMath3.h"
#include "../p2/iEnv.h"
#include "../p2/iTime.h"

struct iFogParams
{
    RwFogType type;
    float32 start;
    float32 stop;
    float32 density;
    RwRGBA fogcolor;
    RwRGBA bgcolor;
    uint8* table;
};

RwCamera* iCameraCreate(int32 width, int32 height, int32 mainGameCamera);
void iCameraDestroy(RwCamera* camera);
void iCameraBegin(RwCamera* cam, int32 clear);
void iCameraEnd(RwCamera* cam);
void iCameraShowRaster(RwCamera* cam);
void iCameraFrustumPlanes(RwCamera* cam, xVec4* frustplane);
void iCameraUpdatePos(RwCamera* cam, xMat4x3* pos);
void iCameraSetFOV(RwCamera* cam, float32 fov);
void iCameraAssignEnv(RwCamera* camera, iEnv* env_geom);
void iCamGetViewMatrix(RwCamera* camera, xMat4x3* view_matrix);
void iCameraSetNearFarClip(float32 nearPlane, float32 farPlane);
void iCameraSetFogParams(iFogParams* fp, float32 time);
void iCameraUpdateFog(RwCamera* cam, iTime t);
void iCameraSetFogRenderStates();

#endif