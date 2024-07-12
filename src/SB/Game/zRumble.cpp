#include "xPad.h"
#include "xMath.h"

#include "zRumble.h"
#include "zGlobals.h"

#include <types.h>

void zRumbleStart(S32 pad_id, _tagSDRumbleType rumble_type, xEnt* ent)
{
    if (globals.option_vibration == 0)
    {
        return;
    }

    switch (rumble_type)
    {
    case SDR_Damage:
        xPadAddRumble(pad_id, eRumble_Medium, 0.2f, 1, 0);
        break;
    case SDR_BounceHit:
        xPadAddRumble(pad_id, eRumble_Medium, 0.1f, 0, 0);
        break;
    case SDR_Bounce:
        xPadAddRumble(pad_id, eRumble_Heavy, 0.06f, 0, 0);
        break;
    case SDR_Tiki:
        zRumbleStartEntDistance(ent, 5.0f, eRumble_Medium, 0.2f);
        break;
    case SDR_LassoDestroy:
        xPadAddRumble(pad_id, eRumble_Heavy, 0.06f, 0, 0);
        break;
    case SDR_CruiseBubbleLaunch:
        xPadAddRumble(pad_id, eRumble_VeryLight, 0.5f, 1, 1);
        break;
    case SDR_CruiseBubbleExplode:
        xPadAddRumble(pad_id, eRumble_VeryLightHi, 0.1f, 1, 0);
        xPadAddRumble(pad_id, eRumble_VeryHeavy, 0.3f, 0, 1);
        break;
    case SDR_DamageByEGen:
        xPadAddRumble(pad_id, eRumble_MediumHi, 0.1f, 1, 0);
        break;
    case SDR_WebDestroyed:
        xPadAddRumble(pad_id, eRumble_VeryLight, 0.1f, 1, 0);
        break;
    case SDR_XploDestroyedObj:
        xPadAddRumble(pad_id, eRumble_Medium, 0.1f, 1, 0);
        xPadAddRumble(pad_id, eRumble_Heavy, 0.1f, 0, 1);
        break;
    case SDR_DustDestroyedObj:
        xPadAddRumble(pad_id, eRumble_Light, 0.05f, 1, 0);
        xPadAddRumble(pad_id, eRumble_Medium, 0.15f, 0, 1);
        break;
    case SDR_Test:
        xPadAddRumble(pad_id, eRumble_VeryLightHi, 0.5f, 1, 1);
        break;
    case SDR_EventLight:
        xPadAddRumble(pad_id, eRumble_Light, 0.35f, 1, 1);
        break;
    case SDR_EventMedium:
        xPadAddRumble(pad_id, eRumble_Medium, 0.35f, 1, 1);
        break;
    case SDR_EventHeavy:
        xPadAddRumble(pad_id, eRumble_Heavy, 0.35f, 1, 1);
        break;
    case SDR_TeleportStart:
        xPadAddRumble(pad_id, eRumble_VeryLight, 0.6f, 1, 0);
        break;
    case SDR_Teleport:
        xPadAddRumble(pad_id, eRumble_MediumHi, 0.04f, 1, 0);
        break;
    case SDR_TeleportEject:
        xPadAddRumble(pad_id, eRumble_VeryHeavyHi, 0.09f, 1, 0);
        break;
    }
}

void zRumbleStart(S32 pad_id, _tagSDRumbleType rumble_type)
{
    zRumbleStart(pad_id, rumble_type, NULL);
}

void zRumbleStart(_tagSDRumbleType rumble_type)
{
    zRumbleStart(globals.currentActivePad, rumble_type);
}

void zRumbleStart(_tagSDRumbleType rumble_type, xEnt* ent)
{
    zRumbleStart(globals.currentActivePad, rumble_type, ent);
}

void zRumbleStartDistance(S32 pad_id, F32 real_dist, F32 max_dist, _tagRumbleType type, F32 maxTime)
{
    if (real_dist < 0.0f)
    {
        real_dist = 0.0f;
    }
    else if (real_dist > max_dist)
    {
        real_dist = max_dist;
    }

    maxTime *= (1.0f - real_dist / max_dist);
    if (maxTime > 0.0f)
    {
        xPadAddRumble(pad_id, type, maxTime, 1, 1);
    }
}

// Equivalent: regalloc
void zRumbleStartEntDistance(xEnt* ent, F32 dist, _tagRumbleType type, F32 maxTime)
{
    xVec3* ent_pos = xEntGetPos(ent);
    xVec3* player_pos = xEntGetPos(&globals.player.ent);
    xVec3 ent_player_dist;
    xVec3Sub(&ent_player_dist, player_pos, ent_pos);

    zRumbleStartDistance(globals.currentActivePad, SQR(ent_player_dist.x) + SQR(ent_player_dist.z),
                         SQR(dist), type, maxTime);
}

S32 zPadAddRumble(_tagRumbleType type, F32 time, S32 replace, U32 fxflags)
{
    return xPadAddRumble(globals.currentActivePad, type, time, replace, fxflags);
}
