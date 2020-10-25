#ifndef IENV_H
#define IENV_H
#include <rpworld.h>
#include <rwcore.h>
#include "../x/xJSP.h"

struct iEnv
{
    RpWorld* world;
    RpWorld* collision;
    RpWorld* fx;
    RpWorld* camera;
    xJSPHeader* jsp;
    RpLight* light[2];
    RwFrame* light_frame[2];
    int32 memlvl;
};

// bringing in xEnv.h breaks the build entirely
struct xEnvAsset;

void iEnvFree(iEnv* param_1);
void iEnvRender(iEnv* param_1);
void iEnvDefaultLighting(iEnv* param_1);
void iEnvLoad(iEnv* env, void const* data, uint32 dataSize, int32 dataType);
void iEnvSetBSP(iEnv* param_1, int param_2, RpWorld* param_3);
void iEnvLightingBasics(iEnv* param_1, xEnvAsset* param_2);
RpAtomic* SetPipelineCB(RpAtomic* param_1, void* param_2);

#endif
