#ifndef XLIGHTKIT_H
#define XLIGHTKIT_H

#include <types.h>
#include <rwcore.h>
#include <rpworld.h>

struct xLightKitLight
{
    uint32 type;
    RwRGBAReal color;
    float32 matrix[16];
    float32 radius;
    float32 angle;
    RpLight* platLight;
};

struct xLightKit
{
    uint32 tagID;
    uint32 groupID;
    uint32 lightCount;
    xLightKitLight* lightList;
};

xLightKit* xLightKit_Prepare(void* data);
void xLightKit_Enable(xLightKit* lkit, RpWorld* world);

#endif