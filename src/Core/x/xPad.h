#ifndef XPAD_H
#define XPAD_H

#include <types.h>
#include "xMath2.h"

enum _tagPadState
{
    ePad_Disabled,
    ePad_DisabledError,
    ePad_Enabled,
    ePad_Missing,
    ePad_Total
};

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

struct _tagPadAnalog
{
    int8 x;
    int8 y;
};

struct _tagxRumble
{
    _tagRumbleType type;
    float32 seconds;
    _tagxRumble* next;
    int16 active;
    uint16 fxflags;
};

struct _tagiPad
{
    int32 port;
};

struct analog_data
{
    xVec2 offset;
    xVec2 dir;
    float32 mag;
    float32 ang;
};

struct _tagxPad
{
    int8 value[22];

    // Offset: 0x16
    int8 last_value[22];

    // Offset: 0x2C
    uint32 on;

    // Offset: 0x30
    uint32 pressed;
    uint32 released;

    // Offset: 0x38
    _tagPadAnalog analog1;
    _tagPadAnalog analog2;
    _tagPadState state;
    uint32 flags;
    _tagxRumble rumble_head;
    int16 port;
    int16 slot;
    _tagiPad context;
    float32 al2d_timer;
    float32 ar2d_timer;
    float32 d_timer;
    float32 up_tmr[22];
    float32 down_tmr[22];
    analog_data analog[2];
};

extern _tagxPad mPad[4];

int32 xPadAddRumble(int32 idx, _tagRumbleType type, float32 time, int32 replace, uint32 fxflags);
int32 xPadUpdate(int32 idx, float32 time_passed);

#endif