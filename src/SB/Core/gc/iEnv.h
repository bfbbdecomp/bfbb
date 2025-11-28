#ifndef IENV_H
#define IENV_H

#include "xJSP.h"

#include <rwcore.h>
#include <rpworld.h>

struct iEnv
{
    RpWorld* world;
    RpWorld* collision;
    RpWorld* fx;
    RpWorld* camera;
    xJSPHeader* jsp;
    RpLight* light[2];
    RwFrame* light_frame[2];
    S32 memlvl;
};

struct xEnvAsset;

void iEnvLoad(iEnv* env, const void* data, U32 datasize, S32 dataType);
void iEnvFree(iEnv* env);
void iEnvDefaultLighting(iEnv*);
void iEnvLightingBasics(iEnv*, xEnvAsset*);
void iEnvRender(iEnv* env);
void iEnvEndRenderFX(iEnv*);

inline RwBBox* iEnvGetBBox(iEnv* r3)
{
    return &r3->world->boundingBox;
}

#endif
