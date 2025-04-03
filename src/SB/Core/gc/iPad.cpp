#include <types.h>
#include <dolphin.h>

#include "xTRC.h"
#include "zGlobals.h"

extern xGlobals* xglobals;
extern zGlobals globals;

PADStatus sPadData[PAD_MAX_CONTROLLERS];

S32 iPadInit()
{
    PADInit();
    return 1;
}

_tagxPad* iPadEnable(_tagxPad* pad, S16 port)
{
    pad->port = port;
    pad->slot = 0;
    pad->state = ePad_Enabled;
    gTrcPad[pad->port].state = TRC_PadInserted;
    pad->flags |= 3;
    pad->flags |= 4;
    return pad;
}

S32 iPadConvStick(F32 value)
{
    F32 clampedValue;
    if (value > 40.0f)
    {
        clampedValue = 40.0f;
    }
    else if (value < -40.0f)
    {
        clampedValue = -40.0f;
    }
    else
    {
        clampedValue = value;
    }

    F32 convertedValue = 3.2f * clampedValue;

    if (convertedValue > 127.0f)
    {
        convertedValue = 127.0f;
    }
    else if (convertedValue < -127.0f)
    {
        convertedValue = -127.0f;
    }

    return convertedValue;
}

S32 iPadUpdate(_tagxPad* pad, U32* on)
{
    U16 buttons;
    U32 temp_on;

    if (pad->port == 0)
    {
        PADRead(sPadData);
        PADClamp(sPadData);
    }

    PADStatus* padData = (PADStatus*)&sPadData;
    switch (padData[pad->port].err)
    {
    case PAD_ERR_NO_CONTROLLER:
        xTRCPad(pad->port, TRC_PadMissing);
        PADReset(0x80000000 >> pad->port);
        goto defaultError;

    case PAD_ERR_NOT_READY:
    case PAD_ERR_TRANSFER:
        return 0;

    default:
    defaultError:
        return 0;

    case PAD_ERR_NONE:
        temp_on = iPadConvFromGCN(padData[pad->port].button, 1, 0x80);
        temp_on |= iPadConvFromGCN(sPadData[pad->port].button, 2, 0x20);
        temp_on |= iPadConvFromGCN(sPadData[pad->port].button, 4, 0x40);
        temp_on |= iPadConvFromGCN(sPadData[pad->port].button, 8, 0x10);
        buttons = sPadData[pad->port].button;

        if (buttons & 0x10)
        {
            temp_on |= iPadConvFromGCN(sPadData[pad->port].button, 0x20, 0x2000);
            temp_on |= iPadConvFromGCN(sPadData[pad->port].button, 0x40, 0x200);
            if (sPadData[pad->port].triggerLeft >= 0x18)
            {
                temp_on |= 0x200;
            }
            if (sPadData[pad->port].triggerRight >= 0x18)
            {
                temp_on |= 0x2000;
            }
            temp_on |= 0x100000;
        }
        else
        {
            temp_on |= iPadConvFromGCN(sPadData[pad->port].button, 0x20, 0x1000);
            temp_on |= iPadConvFromGCN(sPadData[pad->port].button, 0x40, 0x100);
            if (sPadData[pad->port].triggerLeft >= 0x18)
            {
                temp_on |= 0x100;
            }
            if (sPadData[pad->port].triggerRight >= 0x18)
            {
                temp_on |= 0x1000;
            }
        }

        temp_on |= iPadConvFromGCN(sPadData[pad->port].button, 0x100, 0x10000);
        temp_on |= iPadConvFromGCN(sPadData[pad->port].button, 0x200, 0x80000);
        temp_on |= iPadConvFromGCN(sPadData[pad->port].button, 0x800, 0x40000);
        temp_on |= iPadConvFromGCN(sPadData[pad->port].button, 0x400, 0x20000);
        temp_on |= iPadConvFromGCN(sPadData[pad->port].button, 0x1000, 0x1);
        (*on) = temp_on;

        pad->analog1.x = iPadConvStick(sPadData[pad->port].stickX);
        pad->analog1.y = -iPadConvStick(sPadData[pad->port].stickY); // Scheduling memes.
        pad->analog2.x = iPadConvStick(sPadData[pad->port].substickX);
        pad->analog2.y = -iPadConvStick(sPadData[pad->port].substickY); // Same as above.
        if (gTrcPad[pad->port].state != TRC_PadInserted)
        {
            xTRCPad(pad->port, TRC_PadInserted);
        }
    }
    return 1;
}

S32 iPadConvFromGCN(U32 a, U32 b, U32 c)
{
    // TODO: this can probably be simplified,
    // basically a copy of ghidra's output
    return c & (S32)(-(a & b) | a & b) >> 0x1f;
}

void iPadRumbleFx(_tagxPad* p, _tagxRumble* r, F32 time_passed)
{
}

void iPadStopRumble()
{
    PADControlMotor(mPad[globals.currentActivePad].port, 0); // Scheduling memes.
}

void iPadStopRumble(_tagxPad* pad)
{
    PADControlMotor(pad->port, 0);
}

void iPadStartRumble(_tagxPad* pad, _tagxRumble* rumble)
{
    PADControlMotor(pad->port, 1);
}

void iPadKill()
{
}
