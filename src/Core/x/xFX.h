#ifndef XFX_H
#define XFX_H

#include <types.h>
#include <rpworld.h>
#include "../p2/iColor.h"
#include "xVec3.h"

typedef struct xFXRing;

struct xFXRing
{
    uint32 texture;
    float32 lifetime;
    xVec3 pos;
    float32 time;
    float32 ring_radius;
    float32 ring_radius_delta;
    float32 ring_tilt;
    float32 ring_tilt_delta;
    float32 ring_height;
    float32 ring_height_delta;
    iColor_tag ring_color;
    uint16 ring_segs;
    uint8 u_repeat;
    uint8 v_repeat;
    xFXRing** parent;
};

xFXRing* xFXRingCreate(xVec3 const* pos, xFXRing const* params);
void xFX_SceneExit(RpWorld* world);

#endif