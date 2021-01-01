#ifndef ZENV_H
#define ZENV_H

#include "../Core/x/xBase.h"
#include "../Core/x/xEnv.h"

struct _zEnv : xBase
{
    xEnvAsset* easset;
};

void zEnvStartingCamera(_zEnv* env);

#endif