#ifndef XENV_H
#define XENV_H

#include "../p2/iEnv.h"
#include "xLightKit.h"
#include "xBase.h"

struct xEnv
{
    iEnv* geom;
    iEnv ienv;
    xLightKit* lightKit;
};

struct xEnvAsset : xBaseAsset
{
    uint32 bspAssetID;
    uint32 startCameraAssetID;
    uint32 climateFlags;
    float32 climateStrengthMin;
    float32 climateStrengthMax;
    uint32 bspLightKit;
    uint32 objectLightKit;
    float32 padF1;
    uint32 bspCollisionAssetID;
    uint32 bspFXAssetID;
    uint32 bspCameraAssetID;
    uint32 bspMapperID;
    uint32 bspMapperCollisionID;
    uint32 bspMapperFXID;
    float32 loldHeight;
};

void xEnvLoadBsp(xEnv* env, const void* data, uint32 datasize, int32 dataType);
void xEnvRender(xEnv* env);

#endif