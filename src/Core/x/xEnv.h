#ifndef XENV_H
#define XENV_H

#include "../../dolphin/include/dolphin/types.h"
#include "../p2/iEnv.h"

extern struct xLightKit;

struct xEnv
{
    iEnv* geom;
    iEnv ienv;
    xLightKit* lightKit;
};

typedef struct xEnvAsset;

#endif