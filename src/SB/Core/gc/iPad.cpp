#include <types.h>
#include <dolphin.h>

#include "iPad.h"
#include "xPad.h"

S32 iPadInit()
{
    PADInit();
    return 1;
}

#if 0
_tagxPad* iPadEnable(_tagxPad* pad, S16 port)
{
    pad->port = port;
    pad->slot = 0;
    pad->state = ePad_Enabled;
    // *(undefined4*)(gTrcPad + (int)*(short*)(pad + 0x54) * 0xc + 8) = 2;
    // *(uint*)(pad + 0x40) = *(uint*)(pad + 0x40) | 3;
    // *(uint*)(pad + 0x40) = *(uint*)(pad + 0x40) | 4;
}
#endif

S32 iPadConvFromGCN(U32 a, U32 b, U32 c)
{
    // TODO: this can probably be simplified,
    // basically a copy of ghidra's output
    return c & (S32)(-(a & b) | a & b) >> 0x1f;
}

void iPadRumbleFx(_tagxPad* p, _tagxRumble* r, F32 time_passed)
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
