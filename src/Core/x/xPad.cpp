#include "xPad.h"

#include <types.h>
#include <string.h>

int32 xPadInit()
{
    memset(mPad, 0, sizeof(mPad));
    memset(mRumbleList, 0, sizeof(mRumbleList));
    int32 code = iPadInit();
    if (!code)
    {
        return 0;
    }
    gPlayerPad = mPad;
    return 1;
}

#if 1

// func_80035ED8
#pragma GLOBAL_ASM("asm/Core/x/xPad.s", "xPadEnable__Fi")

#else

// WIP.
_tagxPad* xPadEnable(int32 idx)
{
    _tagxPad* p = mPad + idx;
    if (p->state == ePad_Disabled && idx == 0)
    {
        p = iPadEnable(mPad + idx, 0);
    }
    return p;
}

#endif

void xPadRumbleEnable(int32 idx, int32 enable)
{
    _tagxPad* p = mPad + idx;
    if (p->state != 2)
    {
        enable = 0;
    }
    if (enable)
    {
        if (p->flags & 4)
        {
            p->flags |= 8;
        }
    }
    else
    {
        if (p->flags & 8)
        {
            p->flags ^= 8;
            xPadDestroyRumbleChain(mPad + idx);
        }
    }
}

// func_80035FC4
#pragma GLOBAL_ASM("asm/Core/x/xPad.s", "xPadUpdate__Fif")

// func_80036478
#pragma GLOBAL_ASM("asm/Core/x/xPad.s", "xPadNormalizeAnalog__FR8_tagxPadii")

void xPadKill()
{
    iPadKill();
}

#if 1

// func_800365A4
#pragma GLOBAL_ASM("asm/Core/x/xPad.s", "xPadGetRumbleSlot__Fv")

#else

// WIP.
_tagxRumble* xPadGetRumbleSlot()
{
    _tagxRumble* rum = mRumbleList;
    for (int32 i = 0x20; i > 0; i--)
    {
        if (rum->active == 0)
        {
            memset(rum, 0, sizeof(_tagxRumble));
            return rum;
        }
        rum++;
    }
    return NULL;
}

#endif

void xPadDestroyRumbleChain(_tagxPad* pad)
{
    iPadStopRumble(pad);
    _tagxRumble* curr = pad->rumble_head.next;
    while (curr != NULL)
    {
        memset(curr, 0, sizeof(_tagxRumble));
        curr = curr->next;
    }
    pad->rumble_head.next = NULL;
}

void xPadDestroyRumbleChain(int32 idx)
{
    xPadDestroyRumbleChain(mPad + idx);
}

// func_800366B0
#pragma GLOBAL_ASM("asm/Core/x/xPad.s", "xPadAddRumble__Fi14_tagRumbleTypefiUi")

// func_800367AC
#pragma GLOBAL_ASM("asm/Core/x/xPad.s", "xPadAnalogIsDigital__Fii")

// func_80036834
#pragma GLOBAL_ASM("asm/Core/x/xPad.s", "__adv__5xVec2Ff")

// func_80036858
#pragma GLOBAL_ASM("asm/Core/x/xPad.s", "length__5xVec2CFv")

// func_8003687C
#pragma GLOBAL_ASM("asm/Core/x/xPad.s", "normalize_analog__Fiiiiii")
