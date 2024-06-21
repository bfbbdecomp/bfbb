#ifndef ZRUMBLE_H
#define ZRUMBLE_H

#include <types.h>
#include "../Core/x/xEnt.h"
#include "../Core/x/xPad.h"

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

void zRumbleStart(int32 pad_id, _tagSDRumbleType rumble_type, xEnt* ent);
void zRumbleStart(int32 pad_id, _tagSDRumbleType rumble_type);
void zRumbleStart(_tagSDRumbleType rumble_type);
void zRumbleStart(_tagSDRumbleType rumble_type, xEnt* ent);
void zRumbleStartDistance(int32 pad_id, float32 real_dist, float32 max_dist, _tagRumbleType type,
                          float32 maxTime);
void zRumbleStartEntDistance(xEnt* ent, float32 dist, _tagRumbleType type, float32 maxTime);
int32 zPadAddRumble(_tagRumbleType type, float32 time, int32 replace, uint32 fxflags);

#endif