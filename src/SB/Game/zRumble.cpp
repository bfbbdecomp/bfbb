#include "xPad.h"

#include "zRumble.h"
#include "zGlobals.h"

#include <types.h>

extern F32 lbl_803CDE30; // 0.2f
extern F32 lbl_803CDE34; // 0.1f
extern F32 lbl_803CDE38; // 0.06f
extern F32 lbl_803CDE3C; // 5.0f
extern F32 lbl_803CDE40; // 0.5f
extern F32 lbl_803CDE44; // 0.3f
extern F32 lbl_803CDE48; // 0.05f
extern F32 lbl_803CDE4C; // 0.15f
extern F32 lbl_803CDE50; // 0.35f
extern F32 lbl_803CDE54; // 0.6f
extern F32 lbl_803CDE58; // 0.04f
extern F32 lbl_803CDE5C; // 0.09f
extern F32 lbl_803CDE60; // 0.0f
extern F32 lbl_803CDE64; // 1.0f

#if 0
// Another one that should work, but messes with jump tables. 800acdf0 and 800ace18 are the only ones in the function that don't work.
void zRumbleStart(S32 pad_id, _tagSDRumbleType rumble_type, xEnt* ent)
{
    if (globals.option_vibration != 0)
    {
        switch (rumble_type)
        {
        case SDR_Damage:
            xPadAddRumble(pad_id, eRumble_Medium, lbl_803CDE30, 1, 0);
            break;
        case SDR_BounceHit:
            xPadAddRumble(pad_id, eRumble_Medium, lbl_803CDE34, 0, 0);
            break;
        case SDR_Bounce:
            xPadAddRumble(pad_id, eRumble_Heavy, lbl_803CDE38, 0, 0);
            break;
        case SDR_Tiki:
            zRumbleStartEntDistance(ent, lbl_803CDE3C, eRumble_Medium, lbl_803CDE30);
            break;
        case SDR_LassoDestroy:
            xPadAddRumble(pad_id, eRumble_Heavy, lbl_803CDE38, 0, 0);
            break;
        case SDR_CruiseBubbleLaunch:
            xPadAddRumble(pad_id, eRumble_VeryLight, lbl_803CDE40, 1, 1);
            break;
        case SDR_CruiseBubbleExplode:
            xPadAddRumble(pad_id, eRumble_VeryLightHi, lbl_803CDE34, 1, 0);
            xPadAddRumble(pad_id, eRumble_VeryHeavy, lbl_803CDE44, 0, 1);
            break;
        case SDR_DamageByEGen:
            xPadAddRumble(pad_id, eRumble_MediumHi, lbl_803CDE34, 1, 0);
            break;
        case SDR_WebDestroyed:
            xPadAddRumble(pad_id, eRumble_VeryLight, lbl_803CDE34, 1, 0);
            break;
        case SDR_XploDestroyedObj:
            xPadAddRumble(pad_id, eRumble_Medium, lbl_803CDE34, 1, 0);
            xPadAddRumble(pad_id, eRumble_Heavy, lbl_803CDE34, 0, 1);
            break;
        case SDR_DustDestroyedObj:
            xPadAddRumble(pad_id, eRumble_Light, lbl_803CDE48, 1, 0);
            xPadAddRumble(pad_id, eRumble_Medium, lbl_803CDE4C, 0, 1);
            break;
        case SDR_Test:
            xPadAddRumble(pad_id, eRumble_VeryLightHi, lbl_803CDE40, 1, 1);
            break;
        case SDR_EventLight:
            xPadAddRumble(pad_id, eRumble_Light, lbl_803CDE50, 1, 1);
            break;
        case SDR_EventMedium:
            xPadAddRumble(pad_id, eRumble_Medium, lbl_803CDE50, 1, 1);
            break;
        case SDR_EventHeavy:
            xPadAddRumble(pad_id, eRumble_Heavy, lbl_803CDE50, 1, 1);
            break;
        case SDR_TeleportStart:
            xPadAddRumble(pad_id, eRumble_VeryLight, lbl_803CDE54, 1, 0);
            break;
        case SDR_Teleport:
            xPadAddRumble(pad_id, eRumble_MediumHi, lbl_803CDE58, 1, 0);
            break;
        case SDR_TeleportEject:
            xPadAddRumble(pad_id, eRumble_VeryHeavyHi, lbl_803CDE5C, 1, 0);
        }
    }
}

#endif

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

#if 0
// Can't seem to figure out the proper condition branching.
void zRumbleStartDistance(S32 pad_id, F32 real_dist, F32 max_dist, _tagRumbleType type,
                          F32 maxTime)
{
    F32 fVar1 = lbl_803CDE60;
    if (lbl_803CDE60 <= real_dist && (fVar1 = real_dist, max_dist < real_dist))
    {
        fVar1 = max_dist;
    }
    maxTime = maxTime * (lbl_803CDE64 - fVar1 / max_dist);
    if (maxTime > lbl_803CDE60)
    {
        xPadAddRumble(pad_id, type, maxTime, 1, 1);
    }
}

#endif

#if 0
// Template for future use.
void zRumbleStartEntDistance(xEnt* ent, F32 dist, _tagRumbleType type, F32 maxTime)
{
}

#endif

S32 zPadAddRumble(_tagRumbleType type, F32 time, S32 replace, U32 fxflags)
{
    return xPadAddRumble(globals.currentActivePad, type, time, replace, fxflags);
}
