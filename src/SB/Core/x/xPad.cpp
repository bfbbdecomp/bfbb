#include "xPad.h"

#include "xMathInlines.h"

#include "zMenu.h"
#include "zScene.h"
#include "zGame.h"
#include "zGameExtras.h"
#include "zGlobals.h"

#include <types.h>
#include <string.h>

_tagxPad mPad[4];

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

S32 xPadUpdate(S32 idx, F32 time_passed)
{
    U32 new_on = 0;

    if (zScene_ScreenAdjustMode())
    {
        xPadAnalogIsDigital(0, 0);
    }
    else if (zMenuRunning() || zGameIsPaused() || zGame_HackIsGallery())
    {
        xPadAnalogIsDigital(0, 0);
    }
    else
    {
        xPadAnalogIsDigital(0, 0);
    }

    _tagxPad* p = &mPad[idx];

    if (!iPadUpdate(p, &new_on))
    {
        p->pressed = 0;
        p->released = 0;
        return 1;
    }

    if ((p->flags & 0x10) && (p->flags & 0x1))
    {
        U32 fake_dpad = 0;
        if (p->analog1.x >= 50)
        {
            fake_dpad |= 0x20;
        }
        else if (p->analog1.x <= -50)
        {
            fake_dpad |= 0x80;
        }
        if (p->analog1.y >= 50)
        {
            fake_dpad |= 0x40;
        }
        else if (p->analog1.y <= -50)
        {
            fake_dpad |= 0x10;
        }
        if (fake_dpad == 0)
        {
            p->al2d_timer = 0.0f;
        }
        else
        {
            p->al2d_timer -= time_passed;
            if (p->al2d_timer <= 0.0f)
            {
                new_on |= fake_dpad;
                p->al2d_timer = 0.35f;
            }
        }
    }
#ifdef DEBUGRELEASE
    static S32 submap = 0;
    if (submap)
    {
        SubMapAll((S32*)&new_on, p);
    }
#endif

    p->pressed = new_on & ~p->on;
    p->released = p->on & ~new_on;
    p->on = new_on;

    for (S32 i = 0; i < 22; i++)
    {
        if (p->pressed & (1 << i))
        {
            p->down_tmr[i] = 0.0f;
        }
        else if (p->released & (1 << i))
        {
            p->up_tmr[i] = 0.0f;
        }
        if (p->on & (1 << i))
        {
            p->down_tmr[i] += time_passed;
        }
        else
        {
            p->up_tmr[i] += time_passed;
        }
    }

    if (p->flags & 0x10)
    {
        if (!(p->on & 0x10) && !(p->on & 0x40) && !(p->on & 0x80) && !(p->on & 0x20))
        {
            p->d_timer = 0.0f;
        }
        else
        {
            p->d_timer -= time_passed;
            if (p->d_timer <= 0.0f)
            {
                p->d_timer = 0.35f;
                if (p->on & 0x10)
                {
                    p->pressed |= 0x10;
                }
                else if (p->on & 0x40)
                {
                    p->pressed |= 0x40;
                }
                if (p->on & 0x80)
                {
                    p->pressed |= 0x80;
                }
                else if (p->on & 0x20)
                {
                    p->pressed |= 0x20;
                }
            }
        }
    }

    return 1;
}

void xPadNormalizeAnalog(_tagxPad& pad, S32 inner_zone, S32 outer_zone)
{
    const _tagPadAnalog* src = &pad.analog1;
    for (S32 i = 0; i < 2; i++)
    {
        pad.analog[i].offset.x =
            normalize_analog(src[i].x, -outer_zone, outer_zone, 0, -inner_zone, inner_zone);
        pad.analog[i].offset.y =
            normalize_analog(src[i].y, -outer_zone, outer_zone, 0, -inner_zone, inner_zone);
        if (pad.analog[i].offset.x == 0.0f && pad.analog[i].offset.y == 0.0f)
        {
            pad.analog[i].mag = 0.0f;
            pad.analog[i].dir.assign(1.0f, 0.0f);
            pad.analog[i].ang = 0.0f;
        }
        else
        {
            pad.analog[i].mag = pad.analog[i].offset.length();
            pad.analog[i].dir = pad.analog[i].offset;
            pad.analog[i].dir /= pad.analog[i].mag;
            pad.analog[i].ang = xatan2(pad.analog[i].dir.y, pad.analog[i].dir.x);
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
