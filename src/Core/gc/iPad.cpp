#include <types.h>
#include <dolphin.h>

#include "iPad.h"
#include "../x/xPad.h"

int32 iPadInit()
{
    PADInit();
    return 1;
}


#if 0
_tagxPad* iPadEnable(_tagxPad* pad, int16 port)
{
    pad->port = port;
    pad->slot = 0;
    pad->state = ePad_Enabled;
    // *(undefined4*)(gTrcPad + (int)*(short*)(pad + 0x54) * 0xc + 8) = 2;
    // *(uint*)(pad + 0x40) = *(uint*)(pad + 0x40) | 3;
    // *(uint*)(pad + 0x40) = *(uint*)(pad + 0x40) | 4;
}
#endif

int32 iPadConvFromGCN(uint32 a, uint32 b, uint32 c)
{
    // TODO: this can probably be simplified,
    // basically a copy of ghidra's output
    return c & (int32)(-(a & b) | a & b) >> 0x1f;
}

void iPadRumbleFx(_tagxPad* p, _tagxRumble* r, float32 time_passed)
{
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
