#ifndef ZRUMBLE_H
#define ZRUMBLE_H

#include <types.h>
#include "xEnt.h"
#include "xPad.h"

enum _tagSDRumbleType
{
    SDR_None,
    SDR_Test,
    SDR_Damage,
    SDR_Bounce,
    SDR_EventLight,
    SDR_EventMedium,
    SDR_EventHeavy,
    SDR_DustDestroyedObj,
    SDR_XploDestroyedObj,
    SDR_WebDestroyed,
    SDR_Tiki,
    SDR_LassoDestroy,
    SDR_DamageByEGen,
    SDR_BounceHit,
    SDR_CruiseBubbleLaunch,
    SDR_CruiseBubbleExplode,
    SDR_TeleportStart,
    SDR_Teleport,
    SDR_TeleportEject,
    SDR_Total
};

void zRumbleStart(S32 pad_id, _tagSDRumbleType rumble_type, xEnt* ent);
void zRumbleStart(S32 pad_id, _tagSDRumbleType rumble_type);
void zRumbleStart(_tagSDRumbleType rumble_type);
void zRumbleStart(_tagSDRumbleType rumble_type, xEnt* ent);
void zRumbleStartDistance(S32 pad_id, F32 real_dist, F32 max_dist, _tagRumbleType type,
                          F32 maxTime);
void zRumbleStartEntDistance(xEnt* ent, F32 dist, _tagRumbleType type, F32 maxTime);
S32 zPadAddRumble(_tagRumbleType type, F32 time, S32 replace, U32 fxflags);

#endif
