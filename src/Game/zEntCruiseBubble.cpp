#include "stdio.h"
#include "zEnt.h"
#include "zRenderState.h"
#include <string.h>

#include "zCamera.h"
#include "zEntButton.h"
#include "zEntCruiseBubble.h"
#include "zEntDestructObj.h"
#include "zEntPlayer.h"
#include "zEntTrigger.h"
#include "zGameExtras.h"
#include "zGlobals.h"
#include "zTalkBox.h"

#include "../Core/x/xColor.h"
#include "../Core/x/xDecal.h"
#include "../Core/x/xFX.h"
#include "../Core/x/xMath.h"
#include "../Core/x/xMathInlines.h"
#include "../Core/x/xMath3.h"
#include "../Core/x/xModel.h"
#include "../Core/x/xSnd.h"
#include "../Core/x/xString.h"
#include "../Core/x/xstransvc.h"
#include "../Core/x/xVec3.h"
#include "zNPCTypeCommon.h"
#include "zPlatform.h"

namespace cruise_bubble
{

extern basic_rect<float32> screen_bounds;
// basic_rect default_adjust;
// int8 buffer[16];
// int8 buffer[16];
extern tweak_group normal_tweak;
extern tweak_group cheat_tweak;
extern tweak_group* current_tweak;
extern xBase base;
extern const char* start_anim_states[37]; // string array of names

extern struct _class_36
{
    int32 flags;
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
    int32 hits_size;
    uint32 player_health;
    xVec3 player_motion;
    // Offset: 0x100
    float32 fov_default;
    zShrapnelAsset* droplet_shrapnel;
    float32 dialog_freq;
    struct _class_45
    {
        float32 samples;
        float32 bubbles;
        // Offset: 0x114
        xMat4x3 mat;
        // Offset: 0x154
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
// xMat4x3 start_cam_mat;
// fixed_queue missle_record;
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
    float32 alpha;
    float32 alpha_vel;
    float32 glow;
    float32 glow_vel;

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
    uint32 gizmos_used;
    // Offset 0x658
    uv_animated_model uv_swirl;
    // Offset 0x674
    uv_animated_model uv_wind;
} hud;
// void (*xAnimDefaultBeforeEnter)(xAnimPlay*, xAnimState*);
// uint32 (*check_anim_aim)(xAnimTransition*, xAnimSingle*, void*);
// zGlobals globals;
// RpAtomic* (*AtomicDefaultRenderCallBack)(RpAtomic*);
// RpAtomic* (*custom_bubble_render)(RpAtomic*);
// iColor_tag g_WHITE;
// uint32 gActiveHeap;
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
// uint32 gFXSurfaceFlags;
// xVec3 m_UnitAxisY;
// xGrid npcs_grid;
// xGrid colls_oso_grid;
// xGrid colls_grid;
// uint8 (*hazard_check)(NPCHazard&, void*);
// xQCControl xqc_def_ctrl;
// void (*SweptSphereHitsCameraEnt)(xScene*, xRay3*, xQCData*, xEnt*, void*);
// void (*cb_droplet)(zFrag*, zFragAsset*);
// uint8 (*hazard_check)(NPCHazard&, void*);
// uint8 (*hazard_check)(NPCHazard&, void*);
// int32 gGridIterActive;

extern const char stringBase0[]; // "Idle01\0Idle02\0Idle03\0Idle04\0Idle05\0Idle06\0Idle07\0Idle08\0Idle09\0Idle10\0Idle11\0Idle12\0Idle13\0SlipIdle01\0Inactive01\0Inactive02\0Inactive03\0Inactive04\0Inactive05\0Inactive06\0Inactive07\0Inactive08\0Inactive09\0Inactive10\0Walk01\0Run01\0Run02\0Run03\0Land01\0LandRun01\0LandHigh01\0WallLand01\0Hit01\0Hit02\0Hit03\0Hit04\0Hit05\0SB_cruise_start\0SB_cruise_hit\0SB_cruise_nav_loop\0cruise_bubble_bind.MINF\0lightning\0Wake Ribbon 0\0Player|Cruise Bubble|Wake Ribbon 0|\0Wake Ribbon 1\0Player|Cruise Bubble|Wake Ribbon 1|\0par_cruise_explode\0Cruise Bubble Explosion\0cruise_bubble_droplet_shrapnel\0.minf\0.dff\0ui_3dicon_reticle\0ui_3dicon_target_lock\0ui_3dicon_missile_frame02\0%02d:%02d\0aura2\0aim_delay\0player.halt_time\0player.aim.turn_speed\0player.aim.anim_delta\0player.fire.delay_wand\0missle.life\0missle.hit_dist\0missle.crash_angle\0missle.collide_twist\0missle.hit_tests\0missle.appear.delay_show\0missle.appear.delay_fly\0missle.appear.offset\0missle.fly.accel\0missle.fly.max_vel\0missle.fly.engine_pitch_max\0missle.fly.engine_pitch_sensitivity\0missle.fly.flash_interval\0missle.fly.turn.xdelta\0missle.fly.turn.ydelta\0missle.fly.turn.xdecay\0missle.fly.turn.ydecay\0missle.fly.turn.ybound\0missle.fly.turn.roll_frac\0missle.explode.hit_radius\0missle.explode.hit_duration\0camera.aim.dist\0camera.aim.height\0camera.aim.pitch\0camera.aim.accel\0camera.aim.max_vel\0camera.aim.stick_decel\0camera.aim.stick_accel\0camera.aim.stick_max_vel\0camera.aim.turn_speed\0camera.seize.delay\0camera.seize.blend_time\0camera.seize.fade_dist\0camera.seize.hide_dist\0camera.seize.fov\0camera.survey.duration\0camera.survey.min_duration\0camera.survey.min_dist\0camera.survey.cut_dist\0camera.survey.drift_dist\0camera.survey.drift_softness\0camera.survey.jerk_offset\0camera.survey.jerk_deflect\0camera.restore.control_delay\0material.env_alpha\0material.env_coeff\0material.fresnel_alpha\0material.fresnel_coeff\0reticle.dist_min\0reticle.dist_max\0reticle.ang_show\0reticle.ang_hide\0reticle.delay_retarget\0trail.sample_rate\0trail.bubble_rate\0trail.bubble_emit_radius\0trail.wake_emit_radius\0blast.emit\0blast.radius\0blast.vel\0blast.rand_vel\0droplet.dist_min\0droplet.dist_max\0droplet.emit_min\0droplet.emit_max\0droplet.vel_min\0droplet.vel_max\0droplet.vel_perturb\0droplet.vel_angle\0droplet.rot_vel_max\0hud.glow_size\0hud.time_fade\0hud.time_glow\0hud.wind.size\0hud.wind.du\0hud.wind.dv\0hud.reticle.size\0hud.target.size\0hud.timer.font\0hud.timer.font_width\0hud.timer.font_height\0hud.timer.x\0hud.timer.y\0hud.timer.glow_size\0dialog.freq\0dialog.decay\0dialog.min_freq\0gloss_edge\0rainbowfilm_smooth32\0cruise_bubble_aim\0cruise_bubble_fire\0cruise_bubble_idle\0cruise_bubble_aim cruise_bubble_fire cruise_bubble_idle\0Cruise Bubble\0fire\0fly\0\0\0\0"

} // namespace cruise_bubble

extern float32 zEntCruiseBubble_f_0_0; // 0.0
extern float32 zEntCruiseBubble_f_1_0; // 1.0
extern float32 zEntCruiseBubble_f_0_5; // 0.5
extern float32 zEntCruiseBubble_f_3_0; // 3.0
extern float32 zEntCruiseBubble_f_0_25; // 0.25
extern float32 zEntCruiseBubble_f_255_0; // 255.0
extern float32 zEntCruiseBubble_f_n1_0; // -1.0
extern float32 zEntCruiseBubble_f_100_0; // 100.0
extern float32 zEntCruiseBubble_f_n0_00001; // -0.00001
extern float32 zEntCruiseBubble_f_0_00001; // 0.00001
extern float32 zEntCruiseBubble_f_0_2; // 0.2
extern float32 zEntCruiseBubble_f_0_05; // 0.05
extern float32 zEntCruiseBubble_f_0_01; // 0.01
extern float32 zEntCruiseBubble_f_1000000000_0; // 1000000000.0
extern float32 zEntCruiseBubble_f_0_0667; // 0.0667
extern float32 zEntCruiseBubble_f_6_0; // 6.0
extern float32 zEntCruiseBubble_f_0_3; // 0.3
extern float32 zEntCruiseBubble_f_30_0; // 30.0
extern float32 zEntCruiseBubble_f_0_017; // 0.017 deg2rad
extern float32 zEntCruiseBubble_f_60_0; // 60.0
extern float32 zEntCruiseBubble_f_0_025; // 0.025
extern float32 zEntCruiseBubble_f_0_1333; // 0.1333
extern float32 zEntCruiseBubble_f_0_667; // 0.667
extern float32 zEntCruiseBubble_f_n0_049; // -0.049
extern float32 zEntCruiseBubble_f_1_728; // 1.728
extern float32 zEntCruiseBubble_f_0_922; // 0.922
extern float32 zEntCruiseBubble_f_12_0; // 12.0
extern float32 zEntCruiseBubble_f_10_0; // 10.0
extern float32 zEntCruiseBubble_f_0_005; // 0.005
extern float32 zEntCruiseBubble_f_2_0; // 2.0
extern float32 zEntCruiseBubble_f_5_0; // 5.0
extern float32 zEntCruiseBubble_f_4_0; // 4.0
extern float32 zEntCruiseBubble_f_0_1; // 0.1
extern float32 zEntCruiseBubble_f_0_6; // 0.6
extern float32 zEntCruiseBubble_f_1_5708; // 1.5708 90deg
extern float32 zEntCruiseBubble_f_1_5; // 1.5
extern float32 zEntCruiseBubble_f_n10_0; // -10.0
extern float32 zEntCruiseBubble_f_n90_0; // -90.0
extern float32 zEntCruiseBubble_f_90_0; // 90.0
extern float32 zEntCruiseBubble_f_720_0; // 720.0
extern float32 zEntCruiseBubble_f_360_0; // 360.0
extern float32 zEntCruiseBubble_f_135_0; // 135.0
extern float32 zEntCruiseBubble_f_0_001; // 0.001
extern float32 zEntCruiseBubble_f_95_0; // 95.0
extern float32 zEntCruiseBubble_f_180_0; // 180.0
extern float32 zEntCruiseBubble_f_8_0; // 8.0
extern float32 zEntCruiseBubble_f_0_99; // 0.1
extern float32 zEntCruiseBubble_f_0_8; // 0.8
extern float32 zEntCruiseBubble_f_0_75; // 0.75
extern float32 zEntCruiseBubble_f_10000_0; // 10000.0
extern float32 zEntCruiseBubble_f_22_5; // 22.5
extern float32 zEntCruiseBubble_f_n100000_0; // -100000.0
extern float32 zEntCruiseBubble_f_100000_0; // 100000.0
extern float32 zEntCruiseBubble_f_n1000000000_0; // -1000000000.0
extern float32 zEntCruiseBubble_f_0_0275; // 0.0275
extern float32 zEntCruiseBubble_f_0_047; // 0.047
extern float32 zEntCruiseBubble_f_0_78; // 0.78
extern float32 zEntCruiseBubble_f_0_86; // 0.86
extern float32 zEntCruiseBubble_f_0_15; // 0.15
extern float32 zEntCruiseBubble_f_0_0001; // 0.15

extern iColor_tag zEntCruiseBubble_color_80_00_00_FF; // 128, 0, 0, 255
extern iColor_tag zEntCruiseBubble_color_FF_14_14_FF; // 255, 20, 20, 255

void cruise_bubble::init_sound()
{
    sound_config* s;
    sound_config* end = &sounds[4];
    for (s = &sounds[0]; s != end; ++s)
    {
        s->id = (s->name == 0) ? 0 : xStrHash(s->name);
        s->handle = 0;
    }
}

void cruise_bubble::stop_sound(int32 which, uint32 handle)
{
    sound_config* s = &sounds[which];

    if (s->id == 0)
    {
        if (s->streamed == 0)
        {
            for (int32 i = s->first; i <= s->last; ++i)
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

// func_80057320
// will match once file is complete, see comment below
#if 1
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "play_sound__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fif")
#else
uint32 cruise_bubble::play_sound(int32 which, float32 volFactor)
{
    sound_config* s = &sounds[which];

    if (s->id == 0)
    {
        int32 n = s->last - s->first + 1;
        int32 i = n <= 1 ? s->first : s->first + (xrand() >> 13) % n;

        if (s->streamed != 0)
        {
           zEntPlayer_SNDPlayStream((_tagePlayerStreamSnd) i);
        }
        else
        {
            zEntPlayer_SNDPlay((_tagePlayerSnd) i, zEntCruiseBubble_f_0_0);
        }

        s->handle = 0;
    }
    else
    {
        // using float literals only the TOC address doesnt match
        // -> will match when file is complete
        s->handle = xSndPlay(
                (uint32) s->id,
                s->volume * volFactor,
                zEntCruiseBubble_f_0_0,
                (uint32) 128,
                (uint32) 0,
                (uint32) 0,
                SND_CAT_GAME,
                zEntCruiseBubble_f_0_0);
    }

    if (s->rumble != SDR_None)
    {
        zRumbleStart(s->rumble);
    }
    return s->handle;
}
#endif

// func_80057404
// will match once file is complete, see comment below
#if 1
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "play_sound__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FifPC5xVec3")
#else
uint32 cruise_bubble::play_sound(int32 which, float32 volFactor, const xVec3* pos)
{
    sound_config* s = &sounds[which];

    if (s->id != 0)
    {
        // using float literals only the TOC address doesnt match
        // -> will match when file is complete
        s->handle = xSndPlay3D(
                s->id,
                s->volume * volFactor,
                zEntCruiseBubble_f_0_0,
                (uint32) 128,
                (uint32) 2048,
                pos,
                s->radius_inner,
                s->radius_outer,
                SND_CAT_GAME,
                zEntCruiseBubble_f_0_0);
    }

    if (s->rumble != SDR_None)
    {
        zRumbleStart(s->rumble);
    }
    return s->handle;
}
#endif

void cruise_bubble::set_pitch(int32 which, float32 pitch, uint32 handle)
{
    sound_config* s = &sounds[which];

    if (s->id == 0)
    {
        for (int32 i = s->first; i <= s->last; ++i)
        {
            zEntPlayer_SNDSetPitch((_tagePlayerSnd) i, pitch);
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

void cruise_bubble::show_wand()
{
    globals.player.sb_models[5]->Flags = globals.player.sb_models[5]->Flags | 0x0001;
}

void cruise_bubble::hide_wand()
{
    globals.player.sb_models[5]->Flags = globals.player.sb_models[5]->Flags & 0xfffe;
}

void cruise_bubble::show_missle()
{
    shared.missle_model->Flags = shared.missle_model->Flags | 0x0003;
}

void cruise_bubble::hide_missle()
{
    shared.missle_model->Flags = shared.missle_model->Flags & 0xfffc;
}

void cruise_bubble::capture_camera()
{
    zCameraDisableInput();
    zCameraDisableTracking(CO_CRUISE_BUBBLE);
    xCameraDoCollisions(0, 1);
}

void cruise_bubble::release_camera()
{
    zCameraEnableInput();
    zCameraEnableTracking(CO_CRUISE_BUBBLE);
    xCameraDoCollisions(1, 1);
}

// func_800575FC
#ifndef NONMATCHING
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "camera_taken__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv")
#else
uint32 cruise_bubble::camera_taken()
{
    // dumb non match cause it seems the compiler doesnt assume the type of the return value correctly
    // to me it looks like the case Ninja shifts described in https://pastebin.com/XjJpBzah
    // i tried changing the return type to every imaginable type, asm remains the same
    return zCameraGetConvers() != 0 || (zCameraIsTrackingDisabled() & 0xfffffffd) != 0;
}
#endif

uint32 cruise_bubble::camera_leave()
{
    return zCameraGetConvers() != 0;
}

void cruise_bubble::start_damaging()
{
    shared.hits_size = 0;
}

// func_80057684
#ifndef NONMATCHING
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "damage_entity__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FR4xEntRC5xVec3RC5xVec3RC5xVec3fb")
#else
void cruise_bubble::damage_entity(xEnt& ent, const xVec3& loc, const xVec3& dir, const xVec3& hit_norm, float32 radius, uint8 explosive)
{
    if (shared.hits_size >= 32)
    {
        return;
    }
    shared.hits[shared.hits_size] = &ent;
    shared.hits_size++;

    switch (ent.baseType) {
    case eBaseTypeButton:
        zEntButton_Press((_zEntButton*) &ent, 0x10);
        return;

    case eBaseTypeDestructObj:
        zEntDestructObj_Hit((zEntDestructObj*) &ent, 0x10000);
        return;

    case eBaseTypePlatform:
        switch (ent.subType) {
        case 0xc:
            if ((((zPlatform*) &ent)->passet->paddle.paddleFlags & 0x20) == 0)
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
            zPlatform_PaddleCollide(&coll, &loc, &dir,1);
            return;
        }
        break;

    case eBaseTypeNPC:
        if (explosive)
        {
            // fuck this... weird scheduling
            xVec3 edir = (*xEntGetCenter(&ent) - loc).up_normal();
            ((zNPCCommon*) &ent)->Damage(DMGTYP_CRUISEBUBBLE, &base, &edir);
        }
        else {
            // while this matches
            ((zNPCCommon*) &ent)->Damage(DMGTYP_CRUISEBUBBLE, &base, &dir);
        }
        return;
    }

    zEntEvent(&ent, 0x1c7);
}
#endif

uint8 cruise_bubble::can_damage(xEnt* ent)
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
            zEntDestructObj_isDestroyed((zEntDestructObj*) ent) != 0)
    {
        return false;
    }
    if (ent->baseType == eBaseTypeNPC &&
            !((zNPCCommon*) ent)->IsHealthy())
    {
        return false;
    }

    return true;
}

uint8 cruise_bubble::was_damaged(xEnt* ent)
{
    // no idea why this doesn't OK ...
    // xEnt** i;
    // xEnt** n = shared.hits + shared.hits_size; // unnecessary offset is added
    // for (i = shared.hits; i != n; ++i)

    // ... but this does
    xEnt** i = shared.hits;
    xEnt** n = i + shared.hits_size;
    for ( ; i != n; ++i)
    {
        if (ent == *i)
        {
            return true;
        }
    }

    return false;
}

void cruise_bubble::notify_triggers(xScene& s, const xSphere& o, const xVec3& dir)
{
    zEntTrigger** it = (zEntTrigger**)s.trigs;
    zEntTrigger** end = it + s.num_trigs;
    for ( ; it != end; ++it)
    {
        zEntTrigger& trig = **it;

        if (xBaseIsEnabled(&trig))
        {
            zEntTriggerAsset(trig);

            bool want_enter = false;
            bool want_exit = false;
            xLinkAsset* link = trig.link;
            xLinkAsset* end_link = link + trig.linkCount;
            for ( ; link != end_link; ++link)
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
                    trig.entered = trig.entered | 0x2;
                }
                else
                {
                    trig.entered = trig.entered & 0xfffffffd;
                }

                if (want_enter && inside) {
                    zEntEvent(&trig, 0x201);
                }
                else if (want_exit && !inside) {
                    zEntEvent(&trig, 0x202);
                }
            }
        }
    }
}

void cruise_bubble::exit_triggers(xScene& s)
{
    zEntTrigger** it;
    zEntTrigger** end;
    zEntTrigger* trig;
    xLinkAsset* link;
    xLinkAsset* end_link;

    it = (zEntTrigger**)s.trigs;
    end = it + s.num_trigs;
    for ( ; it != end; ++it)
    {
        trig = *it;

        if (xBaseIsEnabled(trig))
        {
            zEntTriggerAsset(*trig);

            if ((trig->entered & 0x2) != 0)
            {
                trig->entered = trig->entered & 0xfffffffd;

                link = trig->link;
                end_link = link + trig->linkCount;
                for ( ; link != end_link; ++link)
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

void cruise_bubble::signal_event(uint32 toEvent)
{
    zEntEvent(&globals.player.ent, &globals.player.ent, toEvent);
}

void cruise_bubble::refresh_trail(xMat4x3& mat, xQuat& quat)
{
    xModelGetBoneMat(mat, *shared.missle_model, 8);
    xQuatFromMat(&quat, &mat);
}

// func_80057C78
#ifndef NONMATCHING
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "start_trail__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv")
#else
void cruise_bubble::start_trail()
{
    if (shared.flags & 0x80)
    {
        return;
    }
    
    shared.flags = shared.flags | 0x180;
    shared.fov_default = zEntCruiseBubble_f_0_0;
    shared.dialog_freq = zEntCruiseBubble_f_0_0;

    refresh_trail(shared.trail.mat, shared.trail.dir);
}
#endif

void cruise_bubble::stop_trail()
{
    shared.flags = shared.flags & 0xffffff7f;
}

void cruise_bubble::set_state(cruise_bubble::thread_enum thread, cruise_bubble::state_enum state)
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

// func_80057D78
#if 1
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "start__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_10state_typeFv")
#else
void cruise_bubble::state_type::start()
{
    // empty
}
#endif

// func_80057D7C
#if 1
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "stop__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_10state_typeFv")
#else
void cruise_bubble::state_type::stop()
{
    // empty
}
#endif

bool cruise_bubble::check_launch()
{
    // this can surely be written better and still OK 
    bool can_cruise_bubble = false;
    if (!globals.player.ControlOff && !globals.player.cheat_mode &&
        globals.player.g.PowerUp[1] && globals.player.s->pcType == ePlayer_SB &&
        (globals.pad0->pressed & 0x100))
    {
        can_cruise_bubble = true;
    }
    if (!can_cruise_bubble)
    {
        return false;
    }
    
    xAnimState* state = globals.player.ent.model->Anim->Single->State;
    for (uint32 i = 0; i < 37; ++i)
    {
        if (stricmp(start_anim_states[i], state->Name) == 0)
        {
            return true;
        }
    }

    return false;
}

void cruise_bubble::kill(bool reset_camera, bool abortive)
{
    if (abortive)
    {
        for (int32 i = THREAD_PLAYER; i < MAX_THREAD; ++i) {
            if (shared.state[i] != NULL)
            {
                (shared.state[i])->abort();
                shared.state[i] = NULL;
            }
        }
    }
    else {
        for (int32 i = THREAD_PLAYER; i < MAX_THREAD; ++i) {
            // either STATE_INVALID or BACKUP_STATE_PLAYER, both == 0x11111111
            set_state((thread_enum) i, STATE_INVALID);
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
    if (state == shared.astate.player.aim ||
        state == shared.astate.player.fire ||
        state == shared.astate.player.idle)
    {
        xAnimPlayStartTransition(globals.player.ent.model->Anim, shared.atran.player.end); // [xAnimPlayStartTransition__FP9xAnimPlayP15xAnimTransition]
    }
    exit_triggers(*globals.sceneCur);
}

void cruise_bubble::distort_screen(float32)
{
    // emtpy
}

// func_80057FE4
#if 1
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "abort__Q213cruise_bubble10state_typeFv")
#else
void cruise_bubble::state_type::abort()
{
    // empty
}
#endif

// func_80057FE8
#ifndef NONMATCHING
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "update_player__13cruise_bubbleFR6xScenef")
#else
void cruise_bubble::update_player(xScene& s, float32 dt)
{
    // register usage and stack scheduling differing
    xVec3 pre_update_loc = get_player_loc();
    xVec3 drive_motion;

    bool stop = zEntPlayer_MinimalUpdate(&globals.player.ent, &s, dt, drive_motion) ||
            globals.player.Health < shared.player_health;
    
    if (!stop)
    {
        shared.player_motion += get_player_loc() - pre_update_loc - drive_motion;

        if (shared.player_motion.length2() > zEntCruiseBubble_f_0_25)
        {
            stop = true;
        }
    }
    
    if (stop)
    {
        kill(true, false);
    }
}
#endif

xVec3& cruise_bubble::get_player_loc()
{
    return *(xVec3*)&globals.player.ent.model->Mat->pos;
}

void cruise_bubble::render_player()
{
    zEntPlayer_MinimalRender(&globals.player.ent);
}

void cruise_bubble::refresh_controls()
{
    shared.last_sp = shared.sp;
    shared.sp = globals.pad0->analog[0].offset;
}

void cruise_bubble::update_state(xScene* s, float32 dt)
{
    for (int32 i = THREAD_PLAYER; i < MAX_THREAD; ++i) {
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

void cruise_bubble::render_state()
{
    for (int i = THREAD_PLAYER; i < MAX_THREAD; ++i)
    {
        if (shared.state[i] != NULL)
        {
            shared.state[i]->render();
        }
    }
}

// func_80058310
#if 1
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "render__Q213cruise_bubble10state_typeFv")
#else
void cruise_bubble::state_type::render()
{
    // empty
}
#endif

// func_80058314
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "custom_bubble_render__13cruise_bubbleFP8RpAtomic")

// func_800584C0
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "init_states__13cruise_bubbleFv")

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

void cruise_bubble::init_missle_model()
{
    // stringBase0 + 0x163 == "cruise_bubble_bind.MINF"
    uint32 aid = xStrHash(stringBase0 + 0x163);
    xEnt* ent = (xEnt*) xSTFindAsset(aid, NULL);
    xModelInstance* model = zEntRecurseModelInfo(ent, NULL);

    model->PipeFlags = model->PipeFlags & 0xffffffcf | 0x10;
    model->Data->renderCallBack = &custom_bubble_render;
    if (model->Data->renderCallBack == NULL)
    {
        model->Data->renderCallBack = &AtomicDefaultRenderCallBack;
    }

    shared.missle_model = model;
}

// func_80058A94
#ifndef NON_MATCHING
// funcmatch
// `stringBase0 + 0x17b` gets cached in r31 where original asm reloads it everytime
// change the offset in every other `stringBase0 + 0x17b`
// and the only difference in the diff will be that new offset
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "reset_wake_ribbons__13cruise_bubbleFv")
#else
void cruise_bubble::reset_wake_ribbons()
{
    wake_ribbon[0].set_default_config();
    wake_ribbon[0].cfg.blend_src = 5;
    wake_ribbon[0].cfg.blend_dst = 2;

    
    if ((shared.flags & 0x200) == 0)
    {
        // stringBase0 + 0x17b == "lightning"
        wake_ribbon[0].set_texture(stringBase0 + 0x17b);
        wake_ribbon[1].set_texture(stringBase0 + 0x17b);
        wake_ribbon[0].set_curve(&wake_ribbon_curve[0], 2);
        wake_ribbon[1].set_curve(&wake_ribbon_curve[0], 2);

        wake_ribbon[0].cfg.life_time = zEntCruiseBubble_f_3_0;
    }
    else {
        wake_ribbon[0].set_texture(stringBase0 + 0x17b);
        wake_ribbon[1].set_texture(stringBase0 + 0x17b);
        wake_ribbon[0].set_curve(&cheat_wake_ribbon_curve[0], 2);
        wake_ribbon[1].set_curve(&cheat_wake_ribbon_curve[0], 2);

        wake_ribbon[0].cfg.life_time = zEntCruiseBubble_f_3_0;
    }
    wake_ribbon[0].cfg.pivot = zEntCruiseBubble_f_1_0;
    wake_ribbon[1].cfg = wake_ribbon[0].cfg;
    
    wake_ribbon[0].refresh_config();
    wake_ribbon[1].refresh_config();
}
#endif

xFXRibbon::config& xFXRibbon::config::operator=(const xFXRibbon::config& other)
{
    this->life_time = other.life_time;
    this->blend_src = other.blend_src;
    this->blend_dst = other.blend_dst;
    this->pivot = other.pivot;

    return *this;
}

// func_80058C14
void cruise_bubble::init_wake_ribbons()
{
    // stringBase0 + 0x185 == "Wake Ribbon 0"
    // stringBase0 + 0x193 == "Player|Cruise Bubble|Wake Ribbon 0|"
    wake_ribbon[0].init(stringBase0 + 0x185, stringBase0 + 0x193);
    // stringBase0 + 0x1b7 == "Wake Ribbon 1"
    // stringBase0 + 0x1c5 == "Player|Cruise Bubble|Wake Ribbon 1|"
    wake_ribbon[1].init(stringBase0 + 0x1b7, stringBase0 + 0x1c5);
    cruise_bubble::reset_wake_ribbons();
}

void cruise_bubble::reset_explode_decal()
{
    explode_decal.set_default_config();

    explode_decal.cfg.flags = 0x3;
    explode_decal.cfg.blend_src = 5;
    explode_decal.cfg.blend_dst = 2;

    if ((shared.flags & 0x200) == 0)
    {
        explode_decal.cfg.life_time = zEntCruiseBubble_f_0_5;
        explode_decal.set_curve(&explode_curve[0], 3);
        // stringBase0 + 0x1e9 == "par_cruise_explode"
        explode_decal.set_texture(stringBase0 + 0x1e9);
    }
    else
    {
        explode_decal.cfg.life_time = zEntCruiseBubble_f_0_5;
        explode_decal.set_curve(&cheat_explode_curve[0], 3);
        explode_decal.set_texture(stringBase0 + 0x1e9);
    }
    explode_decal.refresh_config();
}

// func_80058D38
#ifndef NON_MATCHING
// funcmatch
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "init_explode_decal__13cruise_bubbleFv")
#else
void cruise_bubble::init_explode_decal()
{
    explode_decal.init(1, stringBase0 + 0x1fc);
    explode_decal.set_default_config();

    // r0 should be use here
    explode_decal.cfg.flags = 0x3;
    // scheduling off here
    explode_decal.cfg.life_time = zEntCruiseBubble_f_0_5;
    explode_decal.cfg.blend_src = 5;
    explode_decal.cfg.blend_dst = 2;

    explode_decal.set_curve(explode_curve, 3);
    explode_decal.set_texture(stringBase0 + 0x1e9);
    explode_decal.refresh_config();
}
#endif

void cruise_bubble::init_shrapnel()
{
    shared.droplet_shrapnel = (zShrapnelAsset*) xSTFindAsset(xStrHash(stringBase0 + 0x214), NULL);
}

// func_80058E14
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "add_trail_sample__13cruise_bubbleFRC5xVec3RC5xVec3RC5xVec3RC5xVec3f")

// func_800590FC
#ifndef NON_MATCHING
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "update_trail__13cruise_bubbleFf")
#else
void cruise_bubble::update_trail(float32 dt)
{
    // will match once file complete
    // casting from int32 to float uses a float constant which cannot be extern'd

    if ((shared.flags & 0x80) == 0)
    {
        return;
    }

    shared.trail.samples += dt * current_tweak->trail.sample_rate;
    int32 samples = (int32) shared.trail.samples;

    if (samples <= 0)
    {
        shared.trail.samples = zEntCruiseBubble_f_0_0;
        samples = 1;
    }
    else
    {
        // float cast
        shared.trail.samples -= (float32) samples;
    }

    xMat4x3 end_mat;
    xQuat end_dir;
    refresh_trail(end_mat, end_dir);

    // float cast
    float32 ds = zEntCruiseBubble_f_1_0 / (float32) samples;
    float32 ddt = dt * ds;
    xVec3 dloc = (end_mat.pos - shared.trail.mat.pos) * ds;
    int32 flip = 0;
    float32 s = ds;

    xMat4x3 mat[2];
    mat[0] = shared.trail.mat;

    for (int i = 0; i < samples; ++i) {
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
#endif

void cruise_bubble::refresh_missle_model()
{
}

void cruise_bubble::update_missle(xScene& s, float32 dt)
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

void cruise_bubble::render_missle()
{
    xModelInstance* m = shared.missle_model;
    if ((m->Flags & 1) == 0) {
        return;
    }
    xModelRender(m);
}

// return type guessed based on return type of zEntRecurseModelInfo and xModelInstanceAlloc
xModelInstance* cruise_bubble::load_model(uint32 aid)
{
    xModelInstance* model;
    uint32 size;

    model = (xModelInstance*) xSTFindAsset(xStrHashCat(aid, stringBase0 + 0x233), &size);
    if (model != NULL)
    {
        model = zEntRecurseModelInfo(model, NULL);
        return model;
    }

    model = (xModelInstance*) xSTFindAsset(aid, &size);
    if (model == NULL)
    {
        model = (xModelInstance*) xSTFindAsset(xStrHashCat(aid, stringBase0 + 0x239), &size);
    }
    if (model == NULL) {
        return NULL;
    }
    return xModelInstanceAlloc((RpAtomic*) model, NULL, 0, 0, NULL);
}

// func_80059458
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "render_model_2d__13cruise_bubbleFP14xModelInstanceRC13basic_rect_esc__0_f_esc__1_f")

// func_80059584
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "render_glow__13cruise_bubbleFP14xModelInstanceRC13basic_rect_esc__0_f_esc__1_ff")

// func_80059698
#ifndef NON_MATCHING
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "init_hud__13cruise_bubbleFv")
#else
void cruise_bubble::init_hud()
{
    // should use stbu here and save an addi instruction
    // which should also fix the rest of the function by correcting offsets
    hud.hiding = false;
    hud.alpha = zEntCruiseBubble_f_0_0;
    hud.alpha_vel = zEntCruiseBubble_f_0_0;
    hud.glow = zEntCruiseBubble_f_0_0;
    hud.gizmos_used = 0;

    // stringBase0 + 0x23e == "ui_3dicon_reticle"
    hud.model.reticle = load_model(xStrHash(stringBase0 + 0x23e));
    // stringBase0 + 0x23e == "ui_3dicon_target_lock"
    hud.model.target = load_model(xStrHash(stringBase0 + 0x250));
    // stringBase0 + 0x23e == "ui_3dicon_missile_frame02"
    hud.model.wind = load_model(xStrHash(stringBase0 + 0x266));

    hud.uv_wind.init(hud.model.wind->Data);
    hud.uv_wind.offset_vel.assign(current_tweak->hud.wind.du, current_tweak->hud.wind.dv);
}
#endif

bool cruise_bubble::uv_animated_model::init(RpAtomic* m)
{
    this->model = m;
    if (m == NULL) {
        return false;
    }

    if (!this->clone_uv(this->uv, this->uvsize, m)) {
        return false;
    }
    
    this->offset.assign(zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_0_0);
    this->offset_vel.assign(zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_0_0);
    return true;
}

bool cruise_bubble::uv_animated_model::clone_uv(RwTexCoords*& coords, int32& size, RpAtomic* m) const
{
    RwTexCoords* c;
    if (!this->get_uv(c, size, m))
    {
        return false;
    }
    
    coords = (RwTexCoords*) xMemAlloc(gActiveHeap, size * 8, 0);
    if (coords == NULL) {
        return false;
    }

    memcpy(coords, c, size * 8); // [memcpy]
    return true;
}

bool cruise_bubble::uv_animated_model::get_uv(RwTexCoords*& coords, int32& size, RpAtomic* m) const
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

void cruise_bubble::show_gizmo(hud_gizmo& gizmo, const basic_rect<float32>& rect, xModelInstance* m)
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

void cruise_bubble::update_gizmo(cruise_bubble::hud_gizmo& gizmo, float32 dt)
{
    gizmo.alpha = range_limit<float32>(gizmo.alpha_vel * dt + gizmo.alpha,
            zEntCruiseBubble_f_0_0,
            zEntCruiseBubble_f_1_0);
    gizmo.glow = range_limit<float32>(gizmo.glow_vel * dt + gizmo.glow,
            zEntCruiseBubble_f_0_0,
            zEntCruiseBubble_f_1_0);
}

// func_800599C8
#ifndef NON_MATCHING
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "flash_hud__13cruise_bubbleFv")
#else
void cruise_bubble::flash_hud()
{
    // nice meme
    hud.glow = zEntCruiseBubble_f_1_0;
    hud.glow_vel = zEntCruiseBubble_f_n1_0 / current_tweak->hud.time_glow;
}
#endif

// func_800599F0
#ifndef NON_MATCHING
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "render_timer__13cruise_bubbleFff")
#else
void cruise_bubble::render_timer(float32 alpha, float32 glow)
{
    state_missle_fly* state = (state_missle_fly*) shared.state[THREAD_MISSLE];
    if (state == NULL || state->type != STATE_MISSLE_FLY)
    {
        return;
    }

    float32 life = state->life;
    char buffer[16];
    // stringBase0 + 0x280 == "%02d:%02d"
    sprintf(buffer, stringBase0 + 0x280,
            (int32) life,
            ((int32) (zEntCruiseBubble_f_100_0 * life)) - (100 * (int32) life));

    float32 dsize = glow * current_tweak->hud.timer.glow_size;
    // zEntCruiseBubble_f_0_0 is loaded too early, should be just before the call
    xfont font = xfont::create(current_tweak->hud.timer.font,
            current_tweak->hud.timer.font_width + dsize,
            current_tweak->hud.timer.font_height + dsize,
            zEntCruiseBubble_f_0_0, g_WHITE, screen_bounds);
    // register use for copying fields into font off, also causes a larger stack frame
    // also the color tags are loaded too early, should be just before the call
    lerp(font.color, glow, zEntCruiseBubble_color_80_00_00_FF, zEntCruiseBubble_color_FF_14_14_FF);
    font.color.a = (int32) (zEntCruiseBubble_f_255_0 * alpha + zEntCruiseBubble_f_0_5);

    basic_rect<float32> bound = font.bounds(buffer);
    float32 x = current_tweak->hud.timer.x - bound.x - zEntCruiseBubble_f_0_5 * bound.w;
    float32 y = current_tweak->hud.timer.y - bound.y - zEntCruiseBubble_f_0_5 * bound.h;

    font.render(buffer, x, y);
}
#endif

void cruise_bubble::lerp(iColor_tag& c, float32 t, iColor_tag a, iColor_tag b)
{
    lerp(c.r, t, a.r, b.r);
    lerp(c.g, t, a.g, b.g);
    lerp(c.b, t, a.b, b.b);
    lerp(c.a, t, a.a, b.a);
}

// func_80059C6C
#ifndef NON_MATCHING
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "lerp__13cruise_bubbleFRUcfUcUc")
#else
void cruise_bubble::lerp(uint8& x, float32 t, uint8 a, uint8 b)
{
    // will match once file complete
    // casting from int8 to float uses a float constant which cannot be extern'd
    x = zEntCruiseBubble_f_0_5 + ((float32) a + t * ((float32) b - (float32) a));
}
#endif

// func_80059CD8
#ifndef NON_MATCHING
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "update_hud__13cruise_bubbleFf")
#else
void cruise_bubble::update_hud(float32 dt)
{
    if (hud.gizmos_used == 0)
    {
        return;
    }
    
    hud.alpha = range_limit<float32>(hud.alpha_vel * dt + hud.alpha, zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_1_0);
    hud.glow = range_limit<float32>(hud.glow_vel * dt + hud.glow, zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_1_0);

    // scheduling off
    float32 vel_frac = ((state_missle_fly*) shared.states[STATE_MISSLE_FLY])->vel / current_tweak->missle.fly.max_vel;

    hud.uv_wind.offset_vel.assign(current_tweak->hud.wind.du, current_tweak->hud.wind.dv);
    hud.uv_wind.offset_vel *= vel_frac;
    hud.model.wind->Alpha = vel_frac;
    hud.uv_wind.update(dt);

    // sheduling off for i and zEntCruiseBubble_f_n1_0
    for (int32 i = 1; i < hud.gizmos_used; ++i)
    {
        if ((hud.gizmo[i].flags & 0x1) == 0)
        {
            hud.gizmo[i].alpha_vel = zEntCruiseBubble_f_n1_0 / current_tweak->hud.time_fade;
        }
    }

    int32 i = 0;
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

    for (int32 i = 1; i < hud.gizmos_used; ++i)
    {
        hud.gizmo[i].flags = hud.gizmo[i].flags & 0xfffffffe;
    }
}
#endif

// func_80059EB4
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "__as__Q213cruise_bubble9hud_gizmoFRCQ213cruise_bubble9hud_gizmo")

void cruise_bubble::uv_animated_model::update(float32 dt)
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

// func_80059FA0
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "refresh__Q213cruise_bubble17uv_animated_modelFv")

// func_8005A0E0
#ifndef NON_MATCHING
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "render_hud__13cruise_bubbleFv")
#else
void cruise_bubble::render_hud()
{
    if (hud.gizmos_used == 0)
    {
        return;
    }

    zRenderState(SDRS_CruiseHUD);

    if (hud.model.wind->Alpha > zEntCruiseBubble_f_0_0)
    {
        RwRenderStateSet(rwRENDERSTATESRCBLEND, (void*) 5);
        RwRenderStateSet(rwRENDERSTATEDESTBLEND, (void*) 2);

        basic_rect<float32> bound;
        bound.set_size(current_tweak->hud.wind.size, current_tweak->hud.wind.size);
        bound.center(zEntCruiseBubble_f_0_5, zEntCruiseBubble_f_0_5);

        render_model_2d(hud.model.wind, bound, hud.model.wind->Alpha);
    }

    RwRenderStateSet(rwRENDERSTATESRCBLEND, (void*) 5);
    RwRenderStateSet(rwRENDERSTATEDESTBLEND, (void*) 6);

    for (int32 i = 0; i < hud.gizmos_used; ++i)
    {
        hud_gizmo* gizmo = &hud.gizmo[i];
        float32 alpha = hud.alpha * gizmo->alpha * gizmo->opacity;
        if (!(alpha <= zEntCruiseBubble_f_0_0))
        {
            render_model_2d(gizmo->model, gizmo->bound, alpha);
        }
    }

    RwRenderStateSet(rwRENDERSTATESRCBLEND, (void*) 5);
    RwRenderStateSet(rwRENDERSTATEDESTBLEND, (void*) 2);

    for (int32 i = 0; i < hud.gizmos_used; ++i)
    {
        hud_gizmo* gizmo = &hud.gizmo[i];
        
        // regalloc
        float32 glow = hud.glow + gizmo->glow;
        if (glow > zEntCruiseBubble_f_1_0)
        {
            glow = zEntCruiseBubble_f_1_0;
        }
        else if (glow <= zEntCruiseBubble_f_0_0)
        {
            continue;
        }
        
        float32 alpha = hud.alpha * gizmo->alpha * gizmo->opacity;
        if (!(alpha <= zEntCruiseBubble_f_0_0))
        {
            render_glow(gizmo->model, gizmo->bound, glow, alpha);
        }
    }

    render_timer(hud.alpha, hud.glow);
}
#endif

// func_8005A2AC
#if 1
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "show_hud__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv")
#else
void cruise_bubble::show_hud()
{
    // scheduling and register usage off
    hud.gizmos_used = 1;
	basic_rect<float32> reticle_bound;
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
#endif

// func_8005A340
#ifndef NON_MATCHING
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "hide_hud__13cruise_bubbleFv")
#else
void cruise_bubble::hide_hud()
{
    hud.gizmos_used = 0;
    // float scheduling ...
    hud.model.wind->Alpha = zEntCruiseBubble_f_0_0;
}
#endif

xVec3 cruise_bubble::world_to_screen(const xVec3& loc)
{
    iCameraUpdatePos(globals.camera.lo_cam, &globals.camera.mat);

    xVec3 world_loc;
	xMat4x3* view_mat = (xMat4x3*) &globals.camera.lo_cam->viewMatrix;
    xMat4x3Toworld(&world_loc, view_mat, &loc);
    
    xVec3 screen_loc;
    float32 iz = zEntCruiseBubble_f_1_0 / world_loc.z;
    screen_loc.assign(world_loc.x * iz, world_loc.y * iz, zEntCruiseBubble_f_1_0);
    
    return screen_loc;
}

int32 cruise_bubble::find_locked_target(const xVec3* target)
{
    for (int32 i = 1; i < hud.gizmos_used; ++i)
    {
        if (hud.gizmo[i].target == target)
        {
            return i;
        }
    }

    return -1;
}

// func_8005A44C
#ifndef NON_MATCHING
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "lock_target__13cruise_bubbleFiPC5xVec3f")
#else
void cruise_bubble::lock_target(int32 index, const xVec3* target, float32 opacity)
{
    if (index <= -1 && hud.gizmos_used >= 33)
    {
        return;
    }

    hud_gizmo* gizmo;
    if (index <= -1)
    {
        index = hud.gizmos_used;
    	gizmo = &hud.gizmo[hud.gizmos_used++];
        // offsets for gizmo and gizmo->bound are calculated incremental
        // instead should be to absolute offsets from the same base
        show_gizmo(*gizmo, gizmo->bound, hud.model.target);
    }
    gizmo = &hud.gizmo[index];
    xVec3 screen_loc = world_to_screen(*target);

    gizmo->bound.set_size(current_tweak->hud.target.size);
    gizmo->bound.center(screen_loc.x, screen_loc.y);
    gizmo->flags = 0x1;
    gizmo->alpha_vel = zEntCruiseBubble_f_1_0 / current_tweak->hud.time_fade;
    gizmo->model = hud.model.target;
    gizmo->target = target;
    gizmo->opacity = opacity;
}
#endif

void cruise_bubble::check_lock_target(const xVec3* target)
{
    xMat4x3* mat = &globals.camera.mat;
    xVec3 offset = *target - mat->pos;
    float32 ang = offset.dot(mat->at);

    if (ang < current_tweak->reticle.dist_min || ang > current_tweak->reticle.dist_max)
    {
        return;
    }

    ang = offset.length();
    if ((ang >= zEntCruiseBubble_f_n0_00001) &&
            (ang <= zEntCruiseBubble_f_0_00001))
    {
        ang = zEntCruiseBubble_f_0_0;
    }
    else
    {
        ang = xacos(offset.dot(mat->at) / ang);
    }
    
    float32 max_ang = current_tweak->reticle.ang_show;
    float32 min_ang = current_tweak->reticle.ang_hide;

    if (ang >= min_ang)
    {
        return;
    }

    if (ang >= max_ang)
    {
        int32 t = find_locked_target(target);
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

uint32 cruise_bubble::check_anim_aim(xAnimTransition*, xAnimSingle*)
{
    return false;
}

// func_8005A6E0
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "load_cheat_tweak__13cruise_bubbleFv")

void cruise_bubble::load_settings()
{
    uint32 params_size;
    // stringBase0 + 0x163 == "cruise_bubble_bind.MINF"
    xModelAssetParam* params = zEntGetModelParams(xStrHash(stringBase0 + 0x163), &params_size);
    
    if (params == NULL)
    {
        params_size = 0;
    }
    
    normal_tweak.load(params, params_size);
    memcpy(&cheat_tweak, &normal_tweak, sizeof(tweak_group));
    load_cheat_tweak();
    refresh_missle_model();
}

void cruise_bubble::tweak_group::load(xModelAssetParam* params, uint32 size)
{
    this->register_tweaks(true, params, size, NULL);
}

// func_8005A8B0
#ifndef NON_MATCHING
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "register_tweaks__Q213cruise_bubble11tweak_groupFbP16xModelAssetParamUiPCc")
#else
void cruise_bubble::tweak_group::register_tweaks(bool init, xModelAssetParam* ap, uint32 apsize, const int8*)
{
    if (init)
    {
        this->aim_delay = zEntCruiseBubble_f_0_2;
        // scheduling for loading ap and apsize is off :(
        // stringBase0 + 0x290 == "aim_delay"
        auto_tweak::load_param<float32, float32>(this->aim_delay,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_1_0,
                ap, apsize, stringBase0 + 0x290);
    }

    if (init)
    {
        this->player.halt_time = zEntCruiseBubble_f_0_5;
        // stringBase0 + 0x29a == "player.halt_time"
        auto_tweak::load_param<float32, float32>(this->player.halt_time,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_1_0,
                ap, apsize, stringBase0 + 0x29a);
    }
    
    if (init)
    {
        this->player.aim.turn_speed = zEntCruiseBubble_f_0_05;
        // stringBase0 + 0x2ab == "player.aim.turn_speed"
        auto_tweak::load_param<float32, float32>(this->player.aim.turn_speed,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_01, zEntCruiseBubble_f_1000000000_0,
                ap, apsize, stringBase0 + 0x2ab);
    }
    
    if (init)
    {
        this->player.aim.anim_delta = zEntCruiseBubble_f_0_5;
        // stringBase0 + 0x2c1 == "player.aim.anim_delta"
        auto_tweak::load_param<float32, float32>(this->player.aim.anim_delta,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_1000000000_0,
                ap, apsize, stringBase0 + 0x2c1);
    }
    
    if (init)
    {
        this->player.fire.delay_wand = zEntCruiseBubble_f_0_0667;
        // stringBase0 + 0x2d7 == "player.fire.delay_wand"
        auto_tweak::load_param<float32, float32>(this->player.fire.delay_wand,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_100_0,
                ap, apsize, stringBase0 + 0x2d7);
    }
    
    if (init)
    {
        this->missle.life = zEntCruiseBubble_f_6_0;
        // stringBase0 + 0x2ee == "missle.life"
        auto_tweak::load_param<float32, float32>(this->missle.life,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_01, zEntCruiseBubble_f_1000000000_0,
                ap, apsize, stringBase0 + 0x2ee);
    }
    
    if (init)
    {
        this->missle.hit_dist = zEntCruiseBubble_f_0_3;
        // stringBase0 + 0x2fa == "missle.hit_dist"
        auto_tweak::load_param<float32, float32>(this->missle.hit_dist,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_1_0,
                ap, apsize, stringBase0 + 0x2fa);
    }
    
    if (init)
    {
        this->missle.crash_angle = zEntCruiseBubble_f_30_0;
        // stringBase0 + 0x30a == "missle.crash_angle"
        auto_tweak::load_param<float32, float32>(this->missle.crash_angle,
                zEntCruiseBubble_f_0_017, zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_60_0,
                ap, apsize, stringBase0 + 0x30a);
    }

    if (init)
    {
        this->missle.collide_twist = zEntCruiseBubble_f_0_025;
        // stringBase0 + 0x31d == "missle.collide_twist"
        auto_tweak::load_param<float32, float32>(this->missle.collide_twist,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_1_0,
                ap, apsize, stringBase0 + 0x31d);
    }

    if (init)
    {
        this->missle.hit_tests = 4;
        // stringBase0 + 0x332 == "missle.hit_tests"
        auto_tweak::load_param<int32, int32>(this->missle.hit_tests,
                1, 1, 100, ap, apsize, stringBase0 + 0x332);
    }
    
    if (init)
    {
        this->missle.appear.delay_show = zEntCruiseBubble_f_0_1333;
        // stringBase0 + 0x343 == "missle.appear.delay_show"
        auto_tweak::load_param<float32, float32>(this->missle.appear.delay_show,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_100_0,
                ap, apsize, stringBase0 + 0x343);
    }
    
    if (init)
    {
        this->missle.appear.delay_fly = zEntCruiseBubble_f_0_667;
        // stringBase0 + 0x35c == "missle.appear.delay_fly"
        auto_tweak::load_param<float32, float32>(this->missle.appear.delay_fly,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_100_0,
                ap, apsize, stringBase0 + 0x35c);
    }
    
    if (init)
    {
        this->missle.appear.offset = xVec3::create(
                zEntCruiseBubble_f_n0_049,
                zEntCruiseBubble_f_1_728,
                zEntCruiseBubble_f_0_922);
        // stringBase0 + 0x374 == "missle.appear.offset"
        auto_tweak::load_param<xVec3, int32>(this->missle.appear.offset,
                0, 0, 0, ap, apsize, stringBase0 + 0x374);
    }

    if (init)
    {
        this->missle.fly.accel = zEntCruiseBubble_f_6_0;
        // stringBase0 + 0x389 == "missle.fly.accel"
        auto_tweak::load_param<float32, float32>(this->missle.fly.accel,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_01, zEntCruiseBubble_f_1000000000_0,
                ap, apsize, stringBase0 + 0x389);
    }

    if (init)
    {
        this->missle.fly.max_vel = zEntCruiseBubble_f_12_0;
        // stringBase0 + 0x39a == "missle.fly.max_vel"
        auto_tweak::load_param<float32, float32>(this->missle.fly.max_vel,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_01, zEntCruiseBubble_f_1000000000_0,
                ap, apsize, stringBase0 + 0x39a);
    }

    if (init)
    {
        this->missle.fly.engine_pitch_max = zEntCruiseBubble_f_10_0;
        // stringBase0 + 0x3ad == "missle.fly.engine_pitch_max"
        auto_tweak::load_param<float32, float32>(this->missle.fly.engine_pitch_max,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_01, zEntCruiseBubble_f_1000000000_0,
                ap, apsize, stringBase0 + 0x3ad);
    }
    
    if (init)
    {
        this->missle.fly.engine_pitch_sensitivity = zEntCruiseBubble_f_0_005;
        // stringBase0 + 0x3c9 == "missle.fly.engine_pitch_sensitivity"
        auto_tweak::load_param<float32, float32>(this->missle.fly.engine_pitch_sensitivity,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_1_0,
                ap, apsize, stringBase0 + 0x3c9);
    }
    
    if (init)
    {
        this->missle.fly.flash_interval = zEntCruiseBubble_f_2_0;
        // stringBase0 + 0x3ed == "missle.fly.flash_interval"
        auto_tweak::load_param<float32, float32>(this->missle.fly.flash_interval,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_1000000000_0,
                ap, apsize, stringBase0 + 0x3ed);
    }
    
    if (init)
    {
        this->missle.fly.turn.xdelta = zEntCruiseBubble_f_5_0;
        // stringBase0 + 0x407 == "missle.fly.turn.xdelta"
        auto_tweak::load_param<float32, float32>(this->missle.fly.turn.xdelta,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_01, zEntCruiseBubble_f_1000000000_0,
                ap, apsize, stringBase0 + 0x407);
    }
    
    if (init)
    {
        this->missle.fly.turn.ydelta = zEntCruiseBubble_f_4_0;
        // stringBase0 + 0x41e == "missle.fly.turn.ydelta"
        auto_tweak::load_param<float32, float32>(this->missle.fly.turn.ydelta,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_01, zEntCruiseBubble_f_1000000000_0,
                ap, apsize, stringBase0 + 0x41e);
    }
    
    if (init)
    {
        this->missle.fly.turn.xdecay = zEntCruiseBubble_f_0_99;
        // stringBase0 + 0x435 == "missle.fly.turn.xdecay"
        auto_tweak::load_param<float32, float32>(this->missle.fly.turn.xdecay,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_1_0,
                ap, apsize, stringBase0 + 0x435);
    }
    
    if (init)
    {
        this->missle.fly.turn.ydecay = zEntCruiseBubble_f_0_99;
        // stringBase0 + 0x44c == "missle.fly.turn.ydecay"
        auto_tweak::load_param<float32, float32>(this->missle.fly.turn.ydecay,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_1_0,
                ap, apsize, stringBase0 + 0x44c);
    }
    
    if (init)
    {
        this->missle.fly.turn.ybound = zEntCruiseBubble_f_0_6;
        // stringBase0 + 0x463 == "missle.fly.turn.ybound"
        auto_tweak::load_param<float32, float32>(this->missle.fly.turn.ybound,
                zEntCruiseBubble_f_1_5708, zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_1_0,
                ap, apsize, stringBase0 + 0x463);
    }
    
    if (init)
    {
        this->missle.fly.turn.roll_frac = zEntCruiseBubble_f_0_2;
        // stringBase0 + 0x47a == "missle.fly.turn.roll_frac"
        auto_tweak::load_param<float32, float32>(this->missle.fly.turn.roll_frac,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_n1_0, zEntCruiseBubble_f_1_0,
                ap, apsize, stringBase0 + 0x47a);
    }
    
    if (init)
    {
        this->missle.explode.hit_radius = zEntCruiseBubble_f_1_0;
        // stringBase0 + 0x494 == "missle.explode.hit_radius"
        auto_tweak::load_param<float32, float32>(this->missle.explode.hit_radius,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_10_0,
                ap, apsize, stringBase0 + 0x494);
    }
    
    if (init)
    {
        this->missle.explode.hit_duration = zEntCruiseBubble_f_0_25;
        // stringBase0 + 0x4ae == "missle.explode.hit_duration"
        auto_tweak::load_param<float32, float32>(this->missle.explode.hit_duration,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_10_0,
                ap, apsize, stringBase0 + 0x4ae);
    }

    if (init)
    {
        this->camera.aim.dist = zEntCruiseBubble_f_2_0;
        // stringBase0 + 0x4ca == "camera.aim.dist"
        auto_tweak::load_param<float32, float32>(this->camera.aim.dist,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_100_0,
                ap, apsize, stringBase0 + 0x4ca);
    }
    
    if (init)
    {
        this->camera.aim.height = zEntCruiseBubble_f_1_5;
        // stringBase0 + 0x4da == "camera.aim.height"
        auto_tweak::load_param<float32, float32>(this->camera.aim.height,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_n10_0, zEntCruiseBubble_f_10_0,
                ap, apsize, stringBase0 + 0x4da);
    }
    
    if (init)
    {
        this->camera.aim.pitch = zEntCruiseBubble_f_0_0;
        // stringBase0 + 0x4ec == "camera.aim.pitch"
        auto_tweak::load_param<float32, float32>(this->camera.aim.pitch,
                zEntCruiseBubble_f_0_017, zEntCruiseBubble_f_n90_0, zEntCruiseBubble_f_90_0,
                ap, apsize, stringBase0 + 0x4ec);
    }
    
    if (init)
    {
        this->camera.aim.accel = zEntCruiseBubble_f_10_0;
        // stringBase0 + 0x4fd == "camera.aim.accel"
        auto_tweak::load_param<float32, float32>(this->camera.aim.accel,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_01, zEntCruiseBubble_f_1000000000_0,
                ap, apsize, stringBase0 + 0x4fd);
    }
    
    if (init)
    {
        this->camera.aim.max_vel = zEntCruiseBubble_f_5_0;
        // stringBase0 + 0x50e == "camera.aim.max_vel"
        auto_tweak::load_param<float32, float32>(this->camera.aim.max_vel,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_01, zEntCruiseBubble_f_1000000000_0,
                ap, apsize, stringBase0 + 0x50e);
    }
    
    if (init)
    {
        this->camera.aim.stick_decel = zEntCruiseBubble_f_720_0;
        // stringBase0 + 0x521 == "camera.aim.stick_decel"
        auto_tweak::load_param<float32, float32>(this->camera.aim.stick_decel,
                zEntCruiseBubble_f_0_017, zEntCruiseBubble_f_0_01, zEntCruiseBubble_f_1000000000_0,
                ap, apsize, stringBase0 + 0x521);
    }

    if (init)
    {
        this->camera.aim.stick_accel = zEntCruiseBubble_f_360_0;
        // stringBase0 + 0x538 == "camera.aim.stick_accel"
        auto_tweak::load_param<float32, float32>(this->camera.aim.stick_accel,
                zEntCruiseBubble_f_0_017, zEntCruiseBubble_f_0_01, zEntCruiseBubble_f_1000000000_0,
                ap, apsize, stringBase0 + 0x538);
    }
    
    if (init)
    {
        this->camera.aim.stick_max_vel = zEntCruiseBubble_f_135_0;
        // stringBase0 + 0x54f == "camera.aim.stick_max_vel"
        auto_tweak::load_param<float32, float32>(this->camera.aim.stick_max_vel,
                zEntCruiseBubble_f_0_017, zEntCruiseBubble_f_0_01, zEntCruiseBubble_f_1000000000_0,
                ap, apsize, stringBase0 + 0x54f);
    }
    
    if (init)
    {
        this->camera.aim.turn_speed = zEntCruiseBubble_f_0_2;
        // stringBase0 + 0x568 == "camera.aim.turn_speed"
        auto_tweak::load_param<float32, float32>(this->camera.aim.turn_speed,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_001, zEntCruiseBubble_f_1000000000_0,
                ap, apsize, stringBase0 + 0x568);
    }
    
    if (init)
    {
        this->camera.seize.delay = zEntCruiseBubble_f_0_0;
        // stringBase0 + 0x57e == "camera.seize.delay"
        auto_tweak::load_param<float32, float32>(this->camera.seize.delay,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_1000000000_0,
                ap, apsize, stringBase0 + 0x57e);
    }

    if (init)
    {
        this->camera.seize.blend_time = zEntCruiseBubble_f_1_5;
        // stringBase0 + 0x591 == "camera.seize.blend_time"
        auto_tweak::load_param<float32, float32>(this->camera.seize.blend_time,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_1000000000_0,
                ap, apsize, stringBase0 + 0x591);
    }

    if (init)
    {
        this->camera.seize.fade_dist = zEntCruiseBubble_f_2_0;
        // stringBase0 + 0x5a9 == "camera.seize.fade_dist"
        auto_tweak::load_param<float32, float32>(this->camera.seize.fade_dist,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_10_0,
                ap, apsize, stringBase0 + 0x5a9);
    }
    
    if (init)
    {
        this->camera.seize.hide_dist = zEntCruiseBubble_f_1_0;
        // stringBase0 + 0x5c0 == "camera.seize.hide_dist"
        auto_tweak::load_param<float32, float32>(this->camera.seize.hide_dist,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_10_0,
                ap, apsize, stringBase0 + 0x5c0);
    }

    if (init)
    {
        this->camera.seize.fov = zEntCruiseBubble_f_95_0;
        // stringBase0 + 0x5d7 == "camera.seize.fov"
        auto_tweak::load_param<float32, float32>(this->camera.seize.fov,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_10_0, zEntCruiseBubble_f_180_0,
                ap, apsize, stringBase0 + 0x5d7);
    }

    if (init)
    {
        this->camera.survey.duration = zEntCruiseBubble_f_2_0;
        // stringBase0 + 0x5e8 == "camera.survey.duration"
        auto_tweak::load_param<float32, float32>(this->camera.survey.duration,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_10_0,
                ap, apsize, stringBase0 + 0x5e8);
    }
    
    if (init)
    {
        this->camera.survey.min_duration = zEntCruiseBubble_f_0_25;
        // stringBase0 + 0x5ff == "camera.survey.min_duration"
        auto_tweak::load_param<float32, float32>(this->camera.survey.min_duration,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_10_0,
                ap, apsize, stringBase0 + 0x5ff);
    }
    
    if (init)
    {
        this->camera.survey.min_dist = zEntCruiseBubble_f_10_0;
        // stringBase0 + 0x61a == "camera.survey.min_dist"
        auto_tweak::load_param<float32, float32>(this->camera.survey.min_dist,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_100_0,
                ap, apsize, stringBase0 + 0x61a);
    }
    
    if (init)
    {
        this->camera.survey.cut_dist = zEntCruiseBubble_f_6_0;
        // stringBase0 + 0x631 == "camera.survey.cut_dist"
        auto_tweak::load_param<float32, float32>(this->camera.survey.cut_dist,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_100_0,
                ap, apsize, stringBase0 + 0x631);
    }
    
    if (init)
    {
        this->camera.survey.drift_dist = zEntCruiseBubble_f_8_0;
        // stringBase0 + 0x648 == "camera.survey.drift_dist"
        auto_tweak::load_param<float32, float32>(this->camera.survey.drift_dist,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_100_0,
                ap, apsize, stringBase0 + 0x648);
    }

    if (init)
    {
        this->camera.survey.drift_softness = zEntCruiseBubble_f_0_1;
        // stringBase0 + 0x661 == "camera.survey.drift_softness"
        auto_tweak::load_param<float32, float32>(this->camera.survey.drift_softness,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_0_5,
                ap, apsize, stringBase0 + 0x661);

    }

    if (init)
    {
        this->camera.survey.jerk_offset = zEntCruiseBubble_f_0_8;
        // stringBase0 + 0x67e == "camera.survey.jerk_offset"
        auto_tweak::load_param<float32, float32>(this->camera.survey.jerk_offset,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_2_0,
                ap, apsize, stringBase0 + 0x67e);
    }
    
    if (init)
    {
        this->camera.survey.jerk_deflect = zEntCruiseBubble_f_0_6;
        // stringBase0 + 0x698 == "camera.survey.jerk_deflect"
        auto_tweak::load_param<float32, float32>(this->camera.survey.jerk_deflect,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_1_0,
                ap, apsize, stringBase0 + 0x698);
    }

    if (init)
    {
        this->camera.restore.control_delay = zEntCruiseBubble_f_0_25;
        // stringBase0 + 0x6b3 == "camera.restore.control_delay"
        auto_tweak::load_param<float32, float32>(this->camera.restore.control_delay,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_1_0,
                ap, apsize, stringBase0 + 0x6b3);
    }
    
    if (init)
    {
        this->material.env_alpha = zEntCruiseBubble_f_0_5;
        // stringBase0 + 0x6d0 == "material.env_alpha"
        auto_tweak::load_param<float32, float32>(this->material.env_alpha,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_1_0,
                ap, apsize, stringBase0 + 0x6d0);

    }

    if (init)
    {
        this->material.env_coeff = zEntCruiseBubble_f_0_5;
        // stringBase0 + 0x6e3 == "material.env_coeff"
        auto_tweak::load_param<float32, float32>(this->material.env_coeff,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_1_0,
                ap, apsize, stringBase0 + 0x6e3);

    }

    if (init)
    {
        this->material.fresnel_alpha = zEntCruiseBubble_f_0_0;
        // stringBase0 + 0x6f6 == "material.fresnel_alpha"
        auto_tweak::load_param<float32, float32>(this->material.fresnel_alpha,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_1_0,
                ap, apsize, stringBase0 + 0x6f6);
    }
    
    if (init)
    {
        this->material.fresnel_coeff = zEntCruiseBubble_f_0_75;
        // stringBase0 + 0x70d == "material.fresnel_coeff"
        auto_tweak::load_param<float32, float32>(this->material.fresnel_coeff,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_1_0,
                ap, apsize, stringBase0 + 0x70d);
    }
    
    if (init)
    {
        this->reticle.dist_min = zEntCruiseBubble_f_3_0;
        // stringBase0 + 0x724 == "reticle.dist_min"
        auto_tweak::load_param<float32, float32>(this->reticle.dist_min,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_10_0,
                ap, apsize, stringBase0 + 0x724);
    }

    if (init)
    {
        this->reticle.dist_max = zEntCruiseBubble_f_30_0;
        // stringBase0 + 0x735 == "reticle.dist_max"
        auto_tweak::load_param<float32, float32>(this->reticle.dist_max,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_10000_0,
                ap, apsize, stringBase0 + 0x735);
    }
    
    if (init)
    {
        this->reticle.ang_show = zEntCruiseBubble_f_4_0;
        // stringBase0 + 0x746 == "reticle.ang_show"
        auto_tweak::load_param<float32, float32>(this->reticle.ang_show,
                zEntCruiseBubble_f_0_017, zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_90_0,
                ap, apsize, stringBase0 + 0x746);
    }
    
    if (init)
    {
        this->reticle.ang_hide = zEntCruiseBubble_f_22_5;
        // stringBase0 + 0x757 == "reticle.ang_hide"
        auto_tweak::load_param<float32, float32>(this->reticle.ang_hide,
                zEntCruiseBubble_f_0_017, zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_90_0,
                ap, apsize, stringBase0 + 0x757);
    }
    
    if (init)
    {
        this->reticle.delay_retarget = zEntCruiseBubble_f_0_25;
        // stringBase0 + 0x768 == "reticle.delay_retarget"
        auto_tweak::load_param<float32, float32>(this->reticle.delay_retarget,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_5_0,
                ap, apsize, stringBase0 + 0x768);
    }
    
    if (init)
    {
        this->trail.sample_rate = zEntCruiseBubble_f_60_0;
        // stringBase0 + 0x77f == "trail.sample_rate"
        auto_tweak::load_param<float32, float32>(this->trail.sample_rate,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_10000_0,
                ap, apsize, stringBase0 + 0x77f);
    }
    
    if (init)
    {
        this->trail.bubble_rate = zEntCruiseBubble_f_60_0;
        // stringBase0 + 0x791 == "trail.bubble_rate"
        auto_tweak::load_param<float32, float32>(this->trail.bubble_rate,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_10000_0,
                ap, apsize, stringBase0 + 0x791);
    }
    
    if (init)
    {
        this->trail.bubble_emit_radius = zEntCruiseBubble_f_0_5;
        // stringBase0 + 0x7a3 == "trail.bubble_emit_radius"
        auto_tweak::load_param<float32, float32>(this->trail.bubble_emit_radius,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_10_0,
                ap, apsize, stringBase0 + 0x7a3);
    }
    
    if (init)
    {
        this->trail.wake_emit_radius = zEntCruiseBubble_f_0_1;
        // stringBase0 + 0x7bc == "trail.wake_emit_radius"
        auto_tweak::load_param<float32, float32>(this->trail.wake_emit_radius,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_10_0,
                ap, apsize, stringBase0 + 0x7bc);
    }
    
    if (init)
    {
        this->blast.emit = 300;
        // stringBase0 + 0x7d3 == "blast.emit"
        auto_tweak::load_param<uint32, int32>(this->blast.emit,
                1, 0, 0x3e8, ap, apsize, stringBase0 + 0x7d3);
    }
    
    if (init)
    {
        this->blast.radius = zEntCruiseBubble_f_0_0;
        // stringBase0 + 0x7de == "blast.radius"
        auto_tweak::load_param<float32, float32>(this->blast.radius,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_10_0,
                ap, apsize, stringBase0 + 0x7de);
    }
    
    if (init)
    {
        this->blast.vel = zEntCruiseBubble_f_5_0;
        // stringBase0 + 0x7eb == "blast.vel"
        auto_tweak::load_param<float32, float32>(this->blast.vel,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_n100000_0, zEntCruiseBubble_f_100000_0,
                ap, apsize, stringBase0 + 0x7eb);
    }
    
    if (init)
    {
        this->blast.rand_vel = zEntCruiseBubble_f_0_5;
        // stringBase0 + 0x7f5 == "blast.rand_vel"
        auto_tweak::load_param<float32, float32>(this->blast.rand_vel,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_n100000_0, zEntCruiseBubble_f_100000_0,
                ap, apsize, stringBase0 + 0x7f5);
    }
    
    if (init)
    {
        this->droplet.dist_min = zEntCruiseBubble_f_1_0;
        // stringBase0 + 0x804 == "droplet.dist_min"
        auto_tweak::load_param<float32, float32>(this->droplet.dist_min,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_10_0,
                ap, apsize, stringBase0 + 0x804);
    }
    
    if (init)
    {
        this->droplet.dist_max = zEntCruiseBubble_f_2_0;
        // stringBase0 + 0x815 == "droplet.dist_max"
        auto_tweak::load_param<float32, float32>(this->droplet.dist_max,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_10_0,
                ap, apsize, stringBase0 + 0x815);
    }
    
    if (init)
    {
        this->droplet.emit_min = 10;
        // stringBase0 + 0x826 == "droplet.emit_min"
        auto_tweak::load_param<uint32, int32>(this->droplet.emit_min,
                1, 0, 0x1e, ap, apsize, stringBase0 + 0x826);
    }
    
    if (init)
    {
        this->droplet.emit_max = 20;
        // stringBase0 + 0x837 == "droplet.emit_max"
        auto_tweak::load_param<uint32, int32>(this->droplet.emit_max,
                1, 0, 0x1e, ap, apsize, stringBase0 + 0x837);
    }
    
    if (init)
    {
        this->droplet.vel_min = zEntCruiseBubble_f_2_0;
        // stringBase0 + 0x848 == "droplet.vel_min"
        auto_tweak::load_param<float32, float32>(this->droplet.vel_min,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_100000_0,
                ap, apsize, stringBase0 + 0x848);
    }
    
    if (init)
    {
        this->droplet.vel_max = zEntCruiseBubble_f_6_0;
        // stringBase0 + 0x858 == "droplet.vel_max"
        auto_tweak::load_param<float32, float32>(this->droplet.vel_max,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_100000_0,
                ap, apsize, stringBase0 + 0x858);
    }
    
    if (init)
    {
        this->droplet.vel_perturb = zEntCruiseBubble_f_0_25;
        // stringBase0 + 0x868 == "droplet.vel_perturb"
        auto_tweak::load_param<float32, float32>(this->droplet.vel_perturb,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_100000_0,
                ap, apsize, stringBase0 + 0x868);
    }
    
    if (init)
    {
        this->droplet.vel_angle = zEntCruiseBubble_f_60_0;
        // stringBase0 + 0x87c == "droplet.vel_angle"
        auto_tweak::load_param<float32, float32>(this->droplet.vel_angle,
                zEntCruiseBubble_f_0_017, zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_100000_0,
                ap, apsize, stringBase0 + 0x87c);
    }
    
    if (init)
    {
        this->droplet.rot_vel_max = zEntCruiseBubble_f_360_0;
        // stringBase0 + 0x88e == "droplet.rot_vel_max"
        auto_tweak::load_param<float32, float32>(this->droplet.rot_vel_max,
                zEntCruiseBubble_f_0_017, zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_100000_0,
                ap, apsize, stringBase0 + 0x88e);
    }
    
    if (init)
    {
        this->hud.glow_size = zEntCruiseBubble_f_0_05;
        // stringBase0 + 0x8a2 == "hud.glow_size"
        auto_tweak::load_param<float32, float32>(this->hud.glow_size,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_001, zEntCruiseBubble_f_10_0,
                ap, apsize, stringBase0 + 0x8a2);
    }
    
    if (init)
    {
        this->hud.time_fade = zEntCruiseBubble_f_0_25;
        // stringBase0 + 0x8b0 == "hud.time_fade"
        auto_tweak::load_param<float32, float32>(this->hud.time_fade,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_001, zEntCruiseBubble_f_10_0,
                ap, apsize, stringBase0 + 0x8b0);
    }
    
    if (init)
    {
        this->hud.time_glow = zEntCruiseBubble_f_0_5;
        // stringBase0 + 0x8be == "hud.time_glow"
        auto_tweak::load_param<float32, float32>(this->hud.time_glow,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_001, zEntCruiseBubble_f_10_0,
                ap, apsize, stringBase0 + 0x8be);
    }
    
    if (init)
    {
        this->hud.wind.size = zEntCruiseBubble_f_0_75;
        // stringBase0 + 0x8cc == "hud.wind.size"
        auto_tweak::load_param<float32, float32>(this->hud.wind.size,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_100_0,
                ap, apsize, stringBase0 + 0x8cc);
    }
    
    if (init)
    {
        this->hud.wind.du = zEntCruiseBubble_f_0_0;
        // stringBase0 + 0x8da == "hud.wind.du"
        auto_tweak::load_param<float32, float32>(this->hud.wind.du,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_n1000000000_0, zEntCruiseBubble_f_1000000000_0,
                ap, apsize, stringBase0 + 0x8da);
    }
    
    if (init)
    {
        this->hud.wind.dv = zEntCruiseBubble_f_4_0;
        // stringBase0 + 0x8e6 == "hud.wind.dv"
        auto_tweak::load_param<float32, float32>(this->hud.wind.dv,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_n1000000000_0, zEntCruiseBubble_f_1000000000_0,
                ap, apsize, stringBase0 + 0x8e6);
    }
    
    if (init)
    {
        this->hud.reticle.size = zEntCruiseBubble_f_0_1;
        // stringBase0 + 0x8f2 == "hud.reticle.size"
        auto_tweak::load_param<float32, float32>(this->hud.reticle.size,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_100_0,
                ap, apsize, stringBase0 + 0x8f2);
    }
    
    if (init)
    {
        this->hud.target.size = zEntCruiseBubble_f_0_1;
        // stringBase0 + 0x903 == "hud.target.size"
        auto_tweak::load_param<float32, float32>(this->hud.target.size,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_100_0,
                ap, apsize, stringBase0 + 0x903);
    }
    
    if (init)
    {
        this->hud.timer.font = 2;
        // stringBase0 + 0x913 == "hud.timer.font"
        auto_tweak::load_param<int32, int32>(this->hud.timer.font,
                1, 0, 4, ap, apsize, stringBase0 + 0x913);
    }
    
    if (init)
    {
        this->hud.timer.font_width = zEntCruiseBubble_f_0_0275;
        // stringBase0 + 0x922 == "hud.timer.font_width"
        auto_tweak::load_param<float32, float32>(this->hud.timer.font_width,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_001, zEntCruiseBubble_f_1_0,
                ap, apsize, stringBase0 + 0x922);
    }
    
    if (init)
    {
        this->hud.timer.font_height = zEntCruiseBubble_f_0_047;
        // stringBase0 + 0x937 == "hud.timer.font_height"
        auto_tweak::load_param<float32, float32>(this->hud.timer.font_height,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_001, zEntCruiseBubble_f_1_0,
                ap, apsize, stringBase0 + 0x937);
    }
    
    if (init)
    {
        this->hud.timer.x = zEntCruiseBubble_f_0_78;
        // stringBase0 + 0x94d == "hud.timer.x"
        auto_tweak::load_param<float32, float32>(this->hud.timer.x,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_1_0,
                ap, apsize, stringBase0 + 0x94d);
    }
    
    if (init)
    {
        this->hud.timer.y = zEntCruiseBubble_f_0_86;
        // stringBase0 + 0x959 == "hud.timer.y"
        auto_tweak::load_param<float32, float32>(this->hud.timer.y,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_1_0,
                ap, apsize, stringBase0 + 0x959);
    }
    
    if (init)
    {
        this->hud.timer.glow_size = zEntCruiseBubble_f_0_01;
        // stringBase0 + 0x965 == "hud.timer.glow_size"
        auto_tweak::load_param<float32, float32>(this->hud.timer.glow_size,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_10_0,
                ap, apsize, stringBase0 + 0x965);
    }
    
    if (init)
    {
        this->dialog.freq = zEntCruiseBubble_f_1_0;
        // stringBase0 + 0x979 == "dialog.freq"
        auto_tweak::load_param<float32, float32>(this->dialog.freq,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_1_0,
                ap, apsize, stringBase0 + 0x979);
    }
    
    if (init)
    {
        this->dialog.decay = zEntCruiseBubble_f_0_75;
        // stringBase0 + 0x985 == "dialog.decay"
        auto_tweak::load_param<float32, float32>(this->dialog.decay,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_1_0,
                ap, apsize, stringBase0 + 0x985);
    }
    
    if (init)
    {
        this->dialog.min_freq = zEntCruiseBubble_f_0_1;
        // stringBase0 + 0x992 == "dialog.min_freq"
        auto_tweak::load_param<float32, float32>(this->dialog.min_freq,
                zEntCruiseBubble_f_1_0, zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_1_0,
                ap, apsize, stringBase0 + 0x992);
    }
    
    if (init)
    {
        this->material.fresnel_texture = xStrHash(stringBase0 + 0x9a2);
        this->material.env_texture = xStrHash(stringBase0 + 0x9ad);
    }
}
#endif

// func_8005BD60
#ifndef NON_MATCHING
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "init__13cruise_bubbleFv")
#else
void cruise_bubble::init()
{
    if ((shared.flags & 0x1) != 0x1)
    {
        return;
    }
    
    init_sound();

    shared.flags = shared.flags | 0x2;
    
    load_settings();
    init_states();
    init_missle_model();
    init_wake_ribbons();
    init_explode_decal();
    init_shrapnel();
    init_hud();
    init_debug();

    // scheduling off
    shared.fov_default = xCameraGetFOV(&globals.camera);
    shared.dialog_freq = current_tweak->dialog.freq;
}
#endif

void cruise_bubble::init_debug()
{
    // empty
}

void cruise_bubble::reset()
{
    if ((shared.flags & 0x3) != 0x3)
    {
        return;
    }
    kill(true, false);
}

// func_8005BE28
#ifndef NON_MATCHING
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "launch__13cruise_bubbleFv")
#else
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

    reset_wake_ribbons();
    reset_explode_decal();

    shared.flags = shared.flags | 0x14;
    shared.last_sp = shared.sp = globals.pad0->analog[0].offset;
    shared.player_health = globals.player.Health;
    // scheduling off
    shared.player_motion = zEntCruiseBubble_f_0_0;
    shared.fov_default = xCameraGetFOV(&globals.camera);
    
    ztalkbox::permit(0x0, 0xffffffff);
    set_state(THREAD_PLAYER, BEGIN_STATE_PLAYER);
}
#endif

bool cruise_bubble::update(xScene* s, float32 dt)
{
    if ((shared.flags & 0x3) != 0x3)
    {
        return false;
    }

    if ((shared.flags & 0x10) == 0x0)
    {
        if (check_launch())
        {
            launch();
        }
        else
        {
            return false;
        }
    }

    if(globals.player.ControlOff)
    {
        kill(true, false);
        return false;
    }

    refresh_controls();
    update_state(s, dt);

    if ((shared.flags & 0x10) == 0)
    {
        return false;
    }
    
    update_player(*s, dt);
    update_missle(*s, dt);
    update_hud(dt);
    return true;
}

bool cruise_bubble::render()
{
    if ((shared.flags & 0x7) != 0x7)
    {
        return false;
    }

    render_state();
    render_player();
    render_missle();
    render_debug();

    return true;
}

void cruise_bubble::render_debug()
{
    // empty
}

void cruise_bubble::render_screen()
{
    if ((shared.flags & 0x7) != 0x7)
    {
        return;
    }
    render_hud();
}

// func_8005C09C
#ifndef NON_MATCHING
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s",                                                  \
                   "insert_player_animations__13cruise_bubbleFR10xAnimTable")
#else
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
    
    // stringBase0 + 0x9c2 == "cruise_bubble_aim"
    shared.astate.player.aim = xAnimTableNewState(&table, stringBase0 + 0x9c2, 0x10, 0,
            zEntCruiseBubble_f_1_0, NULL, NULL, zEntCruiseBubble_f_0_0, NULL,
            NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    
    // stringBase0 + 0x9d4 == "cruise_bubble_fire"
    shared.astate.player.fire = xAnimTableNewState(&table, stringBase0 + 0x9d4, 0x20, 0,
            zEntCruiseBubble_f_1_0, NULL, NULL, zEntCruiseBubble_f_0_0, NULL,
            NULL, xAnimDefaultBeforeEnter, NULL, NULL);
       
    // stringBase0 + 0x9e7 == "cruise_bubble_idle"
    shared.astate.player.idle = xAnimTableNewState(&table, stringBase0 + 0x9e7, 0x10, 0,
            zEntCruiseBubble_f_1_0, NULL, NULL, zEntCruiseBubble_f_0_0, NULL,
            NULL, xAnimDefaultBeforeEnter, NULL, NULL);
       
    char* start_from = (char*) xMemPushTemp(0x250);
    memset(start_from, 0, 0x250);
    char* s = start_from;
    *s = '\0';
    for (uint32 i = 0; i < 37; ++i)
    {
        strcat(s, start_anim_states[i]);
        s += strlen(s);
        *s = ' ';
        *++s = '\0';
    }
    
    // stringBase0 + 0x9c2 == "cruise_bubble_aim"
    shared.atran.player.aim = xAnimTableNewTransition(&table, start_from, stringBase0 + 0x9c2,
            (xAnimTransitionConditionalCallback) &check_anim_aim, NULL, 0, 0,
            zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_0_0, 0, 0, zEntCruiseBubble_f_0_15, NULL); 

    // stringBase0 + 0x9c2 == "cruise_bubble_aim"
    // stringBase0 + 0x9d4 == "cruise_bubble_fire"
    shared.atran.player.fire = xAnimTableNewTransition(&table, stringBase0 + 0x9c2, stringBase0 + 0x9d4,
            NULL, NULL, 0, 0,
            zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_0_0, 0, 0, zEntCruiseBubble_f_0_15, NULL); 

    // stringBase0 + 0x9d4 == "cruise_bubble_fire"
    // stringBase0 + 0x9e7 == "cruise_bubble_idle"
    shared.atran.player.idle = xAnimTableNewTransition(&table, stringBase0 + 0x9d4, stringBase0 + 0x9e7,
            NULL, NULL, 0x10, 0,
            zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_0_0, 0, 0, zEntCruiseBubble_f_0_15, NULL); 

    // stringBase0 + 0x9fa == "cruise_bubble_aim cruise_bubble_fire cruise_bubble_idle"
    // stringBase0 + 0x0 == "Idle01"
    shared.atran.player.end = xAnimTableNewTransition(&table, stringBase0 + 0x9fa, stringBase0 + 0x0,
            NULL, NULL, 0, 0,
            zEntCruiseBubble_f_0_0, zEntCruiseBubble_f_0_0, 0, 0, zEntCruiseBubble_f_0_15, NULL); 

    xMemPopTemp(start_from);
}
#endif

// func_8005C380
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "anim_table__13cruise_bubbleFv")

bool cruise_bubble::active()
{
    return shared.flags & 0x10;
}

float32 cruise_bubble::exploding()
{
    state_missle_explode* state = (state_missle_explode*) shared.state[THREAD_MISSLE];
    if (state == NULL || state->type != STATE_MISSLE_EXPLODE)
    {
        return zEntCruiseBubble_f_0_0;
    }

    return current_tweak->missle.explode.hit_duration - state->hit_time;
}

void cruise_bubble::get_explode_sphere(xVec3& center, float32& radius)
{
    state_missle_explode* state = (state_missle_explode*) shared.state[THREAD_MISSLE];
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

float32 cruise_bubble::state_missle_explode::get_radius() const
{
    float32 t_frac = this->hit_time / current_tweak->missle.explode.hit_duration;
    return t_frac * current_tweak->missle.explode.hit_radius;
}

xEnt** cruise_bubble::get_explode_hits(int32& size)
{
    state_missle_explode* state = (state_missle_explode*) shared.state[THREAD_MISSLE];
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

// func_8005C610
#ifndef NON_MATCHING
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "add_life__13cruise_bubbleFff")
#else
// param names guessed
void cruise_bubble::add_life(float32 life, float32 max)
{
    state_missle_fly* state = (state_missle_fly*) shared.state[THREAD_MISSLE];
    if (state == NULL || state->type != STATE_MISSLE_FLY)
    {
        return;
    }
    
    state->life += life;

    if (max < zEntCruiseBubble_f_0_0)
    {
        max = current_tweak->missle.life;
    }

    // original asm loads zEntCruiseBubble_f_0_0 a second time here
    if (!(max > zEntCruiseBubble_f_0_0))
    {
        return;
    }
    if (!(state->life > max))
    {
        return;
    }

    state->life = max;
}
#endif

void cruise_bubble::set_life(float32 life)
{
    state_missle_fly* state = (state_missle_fly*) shared.state[THREAD_MISSLE];
    if (state == NULL || state->type != STATE_MISSLE_FLY)
    {
        return;
    }
    
    state->life = life;
}

void cruise_bubble::reset_life()
{
    state_missle_fly* state = (state_missle_fly*) shared.state[THREAD_MISSLE];
    if (state == NULL || state->type != STATE_MISSLE_FLY)
    {
        return;
    }
    
    state->life = current_tweak->missle.life;
}

bool cruise_bubble::event_handler(xBase* from, uint32 event, const float32* fparam, xBase* to)
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

// func_8005C758
#if 1
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "start__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17state_player_haltFv")
#else
void cruise_bubble::state_player_halt::start()
{
    this->first_update = true;
}
#endif

// func_8005C764
#if 1
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "stop__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17state_player_haltFv")
#else
void cruise_bubble::state_player_halt::stop()
{
    shared.flags = shared.flags & 0xffffffdf;
}
#endif

// func_8005C778
#if 1
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "update__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17state_player_haltFf")
#else
cruise_bubble::state_enum cruise_bubble::state_player_halt::update(float32 dt)
{
    this->time += dt;
    
    if (this->first_update)
    {
        this->first_update = false;
        this->last_motion = shared.player_motion;
        return STATE_PLAYER_HALT;
    }

    xVec3 dmotion = shared.player_motion - this->last_motion;
    if (dmotion.length2() < zEntCruiseBubble_f_0_0001) {
        return STATE_PLAYER_AIM;
    }

    if (this->time > current_tweak->player.halt_time)
    {
        return STATE_INVALID;
    }

    return STATE_PLAYER_HALT;
}
#endif

// func_8005C848
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "start__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_player_aimFv")


xMat4x3* cruise_bubble::get_player_mat()
{
    return (xMat4x3*) globals.player.ent.model->Mat;
}

// func_8005C8E8
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "stop__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_player_aimFv")

// func_8005C8FC
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "update__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_player_aimFf")

// func_8005C998
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "update_animation__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_player_aimFf")

// func_8005CA00
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "apply_yaw__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_player_aimFv")

// func_8005CA98
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "face_camera__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_player_aimFf")

// func_8005CBB8
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "start__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17state_player_fireFv")

// func_8005CC70
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "get_missle_mat__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv")

// func_8005CC84
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "stop__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17state_player_fireFv")

// func_8005CCA4
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "update__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17state_player_fireFf")

// func_8005CD90
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "update_wand__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17state_player_fireFf")

// func_8005CD94
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "start__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17state_player_waitFv")

// func_8005CDB4
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "update__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17state_player_waitFf")

// func_8005CDBC
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "start__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_missle_appearFv")

// func_8005CE2C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "move__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_missle_appearFv")

// func_8005CEA0
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "stop__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_missle_appearFv")

// func_8005CEC0
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "update__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_missle_appearFf")

// func_8005CF80
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "update_effects__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_missle_appearFf")

// func_8005CF84
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "start__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_missle_flyFv")

// func_8005D08C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "__ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_dataFRC5xVec3f")

// func_8005D0AC
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "stop__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_missle_flyFv")

// func_8005D128
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "abort__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_missle_flyFv")

// func_8005D18C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "update__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_missle_flyFf")

// func_8005D350
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "update_flash__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_missle_flyFf")

// func_8005D3D4
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "update_engine_sound__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_missle_flyFf")

// func_8005D448
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "collide_hazards__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_missle_flyFv")

// func_8005D4C8
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "hazard_check__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_missle_flyFR9NPCHazardPv")

// func_8005D56C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "collide__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_missle_flyFv")

// func_8005D7D4
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "hit_test__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_missle_flyCFR5xVec3R5xVec3R5xVec3RP4xEnt")

// func_8005D928
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "update_move__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_missle_flyFf")

// func_8005D998
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "update_turn__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_missle_flyFf")

// func_8005DB98
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "calculate_rotation__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_missle_flyCFR5xVec2R5xVec2fRC5xVec2RC5xVec2RC5xVec2RC5xVec2")

// func_8005DC2C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "start__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explodeFv")

// func_8005DCF8
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "start_effects__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explodeFv")

// func_8005DE20
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "cb_droplet__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explodeFP5zFragP10zFragAsset")

// func_8005DFBC
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "perturb_direction__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explodeFRC5xVec3ffff")

// func_8005E178
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "get_next_quadrant__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explodeFRfRfRfRf")

// func_8005E248
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "reset_quadrants__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explodeFUif")

// func_8005E3BC
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "apply_damage__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explodeFf")

// func_8005E4A0
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "apply_damage_hazards__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explodeFf")

// func_8005E4D8
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "hazard_check__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explodeFR9NPCHazardPv")

// func_8005E570
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "__ct__Q413cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explode13cb_damage_entFf")

// func_8005E578
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "stop__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explodeFv")

// func_8005E58C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "update__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explodeFf")

// func_8005E5E0
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "start__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_camera_aimFv")

// func_8005E6E8
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "stop__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_camera_aimFv")

// func_8005E708
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "update__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_camera_aimFf")

// func_8005E808
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "apply_turn__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_camera_aimCFv")

// func_8005E84C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "turn__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_camera_aimFf")

// func_8005E944
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "collide_inward__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_camera_aimFv")

// func_8005EAFC
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "apply_motion__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_camera_aimCFv")

// func_8005EB90
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "stop__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_camera_aimFf")

// func_8005EC20
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "move__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_camera_aimFf")

// func_8005ED1C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "start__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18state_camera_seizeFv")

// func_8005ED9C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "stop__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18state_camera_seizeFv")

// func_8005EDD4
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "update__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18state_camera_seizeFf")

// func_8005EED4
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "refresh_missle_alpha__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18state_camera_seizeFf")

// func_8005EF6C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "update_turn__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18state_camera_seizeFf")

// func_8005F058
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "update_move__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18state_camera_seizeFf")

// func_8005F100
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "xSCurve__Ff")

// func_8005F138
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "start__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_attachFv")

// func_8005F1B0
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "stop__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_attachFv")

// func_8005F1F4
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "update__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_attachFf")

// func_8005F264
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "lock_targets__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_attachFv")

// func_8005F2FC
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "lock_hazard_targets__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_attachFv")

// func_8005F330
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "hazard_check__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_attachFR9NPCHazardPv")

// func_8005F358
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "get_view_bound__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_attachCFR6xBound")

// func_8005F480
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "start__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_surveyFv")

// func_8005F4F8
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "move__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_surveyFv")

// func_8005F5EC
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "eval_missle_path__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_surveyCFfR5xVec3Rf")

// func_8005F714
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "lerp__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_surveyCFRffff")

// func_8005F724
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "lerp__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_surveyCFR5xVec3fRC5xVec3RC5xVec3")

// func_8005F7C0
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "find_nearest__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_surveyCFf")

// func_8005F864
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "xSCurve__Fff")

// func_8005F8C4
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "init_path__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_surveyFv")

// func_8005F9C0
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "stop__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_surveyFv")

// func_8005F9E0
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "update__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_surveyFf")

// func_8005FA94
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "control_jerked__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_surveyCFv")

// func_8005FB4C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "start__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_camera_restoreFv")

// func_8005FC04
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "stop__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_camera_restoreFv")

// func_8005FC30
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "update__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_camera_restoreFf")

// func_8005FC64
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "__cl__Q413cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explode13cb_damage_entFR4xEntR10xGridBound")

// func_8005FDB8
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "__cl__Q413cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_attach15cb_lock_targetsFR4xEntR10xGridBound")

// func_8005FE1C
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "__sinit_zEntCruiseBubble_cpp")

// func_8005FE44
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "__ct__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_Fv")

// func_8005FE8C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "__ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_dataFv")

// func_8005FE90
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "up_normal__5xVec3CFv")

// func_8005FEC4
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "safe_normal__5xVec3CFRC5xVec3")

// func_8005FF28
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "__mi__5xVec3CFv")

// func_8005FF88
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "create__5xVec3Ffff")

// func_8005FFD8
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "create__5xVec3Ff")

// func_80060028
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "IsHealthy__10zNPCCommonFv")

// func_80060030
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "zEntTriggerAsset__FRC11zEntTrigger")

void xMat3x3RMulVec(xVec3* o, const xMat3x3* m, const xVec3* v)
{
    float32 x = m->right.x * v->x + m->up.x * v->y + m->at.x * v->z;
    float32 y = m->right.y * v->x + m->up.y * v->y + m->at.y * v->z;
    float32 z = m->right.z * v->x + m->up.z * v->y + m->at.z * v->z;

    o->x = x;
    o->y = y;
    o->z = z;
}

// func_800600A0
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "__apl__5xVec2FRC5xVec2")

// func_800600C4
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "__ml__5xVec2CFf")

// func_80060100
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "__amu__5xVec2Ff")

// func_8006011C
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "center__13basic_rect_esc__0_f_esc__1_Fff")

// func_80060140
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "set_size__13basic_rect_esc__0_f_esc__1_Fff")

// func_8006014C
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "set_size__13basic_rect_esc__0_f_esc__1_Ff")

// func_80060158
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "load_param_esc__0_Ui_esc__4_i_esc__1___10auto_tweakFRUiiiiP16xModelAssetParamUiPCc")

// func_800601DC
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "load_param_esc__0_5xVec3_esc__4_i_esc__1___10auto_tweakFR5xVec3iiiP16xModelAssetParamUiPCc")

// func_8006022C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "load_param_esc__0_i_esc__4_i_esc__1___10auto_tweakFRiiiiP16xModelAssetParamUiPCc")

// func_800602B0
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc")

// func_80060358
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "push_front__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_FRCQ313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data")

// func_800603A0
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "__as__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_dataFRCQ313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data")

// func_800603C4
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "front__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_Fv")

// func_800603F4
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "__ml__Q286fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_8iteratorCFv")

// func_8006040C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "begin__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_CFv")

// func_80060430
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "create_iterator__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_CFUl")

// func_80060450
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "push_front__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_Fv")

// func_80060464
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "reset__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_Fv")

// func_80060484
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "clear__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_Fv")

// func_80060494
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "pop_back__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_Fv")

// func_800604A8
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "full__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_CFv")

// func_800604F4
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "max_size__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_CFv")

// func_800604F4
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "size__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_CFv")

// func_80060514
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "__vc__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_Fi")

// func_80060534
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "get_at__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_CFi")

// func_80060554
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "__ne__Q286fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_8iteratorCFRCQ286fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_8iterator")

// func_80060570
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "__pp__Q286fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_8iteratorFv")

// func_800605A4
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "__apl__Q286fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_8iteratorFi")

// func_800605BC
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "__rf__Q286fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_8iteratorCFv")

// func_800605DC
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "end__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_CFv")

// func_80060600
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "MarkForRecycle__9NPCHazardFv")

// func_80060610
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "xQuickCullForSphere__FP7xQCDataPC7xSphere")

// func_80060644
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "xGridCheckBound_esc__0_Q413cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explode13cb_damage_ent_esc__1___FR5xGridRC6xBoundRC7xQCDataQ413cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explode13cb_damage_ent")

// func_800607FC
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "xGridCheckBound_esc__0_Q413cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_attach15cb_lock_targets_esc__1___FR5xGridRC6xBoundRC7xQCDataQ413cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_attach15cb_lock_targets")
