#include <PowerPC_EABI_Support\MSL_C\MSL_Common\cmath>
#include <rpskin.h>
#include <stdio.h>
#include <string.h>

#include "zCamera.h"
#include "zEnt.h"
#include "zEntButton.h"
#include "zEntCruiseBubble.h"
#include "zEntDestructObj.h"
#include "zEntPlayer.h"
#include "zEntTrigger.h"
#include "zGameExtras.h"
#include "zGlobals.h"
#include "zNPCHazard.h"
#include "zNPCTypeCommon.h"
#include "zPlatform.h"
#include "zRenderState.h"
#include "zTalkBox.h"

#include "iMath.h"

#include "xColor.h"
#include "xDecal.h"
#include "xFX.h"
#include "xGrid.h"
#include "xMath.h"
#include "xMath3.h"
#include "xMathInlines.h"
#include "xModel.h"
#include "xSnd.h"
#include "xstransvc.h"
#include "xString.h"
#include "xVec3.h"

basic_rect<F32> screen_bounds  = { 0.0f, 0.0f, 1.0f, 1.0f };
basic_rect<F32> default_adjust = { 0.0f, 0.0f, 1.0f, 1.0f };

extern iColor_tag zEntCruiseBubble_color_80_00_00_FF; // 128, 0, 0, 255
extern iColor_tag zEntCruiseBubble_color_FF_14_14_FF; // 255, 20, 20, 255

extern RpAtomic *(*gAtomicRenderCallBack)(RpAtomic*);

template <typename T>
void xGridCheckBound(xGrid& grid, const xBound& bound, const xQCData& qcd, T param);

namespace cruise_bubble
{
    namespace
    {
        tweak_group normal_tweak;
        tweak_group cheat_tweak;
        xMat4x3 start_cam_mat;

        const xDecalEmitter::curve_node explode_curve[3] =
        {
            { 0.0f, { 0xFF, 0xFF, 0xFF, 0xFF }, 0.1f },
            { 0.5f, { 0xFF, 0xFF, 0xFF, 0xFF }, 2.55f },
            { 1.0f, { 0xFF, 0xFF, 0xFF, 0x00 }, 5.0f },
        };

        const xDecalEmitter::curve_node cheat_explode_curve[3] =
        {
            { 0.0f, { 0xFF, 0xFF, 0xFF, 0xFF }, 0.1f },
            { 0.5f, { 0xFF, 0xFF, 0xFF, 0xFF }, 3.55f },
            { 1.0f, { 0xFF, 0xFF, 0xFF, 0x00 }, 7.0f },
        };

        fixed_queue<missle_record_data, 127> missle_record;
        tweak_group* current_tweak = &normal_tweak;

        xBase base = { 0, eBaseTypeCruiseBubble };

        const char* start_anim_states[37] =
        {
            "Idle01",
            "Idle02",
            "Idle03",
            "Idle04",
            "Idle05",
            "Idle06",
            "Idle07",
            "Idle08",
            "Idle09",
            "Idle10",
            "Idle11",
            "Idle12",
            "Idle13",
            "SlipIdle01",
            "Inactive01",
            "Inactive02",
            "Inactive03",
            "Inactive04",
            "Inactive05",
            "Inactive06",
            "Inactive07",
            "Inactive08",
            "Inactive09",
            "Inactive10",
            "Walk01",
            "Run01",
            "Run02",
            "Run03",
            "Land01",
            "LandRun01",
            "LandHigh01",
            "WallLand01",
            "Hit01",
            "Hit02",
            "Hit03",
            "Hit04",
            "Hit05"
        };

        xFXRibbon wake_ribbon[2];
        xDecalEmitter explode_decal;

        const xFXRibbon::curve_node wake_ribbon_curve[2] =
        {
            { 0.0f, { 0xFF, 0xFF, 0xFF, 0x64 }, 0.3f },
            { 1.0f, { 0x00, 0x00, 0x00, 0x00 }, 1.0f },
        };

        const xFXRibbon::curve_node cheat_wake_ribbon_curve[2] =
        {
            { 0.0f, { 0xFF, 0x9B, 0x9B, 0x64 }, 0.5f },
            { 1.0f, { 0x00, 0x00, 0x00, 0x00 }, 2.0f },
        };

        struct
        {
            bool hiding;
            F32 alpha;
            F32 alpha_vel;
            F32 glow;
            F32 glow_vel;

            // Offset 0x14
            struct
            {
                xModelInstance* reticle;
                xModelInstance* target;
                xModelInstance* swirl;
                xModelInstance* wind;
            } model;
            // Offset 0x24
            hud_gizmo gizmo[33];
            // Offset 0x654
            U32 gizmos_used;
            // Offset 0x658
            uv_animated_model uv_swirl;
            // Offset 0x674
            uv_animated_model uv_wind;
        } hud;

        struct
        {
            S32 flags;
            state_type* state[MAX_THREAD];
            // Offset: 0x10
            state_type* states[MAX_STATE];
            // Offset: 0x40
            xVec2 last_sp;
            // Offset: 0x48
            xVec2 sp;
            // Offset: 0x50
            xVec3 hit_loc;
            // Offset: 0x5c
            xVec3 hit_norm;
            // Offset: 0x68
            xModelInstance* missle_model;
            // Offset: 0x6c
            xEnt* hits[32];
            // Offset: 0xec
            S32 hits_size;
            U32 player_health;
            xVec3 player_motion;
            // Offset: 0x100
            F32 fov_default;
            zShrapnelAsset* droplet_shrapnel;
            F32 dialog_freq;
            struct
            {
                F32 samples;
                F32 bubbles;
                xMat4x3 mat;
                xQuat dir;
            } trail;
            struct
            {
                struct
                {
                    xAnimState* aim;
                    xAnimState* fire;
                    xAnimState* idle;
                } player;
                struct
                {
                    // Offset: 0x170
                    xAnimState* fire;
                    xAnimState* fly;
                } missle;
            } astate;
            struct
            {
                struct
                {
                    xAnimTransition* aim;
                    xAnimTransition* fire;
                    xAnimTransition* idle;
                    xAnimTransition* end;
                } player;
                struct
                {
                    xAnimTransition* fly;
                } missle;
            } atran;
        } shared =
        {
            1 // flags
        };

        sound_config sounds[4] =
        {
            { "SB_cruise_start",    1.0f, 5.0f,  20.0f, 0, 0, SDR_CruiseBubbleLaunch, 0, 0, 0, 0 },
            { "SB_cruise_hit",      1.0f, 15.0f, 60.0f, 0, 0, SDR_CruiseBubbleExplode, 0, 0, 0, 0 },
            { "SB_cruise_nav_loop", 1.0f, 0.0f,  10.0f, 0, 1, SDR_None, 0, 0, 0, 0 },
            { NULL,                 1.0f, 0.0f,  0.0f,  1, 0, SDR_None, 23, 25, 0, 0 },
        };

        void init_sound()
        {
            sound_config* s;
            sound_config* end = &sounds[4];
            for (s = &sounds[0]; s != end; ++s)
            {
                s->id = (s->name == 0) ? 0 : xStrHash(s->name);
                s->handle = 0;
            }
        }

        void stop_sound(S32 which, U32 handle)
        {
            sound_config* s = &sounds[which];

            if (s->id == 0)
            {
                if (s->streamed == 0)
                {
                    for (S32 i = s->first; i <= s->last; ++i)
                    {
                        zEntPlayer_SNDStop((_tagePlayerSnd)i);
                    }
                }
                return;
            }

            if (handle == 0)
            {
                handle = s->handle;
            }

            if (handle != 0)
            {
                xSndStop(handle);
            }

            s->handle = 0;
        }

        U32 play_sound(S32 which, F32 volFactor)
        {
            sound_config* s = &sounds[which];

            if (s->id == 0)
            {
                S32 n = s->last - s->first + 1;
                S32 i = n <= 1 ? s->first : s->first + (xrand() >> 13) % n;

                if (s->streamed)
                {
                    zEntPlayer_SNDPlayStream((_tagePlayerStreamSnd)i);
                }
                else
                {
                    zEntPlayer_SNDPlay((_tagePlayerSnd)i, 0.0f);
                }

                s->handle = 0;
            }
            else
            {
                s->handle = xSndPlay((U32)s->id, s->volume * volFactor, 0.0f, (U32)128, (U32)0,
                                     (U32)0, SND_CAT_GAME, 0.0f);
            }

            if (s->rumble != SDR_None)
            {
                zRumbleStart(s->rumble);
            }
            return s->handle;
        }

        U32 play_sound(S32 which, F32 volFactor, const xVec3* pos)
        {
            sound_config* s = &sounds[which];

            if (s->id != 0)
            {
                // using float literals only the TOC address doesnt match
                // -> will match when file is complete
                s->handle = xSndPlay3D(s->id, s->volume * volFactor, 0.0f, (U32)128, (U32)2048, pos,
                                       s->radius_inner, s->radius_outer, SND_CAT_GAME, 0.0f);
            }

            if (s->rumble != SDR_None)
            {
                zRumbleStart(s->rumble);
            }
            return s->handle;
        }

        void set_pitch(S32 which, F32 pitch, U32 handle)
        {
            sound_config* s = &sounds[which];

            if (s->id == 0)
            {
                for (S32 i = s->first; i <= s->last; ++i)
                {
                    zEntPlayer_SNDSetPitch((_tagePlayerSnd)i, pitch);
                }
                return;
            }

            if (handle == 0)
            {
                handle = s->handle;
            }

            if (handle != 0)
            {
                xSndSetPitch(handle, pitch);
            }
        }

        void show_wand()
        {
            globals.player.sb_models[5]->Flags |= 0x0001;
        }

        void hide_wand()
        {
            globals.player.sb_models[5]->Flags &= 0xfffe;
        }

        void show_missle()
        {
            shared.missle_model->Flags |= 0x0003;
        }

        void hide_missle()
        {
            shared.missle_model->Flags &= 0xfffc;
        }

        void capture_camera()
        {
            zCameraDisableInput();
            zCameraDisableTracking(CO_CRUISE_BUBBLE);
            xCameraDoCollisions(0, 1);
        }

        void release_camera()
        {
            zCameraEnableInput();
            zCameraEnableTracking(CO_CRUISE_BUBBLE);
            xCameraDoCollisions(1, 1);
        }

        bool camera_taken()
        {
            return zCameraGetConvers() != 0 || (zCameraIsTrackingDisabled() & 0xfffffffd);
        }

        bool camera_leave()
        {
            return zCameraGetConvers() != 0;
        }

        void start_damaging()
        {
            shared.hits_size = 0;
        }


        static void damage_entity(xEnt& ent, const xVec3& loc, const xVec3& dir, const xVec3& hit_norm,
                           F32 radius, bool explosive)
        {
            if (shared.hits_size >= 32)
            {
                return;
            }
            shared.hits[shared.hits_size] = &ent;
            shared.hits_size++;

            switch (ent.baseType)
            {
            case eBaseTypeButton:
                zEntButton_Press((_zEntButton*)&ent, 0x10);
                return;

            case eBaseTypeDestructObj:
                zEntDestructObj_Hit((zEntDestructObj*)&ent, 0x10000);
                return;

            case eBaseTypePlatform:
                switch (ent.subType)
                {
                case ZPLATFORM_SUBTYPE_PADDLE:
                    if (!(((zPlatform*)&ent)->passet->paddle.paddleFlags & 0x20))
                    {
                        return;
                    }

                    xCollis coll;
                    coll.optr = &ent;
                    coll.mptr = ent.collModel != NULL ? ent.collModel : ent.model;

                    if (explosive)
                    {
                        coll.flags = 0x600;

                        xSphere o;
                        o.center = loc;
                        o.r = radius;
                        xSphereHitsBound(&o, &ent.bound, &coll);

                        if (!(coll.flags & 0x1))
                        {
                            return;
                        }

                        if (ent.collLev == 0x5)
                        {
                            xSphereHitsModel(&o, coll.mptr, &coll);

                            if (!(coll.flags & 0x1))
                            {
                                return;
                            }
                        }

                        xVec3 hit_dir = coll.tohit.up_normal();
                        zPlatform_PaddleCollide(&coll, &loc, &hit_dir, 0x1);
                        return;
                    }

                    coll.flags = 0x201;
                    coll.norm = hit_norm;
                    zPlatform_PaddleCollide(&coll, &loc, &dir, 1);
                    return;
                }
                break;

            case eBaseTypeNPC:
                if (explosive)
                {
                    // fuck this... weird scheduling
                    xVec3 edir = (*xEntGetCenter(&ent) - loc).up_normal();
                    ((zNPCCommon*)&ent)->Damage(DMGTYP_CRUISEBUBBLE, &base, &edir);
                }
                else
                {
                    // while this matches
                    ((zNPCCommon*)&ent)->Damage(DMGTYP_CRUISEBUBBLE, &base, &dir);
                }
                return;
            }

            zEntEvent(&ent, eEventHit_Cruise);
        }

        U8 can_damage(xEnt* ent)
        {
            if (ent == NULL)
            {
                return false;
            }
            if (!(ent->moreFlags & 0x10))
            {
                return false;
            }
            if (ent->baseType == eBaseTypeDestructObj &&
                zEntDestructObj_isDestroyed((zEntDestructObj*)ent) != NULL)
            {
                return false;
            }
            if (ent->baseType == eBaseTypeNPC && !((zNPCCommon*)ent)->IsHealthy())
            {
                return false;
            }

            return true;
        }

        U8 was_damaged(xEnt* ent)
        {
            // no idea why this doesn't OK ...
            // xEnt** i;
            // xEnt** n = shared.hits + shared.hits_size;
            // unnecessary offset is added
            // for (i = shared.hits; i != n; ++i)

            // ... but this does
            xEnt** i = shared.hits;
            xEnt** n = i + shared.hits_size;
            for (; i != n; ++i)
            {
                if (ent == *i)
                {
                    return true;
                }
            }

            return false;
        }

        void notify_triggers(xScene& s, const xSphere& o, const xVec3& dir)
        {
            zEntTrigger** it = (zEntTrigger**)s.trigs;
            zEntTrigger** end = it + s.num_trigs;
            for (; it != end; ++it)
            {
                zEntTrigger& trig = **it;

                if (xBaseIsEnabled(&trig))
                {
                    zEntTriggerAsset(trig);

                    bool want_enter = false;
                    bool want_exit = false;
                    xLinkAsset* link = trig.link;
                    xLinkAsset* end_link = link + trig.linkCount;
                    for (; link != end_link; ++link)
                    {
                        if (link->srcEvent == eEventEnterCruise)
                        {
                            want_enter = true;
                        }
                        else if (link->srcEvent == eEventExitCruise)
                        {
                            want_exit = true;
                        }
                    }
                    want_enter = want_enter && !(trig.entered & 0x2);
                    want_exit  = want_exit  &&  (trig.entered & 0x2);

                    if (want_enter || want_exit)
                    {
                        bool inside = zEntTriggerHitsSphere(trig, o, dir);
                        if (inside)
                        {
                            trig.entered |= 0x2;
                        }
                        else
                        {
                            trig.entered &= 0xfffffffd;
                        }

                        if (want_enter && inside)
                        {
                            zEntEvent(&trig, eEventEnterCruise);
                        }
                        else if (want_exit && !inside)
                        {
                            zEntEvent(&trig, eEventExitCruise);
                        }
                    }
                }
            }
        }

        void exit_triggers(xScene& s)
        {
            zEntTrigger** it;
            zEntTrigger** end;
            zEntTrigger* trig;
            xLinkAsset* link;
            xLinkAsset* end_link;

            it = (zEntTrigger**)s.trigs;
            end = it + s.num_trigs;
            for (; it != end; ++it)
            {
                trig = *it;

                if (xBaseIsEnabled(trig))
                {
                    zEntTriggerAsset(*trig);

                    if (trig->entered & 0x2)
                    {
                        trig->entered &= 0xfffffffd;

                        link = trig->link;
                        end_link = link + trig->linkCount;
                        for (; link != end_link; ++link)
                        {
                            if (link->srcEvent == eEventExitCruise)
                            {
                                zEntEvent(trig, eEventExitCruise);
                                break;
                            }
                        }
                    }
                }
            }
        }

        void signal_event(U32 toEvent)
        {
            zEntEvent(&globals.player.ent, &globals.player.ent, toEvent);
        }

        void refresh_trail(xMat4x3& mat, xQuat& quat)
        {
            xModelGetBoneMat(mat, *shared.missle_model, 8);
            xQuatFromMat(&quat, &mat);
        }

        void start_trail()
        {
            if (shared.flags & 0x80)
            {
                return;
            }

            shared.flags = shared.flags | 0x180;
            shared.fov_default = 0.0f;
            shared.dialog_freq = 0.0f;

            cruise_bubble::refresh_trail(shared.trail.mat, shared.trail.dir);
        }

        void stop_trail()
        {
            shared.flags &= 0xffffff7f;
        }

        void set_state(cruise_bubble::thread_enum thread, cruise_bubble::state_enum state)
        {
            state_type** st = &shared.state[thread];
            if (*st != NULL)
            {
                (*st)->stop();
                *st = NULL;
            }

            if (state != STATE_INVALID)
            {
                *st = shared.states[state];
                (*st)->start();
            }
        }

        void cruise_bubble::state_type::start()
        {
            // empty
        }

        void cruise_bubble::state_type::stop()
        {
            // empty
        }

        bool check_launch()
        {
            bool can_cruise_bubble =
                (!(globals.player.ControlOff || globals.player.cheat_mode) &&
                 globals.player.g.PowerUp[1] && (globals.player.s->pcType == ePlayer_SB) &&
                 (globals.pad0->pressed & 0x100));

            if (!can_cruise_bubble)
            {
                return false;
            }

            xAnimState* state = globals.player.ent.model->Anim->Single->State;
            for (U32 i = 0; i < 37; ++i)
            {
                if (stricmp(start_anim_states[i], state->Name) == 0)
                {
                    return true;
                }
            }

            return false;
        }

        void kill(bool reset_camera, bool abortive)
        {
            if (abortive)
            {
                for (S32 i = THREAD_PLAYER; i < MAX_THREAD; ++i)
                {
                    if (shared.state[i] != NULL)
                    {
                        (shared.state[i])->abort();
                        shared.state[i] = NULL;
                    }
                }
            }
            else
            {
                for (S32 i = THREAD_PLAYER; i < MAX_THREAD; ++i)
                {
                    // either STATE_INVALID or BACKUP_STATE_PLAYER, both == 0x11111111
                    set_state((thread_enum)i, STATE_INVALID);
                }
            }

            shared.flags = 0x3;
            zCameraEnableTracking(CO_CRUISE_BUBBLE);
            ztalkbox::permit(0xffffffff, 0);
            if (reset_camera)
            {
                zCameraEnableInput();
                xCameraSetFOV(&globals.camera, shared.fov_default);
            }

            hide_wand();
            hide_missle();
            hide_hud();
            stop_trail();
            distort_screen(0.0f);
            xSndSelectListenerMode(SND_LISTENER_MODE_PLAYER);

            xAnimState* state = globals.player.ent.model->Anim->Single->State;
            if (state == shared.astate.player.aim || state == shared.astate.player.fire ||
                state == shared.astate.player.idle)
            {
                xAnimPlayStartTransition(
                    globals.player.ent.model->Anim,
                    shared.atran.player
                        .end); // [xAnimPlayStartTransition__FP9xAnimPlayP15xAnimTransition]
            }
            exit_triggers(*globals.sceneCur);
        }

        void distort_screen(F32)
        {
            // empty
        }

        void state_type::abort()
        {
            // empty
        }

        void update_player(xScene& s, F32 dt)
        {
            // register usage and stack scheduling differing
            xVec3 pre_update_loc = cruise_bubble::get_player_loc();
            xVec3 drive_motion;

            bool stop = zEntPlayer_MinimalUpdate(&globals.player.ent, &s, dt, drive_motion) ||
                        globals.player.Health < shared.player_health;

            if (!stop)
            {
                shared.player_motion += cruise_bubble::get_player_loc() - pre_update_loc - drive_motion;

                if (shared.player_motion.length2() > 0.25f)
                {
                    stop = true;
                }
            }

            if (stop)
            {
                cruise_bubble::kill(true, false);
            }
        }

        xVec3& get_player_loc()
        {
            return *(xVec3*)&globals.player.ent.model->Mat->pos;
        }

        void render_player()
        {
            zEntPlayer_MinimalRender(&globals.player.ent);
        }

        void refresh_controls()
        {
            shared.last_sp = shared.sp;
            shared.sp = globals.pad0->analog[0].offset;
        }

        void update_state(xScene* s, F32 dt)
        {
            for (S32 i = THREAD_PLAYER; i < MAX_THREAD; ++i)
            {
                state_type** state = &shared.state[i];
                state_enum newtype;

                if (*state != NULL)
                {
                    newtype = (*state)->update(dt);

                    if (newtype != (*state)->type)
                    {
                        (*state)->stop();
                        *state = NULL;

                        if (newtype != STATE_INVALID)
                        {
                            *state = shared.states[newtype];
                            (*state)->start();
                        }
                    }
                }
            }

            if (shared.state[THREAD_PLAYER] == NULL)
            {
                kill(true, false);
            }
        }

        void render_state()
        {
            for (int i = THREAD_PLAYER; i < MAX_THREAD; ++i)
            {
                if (shared.state[i] != NULL)
                {
                    shared.state[i]->render();
                }
            }
        }

        void state_type::render()
        {
            // empty
        }

        RpAtomic* custom_bubble_render(RpAtomic* atomic)
        {
            RwCullMode old_cull_mode;
            F32 fade = shared.missle_model->Alpha;
            F32 fresnel_coeff;
            F32 env_coeff;

            RwRenderStateGet(rwRENDERSTATECULLMODE, (void*)&old_cull_mode);
            RwRenderStateSet(rwRENDERSTATECULLMODE, (void*)1);
            iDrawSetFBMSK(0xFFFFFFFF);
            AtomicDisableMatFX(atomic);
            RpSkinAtomicSetType(atomic, rpSKINTYPEMATFX);
            (*gAtomicRenderCallBack)(atomic);
            iDrawSetFBMSK(0);
            if (current_tweak->material.fresnel_texture != 0)
            {
                fresnel_coeff = current_tweak->material.fresnel_coeff * fade;
                iModelSetMaterialAlpha(atomic, (S32)(current_tweak->material.fresnel_alpha * 255.0f * fade + 0.5f) & 0xFF);
                gFXSurfaceFlags = 0x10;
                xFXAtomicEnvMapSetup(atomic, current_tweak->material.fresnel_texture, fresnel_coeff);
                gFXSurfaceFlags = 0;
                (*gAtomicRenderCallBack)(atomic);
            }
            if (current_tweak->material.env_texture != 0)
            {
                env_coeff = current_tweak->material.env_coeff * fade;
                iModelSetMaterialAlpha(atomic, (S32)(current_tweak->material.env_alpha * 255.0f * fade + 0.5f) & 0xFF);
                AtomicDisableMatFX(atomic);
                gFXSurfaceFlags = 0x10;
                xFXAtomicEnvMapSetup(atomic, current_tweak->material.env_texture, env_coeff);
                gFXSurfaceFlags = 0;
                (*gAtomicRenderCallBack)(atomic);
            }
            RwRenderStateSet(rwRENDERSTATECULLMODE, (void*)old_cull_mode);

            return atomic;
        }

        void init_states()
        {
            static state_player_halt player_halt;
            shared.states[STATE_PLAYER_HALT] = &player_halt;

            static state_player_aim player_aim;
            shared.states[STATE_PLAYER_AIM] = &player_aim;

            static state_player_fire player_fire;
            shared.states[STATE_PLAYER_FIRE] = &player_fire;

            static state_player_wait player_wait;
            shared.states[STATE_PLAYER_WAIT] = &player_wait;

            static state_missle_appear missle_appear;
            shared.states[STATE_MISSLE_APPEAR] = &missle_appear;

            static state_missle_fly missle_fly;
            shared.states[STATE_MISSLE_FLY] = &missle_fly;

            static state_missle_explode missle_explode;
            shared.states[STATE_MISSLE_EXPLODE] = &missle_explode;

            static state_camera_aim camera_aim;
            shared.states[STATE_CAMERA_AIM] = &camera_aim;

            static state_camera_seize camera_seize;
            shared.states[STATE_CAMERA_SEIZE] = &camera_seize;

            static state_camera_attach camera_attach;
            shared.states[STATE_CAMERA_ATTACH] = &camera_attach;

            static state_camera_survey camera_survey;
            shared.states[STATE_CAMERA_SURVEY] = &camera_survey;

            static state_camera_restore camera_return;
            shared.states[STATE_CAMERA_RESTORE] = &camera_return;
        }

        cruise_bubble::state_camera_restore::state_camera_restore() : state_type(STATE_CAMERA_RESTORE)
        {
        }

        cruise_bubble::state_type::state_type(cruise_bubble::state_enum type)
        {
            this->type = type;
        }

        cruise_bubble::state_camera_survey::state_camera_survey() : state_type(STATE_CAMERA_SURVEY)
        {
        }

        cruise_bubble::state_camera_attach::state_camera_attach() : state_type(STATE_CAMERA_ATTACH)
        {
        }

        cruise_bubble::state_camera_seize::state_camera_seize() : state_type(STATE_CAMERA_SEIZE)
        {
        }

        cruise_bubble::state_camera_aim::state_camera_aim() : state_type(STATE_CAMERA_AIM)
        {
        }

        cruise_bubble::state_missle_explode::state_missle_explode() : state_type(STATE_MISSLE_EXPLODE)
        {
        }

        cruise_bubble::state_missle_fly::state_missle_fly() : state_type(STATE_MISSLE_FLY)
        {
        }

        cruise_bubble::state_missle_appear::state_missle_appear() : state_type(STATE_MISSLE_APPEAR)
        {
        }

        cruise_bubble::state_player_wait::state_player_wait() : state_type(STATE_PLAYER_WAIT)
        {
        }

        cruise_bubble::state_player_fire::state_player_fire() : state_type(STATE_PLAYER_FIRE)
        {
        }

        cruise_bubble::state_player_aim::state_player_aim() : state_type(STATE_PLAYER_AIM)
        {
        }

        cruise_bubble::state_player_halt::state_player_halt() : state_type(STATE_PLAYER_HALT)
        {
        }

        void init_missle_model()
        {
            U32 aid = xStrHash("cruise_bubble_bind.MINF");
            xEnt* ent = (xEnt*)xSTFindAsset(aid, NULL);
            xModelInstance* model = zEntRecurseModelInfo(ent, NULL);

            model->PipeFlags = model->PipeFlags & 0xffffffcf | 0x10;
            model->Data->renderCallBack = &custom_bubble_render;
            if (model->Data->renderCallBack == NULL)
            {
                model->Data->renderCallBack = &AtomicDefaultRenderCallBack;
            }

            shared.missle_model = model;
        }

        void reset_wake_ribbons()
        {
            wake_ribbon[0].set_default_config();
            wake_ribbon[0].cfg.blend_src = 5;
            wake_ribbon[0].cfg.blend_dst = 2;

            if (!(shared.flags & 0x200))
            {
                wake_ribbon[0].set_texture("lightning");
                wake_ribbon[1].set_texture("lightning");
                wake_ribbon[0].set_curve(&wake_ribbon_curve[0], 2);
                wake_ribbon[1].set_curve(&wake_ribbon_curve[0], 2);

                wake_ribbon[0].cfg.life_time = 3.0f;
            }
            else
            {
                wake_ribbon[0].set_texture("lightning");
                wake_ribbon[1].set_texture("lightning");
                wake_ribbon[0].set_curve(&cheat_wake_ribbon_curve[0], 2);
                wake_ribbon[1].set_curve(&cheat_wake_ribbon_curve[0], 2);

                wake_ribbon[0].cfg.life_time = 3.0f;
            }
            wake_ribbon[0].cfg.pivot = 1.0f;
            wake_ribbon[1].cfg = wake_ribbon[0].cfg;

            wake_ribbon[0].refresh_config();
            wake_ribbon[1].refresh_config();
        }

        void init_wake_ribbons()
        {
            wake_ribbon[0].init("Wake Ribbon 0", "Player|Cruise Bubble|Wake Ribbon 0|");
            wake_ribbon[1].init("Wake Ribbon 1", "Player|Cruise Bubble|Wake Ribbon 1|");
            cruise_bubble::reset_wake_ribbons();
        }

        void reset_explode_decal()
        {
            explode_decal.set_default_config();

            explode_decal.cfg.flags = 0x3;
            explode_decal.cfg.blend_src = 5;
            explode_decal.cfg.blend_dst = 2;

            if (!(shared.flags & 0x200))
            {
                explode_decal.cfg.life_time = 0.5f;
                explode_decal.set_curve(&explode_curve[0], 3);
                explode_decal.set_texture("par_cruise_explode");
            }
            else
            {
                explode_decal.cfg.life_time = 0.5f;
                explode_decal.set_curve(&cheat_explode_curve[0], 3);
                explode_decal.set_texture("par_cruise_explode");
            }
            explode_decal.refresh_config();
        }

        void init_explode_decal()
        {
            explode_decal.init(1, "Cruise Bubble Explosion");
            explode_decal.set_default_config();

            // r0 should be use here
            explode_decal.cfg.flags = 0x3;
            // scheduling off here
            explode_decal.cfg.life_time = 0.5f;
            explode_decal.cfg.blend_src = 5;
            explode_decal.cfg.blend_dst = 2;

            explode_decal.set_curve(explode_curve, 3);
            explode_decal.set_texture("par_cruise_explode");
            explode_decal.refresh_config();
        }

        void init_shrapnel()
        {
            shared.droplet_shrapnel =
                (zShrapnelAsset*)xSTFindAsset(xStrHash("cruise_bubble_droplet_shrapnel"), NULL);
        }

        void update_trail(F32 dt)
        {
            if (!(shared.flags & 0x80))
            {
                return;
            }

            shared.trail.samples += dt * current_tweak->trail.sample_rate;
            S32 samples = (S32)shared.trail.samples;

            if (samples <= 0)
            {
                shared.trail.samples = 0.0f;
                samples = 1;
            }
            else
            {
                // float cast
                shared.trail.samples -= (F32)samples;
            }

            xMat4x3 end_mat;
            xQuat end_dir;
            cruise_bubble::refresh_trail(end_mat, end_dir);

            // float cast
            F32 ds = 1.0f / (F32)samples;
            F32 ddt = dt * ds;
            xVec3 dloc = (end_mat.pos - shared.trail.mat.pos) * ds;
            S32 flip = 0;
            F32 s = ds;

            xMat4x3 mat[2];
            mat[0] = shared.trail.mat;

            for (int i = 0; i < samples; ++i)
            {
                xMat4x3* mat0 = mat + flip;
                flip = flip ^ 1;
                xMat4x3* mat1 = mat + flip;

                xQuat subdir;
                xQuatSlerp(&subdir, &shared.trail.dir, &end_dir, s);
                xQuatToMat(&subdir, mat1);
                mat1->pos = mat0->pos + dloc;
                add_trail_sample(mat0->pos, mat0->right, mat1->pos, mat1->right, ddt);
                s += ds;
            }

            shared.trail.mat = end_mat;
            shared.trail.dir = end_dir;
            shared.flags = shared.flags & 0xfffffeff;
        }

        void refresh_missle_model()
        {
        }

        void update_missle(xScene& s, F32 dt)
        {
            xModelInstance* m = shared.missle_model;
            if (!(m->Flags & 2))
            {
                return;
            }
            xModelUpdate(m, dt);
            xModelEval(m);
            update_trail(dt);
        }

        void render_missle()
        {
            xModelInstance* m = shared.missle_model;
            if (!(m->Flags & 1))
            {
                return;
            }
            xModelRender(m);
        }

        // return type guessed based on return type of zEntRecurseModelInfo and xModelInstanceAlloc
        xModelInstance* load_model(U32 aid)
        {
            xModelInstance* model;
            U32 size;

            model = (xModelInstance*)xSTFindAsset(xStrHashCat(aid, ".minf"), &size);
            if (model != NULL)
            {
                model = zEntRecurseModelInfo(model, NULL);
                return model;
            }

            model = (xModelInstance*)xSTFindAsset(aid, &size);
            if (model == NULL)
            {
                model = (xModelInstance*)xSTFindAsset(xStrHashCat(aid, ".dff"), &size);
            }
            if (model == NULL)
            {
                return NULL;
            }
            return xModelInstanceAlloc((RpAtomic*)model, NULL, 0, 0, NULL);
        }

        void render_model_2d(xModelInstance* model, const basic_rect<F32>& rect, F32 param_3)
        {
            xVec3 r = { 0.0f, 0.0f, 1.0f };
            xVec3 from = { 0.0f, 0.0f, -0.01f };

            xMat4x3 frame;

            frame.right.assign(1.01f, 0.0f, 0.0f);
            frame.up.assign(0.0f, 1.01f, 0.0f);
            frame.at.assign(0.0f, 0.0f, 0.01f);
            frame.pos = 0.0f;

            for (; model != NULL; model = model->Next)
            {
                xModelSetMaterialAlpha(model, (S32)((param_3 * 255.0f) + 0.5f) & 0xFF);
                xModelSetFrame(model, &frame);
                xModelRender2D(*model, rect, r, from);
            }
        }

        void init_hud()
        {
            // should use stbu here and save an addi instruction
            // which should also fix the rest of the function by correcting offsets

            hud.hiding = false;
            hud.alpha = 0.0f;
            hud.alpha_vel = 0.0f;
            hud.glow = 0.0f;
            hud.gizmos_used = 0;

            hud.model.reticle = load_model(xStrHash("ui_3dicon_reticle"));
            hud.model.target = load_model(xStrHash("ui_3dicon_target_lock"));
            hud.model.wind = load_model(xStrHash("ui_3dicon_missile_frame02"));

            hud.uv_wind.init(hud.model.wind->Data);
            hud.uv_wind.offset_vel.assign(current_tweak->hud.wind.du, current_tweak->hud.wind.dv);
        }

        bool uv_animated_model::init(RpAtomic* m)
        {
            this->model = m;
            if (m == NULL)
            {
                return false;
            }

            if (!this->clone_uv(this->uv, this->uvsize, m))
            {
                return false;
            }

            this->offset.assign(0.0f, 0.0f);
            this->offset_vel.assign(0.0f, 0.0f);
            return true;
        }

        bool uv_animated_model::clone_uv(RwTexCoords*& coords, S32& size, RpAtomic* m) const
        {
            RwTexCoords* c;
            if (!this->get_uv(c, size, m))
            {
                return false;
            }

            coords = (RwTexCoords*)xMemAlloc(gActiveHeap, size * 8, 0);
            if (coords == NULL)
            {
                return false;
            }

            memcpy(coords, c, size * 8); // [memcpy]
            return true;
        }

        bool uv_animated_model::get_uv(RwTexCoords*& coords, S32& size, RpAtomic* m) const
        {
            coords = NULL;
            size = 0;

            RpGeometry* geo = m->geometry;
            if (geo == NULL)
            {
                return false;
            }

            size = geo->numVertices;
            if (!(size > 0))
            {
                return false;
            }

            coords = *geo->texCoords;
            return coords != NULL;
        }

        void show_gizmo(hud_gizmo& gizmo, const basic_rect<F32>& rect, xModelInstance* m)
        {
            gizmo.flags = 0x1;
            gizmo.bound = rect;
            gizmo.alpha = 0.0f;
            gizmo.alpha_vel = 1.0f / current_tweak->hud.time_fade;
            gizmo.glow = 1.0f;
            gizmo.glow_vel = -1.0f / current_tweak->hud.time_glow;
            gizmo.opacity = 1.0f;
            gizmo.target = NULL;
            gizmo.model = m;
        }

        void update_gizmo(cruise_bubble::hud_gizmo& gizmo, F32 dt)
        {
            gizmo.alpha = range_limit<F32>(gizmo.alpha_vel * dt + gizmo.alpha, 0.0f,
                                           1.0f);
            gizmo.glow = range_limit<F32>(gizmo.glow_vel * dt + gizmo.glow, 0.0f,
                                          1.0f);
        }

        void flash_hud()
        {
            // nice meme
            hud.glow = 1.0f;
            hud.glow_vel = -1.0f / current_tweak->hud.time_glow;
        }

        void render_timer(F32 alpha, F32 glow)
        {
            state_missle_fly* state = (state_missle_fly*)shared.state[THREAD_MISSLE];
            if (state == NULL || state->type != STATE_MISSLE_FLY)
            {
                return;
            }

            F32 life = state->life;
            char buffer[16];
            sprintf(buffer, "%02d:%02d", (S32)life,
                    ((S32)(100.0f * life)) - (100 * (S32)life));

            F32 dsize = glow * current_tweak->hud.timer.glow_size;
            // zEntCruiseBubble_f_0_0 is loaded too early, should be just before the call
            xfont font =
                xfont::create(current_tweak->hud.timer.font, current_tweak->hud.timer.font_width + dsize,
                              current_tweak->hud.timer.font_height + dsize, 0.0f, g_WHITE,
                              screen_bounds);
            // register use for copying fields into font off, also causes a larger stack frame
            // also the color tags are loaded too early, should be just before the call
            cruise_bubble::lerp(font.color, glow, zEntCruiseBubble_color_80_00_00_FF,
                                zEntCruiseBubble_color_FF_14_14_FF);
            font.color.a = (S32)(255.0f * alpha + 0.5f);

            basic_rect<F32> bound = font.bounds(buffer);
            F32 x = current_tweak->hud.timer.x - bound.x - 0.5f * bound.w;
            F32 y = current_tweak->hud.timer.y - bound.y - 0.5f * bound.h;

            font.render(buffer, x, y);
        }

        void lerp(iColor_tag& c, F32 t, iColor_tag a, iColor_tag b)
        {
            lerp(c.r, t, a.r, b.r);
            lerp(c.g, t, a.g, b.g);
            lerp(c.b, t, a.b, b.b);
            lerp(c.a, t, a.a, b.a);
        }

        void lerp(U8& x, F32 t, U8 a, U8 b)
        {
            x = 0.5f + ((F32)a + t * ((F32)b - (F32)a));
        }

        S32 cruise_bubble::state_camera_survey::find_nearest(F32 radius) const
        {
            S32 j;
            S32 i = 0;
            S32 size = missle_record.size();
            S32 range = size;

            while (i < range)
            {
                j = (i + range) / 2;

                if (radius < path_distance[j])
                {
                    size = range;
                }
                if (radius <= path_distance[j])
                {
                    range = j;
                }
                else if (radius > path_distance[j])
                {
                    i = j + 1;
                }
            }

            return i;
        }

        void update_hud(F32 dt)
        {
            if (hud.gizmos_used == 0)
            {
                return;
            }

            hud.alpha = range_limit<F32>(hud.alpha_vel * dt + hud.alpha, 0.0f,
                                         1.0f);
            hud.glow = range_limit<F32>(hud.glow_vel * dt + hud.glow, 0.0f,
                                        1.0f);

            // scheduling off
            F32 vel_frac = ((state_missle_fly*)shared.states[STATE_MISSLE_FLY])->vel /
                           current_tweak->missle.fly.max_vel;

            hud.uv_wind.offset_vel.assign(current_tweak->hud.wind.du, current_tweak->hud.wind.dv);
            hud.uv_wind.offset_vel *= vel_frac;
            hud.model.wind->Alpha = vel_frac;
            hud.uv_wind.update(dt);

            // sheduling off for i and zEntCruiseBubble_f_n1_0
            for (S32 i = 1; i < hud.gizmos_used; ++i)
            {
                if (!(hud.gizmo[i].flags & 0x1))
                {
                    hud.gizmo[i].alpha_vel = -1.0f / current_tweak->hud.time_fade;
                }
            }

            S32 i = 0;
            while (i < hud.gizmos_used)
            {
                update_gizmo(hud.gizmo[i], dt);
                if (hud.gizmo[i].alpha <= 0.0f)
                {
                    hud.gizmos_used -= 1;
                    hud.gizmo[i] = hud.gizmo[hud.gizmos_used];
                }
                else
                {
                    ++i;
                }
            }

            for (S32 i = 1; i < hud.gizmos_used; ++i)
            {
                hud.gizmo[i].flags &= 0xfffffffe;
            }
        }

        void uv_animated_model::update(F32 dt)
        {
            if (0.0f == this->offset_vel.x &&
                0.0f == this->offset_vel.y)
            {
                return;
            }

            this->offset += this->offset_vel * dt;
            this->offset.x = xfmod(this->offset.x, 1.0f);
            this->offset.y = xfmod(this->offset.y, 1.0f);
            this->refresh();
        }

        void render_hud()
        {
            if (hud.gizmos_used == 0)
            {
                return;
            }

            zRenderState(SDRS_CruiseHUD);

            if (hud.model.wind->Alpha > 0.0f)
            {
                RwRenderStateSet(rwRENDERSTATESRCBLEND, (void*)5);
                RwRenderStateSet(rwRENDERSTATEDESTBLEND, (void*)2);

                basic_rect<F32> bound;
                bound.set_size(current_tweak->hud.wind.size, current_tweak->hud.wind.size);
                bound.center(0.5f, 0.5f);

                render_model_2d(hud.model.wind, bound, hud.model.wind->Alpha);
            }

            RwRenderStateSet(rwRENDERSTATESRCBLEND, (void*)5);
            RwRenderStateSet(rwRENDERSTATEDESTBLEND, (void*)6);

            for (S32 i = 0; i < hud.gizmos_used; ++i)
            {
                hud_gizmo* gizmo = &hud.gizmo[i];
                F32 alpha = hud.alpha * gizmo->alpha * gizmo->opacity;
                if (!(alpha <= 0.0f))
                {
                    render_model_2d(gizmo->model, gizmo->bound, alpha);
                }
            }

            RwRenderStateSet(rwRENDERSTATESRCBLEND, (void*)5);
            RwRenderStateSet(rwRENDERSTATEDESTBLEND, (void*)2);

            for (S32 i = 0; i < hud.gizmos_used; ++i)
            {
                hud_gizmo* gizmo = &hud.gizmo[i];

                F32 glow = gizmo->glow + hud.glow;
                if (glow > 1.0f)
                {
                    glow = 1.0f;
                }
                else if (glow <= 0.0f)
                {
                    continue;
                }

                F32 alpha = hud.alpha * gizmo->alpha * gizmo->opacity;
                if (!(alpha <= 0.0f))
                {
                    render_glow(gizmo->model, gizmo->bound, glow, alpha);
                }
            }

            render_timer(hud.alpha, hud.glow);
        }


        void show_hud()
        {
            // scheduling and register usage off
            hud.gizmos_used = 1;
            basic_rect<F32> reticle_bound;
            reticle_bound.set_size(current_tweak->hud.reticle.size);
            // reticle_bound gets loaded again as r3 here which shouldn't be
            // might be a non functional match for edge cases
            reticle_bound.center(0.5f, 0.5f);
            show_gizmo(hud.gizmo[0], reticle_bound, hud.model.reticle);

            hud.model.wind->Alpha = 0.0f;
            // scheduling off for this float
            hud.alpha = 0.0f;
            hud.alpha_vel = 1.0f / current_tweak->hud.time_fade;

            flash_hud();
        }

        void hide_hud()
        {
            hud.gizmos_used = 0;
            // float scheduling ...
            hud.model.wind->Alpha = 0.0f;
        }

        xVec3 world_to_screen(const xVec3& loc)
        {
            iCameraUpdatePos(globals.camera.lo_cam, &globals.camera.mat);

            xVec3 world_loc;
            xMat4x3* view_mat = (xMat4x3*)&globals.camera.lo_cam->viewMatrix;
            xMat4x3Toworld(&world_loc, view_mat, &loc);

            xVec3 screen_loc;
            F32 iz = 1.0f / world_loc.z;
            screen_loc.assign(world_loc.x * iz, world_loc.y * iz, 1.0f);

            return screen_loc;
        }

        S32 find_locked_target(const xVec3* target)
        {
            for (S32 i = 1; i < hud.gizmos_used; ++i)
            {
                if (hud.gizmo[i].target == target)
                {
                    return i;
                }
            }

            return -1;
        }

        void lock_target(S32 index, const xVec3* target, F32 opacity)
        {
            if (index <= -1 && hud.gizmos_used >= 33)
            {
                return;
            }

            hud_gizmo* gizmo;
            if (index <= -1)
            {
                index = hud.gizmos_used;
                hud.gizmos_used++;
                gizmo = &hud.gizmo[index];
                show_gizmo(hud.gizmo[index], hud.gizmo[index].bound, hud.model.target);
            }
            gizmo = &hud.gizmo[index];
            xVec3 screen_loc = cruise_bubble::world_to_screen(*target);

            gizmo->bound.set_size(current_tweak->hud.target.size);
            gizmo->bound.center(screen_loc.x, screen_loc.y);
            gizmo->flags = 0x1;
            gizmo->alpha_vel = 1.0f / current_tweak->hud.time_fade;
            gizmo->model = hud.model.target;
            gizmo->target = target;
            gizmo->opacity = opacity;
        }

        void check_lock_target(const xVec3* target)
        {
            xMat4x3* mat = &globals.camera.mat;
            xVec3 offset = *target - mat->pos;
            F32 ang = offset.dot(mat->at);

            if (ang < current_tweak->reticle.dist_min || ang > current_tweak->reticle.dist_max)
            {
                return;
            }

            ang = offset.length();
            if ((ang >= -0.00001f) && (ang <= 0.00001f))
            {
                ang = 0.0f;
            }
            else
            {
                ang = xacos(offset.dot(mat->at) / ang);
            }

            F32 max_ang = current_tweak->reticle.ang_show;
            F32 min_ang = current_tweak->reticle.ang_hide;

            if (ang >= min_ang)
            {
                return;
            }

            if (ang >= max_ang)
            {
                S32 t = find_locked_target(target);
                if (t < 0)
                {
                    return;
                }

                lock_target(t, target, (min_ang - ang) / (min_ang - max_ang));
            }

            else
            {
                lock_target(find_locked_target(target), target, 1.0f);
            }
        }

        U32 check_anim_aim(xAnimTransition*, xAnimSingle*, void*)
        {
            return false;
        }

        // Very dumb scheduling.
        void load_cheat_tweak()
        {
            *(volatile F32*)(&cheat_tweak.missle.crash_angle) = 0.7536f;
            *(volatile F32*)(&cheat_tweak.missle.collide_twist) = 0.05f;
            *(volatile F32*)(&cheat_tweak.missle.appear.delay_fly) = 0.16666667f;
            *(volatile F32*)(&cheat_tweak.missle.fly.accel) = 12.0f;
            *(volatile F32*)(&cheat_tweak.missle.fly.turn.xdelta) = 7.0f;
            *(volatile F32*)(&cheat_tweak.missle.fly.turn.ydelta) = 5.0f;
            *(volatile F32*)(&cheat_tweak.missle.fly.turn.ydecay) =
            *(volatile F32*)(&cheat_tweak.missle.fly.turn.xdecay) = 0.985f;
            *(volatile F32*)(&cheat_tweak.missle.fly.turn.ybound) = 1.24248f;

            F32 one_tenth = 0.1f;
            *(volatile F32*)(&cheat_tweak.missle.fly.turn.roll_frac) = one_tenth;
            *(volatile F32*)(&cheat_tweak.missle.explode.hit_radius) = 2.0f;
            *(volatile F32*)(&cheat_tweak.camera.seize.blend_time) = 0.75f;
            *(volatile F32*)(&cheat_tweak.camera.survey.duration) = 1.0f;
            *(volatile F32*)(&cheat_tweak.camera.survey.min_duration) = one_tenth;

            *(volatile F32*)(&cheat_tweak.camera.survey.drift_dist) = 10.0f;
            *(volatile F32*)(&cheat_tweak.material.env_alpha) = 0.2f;
            *(volatile U32*)(&cheat_tweak.material.env_texture) = xStrHash("aura2");
            *(volatile F32*)(&cheat_tweak.material.fresnel_alpha) = 0.1f;
            *(volatile F32*)(&cheat_tweak.material.fresnel_coeff) = 1.0f;
            *(volatile U32*)(&cheat_tweak.material.fresnel_texture) = xStrHash("par_cruise_explode");
            *(volatile F32*)(&cheat_tweak.trail.bubble_rate) = 90.0f;
            *(volatile F32*)(&cheat_tweak.trail.bubble_emit_radius) = 0.75f;
            *(volatile F32*)(&cheat_tweak.trail.wake_emit_radius) = 0.3f;
            *(volatile U32*)(&cheat_tweak.blast.emit) = 400;
            *(volatile F32*)(&cheat_tweak.blast.vel) = 7.5f;
            *(volatile U32*)(&cheat_tweak.droplet.emit_min) = 0xf;
            *(volatile F32*)(&cheat_tweak.droplet.vel_min) = 4.0f;
            *(volatile F32*)(&cheat_tweak.droplet.vel_max) = 8.0f;
        }

        void load_settings()
        {
            U32 params_size;
            xModelAssetParam* params =
                zEntGetModelParams(xStrHash("cruise_bubble_bind.MINF"), &params_size);

            if (params == NULL)
            {
                params_size = 0;
            }

            normal_tweak.load(params, params_size);
            memcpy(&cheat_tweak, &normal_tweak, sizeof(tweak_group));
            load_cheat_tweak();
            refresh_missle_model();
        }

        void tweak_group::load(xModelAssetParam* params, U32 size)
        {
            this->register_tweaks(true, params, size, NULL);
        }

        void tweak_group::register_tweaks(bool init, xModelAssetParam* ap, U32 apsize,
                                                         const char*)
        {
            if (init)
            {
                this->aim_delay = 0.2f;
                auto_tweak::load_param<F32, F32>(this->aim_delay, 1.0f, 0.0f, 1.0f, ap,
                                                 apsize, "aim_delay");
            }

            if (init)
            {
                this->player.halt_time = 0.5f;
                auto_tweak::load_param<F32, F32>(this->player.halt_time, 1.0f,
                                                 0.0f, 1.0f, ap, apsize,
                                                 "player.halt_time");
            }

            if (init)
            {
                this->player.aim.turn_speed = 0.05f;
                auto_tweak::load_param<F32, F32>(this->player.aim.turn_speed, 1.0f,
                                                 0.01f, 1000000000.0f,
                                                 ap, apsize, "player.aim.turn_speed");
            }

            if (init)
            {
                this->player.aim.anim_delta = 0.5f;
                auto_tweak::load_param<F32, F32>(this->player.aim.anim_delta, 1.0f,
                                                 0.0f, 1000000000.0f,
                                                 ap, apsize, "player.aim.anim_delta");
            }

            if (init)
            {
                this->player.fire.delay_wand = 0.06666667f;
                auto_tweak::load_param<F32, F32>(this->player.fire.delay_wand, 1.0f,
                                                 0.0f, 100.0f, ap,
                                                 apsize, "player.fire.delay_wand");
            }

            if (init)
            {
                this->missle.life = 6.0f;
                auto_tweak::load_param<F32, F32>(this->missle.life, 1.0f,
                                                 0.01f, 1000000000.0f,
                                                 ap, apsize, "missle.life");
            }

            if (init)
            {
                this->missle.hit_dist = 0.3f;
                auto_tweak::load_param<F32, F32>(this->missle.hit_dist, 1.0f,
                                                 0.0f, 1.0f, ap, apsize,
                                                 "missle.hit_dist");
            }

            if (init)
            {
                this->missle.crash_angle = 30.0f;
                auto_tweak::load_param<F32, F32>(this->missle.crash_angle, DEG2RAD(1),
                                                 0.0f, 60.0f, ap,
                                                 apsize, "missle.crash_angle");
            }

            if (init)
            {
                this->missle.collide_twist = 0.025f;
                auto_tweak::load_param<F32, F32>(this->missle.collide_twist, 1.0f,
                                                 0.0f, 1.0f, ap, apsize,
                                                 "missle.collide_twist");
            }

            if (init)
            {
                this->missle.hit_tests = 4;
                auto_tweak::load_param<S32, S32>(this->missle.hit_tests, 1, 1, 100, ap, apsize,
                                                 "missle.hit_tests");
            }

            if (init)
            {
                this->missle.appear.delay_show = 0.13333334f;
                auto_tweak::load_param<F32, F32>(this->missle.appear.delay_show, 1.0f,
                                                 0.0f, 100.0f, ap,
                                                 apsize, "missle.appear.delay_show");
            }

            if (init)
            {
                this->missle.appear.delay_fly = 0.6666667f;
                auto_tweak::load_param<F32, F32>(this->missle.appear.delay_fly, 1.0f,
                                                 0.0f, 100.0f, ap,
                                                 apsize, "missle.appear.delay_fly");
            }

            if (init)
            {
                this->missle.appear.offset = xVec3::create(-0.049f, 1.728f, 0.922f);
                auto_tweak::load_param<xVec3, S32>(this->missle.appear.offset, 0, 0, 0, ap, apsize,
                                                   "missle.appear.offset");
            }

            if (init)
            {
                this->missle.fly.accel = 6.0f;
                auto_tweak::load_param<F32, F32>(this->missle.fly.accel, 1.0f,
                                                 0.01f, 1000000000.0f,
                                                 ap, apsize, "missle.fly.accel");
            }

            if (init)
            {
                this->missle.fly.max_vel = 12.0f;
                auto_tweak::load_param<F32, F32>(this->missle.fly.max_vel, 1.0f,
                                                 0.01f, 1000000000.0f,
                                                 ap, apsize, "missle.fly.max_vel");
            }

            if (init)
            {
                this->missle.fly.engine_pitch_max = 10.0f;
                auto_tweak::load_param<F32, F32>(this->missle.fly.engine_pitch_max, 1.0f,
                                                 0.01f, 1000000000.0f,
                                                 ap, apsize, "missle.fly.engine_pitch_max");
            }

            if (init)
            {
                this->missle.fly.engine_pitch_sensitivity = 0.005f;
                auto_tweak::load_param<F32, F32>(this->missle.fly.engine_pitch_sensitivity,
                                                 1.0f, 0.0f,
                                                 1.0f, ap, apsize,
                                                 "missle.fly.engine_pitch_sensitivity");
            }

            if (init)
            {
                this->missle.fly.flash_interval = 2.0f;
                auto_tweak::load_param<F32, F32>(this->missle.fly.flash_interval, 1.0f,
                                                 0.0f, 1000000000.0f,
                                                 ap, apsize, "missle.fly.flash_interval");
            }

            if (init)
            {
                this->missle.fly.turn.xdelta = 5.0f;
                auto_tweak::load_param<F32, F32>(this->missle.fly.turn.xdelta, 1.0f,
                                                 0.01f, 1000000000.0f,
                                                 ap, apsize, "missle.fly.turn.xdelta");
            }

            if (init)
            {
                this->missle.fly.turn.ydelta = 4.0f;
                auto_tweak::load_param<F32, F32>(this->missle.fly.turn.ydelta, 1.0f,
                                                 0.01f, 1000000000.0f,
                                                 ap, apsize, "missle.fly.turn.ydelta");
            }

            if (init)
            {
                this->missle.fly.turn.xdecay = 0.99f;
                auto_tweak::load_param<F32, F32>(this->missle.fly.turn.xdecay, 1.0f,
                                                 0.0f, 1.0f, ap, apsize,
                                                 "missle.fly.turn.xdecay");
            }

            if (init)
            {
                this->missle.fly.turn.ydecay = 0.99f;
                auto_tweak::load_param<F32, F32>(this->missle.fly.turn.ydecay, 1.0f,
                                                 0.0f, 1.0f, ap, apsize,
                                                 "missle.fly.turn.ydecay");
            }

            if (init)
            {
                this->missle.fly.turn.ybound = 0.6f;
                auto_tweak::load_param<F32, F32>(this->missle.fly.turn.ybound, PI / 2,
                                                 0.0f, 1.0f, ap, apsize,
                                                 "missle.fly.turn.ybound");
            }

            if (init)
            {
                this->missle.fly.turn.roll_frac = 0.2f;
                auto_tweak::load_param<F32, F32>(this->missle.fly.turn.roll_frac, 1.0f,
                                                 -1.0f, 1.0f, ap,
                                                 apsize, "missle.fly.turn.roll_frac");
            }

            if (init)
            {
                this->missle.explode.hit_radius = 1.0f;
                auto_tweak::load_param<F32, F32>(this->missle.explode.hit_radius, 1.0f,
                                                 0.0f, 10.0f, ap,
                                                 apsize, "missle.explode.hit_radius");
            }

            if (init)
            {
                this->missle.explode.hit_duration = 0.25f;
                auto_tweak::load_param<F32, F32>(this->missle.explode.hit_duration, 1.0f,
                                                 0.0f, 10.0f, ap,
                                                 apsize, "missle.explode.hit_duration");
            }

            if (init)
            {
                this->camera.aim.dist = 2.0f;
                auto_tweak::load_param<F32, F32>(this->camera.aim.dist, 1.0f,
                                                 0.0f, 100.0f, ap,
                                                 apsize, "camera.aim.dist");
            }

            if (init)
            {
                this->camera.aim.height = 1.5f;
                auto_tweak::load_param<F32, F32>(this->camera.aim.height, 1.0f,
                                                 -10.0f, 10.0f, ap,
                                                 apsize, "camera.aim.height");
            }

            if (init)
            {
                this->camera.aim.pitch = 0.0f;
                auto_tweak::load_param<F32, F32>(this->camera.aim.pitch, DEG2RAD(1),
                                                 -90.0f, 90.0f, ap,
                                                 apsize, "camera.aim.pitch");
            }

            if (init)
            {
                this->camera.aim.accel = 10.0f;
                auto_tweak::load_param<F32, F32>(this->camera.aim.accel, 1.0f,
                                                 0.01f, 1000000000.0f,
                                                 ap, apsize, "camera.aim.accel");
            }

            if (init)
            {
                this->camera.aim.max_vel = 5.0f;
                auto_tweak::load_param<F32, F32>(this->camera.aim.max_vel, 1.0f,
                                                 0.01f, 1000000000.0f,
                                                 ap, apsize, "camera.aim.max_vel");
            }

            if (init)
            {
                this->camera.aim.stick_decel = 720.0f;
                auto_tweak::load_param<F32, F32>(this->camera.aim.stick_decel, DEG2RAD(1),
                                                 0.01f, 1000000000.0f,
                                                 ap, apsize, "camera.aim.stick_decel");
            }

            if (init)
            {
                this->camera.aim.stick_accel = 360.0f;
                auto_tweak::load_param<F32, F32>(this->camera.aim.stick_accel, DEG2RAD(1),
                                                 0.01f, 1000000000.0f,
                                                 ap, apsize, "camera.aim.stick_accel");
            }

            if (init)
            {
                this->camera.aim.stick_max_vel = 135.0f;
                auto_tweak::load_param<F32, F32>(this->camera.aim.stick_max_vel, DEG2RAD(1),
                                                 0.01f, 1000000000.0f,
                                                 ap, apsize, "camera.aim.stick_max_vel");
            }

            if (init)
            {
                this->camera.aim.turn_speed = 0.2f;
                auto_tweak::load_param<F32, F32>(this->camera.aim.turn_speed, 1.0f,
                                                 0.001f, 1000000000.0f,
                                                 ap, apsize, "camera.aim.turn_speed");
            }

            if (init)
            {
                this->camera.seize.delay = 0.0f;
                auto_tweak::load_param<F32, F32>(this->camera.seize.delay, 1.0f,
                                                 0.0f, 1000000000.0f,
                                                 ap, apsize, "camera.seize.delay");
            }

            if (init)
            {
                this->camera.seize.blend_time = 1.5f;
                auto_tweak::load_param<F32, F32>(this->camera.seize.blend_time, 1.0f,
                                                 0.0f, 1000000000.0f,
                                                 ap, apsize, "camera.seize.blend_time");
            }

            if (init)
            {
                this->camera.seize.fade_dist = 2.0f;
                auto_tweak::load_param<F32, F32>(this->camera.seize.fade_dist, 1.0f,
                                                 0.0f, 10.0f, ap,
                                                 apsize, "camera.seize.fade_dist");
            }

            if (init)
            {
                this->camera.seize.hide_dist = 1.0f;
                auto_tweak::load_param<F32, F32>(this->camera.seize.hide_dist, 1.0f,
                                                 0.0f, 10.0f, ap,
                                                 apsize, "camera.seize.hide_dist");
            }

            if (init)
            {
                this->camera.seize.fov = 95.0f;
                auto_tweak::load_param<F32, F32>(this->camera.seize.fov, 1.0f,
                                                 10.0f, 180.0f, ap,
                                                 apsize, "camera.seize.fov");
            }

            if (init)
            {
                this->camera.survey.duration = 2.0f;
                auto_tweak::load_param<F32, F32>(this->camera.survey.duration, 1.0f,
                                                 0.0f, 10.0f, ap,
                                                 apsize, "camera.survey.duration");
            }

            if (init)
            {
                this->camera.survey.min_duration = 0.25f;
                auto_tweak::load_param<F32, F32>(this->camera.survey.min_duration, 1.0f,
                                                 0.0f, 10.0f, ap,
                                                 apsize, "camera.survey.min_duration");
            }

            if (init)
            {
                this->camera.survey.min_dist = 10.0f;
                auto_tweak::load_param<F32, F32>(this->camera.survey.min_dist, 1.0f,
                                                 0.0f, 100.0f, ap,
                                                 apsize, "camera.survey.min_dist");
            }

            if (init)
            {
                this->camera.survey.cut_dist = 6.0f;
                auto_tweak::load_param<F32, F32>(this->camera.survey.cut_dist, 1.0f,
                                                 0.0f, 100.0f, ap,
                                                 apsize, "camera.survey.cut_dist");
            }

            if (init)
            {
                this->camera.survey.drift_dist = 8.0f;
                auto_tweak::load_param<F32, F32>(this->camera.survey.drift_dist, 1.0f,
                                                 0.0f, 100.0f, ap,
                                                 apsize, "camera.survey.drift_dist");
            }

            if (init)
            {
                this->camera.survey.drift_softness = 0.1f;
                auto_tweak::load_param<F32, F32>(this->camera.survey.drift_softness, 1.0f,
                                                 0.0f, 0.5f, ap, apsize,
                                                 "camera.survey.drift_softness");
            }

            if (init)
            {
                this->camera.survey.jerk_offset = 0.8f;
                auto_tweak::load_param<F32, F32>(this->camera.survey.jerk_offset, 1.0f,
                                                 0.0f, 2.0f, ap, apsize,
                                                 "camera.survey.jerk_offset");
            }

            if (init)
            {
                this->camera.survey.jerk_deflect = 0.6f;
                auto_tweak::load_param<F32, F32>(this->camera.survey.jerk_deflect, 1.0f,
                                                 0.0f, 1.0f, ap, apsize,
                                                 "camera.survey.jerk_deflect");
            }

            if (init)
            {
                this->camera.restore.control_delay = 0.25f;
                auto_tweak::load_param<F32, F32>(this->camera.restore.control_delay, 1.0f,
                                                 0.0f, 1.0f, ap, apsize,
                                                 "camera.restore.control_delay");
            }

            if (init)
            {
                this->material.env_alpha = 0.5f;
                auto_tweak::load_param<F32, F32>(this->material.env_alpha, 1.0f,
                                                 0.0f, 1.0f, ap, apsize,
                                                 "material.env_alpha");
            }

            if (init)
            {
                this->material.env_coeff = 0.5f;
                auto_tweak::load_param<F32, F32>(this->material.env_coeff, 1.0f,
                                                 0.0f, 1.0f, ap, apsize,
                                                 "material.env_coeff");
            }

            if (init)
            {
                this->material.fresnel_alpha = 0.0f;
                auto_tweak::load_param<F32, F32>(this->material.fresnel_alpha, 1.0f,
                                                 0.0f, 1.0f, ap, apsize,
                                                 "material.fresnel_alpha");
            }

            if (init)
            {
                this->material.fresnel_coeff = 0.75f;
                auto_tweak::load_param<F32, F32>(this->material.fresnel_coeff, 1.0f,
                                                 0.0f, 1.0f, ap, apsize,
                                                 "material.fresnel_coeff");
            }

            if (init)
            {
                this->reticle.dist_min = 3.0f;
                auto_tweak::load_param<F32, F32>(this->reticle.dist_min, 1.0f,
                                                 1.0f, 10.0f, ap,
                                                 apsize, "reticle.dist_min");
            }

            if (init)
            {
                this->reticle.dist_max = 30.0f;
                auto_tweak::load_param<F32, F32>(this->reticle.dist_max, 1.0f,
                                                 1.0f, 10000.0f, ap,
                                                 apsize, "reticle.dist_max");
            }

            if (init)
            {
                this->reticle.ang_show = 4.0f;
                auto_tweak::load_param<F32, F32>(this->reticle.ang_show, DEG2RAD(1),
                                                 0.0f, 90.0f, ap,
                                                 apsize, "reticle.ang_show");
            }

            if (init)
            {
                this->reticle.ang_hide = 22.5f;
                auto_tweak::load_param<F32, F32>(this->reticle.ang_hide, DEG2RAD(1),
                                                 0.0f, 90.0f, ap,
                                                 apsize, "reticle.ang_hide");
            }

            if (init)
            {
                this->reticle.delay_retarget = 0.25f;
                auto_tweak::load_param<F32, F32>(this->reticle.delay_retarget, 1.0f,
                                                 0.0f, 5.0f, ap, apsize,
                                                 "reticle.delay_retarget");
            }

            if (init)
            {
                this->trail.sample_rate = 60.0f;
                auto_tweak::load_param<F32, F32>(this->trail.sample_rate, 1.0f,
                                                 0.0f, 10000.0f, ap,
                                                 apsize, "trail.sample_rate");
            }

            if (init)
            {
                this->trail.bubble_rate = 60.0f;
                auto_tweak::load_param<F32, F32>(this->trail.bubble_rate, 1.0f,
                                                 0.0f, 10000.0f, ap,
                                                 apsize, "trail.bubble_rate");
            }

            if (init)
            {
                this->trail.bubble_emit_radius = 0.5f;
                auto_tweak::load_param<F32, F32>(this->trail.bubble_emit_radius, 1.0f,
                                                 0.0f, 10.0f, ap,
                                                 apsize, "trail.bubble_emit_radius");
            }

            if (init)
            {
                this->trail.wake_emit_radius = 0.1f;
                auto_tweak::load_param<F32, F32>(this->trail.wake_emit_radius, 1.0f,
                                                 0.0f, 10.0f, ap,
                                                 apsize, "trail.wake_emit_radius");
            }

            if (init)
            {
                this->blast.emit = 300;
                auto_tweak::load_param<U32, S32>(this->blast.emit, 1, 0, 0x3e8, ap, apsize, "blast.emit");
            }

            if (init)
            {
                this->blast.radius = 0.0f;
                auto_tweak::load_param<F32, F32>(this->blast.radius, 1.0f,
                                                 0.0f, 10.0f, ap,
                                                 apsize, "blast.radius");
            }

            if (init)
            {
                this->blast.vel = 5.0f;
                auto_tweak::load_param<F32, F32>(this->blast.vel, 1.0f,
                                                 -100000.0f, 100000.0f,
                                                 ap, apsize, "blast.vel");
            }

            if (init)
            {
                this->blast.rand_vel = 0.5f;
                auto_tweak::load_param<F32, F32>(this->blast.rand_vel, 1.0f,
                                                 -100000.0f, 100000.0f,
                                                 ap, apsize, "blast.rand_vel");
            }

            if (init)
            {
                this->droplet.dist_min = 1.0f;
                auto_tweak::load_param<F32, F32>(this->droplet.dist_min, 1.0f,
                                                 0.0f, 10.0f, ap,
                                                 apsize, "droplet.dist_min");
            }

            if (init)
            {
                this->droplet.dist_max = 2.0f;
                auto_tweak::load_param<F32, F32>(this->droplet.dist_max, 1.0f,
                                                 0.0f, 10.0f, ap,
                                                 apsize, "droplet.dist_max");
            }

            if (init)
            {
                this->droplet.emit_min = 10;
                auto_tweak::load_param<U32, S32>(this->droplet.emit_min, 1, 0, 0x1e, ap, apsize,
                                                 "droplet.emit_min");
            }

            if (init)
            {
                this->droplet.emit_max = 20;
                auto_tweak::load_param<U32, S32>(this->droplet.emit_max, 1, 0, 0x1e, ap, apsize,
                                                 "droplet.emit_max");
            }

            if (init)
            {
                this->droplet.vel_min = 2.0f;
                auto_tweak::load_param<F32, F32>(this->droplet.vel_min, 1.0f,
                                                 0.0f, 100000.0f, ap,
                                                 apsize, "droplet.vel_min");
            }

            if (init)
            {
                this->droplet.vel_max = 6.0f;
                auto_tweak::load_param<F32, F32>(this->droplet.vel_max, 1.0f,
                                                 0.0f, 100000.0f, ap,
                                                 apsize, "droplet.vel_max");
            }

            if (init)
            {
                this->droplet.vel_perturb = 0.25f;
                auto_tweak::load_param<F32, F32>(this->droplet.vel_perturb, 1.0f,
                                                 0.0f, 100000.0f, ap,
                                                 apsize, "droplet.vel_perturb");
            }

            if (init)
            {
                this->droplet.vel_angle = 60.0f;
                auto_tweak::load_param<F32, F32>(this->droplet.vel_angle, DEG2RAD(1),
                                                 0.0f, 100000.0f, ap,
                                                 apsize, "droplet.vel_angle");
            }

            if (init)
            {
                this->droplet.rot_vel_max = 360.0f;
                auto_tweak::load_param<F32, F32>(this->droplet.rot_vel_max, DEG2RAD(1),
                                                 0.0f, 100000.0f, ap,
                                                 apsize, "droplet.rot_vel_max");
            }

            if (init)
            {
                this->hud.glow_size = 0.05f;
                auto_tweak::load_param<F32, F32>(this->hud.glow_size, 1.0f,
                                                 0.001f, 10.0f, ap,
                                                 apsize, "hud.glow_size");
            }

            if (init)
            {
                this->hud.time_fade = 0.25f;
                auto_tweak::load_param<F32, F32>(this->hud.time_fade, 1.0f,
                                                 0.001f, 10.0f, ap,
                                                 apsize, "hud.time_fade");
            }

            if (init)
            {
                this->hud.time_glow = 0.5f;
                auto_tweak::load_param<F32, F32>(this->hud.time_glow, 1.0f,
                                                 0.001f, 10.0f, ap,
                                                 apsize, "hud.time_glow");
            }

            if (init)
            {
                this->hud.wind.size = 0.75f;
                auto_tweak::load_param<F32, F32>(this->hud.wind.size, 1.0f,
                                                 0.0f, 100.0f, ap,
                                                 apsize, "hud.wind.size");
            }

            if (init)
            {
                this->hud.wind.du = 0.0f;
                auto_tweak::load_param<F32, F32>(this->hud.wind.du, 1.0f,
                                                 -1000000000.0f,
                                                 1000000000.0f, ap, apsize,
                                                 "hud.wind.du");
            }

            if (init)
            {
                this->hud.wind.dv = 4.0f;
                auto_tweak::load_param<F32, F32>(this->hud.wind.dv, 1.0f,
                                                 -1000000000.0f,
                                                 1000000000.0f, ap, apsize,
                                                 "hud.wind.dv");
            }

            if (init)
            {
                this->hud.reticle.size = 0.1f;
                auto_tweak::load_param<F32, F32>(this->hud.reticle.size, 1.0f,
                                                 0.0f, 100.0f, ap,
                                                 apsize, "hud.reticle.size");
            }

            if (init)
            {
                this->hud.target.size = 0.1f;
                auto_tweak::load_param<F32, F32>(this->hud.target.size, 1.0f,
                                                 0.0f, 100.0f, ap,
                                                 apsize, "hud.target.size");
            }

            if (init)
            {
                this->hud.timer.font = 2;
                auto_tweak::load_param<S32, S32>(this->hud.timer.font, 1, 0, 4, ap, apsize,
                                                 "hud.timer.font");
            }

            if (init)
            {
                this->hud.timer.font_width = 0.0275f;
                auto_tweak::load_param<F32, F32>(this->hud.timer.font_width, 1.0f,
                                                 0.001f, 1.0f, ap,
                                                 apsize, "hud.timer.font_width");
            }

            if (init)
            {
                this->hud.timer.font_height = 0.047f;
                auto_tweak::load_param<F32, F32>(this->hud.timer.font_height, 1.0f,
                                                 0.001f, 1.0f, ap,
                                                 apsize, "hud.timer.font_height");
            }

            if (init)
            {
                this->hud.timer.x = 0.78f;
                auto_tweak::load_param<F32, F32>(this->hud.timer.x, 1.0f,
                                                 0.0f, 1.0f, ap, apsize,
                                                 "hud.timer.x");
            }

            if (init)
            {
                this->hud.timer.y = 0.86f;
                auto_tweak::load_param<F32, F32>(this->hud.timer.y, 1.0f,
                                                 0.0f, 1.0f, ap, apsize,
                                                 "hud.timer.y");
            }

            if (init)
            {
                this->hud.timer.glow_size = 0.01f;
                auto_tweak::load_param<F32, F32>(this->hud.timer.glow_size, 1.0f,
                                                 0.0f, 10.0f, ap,
                                                 apsize, "hud.timer.glow_size");
            }

            if (init)
            {
                this->dialog.freq = 1.0f;
                auto_tweak::load_param<F32, F32>(this->dialog.freq, 1.0f,
                                                 0.0f, 1.0f, ap, apsize,
                                                 "dialog.freq");
            }

            if (init)
            {
                this->dialog.decay = 0.75f;
                auto_tweak::load_param<F32, F32>(this->dialog.decay, 1.0f,
                                                 0.0f, 1.0f, ap, apsize,
                                                 "dialog.decay");
            }

            if (init)
            {
                this->dialog.min_freq = 0.1f;
                auto_tweak::load_param<F32, F32>(this->dialog.min_freq, 1.0f,
                                                 0.0f, 1.0f, ap, apsize,
                                                 "dialog.min_freq");
            }

            if (init)
            {
                this->material.fresnel_texture = xStrHash("gloss_edge");
                this->material.env_texture = xStrHash("rainbowfilm_smooth32");
            }
        }

        void cruise_bubble::init()
        {
            if ((shared.flags & 0x1) != 0x1)
            {
                return;
            }

            cruise_bubble::init_sound();

            shared.flags |= 0x2;

            cruise_bubble::load_settings();
            cruise_bubble::init_states();
            cruise_bubble::init_missle_model();
            cruise_bubble::init_wake_ribbons();
            cruise_bubble::init_explode_decal();
            cruise_bubble::init_shrapnel();
            cruise_bubble::init_hud();
            cruise_bubble::init_debug();

            // scheduling off
            shared.fov_default = xCameraGetFOV(&globals.camera);
            shared.dialog_freq = current_tweak->dialog.freq;
        }

        void init_debug()
        {
            // empty
        }

        void cruise_bubble::reset()
        {
            if ((shared.flags & 0x3) == 0x3)
            {
                cruise_bubble::kill(true, false);
            }
        }

        void cruise_bubble::launch()
        {
            if ((shared.flags & 0x13) != 0x3)
            {
                return;
            }

            if (zGameExtras_CheatFlags() & 0x20000000)
            {
                // scheduling off
                shared.flags |= 0x200;
                current_tweak = &cheat_tweak;
            }
            else
            {
                current_tweak = &normal_tweak;
            }

            cruise_bubble::reset_wake_ribbons();
            cruise_bubble::reset_explode_decal();

            shared.flags = shared.flags | 0x14;
            shared.last_sp = shared.sp = globals.pad0->analog[0].offset;
            shared.player_health = globals.player.Health;
            // scheduling off
            shared.player_motion = 0.0f;
            shared.fov_default = xCameraGetFOV(&globals.camera);

            ztalkbox::permit(0x0, 0xffffffff);
            cruise_bubble::set_state(THREAD_PLAYER, BEGIN_STATE_PLAYER);
        }

        bool cruise_bubble::update(xScene* s, F32 dt)
        {
            if ((shared.flags & 0x3) != 0x3)
            {
                return false;
            }

            if (!(shared.flags & 0x10))
            {
                if (cruise_bubble::check_launch())
                {
                    launch();
                }
                else
                {
                    return false;
                }
            }

            if (globals.player.ControlOff)
            {
                cruise_bubble::kill(true, false);
                return false;
            }

            cruise_bubble::refresh_controls();
            cruise_bubble::update_state(s, dt);

            if (!(shared.flags & 0x10))
            {
                return false;
            }

            cruise_bubble::update_player(*s, dt);
            cruise_bubble::update_missle(*s, dt);
            cruise_bubble::update_hud(dt);
            return true;
        }

        bool cruise_bubble::render()
        {
            if ((shared.flags & 0x7) != 0x7)
            {
                return false;
            }

            cruise_bubble::render_state();
            cruise_bubble::render_player();
            cruise_bubble::render_missle();
            cruise_bubble::render_debug();

            return true;
        }

        void render_debug()
        {
            // empty
        }

        void cruise_bubble::render_screen()
        {
            if ((shared.flags & 0x7) == 0x7)
            {
                cruise_bubble::render_hud();
            }
        }

        void cruise_bubble::insert_player_animations(xAnimTable& table)
        {
            if (shared.astate.player.aim != NULL)
            {
                return;
            }

            shared.astate.player.aim =
                xAnimTableNewState(&table, "cruise_bubble_aim", 0x10, 0, 1.0f, NULL, NULL,
                                   0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);

            shared.astate.player.fire =
                xAnimTableNewState(&table, "cruise_bubble_fire", 0x20, 0, 1.0f, NULL,
                                   NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL,
                                   NULL);

            shared.astate.player.idle =
                xAnimTableNewState(&table, "cruise_bubble_idle", 0x10, 0, 1.0f, NULL,
                                   NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL,
                                   NULL);

            char* start_from = (char*)xMemPushTemp(0x250);
            memset(start_from, 0, 0x250);
            char* s = start_from;
            *s = '\0';
            for (U32 i = 0; i < 37; ++i)
            {
                strcat(s, start_anim_states[i]);
                s += strlen(s);
                *s = ' ';
                *++s = '\0';
            }

            shared.atran.player.aim =
                xAnimTableNewTransition(&table, start_from, "cruise_bubble_aim",
                                        (xAnimTransitionConditionalCallback)&check_anim_aim, NULL, 0, 0,
                                        0.0f, 0.0f, 0, 0,
                                        0.15f, NULL);

            shared.atran.player.fire =
                xAnimTableNewTransition(&table, "cruise_bubble_aim", "cruise_bubble_fire", NULL, NULL, 0, 0,
                                        0.0f, 0.0f, 0, 0,
                                        0.15f, NULL);

            shared.atran.player.idle =
                xAnimTableNewTransition(&table, "cruise_bubble_fire", "cruise_bubble_idle", NULL, NULL,
                                        0x10, 0, 0.0f, 0.0f, 0, 0,
                                        0.15f, NULL);

            shared.atran.player.end =
                xAnimTableNewTransition(&table, "cruise_bubble_aim cruise_bubble_fire cruise_bubble_idle",
                                        "Idle01", NULL, NULL, 0, 0, 0.0f,
                                        0.0f, 0, 0, 0.15f, NULL);

            xMemPopTemp(start_from);
        }

        xAnimTable* cruise_bubble::anim_table()
        {
            xAnimTable* table = xAnimTableNew("Cruise Bubble", 0, 0);
            shared.astate.missle.fire = xAnimTableNewState(table, "fire", 0x20, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
            shared.astate.missle.fly  = xAnimTableNewState(table, "fly",  0x10, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
            shared.atran.missle.fly = xAnimTableNewTransition(table, "fire", "fly", NULL, NULL, 0x10, 0, 0.0f, 0.0f, 0, 0, 0.15f, NULL);
            return table;
        }

        bool cruise_bubble::active()
        {
            return shared.flags & 0x10;
        }

        F32 cruise_bubble::exploding()
        {
            state_missle_explode* state = (state_missle_explode*)shared.state[THREAD_MISSLE];
            if (state == NULL || state->type != STATE_MISSLE_EXPLODE)
            {
                return 0.0f;
            }

            return current_tweak->missle.explode.hit_duration - state->hit_time;
        }

        void cruise_bubble::get_explode_sphere(xVec3& center, F32& radius)
        {
            state_missle_explode* state = (state_missle_explode*)shared.state[THREAD_MISSLE];
            if (state == NULL || state->type != STATE_MISSLE_EXPLODE)
            {
                return;
            }
            if (state->hit_time >= current_tweak->missle.explode.hit_duration)
            {
                return;
            }

            center = shared.hit_loc;
            radius = state->get_radius();
        }

        F32 cruise_bubble::state_missle_explode::get_radius() const
        {
            F32 t_frac = this->hit_time / current_tweak->missle.explode.hit_duration;
            return t_frac * current_tweak->missle.explode.hit_radius;
        }

        xEnt** cruise_bubble::get_explode_hits(S32& size)
        {
            state_missle_explode* state = (state_missle_explode*)shared.state[THREAD_MISSLE];
            if (state == NULL || state->type != STATE_MISSLE_EXPLODE)
            {
                size = 0;
                return NULL;
            }
            if (state->hit_time >= current_tweak->missle.explode.hit_duration)
            {
                size = 0;
                return NULL;
            }

            size = shared.hits_size;
            return shared.hits;
        }

        // param names guessed
        void cruise_bubble::add_life(F32 life, F32 max)
        {
            state_missle_fly* state = (state_missle_fly*)shared.state[THREAD_MISSLE];
            if (state == NULL || state->type != STATE_MISSLE_FLY)
            {
                return;
            }

            state->life += life;

            if (max < 0.0f)
            {
                max = current_tweak->missle.life;
            }

            if (!(max > 0.0f))
            {
                return;
            }
            if (!(state->life > max))
            {
                return;
            }

            state->life = max;
        }

        void cruise_bubble::set_life(F32 life)
        {
            state_missle_fly* state = (state_missle_fly*)shared.state[THREAD_MISSLE];
            if (state == NULL || state->type != STATE_MISSLE_FLY)
            {
                return;
            }

            state->life = life;
        }

        void cruise_bubble::reset_life()
        {
            state_missle_fly* state = (state_missle_fly*)shared.state[THREAD_MISSLE];
            if (state == NULL || state->type != STATE_MISSLE_FLY)
            {
                return;
            }

            state->life = current_tweak->missle.life;
        }

        bool cruise_bubble::event_handler(xBase* from, U32 event, const F32* fparam, xBase* to)
        {
            switch (event)
            {
            case eEventCruiseAddLife:
                add_life(fparam[0], fparam[1]);
                return true;

            case eEventCruiseSetLife:
                set_life(fparam[0]);
                return true;

            case eEventCruiseResetLife:
                reset_life();
                return true;

            case eEventCruiseFired:
            case eEventCruiseDied:
                return true;
            }

            return false;
        }

        void cruise_bubble::state_player_halt::start()
        {
            this->first_update = true;
        }

        void cruise_bubble::state_player_halt::stop()
        {
            shared.flags &= 0xffffffdf;
        }

        cruise_bubble::state_enum cruise_bubble::state_player_halt::update(F32 dt)
        {
            this->time += dt;

            if (this->first_update)
            {
                this->first_update = false;
                this->last_motion = shared.player_motion;
                return STATE_PLAYER_HALT;
            }

            xVec3 dmotion = shared.player_motion - this->last_motion;
            if (dmotion.length2() < 0.0001f)
            {
                return STATE_PLAYER_AIM;
            }

            if (this->time > current_tweak->player.halt_time)
            {
                return STATE_INVALID;
            }

            return STATE_PLAYER_HALT;
        }

        void cruise_bubble::state_player_aim::start()
        {
            shared.flags |= 0x20;

            xVec3* player_dir = &get_player_mat()->at;
            this->yaw = xatan2(player_dir->x, player_dir->z);
            this->yaw_vel = 0.0f;
            this->turn_delay = 0.0f;

            xAnimPlayStartTransition(globals.player.ent.model->Anim, shared.atran.player.aim);
            cruise_bubble::set_state(THREAD_CAMERA, STATE_CAMERA_AIM);
        }

        xMat4x3* get_player_mat()
        {
            return (xMat4x3*)globals.player.ent.model->Mat;
        }

        void cruise_bubble::state_player_aim::stop()
        {
            shared.flags &= 0xffffffdf;
        }

        cruise_bubble::state_enum cruise_bubble::state_player_aim::update(F32 dt)
        {
            this->turn_delay += dt;

            if (this->turn_delay >= current_tweak->aim_delay)
            {
                this->face_camera(dt);
            }
            this->apply_yaw();
            this->update_animation(dt);

            if (!(globals.pad0->on & 0x100))
            {
                return STATE_PLAYER_FIRE;
            }
            return STATE_PLAYER_AIM;
        }

        void cruise_bubble::state_player_aim::update_animation(F32 dt)
        {
            F32 r = range_limit<F32>(this->yaw_vel * current_tweak->player.aim.anim_delta,
                                     -1.0f, 1.0f);
            xAnimSingle* s = globals.player.ent.model->Anim->Single;
            s->BilinearLerp[0] = 0.5f * ((1.0f + s->BilinearLerp[0]) + r);
        }

        void cruise_bubble::state_player_aim::apply_yaw()
        {
            xMat4x3* m = cruise_bubble::get_player_mat();
            m->at.assign(isin(this->yaw), 0.0f, icos(this->yaw));
            m->right.assign(m->at.z, 0.0f, -m->at.x);
            m->up.assign(0.0f, 1.0f, 0.0f);
        }

        void cruise_bubble::state_player_aim::face_camera(F32 dt)
        {
            xMat4x3* mat = &globals.camera.mat;

            F32 new_yaw;
            if (mat->at.x >= -0.00001f && mat->at.x <= 0.00001f &&
                mat->at.z >= -0.00001f && mat->at.z <= 0.00001f)
            {
                new_yaw = this->yaw;
            }
            else
            {
                new_yaw = xatan2(mat->at.x, mat->at.z);
            }

            F32 diff = new_yaw - this->yaw;
            if (diff > PI)
            {
                diff -= PI * 2;
            }
            else if (diff < -PI)
            {
                diff += PI * 2;
            }
            F32 tspeed = current_tweak->player.aim.turn_speed * xexp(dt);
            if (tspeed > 1.0f)
            {
                tspeed = 1.0f;
            }
            tspeed = diff * tspeed;
            this->yaw_vel = tspeed / dt;
            this->yaw = this->yaw + tspeed;
            this->yaw = xrmod(this->yaw);
        }

        void cruise_bubble::state_player_fire::start()
        {
            this->wand_shown = false;

            cruise_bubble::play_sound(0, 1.0f, &get_missle_mat()->pos);
            xAnimPlayStartTransition(globals.player.ent.model->Anim, shared.atran.player.fire);
            cruise_bubble::set_state(THREAD_MISSLE, STATE_MISSLE_APPEAR);

            if (xurand() <= shared.dialog_freq)
            {
                play_sound(3, 1.0f);
                shared.dialog_freq *= current_tweak->dialog.decay;

                if (shared.dialog_freq < current_tweak->dialog.min_freq)
                {
                    shared.dialog_freq = current_tweak->dialog.min_freq;
                }
            }
        }

        xMat4x3* get_missle_mat()
        {
            return (xMat4x3*)shared.missle_model->Mat;
        }

        void cruise_bubble::state_player_fire::stop()
        {
            cruise_bubble::hide_wand();
        }

        cruise_bubble::state_enum cruise_bubble::state_player_fire::update(F32 dt)
        {
            xAnimSingle* asingle = globals.player.ent.model->Anim->Single;
            xAnimState* astate = asingle->State;

            if (astate == shared.astate.player.fire)
            {
                F32 time = astate->Data->Duration;
                F32 max_time = asingle->Time + dt;

                if (this->wand_shown == 0 && max_time >= current_tweak->player.fire.delay_wand)
                {
                    show_wand();
                }
                if (max_time >= time)
                {
                    return STATE_PLAYER_WAIT;
                }
            }

            if (this->wand_shown != 0)
            {
                this->update_wand(dt);
            }

            return STATE_PLAYER_FIRE;
        }

        void cruise_bubble::state_player_fire::update_wand(F32 dt)
        {
            // empty
        }

        void cruise_bubble::state_player_wait::start()
        {
            cruise_bubble::hide_wand();
        }

        cruise_bubble::state_enum cruise_bubble::state_player_wait::update(F32)
        {
            return STATE_PLAYER_WAIT;
        }

        void cruise_bubble::state_missle_appear::start()
        {
            cruise_bubble::show_missle();
            shared.missle_model->Flags = shared.missle_model->Flags & 0xfffe;
            shared.missle_model->Alpha = 1.0f;
            xAnimPlaySetState(shared.missle_model->Anim->Single, shared.astate.missle.fire,
                              0.0f);
            this->move();
        }

        void cruise_bubble::state_missle_appear::move()
        {
            xMat4x3& mat = *cruise_bubble::get_missle_mat();
            xVec3 euler;
            xVec3 prod;

            mat = *cruise_bubble::get_player_mat();
            xMat3x3GetEuler(&mat, &euler);
            xMat3x3Euler(&mat, &euler);
            xMat3x3RMulVec(&prod, &mat, &current_tweak->missle.appear.offset);
            mat.pos += prod;
        }

        void cruise_bubble::state_missle_appear::stop()
        {
            hide_missle();
        }

        cruise_bubble::state_enum cruise_bubble::state_missle_appear::update(F32 dt)
        {
            F32 time = shared.missle_model->Anim->Single->Time + dt;
            if (time >= current_tweak->missle.appear.delay_show)
            {
                shared.missle_model->Flags = shared.missle_model->Flags | 0x1;
                start_trail();
            }
            move();

            if (time >= current_tweak->missle.appear.delay_fly)
            {
                return STATE_MISSLE_FLY;
            }

            this->update_effects(dt);
            return STATE_MISSLE_APPEAR;
        }

        void cruise_bubble::state_missle_appear::update_effects(F32 dt)
        {
            //empty
        }

        void cruise_bubble::state_missle_fly::start()
        {
            // lwzu
            // & to match function size
            shared.flags |= 0x8;
            this->life = current_tweak->missle.life;

            cruise_bubble::show_missle();
            start_trail();
            cruise_bubble::start_damaging();

            this->vel = 0.0f;
            xMat3x3GetEuler(cruise_bubble::get_missle_mat(), &this->rot);
            this->rot_vel = 0.0f;
            this->engine_pitch = 0.0f;
            this->flash_time = 0.0f;
            this->last_loc = globals.player.ent.bound.sph.center;

            missle_record.reset();
            missle_record.push_front(missle_record_data(this->last_loc, this->rot.z));
            missle_record.push_front(missle_record_data(cruise_bubble::get_missle_mat()->pos, this->rot.z));

            play_sound(2, 1.0f, &cruise_bubble::get_missle_mat()->pos);
            signal_event(eEventCruiseFired);
        }

        missle_record_data::missle_record_data(const xVec3& loc, F32 roll) : loc(loc), roll(roll)
        {
        }

        void cruise_bubble::state_missle_fly::stop()
        {
            shared.flags &= 0xfffffff7;

            hide_missle();
            stop_trail();
            stop_sound(2, 0);
            signal_event(eEventCruiseDied);

            xSphere o;
            o.center = 1e38;
            o.r = 0.0f;
            notify_triggers(*globals.sceneCur, o, xVec3::create(0.0f));
        }

        void cruise_bubble::state_missle_fly::abort()
        {
            stop_sound(2, 0);
            signal_event(eEventCruiseDied);

            xSphere o;
            o.center = 1e38;
            o.r = 0.0f;
            notify_triggers(*globals.sceneCur, o, xVec3::create(0.0f));
        }

        cruise_bubble::state_enum cruise_bubble::state_missle_fly::update(F32 dt)
        {
            this->life -= dt;
            if (this->life <= 0.0f || (globals.pad0->pressed & 0x100))
            {
                shared.hit_loc = get_missle_mat()->pos;
                shared.hit_norm = get_missle_mat()->at;

                return STATE_MISSLE_EXPLODE;
            }

            this->update_turn(dt);
            this->update_move(dt);

            if (missle_record.full())
            {
                missle_record.pop_back();
            }

            if (this->collide() || this->collide_hazards())
            {
                missle_record.push_front(missle_record_data(shared.hit_loc, this->rot.z));
                return STATE_MISSLE_EXPLODE;
            }
            missle_record.push_front(missle_record_data(get_missle_mat()->pos, this->rot.z));

            this->last_loc = get_missle_mat()->pos;
            this->update_engine_sound(dt);
            this->update_flash(dt);

            xMat4x3* mat = get_missle_mat();
            xSphere o;
            o.center = mat->pos;
            o.r = current_tweak->missle.hit_dist;
            notify_triggers(*globals.sceneCur, o, mat->at);

            return STATE_MISSLE_FLY;
        }

        void cruise_bubble::state_missle_fly::update_flash(F32 dt)
        {
            this->flash_time += dt;

            F32 tflash =
                current_tweak->missle.fly.flash_interval * (this->life / current_tweak->missle.life);
            if (this->flash_time > tflash)
            {
                flash_hud();

                F32 floor_frac = std::floorf(this->flash_time / tflash);
                this->flash_time = this->flash_time - (floor_frac * tflash);
            }
        }

        void cruise_bubble::state_missle_fly::update_engine_sound(F32 dt)
        {
            F32 tmp = current_tweak->missle.fly.engine_pitch_max *
                      (iabs(shared.last_sp.x) + iabs(shared.last_sp.y));

            this->engine_pitch +=
                (tmp - this->engine_pitch) * current_tweak->missle.fly.engine_pitch_sensitivity;

            set_pitch(2, this->engine_pitch, 0);
        }

        U8 cruise_bubble::state_missle_fly::collide_hazards()
        {
            NPCHazard* c[2];
            c[0] = NULL;
            HAZ_Iterate(&cruise_bubble::state_missle_fly::hazard_check, c, 0xa000);

            if (c[0] == NULL)
            {
                return false;
            }

            if ((c[0]->flg_hazard & 0x200000))
            {
                c[0]->MarkForRecycle();
            }
            shared.hit_loc = cruise_bubble::get_missle_mat()->pos;
            return true;
        }

        bool cruise_bubble::state_missle_fly::hazard_check(NPCHazard& haz, void* context)
        {
            // get_missle_mat()->pos uses one more instruction for no apparent reason
            xVec3 vvar = haz.pos_hazard - get_missle_mat()->pos;
            F32 fvar = current_tweak->missle.hit_dist + haz.custdata.typical.rad_cur;

            // scheduling for implicit copy ctor off
            if (vvar.length2() < fvar * fvar)
            {
                ((NPCHazard**)context)[0] = &haz;
                return false;
            }

            return true;
        }

        U8 cruise_bubble::state_missle_fly::collide()
        {
            xVec3* hit_norm = &shared.hit_norm;
            xVec3* hit_loc = &shared.hit_loc;
            xEnt* hit_ent;
            xVec3 hit_depen;
            S32 i = 0;

            do
            {
                if (!this->hit_test(*hit_loc, *hit_norm, hit_depen, hit_ent))
                {
                    return false;
                }

                if (cruise_bubble::can_damage(hit_ent))
                {
                    damage_entity(*hit_ent, *hit_loc, cruise_bubble::get_missle_mat()->at, *hit_norm,
                                  0.0f, false);
                    return true;
                }

                xMat4x3* mat = cruise_bubble::get_missle_mat();
                F32 ang = xasin(mat->at.dot(*hit_norm));
                if (ang < -current_tweak->missle.crash_angle)
                {
                    return true;
                }

                mat->pos += hit_depen;
                xVec3 diff = mat->pos - this->last_loc;
                F32 len = diff.length2();
                if (len < 0.001f)
                {
                    return false;
                }

                len = xsqrt(len);
                xVec3 diff_normalized = diff * (1.0f / len);
                F32 sin = -xasin(diff_normalized.y);
                if (F32(iabs(sin)) > (PI / 2) * current_tweak->missle.fly.turn.ybound)
                {
                    return true;
                }

                F32 tan = xatan2(diff_normalized.x, diff_normalized.z);
                F32 mod =
                    xrmod(PI + (tan - this->rot.x)) - PI;
                this->rot.x += mod * current_tweak->missle.collide_twist;
                this->rot.y += (sin - this->rot.y) * current_tweak->missle.collide_twist;
                xMat3x3Euler(mat, &this->rot);

                if (hit_depen.length2() < 1.0000001e-6f)
                {
                    return false;
                }
            } while (++i < current_tweak->missle.hit_tests);

            F32 dist = 0.1f * current_tweak->missle.hit_dist;
            if (hit_depen.length2() < dist * dist)
            {
                return false;
            }

            return this->hit_test(*hit_loc, *hit_norm, hit_depen, hit_ent);
        }

        U8 cruise_bubble::state_missle_fly::hit_test(xVec3& hit_loc, xVec3& hit_norm, xVec3& hit_depen,
                                                     xEnt*& hit_ent) const
        {
            xScene* s = globals.sceneCur;
            xVec3* loc = &get_missle_mat()->pos;
            xSweptSphere ss;
            xSweptSpherePrepare(&ss, (xVec3*)&this->last_loc, loc, current_tweak->missle.hit_dist);
            ss.optr = NULL;
            if (!xSweptSphereToScene(&ss, s, NULL, 0x10))
            {
                return false;
            }

            xSweptSphereGetResults(&ss);
            // scheduling off
            xVec3 overshoot = {};
            overshoot.x = loc->x - ss.worldPos.x;
            overshoot.y = loc->y - ss.worldPos.y;
            overshoot.z = loc->z - ss.worldPos.z;
            // till here
            hit_loc = ss.worldPos + ss.worldTangent * overshoot.dot(ss.worldTangent);
            hit_depen = hit_loc - *loc;
            hit_norm = ss.worldNormal;
            hit_ent = (xEnt*)ss.optr;

            return true;
        }

        void cruise_bubble::state_missle_fly::update_move(F32 dt)
        {
            F32 accel = current_tweak->missle.fly.accel;
            F32 max = current_tweak->missle.fly.max_vel;
            F32 move = 0.0f;

            xAccelMove(move, this->vel, accel, dt, max);

            xMat4x3* mat = get_missle_mat();
            mat->pos += mat->at * move;
        }

        void cruise_bubble::state_missle_explode::start()
        {
            shared.flags |= 0x40;
            // scheduling for zEntCruiseBubble_f_0_0
            this->hit_time = 0.0f;

            if (current_tweak->missle.explode.hit_duration <= 0.0f)
                this->apply_damage(current_tweak->missle.explode.hit_radius);

            F32 dist = (shared.hit_loc - get_player_loc()).length2();
            F32 mul = current_tweak->camera.survey.min_dist * current_tweak->camera.survey.min_dist;
            F32 min_dist = mul;
            set_state(THREAD_CAMERA, dist <= min_dist ? STATE_CAMERA_RESTORE : STATE_CAMERA_SURVEY);

            play_sound(1, 1.0f, &get_missle_mat()->pos);
            this->start_effects();
        }

        void cruise_bubble::state_missle_explode::start_effects()
        {
            U32 rand;
            U32 emit_max;
            U32 emit_min;
            zShrapnelAsset* shrap;

            // current_tweak loaded into r30 instead of r29.
            zFX_SpawnBubbleBlast(&get_missle_mat()->pos, current_tweak->blast.emit, current_tweak->blast.radius, current_tweak->blast.vel, current_tweak->blast.rand_vel);

            xVec3 scale = { 1.0f, 1.0f, 1.0f };

            explode_decal.emit(*get_missle_mat(), scale, -1);

            shrap = shared.droplet_shrapnel;
            if ((shrap != NULL) && (shrap->initCB != NULL))
            {
                emit_max = current_tweak->droplet.emit_min;
                emit_min = current_tweak->droplet.emit_max;

                if (emit_max >= emit_min)
                {
                    emit_max = emit_min;
                }
                else
                {
                    rand = xrand();
                    emit_max += (rand / 0x2000) - ((rand / 0x2000) / (emit_min - emit_max)) * (emit_min - emit_max);
                }

                ((state_missle_explode*)(emit_max))->reset_quadrants((S32)current_tweak, current_tweak->droplet.vel_angle);

                for (U32 i = 0; i < emit_max; i++)
                {
                   // shrap->initCB(shrap, shared.missle_model, NULL, cb_droplet);
                }
            }
        }

        void cruise_bubble::state_missle_explode::cb_droplet(zFrag* frag, zFragAsset* asset)
        {
            F32 rand;
            F32 x, y, z, w;
            xVec3 vx, vy;

            frag->info.projectile.fasset->flags |= 0x22;
            // This obviously doesn't make sense. I'm guessing vy should
            // be assigned to the result of perturb_direction before vx
            // is assigned to vy, but can't get that to work because the
            // operator= gets inserted. As for state, I have no idea. Not
            // to mention the result of get_next_quadrant not being used.
            get_next_quadrant(x, y, z, w);
            state_missle_explode* state = (state_missle_explode*)&vy;
            state->perturb_direction(shared.hit_norm, x, y, z, w);

            *(S32*)(&vx.x) = *(S32*)(&vy.x);
            *(S32*)(&vx.y) = *(S32*)(&vy.y);
            *(S32*)(&vx.z) = *(S32*)(&vy.z);

            rand = xpow(xurand(), 1.0f / 3.0f);

            frag->info.projectile.path.initPos = get_missle_mat()->pos + (vx * ((rand * (current_tweak->droplet.dist_max - current_tweak->droplet.dist_min) + current_tweak->droplet.dist_min)));
            frag->info.projectile.path.initVel = vx * (((current_tweak->droplet.vel_max - current_tweak->droplet.vel_min) * xurand() + current_tweak->droplet.vel_min));
            frag->info.projectile.path.initVel.x = current_tweak->droplet.vel_perturb * (xurand() - 0.5f) + frag->info.projectile.path.initVel.x;
            frag->info.projectile.path.initVel.y = current_tweak->droplet.vel_perturb * (xurand() - 0.5f) + frag->info.projectile.path.initVel.y;
            frag->info.projectile.path.initVel.z = current_tweak->droplet.vel_perturb * (xurand() - 0.5f) + frag->info.projectile.path.initVel.z;
            frag->info.projectile.angVel = current_tweak->droplet.rot_vel_max * xurand();
            frag->info.projectile.alpha = 0.25f;
        }

        void cruise_bubble::state_missle_explode::apply_damage_hazards(F32 param)
        {
            HAZ_Iterate(&hazard_check, *(void**)&param, 0x208000);
        }

        cruise_bubble::state_missle_explode::cb_damage_ent::cb_damage_ent(F32 radius)
        {
            this->radius = radius;
        }

        void cruise_bubble::state_missle_explode::stop()
        {
            shared.flags &= 0xffffffbf;
        }

        cruise_bubble::state_enum cruise_bubble::state_missle_explode::update(F32 dt)
        {
            this->hit_time += dt;

            if (this->hit_time <= current_tweak->missle.explode.hit_duration)
            {
                F32 t = this->hit_time / current_tweak->missle.explode.hit_duration;
                this->apply_damage(t * current_tweak->missle.explode.hit_radius);
            }

            return STATE_MISSLE_EXPLODE;
        }

        void cruise_bubble::state_camera_aim::start()
        {
            capture_camera();
            xSndSelectListenerMode(SND_LISTENER_MODE_CAMERA);
            xCameraUpdate(&globals.camera, 0.001f);

            this->phi_vel = this->height_vel = this->dist_vel = 0.0f;
            xMat4x3* mat = &globals.camera.mat;
            xVec3& ploc = get_player_loc();
            F32 x = mat->pos.x - ploc.x;
            F32 y = mat->pos.z - ploc.z;
            xVec2 offset = {};
            offset.x = x;
            offset.y = y;

            this->phi = xatan2(offset.x, offset.y);
            this->height = mat->pos.y - ploc.y;
            this->dist = offset.length();
            this->control_delay = this->seize_delay = 0.0f;

            xQuatFromMat(&this->facing, mat);
            start_cam_mat = *mat;
            start_cam_mat.pos -= ploc;
        }

        void cruise_bubble::state_camera_aim::stop()
        {
            release_camera();
        }

        cruise_bubble::state_enum cruise_bubble::state_camera_aim::update(F32 dt)
        {
            this->control_delay += dt;
            bool control = false;
            if ((shared.flags & 0x20) && this->control_delay >= current_tweak->aim_delay)
            {
                control = true;
            }

            if (control)
            {
                this->move(dt);
            }
            else
            {
                this->stop(dt);
            }

            this->apply_motion();
            this->collide_inward();
            this->turn(dt);
            this->apply_turn();

            if (shared.flags & 0x8)
            {
                this->seize_delay += dt;
                if (this->seize_delay >= current_tweak->camera.seize.delay)
                {
                    return STATE_CAMERA_SEIZE;
                }
            }
            return STATE_CAMERA_AIM;
        }

        void cruise_bubble::state_camera_aim::apply_turn() const
        {
            xMat3x3 mat;

            xQuatToMat(&this->facing, &mat);
            xCameraRotate(&globals.camera, mat, 0.0f, 0.0f, 0.0f);
        }

        void cruise_bubble::state_camera_aim::stop(F32 dt)
        {
            xAccelStop(this->height, this->height_vel, current_tweak->camera.aim.accel, dt);
            xAccelStop(this->dist,   this->dist_vel,   current_tweak->camera.aim.accel, dt);
            xAccelStop(this->phi,    this->phi_vel,    current_tweak->camera.aim.stick_decel, dt);

            this->phi = xrmod(this->phi);
        }

        void cruise_bubble::state_camera_seize::start()
        {
            capture_camera();

            this->blend_time = 0.0f;
            this->start_loc = globals.camera.mat.pos;
            xQuatFromMat(&this->start_dir, &globals.camera.mat);
            this->last_s = 0.0f;
            this->fov = 0.0f;
            this->wipe_bubbles = 0.0f;

            show_hud();
            distort_screen(0.0f);
        }

        void cruise_bubble::state_camera_seize::stop()
        {
            release_camera();
            xCameraSetFOV(&globals.camera, shared.fov_default);
        }

        cruise_bubble::state_enum cruise_bubble::state_camera_seize::update(F32 dt)
        {
            this->blend_time += dt;
            if (this->blend_time >= current_tweak->camera.seize.blend_time)
            {
                return STATE_CAMERA_ATTACH;
            }

            F32 time_frac = this->blend_time / current_tweak->camera.seize.blend_time;
            F32 s = xSCurve(time_frac);
            this->update_move(s);
            this->update_turn(s);
            xVec3 offset = get_missle_mat()->pos - globals.camera.mat.pos;
            this->refresh_missle_alpha(offset.length());

            F32 dist = current_tweak->camera.seize.fov - shared.fov_default;
            xCameraSetFOV(&globals.camera, s * dist + shared.fov_default);
            distort_screen(s);

            return STATE_CAMERA_SEIZE;
        }

        void cruise_bubble::state_camera_seize::refresh_missle_alpha(F32 dt)
        {
            F32 fade = current_tweak->camera.seize.fade_dist;
            F32 hide = current_tweak->camera.seize.hide_dist;
            if (dt >= fade)
            {
                show_missle();
                shared.missle_model->Alpha = 1.0f;
            }
            else if (dt <= hide)
            {
                hide_missle();
                shared.missle_model->Flags |= 2;
            }
            else
            {
                dt = hide - dt;
                F32 dx = hide - fade;
                shared.missle_model->Alpha = dt / dx;
            }
        }

        void cruise_bubble::state_camera_attach::start()
        {
            capture_camera();
            xMat4x3* mat = get_missle_mat();
            xCameraMove(&globals.camera, mat->pos);
            xCameraRotate(&globals.camera, *mat, 0.0f, 0.0f,
                          0.0f);
            xCameraSetFOV(&globals.camera, current_tweak->camera.seize.fov);
            distort_screen(1.0f);
        }

        void cruise_bubble::state_camera_attach::stop()
        {
            xCameraSetFOV(&globals.camera, shared.fov_default);
            release_camera();
            hide_hud();
            distort_screen(0.0f);
        }

        cruise_bubble::state_enum cruise_bubble::state_camera_attach::update(F32 dt)
        {
            xMat4x3* mat = get_missle_mat();
            xCameraMove(&globals.camera, mat->pos);
            xCameraRotate(&globals.camera, *mat, 0.0f, 0.0f, 0.0f);
            this->lock_targets();

            return STATE_CAMERA_ATTACH;
        }

        void cruise_bubble::state_camera_attach::lock_targets()
        {
            cb_lock_targets targets;
            xBound bound;

            get_view_bound(bound);
            xGridCheckBound<cb_lock_targets>(colls_grid,     bound, bound.qcd, targets);
            xGridCheckBound<cb_lock_targets>(colls_oso_grid, bound, bound.qcd, targets);
            xGridCheckBound<cb_lock_targets>(npcs_grid,      bound, bound.qcd, targets);
            lock_hazard_targets();
        }

        void cruise_bubble::state_camera_attach::lock_hazard_targets()
        {
            HAZ_Iterate(hazard_check, 0, 0x208000);
        }

        bool cruise_bubble::state_camera_attach::hazard_check(NPCHazard& haz, void* context)
        {
            check_lock_target(&haz.pos_hazard);
            return 1;
        }

        void cruise_bubble::state_camera_survey::start()
        {
            if (camera_taken())
            {
                release_camera();
                this->time = current_tweak->camera.survey.duration;
                return;
            }

            capture_camera();
            this->time = 0.0f;
            this->init_path();
            this->move();
            this->start_sp = shared.sp;
        }

        void cruise_bubble::state_camera_survey::lerp(F32& a, F32 b, F32 c, F32 d) const
        {
            a = (b * (d - c)) + c;
        }

        void cruise_bubble::state_camera_survey::lerp(xVec3& a, F32 b, const xVec3& c, const xVec3& d) const
        {
            lerp(a.x, b, c.x, d.x);
            lerp(a.y, b, c.y, d.y);
            lerp(a.z, b, c.z, d.z);
        }

        void cruise_bubble::state_camera_survey::stop()
        {
            release_camera();
        }

        cruise_bubble::state_enum cruise_bubble::state_camera_survey::update(F32 dt)
        {
            this->time += dt;

            if (camera_taken())
            {
                return STATE_CAMERA_RESTORE;
            }

            if (this->time >= current_tweak->camera.survey.duration)
            {
                return STATE_CAMERA_RESTORE;
            }

            if (this->time >= current_tweak->camera.survey.min_duration &&
                ((globals.pad0->pressed & 0x100) || this->control_jerked()))
            {
                return STATE_CAMERA_RESTORE;
            }

            this->move();
            return STATE_CAMERA_SURVEY;
        }

        void cruise_bubble::state_camera_restore::start()
        {
            this->control_delay = 0.0f;
            hide_hud();

            if (!camera_leave())
            {
                xVec3 loc = get_player_loc() + start_cam_mat.pos;
                xCameraMove(&globals.camera, loc);
                xCameraRotate(&globals.camera, start_cam_mat, 0.0f,
                              0.0f, 0.0f);
            }

            if (camera_taken())
            {
                release_camera();
            }
            else
            {
                capture_camera();
            }

            xSndSelectListenerMode(SND_LISTENER_MODE_PLAYER);
        }

        void cruise_bubble::state_camera_restore::stop()
        {
            cruise_bubble::set_state(THREAD_PLAYER, STATE_INVALID);
            release_camera();
        }

        cruise_bubble::state_enum cruise_bubble::state_camera_restore::update(F32 dt)
        {
            this->control_delay += dt;
            if (this->control_delay >= current_tweak->camera.restore.control_delay)
            {
                return STATE_INVALID;
            }

            return STATE_CAMERA_RESTORE;
        }

        S32 cruise_bubble::state_camera_attach::cb_lock_targets::operator()(xEnt& ent, xGridBound& bound)
        {
            if (!(ent.chkby & 0x10))
            {
                return 1;
            }
            if (!(cruise_bubble::can_damage(&ent)))
            {
                return 1;
            }

            check_lock_target(xEntGetCenter(&ent));

            return 1;
        }

        missle_record_data::missle_record_data()
        {
        }
    } // namespace
} // namespace cruise_bubble

S32 zNPCCommon::IsHealthy()
{
    return 1;
}

WEAK F32 xSCurve(float val)
{
    if (val <= 0.5f)
    {
        return (2.0f * val * val);
    }
    F32 a = (1.0f - val);
    return (1.0f - (2.0f * a * a));
}
