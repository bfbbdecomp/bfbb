#ifndef RWCORE_H
#define RWCORE_H

enum RwFogType
{
    rwFOGTYPENAFOGTYPE,
    rwFOGTYPELINEAR,
    rwFOGTYPEEXPONENTIAL,
    rwFOGTYPEEXPONENTIAL2,
    rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct RwRGBA
{
    unsigned char red;
    unsigned char green;
    unsigned char blue;
    unsigned char alpha;
};

struct RwCamera
{
};

struct RpAtomic
{
};

struct RpWorld
{
};

#endif