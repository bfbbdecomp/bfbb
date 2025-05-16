#include "zEntPlayerBungeeState.h"

#include "xBound.h"
#include "xDebug.h"
#include "xFX.h"
#include "xLinkAsset.h"
#include "xMath.h"
#include "xMathInlines.h"
#include "xMath3.h"
#include "xMarkerAsset.h"
#include "xModel.h"
#include "xPad.h"
#include "xShadow.h"
#include "xString.h"
#include "xVec3.h"

#include "xstransvc.h"
#include "zBase.h"
#include "zEntCruiseBubble.h"
#include "zEntPlayer.h"
#include "zGameExtras.h"
#include "zGlobals.h"

#include "zLightning.h"
#include "zScene.h"
#include <cstring>
#include <types.h>

namespace bungee_state
{
    namespace
    {

        static struct
        {
            F32 bottom_anim_frac;
            F32 top_anim_frac;
            F32 bottom_anim_time;
            F32 top_anim_time;
            F32 hit_anim_time;
            F32 damage_rot;
            F32 death_time;
            F32 vel_blur;
            F32 fade_dist;
            F32 player_radius;
            F32 hook_fade_alpha;
            F32 hook_fade_time;
            struct
            {
                F32 edge_zone;
                F32 sway;
                F32 decay;
            } horizontal; // offset 0x30, size 0xC
            struct
            {
                F32 time;
                F32 anim_out_time;
                F32 min_dist;
                F32 max_dist;
            } dive; // offset 0x3C, size 0x10
            struct
            {
                F32 speed;
            } camera; // offset 0x4C, size 0x4
            struct
            {
                F32 spring;
                F32 decay;
            } turn; // offset 0x50, size 0x8
        } fixed;
        static struct
        {
            S32 flags;
            class state_type* state;
            class state_type* states[2];
            struct
            {
                xAnimTransition* start;
                xAnimTransition* rise;
                xAnimTransition* fall;
                xAnimTransition* stop;
                xAnimTransition* dive_start;
                xAnimTransition* dive_stop;
                xAnimTransition* top_start;
                xAnimTransition* top_stop;
                xAnimTransition* bottom_start;
                xAnimTransition* bottom_stop;
                xAnimTransition* hit;
            } anim_tran; // offset 0x10, size 0x2C
            class hook_type* hook;
            class hook_type* hook_cache[8];
            const drop_asset* drop_cache[32];
            xMarkerAsset* drop_marker_cache[32];
            S32 hook_cache_size;
            S32 drop_cache_size;
            xModelInstance* root_model;
            xModelInstance* ass_model;
            xModelInstance* pants_model;
            xVec3 hook_loc;
            xVec3 drop_loc;
            bool drop_set_view_angle;
            F32 drop_view_angle;
            F32 dismount_delay;
            S32 anim_state;
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
        static void render_player(bool fade)
        {
            xShadowRender(&globals.player.ent, 100.0f);
            xEntRender(&globals.player.ent);

            if (fade)
            {
                xFXRenderProximityFade(*shared.pants_model, 1.0f, fixed.fade_dist);
            }
        }
        static void move_wedgie(const xVec3& stretch_loc)
        {
            if (shared.ass_model == NULL || shared.pants_model == NULL)
            {
                return;
            }
            shared.pants_model->Mat[2] = shared.root_model->Mat[2];

            xMat4x3 tm;
            xMat4x3 mworld;
            xMat4x3 mlocal;
            xMat4x3OrthoInv(&tm, (const xMat4x3*)shared.root_model->Mat);
            xMat3x3Identity(&mworld);
            mworld.pos = stretch_loc;

            static xVec3 tweak_cord_off = { 0 };
            static bool registered = false;
            if (!registered)
            {
                registered = true;
                xDebugAddTweak("Bungee|Hook|temp xoff", &tweak_cord_off.x, -10000.0f, 10000.0f,
                               NULL, NULL, 0);
                xDebugAddTweak("Bungee|Hook|temp yoff", &tweak_cord_off.y, -10000.0f, 10000.0f,
                               NULL, NULL, 0);
                xDebugAddTweak("Bungee|Hook|temp zoff", &tweak_cord_off.z, -10000.0f, 10000.0f,
                               NULL, NULL, 0);
            }
            mworld.pos += tweak_cord_off;
            xMat4x3Mul(&mlocal, &mworld, &tm);
            shared.pants_model->Mat[34] = *(RwMatrix*)&mlocal;
        }

        static void update_hook_loc()
        {
            if (shared.hook == NULL || shared.hook->ent == NULL)
            {
                return;
            }

            xVec3* hook_pos = xEntGetPos(shared.hook->ent);
            shared.hook_loc = *hook_pos + shared.hook->asset->center;
        }

        static bool find_drop_off()
        {
            S32 idx = -1;
            F32 closest = SQR(shared.hook->asset->detach.dist);
            for (S32 i = 0; i < shared.drop_cache_size; ++i)
            {
                xVec3 d = shared.drop_marker_cache[i]->pos - shared.hook_loc;
                F32 len2 = d.length2();
                if (len2 >= closest)
                {
                    continue;
                }
                idx = i;
                closest = len2;
            }

            if (idx != -1)
            {
                shared.drop_loc = shared.drop_marker_cache[idx]->pos;
                shared.drop_set_view_angle = shared.drop_cache[idx]->set_view_angle;
                shared.drop_view_angle = shared.drop_cache[idx]->view_angle;
                return true;
            }
            return false;
        }
        static void trigger(U32 toEvent)
        {
            zEntEvent(shared.hook, shared.hook, toEvent);
        }

        enum state_enum
        {
            STATE_INVALID = -1,
            BEGIN_STATE = 0,
            STATE_ATTACHING = 0,
            STATE_HANGING = 1,
            END_STATE = 2,
            MAX_STATE = 2,
        };
        class state_type
        {
            // total size: 0x8
        public:
            enum state_enum type; // offset 0x0, size 0x4

            virtual void start()
            {
            }
        };
        class ent_info
        {
            // total size: 0x8
        public:
            class xEnt* ent; // offset 0x0, size 0x4
            signed int hits; // offset 0x4, size 0x4
        };
        class env_info
        {
            // total size: 0xC
        public:
            class xEnv* env; // offset 0x0, size 0x4
            unsigned char collide; // offset 0x4, size 0x1
            signed int hits; // offset 0x8, size 0x4
        };
        class hanging_state_type : public state_type
        {
        public:
            struct cb_cache_collisions
            {
                xSphere& o;
                ent_info* ent_cache;
                S32& ent_cache_size;

                S32 operator()(xEnt&, xGridBound&);
            };

            xVec3 loc;
            xVec3 vel;
            xVec3 last_loc;
            xVec3 last_hook_loc;
            xVec3 cam_loc;
            xVec3 cam_vel;
            xVec3 cam_dir;
            xVec3 cam_dir_vel;
            F32 dive_remaining;
            F32 rot;
            F32 rot_vel;
            xVec2 stick_loc;
            F32 stick_ang;
            F32 stick_mag;
            F32 stick_frac;
            xVec3 collide_accel;
            F32 roll_offset;
            bool detaching;
            xVec3 drop_off_vel;
            F32 max_yvel;
            bool dying;
            F32 control_lag_timer;
            F32 control_lag_max;
            bool has_dived;
            bool can_dive;
            U32 last_health;
            struct
            {
                F32 time;
                F32 end_time;
                xVec3 start_loc;
                xVec3 end_loc;
                xQuat start_dir;
                xQuat end_dir;
            } detach; // offset 0xC0, size 0x40
            xModelInstance* root_model;
            xModelInstance* ass_model;
            xModelInstance* pants_model;
            hook_asset h;
            struct
            {
                struct
                {
                    float rest_dist;
                    float emax;
                    float spring;
                    float alpha;
                    float omega;
                } vertical; // offset 0x0, size 0x14
                struct
                {
                    float vscale;
                    float hscale;
                    float roll_decay;
                } camera; // offset 0x14, size 0xC
            } eh; // offset 0x198, size 0x20
            ent_info ent_cache[256];
            S32 ent_cache_size;
            env_info env_cache;

            static void on_tweak_collision(const tweak_info& ti);
            void reset_props_collision();
            static void on_tweak_camera(const tweak_info& ti);
            void reset_props_camera();
            static void on_tweak_horizontal(const tweak_info& ti);
            void reset_props_horizontal();
            static void on_tweak_vertical(const tweak_info& ti);
            void reset_props_vertical();

            F32 spring_velocity(F32 x, F32 v, F32 e, F32 k, F32 g, F32 xc) const;
            F32 spring_potential_energy(F32 x, F32 k, F32 g, F32 xc) const;
            F32 spring_potential_energy(F32, F32) const;
            F32 kinetic_energy(F32 v) const;
            F32 find_spring_min(F32 min_dist, F32 max_dist, F32 gravity, F32 damp) const;

            void start_detaching();
            void calc_drop_off_velocity(xVec3& v, const xVec3& from, const xVec3& to, F32 g, F32 t);
            void render();
            F32 spring_energy(F32 x, F32 v, F32 k, F32 g, F32 xc) const;
        };
        void hanging_state_type::on_tweak_collision(const tweak_info& ti)
        {
            reinterpret_cast<hanging_state_type*>(ti.context)->reset_props_collision();
        }
        void hanging_state_type::reset_props_collision()
        {
            if (shared.hook == NULL)
            {
                return;
            }
            h.collision = shared.hook->asset->collision;

            if (h.collision.damage_velocity == 0.0f)
            {
                h.collision.damage_velocity = FLOAT_MIN;
            }
            else
            {
                h.collision.damage_velocity *= max_yvel;
            }

            if (h.collision.hit_velocity == 0.0f)
            {
                h.collision.hit_velocity = FLOAT_MIN;
            }
            else
            {
                h.collision.hit_velocity *= max_yvel;
            }
        }
        void hanging_state_type::on_tweak_camera(const tweak_info& ti)
        {
            reinterpret_cast<hanging_state_type*>(ti.context)->reset_props_camera();
        }
        void hanging_state_type::reset_props_camera()
        {
            if (shared.hook == NULL)
            {
                return;
            }
            h.camera = shared.hook->asset->camera;

            h.camera.vel_scale /= max_yvel;
            h.camera.view_angle *= DEG2RAD(1.0f);
            h.camera.offset_dir *= DEG2RAD(1.0f);
            h.camera.offset_dir -= h.camera.view_angle;
            eh.camera.roll_decay = 1.0f - h.camera.roll_speed;
        }
        void hanging_state_type::on_tweak_horizontal(const tweak_info& ti)
        {
            reinterpret_cast<hanging_state_type*>(ti.context)->reset_props_horizontal();
        }
        void hanging_state_type::reset_props_horizontal()
        {
            if (shared.hook == NULL)
            {
                return;
            }
            h.horizontal = shared.hook->asset->horizontal;
        }
        void hanging_state_type::on_tweak_vertical(const tweak_info& ti)
        {
            reinterpret_cast<hanging_state_type*>(ti.context)->reset_props_horizontal();
        }
        void hanging_state_type::reset_props_vertical()
        {
            if (shared.hook == NULL)
            {
                return;
            }
            h.vertical = shared.hook->asset->vertical;

            h.vertical.gravity *= -1.0f * h.vertical.frequency * h.vertical.frequency;
            h.vertical.dive *= h.vertical.gravity;
            h.vertical.damp = range_limit(h.vertical.damp, 0.0f, 1.0f);
            h.vertical.min_dist *= -1.0f;
            h.vertical.max_dist *= -1.0f;
            h.vertical.min_dist = find_spring_min(h.vertical.min_dist, h.vertical.max_dist,
                                                  h.vertical.gravity, h.vertical.damp);
            eh.vertical.rest_dist = 0.5f * (h.vertical.max_dist + h.vertical.min_dist);
            eh.vertical.spring = h.vertical.gravity / eh.vertical.rest_dist;
            eh.vertical.alpha = -h.vertical.damp * xsqrt(eh.vertical.spring);
            eh.vertical.omega = xsqrt(eh.vertical.spring - eh.vertical.alpha * eh.vertical.alpha);
            eh.vertical.emax = spring_energy(h.vertical.max_dist, 0.0f, eh.vertical.spring,
                                             h.vertical.gravity, eh.vertical.rest_dist);
            max_yvel =
                spring_velocity(eh.vertical.rest_dist, 1.0f, eh.vertical.emax, eh.vertical.spring,
                                h.vertical.gravity, eh.vertical.rest_dist);
            h.camera.vel_scale = shared.hook->asset->camera.vel_scale / max_yvel;
        }

        F32 hanging_state_type::spring_velocity(F32 x, F32 v, F32 e, F32 k, F32 g, F32 xc) const
        {
            F32 ret = e - spring_potential_energy(x, k, g, xc);
            if (ret <= 0.0f)
            {
                return 0.0f;
            }
            ret = xsqrt(2.0f * ret);

            if (v < 0.0f)
            {
                if (ret > 0.0f)
                {
                    return -ret;
                }
            }
            else
            {
                if (ret < 0.0f)
                {
                    return -ret;
                }
            }
            return ret;
        }
        F32 hanging_state_type::spring_potential_energy(F32 x, F32 k, F32 g, F32 xc) const
        {
            return -(g * -(0.5f * xc - x) - spring_potential_energy(x, k));
        }
        F32 hanging_state_type::spring_potential_energy(F32 x, F32 k) const
        {
            return 0.5f * k * x * x;
        }
        F32 hanging_state_type::spring_energy(F32 x, F32 v, F32 k, F32 g, F32 xc) const
        {
            return kinetic_energy(v) + spring_potential_energy(x, k, g, xc);
        }
        F32 hanging_state_type::kinetic_energy(F32 v) const
        {
            return 0.5f * v * v;
        }
        F32 hanging_state_type::find_spring_min(F32 min_dist, F32 max_dist, F32 gravity,
                                                F32 damp) const
        {
            F32 e = xexp(-PI * damp * xsqrt(-(damp * damp - 1.0f)));
            return (2.0f * min_dist + max_dist * (e - 1.0f)) / (1.0f + e);
        }
        U32 check_anim_start(xAnimTransition*, xAnimSingle*, void*)
        {
            return 0;
        }
        U32 check_anim_hit_to_dive(xAnimTransition*, xAnimSingle*, void*)
        {
            shared.anim_state &= ~0x40;
            return shared.anim_state & 0x2 && (shared.anim_state & 0x80) == 0;
        }
        U32 check_anim_hit_to_top(xAnimTransition*, xAnimSingle*, void*)
        {
            shared.anim_state &= ~0x40;
            return shared.anim_state & 0x8 && (shared.anim_state & 0x80) == 0;
        }
        U32 check_anim_hit_to_bottom(xAnimTransition*, xAnimSingle*, void*)
        {
            shared.anim_state &= ~0x40;
            return shared.anim_state & 0x20 && (shared.anim_state & 0x80) == 0;
        }
        U32 check_anim_hit_to_cycle(xAnimTransition*, xAnimSingle*, void*)
        {
            shared.anim_state &= ~0x40;
            return (shared.anim_state & 0x2a) == 0 && (shared.anim_state & 0x80) == 0;
        }
        U32 check_anim_hit_to_death(xAnimTransition*, xAnimSingle*, void*)
        {
            shared.anim_state &= ~0x40;
            if (shared.anim_state & 0x80)
            {
                play_sound(SOUND_DEATH, 1.0f);
                return 1;
            }
            return 0;
        }
        static S32 find_nearest_hook(const xVec3& loc)
        {
            S32 found = -1;
            F32 closest = 10000000000.0f;
            for (S32 i = 0; i < shared.hook_cache_size; ++i)
            {
                F32 attach_dist = shared.hook_cache[i]->asset->attach.dist;
                xVec3* p = xEntGetPos(shared.hook_cache[i]->ent);
                xVec3 dloc = *p + shared.hook_cache[i]->asset->center - loc;
                F32 len2 = dloc.length2();
                if (len2 <= SQR(attach_dist) && len2 < closest)
                {
                    found = i;
                    closest = len2;
                }
            }
            return found;
        }
        static void init_sounds()
        {
        }
        static xModelInstance* get_hook_model()
        {
            if (shared.hook == NULL || shared.hook->ent == NULL)
            {
                return NULL;
            }
            return shared.hook->ent->model;
        }
        static void fade_hook_reset()
        {
            if ((shared.flags & 0x60) == 0)
            {
                return;
            }

            shared.flags &= ~0x60;
            xModelInstance* hook = get_hook_model();
            if (hook != NULL)
            {
                hook->Alpha = 1.0f;
                hook->Flags &= 0xbfff;
                hook->PipeFlags &= ~0x30;
            }
        }
        static void fade_hook_out()
        {
            if (shared.flags & 0x40)
            {
                return;
            }

            shared.flags &= ~0x60;
            xModelInstance* hook = get_hook_model();
            if (hook != NULL)
            {
                hook->Flags |= 0x4000;
                hook->PipeFlags = hook->PipeFlags & ~0x30 | 0x30;
                shared.flags |= 0x40;
            }
        }
        static void fade_hook_in()
        {
            if (shared.flags & 0x20)
            {
                return;
            }

            shared.flags &= ~0x60;
            xModelInstance* hook = get_hook_model();
            if (hook != NULL)
            {
                hook->Flags |= 0x4000;
                hook->PipeFlags = hook->PipeFlags & ~0x30 | 0x30;
                shared.flags |= 0x20;
            }
        }
        static void fade_hook_update(float dt)
        {
            if ((shared.flags & 0x60) == 0)
            {
                return;
            }

            xModelInstance* hook = get_hook_model();
            if (hook == NULL)
            {
                return;
            }

            float vel = (1.0f - fixed.hook_fade_alpha) / fixed.hook_fade_time;
            if (shared.flags & 0x40)
            {
                hook->Alpha = -(vel * dt - hook->Alpha);
                if (hook->Alpha <= fixed.hook_fade_alpha)
                {
                    hook->Alpha = fixed.hook_fade_alpha;
                    shared.flags &= ~0x40;
                }
            }
            else
            {
                hook->Alpha = vel * dt + hook->Alpha;
                if (hook->Alpha >= 1.0f)
                {
                    hook->Alpha = 1.0f;
                    shared.flags &= ~0x20;
                    hook->Flags &= 0xbfff;
                    hook->PipeFlags &= ~0x30;
                }
            }
        }

        void start()
        {
            if ((shared.flags & 0x7) != 0x3)
            {
                return;
            }

            xEnt& player = globals.player.ent;
            const char* anim_name = player.model->Anim->Single->State->Name;
            bool found = false;
            if (shared.hook == NULL && globals.player.s->pcType == ePlayer_SB &&
                (strcmp(anim_name, "JumpStart01") || strcmp(anim_name, "JumpLift01") ||
                 strcmp(anim_name, "JumpApex01") || strcmp(anim_name, "DJumpStart01") ||
                 strcmp(anim_name, "DJumpLift01") || strcmp(anim_name, "Fall01") ||
                 strcmp(anim_name, "FallHigh01")) &&
                globals.player.cheat_mode == 0 && (globals.player.ControlOff & ~0x4000) == 0)
            {
                found = true;
            }

            shared.hook = NULL;
            if (found)
            {
                S32 i = find_nearest_hook(player.frame->mat.pos);
                if (i >= 0)
                {
                    shared.hook = shared.hook_cache[i];
                    shared.hook->ent = shared.hook_cache[i]->ent;
                }
            }

            if (shared.hook == NULL)
            {
                return;
            }

            zEntPlayerControlOn(CONTROL_OWNER_SPRINGBOARD);
            fade_hook_out();
            init_sounds();
            shared.flags |= 4;
            shared.state = shared.states[0];
            shared.state->start();
        }

        void cache_hook(hook_type& hook)
        {
            shared.hook_cache[shared.hook_cache_size] = &hook;
            shared.hook_cache_size++;
        }

        void cache_drop(const drop_asset& drop, U32 size)
        {
            xMarkerAsset* marker = (xMarkerAsset*)xSTFindAsset(drop.marker, &size);
            if (marker == NULL)
            {
                return;
            }

            if (size != sizeof(xMarkerAsset))
            {
                return;
            }

            shared.drop_cache[shared.drop_cache_size] = &drop;
            shared.drop_marker_cache[shared.drop_cache_size] = marker;
            shared.drop_cache_size++;
        }

        void init_cache()
        {
            shared.hook_cache_size = 0;
            zScene& s = *globals.sceneCur;
            hook_type* it = (hook_type*)s.baseList[eBaseTypeBungeeHook];
            hook_type* end = it + s.baseCount[eBaseTypeBungeeHook];
            for (; it != end; ++it)
            {
                cache_hook(*it);
            }

            shared.drop_cache_size = 0;
            S32 imax = xSTAssetCountByType('DYNA');
            U32 drop_type_id = xStrHash(drop_asset::type_name());
            for (S32 i = 0; i < imax; ++i)
            {
                U32 size = 0;
                xDynAsset* a = (xDynAsset*)xSTFindAssetByType('DYNA', i, &size);
                if (a == NULL)
                {
                    continue;
                }
                if (a->type == drop_type_id)
                {
                    cache_drop(*(drop_asset*)a, size);
                }
            }
        }

        void common_update(xScene& sc, F32 dt)
        {
            zEntPlayerCollTrigger(&globals.player.ent, &sc);
        }

        void hanging_state_type::calc_drop_off_velocity(xVec3& v, const xVec3& from,
                                                        const xVec3& to, F32 g, F32 t)
        {
            v = (to - from) * (1.0f / t);
            v.y = 0.5f * g * t + v.y;
        }

        void hanging_state_type::render()
        {
            render_player(TRUE);
        }

        S32 hanging_state_type::cb_cache_collisions::operator()(xEnt& ent, xGridBound& bound)
        {
            xCollis coll;

            if (!(ent.chkby & 0x10) || !(ent.penby & 0x10))
            {
                return 1;
            }

            coll.flags = 0x0;
            xSphereHitsBound(&o, &ent.bound, &coll);

            if (!(coll.flags & 0x1))
            {
                return 1;
            }

            if (ent.collLev == 0x5)
            {
                xSphereHitsModel(&o, ent.model, &coll);
                if (!(coll.flags & 0x1))
                {
                    return 1;
                }
            }

            ent_info& cache_item = ent_cache[ent_cache_size];
            cache_item.ent = &ent;
            cache_item.hits = 0;
            ent_cache_size++;

            return 1;
        }
    } // namespace

    void load(class xBase& data, class xDynAsset& asset, unsigned long)
    {
        xBaseInit(&data, &asset);
        hook_type& hook = (hook_type&)data;
        hook.asset = (hook_asset*)&asset;
        if (hook.linkCount != 0)
        {
            hook.link = (xLinkAsset*)(hook.asset + 1);
        }
        hook.ent = (xEnt*)zSceneFindObject(hook.asset->entity);
    }
} // namespace bungee_state
