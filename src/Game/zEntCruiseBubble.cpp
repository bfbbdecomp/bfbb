
#include "zCamera.h"
#include "zEntButton.h"
#include "zEntCruiseBubble.h"
#include "zEntDestructObj.h"
#include "zEntPlayer.h"
#include "zGlobals.h"

#include "../Core/x/xMath.h"
#include "../Core/x/xMath3.h"
#include "../Core/x/xModel.h"
#include "../Core/x/xSnd.h"
#include "../Core/x/xString.h"
#include "../Core/x/xVec3.h"
#include "zNPCTypeCommon.h"
#include "zPlatform.h"

namespace cruise_bubble
{

// basic_rect screen_bounds;
// basic_rect default_adjust;
// int8 buffer[16];
// int8 buffer[16];
// tweak_group normal_tweak;
// tweak_group cheat_tweak;
// tweak_group* current_tweak;
extern xBase base;
// int8* start_anim_states[37];

extern struct _class_36
{
    int32 flags;
    state_type* state[3];
    // Offset: 0x10
    state_type* states[12];
    // Offset: 0x40
    xVec2 last_sp;
    xVec2 sp;
    xVec3 hit_loc;
    xVec3 hit_norm;
    xModelInstance* missle_model;
    // Offset: 0x6c
    xEnt* hits[32];
    // Offset: 0xec
    int32 hits_size;
    uint32 player_health;
    xVec3 player_motion;
    float32 fov_default;
    zShrapnelAsset* droplet_shrapnel;
    float32 dialog_freq;
    struct _class_45
    {
        float32 samples;
        float32 bubbles;
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
// xFXRibbon wake_ribbon[2];
// xDecalEmitter explode_decal;
// curve_node_0 wake_ribbon_curve[2];
// curve_node_0 cheat_wake_ribbon_curve[2];
// curve_node_1 explode_curve[3];
// curve_node_1 cheat_explode_curve[3];
extern sound_config sounds[4];
// quadrant_set qzone;
// _class_17 hud;
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

} // namespace cruise_bubble

extern float32 zEntCruiseBubble_f_0_0; // 0.0

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

// func_800579C8
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "notify_triggers__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FR6xSceneRC7xSphereRC5xVec3")

// func_80057B30
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "exit_triggers__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FR6xScene")

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
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "start_trail__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv")

// func_80057CC8
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "stop_trail__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv")

// func_80057CDC
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "set_state__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FQ313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_11thread_enumQ313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_10state_enum")

// func_80057D78
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "start__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_10state_typeFv")

// func_80057D7C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "stop__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_10state_typeFv")

// func_80057D80
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "check_launch__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv")

// func_80057E6C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "kill__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fbb")

// func_80057FE0
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "distort_screen__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Ff")

// func_80057FE4
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "abort__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_10state_typeFv")

// func_80057FE8
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "update_player__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FR6xScenef")

// func_80058108
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "get_player_loc__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv")

// func_80058120
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "render_player__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv")

// func_8005814C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "refresh_controls__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv")

// func_800581A0
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "update_state__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FP6xScenef")

// func_800582AC
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "render_state__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv")

// func_80058310
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "render__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_10state_typeFv")

// func_80058314
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "custom_bubble_render__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FP8RpAtomic")

// func_800584C0
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "init_states__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv")

// func_800586FC
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "__ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_camera_restoreFv")

// func_8005873C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "__ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_10state_typeFQ313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_10state_enum")

// func_80058750
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "__ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_surveyFv")

// func_80058790
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "__ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_attachFv")

// func_800587D0
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "__ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18state_camera_seizeFv")

// func_80058810
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "__ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_camera_aimFv")

// func_80058850
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "__ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explodeFv")

// func_80058890
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "__ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_missle_flyFv")

// func_800588D0
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "__ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_missle_appearFv")

// func_80058910
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "__ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17state_player_waitFv")

// func_80058950
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "__ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17state_player_fireFv")

// func_80058990
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "__ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_player_aimFv")

// func_800589D0
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "__ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17state_player_haltFv")

// func_80058A10
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "init_missle_model__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv")

// func_80058A94
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "reset_wake_ribbons__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv")

// func_80058BF0
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "__as__Q29xFXRibbon6configFRCQ29xFXRibbon6config")

// func_80058C14
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "init_wake_ribbons__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv")

// func_80058C70
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "reset_explode_decal__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv")

// func_80058D38
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "init_explode_decal__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv")

// func_80058DD4
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "init_shrapnel__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv")

// func_80058E14
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "add_trail_sample__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FRC5xVec3RC5xVec3RC5xVec3RC5xVec3f")

// func_800590FC
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "update_trail__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Ff")

// func_80059314
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "refresh_missle_model__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv")

// func_80059318
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "update_missle__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FR6xScenef")

// func_80059378
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "render_missle__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv")

// func_800593B0
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "load_model__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FUi")

// func_80059458
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "render_model_2d__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FP14xModelInstanceRC13basic_rect_esc__0_f_esc__1_f")

// func_80059584
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "render_glow__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FP14xModelInstanceRC13basic_rect_esc__0_f_esc__1_ff")

// func_80059698
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "init_hud__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv")

// func_80059760
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "init__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17uv_animated_modelFP8RpAtomic")

// func_800597E0
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "clone_uv__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17uv_animated_modelCFRP11RwTexCoordsRiP8RpAtomic")

// func_8005986C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "get_uv__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17uv_animated_modelCFRP11RwTexCoordsRiP8RpAtomic")

// func_800598C4
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "show_gizmo__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FRQ313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_9hud_gizmoRC13basic_rect_esc__0_f_esc__1_P14xModelInstance")

// func_80059954
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "update_gizmo__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FRQ313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_9hud_gizmof")

// func_800599C8
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "flash_hud__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv")

// func_800599F0
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "render_timer__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fff")

// func_80059BD8
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "lerp__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FR10iColor_tagf10iColor_tag10iColor_tag")

// func_80059C6C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "lerp__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FRUcfUcUc")

// func_80059CD8
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "update_hud__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Ff")

// func_80059EB4
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "__as__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_9hud_gizmoFRCQ313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_9hud_gizmo")

// func_80059F18
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "update__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17uv_animated_modelFf")

// func_80059FA0
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "refresh__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17uv_animated_modelFv")

// func_8005A0E0
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "render_hud__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv")

// func_8005A2AC
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "show_hud__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv")

// func_8005A340
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "hide_hud__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv")

// func_8005A360
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "world_to_screen__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FRC5xVec3")

// func_8005A400
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "find_locked_target__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FPC5xVec3")

// func_8005A44C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "lock_target__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FiPC5xVec3f")

// func_8005A570
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "check_lock_target__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FPC5xVec3")

// func_8005A6D8
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "check_anim_aim__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FP15xAnimTransitionP11xAnimSinglePv")

// func_8005A6E0
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "load_cheat_tweak__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv")

// func_8005A804
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "load_settings__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv")

// func_8005A880
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "load__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_11tweak_groupFP16xModelAssetParamUi")

// func_8005A8B0
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "register_tweaks__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_11tweak_groupFbP16xModelAssetParamUiPCc")

// func_8005BD60
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "init__13cruise_bubbleFv")

// func_8005BDE8
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "init_debug__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv")

// func_8005BDEC
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "reset__13cruise_bubbleFv")

// func_8005BE28
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "launch__13cruise_bubbleFv")

// func_8005BF30
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "update__13cruise_bubbleFP6xScenef")

// func_8005C018
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "render__13cruise_bubbleFv")

// func_8005C064
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "render_debug__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv")

// func_8005C068
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "render_screen__13cruise_bubbleFv")

// func_8005C09C
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s",                                                  \
                   "insert_player_animations__13cruise_bubbleFR10xAnimTable")

// func_8005C380
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "anim_table__13cruise_bubbleFv")

// func_8005C4C0
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "active__13cruise_bubbleFv")

// func_8005C4D0
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "exploding__13cruise_bubbleFv")

// func_8005C50C
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "get_explode_sphere__13cruise_bubbleFR5xVec3Rf")

// func_8005C58C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "get_radius__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explodeCFv")

// func_8005C5A8
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "get_explode_hits__13cruise_bubbleFRi")

// func_8005C610
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "add_life__13cruise_bubbleFff")

// func_8005C674
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "set_life__13cruise_bubbleFf")

// func_8005C6A0
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s", "reset_life__13cruise_bubbleFv")

// func_8005C6D4
#pragma GLOBAL_ASM("asm/Game/zEntCruiseBubble.s",                                                  \
                   "event_handler__13cruise_bubbleFP5xBaseUiPCfP5xBase")

// func_8005C758
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "start__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17state_player_haltFv")

// func_8005C764
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "stop__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17state_player_haltFv")

// func_8005C778
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "update__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17state_player_haltFf")

// func_8005C848
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "start__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_player_aimFv")

// func_8005C8D4
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntCruiseBubble.s",                                                                 \
    "get_player_mat__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv")

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
