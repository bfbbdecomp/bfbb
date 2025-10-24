#include "zNPCHazard.h"
#include <PowerPC_EABI_Support\MSL_C\MSL_Common\cmath>
#include <string.h>

#include "stdio.h"
#include "zEnt.h"
#include "zRenderState.h"

#include "zCamera.h"
#include "zEntButton.h"
#include "zEntCruiseBubble.h"
#include "zEntDestructObj.h"
#include "zEntPlayer.h"
#include "zEntTrigger.h"
#include "zGameExtras.h"
#include "zGlobals.h"
#include "zNPCTypeCommon.h"
#include "zPlatform.h"
#include "zTalkBox.h"

#include "iMath.h"
#include "xColor.h"
#include "xDecal.h"
#include "xFX.h"
#include "xMath.h"
#include "xMathInlines.h"
#include "xMath3.h"
#include "xModel.h"
#include "xSnd.h"
#include "xString.h"
#include "xstransvc.h"
#include "xVec3.h"

// Taken from zEntCruiseBubble.s
// Defining these here makes the stringBase0 offsets match in the later functions.
static char* str1 = "Idle01";
static char* str2 = "Idle02";
static char* str3 = "Idle03";
static char* str4 = "Idle04";
static char* str5 = "Idle05";
static char* str6 = "Idle06";
static char* str7 = "Idle07";
static char* str8 = "Idle08";
static char* str9 = "Idle09";
static char* str10 = "Idle10";
static char* str11 = "Idle11";
static char* str12 = "Idle12";
static char* str13 = "Idle13";
static char* str14 = "SlipIdle01";
static char* str15 = "Inactive01";
static char* str16 = "Inactive02";
static char* str17 = "Inactive03";
static char* str18 = "Inactive04";
static char* str19 = "Inactive05";
static char* str20 = "Inactive06";
static char* str21 = "Inactive07";
static char* str22 = "Inactive08";
static char* str23 = "Inactive09";
static char* str24 = "Inactive10";
static char* str25 = "Walk01";
static char* str26 = "Run01";
static char* str27 = "Run02";
static char* str28 = "Run03";
static char* str29 = "Land01";
static char* str30 = "LandRun01";
static char* str31 = "LandHigh01";
static char* str32 = "WallLand01";
static char* str33 = "Hit01";
static char* str34 = "Hit02";
static char* str35 = "Hit03";
static char* str36 = "Hit04";
static char* str37 = "Hit05";
static char* str38 = "SB_cruise_start";
static char* str39 = "SB_cruise_hit";
static char* str40 = "SB_cruise_nav_loop";
static char* str41 = "cruise_bubble_bind.MINF";
static char* str42 = "lightning";
static char* str43 = "Wake Ribbon 0";
static char* str44 = "Player|Cruise Bubble|Wake Ribbon 0|";
static char* str45 = "Wake Ribbon 1";
static char* str46 = "Player|Cruise Bubble|Wake Ribbon 1|";
static char* str47 = "par_cruise_explode";
static char* str48 = "Cruise Bubble Explosion";
static char* str49 = "cruise_bubble_droplet_shrapnel";
static char* str50 = ".minf";
static char* str51 = ".dff";
static char* str52 = "ui_3dicon_reticle";
static char* str53 = "ui_3dicon_target_lock";
static char* str54 = "ui_3dicon_missile_frame02";
static char* str55 = "%02d:%02d";
static char* str56 = "aura2";
static char* str57 = "aim_delay";
static char* str58 = "player.halt_time";
static char* str59 = "player.aim.turn_speed";
static char* str60 = "player.aim.anim_delta";
static char* str61 = "player.fire.delay_wand";
static char* str62 = "missle.life";
static char* str63 = "missle.hit_dist";
static char* str64 = "missle.crash_angle";
static char* str65 = "missle.collide_twist";
static char* str66 = "missle.hit_tests";
static char* str67 = "missle.appear.delay_show";
static char* str68 = "missle.appear.delay_fly";
static char* str69 = "missle.appear.offset";
static char* str70 = "missle.fly.accel";
static char* str71 = "missle.fly.max_vel";
static char* str72 = "missle.fly.engine_pitch_max";
static char* str73 = "missle.fly.engine_pitch_sensitivity";
static char* str74 = "missle.fly.flash_interval";
static char* str75 = "missle.fly.turn.xdelta";
static char* str76 = "missle.fly.turn.ydelta";
static char* str77 = "missle.fly.turn.xdecay";
static char* str78 = "missle.fly.turn.ydecay";
static char* str79 = "missle.fly.turn.ybound";
static char* str80 = "missle.fly.turn.roll_frac";
static char* str81 = "missle.explode.hit_radius";
static char* str82 = "missle.explode.hit_duration";
static char* str83 = "camera.aim.dist";
static char* str84 = "camera.aim.height";
static char* str85 = "camera.aim.pitch";
static char* str86 = "camera.aim.accel";
static char* str87 = "camera.aim.max_vel";
static char* str88 = "camera.aim.stick_decel";
static char* str89 = "camera.aim.stick_accel";
static char* str90 = "camera.aim.stick_max_vel";
static char* str91 = "camera.aim.turn_speed";
static char* str92 = "camera.seize.delay";
static char* str93 = "camera.seize.blend_time";
static char* str94 = "camera.seize.fade_dist";
static char* str95 = "camera.seize.hide_dist";
static char* str96 = "camera.seize.fov";
static char* str97 = "camera.survey.duration";
static char* str98 = "camera.survey.min_duration";
static char* str99 = "camera.survey.min_dist";
static char* str100 = "camera.survey.cut_dist";
static char* str101 = "camera.survey.drift_dist";
static char* str102 = "camera.survey.drift_softness";
static char* str103 = "camera.survey.jerk_offset";
static char* str104 = "camera.survey.jerk_deflect";
static char* str105 = "camera.restore.control_delay";
static char* str106 = "material.env_alpha";
static char* str107 = "material.env_coeff";
static char* str108 = "material.fresnel_alpha";
static char* str109 = "material.fresnel_coeff";
static char* str110 = "reticle.dist_min";
static char* str111 = "reticle.dist_max";
static char* str112 = "reticle.ang_show";
static char* str113 = "reticle.ang_hide";
static char* str114 = "reticle.delay_retarget";
static char* str115 = "trail.sample_rate";
static char* str116 = "trail.bubble_rate";
static char* str117 = "trail.bubble_emit_radius";
static char* str118 = "trail.wake_emit_radius";
static char* str119 = "blast.emit";
static char* str120 = "blast.radius";
static char* str121 = "blast.vel";
static char* str122 = "blast.rand_vel";
static char* str123 = "droplet.dist_min";
static char* str124 = "droplet.dist_max";
static char* str125 = "droplet.emit_min";
static char* str126 = "droplet.emit_max";
static char* str127 = "droplet.vel_min";
static char* str128 = "droplet.vel_max";
static char* str129 = "droplet.vel_perturb";
static char* str130 = "droplet.vel_angle";
static char* str131 = "droplet.rot_vel_max";
static char* str132 = "hud.glow_size";
static char* str133 = "hud.time_fade";
static char* str134 = "hud.time_glow";
static char* str135 = "hud.wind.size";
static char* str136 = "hud.wind.du";
static char* str137 = "hud.wind.dv";
static char* str138 = "hud.reticle.size";
static char* str139 = "hud.target.size";
static char* str140 = "hud.timer.font";
static char* str141 = "hud.timer.font_width";
static char* str142 = "hud.timer.font_height";
static char* str143 = "hud.timer.x";
static char* str144 = "hud.timer.y";
static char* str145 = "hud.timer.glow_size";
static char* str146 = "dialog.freq";
static char* str147 = "dialog.decay";
static char* str148 = "dialog.min_freq";
static char* str149 = "gloss_edge";
static char* str150 = "rainbowfilm_smooth32";
static char* str151 = "cruise_bubble_aim";
static char* str152 = "cruise_bubble_fire";
static char* str153 = "cruise_bubble_idle";
static char* str154 = "cruise_bubble_aim cruise_bubble_fire cruise_bubble_idle";
static char* str155 = "Cruise Bubble";
static char* str156 = "fire";
static char* str157 = "fly";

namespace cruise_bubble
{
    extern basic_rect<F32> screen_bounds;
    // basic_rect default_adjust;
    // char buffer[16];
    // char buffer[16];
    extern const char* start_anim_states[37]; // string array of names

    extern fixed_queue<missle_record_data, 127> missle_record;
    extern xFXRibbon wake_ribbon[2];
    extern xDecalEmitter explode_decal;
    extern const xFXRibbon::curve_node wake_ribbon_curve[2];
    extern const xFXRibbon::curve_node cheat_wake_ribbon_curve[2];
    extern const xDecalEmitter::curve_node explode_curve[3];
    extern const xDecalEmitter::curve_node cheat_explode_curve[3];
    extern sound_config sounds[4];
    // quadrant_set qzone;

    extern struct _class_17
    {
        bool hiding;
        F32 alpha;
        F32 alpha_vel;
        F32 glow;
        F32 glow_vel;

        // Offset 0x14
        struct _class_21
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
    // void (*xAnimDefaultBeforeEnter)(xAnimPlay*, xAnimState*);
    // U32 (*check_anim_aim)(xAnimTransition*, xAnimSingle*, void*);
    // zGlobals globals;
    // RpAtomic* (*AtomicDefaultRenderCallBack)(RpAtomic*);
    // RpAtomic* (*custom_bubble_render)(RpAtomic*);
    // iColor_tag g_WHITE;
    // U32 gActiveHeap;
    // _anon0 __vt__Q313cruise_bubble30 @unnamed @zEntCruiseBubble_cpp @20state_camera_restore;
    // _anon5 __vt__Q313cruise_bubble30 @unnamed @zEntCruiseBubble_cpp @10state_type;
    // _anon6 __vt__Q313cruise_bubble30 @unnamed @zEntCruiseBubble_cpp @19state_camera_survey;
    // _anon1 __vt__Q313cruise_bubble30 @unnamed @zEntCruiseBubble_cpp @19state_camera_attach;
    // _anon9 __vt__Q313cruise_bubble30 @unnamed @zEntCruiseBubble_cpp @18state_camera_seize;
    // _anon10 __vt__Q313cruise_bubble30 @unnamed @zEntCruiseBubble_cpp @16state_camera_aim;
    // _anon3 __vt__Q313cruise_bubble30 @unnamed @zEntCruiseBubble_cpp @20state_missle_explode;
    // _anon7 __vt__Q313cruise_bubble30 @unnamed @zEntCruiseBubble_cpp @16state_missle_fly;
    // _anon2 __vt__Q313cruise_bubble30 @unnamed @zEntCruiseBubble_cpp @19state_missle_appear;
    // _anon4 __vt__Q313cruise_bubble30 @unnamed @zEntCruiseBubble_cpp @17state_player_wait;
    // _anon8 __vt__Q313cruise_bubble30 @unnamed @zEntCruiseBubble_cpp @17state_player_fire;
    // _anon11 __vt__Q313cruise_bubble30 @unnamed @zEntCruiseBubble_cpp @16state_player_aim;
    // _anon12 __vt__Q313cruise_bubble30 @unnamed @zEntCruiseBubble_cpp @17state_player_halt;
    // RpAtomic* (*gAtomicRenderCallBack)(RpAtomic*);
    // U32 gFXSurfaceFlags;
    // xVec3 m_UnitAxisY;
    // xGrid npcs_grid;
    // xGrid colls_oso_grid;
    // xGrid colls_grid;
    // U8 (*hazard_check)(NPCHazard&, void*);
    // xQCControl xqc_def_ctrl;
    // void (*SweptSphereHitsCameraEnt)(xScene*, xRay3*, xQCData*, xEnt*, void*);
    // void (*cb_droplet)(zFrag*, zFragAsset*);
    // U8 (*hazard_check)(NPCHazard&, void*);
    // U8 (*hazard_check)(NPCHazard&, void*);
    // S32 gGridIterActive;
} // namespace cruise_bubble

extern F32 zEntCruiseBubble_f_0_0; // 0.0
extern F32 zEntCruiseBubble_f_1_0; // 1.0
extern F32 zEntCruiseBubble_f_0_5; // 0.5
extern F32 zEntCruiseBubble_f_3_0; // 3.0
extern F32 zEntCruiseBubble_f_0_25; // 0.25
extern F32 zEntCruiseBubble_f_255_0; // 255.0
extern F32 zEntCruiseBubble_f_n1_0; // -1.0
extern F32 zEntCruiseBubble_f_100_0; // 100.0
extern F32 zEntCruiseBubble_f_n0_00001; // -0.00001
extern F32 zEntCruiseBubble_f_0_00001; // 0.00001
extern F32 zEntCruiseBubble_f_0_2; // 0.2
extern F32 zEntCruiseBubble_f_0_05; // 0.05
extern F32 zEntCruiseBubble_f_0_01; // 0.01
extern F32 zEntCruiseBubble_f_1000000000_0; // 1000000000.0
extern F32 zEntCruiseBubble_f_0_0667; // 0.0667
extern F32 zEntCruiseBubble_f_6_0; // 6.0
extern F32 zEntCruiseBubble_f_0_3; // 0.3
extern F32 zEntCruiseBubble_f_30_0; // 30.0
extern F32 zEntCruiseBubble_f_0_017; // 0.017 deg2rad
extern F32 zEntCruiseBubble_f_60_0; // 60.0
extern F32 zEntCruiseBubble_f_0_025; // 0.025
extern F32 zEntCruiseBubble_f_0_1333; // 0.1333
extern F32 zEntCruiseBubble_f_0_667; // 0.667
extern F32 zEntCruiseBubble_f_n0_049; // -0.049
extern F32 zEntCruiseBubble_f_1_728; // 1.728
extern F32 zEntCruiseBubble_f_0_922; // 0.922
extern F32 zEntCruiseBubble_f_12_0; // 12.0
extern F32 zEntCruiseBubble_f_10_0; // 10.0
extern F32 zEntCruiseBubble_f_0_005; // 0.005
extern F32 zEntCruiseBubble_f_2_0; // 2.0
extern F32 zEntCruiseBubble_f_5_0; // 5.0
extern F32 zEntCruiseBubble_f_4_0; // 4.0
extern F32 zEntCruiseBubble_f_0_1; // 0.1
extern F32 zEntCruiseBubble_f_0_6; // 0.6
extern F32 zEntCruiseBubble_f_1_5708; // 1.5708 90deg
extern F32 zEntCruiseBubble_f_1_5; // 1.5
extern F32 zEntCruiseBubble_f_n10_0; // -10.0
extern F32 zEntCruiseBubble_f_n90_0; // -90.0
extern F32 zEntCruiseBubble_f_90_0; // 90.0
extern F32 zEntCruiseBubble_f_720_0; // 720.0
extern F32 zEntCruiseBubble_f_360_0; // 360.0
extern F32 zEntCruiseBubble_f_135_0; // 135.0
extern F32 zEntCruiseBubble_f_0_001; // 0.001
extern F32 zEntCruiseBubble_f_95_0; // 95.0
extern F32 zEntCruiseBubble_f_180_0; // 180.0
extern F32 zEntCruiseBubble_f_8_0; // 8.0
extern F32 zEntCruiseBubble_f_0_99; // 0.1
extern F32 zEntCruiseBubble_f_0_8; // 0.8
extern F32 zEntCruiseBubble_f_0_75; // 0.75
extern F32 zEntCruiseBubble_f_10000_0; // 10000.0
extern F32 zEntCruiseBubble_f_22_5; // 22.5
extern F32 zEntCruiseBubble_f_n100000_0; // -100000.0
extern F32 zEntCruiseBubble_f_100000_0; // 100000.0
extern F32 zEntCruiseBubble_f_n1000000000_0; // -1000000000.0
extern F32 zEntCruiseBubble_f_0_0275; // 0.0275
extern F32 zEntCruiseBubble_f_0_047; // 0.047
extern F32 zEntCruiseBubble_f_0_78; // 0.78
extern F32 zEntCruiseBubble_f_0_86; // 0.86
extern F32 zEntCruiseBubble_f_0_15; // 0.15
extern F32 zEntCruiseBubble_f_0_0001; // 0.15
extern F32 zEntCruiseBubble_f_1_0e38; // 1.0 * 10^38
extern F32 zEntCruiseBubble_f_3_1415; // 3.1415 ~ PI
extern F32 zEntCruiseBubble_f_6_2832; // 6.2832 ~ 2PI
extern F32 zEntCruiseBubble_f_n3_1415; // -3.1415 ~ -PI
extern F32 zEntCruiseBubble_f_0_000001; // 0.000001

extern iColor_tag zEntCruiseBubble_color_80_00_00_FF; // 128, 0, 0, 255
extern iColor_tag zEntCruiseBubble_color_FF_14_14_FF; // 255, 20, 20, 255

extern xVec3 zEntCruiseBubble_xVec3_0_0_0; // {0.0, 0.0, 0.0}

extern xVec2 lbl_803D0830;

namespace cruise_bubble
{
    extern tweak_group* current_tweak;

    namespace
    {
        extern struct _class_36
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
            struct _class_45
            {
                F32 samples;
                F32 bubbles;
                xMat4x3 mat;
                xQuat dir;
            } trail;
            struct _class_6
            {
                struct _class_8
                {
                    xAnimState* aim;
                    xAnimState* fire;
                    xAnimState* idle;
                } player;
                struct _class_16
                {
                    // Offset: 0x170
                    xAnimState* fire;
                    xAnimState* fly;
                } missle;
            } astate;
            struct _class_25
            {
                struct _class_28
                {
                    xAnimTransition* aim;
                    xAnimTransition* fire;
                    xAnimTransition* idle;
                    xAnimTransition* end;
                } player;
                struct _class_33
                {
                    xAnimTransition* fly;
                } missle;
            } atran;
        } shared;

        xMat4x3 start_cam_mat;
        tweak_group normal_tweak;
        tweak_group cheat_tweak;
        extern xBase base;

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

                if (s->streamed != 0)
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
            return zCameraGetConvers() != 0 || (zCameraIsTrackingDisabled() & 0xfffffffd) != 0;
        }

        bool camera_leave()
        {
            return zCameraGetConvers() != 0;
        }

        void start_damaging()
        {
            shared.hits_size = 0;
        }

        U8 can_damage(xEnt* ent)
        {
            if (ent == NULL)
            {
                return false;
            }
            if ((ent->moreFlags & 0x10) == 0)
            {
                return false;
            }
            if (ent->baseType == eBaseTypeDestructObj &&
                zEntDestructObj_isDestroyed((zEntDestructObj*)ent) != 0)
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
                        if (link->srcEvent == 0x201)
                        {
                            want_enter = true;
                        }
                        else if (link->srcEvent == 0x202)
                        {
                            want_exit = true;
                        }
                    }
                    want_enter = want_enter && (trig.entered & 0x2) == 0;
                    want_exit = want_exit && (trig.entered & 0x2) != 0;

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
                            zEntEvent(&trig, 0x201);
                        }
                        else if (want_exit && !inside)
                        {
                            zEntEvent(&trig, 0x202);
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

                    if ((trig->entered & 0x2) != 0)
                    {
                        trig->entered &= 0xfffffffd;

                        link = trig->link;
                        end_link = link + trig->linkCount;
                        for (; link != end_link; ++link)
                        {
                            if (link->srcEvent == 0x202)
                            {
                                zEntEvent(trig, 0x202);
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

        U32 check_anim_aim(xAnimTransition*, xAnimSingle*, void*)
        {
            return false;
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
            if ((ang >= zEntCruiseBubble_f_n0_00001) && (ang <= zEntCruiseBubble_f_0_00001))
            {
                ang = zEntCruiseBubble_f_0_0;
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
                lock_target(find_locked_target(target), target, zEntCruiseBubble_f_1_0);
            }
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

        xMat4x3* get_missle_mat()
        {
            return (xMat4x3*)shared.missle_model->Mat;
        }

        xMat4x3* get_player_mat()
        {
            return (xMat4x3*)globals.player.ent.model->Mat;
        }

        xVec3& get_player_loc()
        {
            return *(xVec3*)&globals.player.ent.model->Mat->pos;
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

                if (shared.player_motion.length2() > zEntCruiseBubble_f_0_25)
                {
                    stop = true;
                }
            }

            if (stop)
            {
                cruise_bubble::kill(true, false);
            }
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

		void init_states()
		{
			static state_player_halt player_halt;
			shared.states[0] = (state_type*)&player_halt;

			static state_player_aim player_aim;
			shared.states[1] = (state_type*)&player_aim;

			static state_player_fire player_fire;
			shared.states[2] = (state_type*)&player_fire;

			static state_player_wait player_wait;
			shared.states[3] = (state_type*)&player_wait;

			static state_missle_appear missle_appear;
			shared.states[4] = (state_type*)&missle_appear;

			static state_missle_fly missle_fly;
			shared.states[5] = (state_type*)&missle_fly;

			static state_missle_explode missle_explode;
			shared.states[6] = (state_type*)&missle_explode;

			static state_camera_aim camera_aim;
			shared.states[7] = (state_type*)&camera_aim;

			static state_camera_seize camera_seize;
			shared.states[8] = (state_type*)&camera_seize;

			static state_camera_attach camera_attach;
			shared.states[9] = (state_type*)&camera_attach;

			static state_camera_survey camera_survey;
			shared.states[10] = (state_type*)&camera_survey;

			static state_camera_restore camera_return;
			shared.states[11] = (state_type*)&camera_return;
		}

        void init_debug()
        {
            // empty
        }

        void init_shrapnel()
        {
            shared.droplet_shrapnel =
                (zShrapnelAsset*)xSTFindAsset(xStrHash("cruise_bubble_droplet_shrapnel"), NULL);
        }

        void init_wake_ribbons()
        {
            wake_ribbon[0].init("Wake Ribbon 0", "Player|Cruise Bubble|Wake Ribbon 0|");
            wake_ribbon[1].init("Wake Ribbon 1", "Player|Cruise Bubble|Wake Ribbon 1|");
            cruise_bubble::reset_wake_ribbons();
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
            distort_screen(zEntCruiseBubble_f_0_0);
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

        void lerp(U8& x, F32 t, U8 a, U8 b)
        {
            x = zEntCruiseBubble_f_0_5 + ((F32)a + t * ((F32)b - (F32)a));
        }

        void update_hud(F32 dt)
        {
            if (hud.gizmos_used == 0)
            {
                return;
            }

            hud.alpha = range_limit<F32>(hud.alpha_vel * dt + hud.alpha, zEntCruiseBubble_f_0_0,
                                         zEntCruiseBubble_f_1_0);
            hud.glow = range_limit<F32>(hud.glow_vel * dt + hud.glow, zEntCruiseBubble_f_0_0,
                                        zEntCruiseBubble_f_1_0);

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
                if ((hud.gizmo[i].flags & 0x1) == 0)
                {
                    hud.gizmo[i].alpha_vel = zEntCruiseBubble_f_n1_0 / current_tweak->hud.time_fade;
                }
            }

            S32 i = 0;
            while (i < hud.gizmos_used)
            {
                update_gizmo(hud.gizmo[i], dt);
                if (hud.gizmo[i].alpha <= zEntCruiseBubble_f_0_0)
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

        void show_gizmo(hud_gizmo& gizmo, const basic_rect<F32>& rect, xModelInstance* m)
        {
            gizmo.flags = 0x1;
            gizmo.bound = rect;
            gizmo.alpha = zEntCruiseBubble_f_0_0;
            gizmo.alpha_vel = zEntCruiseBubble_f_1_0 / current_tweak->hud.time_fade;
            gizmo.glow = zEntCruiseBubble_f_1_0;
            gizmo.glow_vel = zEntCruiseBubble_f_n1_0 / current_tweak->hud.time_glow;
            gizmo.opacity = zEntCruiseBubble_f_1_0;
            gizmo.target = NULL;
            gizmo.model = m;
        }

        void update_gizmo(cruise_bubble::hud_gizmo& gizmo, F32 dt)
        {
            gizmo.alpha = range_limit<F32>(gizmo.alpha_vel * dt + gizmo.alpha, zEntCruiseBubble_f_0_0,
                                           zEntCruiseBubble_f_1_0);
            gizmo.glow = range_limit<F32>(gizmo.glow_vel * dt + gizmo.glow, zEntCruiseBubble_f_0_0,
                                          zEntCruiseBubble_f_1_0);
        }

        void flash_hud()
        {
            // nice meme
            hud.glow = zEntCruiseBubble_f_1_0;
            hud.glow_vel = zEntCruiseBubble_f_n1_0 / current_tweak->hud.time_glow;
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
                    ((S32)(zEntCruiseBubble_f_100_0 * life)) - (100 * (S32)life));

            F32 dsize = glow * current_tweak->hud.timer.glow_size;
            // zEntCruiseBubble_f_0_0 is loaded too early, should be just before the call
            xfont font =
                xfont::create(current_tweak->hud.timer.font, current_tweak->hud.timer.font_width + dsize,
                              current_tweak->hud.timer.font_height + dsize, zEntCruiseBubble_f_0_0, g_WHITE,
                              screen_bounds);
            // register use for copying fields into font off, also causes a larger stack frame
            // also the color tags are loaded too early, should be just before the call
            cruise_bubble::lerp(font.color, glow, zEntCruiseBubble_color_80_00_00_FF,
                                zEntCruiseBubble_color_FF_14_14_FF);
            font.color.a = (S32)(zEntCruiseBubble_f_255_0 * alpha + zEntCruiseBubble_f_0_5);

            basic_rect<F32> bound = font.bounds(buffer);
            F32 x = current_tweak->hud.timer.x - bound.x - zEntCruiseBubble_f_0_5 * bound.w;
            F32 y = current_tweak->hud.timer.y - bound.y - zEntCruiseBubble_f_0_5 * bound.h;

            font.render(buffer, x, y);
        }

        void lerp(iColor_tag& c, F32 t, iColor_tag a, iColor_tag b)
        {
            lerp(c.r, t, a.r, b.r);
            lerp(c.g, t, a.g, b.g);
            lerp(c.b, t, a.b, b.b);
            lerp(c.a, t, a.a, b.a);
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
            gizmo->alpha_vel = zEntCruiseBubble_f_1_0 / current_tweak->hud.time_fade;
            gizmo->model = hud.model.target;
            gizmo->target = target;
            gizmo->opacity = opacity;
        }

        void update_trail(F32 dt)
        {
            // will match once file complete
            // casting from S32 to float uses a float constant which cannot be extern'd

            if ((shared.flags & 0x80) == 0)
            {
                return;
            }

            shared.trail.samples += dt * current_tweak->trail.sample_rate;
            S32 samples = (S32)shared.trail.samples;

            if (samples <= 0)
            {
                shared.trail.samples = zEntCruiseBubble_f_0_0;
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
            F32 ds = zEntCruiseBubble_f_1_0 / (F32)samples;
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
            reticle_bound.center(zEntCruiseBubble_f_0_5, zEntCruiseBubble_f_0_5);
            show_gizmo(hud.gizmo[0], reticle_bound, hud.model.reticle);

            hud.model.wind->Alpha = zEntCruiseBubble_f_0_0;
            // scheduling off for this float
            hud.alpha = zEntCruiseBubble_f_0_0;
            hud.alpha_vel = zEntCruiseBubble_f_1_0 / current_tweak->hud.time_fade;

            flash_hud();
        }

        void hide_hud()
        {
            hud.gizmos_used = 0;
            // float scheduling ...
            hud.model.wind->Alpha = zEntCruiseBubble_f_0_0;
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

        void init_hud()
        {
            // should use stbu here and save an addi instruction
            // which should also fix the rest of the function by correcting offsets

            hud.hiding = false;
            hud.alpha = zEntCruiseBubble_f_0_0;
            hud.alpha_vel = zEntCruiseBubble_f_0_0;
            hud.glow = zEntCruiseBubble_f_0_0;
            hud.gizmos_used = 0;

            hud.model.reticle = load_model(xStrHash("ui_3dicon_reticle"));
            hud.model.target = load_model(xStrHash("ui_3dicon_target_lock"));
            hud.model.wind = load_model(xStrHash("ui_3dicon_missile_frame02"));

            hud.uv_wind.init(hud.model.wind->Data);
            hud.uv_wind.offset_vel.assign(current_tweak->hud.wind.du, current_tweak->hud.wind.dv);
        }

        void render_debug()
        {
            // empty
        }

        void render_missle()
        {
            xModelInstance* m = shared.missle_model;
            if ((m->Flags & 1) == 0)
            {
                return;
            }
            xModelRender(m);
        }

        void reset_explode_decal()
        {
            explode_decal.set_default_config();

            explode_decal.cfg.flags = 0x3;
            explode_decal.cfg.blend_src = 5;
            explode_decal.cfg.blend_dst = 2;

            if ((shared.flags & 0x200) == 0)
            {
                explode_decal.cfg.life_time = zEntCruiseBubble_f_0_5;
                explode_decal.set_curve(&explode_curve[0], 3);
                explode_decal.set_texture("par_cruise_explode");
            }
            else
            {
                explode_decal.cfg.life_time = zEntCruiseBubble_f_0_5;
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
            explode_decal.cfg.life_time = zEntCruiseBubble_f_0_5;
            explode_decal.cfg.blend_src = 5;
            explode_decal.cfg.blend_dst = 2;

            explode_decal.set_curve(explode_curve, 3);
            explode_decal.set_texture("par_cruise_explosion");
            explode_decal.refresh_config();
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

        void update_missle(xScene& s, F32 dt)
        {
            xModelInstance* m = shared.missle_model;
            if ((m->Flags & 2) == 0)
            {
                return;
            }
            xModelUpdate(m, dt);
            xModelEval(m);
            update_trail(dt);
        }

        xVec3 world_to_screen(const xVec3& loc)
        {
            iCameraUpdatePos(globals.camera.lo_cam, &globals.camera.mat);

            xVec3 world_loc;
            xMat4x3* view_mat = (xMat4x3*)&globals.camera.lo_cam->viewMatrix;
            xMat4x3Toworld(&world_loc, view_mat, &loc);

            xVec3 screen_loc;
            F32 iz = zEntCruiseBubble_f_1_0 / world_loc.z;
            screen_loc.assign(world_loc.x * iz, world_loc.y * iz, zEntCruiseBubble_f_1_0);

            return screen_loc;
        }

        void damage_entity(xEnt& ent, const xVec3& loc, const xVec3& dir, const xVec3& hit_norm,
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
                case 0xc:
                    if ((((zPlatform*)&ent)->passet->paddle.paddleFlags & 0x20) == 0)
                    {
                        return;
                    }

                    xCollis coll;
                    coll.optr = &ent;
                    coll.mptr = ent.collModel != NULL ? ent.collModel : ent.model;

                    if (explosive != 0)
                    {
                        coll.flags = 0x600;

                        xSphere o;
                        o.center = loc;
                        o.r = radius;
                        xSphereHitsBound(&o, &ent.bound, &coll);

                        if ((coll.flags & 0x1) == 0)
                        {
                            return;
                        }

                        if (ent.collLev == 0x5)
                        {
                            xSphereHitsModel(&o, coll.mptr, &coll);

                            if ((coll.flags & 0x1) == 0)
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

            zEntEvent(&ent, 0x1c7);
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

            if ((shared.flags & 0x200) == 0)
            {
                wake_ribbon[0].set_texture("lightning");
                wake_ribbon[1].set_texture("lightning");
                wake_ribbon[0].set_curve(&wake_ribbon_curve[0], 2);
                wake_ribbon[1].set_curve(&wake_ribbon_curve[0], 2);

                wake_ribbon[0].cfg.life_time = zEntCruiseBubble_f_3_0;
            }
            else
            {
                wake_ribbon[0].set_texture("lightning");
                wake_ribbon[1].set_texture("lightning");
                wake_ribbon[0].set_curve(&cheat_wake_ribbon_curve[0], 2);
                wake_ribbon[1].set_curve(&cheat_wake_ribbon_curve[0], 2);

                wake_ribbon[0].cfg.life_time = zEntCruiseBubble_f_3_0;
            }
            wake_ribbon[0].cfg.pivot = zEntCruiseBubble_f_1_0;
            wake_ribbon[1].cfg = wake_ribbon[0].cfg;

            wake_ribbon[0].refresh_config();
            wake_ribbon[1].refresh_config();
        }

    } // namespace
} // namespace cruise_bubble

void cruise_bubble::state_type::start()
{
    // empty
}

void cruise_bubble::state_type::stop()
{
    // empty
}

void cruise_bubble::state_type::abort()
{
    // empty
}

void cruise_bubble::state_type::render()
{
    // empty
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

bool cruise_bubble::uv_animated_model::init(RpAtomic* m)
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

    this->offset.assign(zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_0_0);
    this->offset_vel.assign(zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_0_0);
    return true;
}

bool cruise_bubble::uv_animated_model::clone_uv(RwTexCoords*& coords, S32& size, RpAtomic* m) const
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

bool cruise_bubble::uv_animated_model::get_uv(RwTexCoords*& coords, S32& size, RpAtomic* m) const
{
    coords = NULL;
    size = 0;

    RpGeometry* geo = m->geometry;
    if (geo == 0)
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

void cruise_bubble::uv_animated_model::update(F32 dt)
{
    if (zEntCruiseBubble_f_0_0 == this->offset_vel.x &&
        zEntCruiseBubble_f_0_0 == this->offset_vel.y)
    {
        return;
    }

    this->offset += this->offset_vel * dt;
    this->offset.x = xfmod(this->offset.x, zEntCruiseBubble_f_1_0);
    this->offset.y = xfmod(this->offset.y, zEntCruiseBubble_f_1_0);
    this->refresh();
}

void cruise_bubble::tweak_group::load(xModelAssetParam* params, U32 size)
{
    this->register_tweaks(true, params, size, NULL);
}

void cruise_bubble::tweak_group::register_tweaks(bool init, xModelAssetParam* ap, U32 apsize,
                                                 const char*)
{
    if (init)
    {
        this->aim_delay;
        this->aim_delay = zEntCruiseBubble_f_0_2;
        auto_tweak::load_param<F32, F32>(this->aim_delay, 1.0f, zEntCruiseBubble_f_0_0, 1.0f, ap,
                                         apsize, "aim_delay");
    }

    if (init)
    {
        this->player.halt_time = zEntCruiseBubble_f_0_5;
        auto_tweak::load_param<F32, F32>(this->player.halt_time, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_1_0, ap, apsize,
                                         "player.halt_time");
    }

    if (init)
    {
        this->player.aim.turn_speed = zEntCruiseBubble_f_0_05;
        auto_tweak::load_param<F32, F32>(this->player.aim.turn_speed, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_0_01, zEntCruiseBubble_f_1000000000_0,
                                         ap, apsize, "player.aim.turn_speed");
    }

    if (init)
    {
        this->player.aim.anim_delta = zEntCruiseBubble_f_0_5;
        auto_tweak::load_param<F32, F32>(this->player.aim.anim_delta, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_1000000000_0,
                                         ap, apsize, "player.aim.anim_delta");
    }

    if (init)
    {
        this->player.fire.delay_wand = zEntCruiseBubble_f_0_0667;
        auto_tweak::load_param<F32, F32>(this->player.fire.delay_wand, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_100_0, ap,
                                         apsize, "player.fire.delay_wand");
    }

    if (init)
    {
        this->missle.life = zEntCruiseBubble_f_6_0;
        auto_tweak::load_param<F32, F32>(this->missle.life, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_0_01, zEntCruiseBubble_f_1000000000_0,
                                         ap, apsize, "missle.life");
    }

    if (init)
    {
        this->missle.hit_dist = zEntCruiseBubble_f_0_3;
        auto_tweak::load_param<F32, F32>(this->missle.hit_dist, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_1_0, ap, apsize,
                                         "missle.hit_dist");
    }

    if (init)
    {
        this->missle.crash_angle = zEntCruiseBubble_f_30_0;
        auto_tweak::load_param<F32, F32>(this->missle.crash_angle, zEntCruiseBubble_f_0_017,
                                         zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_60_0, ap,
                                         apsize, "missle.crash_angle");
    }

    if (init)
    {
        this->missle.collide_twist = zEntCruiseBubble_f_0_025;
        auto_tweak::load_param<F32, F32>(this->missle.collide_twist, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_1_0, ap, apsize,
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
        this->missle.appear.delay_show = zEntCruiseBubble_f_0_1333;
        auto_tweak::load_param<F32, F32>(this->missle.appear.delay_show, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_100_0, ap,
                                         apsize, "missle.appear.delay_show");
    }

    if (init)
    {
        this->missle.appear.delay_fly = zEntCruiseBubble_f_0_667;
        auto_tweak::load_param<F32, F32>(this->missle.appear.delay_fly, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_100_0, ap,
                                         apsize, "missle.appear.delay_fly");
    }

    if (init)
    {
        this->missle.appear.offset = xVec3::create(
            zEntCruiseBubble_f_n0_049, zEntCruiseBubble_f_1_728, zEntCruiseBubble_f_0_922);
        auto_tweak::load_param<xVec3, S32>(this->missle.appear.offset, 0, 0, 0, ap, apsize,
                                           "missle.appear.offset");
    }

    if (init)
    {
        this->missle.fly.accel = zEntCruiseBubble_f_6_0;
        auto_tweak::load_param<F32, F32>(this->missle.fly.accel, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_0_01, zEntCruiseBubble_f_1000000000_0,
                                         ap, apsize, "missle.fly.accel");
    }

    if (init)
    {
        this->missle.fly.max_vel = zEntCruiseBubble_f_12_0;
        auto_tweak::load_param<F32, F32>(this->missle.fly.max_vel, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_0_01, zEntCruiseBubble_f_1000000000_0,
                                         ap, apsize, "missle.fly.max_vel");
    }

    if (init)
    {
        this->missle.fly.engine_pitch_max = zEntCruiseBubble_f_10_0;
        auto_tweak::load_param<F32, F32>(this->missle.fly.engine_pitch_max, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_0_01, zEntCruiseBubble_f_1000000000_0,
                                         ap, apsize, "missle.fly.engine_pitch_max");
    }

    if (init)
    {
        this->missle.fly.engine_pitch_sensitivity = zEntCruiseBubble_f_0_005;
        auto_tweak::load_param<F32, F32>(this->missle.fly.engine_pitch_sensitivity,
                                         zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_0,
                                         zEntCruiseBubble_f_1_0, ap, apsize,
                                         "missle.fly.engine_pitch_sensitivity");
    }

    if (init)
    {
        this->missle.fly.flash_interval = zEntCruiseBubble_f_2_0;
        auto_tweak::load_param<F32, F32>(this->missle.fly.flash_interval, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_1000000000_0,
                                         ap, apsize, "missle.fly.flash_interval");
    }

    if (init)
    {
        this->missle.fly.turn.xdelta = zEntCruiseBubble_f_5_0;
        auto_tweak::load_param<F32, F32>(this->missle.fly.turn.xdelta, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_0_01, zEntCruiseBubble_f_1000000000_0,
                                         ap, apsize, "missle.fly.turn.xdelta");
    }

    if (init)
    {
        this->missle.fly.turn.ydelta = zEntCruiseBubble_f_4_0;
        auto_tweak::load_param<F32, F32>(this->missle.fly.turn.ydelta, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_0_01, zEntCruiseBubble_f_1000000000_0,
                                         ap, apsize, "missle.fly.turn.ydelta");
    }

    if (init)
    {
        this->missle.fly.turn.xdecay = zEntCruiseBubble_f_0_99;
        auto_tweak::load_param<F32, F32>(this->missle.fly.turn.xdecay, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_1_0, ap, apsize,
                                         "missle.fly.turn.xdecay");
    }

    if (init)
    {
        this->missle.fly.turn.ydecay = zEntCruiseBubble_f_0_99;
        auto_tweak::load_param<F32, F32>(this->missle.fly.turn.ydecay, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_1_0, ap, apsize,
                                         "missle.fly.turn.ydecay");
    }

    if (init)
    {
        this->missle.fly.turn.ybound = zEntCruiseBubble_f_0_6;
        auto_tweak::load_param<F32, F32>(this->missle.fly.turn.ybound, zEntCruiseBubble_f_1_5708,
                                         zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_1_0, ap, apsize,
                                         "missle.fly.turn.ybound");
    }

    if (init)
    {
        this->missle.fly.turn.roll_frac = zEntCruiseBubble_f_0_2;
        auto_tweak::load_param<F32, F32>(this->missle.fly.turn.roll_frac, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_n1_0, zEntCruiseBubble_f_1_0, ap,
                                         apsize, "missle.fly.turn.roll_frac");
    }

    if (init)
    {
        this->missle.explode.hit_radius = zEntCruiseBubble_f_1_0;
        auto_tweak::load_param<F32, F32>(this->missle.explode.hit_radius, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_10_0, ap,
                                         apsize, "missle.explode.hit_radius");
    }

    if (init)
    {
        this->missle.explode.hit_duration = zEntCruiseBubble_f_0_25;
        auto_tweak::load_param<F32, F32>(this->missle.explode.hit_duration, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_10_0, ap,
                                         apsize, "missle.explode.hit_duration");
    }

    if (init)
    {
        this->camera.aim.dist = zEntCruiseBubble_f_2_0;
        auto_tweak::load_param<F32, F32>(this->camera.aim.dist, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_100_0, ap,
                                         apsize, "camera.aim.dist");
    }

    if (init)
    {
        this->camera.aim.height = zEntCruiseBubble_f_1_5;
        auto_tweak::load_param<F32, F32>(this->camera.aim.height, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_n10_0, zEntCruiseBubble_f_10_0, ap,
                                         apsize, "camera.aim.height");
    }

    if (init)
    {
        this->camera.aim.pitch = zEntCruiseBubble_f_0_0;
        auto_tweak::load_param<F32, F32>(this->camera.aim.pitch, zEntCruiseBubble_f_0_017,
                                         zEntCruiseBubble_f_n90_0, zEntCruiseBubble_f_90_0, ap,
                                         apsize, "camera.aim.pitch");
    }

    if (init)
    {
        this->camera.aim.accel = zEntCruiseBubble_f_10_0;
        auto_tweak::load_param<F32, F32>(this->camera.aim.accel, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_0_01, zEntCruiseBubble_f_1000000000_0,
                                         ap, apsize, "camera.aim.accel");
    }

    if (init)
    {
        this->camera.aim.max_vel = zEntCruiseBubble_f_5_0;
        auto_tweak::load_param<F32, F32>(this->camera.aim.max_vel, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_0_01, zEntCruiseBubble_f_1000000000_0,
                                         ap, apsize, "camera.aim.max_vel");
    }

    if (init)
    {
        this->camera.aim.stick_decel = zEntCruiseBubble_f_720_0;
        auto_tweak::load_param<F32, F32>(this->camera.aim.stick_decel, zEntCruiseBubble_f_0_017,
                                         zEntCruiseBubble_f_0_01, zEntCruiseBubble_f_1000000000_0,
                                         ap, apsize, "camera.aim.stick_decel");
    }

    if (init)
    {
        this->camera.aim.stick_accel = zEntCruiseBubble_f_360_0;
        auto_tweak::load_param<F32, F32>(this->camera.aim.stick_accel, zEntCruiseBubble_f_0_017,
                                         zEntCruiseBubble_f_0_01, zEntCruiseBubble_f_1000000000_0,
                                         ap, apsize, "camera.aim.stick_accel");
    }

    if (init)
    {
        this->camera.aim.stick_max_vel = zEntCruiseBubble_f_135_0;
        auto_tweak::load_param<F32, F32>(this->camera.aim.stick_max_vel, zEntCruiseBubble_f_0_017,
                                         zEntCruiseBubble_f_0_01, zEntCruiseBubble_f_1000000000_0,
                                         ap, apsize, "camera.aim.stick_max_vel");
    }

    if (init)
    {
        this->camera.aim.turn_speed = zEntCruiseBubble_f_0_2;
        auto_tweak::load_param<F32, F32>(this->camera.aim.turn_speed, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_0_001, zEntCruiseBubble_f_1000000000_0,
                                         ap, apsize, "camera.aim.turn_speed");
    }

    if (init)
    {
        this->camera.seize.delay = zEntCruiseBubble_f_0_0;
        auto_tweak::load_param<F32, F32>(this->camera.seize.delay, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_1000000000_0,
                                         ap, apsize, "camera.seize.delay");
    }

    if (init)
    {
        this->camera.seize.blend_time = zEntCruiseBubble_f_1_5;
        auto_tweak::load_param<F32, F32>(this->camera.seize.blend_time, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_1000000000_0,
                                         ap, apsize, "camera.seize.blend_time");
    }

    if (init)
    {
        this->camera.seize.fade_dist = zEntCruiseBubble_f_2_0;
        auto_tweak::load_param<F32, F32>(this->camera.seize.fade_dist, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_10_0, ap,
                                         apsize, "camera.seize.fade_dist");
    }

    if (init)
    {
        this->camera.seize.hide_dist = zEntCruiseBubble_f_1_0;
        auto_tweak::load_param<F32, F32>(this->camera.seize.hide_dist, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_10_0, ap,
                                         apsize, "camera.seize.hide_dist");
    }

    if (init)
    {
        this->camera.seize.fov = zEntCruiseBubble_f_95_0;
        auto_tweak::load_param<F32, F32>(this->camera.seize.fov, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_10_0, zEntCruiseBubble_f_180_0, ap,
                                         apsize, "camera.seize.fov");
    }

    if (init)
    {
        this->camera.survey.duration = zEntCruiseBubble_f_2_0;
        auto_tweak::load_param<F32, F32>(this->camera.survey.duration, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_10_0, ap,
                                         apsize, "camera.survey.duration");
    }

    if (init)
    {
        this->camera.survey.min_duration = zEntCruiseBubble_f_0_25;
        auto_tweak::load_param<F32, F32>(this->camera.survey.min_duration, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_10_0, ap,
                                         apsize, "camera.survey.min_duration");
    }

    if (init)
    {
        this->camera.survey.min_dist = zEntCruiseBubble_f_10_0;
        auto_tweak::load_param<F32, F32>(this->camera.survey.min_dist, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_100_0, ap,
                                         apsize, "camera.survey.min_dist");
    }

    if (init)
    {
        this->camera.survey.cut_dist = zEntCruiseBubble_f_6_0;
        auto_tweak::load_param<F32, F32>(this->camera.survey.cut_dist, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_100_0, ap,
                                         apsize, "camera.survey.cut_dist");
    }

    if (init)
    {
        this->camera.survey.drift_dist = zEntCruiseBubble_f_8_0;
        auto_tweak::load_param<F32, F32>(this->camera.survey.drift_dist, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_100_0, ap,
                                         apsize, "camera.survey.drift_dist");
    }

    if (init)
    {
        this->camera.survey.drift_softness = zEntCruiseBubble_f_0_1;
        auto_tweak::load_param<F32, F32>(this->camera.survey.drift_softness, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_0_5, ap, apsize,
                                         "camera.survey.drift_softness");
    }

    if (init)
    {
        this->camera.survey.jerk_offset = zEntCruiseBubble_f_0_8;
        auto_tweak::load_param<F32, F32>(this->camera.survey.jerk_offset, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_2_0, ap, apsize,
                                         "camera.survey.jerk_offset");
    }

    if (init)
    {
        this->camera.survey.jerk_deflect = zEntCruiseBubble_f_0_6;
        auto_tweak::load_param<F32, F32>(this->camera.survey.jerk_deflect, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_1_0, ap, apsize,
                                         "camera.survey.jerk_deflect");
    }

    if (init)
    {
        this->camera.restore.control_delay = zEntCruiseBubble_f_0_25;
        auto_tweak::load_param<F32, F32>(this->camera.restore.control_delay, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_1_0, ap, apsize,
                                         "camera.restore.control_delay");
    }

    if (init)
    {
        this->material.env_alpha = zEntCruiseBubble_f_0_5;
        auto_tweak::load_param<F32, F32>(this->material.env_alpha, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_1_0, ap, apsize,
                                         "material.env_alpha");
    }

    if (init)
    {
        this->material.env_coeff = zEntCruiseBubble_f_0_5;
        auto_tweak::load_param<F32, F32>(this->material.env_coeff, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_1_0, ap, apsize,
                                         "material.env_coeff");
    }

    if (init)
    {
        this->material.fresnel_alpha = zEntCruiseBubble_f_0_0;
        auto_tweak::load_param<F32, F32>(this->material.fresnel_alpha, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_1_0, ap, apsize,
                                         "material.fresnel_alpha");
    }

    if (init)
    {
        this->material.fresnel_coeff = zEntCruiseBubble_f_0_75;
        auto_tweak::load_param<F32, F32>(this->material.fresnel_coeff, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_1_0, ap, apsize,
                                         "material.fresnel_coeff");
    }

    if (init)
    {
        this->reticle.dist_min = zEntCruiseBubble_f_3_0;
        auto_tweak::load_param<F32, F32>(this->reticle.dist_min, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_10_0, ap,
                                         apsize, "reticle.dist_min");
    }

    if (init)
    {
        this->reticle.dist_max = zEntCruiseBubble_f_30_0;
        auto_tweak::load_param<F32, F32>(this->reticle.dist_max, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_10000_0, ap,
                                         apsize, "reticle.dist_max");
    }

    if (init)
    {
        this->reticle.ang_show = zEntCruiseBubble_f_4_0;
        auto_tweak::load_param<F32, F32>(this->reticle.ang_show, zEntCruiseBubble_f_0_017,
                                         zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_90_0, ap,
                                         apsize, "reticle.ang_show");
    }

    if (init)
    {
        this->reticle.ang_hide = zEntCruiseBubble_f_22_5;
        auto_tweak::load_param<F32, F32>(this->reticle.ang_hide, zEntCruiseBubble_f_0_017,
                                         zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_90_0, ap,
                                         apsize, "reticle.ang_hide");
    }

    if (init)
    {
        this->reticle.delay_retarget = zEntCruiseBubble_f_0_25;
        auto_tweak::load_param<F32, F32>(this->reticle.delay_retarget, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_5_0, ap, apsize,
                                         "reticle.delay_retarget");
    }

    if (init)
    {
        this->trail.sample_rate = zEntCruiseBubble_f_60_0;
        auto_tweak::load_param<F32, F32>(this->trail.sample_rate, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_10000_0, ap,
                                         apsize, "trail.sample_rate");
    }

    if (init)
    {
        this->trail.bubble_rate = zEntCruiseBubble_f_60_0;
        auto_tweak::load_param<F32, F32>(this->trail.bubble_rate, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_10000_0, ap,
                                         apsize, "trail.bubble_rate");
    }

    if (init)
    {
        this->trail.bubble_emit_radius = zEntCruiseBubble_f_0_5;
        auto_tweak::load_param<F32, F32>(this->trail.bubble_emit_radius, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_10_0, ap,
                                         apsize, "trail.bubble_emit_radius");
    }

    if (init)
    {
        this->trail.wake_emit_radius = zEntCruiseBubble_f_0_1;
        auto_tweak::load_param<F32, F32>(this->trail.wake_emit_radius, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_10_0, ap,
                                         apsize, "trail.wake_emit_radius");
    }

    if (init)
    {
        this->blast.emit = 300;
        auto_tweak::load_param<U32, S32>(this->blast.emit, 1, 0, 0x3e8, ap, apsize, "blast.emit");
    }

    if (init)
    {
        this->blast.radius = zEntCruiseBubble_f_0_0;
        auto_tweak::load_param<F32, F32>(this->blast.radius, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_10_0, ap,
                                         apsize, "blast.radius");
    }

    if (init)
    {
        this->blast.vel = zEntCruiseBubble_f_5_0;
        auto_tweak::load_param<F32, F32>(this->blast.vel, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_n100000_0, zEntCruiseBubble_f_100000_0,
                                         ap, apsize, "blast.vel");
    }

    if (init)
    {
        this->blast.rand_vel = zEntCruiseBubble_f_0_5;
        auto_tweak::load_param<F32, F32>(this->blast.rand_vel, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_n100000_0, zEntCruiseBubble_f_100000_0,
                                         ap, apsize, "blast.rand_vel");
    }

    if (init)
    {
        this->droplet.dist_min = zEntCruiseBubble_f_1_0;
        auto_tweak::load_param<F32, F32>(this->droplet.dist_min, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_10_0, ap,
                                         apsize, "droplet.dist_min");
    }

    if (init)
    {
        this->droplet.dist_max = zEntCruiseBubble_f_2_0;
        auto_tweak::load_param<F32, F32>(this->droplet.dist_max, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_10_0, ap,
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
        this->droplet.vel_min = zEntCruiseBubble_f_2_0;
        auto_tweak::load_param<F32, F32>(this->droplet.vel_min, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_100000_0, ap,
                                         apsize, "droplet.vel_min");
    }

    if (init)
    {
        this->droplet.vel_max = zEntCruiseBubble_f_6_0;
        auto_tweak::load_param<F32, F32>(this->droplet.vel_max, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_100000_0, ap,
                                         apsize, "droplet.vel_max");
    }

    if (init)
    {
        this->droplet.vel_perturb = zEntCruiseBubble_f_0_25;
        auto_tweak::load_param<F32, F32>(this->droplet.vel_perturb, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_100000_0, ap,
                                         apsize, "droplet.vel_perturb");
    }

    if (init)
    {
        this->droplet.vel_angle = zEntCruiseBubble_f_60_0;
        auto_tweak::load_param<F32, F32>(this->droplet.vel_angle, zEntCruiseBubble_f_0_017,
                                         zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_100000_0, ap,
                                         apsize, "droplet.vel_angle");
    }

    if (init)
    {
        this->droplet.rot_vel_max = zEntCruiseBubble_f_360_0;
        auto_tweak::load_param<F32, F32>(this->droplet.rot_vel_max, zEntCruiseBubble_f_0_017,
                                         zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_100000_0, ap,
                                         apsize, "droplet.rot_vel_max");
    }

    if (init)
    {
        this->hud.glow_size = zEntCruiseBubble_f_0_05;
        auto_tweak::load_param<F32, F32>(this->hud.glow_size, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_0_001, zEntCruiseBubble_f_10_0, ap,
                                         apsize, "hud.glow_size");
    }

    if (init)
    {
        this->hud.time_fade = zEntCruiseBubble_f_0_25;
        auto_tweak::load_param<F32, F32>(this->hud.time_fade, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_0_001, zEntCruiseBubble_f_10_0, ap,
                                         apsize, "hud.time_fade");
    }

    if (init)
    {
        this->hud.time_glow = zEntCruiseBubble_f_0_5;
        auto_tweak::load_param<F32, F32>(this->hud.time_glow, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_0_001, zEntCruiseBubble_f_10_0, ap,
                                         apsize, "hud.time_glow");
    }

    if (init)
    {
        this->hud.wind.size = zEntCruiseBubble_f_0_75;
        auto_tweak::load_param<F32, F32>(this->hud.wind.size, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_100_0, ap,
                                         apsize, "hud.wind.size");
    }

    if (init)
    {
        this->hud.wind.du = zEntCruiseBubble_f_0_0;
        auto_tweak::load_param<F32, F32>(this->hud.wind.du, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_n1000000000_0,
                                         zEntCruiseBubble_f_1000000000_0, ap, apsize,
                                         "hud.wind.du");
    }

    if (init)
    {
        this->hud.wind.dv = zEntCruiseBubble_f_4_0;
        auto_tweak::load_param<F32, F32>(this->hud.wind.dv, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_n1000000000_0,
                                         zEntCruiseBubble_f_1000000000_0, ap, apsize,
                                         "hud.wind.dv");
    }

    if (init)
    {
        this->hud.reticle.size = zEntCruiseBubble_f_0_1;
        auto_tweak::load_param<F32, F32>(this->hud.reticle.size, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_100_0, ap,
                                         apsize, "hud.reticle.size");
    }

    if (init)
    {
        this->hud.target.size = zEntCruiseBubble_f_0_1;
        auto_tweak::load_param<F32, F32>(this->hud.target.size, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_100_0, ap,
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
        this->hud.timer.font_width = zEntCruiseBubble_f_0_0275;
        auto_tweak::load_param<F32, F32>(this->hud.timer.font_width, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_0_001, zEntCruiseBubble_f_1_0, ap,
                                         apsize, "hud.timer.font_width");
    }

    if (init)
    {
        this->hud.timer.font_height = zEntCruiseBubble_f_0_047;
        auto_tweak::load_param<F32, F32>(this->hud.timer.font_height, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_0_001, zEntCruiseBubble_f_1_0, ap,
                                         apsize, "hud.timer.font_height");
    }

    if (init)
    {
        this->hud.timer.x = zEntCruiseBubble_f_0_78;
        auto_tweak::load_param<F32, F32>(this->hud.timer.x, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_1_0, ap, apsize,
                                         "hud.timer.x");
    }

    if (init)
    {
        this->hud.timer.y = zEntCruiseBubble_f_0_86;
        auto_tweak::load_param<F32, F32>(this->hud.timer.y, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_1_0, ap, apsize,
                                         "hud.timer.y");
    }

    if (init)
    {
        this->hud.timer.glow_size = zEntCruiseBubble_f_0_01;
        auto_tweak::load_param<F32, F32>(this->hud.timer.glow_size, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_10_0, ap,
                                         apsize, "hud.timer.glow_size");
    }

    if (init)
    {
        this->dialog.freq = zEntCruiseBubble_f_1_0;
        auto_tweak::load_param<F32, F32>(this->dialog.freq, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_1_0, ap, apsize,
                                         "dialog.freq");
    }

    if (init)
    {
        this->dialog.decay = zEntCruiseBubble_f_0_75;
        auto_tweak::load_param<F32, F32>(this->dialog.decay, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_1_0, ap, apsize,
                                         "dialog.decay");
    }

    if (init)
    {
        this->dialog.min_freq = zEntCruiseBubble_f_0_1;
        auto_tweak::load_param<F32, F32>(this->dialog.min_freq, zEntCruiseBubble_f_1_0,
                                         zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_1_0, ap, apsize,
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

    shared.flags = shared.flags | 0x2;

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

void cruise_bubble::reset()
{
    if ((shared.flags & 0x3) != 0x3)
    {
        return;
    }
    cruise_bubble::kill(true, false);
}

void cruise_bubble::launch()
{
    if ((shared.flags & 0x13) != 0x3)
    {
        return;
    }

    if ((zGameExtras_CheatFlags() & 0x20000000) != 0)
    {
        // scheduling off
        shared.flags = shared.flags | 0x200;
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
    shared.player_motion = zEntCruiseBubble_f_0_0;
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

    if ((shared.flags & 0x10) == 0x0)
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

    if ((shared.flags & 0x10) == 0)
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

void cruise_bubble::render_screen()
{
    if ((shared.flags & 0x7) != 0x7)
    {
        return;
    }
    cruise_bubble::render_hud();
}

void cruise_bubble::insert_player_animations(xAnimTable& table)
{
    // not matching for different reasons
    // register scheduling
    // register allocation, caching stringBase at reused offsets
    // closest to a match i got was by incrementing the offsets from stringBase such that they're all unique
    // after that its pretty clear that this is a functional match

    if (shared.astate.player.aim != NULL)
    {
        return;
    }

    shared.astate.player.aim =
        xAnimTableNewState(&table, "cruise_bubble_aim", 0x10, 0, zEntCruiseBubble_f_1_0, NULL, NULL,
                           zEntCruiseBubble_f_0_0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);

    shared.astate.player.fire =
        xAnimTableNewState(&table, "cruise_bubble_fire", 0x20, 0, zEntCruiseBubble_f_1_0, NULL,
                           NULL, zEntCruiseBubble_f_0_0, NULL, NULL, xAnimDefaultBeforeEnter, NULL,
                           NULL);

    shared.astate.player.idle =
        xAnimTableNewState(&table, "cruise_bubble_idle", 0x10, 0, zEntCruiseBubble_f_1_0, NULL,
                           NULL, zEntCruiseBubble_f_0_0, NULL, NULL, xAnimDefaultBeforeEnter, NULL,
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
                                zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_0_0, 0, 0,
                                zEntCruiseBubble_f_0_15, NULL);

    shared.atran.player.fire =
        xAnimTableNewTransition(&table, "cruise_bubble_aim", "cruise_bubble_fire", NULL, NULL, 0, 0,
                                zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_0_0, 0, 0,
                                zEntCruiseBubble_f_0_15, NULL);

    shared.atran.player.idle =
        xAnimTableNewTransition(&table, "cruise_bubble_fire", "cruise_bubble_idle", NULL, NULL,
                                0x10, 0, zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_0_0, 0, 0,
                                zEntCruiseBubble_f_0_15, NULL);

    shared.atran.player.end =
        xAnimTableNewTransition(&table, "cruise_bubble_aim cruise_bubble_fire cruise_bubble_idle",
                                "Idle01", NULL, NULL, 0, 0, zEntCruiseBubble_f_0_0,
                                zEntCruiseBubble_f_0_0, 0, 0, zEntCruiseBubble_f_0_15, NULL);

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
        return zEntCruiseBubble_f_0_0;
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
    case 0x205:
        add_life(fparam[0], fparam[1]);
        return true;

    case 0x206:
        set_life(fparam[0]);
        return true;

    case 0x207:
        reset_life();
        return true;

    case 0x203:
    case 0x204:
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
    if (dmotion.length2() < zEntCruiseBubble_f_0_0001)
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
    this->yaw_vel = zEntCruiseBubble_f_0_0;
    this->turn_delay = zEntCruiseBubble_f_0_0;

    xAnimPlayStartTransition(globals.player.ent.model->Anim, shared.atran.player.aim);
    cruise_bubble::set_state(THREAD_CAMERA, STATE_CAMERA_AIM);
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

    if ((globals.pad0->on & 0x100) == 0)
    {
        return STATE_PLAYER_FIRE;
    }
    return STATE_PLAYER_AIM;
}

void cruise_bubble::state_player_aim::update_animation(F32 dt)
{
    F32 r = range_limit<F32>(this->yaw_vel * current_tweak->player.aim.anim_delta,
                             zEntCruiseBubble_f_n1_0, zEntCruiseBubble_f_1_0);
    xAnimSingle* s = globals.player.ent.model->Anim->Single;
    s->BilinearLerp[0] = zEntCruiseBubble_f_0_5 * ((1.0f + s->BilinearLerp[0]) + r);
}

void cruise_bubble::state_player_aim::apply_yaw()
{
    xMat4x3* m = cruise_bubble::get_player_mat();
    m->at.assign(isin(this->yaw), zEntCruiseBubble_f_0_0, icos(this->yaw));
    m->right.assign(m->at.z, zEntCruiseBubble_f_0_0, -m->at.x);
    m->up.assign(zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_0);
}

void cruise_bubble::state_player_aim::face_camera(F32 dt)
{
    // Externed constants needed for match for some reason.
    xMat4x3* mat = &globals.camera.mat;

    F32 new_yaw;
    if (mat->at.x >= zEntCruiseBubble_f_n0_00001 && mat->at.x <= 0.00001f &&
        mat->at.z >= zEntCruiseBubble_f_n0_00001 && mat->at.z <= 0.00001f)
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
    else if (diff < zEntCruiseBubble_f_n3_1415)
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

    cruise_bubble::play_sound(0, zEntCruiseBubble_f_1_0, &get_missle_mat()->pos);
    xAnimPlayStartTransition(globals.player.ent.model->Anim, shared.atran.player.fire);
    cruise_bubble::set_state(THREAD_MISSLE, STATE_MISSLE_APPEAR);

    if (xurand() <= shared.dialog_freq)
    {
        play_sound(3, zEntCruiseBubble_f_1_0);
        shared.dialog_freq *= current_tweak->dialog.decay;

        if (shared.dialog_freq < current_tweak->dialog.min_freq)
        {
            shared.dialog_freq = current_tweak->dialog.min_freq;
        }
    }
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
    shared.missle_model->Alpha = zEntCruiseBubble_f_1_0;
    xAnimPlaySetState(shared.missle_model->Anim->Single, shared.astate.missle.fire,
                      zEntCruiseBubble_f_0_0);
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

    this->vel = zEntCruiseBubble_f_0_0;
    xMat3x3GetEuler(cruise_bubble::get_missle_mat(), &this->rot);
    this->rot_vel = zEntCruiseBubble_f_0_0;
    this->engine_pitch = zEntCruiseBubble_f_0_0;
    this->flash_time = zEntCruiseBubble_f_0_0;
    this->last_loc = globals.player.ent.bound.sph.center;

    missle_record.reset();
    missle_record.push_front(missle_record_data(this->last_loc, this->rot.z));
    missle_record.push_front(missle_record_data(cruise_bubble::get_missle_mat()->pos, this->rot.z));

    play_sound(2, zEntCruiseBubble_f_1_0, &cruise_bubble::get_missle_mat()->pos);
    signal_event(0x203);
}

cruise_bubble::missle_record_data::missle_record_data(const xVec3& loc, F32 roll)
    : loc(loc), roll(roll)
{
}

void cruise_bubble::state_missle_fly::stop()
{
    shared.flags &= 0xfffffff7;

    hide_missle();
    stop_trail();
    stop_sound(2, 0);
    signal_event(0x204);

    xSphere o;
    o.center = zEntCruiseBubble_f_1_0e38;
    o.r = zEntCruiseBubble_f_0_0;
    notify_triggers(*globals.sceneCur, o, xVec3::create(zEntCruiseBubble_f_0_0));
}

void cruise_bubble::state_missle_fly::abort()
{
    stop_sound(2, 0);
    signal_event(0x204);

    xSphere o;
    o.center = zEntCruiseBubble_f_1_0e38;
    o.r = zEntCruiseBubble_f_0_0;
    notify_triggers(*globals.sceneCur, o, xVec3::create(zEntCruiseBubble_f_0_0));
}

cruise_bubble::state_enum cruise_bubble::state_missle_fly::update(F32 dt)
{
    this->life -= dt;
    if (this->life <= zEntCruiseBubble_f_0_0 || (globals.pad0->pressed & 0x100) != 0)
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

    if ((c[0]->flg_hazard & 0x200000) != 0)
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
                          zEntCruiseBubble_f_0_0, false);
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
        if (len < zEntCruiseBubble_f_0_001)
        {
            return false;
        }

        len = xsqrt(len);
        xVec3 diff_normalized = diff * (zEntCruiseBubble_f_1_0 / len);
        F32 sin = -xasin(diff_normalized.y);
        if (F32(iabs(sin)) > zEntCruiseBubble_f_1_5708 * current_tweak->missle.fly.turn.ybound)
        {
            return true;
        }

        F32 tan = xatan2(diff_normalized.x, diff_normalized.z);
        F32 mod =
            xrmod(zEntCruiseBubble_f_3_1415 + (tan - this->rot.x)) - zEntCruiseBubble_f_3_1415;
        this->rot.x += mod * current_tweak->missle.collide_twist;
        this->rot.y += (sin - this->rot.y) * current_tweak->missle.collide_twist;
        xMat3x3Euler(mat, &this->rot);

        if (hit_depen.length2() < zEntCruiseBubble_f_0_000001)
        {
            return false;
        }
    } while (++i < current_tweak->missle.hit_tests);

    F32 dist = zEntCruiseBubble_f_0_1 * current_tweak->missle.hit_dist;
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
    xVec3 overshoot = zEntCruiseBubble_xVec3_0_0_0;
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
    F32 move = zEntCruiseBubble_f_0_0;

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
    xCameraUpdate(&globals.camera, zEntCruiseBubble_f_0_001);

    this->phi_vel = this->height_vel = this->dist_vel = zEntCruiseBubble_f_0_0;
    xMat4x3* mat = &globals.camera.mat;
    xVec3& ploc = get_player_loc();
    // pretty sure the next 5 lines were originally just 1 looking like this:
    // xVec2 offset = {mat->pos.x - ploc.x, mat->pos.z - ploc.z};
    // this will however call the implicit copy constructor with a generated instance
    // in the .sbss2 section (lbl_803D0830)
    // writing it like this narrowed the diff down to only a few
    // regalloc and scheduling issues
    F32 x = mat->pos.x - ploc.x;
    F32 y = mat->pos.z - ploc.z;
    xVec2 offset = lbl_803D0830;
    offset.x = x;
    offset.y = y;

    this->phi = xatan2(offset.x, offset.y);
    this->height = mat->pos.y - ploc.y;
    this->dist = offset.length();
    this->control_delay = this->seize_delay = zEntCruiseBubble_f_0_0;

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
    if ((shared.flags & 0x20) != 0 && this->control_delay >= current_tweak->aim_delay)
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

    if ((shared.flags & 0x8) != 0)
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

void cruise_bubble::state_camera_seize::start()
{
    capture_camera();

    this->blend_time = zEntCruiseBubble_f_0_0;
    this->start_loc = globals.camera.mat.pos;
    xQuatFromMat(&this->start_dir, &globals.camera.mat);
    this->last_s = zEntCruiseBubble_f_0_0;
    this->fov = zEntCruiseBubble_f_0_0;
    this->wipe_bubbles = zEntCruiseBubble_f_0_0;

    show_hud();
    distort_screen(zEntCruiseBubble_f_0_0);
}

void cruise_bubble::state_camera_seize::stop()
{
    release_camera();
    xCameraSetFOV(&globals.camera, shared.fov_default);
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

void cruise_bubble::state_camera_attach::start()
{
    capture_camera();
    xMat4x3* mat = get_missle_mat();
    xCameraMove(&globals.camera, mat->pos);
    xCameraRotate(&globals.camera, *mat, zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_0_0,
                  zEntCruiseBubble_f_0_0);
    xCameraSetFOV(&globals.camera, current_tweak->camera.seize.fov);
    distort_screen(zEntCruiseBubble_f_1_0);
}

void cruise_bubble::state_camera_attach::stop()
{
    xCameraSetFOV(&globals.camera, shared.fov_default);
    release_camera();
    hide_hud();
    distort_screen(zEntCruiseBubble_f_0_0);
}

U8 cruise_bubble::state_camera_attach::hazard_check(NPCHazard& haz, void* context)
{
    check_lock_target(&haz.pos_hazard);
    return 1;
}

cruise_bubble::state_enum cruise_bubble::state_camera_attach::update(F32 dt)
{
    xMat4x3* mat = get_missle_mat();
    xCameraMove(&globals.camera, mat->pos);
    xCameraRotate(&globals.camera, *mat, zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_0_0,
                  zEntCruiseBubble_f_0_0);
    this->lock_targets();

    return STATE_CAMERA_ATTACH;
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
    this->time = zEntCruiseBubble_f_0_0;
    this->init_path();
    this->move();
    this->start_sp = shared.sp;
}

void cruise_bubble::state_camera_survey::stop()
{
    release_camera();
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
        ((globals.pad0->pressed & 0x100) != 0 || this->control_jerked()))
    {
        return STATE_CAMERA_RESTORE;
    }

    this->move();
    return STATE_CAMERA_SURVEY;
}

void cruise_bubble::state_camera_restore::start()
{
    this->control_delay = zEntCruiseBubble_f_0_0;
    hide_hud();

    if (!camera_leave())
    {
        xVec3 loc = get_player_loc() + start_cam_mat.pos;
        xCameraMove(&globals.camera, loc);
        xCameraRotate(&globals.camera, start_cam_mat, zEntCruiseBubble_f_0_0,
                      zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_0_0);
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
