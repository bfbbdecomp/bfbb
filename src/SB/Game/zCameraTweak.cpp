#include "zCameraTweak.h"

#include <types.h>

static float sCamPitch;
static float sCamH;
static float sCamD;

F32 zCameraTweakGlobal_GetPitch()
{
    return sCamPitch;
}

F32 zCameraTweakGlobal_GetH()
{
    return sCamH;
}

F32 zCameraTweakGlobal_GetD()
{
    return sCamD;
}
