#ifndef XENV_H
#define XENV_H

#include <types.h>
#include "../p2/iEnv.h"
#include "xLightKit.h"

struct xEnv
{
    iEnv* geom;
    iEnv ienv;
    xLightKit* lightKit;
};

typedef struct xEnvAsset;

#endif