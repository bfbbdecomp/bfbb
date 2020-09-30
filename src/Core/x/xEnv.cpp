#include "xEnv.h"

extern xEnv* gCurXEnv;

void xEnvLoadBsp(xEnv* env, const void* data, unsigned int datasize, int dataType)
{
    if (dataType == 0)
    {
        env->geom = &env->ienv;
    }

    iEnvLoad(env->geom, data, datasize, dataType);
    gCurXEnv = env;
}

void xEnvSetup(xEnv* env)
{
    iEnvDefaultLighting(env->geom);
    env->lightKit = NULL;
    gCurXEnv = env;
}

void xEnvFree(xEnv* env)
{
    if (env->geom != NULL)
    {
        iEnvFree(env->geom);
        env->geom = NULL;
    }
}

void xEnvRender(xEnv* env)
{
    if (env->geom != NULL)
    {
        iEnvRender(env->geom);
    }
}
