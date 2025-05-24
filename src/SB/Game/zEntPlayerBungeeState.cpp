#include "zEntPlayerBungeeState.h"

#include "iScrFX.h"
#include "xBound.h"
#include "xCamera.h"
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
#include "zCamera.h"
#include "zEntCruiseBubble.h"
#include "zEntPlayer.h"
#include "zGameExtras.h"
#include "zGlobals.h"

#include "zLightning.h"
#include "zScene.h"
#include "zCameraTweak.h"
#include <cstring>
#include <types.h>

// FIXME: remove this when no longer needed for float data order
static void __all_the_floats(F32* out)
{
#define FLOATDATA(n) out[__LINE__] = n
    FLOATDATA(500.0f);
    FLOATDATA(100.0f);
    FLOATDATA(1.0f);
    FLOATDATA(0.5f);
    FLOATDATA(0.1f);
    FLOATDATA(-10000.0f);
    FLOATDATA(10000.0f);
    FLOATDATA(3.57E-43f);
    FLOATDATA(0.0f);
    FLOATDATA(-9.9999997E+37f);
    FLOATDATA(0.017453292f);
    FLOATDATA(-1.0f);
    FLOATDATA(2.0f);
    FLOATDATA(3.0f);
    FLOATDATA(100000.0f);
    FLOATDATA(0.0000099999997f);
    FLOATDATA(-3.1415927f);
    FLOATDATA(1.0E+10f);
    FLOATDATA(0.05f);
    FLOATDATA(10.0f);
    FLOATDATA(1000.0f);
    FLOATDATA(1.5f);
    FLOATDATA(20.0f);
    FLOATDATA(0.3f);
    FLOATDATA(0.0099999998f);
    FLOATDATA(0.25f);
    FLOATDATA(0.91f);
    FLOATDATA(5.0f);
    FLOATDATA(0.6f);
    FLOATDATA(0.50999999f);
    FLOATDATA(1.0E+9f);
    FLOATDATA(25.0f);
    FLOATDATA(0.94999999f);
    FLOATDATA(200.0f);
    FLOATDATA(360.0f);
    FLOATDATA(3.1415927f);
    FLOATDATA(6.2831855f);
    FLOATDATA(0.70710677f);
    FLOATDATA(0.57735026f);
    FLOATDATA(0.000099999997f);
    FLOATDATA(1.5707964f);
    FLOATDATA(-0.0000099999997f);
#undef FLOATDATA
} // namespace all_the_floats

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
            state_type(state_enum type) : type(type)
            {
            }

            state_enum type;

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
            hanging_state_type() : state_type(STATE_HANGING)
            {
            }

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
                    F32 rest_dist;
                    F32 emax;
                    F32 spring;
                    F32 alpha;
                    F32 omega;
                } vertical; // offset 0x0, size 0x14
                struct
                {
                    F32 vscale;
                    F32 hscale;
                    F32 roll_decay;
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

            void allow_dive(bool allowed);

            void update_vmovement(F32 dt);
            void calc_movement(F32& r3, F32& r4, F32& r5, F32 f1, F32 f2, F32 f3, F32 f4, F32 f5,
                               F32 f6);

            void update_heading(F32 dt);
            void update_animation(F32 dt);
            xSphere player_bound() const;
            void update_sound(F32 dt);
            void update_blur(F32 dt);
            xVec3 local_to_world(const xVec3& vl) const;
            S32 detach_update(xScene& scene, F32& dt);
            void update_detach_camera(F32 dt);
            void start_detaching();
            void calc_drop_off_velocity(xVec3& v, const xVec3& from, const xVec3& to, F32 g, F32 t);
            void render();
            F32 spring_energy(F32 x, F32 v, F32 k, F32 g, F32 xc) const;
        };
        class attaching_state_type : public state_type
        {
        public:
            attaching_state_type() : state_type(STATE_ATTACHING)
            {
            }

            xVec3* loc;
            xVec3* vel;
            xVec3 last_hook_loc;
            xVec3 hook_vel;
            F32 time_left;
            F32 time;
            F32 end_time;
            xVec3 player_loc;
            xVec3 player_vel;
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

        void hanging_state_type::update_vmovement(F32 dt)
        {
            F32 dv;
            F32 v;
            F32 range;
            F32 ybottom;

            if (can_dive && globals.pad0->pressed & 0x10000 && control_lag_timer <= 0.0f &&
                !dying && dive_remaining <= 0.0f)
            {
                has_dived = true;
                allow_dive(false);
                dive_remaining = fixed.dive.time;
            }

            if (dive_remaining > 0.0f)
            {
                dive_remaining -= dt;

                if (dive_remaining < 0.0f)
                {
                    dive_remaining = 0.0f;
                    dv = h.vertical.dive * dt;
                }
                else
                {
                    dv = h.vertical.dive * (dt + dive_remaining);
                }

                if (spring_energy(loc.x, vel.y, eh.vertical.spring, h.vertical.frequency,
                                  eh.vertical.rest_dist) < eh.vertical.emax)
                {
                }
            }
        }

        void hanging_state_type::calc_movement(F32& r4, F32& r5, F32& r6, F32 f1, F32 f2, F32 f3,
                                               F32 f4, F32 f5, F32 f6)
        {
            F32 dVar1;
            F32 dVar2;
            F32 dVar3;
            F32 dVar4;
            F32 dVar5;
            F32 dVar6;
            F32 dVar7;
            F32 dVar8;
            F32 dVar9;
            F32 dVar10;
            F32 dVar11;

            dVar7 = f6;
            dVar6 = f5;
            dVar5 = f4;
            dVar4 = f3;
            dVar3 = f2;
            dVar2 = f1;
            dVar11 = dVar7 * dVar4;
            dVar1 = isin(dVar11);
            dVar11 = icos(dVar11);
            dVar9 = dVar2 - dVar5;
            dVar8 = -(dVar9 * dVar6 - dVar3) / dVar7;
            dVar10 = dVar8 * dVar6 - dVar9 * dVar7;
            dVar2 = xexp(dVar6 * dVar4);

            r4 = dVar2 * (dVar9 * dVar11 + (dVar8 * dVar1)) + dVar5;
            r5 = dVar2 * (dVar3 * dVar11 + (dVar10 * dVar1));
            r6 = dVar2 * (dVar11 * (dVar3 * dVar6 + (dVar10 * dVar7)) +
                          (dVar1 * (dVar10 * dVar6 - (dVar3 * dVar7))));
        }

        void hanging_state_type::update_heading(F32 dt)
        {
            F32 angle = xrmod((PI / 2) - stick_ang - rot);
            rot_vel += stick_frac * (angle - PI) * fixed.turn.spring * stick_mag * dt;

            rot += rot_vel * dt;
            rot_vel *= fixed.turn.decay;
        }

        S32 hanging_state_type::detach_update(xScene& scene, F32& dt)
        {
            xSphere sphere;

            last_hook_loc = shared.hook_loc;
            update_hook_loc();

            stick_loc.x = stick_loc.y = 0.0f; // Chained assignment required for match
            last_loc = loc;

            xVec3 deltaVel = loc.normal() * -h.detach.accel;
            vel += deltaVel * dt;
            loc += deltaVel * dt * dt + vel * dt;

            update_animation(dt);
            update_detach_camera(dt);

            globals.player.ent.bound.sph = player_bound();

            update_sound(dt);
            update_blur(dt);

            if (loc.y >= 0.0f || loc.length2() <= 0.1f)
            {
                play_sound(SOUND_DETACH, 0.0f);
                return -1;
            }

            return 1;
        }

        void hanging_state_type::update_detach_camera(F32 dt)
        {
            xMat4x3 cammat;
            xQuat dir;

            detach.time += dt;

            F32 detachTimeRatio;
            if (detach.time < detach.end_time)
            {
                detachTimeRatio = detach.time / detach.end_time;
            }
            else
            {
                detachTimeRatio = 1.0f;
            }

            F32 curve = xSCurve(detachTimeRatio);
            cammat.pos = detach.start_loc + (detach.end_loc - detach.start_loc) * curve;
            cammat.pos += local_to_world(loc);

            xQuatSlerp(&dir, &detach.start_dir, &detach.end_dir, curve);
            xQuatToMat(&dir, &cammat);

            xCameraMove(&globals.camera, cammat.pos);
            xCameraRotate(&globals.camera, cammat, 0.0f, 0.0f, 0.0f);
        }

        void hanging_state_type::start_detaching()
        {
            xVec3 eulerVec;
            xMat3x3 mat;

            detaching = true;
            calc_drop_off_velocity(drop_off_vel, shared.hook_loc, shared.drop_loc,
                                   globals.player.g.Gravity,
                                   shared.hook->asset->detach.free_fall_time);

            xVec3 localMatRIght = local_to_world(globals.camera.mat.right);
            mat.right = globals.camera.mat.right;
            mat.up.assign(0.0f, 1.0f, 0.0f);
            mat.at = localMatRIght.cross(mat.up);

            F32 hgoal = globals.camera.hgoal;
            F32 dgoal = globals.camera.dgoal;
            detach.start_loc = globals.camera.mat.pos - localMatRIght;
            detach.end_loc = mat.up * hgoal + mat.at * -dgoal;

            xMat3x3GetEuler(&mat, &eulerVec);
            eulerVec.x = zCameraTweakGlobal_GetPitch();
            eulerVec.y = 0.0f;
            xMat3x3Euler(&mat, &eulerVec);

            xQuatFromMat(&detach.start_dir, &globals.camera.mat);
            xQuatFromMat(&detach.end_dir, &mat);

            detach.time = 0.0f;
            detach.end_time = xsqrt(__fabs(loc.length() / h.detach.accel));
            if (detach.end_time >= -1e-5f && detach.end_time <= 1e-5f)
            {
                detach.end_time = 0.01f;
            }

            globals.camera.tm_dec = 0.0f;
            globals.camera.tm_acc = 0.0f;
            globals.camera.tmr = 0.0f;
            globals.camera.ltm_dec = 0.0f;
            globals.camera.ltm_acc = 0.0f;
            globals.camera.ltmr = 0.0f;
            globals.camera.pgoal = PI + eulerVec.x;
            globals.camera.pcur = PI + eulerVec.x;
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

    void load_settings(xIniFile& ini)
    {
        fixed.bottom_anim_frac = xIniGetFloat(&ini, "SB.state.bungee.bottom_anim_frac", 0.05f);
        if (fixed.bottom_anim_frac < 0.0f)
        {
            fixed.bottom_anim_frac = 0.0f;
        }
        if (fixed.bottom_anim_frac > 0.5f)
        {
            fixed.bottom_anim_frac = 0.5f;
        }
        xDebugAddTweak("Bungee|Globals|Anim Bottom Fraction", &fixed.bottom_anim_frac, 0.0f, 0.5f,
                       NULL, NULL, 0);

        fixed.top_anim_frac = xIniGetFloat(&ini, "SB.state.bungee.top_anim_frac", 0.1f);
        if (fixed.top_anim_frac < 0.0f)
        {
            fixed.top_anim_frac = 0.0f;
        }
        if (fixed.top_anim_frac > 0.5f)
        {
            fixed.top_anim_frac = 0.5f;
        }
        xDebugAddTweak("Bungee|Globals|Anim Top Fraction", &fixed.top_anim_frac, 0.0f, 0.5f, NULL,
                       NULL, NULL);

        fixed.bottom_anim_time = xIniGetFloat(&ini, "SB.state.bungee.bottom_anim_time", 0.1f);
        if (fixed.bottom_anim_time < 0.0f)
        {
            fixed.bottom_anim_time = 0.0f;
        }
        if (fixed.bottom_anim_time > 2.0f)
        {
            fixed.bottom_anim_time = 2.0f;
        }
        xDebugAddTweak("Bungee|Globals|Anim Trans Bottom-Time", &fixed.bottom_anim_time, 0.0f, 2.0f,
                       NULL, NULL, NULL);

        fixed.top_anim_time = xIniGetFloat(&ini, "SB.state.bungee.top_anim_time", 0.1f);
        if (fixed.top_anim_time < 0.0f)
        {
            fixed.top_anim_time = 0.0f;
        }
        if (fixed.top_anim_time > 2.0f)
        {
            fixed.top_anim_time = 2.0f;
        }
        xDebugAddTweak("Bungee|Globals|Anim Trans Top-Time", &fixed.top_anim_time, 0.0f, 2.0f, NULL,
                       NULL, NULL);

        fixed.hit_anim_time = xIniGetFloat(&ini, "SB.state.bungee.hit_anim_time", 0.1f);
        if (fixed.hit_anim_time < 0.0f)
        {
            fixed.hit_anim_time = 0.0f;
        }
        if (fixed.hit_anim_time > 2.0f)
        {
            fixed.hit_anim_time = 2.0f;
        }
        xDebugAddTweak("Bungee|Globals|Anim Trans Hit-Time", &fixed.hit_anim_time, 0.0f, 2.0f, NULL,
                       NULL, NULL);

        fixed.damage_rot = xIniGetFloat(&ini, "SB.state.bungee.damage_rot", 10.0f);
        if (fixed.damage_rot < 10.0f)
        {
            fixed.damage_rot = 10.0f;
        }
        if (fixed.damage_rot > 1000.0f)
        {
            fixed.damage_rot = 1000.0f;
        }
        xDebugAddTweak("Bungee|Globals|Damage Rotation", &fixed.damage_rot, 10.0f, 1000.0f, NULL,
                       NULL, NULL);

        fixed.death_time = xIniGetFloat(&ini, "SB.state.bungee.death_time", 1.5f);
        if (fixed.death_time < 0.0f)
        {
            fixed.death_time = 0.0f;
        }
        if (fixed.death_time > 20.0f)
        {
            fixed.death_time = 20.0f;
        }
        xDebugAddTweak("Bungee|Globals|Death Fade-Out Time", &fixed.death_time, 0.0f, 20.0f, NULL,
                       NULL, NULL);

        fixed.vel_blur = xIniGetFloat(&ini, "SB.state.bungee.vel_blur", 0.0f);
        if (fixed.vel_blur < 0.0f)
        {
            fixed.vel_blur = 0.0f;
        }
        if (fixed.vel_blur > 1.0f)
        {
            fixed.vel_blur = 1.0f;
        }
        xDebugAddTweak("Bungee|Globals|Velocity Blur", &fixed.vel_blur, 0.0f, 1.0f, NULL, NULL,
                       NULL);

        fixed.fade_dist = xIniGetFloat(&ini, "SB.state.bungee.fade_dist", 2.0f);
        if (fixed.fade_dist < 1.0f)
        {
            fixed.fade_dist = 1.0f;
        }
        if (fixed.fade_dist > 10000.0f)
        {
            fixed.fade_dist = 10000.0f;
        }
        xDebugAddTweak("Bungee|Globals|Cord Fade Distance", &fixed.fade_dist, 1.0f, 10000.0f, NULL,
                       NULL, NULL);

        fixed.player_radius = xIniGetFloat(&ini, "SB.state.bungee.player_radius", 1.0f);
        if (fixed.player_radius < 0.0f)
        {
            fixed.player_radius = 0.0f;
        }
        if (fixed.player_radius > 10.0f)
        {
            fixed.player_radius = 10.0f;
        }
        xDebugAddTweak("Bungee|Globals|Player Radius", &fixed.player_radius, 0.0f, 10.0f, NULL,
                       NULL, NULL);

        fixed.hook_fade_alpha = xIniGetFloat(&ini, "SB.state.bungee.hook_fade_alpha", 0.3f);
        if (fixed.hook_fade_alpha < 0.0f)
        {
            fixed.hook_fade_alpha = 0.0f;
        }
        if (fixed.hook_fade_alpha > 1.0f)
        {
            fixed.hook_fade_alpha = 1.0f;
        }
        xDebugAddTweak("Bungee|Globals|Hook Fade Alpha", &fixed.hook_fade_alpha, 0.0f, 1.0f, NULL,
                       NULL, NULL);

        fixed.hook_fade_time = xIniGetFloat(&ini, "SB.state.bungee.hook_fade_time", 1.0f);
        if (fixed.hook_fade_time < 0.01f)
        {
            fixed.hook_fade_time = 0.01f;
        }
        if (fixed.hook_fade_time > 10.0f)
        {
            fixed.hook_fade_time = 10.0f;
        }
        xDebugAddTweak("Bungee|Globals|Hook Fade Time", &fixed.hook_fade_time, 0.01f, 10.0f, NULL,
                       NULL, NULL);

        fixed.horizontal.edge_zone =
            xIniGetFloat(&ini, "SB.state.bungee.horizontal.edge_zone", 0.0f);
        if (fixed.horizontal.edge_zone < 0.0f)
        {
            fixed.horizontal.edge_zone = 0.0f;
        }
        if (fixed.horizontal.edge_zone > 0.25f)
        {
            fixed.horizontal.edge_zone = 0.25f;
        }
        xDebugAddTweak("Bungee|Globals|Horz Edge Zone", &fixed.horizontal.edge_zone, 0.0f, 0.25f,
                       NULL, NULL, NULL);

        fixed.horizontal.sway = xIniGetFloat(&ini, "SB.state.bungee.horizontal.sway", 0.0f);
        if (fixed.horizontal.sway < 0.0f)
        {
            fixed.horizontal.sway = 0.0f;
        }
        if (fixed.horizontal.sway > 10000.0f)
        {
            fixed.horizontal.sway = 10000.0f;
        }
        xDebugAddTweak("Bungee|Globals|Horz Sway Force", &fixed.horizontal.sway, 0.0f, 10000.0f,
                       NULL, NULL, NULL);

        fixed.horizontal.decay = xIniGetFloat(&ini, "SB.state.bungee.horizontal.decay", 0.91f);
        if (fixed.horizontal.decay < 0.0f)
        {
            fixed.horizontal.decay = 0.0f;
        }
        if (fixed.horizontal.decay > 1.0f)
        {
            fixed.horizontal.decay = 1.0f;
        }
        xDebugAddTweak("Bungee|Globals|Horz Velocity Decay", &fixed.horizontal.decay, 0.0f, 1.0f,
                       NULL, NULL, NULL);

        fixed.dive.time = xIniGetFloat(&ini, "SB.state.bungee.dive.time", 0.5f);
        if (fixed.dive.time < 0.01f)
        {
            fixed.dive.time = 0.01f;
        }
        if (fixed.dive.time > 5.0f)
        {
            fixed.dive.time = 5.0f;
        }
        xDebugAddTweak("Bungee|Globals|Dive Time", &fixed.dive.time, 0.01f, 5.0f, NULL, NULL, NULL);

        fixed.dive.anim_out_time = xIniGetFloat(&ini, "SB.state.bungee.dive.anim_out_time", 0.5f);
        if (fixed.dive.anim_out_time < 0.01f)
        {
            fixed.dive.anim_out_time = 0.01f;
        }
        if (fixed.dive.anim_out_time > 5.0f)
        {
            fixed.dive.anim_out_time = 5.0f;
        }
        xDebugAddTweak("Bungee|Globals|Dive Anim Out-Time", &fixed.dive.anim_out_time, 0.01f, 5.0f,
                       NULL, NULL, NULL);

        fixed.dive.min_dist = xIniGetFloat(&ini, "SB.state.bungee.dive.min_dist", 0.0f);
        if (fixed.dive.min_dist < 0.0f)
        {
            fixed.dive.min_dist = 0.0f;
        }
        if (fixed.dive.min_dist > 1.0f)
        {
            fixed.dive.min_dist = 1.0f;
        }
        xDebugAddTweak("Bungee|Globals|Dive Min Distance", &fixed.dive.min_dist, 0.0f, 1.0f, NULL,
                       NULL, NULL);

        fixed.dive.max_dist = xIniGetFloat(&ini, "SB.state.bungee.dive.max_dist", 0.6f);
        if (fixed.dive.max_dist < 0.51f)
        {
            fixed.dive.max_dist = 0.51f;
        }
        if (fixed.dive.max_dist > 1.0f)
        {
            fixed.dive.max_dist = 1.0f;
        }
        xDebugAddTweak("Bungee|Globals|Dive Max Distance", &fixed.dive.max_dist, 0.51f, 1.0f, NULL,
                       NULL, NULL);

        fixed.camera.speed = xIniGetFloat(&ini, "SB.state.bungee.camera.speed", 10.0f);
        if (fixed.camera.speed < 0.0f)
        {
            fixed.camera.speed = 0.0f;
        }
        if (fixed.camera.speed > 1000000000.0f)
        {
            fixed.camera.speed = 1000000000.0f;
        }
        xDebugAddTweak("Bungee|Globals|Camera Speed", &fixed.camera.speed, 0.0f, 1000000000.0f,
                       NULL, NULL, NULL);

        fixed.turn.spring = xIniGetFloat(&ini, "SB.state.bungee.turn.spring", 25.0f);
        if (fixed.turn.spring < 0.0f)
        {
            fixed.turn.spring = 0.0f;
        }
        if (fixed.turn.spring > 100000.0f)
        {
            fixed.turn.spring = 100000.0f;
        }
        xDebugAddTweak("Bungee|Globals|Turn Spring", &fixed.turn.spring, 0.0f, 100000.0f, NULL,
                       NULL, NULL);

        fixed.turn.decay = xIniGetFloat(&ini, "SB.state.bungee.turn.decay", 0.95f);
        if (fixed.turn.decay < 0.0f)
        {
            fixed.turn.decay = 0.0f;
        }
        if (fixed.turn.decay > 1.0f)
        {
            fixed.turn.decay = 1.0f;
        }
        xDebugAddTweak("Bungee|Globals|Turn Decay", &fixed.turn.decay, 0.0f, 1.0f, NULL, NULL,
                       NULL);
    }

    void init()
    {
        if ((shared.flags & 0x1) != 0x1)
        {
            return;
        }

        shared.flags = 3;
        shared.state = NULL;
        shared.hook = NULL;

        static attaching_state_type attaching_state;
        shared.states[0] = &attaching_state;
        static hanging_state_type hanging_state;
        shared.states[1] = &hanging_state;

        init_cache();
    }

    void destroy()
    {
        stop();
        iCameraSetBlurriness(0.0f);
        zCameraEnableTracking(CO_BUNGEE);
        xCameraDoCollisions(1, CO_BUNGEE);
        shared.flags = 0x3;
    }
} // namespace bungee_state
