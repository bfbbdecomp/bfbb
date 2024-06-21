#ifndef XPAD_H
#define XPAD_H

#include "xRumble.h"
#include "xMath2.h"
#include "../p2/iPad.h"

enum _tagPadState
{
    ePad_Disabled,
    ePad_DisabledError,
    ePad_Enabled,
    ePad_Missing,
    ePad_Total
};

enum _tagPadInit
{
    ePadInit_Open1,
    ePadInit_WaitStable2,
    ePadInit_EnableAnalog3,
    ePadInit_EnableAnalog3LetsAllPissOffChris,
    ePadInit_EnableRumble4,
    ePadInit_EnableRumbleTest5,
    ePadInit_PressureS6,
    ePadInit_PressureSTest7,
    ePadInit_Complete8a,
    ePadInit_Complete8b,
    ePadInit_Finished9
};

struct _tagPadAnalog
{
    int8 x;
    int8 y;
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

// Named after PS2 buttons to match the "PadPress*" events
#define XPAD_BUTTON_START 0x1
#define XPAD_BUTTON_SELECT 0x2
#define XPAD_BUTTON_UP 0x10
#define XPAD_BUTTON_RIGHT 0x20
#define XPAD_BUTTON_DOWN 0x40
#define XPAD_BUTTON_LEFT 0x80
#define XPAD_BUTTON_L1 0x100 // L on gamecube
#define XPAD_BUTTON_L2 0x200
#define XPAD_BUTTON_R1 0x1000 // R on gamecube
#define XPAD_BUTTON_R2 0x2000
#define XPAD_BUTTON_X 0x10000 // A on gamecube
#define XPAD_BUTTON_O 0x20000 // X on gamecube
#define XPAD_BUTTON_SQUARE 0x40000 // Y on gamecube
#define XPAD_BUTTON_TRIANGLE 0x80000 // B on gamecube

// GameCube
#define XPAD_BUTTON_Z 0x100000

extern _tagxPad mPad[4];
extern _tagxRumble mRumbleList[32];
extern _tagxPad* gPlayerPad;

int32 xPadInit();
_tagxPad* xPadEnable(int32 idx);
void xPadRumbleEnable(int32 idx, int32 enable);
int32 xPadUpdate(int32 idx, float32 time_passed);
void xPadNormalizeAnalog(_tagxPad& pad, int32 inner_zone, int32 outer_zone);
void xPadKill();
_tagxRumble* xPadGetRumbleSlot();
void xPadDestroyRumbleChain(_tagxPad* pad);
void xPadDestroyRumbleChain(int32 idx);
int32 xPadAddRumble(int32 idx, _tagRumbleType type, float32 time, int32 replace, uint32 fxflags);

#endif