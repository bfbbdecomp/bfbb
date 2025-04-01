#include "zEntPlayerBungeeState.h"

#include "xMath3.h"
#include "xModel.h"
#include "xVec3.h"

#include "zEntPlayer.h"
#include "zGameExtras.h"
#include "zGlobals.h"

#include <types.h>

namespace bungee_state
{
    namespace
    {
        static class /* @class */
        {
            // total size: 0x19C
        public:
            signed int flags; // offset 0x0, size 0x4
            class state_type* state; // offset 0x4, size 0x4
            class state_type* states[2]; // offset 0x8, size 0x8
            class /* @class */
            {
                // total size: 0x2C
            public:
                class xAnimTransition* start; // offset 0x0, size 0x4
                class xAnimTransition* rise; // offset 0x4, size 0x4
                class xAnimTransition* fall; // offset 0x8, size 0x4
                class xAnimTransition* stop; // offset 0xC, size 0x4
                class xAnimTransition* dive_start; // offset 0x10, size 0x4
                class xAnimTransition* dive_stop; // offset 0x14, size 0x4
                class xAnimTransition* top_start; // offset 0x18, size 0x4
                class xAnimTransition* top_stop; // offset 0x1C, size 0x4
                class xAnimTransition* bottom_start; // offset 0x20, size 0x4
                class xAnimTransition* bottom_stop; // offset 0x24, size 0x4
                class xAnimTransition* hit; // offset 0x28, size 0x4
            } anim_tran; // offset 0x10, size 0x2C
            class hook_type* hook; // offset 0x3C, size 0x4
            class hook_type* hook_cache[8]; // offset 0x40, size 0x20
            class drop_asset* drop_cache[32]; // offset 0x60, size 0x80
            class xMarkerAsset* drop_marker_cache[32]; // offset 0xE0, size 0x80
            signed int hook_cache_size; // offset 0x160, size 0x4
            signed int drop_cache_size; // offset 0x164, size 0x4
            class xModelInstance* root_model; // offset 0x168, size 0x4
            class xModelInstance* ass_model; // offset 0x16C, size 0x4
            class xModelInstance* pants_model; // offset 0x170, size 0x4
            class xVec3 hook_loc; // offset 0x174, size 0xC
            class xVec3 drop_loc; // offset 0x180, size 0xC
            unsigned char drop_set_view_angle; // offset 0x18C, size 0x1
            float drop_view_angle; // offset 0x190, size 0x4
            float dismount_delay; // offset 0x194, size 0x4
            signed int anim_state; // offset 0x198, size 0x4
        } shared = { 1 }; // size: 0x19C, address: 0x4DF7E0

        static F32 old_pants_clip_radius;

        struct sound_group
        {
            S32 first;
            S32 last;
            bool streamed;
        };
        static const sound_group sound_groups[9] = {
            { ePlayerSnd_BungeeAttach, ePlayerSnd_BungeeAttach, false },
            { ePlayerStreamSnd_BungeeAttachComment, ePlayerStreamSnd_BungeeAttachComment, true },
            { ePlayerSnd_BungeeRelease, ePlayerSnd_BungeeRelease, false },
            { ePlayerSnd_BungeeDive1, ePlayerSnd_BungeeDive2, false },
            { ePlayerSnd_Invalid, -1, false },
            { ePlayerSnd_BeginBungee, ePlayerSnd_BeginBungee, false },
            { ePlayerSnd_OuchStart, ePlayerSnd_OuchEnd, false },
            { ePlayerSnd_OuchStart, ePlayerSnd_OuchEnd, false },
            { ePlayerStreamSnd_BungeeBeginDeath, ePlayerStreamSnd_BungeeEndDeath, true },
        };
        enum sound_enum
        {
            SOUND_INVALID = -1,
            BEGIN_SOUND = 0,
            SOUND_ATTACH = 0,
            SOUND_ATTACH_COMMENT = 1,
            SOUND_DETACH = 2,
            SOUND_DIVE = 3,
            SOUND_PEAK = 4,
            SOUND_WIND_LOOP = 5,
            SOUND_THUMP = 6,
            SOUND_DAMAGE = 7,
            SOUND_DEATH = 8,
            END_SOUND = 9,
            MAX_SOUND = 9,
        };

        static void play_sound(sound_enum which, F32 delay)
        {
            const sound_group& sg = sound_groups[which];
            if (sg.first > sg.last)
            {
                return;
            }
            if (sg.first == sg.last)
            {
                if (sg.streamed)
                {
                    zEntPlayer_SNDPlayStreamRandom((_tagePlayerStreamSnd)sg.first,
                                                   (_tagePlayerStreamSnd)sg.last, delay);
                }
                else
                {
                    zEntPlayer_SNDPlay((_tagePlayerSnd)sg.first, delay);
                }
            }
            else
            {
                if (sg.streamed)
                {
                    zEntPlayer_SNDPlayStreamRandom((_tagePlayerStreamSnd)sg.first,
                                                   (_tagePlayerStreamSnd)sg.last, delay);
                }
                else
                {
                    zEntPlayer_SNDPlayRandom((_tagePlayerSnd)sg.first, (_tagePlayerSnd)sg.last,
                                             delay);
                }
            }
        }
        static void stop_sound(S32 which)
        {
            const sound_group& sg = sound_groups[which];
            if (sg.first > sg.last)
            {
                return;
            }
            if (sg.streamed)
            {
                return;
            }
            for (S32 i = sg.first; i <= sg.last; ++i)
            {
                zEntPlayer_SNDStop((_tagePlayerSnd)i);
            }
        }
        static void set_volume(S32 which, F32 new_vol)
        {
            const sound_group& sg = sound_groups[which];
            if (sg.first > sg.last)
            {
                return;
            }
            if (sg.streamed)
            {
                return;
            }
            for (S32 i = sg.first; i <= sg.last; ++i)
            {
                zEntPlayer_SNDSetVol((_tagePlayerSnd)i, new_vol);
            }
        }
        static void init_models()
        {
            shared.root_model = globals.player.ent.model;
            shared.ass_model = globals.player.sb_models[3];
            shared.pants_model = globals.player.sb_models[4];
            xModelInstanceUpgradeBrotherShared(globals.player.sb_models[4],
                                               globals.player.sb_models[4]->Flags & 0xdfff | 8);
        }
        static void show_models()
        {
            shared.ass_model->Flags |= 0x3;
            shared.pants_model->Flags &= 0xfff7;
            shared.pants_model->Flags |= 0x22;
            old_pants_clip_radius = shared.pants_model->Data->boundingSphere.radius;
            shared.pants_model->Data->boundingSphere.radius = 500.0f;
        }
        static void hide_models()
        {
            shared.pants_model->Flags &= 0xffdc;
            shared.pants_model->Flags |= 0x8;
            // old_pants_clip_radius = shared.pants_model->Data->boundingSphere.radius;
            shared.pants_model->Data->boundingSphere.radius = old_pants_clip_radius;

            if (zGameExtras_CheatFlags() & 0x10000000)
            {
                shared.ass_model->Flags |= 0x3;
            }
            else
            {
                shared.ass_model->Flags &= ~0x3;
            }
        }
    } // namespace
} // namespace bungee_state
