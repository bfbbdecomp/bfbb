#ifndef ICAMERA_H
#define ICAMERA_H

#include <rwcore.h>
#include <types.h>

struct iFogParams
{
    RwFogType type;
    float32 start;
    float32 stop;
    float32 density;
    RwRGBA fogcolor;
    RwRGBA bgcolor;
    uint8* table;
};

#endif