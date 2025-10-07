
#include "zNPCTypeBossSB2.h"
#include "PowerPC_EABI_Support/MSL_C++/MSL_Common/Include/new.h"
#include "xLightKit.h"
#include "zNPCGoalCommon.h"
#include <types.h>
#include "string.h"
#include "iModel.h"
#include "xCollide.h"
#include "xMath.h"
#include "xMath3.h"
#include "xstransvc.h"
#include "xSnd.h"
#include "xVec3.h"
#include "xDebug.h"

#include "zCamera.h"
#include "zEntSimpleObj.h"
#include "zEntDestructObj.h"
#include "zGlobals.h"
#include "zGrid.h"
#include "zNPCTypeBossPatrick.h"
#include "zRenderState.h"
#include "zLightning.h"
#include "zNPCTypeRobot.h"
#include <xMathInlines.h>

#define ANIM_Unknown 0 //0x0
#define ANIM_Idle01 1 // 0x4
#define ANIM_Idle02 2 // 0x8
#define ANIM_Taunt01 3 // 0xC
#define ANIM_Hit01 7 //0x1c
#define ANIM_Hit02 8 //0x20
#define ANIM_Dizzy01 10 //0x28
#define ANIM_SmashHitLeft 46
#define ANIM_SmashHitRight 47
#define ANIM_SmackLeft01 48
#define ANIM_SmackRight01 49
#define ANIM_ChopLeftBegin 50
#define ANIM_ChopLeftLoop 51
#define ANIM_ChopLeftEnd 52
#define ANIM_ChopRightBegin 53
#define ANIM_ChopRightLoop 54
#define ANIM_ChopRightEnd 55
#define ANIM_SwipeLeftBegin 56
#define ANIM_SwipeLeftLoop 57
#define ANIM_SwipeLeftEnd 58
#define ANIM_SwipeRightBegin 59
#define ANIM_SwipeRightLoop 60
#define ANIM_SwipeRightEnd 61
#define ANIM_ReturnIdle01 62
#define ANIM_KarateStart 63
#define ANIM_KarateLoop 64
#define ANIM_KarateEnd 65

#define SOUND_TAUNT 0
#define SOUND_KARATE 1
#define SOUND_CHOP_WINDUP 2
#define SOUND_CHOP_SWING 3
#define SOUND_SWIPE 4
#define SOUND_KARATE_SLUG 5
#define SOUND_CHOP_HIT 6
#define SOUND_KARATE_HIT 7
#define SOUND_HIT_SLAP 8
#define SOUND_HIT_FLAIL 9

namespace
{
    struct sound_data_type
    {
        U32 id;
        U32 handle;
        xVec3* loc;
        F32 volume;
    };

    struct sound_asset
    {
        S32 group;
        char* name;
        U32 priority;
        U32 flags;
    };

    static U32 sound_asset_ids[10][4];
    static sound_data_type sound_data[10];
    static const sound_asset sound_assets[12] = {
        { 0, "RSB_laugh", 0, 0 },      { 1, "RSB_kah", 0, 0 },      { 2, "RSB_chop_windup", 0, 0 },
        { 3, "RSB_chop_swing", 0, 0 }, { 4, "RSB_swipe", 0, 0 },    { 5, "RSB_foot_loop", 0, 1 },
        { 6, "RSB_armhit1", 0, 0 },    { 6, "RSB_armhit2", 0, 0 },  { 7, "RSB_armhit1", 0, 0 },
        { 7, "RSB_armhit2", 0, 0 },    { 8, "RSB_armsmash", 0, 0 }, { 9, "RSB_foor_impact", 0, 0 },
    };

    void set_alpha_blend(xModelInstance* model)
    {
        model->PipeFlags &= ~0xFF0C;
        model->PipeFlags |= 0x6508;
    }

    F32 max(F32 maxF321, F32 maxF322) //Temp names till file is further
    {
        if (maxF321 > maxF322)
        {
            return maxF321;
        }
        return maxF322;
    }

    S32 tweak()
    {
        return 0; // to-do
    }

    void reset_sound()
    {
        for (S32 i = 0; i < 10; ++i)
        {
            sound_data[i].handle = 0;
        }
    }

    S32 play_sound(int, const xVec3*, F32)
    {
        return 0; // to-do
    }

    struct sound_property
    {
        U32 asset;
        F32 volume;
        F32 range_inner;
        F32 range_outer;
        F32 delay;
        F32 fade_time;
    };

    struct tweak_group
    {
        F32 accel;
        F32 max_vel;
        F32 turn_accel;
        F32 turn_max_vel;
        F32 arena_radius;
        F32 ground_y;
        F32 ground_radius;
        F32 ground_zone_height;
        F32 move_radius;
        F32 damage_speed;
        F32 player_damage_time;
        F32 intro_time;
        struct
        {
            F32 pulse_rate;
            F32 pulse_min;
            F32 pulse_max;
        } nodes;
        struct
        {
            F32 min_dist;
            F32 vel;
            F32 accel;
            F32 decel;
            F32 collide_vel;
        } spin;
        struct
        {
            F32 delay_vuln;
        } help;
        struct
        {
            F32 delay;
        } chop;
        struct
        {
            F32 hold_time;
        } swipe;
        struct
        {
            xVec3 emit_offset;
            F32 emit_arc;
            F32 aim_dist;
            F32 aim_time;
            F32 aim_accel_time;
            F32 fire_vel;
            F32 fire_accel;
            F32 drop_vel;
            F32 drop_accel;
            F32 target_yoffset;
            F32 fade_dist;
            F32 kill_dist;
            F32 delay_emit[3];
            F32 delay_fire[3];
        } karate;
        struct
        {
            F32 warm_up;
            F32 cool_down;
            F32 height;
            F32 move_time;
        } hunt;
        struct
        {
            bool is_sphere;
            bool damage_player;
            S32 bone;
            xVec3 offset;
            F32 radius;
            xVec3 extent;
            F32 yaw;
            F32 pitch;
            F32 roll;
        } bounds[3];
        sound_property sound[10];
        void* context;
        tweak_callback cb_arena;
        tweak_callback cb_ground;
        tweak_callback cb_move_radius;
        tweak_callback cb_bounds;
        tweak_callback cb_hunt_move;
        tweak_callback cb_sound;
        tweak_callback cb_sound_asset;

        void load(xModelAssetParam* ap, U32 apsize);
        void register_tweaks(bool init, xModelAssetParam* ap, U32 apsize, const char*);
    };

    void tweak_group::load(xModelAssetParam* params, U32 size)
    {
        tweak_group::register_tweaks(true, params, size, NULL);
    }

    void tweak_group::register_tweaks(bool init, xModelAssetParam* ap, U32 apsize, const char*)
    {
        if (init)
        {
            accel = 2.0f;
            auto_tweak::load_param<F32, F32>(accel, 1.0f, 0.0f, 1000000000.0f, ap, apsize, "accel");
        }
        if (init)
        {
            max_vel = 5.0f;
            auto_tweak::load_param<F32, F32>(max_vel, 1.0f, 0.0f, 1000000000.0f, ap, apsize,
                                             "max_vel");
        }
        if (init)
        {
            turn_accel = 540.0f;
            auto_tweak::load_param<F32, F32>(turn_accel, DEG2RAD(10), 0.01f, 1000000000.0f, ap,
                                             apsize, "turn_accel");
        }
        if (init)
        {
            turn_max_vel = 180.0f;
            auto_tweak::load_param<F32, F32>(turn_max_vel, DEG2RAD(10), 0.01f, 1000000000.0f, ap,
                                             apsize, "turn_max_vel");
        }
        if (init)
        {
            arena_radius = 12.0f;
            auto_tweak::load_param<F32, F32>(arena_radius, 1.0f, 0.0f, 1000000000.0f, ap, apsize,
                                             "arena_radius");
        }
        if (init)
        {
            ground_y = 0.0f;
            auto_tweak::load_param<F32, F32>(ground_y, 1.0f, -1000000000.0f, 1000000000.0f, ap,
                                             apsize, "ground_y");
        }
        if (init)
        {
            ground_radius = 31.0f;
            auto_tweak::load_param<F32, F32>(ground_radius, 1.0f, 0.0f, 1000000000.0f, ap, apsize,
                                             "ground_radius");
        }
        if (init)
        {
            ground_zone_height = 6.0f;
            auto_tweak::load_param<F32, F32>(ground_zone_height, 1.0f, 0.0f, 1000000000.0f, ap,
                                             apsize, "ground_zone_height");
        }
        if (init)
        {
            move_radius = 27.0f;
            auto_tweak::load_param<F32, F32>(move_radius, 1.0f, 0.0f, 1000000000.0f, ap, apsize,
                                             "move_radius");
        }
        if (init)
        {
            damage_speed = 50.0f;
            auto_tweak::load_param<F32, F32>(damage_speed, 1.0f, 0.0f, 1000000000.0f, ap, apsize,
                                             "damage_speed");
        }
        if (init)
        {
            player_damage_time = 1.0f;
            auto_tweak::load_param<F32, F32>(player_damage_time, 1.0f, 0.0f, 100.0f, ap, apsize,
                                             "player_damage_time");
        }
        if (init)
        {
            intro_time = 0.0f;
            auto_tweak::load_param<F32, F32>(intro_time, 1.0f, 0.0f, 100.0f, ap, apsize,
                                             "intro_time");
        }
        if (init)
        {
            nodes.pulse_rate = 15.0f;
            auto_tweak::load_param<F32, F32>(nodes.pulse_rate, 1.0f, 0.0f, 100000.0f, ap, apsize,
                                             "nodes.pulse_rate");
        }
        if (init)
        {
            nodes.pulse_min = 0.0f;
            auto_tweak::load_param<F32, F32>(nodes.pulse_min, 1.0f, 0.0f, 10.0f, ap, apsize,
                                             "nodes.pulse_min");
        }
        if (init)
        {
            nodes.pulse_max = 0.5f;
            auto_tweak::load_param<F32, F32>(nodes.pulse_max, 1.0f, 0.0f, 10.0f, ap, apsize,
                                             "nodes.pulse_max");
        }
        if (init)
        {
            spin.min_dist = 0.5f;
            auto_tweak::load_param<F32, F32>(spin.min_dist, 1.0f, 0.0f, 10.0f, ap, apsize,
                                             "spin.min_dist");
        }
        if (init)
        {
            spin.vel = 5.0f;
            auto_tweak::load_param<F32, F32>(spin.vel, 1.0f, 0.0f, 10.0f, ap, apsize, "spin.vel");
        }
        if (init)
        {
            spin.accel = 20.0f;
            auto_tweak::load_param<F32, F32>(spin.accel, 1.0f, 0.0f, 100000.0f, ap, apsize,
                                             "spin.accel");
        }
        if (init)
        {
            spin.decel = 5.0f;
            auto_tweak::load_param<F32, F32>(spin.decel, 1.0f, 0.0f, 100000.0f, ap, apsize,
                                             "spin.decel");
        }
        if (init)
        {
            spin.collide_vel = 3.0f;
            auto_tweak::load_param<F32, F32>(spin.collide_vel, 1.0f, 0.0f, 100000.0f, ap, apsize,
                                             "spin.collide_vel");
        }
        if (init)
        {
            help.delay_vuln = 1.0f;
            auto_tweak::load_param<F32, F32>(help.delay_vuln, 1.0f, 0.0f, 10.0f, ap, apsize,
                                             "help.delay_vuln");
        }
        if (init)
        {
            chop.delay = 0.3f;
            auto_tweak::load_param<F32, F32>(chop.delay, 1.0f, 0.0f, 100000.0f, ap, apsize,
                                             "chop.delay");
        }
        if (init)
        {
            swipe.hold_time = 3.5f;
            auto_tweak::load_param<F32, F32>(swipe.hold_time, 1.0f, 0.0f, 1000000000.0f, ap, apsize,
                                             "swipe.hold_time");
        }
        if (init)
        {
            karate.emit_offset = xVec3::create(0.0f, -1.0f, 3.0f);
            auto_tweak::load_param<xVec3, S32>(karate.emit_offset, 0, 0, 0, ap, apsize,
                                               "karate.emit_offset");
        }
        if (init)
        {
            karate.emit_arc = 55.0f;
            auto_tweak::load_param<F32, F32>(karate.emit_arc, DEG2RAD(10), 0.01f, 1000000000.0f, ap,
                                             apsize, "karate.emit_arc");
        }
        if (init)
        {
            karate.aim_dist = 7.0f;
            auto_tweak::load_param<F32, F32>(karate.aim_dist, 1.0f, 0.01f, 100.0f, ap, apsize,
                                             "karate.aim_dist");
        }
        if (init)
        {
            karate.aim_time = 1.0f;
            auto_tweak::load_param<F32, F32>(karate.aim_time, 1.0f, 0.001f, 100.0f, ap, apsize,
                                             "karate.aim_time");
        }
        if (init)
        {
            karate.aim_accel_time = 0.2f;
            auto_tweak::load_param<F32, F32>(karate.aim_accel_time, 1.0f, 0.001f, 100.0f, ap,
                                             apsize, "karate.aim_accel_time");
        }
        if (init)
        {
            karate.fire_vel = 5.0f;
            auto_tweak::load_param<F32, F32>(karate.fire_vel, 1.0f, 0.01f, 100000000.0f, ap, apsize,
                                             "karate.fire_vel");
        }
        if (init)
        {
            karate.fire_accel = 10.0f;
            auto_tweak::load_param<F32, F32>(karate.fire_accel, 1.0f, 0.01f, 1000000000.0f, ap,
                                             apsize, "karate.fire_accel");
        }
        if (init)
        {
            karate.drop_vel = 5.0f;
            auto_tweak::load_param<F32, F32>(karate.drop_vel, 1.0f, 0.1f, 100.0f, ap, apsize,
                                             "karate.drop_vel");
        }
        if (init)
        {
            karate.drop_accel = 10.0f;
            auto_tweak::load_param<F32, F32>(karate.drop_accel, 1.0f, 0.1f, 100.0f, ap, apsize,
                                             "karate.drop_accel");
        }
        if (init)
        {
            karate.target_yoffset = 1.0f;
            auto_tweak::load_param<F32, F32>(karate.target_yoffset, 1.0f, 0.1f, 100.0f, ap, apsize,
                                             "karate.target_yoffset");
        }
        if (init)
        {
            karate.fade_dist = 10.0f;
            auto_tweak::load_param<F32, F32>(karate.fade_dist, 1.0f, 0.1f, 100.0f, ap, apsize,
                                             "karate.fade_dist");
        }
        if (init)
        {
            karate.kill_dist = 15.0f;
            auto_tweak::load_param<F32, F32>(karate.kill_dist, 1.0f, 0.1f, 100.f, ap, apsize,
                                             "karate.kill_dist");
        }
        if (init)
        {
            karate.delay_emit[0] = 0.3f;
            auto_tweak::load_param<F32, F32>(karate.delay_emit[0], 1.0f, 0.001f, 100.0f, ap, apsize,
                                             "karate.delay_emit[0]");
        }
        if (init)
        {
            karate.delay_emit[1] = 0.6f;
            auto_tweak::load_param<F32, F32>(karate.delay_emit[1], 1.0f, 0.001f, 100.0f, ap, apsize,
                                             "karate.delay_emit[1]");
        }
        if (init)
        {
            karate.delay_emit[2] = 0.9f;
            auto_tweak::load_param<F32, F32>(karate.delay_emit[2], 1.0f, 0.001f, 100.0f, ap, apsize,
                                             "karate.delay_emit[2]");
        }
        if (init)
        {
            karate.delay_fire[0] = 2.75;
            auto_tweak::load_param<F32, F32>(karate.delay_fire[0], 1.0f, 0.001f, 100.0f, ap, apsize,
                                             "karate.delay_fire[0]");
        }
        if (init)
        {
            karate.delay_fire[1] = 0.0f;
            auto_tweak::load_param<F32, F32>(karate.delay_fire[1], 1.0f, 0.001f, 100.0f, ap, apsize,
                                             "karate.delay_fire[1]");
        }
        if (init)
        {
            karate.delay_fire[2] = 2.75;
            auto_tweak::load_param<F32, F32>(karate.delay_fire[2], 1.0f, 0.001f, 100.0f, ap, apsize,
                                             "karate.delay_fire[2]");
        }
        if (init)
        {
            hunt.warm_up = 0.5f;
            auto_tweak::load_param<F32, F32>(hunt.warm_up, 1.0f, 0.0f, 10.0f, ap, apsize,
                                             "hunt.warm_up");
        }
        if (init)
        {
            hunt.cool_down = 0.5f;
            auto_tweak::load_param<F32, F32>(hunt.cool_down, 1.0f, 0.0f, 10.0f, ap, apsize,
                                             "hunt.cool_down");
        }
        if (init)
        {
            hunt.height = 3.0f;
            auto_tweak::load_param<F32, F32>(hunt.height, 1.0f, -10.0f, 10.0f, ap, apsize,
                                             "hunt.height");
        }
        if (init)
        {
            hunt.move_time = 1.0f;
            auto_tweak::load_param<F32, F32>(hunt.move_time, 1.0f, 0.01, 10.0f, ap, apsize,
                                             "hunt.move_time");
        }
        if (init)
        {
            bounds[0].is_sphere = FALSE;
            auto_tweak::load_param<bool, S32>(bounds[0].is_sphere, 0, 0, 0, ap, apsize,
                                              "bounds[0].is_sphere");
        }
        if (init)
        {
            bounds[0].damage_player = FALSE;
            auto_tweak::load_param<bool, S32>(bounds[0].damage_player, 0, 0, 0, ap, apsize,
                                              "bounds[0].damage_player");
        }
        if (init)
        {
            bounds[0].bone = 2;
            auto_tweak::load_param<S32, S32>(bounds[0].bone, 1, 0, 63, ap, apsize,
                                             "bounds[0].bone");
        }
        if (init)
        {
            bounds[0].offset = xVec3::create(0.0f, 4.0f, 0.0f);
            auto_tweak::load_param<xVec3, S32>(bounds[0].offset, 0, 0, 0, ap, apsize,
                                               "bounds[0].offset");
        }
        if (init)
        {
            bounds[0].radius = 1.0f;
            auto_tweak::load_param<F32, F32>(bounds[0].radius, 1.0f, 0.0f, 1000000000.0f, ap,
                                             apsize, "bounds[0].radius");
        }
        if (init)
        {
            bounds[0].extent = xVec3::create(4.0f, 5.5f, 2.0f);
            auto_tweak::load_param<xVec3, S32>(bounds[0].extent, 0, 0, 0, ap, apsize,
                                               "bounds[0].extent");
        }
        if (init)
        {
            bounds[0].yaw = 0.0f;
            auto_tweak::load_param<F32, F32>(bounds[0].yaw, DEG2RAD(10), -1000000000.0f,
                                             1000000000.0f, ap, apsize, "bounds[0].yaw");
        }
        if (init)
        {
            bounds[0].pitch = 0.0f;
            auto_tweak::load_param<F32, F32>(bounds[0].pitch, DEG2RAD(10), -1000000000.0f,
                                             1000000000.0f, ap, apsize, "bounds[0].pitch");
        }
        if (init)
        {
            bounds[0].roll = 0.0f;
            auto_tweak::load_param<F32, F32>(bounds[0].roll, DEG2RAD(10), -1000000000.0f,
                                             1000000000.0f, ap, apsize, "bounds[0].roll");
        }
        if (init)
        {
            bounds[1].is_sphere = FALSE;
            auto_tweak::load_param<bool, S32>(bounds[1].is_sphere, 0, 0, 0, ap, apsize,
                                              "bounds[1].is_sphere");
        }
        if (init)
        {
            bounds[1].damage_player = FALSE;
            auto_tweak::load_param<bool, S32>(bounds[1].damage_player, 0, 0, 0, ap, apsize,
                                              "bounds[1].damage_player");
        }
        if (init)
        {
            bounds[1].bone = 6;
            auto_tweak::load_param<S32, S32>(bounds[1].bone, 1, 0, 63, ap, apsize,
                                             "bounds[1].bone");
        }
        if (init)
        {
            bounds[1].offset = xVec3::create(0.0f, -1.5f, 0.1f);
            auto_tweak::load_param<xVec3, S32>(bounds[1].offset, 0, 0, 0, ap, apsize,
                                               "bounds[1].offset");
        }
        if (init)
        {
            bounds[1].radius = 1.0f;
            auto_tweak::load_param<F32, F32>(bounds[1].radius, 1.0f, 0.0f, 1000000000.0f, ap,
                                             apsize, "bounds[1].radius");
        }
        if (init)
        {
            bounds[1].extent = xVec3::create(6.5f, 2.8f, 2.5f);
            auto_tweak::load_param<xVec3, S32>(bounds[1].extent, 0, 0, 0, ap, apsize,
                                               "bounds[1].extent");
        }
        if (init)
        {
            bounds[1].yaw = 0.0f;
            auto_tweak::load_param<F32, F32>(bounds[1].yaw, DEG2RAD(10), -1000000000.0f,
                                             1000000000.0f, ap, apsize, "bounds[1].yaw");
        }
        if (init)
        {
            bounds[1].pitch = 0.0f;
            auto_tweak::load_param<F32, F32>(bounds[1].pitch, DEG2RAD(10), -1000000000.0f,
                                             1000000000.0f, ap, apsize, "bounds[1].pitch");
        }
        if (init)
        {
            bounds[1].roll = 0.0f;
            auto_tweak::load_param<F32, F32>(bounds[1].roll, DEG2RAD(10), -1000000000.0f,
                                             1000000000.0f, ap, apsize, "bounds[1].roll");
        }
        if (init)
        {
            bounds[2].is_sphere = FALSE;
            auto_tweak::load_param<bool, S32>(bounds[2].is_sphere, 0, 0, 0, ap, apsize,
                                              "bounds[2].is_sphere");
        }
        if (init)
        {
            bounds[2].damage_player = TRUE;
            auto_tweak::load_param<bool, S32>(bounds[2].damage_player, 0, 0, 0, ap, apsize,
                                              "bounds[2].damage_player");
        }
        if (init)
        {
            bounds[2].bone = 2;
            auto_tweak::load_param<S32, S32>(bounds[2].bone, 1, 0, 63, ap, apsize,
                                             "bounds[2].bone");
        }
        if (init)
        {
            bounds[2].offset = xVec3::create(0.0f, -7.0f, 0.2f);
            auto_tweak::load_param<xVec3, S32>(bounds[2].offset, 0, 0, 0, ap, apsize,
                                               "bounds[2].offset");
        }
        if (init)
        {
            bounds[2].radius = 1.0f;
            auto_tweak::load_param<F32, F32>(bounds[2].radius, 1.0f, 0.0f, 1000000000.0f, ap,
                                             apsize, "bounds[2].radius");
        }
        if (init)
        {
            bounds[2].extent = xVec3::create(3.0f, 6.0f, 1.0f);
            auto_tweak::load_param<xVec3, S32>(bounds[2].extent, 0, 0, 0, ap, apsize,
                                               "bounds[2].extent");
        }
        if (init)
        {
            bounds[2].yaw = 0.0f;
            auto_tweak::load_param<F32, F32>(bounds[2].yaw, DEG2RAD(10), -1000000000.0f,
                                             1000000000.0f, ap, apsize, "bounds[2].yaw");
        }
        if (init)
        {
            bounds[2].pitch = 0.0f;
            auto_tweak::load_param<F32, F32>(bounds[2].pitch, DEG2RAD(10), -1000000000.0f,
                                             1000000000.0f, ap, apsize, "bounds[2].pitch");
        }
        if (init)
        {
            bounds[2].roll = 0.0f;
            auto_tweak::load_param<F32, F32>(bounds[2].roll, DEG2RAD(10), -1000000000.0f,
                                             1000000000.0f, ap, apsize, "bounds[2].roll");
        }
        if (init)
        {
            sound[SOUND_TAUNT].volume = 1.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_TAUNT].volume, 1.0f, 0.0f, 1.0f, ap,
                                             apsize, "sound[SOUND_TAUNT].volume");
        }
        if (init)
        {
            sound[SOUND_TAUNT].range_inner = 30.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_TAUNT].range_inner, 1.0f, 0.0f, 100000.0f,
                                             ap, apsize, "sound[SOUND_TAUNT].range_inner");
        }
        if (init)
        {
            sound[SOUND_TAUNT].range_outer = 50.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_TAUNT].range_outer, 1.0f, 0.0f, 100000.0f,
                                             ap, apsize, "sound[SOUND_TAUNT].range_outer");
        }
        if (init)
        {
            sound[SOUND_TAUNT].delay = 0.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_TAUNT].delay, 1.0f, 0.0f, 100000.0f, ap,
                                             apsize, "sound[SOUND_TAUNT].delay");
        }
        if (init)
        {
            sound[SOUND_KARATE].volume = 1.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_KARATE].volume, 1.0f, 0.0f, 1.0f, ap,
                                             apsize, "sound[SOUND_KARATE].volume");
        }
        if (init)
        {
            sound[SOUND_KARATE].range_inner = 30.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_KARATE].range_inner, 1.0f, 0.0f, 100000.0f,
                                             ap, apsize, "sound[SOUND_KARATE].range_inner");
        }
        if (init)
        {
            sound[SOUND_KARATE].range_outer = 50.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_KARATE].range_outer, 1.0f, 0.0f, 100000.0f,
                                             ap, apsize, "sound[SOUND_KARATE].range_outer");
        }
        if (init)
        {
            sound[SOUND_KARATE].delay = 0.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_KARATE].delay, 1.0f, 0.0f, 100000.0f, ap,
                                             apsize, "sound[SOUND_KARATE].delay");
        }
        if (init)
        {
            sound[SOUND_CHOP_WINDUP].volume = 1.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_CHOP_WINDUP].volume, 1.0f, 0.0f, 1.0f, ap,
                                             apsize, "sound[SOUND_CHOP_WINDUP].volume");
        }
        if (init)
        {
            sound[SOUND_CHOP_WINDUP].range_inner = 10.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_CHOP_WINDUP].range_inner, 1.0f, 0.0f,
                                             100000.0f, ap, apsize,
                                             "sound[SOUND_CHOP_WINDUP].range_inner");
        }
        if (init)
        {
            sound[SOUND_CHOP_WINDUP].range_outer = 30.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_CHOP_WINDUP].range_outer, 1.0f, 0.0f,
                                             100000.0f, ap, apsize,
                                             "sound[SOUND_CHOP_WINDUP].range_outer");
        }
        if (init)
        {
            sound[SOUND_CHOP_WINDUP].delay = 0.2f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_CHOP_WINDUP].delay, 1.0f, 0.0f, 100000.0f,
                                             ap, apsize, "sound[SOUND_CHOP_WINDUP].delay");
        }
        if (init)
        {
            sound[SOUND_CHOP_SWING].volume = 1.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_CHOP_SWING].volume, 1.0f, 0.0f, 1.0f, ap,
                                             apsize, "sound[SOUND_CHOP_SWING].volume");
        }
        if (init)
        {
            sound[SOUND_CHOP_SWING].range_inner = 10.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_CHOP_SWING].range_inner, 1.0f, 0.0f,
                                             100000.0f, ap, apsize,
                                             "sound[SOUND_CHOP_SWING].range_inner");
        }
        if (init)
        {
            sound[SOUND_CHOP_SWING].range_outer = 30.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_CHOP_SWING].range_outer, 1.0f, 0.0f,
                                             100000.0f, ap, apsize,
                                             "sound[SOUND_CHOP_SWING].range_outer");
        }
        if (init)
        {
            sound[SOUND_CHOP_SWING].delay = 0.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_CHOP_SWING].delay, 1.0f, 0.0f, 100000.0f,
                                             ap, apsize, "sound[SOUND_CHOP_SWING].delay");
        }
        if (init)
        {
            sound[SOUND_SWIPE].volume = 1.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_SWIPE].volume, 1.0f, 0.0f, 1.0f, ap,
                                             apsize, "sound[SOUND_SWIPE].volume");
        }
        if (init)
        {
            sound[SOUND_SWIPE].range_inner = 10.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_SWIPE].range_inner, 1.0f, 0.0f, 100000.0f,
                                             ap, apsize, "sound[SOUND_SWIPE].range_inner");
        }
        if (init)
        {
            sound[SOUND_SWIPE].range_outer = 30.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_SWIPE].range_outer, 1.0f, 0.0f, 100000.0f,
                                             ap, apsize, "sound[SOUND_SWIPE].range_outer");
        }
        if (init)
        {
            sound[SOUND_SWIPE].delay = 0.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_SWIPE].delay, 1.0f, 0.0f, 100000.0f, ap,
                                             apsize, "sound[SOUND_SWIPE].delay");
        }
        if (init)
        {
            sound[SOUND_KARATE_SLUG].volume = 0.25f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_KARATE_SLUG].volume, 1.0f, 0.0f, 1.0f, ap,
                                             apsize, "sound[SOUND_KARATE_SLUG].volume");
        }
        if (init)
        {
            sound[SOUND_KARATE_SLUG].range_inner = 0.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_KARATE_SLUG].range_inner, 1.0f, 0.0f,
                                             100000.0f, ap, apsize,
                                             "sound[SOUND_KARATE_SLUG].range_inner");
        }
        if (init)
        {
            sound[SOUND_KARATE_SLUG].range_outer = 15.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_KARATE_SLUG].range_outer, 1.0f, 0.0f,
                                             100000.0f, ap, apsize,
                                             "sound[SOUND_KARATE_SLUG].range_outer");
        }
        if (init)
        {
            sound[SOUND_KARATE_SLUG].delay = 0.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_KARATE_SLUG].delay, 1.0f, 0.0f, 100000.0f,
                                             ap, apsize, "sound[SOUND_KARATE_SLUG].delay");
        }
        if (init)
        {
            sound[SOUND_KARATE_SLUG].fade_time = 0.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_KARATE_SLUG].fade_time, 1.0f, 0.0f,
                                             100000.0f, ap, apsize,
                                             "sound[SOUND_KARATE_SLUG].fade_time");
        }
        if (init)
        {
            sound[SOUND_CHOP_HIT].volume = 1.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_CHOP_HIT].volume, 1.0f, 0.0f, 1.0f, ap,
                                             apsize, "sound[SOUND_CHOP_HIT].volume");
        }
        if (init)
        {
            sound[SOUND_CHOP_HIT].range_inner = 10.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_CHOP_HIT].range_inner, 1.0f, 0.0f,
                                             100000.0f, ap, apsize,
                                             "sound[SOUND_CHOP_HIT].range_inner");
        }
        if (init)
        {
            sound[SOUND_CHOP_HIT].range_outer = 30.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_CHOP_HIT].range_outer, 1.0f, 0.0f,
                                             100000.0f, ap, apsize,
                                             "sound[SOUND_CHOP_HIT].range_outer");
        }
        if (init)
        {
            sound[SOUND_CHOP_HIT].delay = 0.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_CHOP_HIT].delay, 1.0f, 0.0f, 100000.0f, ap,
                                             apsize, "sound[SOUND_CHOP_HIT].delay");
        }
        if (init)
        {
            sound[SOUND_KARATE_HIT].volume = 0.5f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_KARATE_HIT].volume, 1.0f, 0.0f, 1.0f, ap,
                                             apsize, "sound[SOUND_KARATE_HIT].volume");
        }
        if (init)
        {
            sound[SOUND_KARATE_HIT].range_inner = 10.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_KARATE_HIT].range_inner, 1.0f, 0.0f,
                                             100000.0f, ap, apsize,
                                             "sound[SOUND_KARATE_HIT].range_inner");
        }
        if (init)
        {
            sound[SOUND_KARATE_HIT].range_outer = 30.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_KARATE_HIT].range_outer, 1.0f, 0.0f,
                                             100000.0f, ap, apsize,
                                             "sound[SOUND_KARATE_HIT].range_outer");
        }
        if (init)
        {
            sound[SOUND_KARATE_HIT].delay = 0.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_KARATE_HIT].delay, 1.0f, 0.0f, 100000.0f,
                                             ap, apsize, "sound[SOUND_KARATE_HIT].delay");
        }
        if (init)
        {
            sound[SOUND_HIT_SLAP].volume = 1.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_HIT_SLAP].volume, 1.0f, 0.0f, 1.0f, ap,
                                             apsize, "sound[SOUND_HIT_SLAP].volume");
        }
        if (init)
        {
            sound[SOUND_HIT_SLAP].range_inner = 30.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_HIT_SLAP].range_inner, 1.0f, 0.0f,
                                             100000.0f, ap, apsize,
                                             "sound[SOUND_HIT_SLAP].range_inner");
        }
        if (init)
        {
            sound[SOUND_HIT_SLAP].range_outer = 50.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_HIT_SLAP].range_outer, 1.0f, 0.0f,
                                             100000.0f, ap, apsize,
                                             "sound[SOUND_HIT_SLAP].range_outer");
        }
        if (init)
        {
            sound[SOUND_HIT_SLAP].delay = 0.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_HIT_SLAP].delay, 1.0f, 0.0f, 100000.0f, ap,
                                             apsize, "sound[SOUND_HIT_SLAP].delay");
        }
        if (init)
        {
            sound[SOUND_HIT_FLAIL].volume = 1.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_HIT_FLAIL].volume, 1.0f, 0.0f, 1.0f, ap,
                                             apsize, "sound[SOUND_HIT_FLAIL].volume");
        }
        if (init)
        {
            sound[SOUND_HIT_FLAIL].range_inner = 30.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_HIT_FLAIL].range_inner, 1.0f, 0.0f,
                                             100000.0f, ap, apsize,
                                             "sound[SOUND_HIT_FLAIL].range_inner");
        }
        if (init)
        {
            sound[SOUND_HIT_FLAIL].range_outer = 50.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_HIT_FLAIL].range_outer, 1.0f, 0.0f,
                                             100000.0f, ap, apsize,
                                             "sound[SOUND_HIT_FLAIL].range_outer");
        }
        if (init)
        {
            sound[SOUND_HIT_FLAIL].delay = 0.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_HIT_FLAIL].delay, 1.0f, 0.0f, 100000.0f,
                                             ap, apsize, "sound[SOUND_HIT_FLAIL].delay");
        }
        if (init)
        {
            sound[SOUND_TAUNT].asset = sound_asset_ids[0][0];
            sound_data[SOUND_TAUNT].id = xStrHash(sound_assets[sound[SOUND_TAUNT].asset].name);
        }
        if (init)
        {
            sound[SOUND_KARATE].asset = sound_asset_ids[1][0];
            sound_data[SOUND_KARATE].id = xStrHash(sound_assets[sound[SOUND_KARATE].asset].name);
        }
        if (init)
        {
            sound[SOUND_CHOP_WINDUP].asset = sound_asset_ids[2][0];
            sound_data[SOUND_CHOP_WINDUP].id =
                xStrHash(sound_assets[sound[SOUND_CHOP_WINDUP].asset].name);
        }
        if (init)
        {
            sound[SOUND_CHOP_SWING].asset = sound_asset_ids[3][0];
            sound_data[SOUND_CHOP_SWING].id =
                xStrHash(sound_assets[sound[SOUND_CHOP_SWING].asset].name);
        }
        if (init)
        {
            sound[SOUND_SWIPE].asset = sound_asset_ids[4][0];
            sound_data[SOUND_SWIPE].id = xStrHash(sound_assets[sound[SOUND_SWIPE].asset].name);
        }
        if (init)
        {
            sound[SOUND_KARATE_SLUG].asset = sound_asset_ids[5][0];
            sound_data[SOUND_KARATE_SLUG].id =
                xStrHash(sound_assets[sound[SOUND_KARATE_SLUG].asset].name);
        }
        if (init)
        {
            sound[SOUND_CHOP_HIT].asset = sound_asset_ids[6][0];
            sound_data[SOUND_CHOP_HIT].id =
                xStrHash(sound_assets[sound[SOUND_CHOP_HIT].asset].name);
        }
        if (init)
        {
            sound[SOUND_KARATE_HIT].asset = sound_asset_ids[7][1];
            sound_data[SOUND_KARATE_HIT].id =
                xStrHash(sound_assets[sound[SOUND_KARATE_HIT].asset].name);
        }
        if (init)
        {
            sound[SOUND_HIT_SLAP].asset = sound_asset_ids[8][0];
            sound_data[SOUND_HIT_SLAP].id =
                xStrHash(sound_assets[sound[SOUND_CHOP_HIT].asset].name);
        }
        if (init)
        {
            sound[SOUND_HIT_FLAIL].asset = sound_asset_ids[9][0];
            sound_data[SOUND_HIT_FLAIL].id =
                xStrHash(sound_assets[sound[SOUND_HIT_FLAIL].asset].name);
        }
    }

    void response_curve::end_t() const
    {
    }

} // namespace

xAnimTable* ZNPC_AnimTable_BossSB2()
{
    // clang-format off
    S32 anim_list[27] = {

    ANIM_Idle01,
    ANIM_Idle02,
    ANIM_Taunt01,
    ANIM_Hit01,
    ANIM_Hit02,
    ANIM_SmashHitLeft,
    ANIM_SmashHitRight,
    ANIM_SmackLeft01,
    ANIM_SmackRight01,
    ANIM_ChopLeftBegin,
    ANIM_ChopLeftLoop,
    ANIM_ChopLeftEnd,
    ANIM_ChopRightBegin,            
    ANIM_ChopRightLoop,             
    ANIM_ChopRightEnd,               
    ANIM_SwipeLeftBegin,
    ANIM_SwipeLeftLoop,
    ANIM_SwipeLeftEnd,
    ANIM_SwipeRightBegin,
    ANIM_SwipeRightLoop,
    ANIM_SwipeRightEnd,
    ANIM_ReturnIdle01,
    ANIM_KarateStart,
    ANIM_KarateLoop,
    ANIM_KarateEnd,
    ANIM_Dizzy01,  
    };
    

    xAnimTable* table = xAnimTableNew("zNPCB_SB2_Karate", NULL, 0);
    //24 new state
    //15  new transition
    xAnimTableNewState(table, g_strz_bossanim[ANIM_Idle01], 0x10, 0, 1, NULL, NULL, 0, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_Idle02], 0, 0, 1, NULL, NULL, 0, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_Taunt01], 0, 0, 1, NULL, NULL, 0, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_SmackLeft01], 0x20, 0, 1, NULL, NULL, 0, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_SmackRight01], 0x20, 0, 1, NULL, NULL, 0, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_ChopLeftBegin], 0x20, 0, 1, NULL, NULL, 0, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_ChopLeftLoop], 0, 0, 1, NULL, NULL, 0, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_ChopLeftEnd], 0x20, 0, 1, NULL, NULL, 0, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_ChopRightBegin], 0x20, 0, 1, NULL, NULL, 0, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_ChopRightLoop], 0, 0, 1, NULL, NULL, 0, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_ChopRightEnd], 0x20, 0, 1, NULL, NULL, 0, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_SwipeLeftBegin], 0x20, 0, 1, NULL, NULL, 0, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_SwipeLeftLoop], 0x10, 0, 1, NULL, NULL, 0, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_SwipeLeftEnd], 0x20, 0, 1, NULL, NULL, 0, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_SwipeRightBegin], 0x20, 0, 1, NULL, NULL, 0,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_SwipeRightLoop], 0x10, 0, 1, NULL, NULL, 0, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_SwipeRightEnd], 0x20, 0, 1, NULL, NULL, 0, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_Dizzy01], 0x10, 0, 1, NULL, NULL, 0, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_Hit01], 0, 0, 1, NULL, NULL, 0, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_Hit02], 0, 0, 1, NULL, NULL, 0, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_ReturnIdle01], 0x20, 0, 1, NULL, NULL, 0, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_KarateStart], 0x20, 0, 1, NULL, NULL, 0, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_KarateLoop], 0x10, 0, 1, NULL, NULL, 0, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_KarateEnd], 0x20, 0, 1, NULL, NULL, 0, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);

    NPCC_BuildStandardAnimTran(table, g_strz_bossanim, 0, 1, 0.2);

    xAnimTableNewTransition(table, g_strz_bossanim[ANIM_SmackLeft01], g_strz_bossanim[ANIM_Dizzy01],
                            0, 0, 0x10, 0, 0, 0, 0, 0, 0.1, 0);
    xAnimTableNewTransition(table, g_strz_bossanim[ANIM_SmackRight01],
                            g_strz_bossanim[ANIM_Dizzy01], 0, 0, 0x10, 0, 0, 0, 0, 0, 0.1, 0);
    xAnimTableNewTransition(table, g_strz_bossanim[ANIM_ReturnIdle01], g_strz_bossanim[ANIM_Idle01],
                            0, 0, 0x10, 0, 0, 0, 0, 0, 0.1, 0);
    xAnimTableNewTransition(table, g_strz_bossanim[ANIM_KarateStart],
                            g_strz_bossanim[ANIM_KarateLoop], 0, 0, 0x10, 0, 0, 0, 0, 0, 0.1, 0);
    xAnimTableNewTransition(table, g_strz_bossanim[ANIM_KarateEnd], g_strz_bossanim[ANIM_Idle01], 0,
                            0, 0x10, 0, 0, 0, 0, 0, 0.1, 0);
    xAnimTableNewTransition(table, g_strz_bossanim[ANIM_ChopLeftBegin],
                            g_strz_bossanim[ANIM_ChopLeftLoop], 0, 0, 0x10, 0, 0, 0, 0, 0, 0.1, 0);
    xAnimTableNewTransition(table, g_strz_bossanim[ANIM_ChopLeftLoop],
                            g_strz_bossanim[ANIM_ChopLeftEnd], 0, 0, 0, 0, 0, 0, 0, 0, 0.1, 0);
    xAnimTableNewTransition(table, g_strz_bossanim[ANIM_ChopRightBegin],
                            g_strz_bossanim[ANIM_ChopRightLoop], 0, 0, 0x10, 0, 0, 0, 0, 0, 0.1, 0);
    xAnimTableNewTransition(table, g_strz_bossanim[ANIM_ChopRightLoop],
                            g_strz_bossanim[ANIM_ChopRightEnd], 0, 0, 0, 0, 0, 0, 0, 0, 0.1, 0);
    xAnimTableNewTransition(table, g_strz_bossanim[ANIM_SwipeLeftBegin],
                            g_strz_bossanim[ANIM_SwipeLeftLoop], 0, 0, 0x10, 0, 0, 0, 0, 0, 0.1, 0);
    xAnimTableNewTransition(table, g_strz_bossanim[ANIM_SwipeLeftLoop],
                            g_strz_bossanim[ANIM_SwipeLeftEnd], 0, 0, 0, 0, 0, 0, 0, 0, 0.1, 0);
    xAnimTableNewTransition(table, g_strz_bossanim[ANIM_SwipeRightBegin],
                            g_strz_bossanim[ANIM_SwipeRightLoop], 0, 0, 0x10, 0, 0, 0, 0, 0, 0.1,
                            0);
    xAnimTableNewTransition(table, g_strz_bossanim[ANIM_SwipeRightLoop],
                            g_strz_bossanim[ANIM_SwipeRightEnd], 0, 0, 0, 0, 0, 0, 0, 0, 0.1, 0);
    xAnimTableNewTransition(table, g_strz_bossanim[ANIM_Hit01], g_strz_bossanim[ANIM_Idle01], 0, 0,
                            0x10, 0, 0, 0, 0, 0, 0.1, 0);
    xAnimTableNewTransition(table, g_strz_bossanim[ANIM_Hit02], g_strz_bossanim[ANIM_Dizzy01], 0, 0,
                            0x10, 0, 0, 0, 0, 0, 0.1, 0);

    return table;
}

void zNPCB_SB2::SelfSetup()
{
    xBehaveMgr* bmgr = xBehaveMgr_GetSelf();
    xPsyche* psy = 0;
    this->psy_instinct = bmgr->Subscribe(this, NULL);
    this->psy_instinct->BrainBegin();
    for (S32 i = NPC_GOAL_BOSSSB2INTRO; i <= NPC_GOAL_BOSSSB2DEATH; i++)
    {
        psy_instinct->AddGoal(i, this);
    }
    psy_instinct->AddGoal(NPC_GOAL_LIMBO, this);
    psy_instinct->BrainEnd();
    psy_instinct->SetSafety(NPC_GOAL_BOSSSB2IDLE);
}

void zNPCB_SB2::Destroy()
{
    zNPCB_SB2::destroy_glow_light();
    zNPCCommon::Destroy();
}

void zNPCB_SB2::NewTime(xScene* x, F32 y)
{
}

void zNPCB_SB2::decompose()
{
}

void zNPCB_SB2::show_nodes() 
{
    // Haven't found 0x74
    S32 i;
    for (i = 0; i < 9; i++)
    {
        if (nodes->ent != 0){
        xEntShow(nodes->ent);
        }
    }

}

void zNPCB_SB2::ouchie()
{
    xPsyche* psy = psy_instinct;
    S32 tempOuch;
    tempOuch = psy_instinct->GIDOfActive();
    if (tempOuch != NPC_GOAL_BOSSSB2HIT)
    {
        set_vulnerable(false);
        psy_instinct->GoalSet(NPC_GOAL_BOSSSB2HIT, 1);
    }
    
}



void zNPCB_SB2::Render()
{
    xNPCBasic::Render();
    zNPCB_SB2::render_debug();
}

F32 zNPCB_SB2::AttackTimeLeft()
{
    if (flag.dizzy != false)
    {
        return 0.0f;
    }
    return 1e38f;
}

void zNPCB_SB2::HoldUpDude()
{
}

void zNPCB_SB2::ThanksImDone()
{
    flag.dizzy = false;
}

void zNPCB_SB2::reset_speed()
{
    turn.accel = 0;
    turn.max_vel = 0;
}

S32 zNPCB_SB2::player_platform()
{
    return 0; // TODO
}

void zNPCB_SB2::activate_hand(zNPCB_SB2::hand_enum, bool)
{
   hands[0].hurt_player = 1;
   hands[0].hit_platforms = 0x10;
   penby = 0x10;
}

void zNPCB_SB2::deactivate_hand(zNPCB_SB2::hand_enum)
{
   hands[0].hit_platforms = 0;
   hands[0].hurt_player = 0x10;
   penby = 0x10;
}

S32 zNPCB_SB2::player_on_ground() const
{
    return 0;
    // TODO
}

void zNPCB_SB2::abandon_slugs()
{
    slug_data* pCurSlug      = &slugs[0];
    slug_data* pLastSlug     = &pCurSlug[3];
    for (; pCurSlug != pLastSlug; pCurSlug++)
    {
         pCurSlug->abandoned = 1;
    }
}

void zNPCB_SB2::reset_stage()
{
    stage = -1;
    stage_delay = 0;
}

void zNPCB_SB2::destroy_glow_light()
{
    xLightKit_Destroy(&glow_light.kit);
}

void zNPCB_SB2::say(U32)
{
}

xFactoryInst* zNPCGoalBossSB2Intro::create(S32 who, RyzMemGrow* grow, void* info)
{
    return new (who, grow) zNPCGoalBossSB2Intro(who, (zNPCB_SB2&)*info);
}

S32 zNPCGoalBossSB2Intro::Enter(F32 dt, void* updCtxt)
{
    if (owner.said_intro == 0)
    {
        owner.say(0);
        owner.said_intro = 1;
    }
    owner.delay = 0.0f;
    zEntPlayerControlOff(CONTROL_OWNER_BOSS);
    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalBossSB2Intro::Exit(F32 dt, void* updCtxt)
{
    zEntPlayerControlOn(CONTROL_OWNER_BOSS);
    return xGoal::Exit(dt, updCtxt);
}

xFactoryInst* zNPCGoalBossSB2Idle::create(S32 who, RyzMemGrow* grow, void* info)
{
    return new (who, grow) zNPCGoalBossSB2Idle(who, (zNPCB_SB2&)*info);
}

S32 zNPCGoalBossSB2Idle::Enter(F32 dt, void* updCtxt)
{
    transitioning = 1;
    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalBossSB2Idle::Exit(F32 dt, void* updCtxt)
{
    return xGoal::Exit(dt, updCtxt);
}

xFactoryInst* zNPCGoalBossSB2Taunt::create(S32 who, RyzMemGrow* grow, void* info)
{
    return new (who, grow) zNPCGoalBossSB2Taunt(who, (zNPCB_SB2&)*info);
}

S32 zNPCGoalBossSB2Taunt::Enter(F32 dt, void* updCtxt)
{
    play_sound(0, &owner.sound_loc.mouth , 1.0f);
    owner.flag.face_player = 1;
    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalBossSB2Taunt::Exit(F32 dt, void* updCtxt)
{
    return xGoal::Exit(dt, updCtxt);
}

xFactoryInst* zNPCGoalBossSB2Dizzy::create(S32 who, RyzMemGrow* grow, void* info)
{
    return new (who, grow) zNPCGoalBossSB2Dizzy(who, (zNPCB_SB2&)*info);
}

S32 zNPCGoalBossSB2Dizzy::Enter(F32 dt, void* updCtxt)
{
    sicked = 0;
    owner.flag.face_player = 0;
    owner.delay = 0;
    owner.set_vulnerable(false);
    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalBossSB2Dizzy::Exit(F32 dt, void* updCtxt)
{
    S32 tempDizzy;
    owner.set_vulnerable(true);
    if (sicked != false && owner.player_on_ground() == 0)  //Not compared correctly
    {
        owner.plankton->here_boy();
    }
    if (owner.life == 1)
    {
        owner.say(6);
    }
    else if (owner.flag.dizzy == false)
    {
        owner.say(0xb);
    }
    return xGoal::Exit(dt, updCtxt);
}

xFactoryInst* zNPCGoalBossSB2Hit::create(S32 who, RyzMemGrow* grow, void* info)
{
    return new (who, grow) zNPCGoalBossSB2Hit(who, (zNPCB_SB2&)*info);
}

S32 zNPCGoalBossSB2Hit::Enter(F32 dt, void* updCtxt) 
{
    // Function needs set up differently
    // im just dumb

    S32 tempHitVar;

    owner.flag.face_player = 1;
    owner.set_vulnerable(false);

    if (owner.flag.dizzy == false) {
    if (owner.life < 4){
        if (owner.life < 2){
            if (owner.life > 0){
                owner.say(9);
            }
        }
        else {
            owner.say(2);
        }
    }
    else {
        owner.say(3);
    }
    }
    else {
    owner.say(4);
    }

return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalBossSB2Hit::Exit(F32 dt, void* updCtxt)
{
    owner.set_vulnerable(true);
    return xGoal::Exit(dt, updCtxt);
}

xFactoryInst* zNPCGoalBossSB2Hunt::create(S32 who, RyzMemGrow* grow, void* info)
{
    return new (who, grow) zNPCGoalBossSB2Hunt(who, (zNPCB_SB2&)*info);
}

xFactoryInst* zNPCGoalBossSB2Swipe::create(S32 who, RyzMemGrow* grow, void* info)
{
    return new (who, grow) zNPCGoalBossSB2Swipe(who, (zNPCB_SB2&)*info);
}

S32 zNPCGoalBossSB2Swipe::Enter(F32 dt, void* updCtxt)
{
    owner.flag.face_player = 1;
    said = 0;
    holding = 0;
    started = 0;

    owner.choose_hand();

    if (owner.active_hand == 0)
    {
        begin_anim = g_hash_bossanim[56];
        loop_anim = g_hash_bossanim[57];
        end_anim = g_hash_bossanim[58];
    }
    else
    {
        begin_anim = g_hash_bossanim[59];
        loop_anim = g_hash_bossanim[60];
        end_anim = g_hash_bossanim[61];
    }

    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalBossSB2Swipe::Exit(F32 dt, void* updCtxt)
{
    owner.flag.face_player = true;
    owner.deactivate_hand(owner.active_hand);
    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalBossSB2Swipe::can_start() const
{
    S32 tempStart;
    tempStart = owner.player_platform();
    return tempStart != 0;
}

xFactoryInst* zNPCGoalBossSB2Chop::create(S32 who, RyzMemGrow* grow, void* info)
{
    return new (who, grow) zNPCGoalBossSB2Chop(who, (zNPCB_SB2&)*info);
}

S32 zNPCGoalBossSB2Chop::Enter(F32 dt, void* updCtxt)
{
    targetted = 0;
    started = 0;
    owner.flag.face_player = true;

    owner.choose_hand();
    owner.activate_hand(owner.active_hand, true);

    if (owner.active_hand == 0)
    {
        begin_anim = g_hash_bossanim[50];
        loop_anim = g_hash_bossanim[51];
        end_anim = g_hash_bossanim[52];
    }
    else
    {
        begin_anim = g_hash_bossanim[53];
        loop_anim = g_hash_bossanim[54];
        end_anim = g_hash_bossanim[55];
    }

    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalBossSB2Chop::Exit(F32 dt, void* updCtxt)
{
    owner.deactivate_hand(owner.active_hand);
    return xGoal::Exit(dt, updCtxt);
}

xFactoryInst* zNPCGoalBossSB2Karate::create(S32 who, RyzMemGrow* grow, void* info)
{
    return new (who, grow) zNPCGoalBossSB2Karate(who, (zNPCB_SB2&)*info);
}

S32 zNPCGoalBossSB2Karate::Enter(F32 dt, void* updCtxt)
{
    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalBossSB2Karate::Exit(F32 dt, void* updCtxt)
{
    owner.abandon_slugs();
    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalBossSB2Karate::can_start() const
{
    S32 tempStart;
    tempStart = owner.player_platform();
    return tempStart != 0;
}

xFactoryInst* zNPCGoalBossSB2Death::create(S32 who, RyzMemGrow* grow, void* info)
{
    return new (who, grow) zNPCGoalBossSB2Death(who, (zNPCB_SB2&)*info);
}

S32 zNPCGoalBossSB2Death::Enter(F32 dt, void* updCtxt)
{
    owner.decompose();
    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalBossSB2Death::Exit(F32 dt, void* updCtxt)
{
    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalBossSB2Death::Process(en_trantype*, F32, void*, xScene*)
{
    return 0;
}

void zNPCB_SB2::choose_hand()
{
    S32 r = xrand();
    S32 b = (r >> 13) & 1;
    this->active_hand = (b == 0 ? LEFT_HAND : RIGHT_HAND);
}

xVec3& zNPCB_SB2::location() const
{
    return (xVec3&)(this->model->Mat->pos);
}

void zNPCB_SB2::render_debug()
{
}

xVec3& zNPCB_SB2::get_home() const
{
    return (xVec3&)(this->asset->pos);
}

xVec3& zNPCB_SB2::start_location() const
{
    return (xVec3&)(this->asset->pos);
}

xVec3& zNPCB_SB2::facing() const
{
    return (xVec3&)(this->model->Mat->at);
}
