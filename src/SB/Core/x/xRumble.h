#ifndef XRUMBLE_H
#define XRUMBLE_H

#include <types.h>

enum _tagRumbleType
{
    eRumble_Off,
    eRumble_Hi,
    eRumble_VeryLightHi,
    eRumble_VeryLight,
    eRumble_LightHi,
    eRumble_Light,
    eRumble_MediumHi,
    eRumble_Medium,
    eRumble_HeavyHi,
    eRumble_Heavy,
    eRumble_VeryHeavyHi,
    eRumble_VeryHeavy,
    eRumble_Total,
    eRumbleForceU32 = 0x7fffffff
};

struct _tagxRumble
{
    _tagRumbleType type;
    F32 seconds;
    _tagxRumble* next;
    S16 active;
    U16 fxflags;
};

#endif
