#include "xPad.h"

#include <types.h>
#include <string.h>

S32 xPadInit()
{
    memset(mPad, 0, sizeof(mPad));
    memset(mRumbleList, 0, sizeof(mRumbleList));
    S32 code = iPadInit();
    if (!code)
    {
        return 0;
    }
    gPlayerPad = mPad;
    return 1;
}

// WIP.
_tagxPad* xPadEnable(S32 idx)
{
    _tagxPad* p = mPad + idx;
    if (p->state == ePad_Disabled && idx == 0)
    {
        p = iPadEnable(mPad + idx, 0);
    }
    return p;
}

void xPadRumbleEnable(S32 idx, S32 enable)
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

void xPadAnalogIsDigital(S32 idx, S32 enable)
{
    if (idx != 0)
        return;

    _tagxPad* pad = &mPad[idx];

    if (enable)
    {
        pad->flags |= 0x10;
    }
    else
    {
        pad->flags &= ~0x10;
    }

    if (pad->al2d_timer >= 0.35f)
    {
        pad->al2d_timer = 0.35f;
    }

    if (pad->ar2d_timer >= 0.35f)
    {
        pad->ar2d_timer = 0.35f;
    }

    if (pad->d_timer >= 0.35f)
    {
        pad->d_timer = 0.35f;
    }
}

void xPadKill()
{
    iPadKill();
}

// WIP.
_tagxRumble* xPadGetRumbleSlot()
{
    _tagxRumble* rum = mRumbleList;
    for (S32 i = 0x20; i > 0; i--)
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

void xPadDestroyRumbleChain(S32 idx)
{
    xPadDestroyRumbleChain(mPad + idx);
}
