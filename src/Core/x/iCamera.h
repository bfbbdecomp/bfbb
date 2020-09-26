#ifndef ICAMERA_H
#define ICAMERA_H

#include <rwcore.h>

struct iFogParams
{
    RwFogType type;
    float start;
    float stop;
    float density;
    RwRGBA fogcolor;
    RwRGBA bgcolor;
    unsigned char* table;
};

#endif