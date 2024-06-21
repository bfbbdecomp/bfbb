#include <types.h>
#include "xVec3.h"
#include "xGlobals.h"
#include "xClimate.h"
#include "xMath3.h"
#include "xString.h"
#include "zParEmitter.h"

// TODO: figure out where to put this
extern "C" {
void memcpy(void* a, const void* b, int32 size);
}

extern xGlobals xglobals;
extern float32 xClimate_f_0;
extern float32 xClimate_f_10_0;
extern _tagClimate* sClimate;




void xClimateInit(_tagClimate* climate)
{
    climate->rain.strength = xClimate_f_0;

    climate->rain.rain_emitter = zParEmitterFind(xStrHash("PAREMIT_RAIN"));
    climate->rain.rain_emitter->emit_flags &= 0xfe;

    climate->rain.snow_emitter = zParEmitterFind(xStrHash("PAREMIT_SNOW"));
    climate->rain.snow_emitter->emit_flags &= 0xfe;
}




void xClimateSetSnow(float32 stre)
{
    sClimate->rain.rain = 0;
    sClimate->rain.strength = stre;
}

void xClimateSetRain(float32 stre)
{
    sClimate->rain.rain = 1;
    sClimate->rain.strength = stre;
}


#if 0
void GetPosBigDogWhattupFool(xVec3* vec)
{
    vec->x = xClimate_f_10_0 * xglobals.camera.mat.at.x + xglobals.camera.mat.pos.x;
    vec->y = xClimate_f_10_0 * xglobals.camera.mat.at.y + xglobals.camera.mat.pos.y;
    vec->z = xClimate_f_10_0 * xglobals.camera.mat.at.z + xglobals.camera.mat.pos.z;
}
#endif




void UpdateWind(_tagClimate* climate, float32 seconds)
{
    return;
}

void xClimateUpdate(_tagClimate* climate, float32 seconds)
{
    UpdateRain(climate, seconds);
    UpdateWind(climate, seconds);
}

void xVec3Init(xVec3* vec, float32 x, float32 y, float32 z)
{
    vec->x = x;
    vec->y = y;
    vec->z = z;
}

void xMat3x3Identity(xMat3x3* matrix)
{
    // TODO: figure out what/where this global variable is
    xMat3x3Copy(matrix, (xMat3x3*)0x8038C2E0);
}

void xMat3x3Copy(xMat3x3* m1, const xMat3x3* m2)
{
    memcpy(m1, m2, sizeof(xMat3x3));
}
