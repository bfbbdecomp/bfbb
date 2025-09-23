#include "xVec3.h"
#include "xMath3.h"
#include "xDebug.h"
#include "zGlobals.h"
#include "zNPCTypeDutchman.h"

#include <types.h>

#define f1605 0.0f
#define f1606 1.0f
#define f1689 0.2f
#define f1690 0.1f

#define ANIM_Idle01 1
#define ANIM_Fidget01 4 //0x10
#define ANIM_Fidget02 5 //0x14
#define ANIM_Fidget03 6 //0x18
#define ANIM_Taunt01 7 // 0x1c
#define ANIM_Death01 11 //0x2c
#define ANIM_AttackWindup01 12 //0x30
#define ANIM_AttackLoop01 13 //0x34
#define ANIM_AttackEnd01 14 //0x38
#define ANIM_Attack02Windup01 16 //0x40
#define ANIM_Attack02Loop01 17 //0x44
#define ANIM_Attack02End01 18 //0x48
#define ANIM_LassoGrab01 19 //0x4c

#define SOUND_BEAM 0
#define SOUND_FLAME 1
#define SOUND_VAPOR 2
#define SOUND_HIGH_HUMM 3
#define SOUND_BIZARRE 4
#define SOUND_MORE_BIZARRE 5

static U32 dutchman_count;

extern NPCSndTrax g_sndTrax_Dutchman;

namespace
{

    struct sound_property
    {
        U32 asset; // unknown whether or not this belongs here. Just copied from other structs with same name. Also needed for matching a function
        F32 volume;
        F32 range_inner;
        F32 range_outer;
        F32 delay;
        F32 fade_time;
    };

    struct tweak_group
    {
        F32 orbit_radius;
        xVec3 accel;
        xVec3 max_vel;
        F32 turn_accel;
        F32 turn_max_vel;
        F32 ground_y;
        F32 ground_radius;
        F32 alpha;
        F32 speed_mult[3];
        F32 reticle_y;
        F32 reticle_radius;
        struct
        {
            F32 alpha;
            F32 scale;
            F32 yoffset;
            F32 vel_u;
            F32 vel_v;
        } halo;
        struct
        {
            F32 turn_vel;
            F32 turn_accel;
            F32 up_vel;
        } initiate;
        beam_type beam;
        struct
        {
            xVec3 accel;
            xVec3 max_vel;
            F32 turn_accel;
            F32 turn_max_vel;
            F32 fade_time;
            F32 trail_width;
        } teleport;
        struct
        {
            F32 accel;
            F32 max_vel;
            F32 start_delay;
            F32 wave_rate;
            F32 unit_dist;
            F32 start_dist;
            F32 lead_dist;
            F32 emit_rate[3];
            F32 emit_width[3];
            F32 snot_dist;
            F32 snot_vel;
            F32 snot_height;
            F32 splash_width;
            F32 decay;
            F32 blob_pitch;
            F32 spray_width;
            F32 warm_up_time;
            F32 sneeze_mult;
        } flame;
        struct
        {
            signed int dummy;
        } fly;
        struct
        {
            F32 min_dist_enable;
            F32 min_dist_disable;
            F32 max_angle_enable;
            F32 max_angle_disable;
            F32 safety_dist;
            F32 decel;
            F32 escape_delay;
        } lasso;
        struct
        {
            F32 beam_radius;
            F32 beam_blast_radius;
            xVec3 flame_size;
            xVec3 snot_size;
            F32 hand_radius;
            F32 slime_width;
            F32 slime_time;
        } damage;
        struct
        {
            F32 delay;
            F32 duration;
            F32 rate_mult;
            F32 yoffset;
        } wipe;
        struct
        {
            F32 wind_duration;
            F32 wink_duration;
            F32 start_y;
            F32 end_y;
            F32 wind_min;
            F32 wind_kill_dist;
            F32 wind_mag_up;
            F32 wind_mag_right;
        } death;
        sound_property sound[6];
        void* context;
        tweak_callback cb_orbit_radius;
        tweak_callback cb_ground;
        tweak_callback cb_damage;
        tweak_callback cb_flame_rate;
        tweak_callback cb_alpha;
        tweak_callback cb_reticle;
        tweak_callback cb_halo_uv;
        tweak_callback cb_blob_pitch;
        tweak_callback cb_sound;

        void register_tweaks(bool init, xModelAssetParam* ap, U32 apsize, const char*);
        void load(xModelAssetParam*, U32);
    };

    struct sound_data_type
    {
        U32 id;
        U32 handle;
    };

    struct sound_asset
    {
        char* name;
        U32 priority;
        U32 flags;
    };

    class curve_node
    {
        F32 time;
        iColor_tag color;
        F32 scale;
    };

    static delay_goal sequence[3][16];
    static sound_data_type sound_data[6];
    static sound_asset sound_assets[6];
    static xBinaryCamera boss_cam;
    static xFXRibbon eye_scorch[2];
    static curve_node burn_ribbon_curve[7];
    static zParEmitter* plasma_emitter;
    static xParEmitterCustomSettings plasma_emitter_settings;
    static zParEmitter* spark_emitter;
    static xParEmitterCustomSettings spark_emitter_settings;
    static zParEmitter* light_emitter;
    static xParEmitterCustomSettings light_emitter_settings;
    static zParEmitter* eyeglow_emitter[2];
    static zParEmitter* death_emitter;
    static zParEmitter* dissolve_emitter;
    static zParEmitter* fadeout_emitter;
    static zParEmitter* fadein_emitter;
    static zParEmitter* flame_emitter[3];
    static xParEmitterCustomSettings flame_emitter_settings;
    static zParEmitter* snot_emitter;
    static xParEmitterCustomSettings snot_emitter_settings;
    static zParEmitter* slime_emitter;
    static xParEmitterCustomSettings slime_emitter_settings;
    static zParEmitter* hand_trail_emitter;
    static zParEmitter* blob_emitter;

    static void init_sound()
    {
        U32 total;

        memset(&sound_data, 0, 0x30);

        for (U32 i = 0; i < 6; i++)
        {
            xStrHash((const char*)&sound_assets[i]);
        }
    }

    U32 play_sound(S32, const xVec3*, F32)
    {
        return 0;
    }

    void kill_sound(S32 a, U32 b)
    {
    }

    static tweak_group tweak;

    static void set_volume(S32 which, U32 unk, F32 new_vol)
    {
        xSndSetVol(tweak.sound->asset * unk, new_vol);
    }

    void tweak_group::register_tweaks(bool init, xModelAssetParam* ap, U32 apsize, const char*)
    {
        if (init)
        {
            orbit_radius = 13.0f;
            auto_tweak::load_param<F32, F32>(orbit_radius, 1.0f, 0.01f, 50.0f, ap, apsize,
                                             "orbit_radius");
        }
        if (init)
        {
            accel = xVec3::create(1.0f, 3.0f, 2.5f);
            auto_tweak::load_param<xVec3, S32>(accel, 0, 0, 0, ap, apsize, "accel");
        }
        if (init)
        {
            max_vel = xVec3::create(1.0f, 3.0f, 2.5f);
            auto_tweak::load_param<xVec3, S32>(max_vel, 0, 0, 0, ap, apsize, "max_vel");
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
            ground_y = -1.4f;
            auto_tweak::load_param<F32, F32>(ground_y, 1.0f, -1000000000.0f, 1000000000.0f, ap,
                                             apsize, "ground_y");
        }
        if (init)
        {
            ground_radius = 12.0f;
            auto_tweak::load_param<F32, F32>(ground_radius, 1.0f, 0.0f, 1000000000.0f, ap, apsize,
                                             "ground_radius");
        }
        if (init)
        {
            alpha = 1.0f;
            auto_tweak::load_param<F32, F32>(alpha, 1.0f, 0.0f, 1.0f, ap, apsize, "alpha");
        }
        if (init)
        {
            speed_mult[0] = 1.0f;
            auto_tweak::load_param<F32, F32>(speed_mult[0], 1.0f, 0.01f, 10.0f, ap, apsize,
                                             "speed_mult[0]");
        }
        if (init)
        {
            speed_mult[1] = 1.5f;
            auto_tweak::load_param<F32, F32>(speed_mult[1], 1.0f, 0.01f, 10.0f, ap, apsize,
                                             "speed_mult[1]");
        }
        if (init)
        {
            speed_mult[2] = 2.0f;
            auto_tweak::load_param<F32, F32>(speed_mult[2], 1.0f, 0.01f, 10.0f, ap, apsize,
                                             "speed_mult[2]");
        }
        if (init)
        {
            reticle_y = 0.0f;
            auto_tweak::load_param<F32, F32>(reticle_y, 1.0f, -100.0f, 100.0f, ap, apsize,
                                             "reticle_y");
        }
        if (init)
        {
            reticle_radius = 1.0f;
            auto_tweak::load_param<F32, F32>(reticle_radius, 1.0f, -100.0f, 100.0f, ap, apsize,
                                             "reticle_radius");
        }
        if (init)
        {
            halo.alpha = 0.0f;
            auto_tweak::load_param<F32, F32>(halo.alpha, 1.0f, 0.0f, 1.0f, ap, apsize,
                                             "halo.alpha");
        }
        if (init)
        {
            halo.scale = 1.0f;
            auto_tweak::load_param<F32, F32>(halo.scale, 1.0f, 0.0f, 100.0f, ap, apsize,
                                             "halo.scale");
        }
        if (init)
        {
            halo.yoffset = 1.0f;
            auto_tweak::load_param<F32, F32>(halo.yoffset, 1.0f, -10.0f, 10.0f, ap, apsize,
                                             "halo.yoffset");
        }
        if (init)
        {
            halo.vel_u = 0.0f;
            auto_tweak::load_param<F32, F32>(halo.vel_u, 1.0f, -1000000000.0, 1000000000.0f, ap,
                                             apsize, "halo.vel_u");
        }
        if (init)
        {
            halo.vel_v = 0.0f;
            auto_tweak::load_param<F32, F32>(halo.vel_v, 1.0f, -1000000000.0, 1000000000.0f, ap,
                                             apsize, "halo.vel_v");
        }
        if (init)
        {
            initiate.turn_vel = 900.0f;
            auto_tweak::load_param<F32, F32>(initiate.turn_vel, DEG2RAD(10), -1000000000.0f,
                                             1000000000.0f, ap, apsize, "initiate.turn_vel");
        }
        if (init)
        {
            initiate.turn_accel = 180.0f;
            auto_tweak::load_param<F32, F32>(initiate.turn_accel, DEG2RAD(10), 0.01f, 1000000000.0f,
                                             ap, apsize, "initiate.turn_accel");
        }
        if (init)
        {
            initiate.up_vel = 10.0f;
            auto_tweak::load_param<F32, F32>(initiate.up_vel, DEG2RAD(10), 0.01f, 1000000000.0f, ap,
                                             apsize, "initiate.up_vel");
        }
        if (init)
        {
            beam.knock_back = 1.0f;
            auto_tweak::load_param<F32, F32>(beam.knock_back, 1.0f, 0.0f, 100000.0f, ap, apsize,
                                             "beam.knock_back");
        }
        if (init)
        {
            beam.thickness = 0.4f;
            auto_tweak::load_param<F32, F32>(beam.thickness, 1.0f, 0.001f, 10.0f, ap, apsize,
                                             "beam.thickness");
        }
        if (init)
        {
            beam.focus_time = 0.2f;
            auto_tweak::load_param<F32, F32>(beam.focus_time, 1.0f, 0.01f, 10.0f, ap, apsize,
                                             "beam.focus_time");
        }
        if (init)
        {
            beam.segment_width = 0.2f;
            auto_tweak::load_param<F32, F32>(beam.segment_width, 1.0f, 0.001f, 10.0f, ap, apsize,
                                             "beam.segment_width");
        }
        if (init)
        {
            beam.accel = 80.0f;
            auto_tweak::load_param<F32, F32>(beam.accel, 1.0f, 0.01f, 1000000000.0f, ap, apsize,
                                             "beam.accel");
        }
        if (init)
        {
            beam.max_vel = 40.0f;
            auto_tweak::load_param<F32, F32>(beam.max_vel, 1.0f, 0.01f, 1000000000.0f, ap, apsize,
                                             "beam.max_vel");
        }
        if (init)
        {
            beam.start_dist = 1.0f;
            auto_tweak::load_param<F32, F32>(beam.start_dist, 1.0f, 0.0f, 100.0f, ap, apsize,
                                             "beam.start_dist");
        }
        if (init)
        {
            beam.end_dist = 25.0f;
            auto_tweak::load_param<F32, F32>(beam.end_dist, 1.0f, 0.0f, 100.0f, ap, apsize,
                                             "beam.end_dist");
        }
        if (init)
        {
            beam.wave_freq = 5.0f;
            auto_tweak::load_param<F32, F32>(beam.wave_freq, 1.0f, 0.0f, 1000000000.0f, ap, apsize,
                                             "beam.wave_freq");
        }
        if (init)
        {
            beam.wave_min = 0.5f;
            auto_tweak::load_param<F32, F32>(beam.wave_min, 1.0f, 0.0f, 100.0f, ap, apsize,
                                             "beam.wave_min");
        }
        if (init)
        {
            beam.wave_max = 2.0f;
            auto_tweak::load_param<F32, F32>(beam.wave_max, 1.0f, 0.0f, 100.0f, ap, apsize,
                                             "beam.wave_max");
        }
        if (init)
        {
            beam.light_rate = 0.1f;
            auto_tweak::load_param<F32, F32>(beam.light_rate, 1.0f, 0.0f, 1.0f, ap, apsize,
                                             "beam.light_rate");
        }
        if (init)
        {
            beam.glow_dist = 0.25f;
            auto_tweak::load_param<F32, F32>(beam.glow_dist, 1.0f, 0.0f, 10.0f, ap, apsize,
                                             "beam.glow_dist");
        }
        if (init)
        {
            beam.shots[0] = 2;
            auto_tweak::load_param<S32, S32>(beam.shots[0], 1, 1, 1000, ap, apsize,
                                             "beam.shots[0]");
        }
        if (init)
        {
            beam.shots[1] = 3;
            auto_tweak::load_param<S32, S32>(beam.shots[1], 1, 1, 1000, ap, apsize,
                                             "beam.shots[1]");
        }
        if (init)
        {
            beam.shots[2] = 4;
            auto_tweak::load_param<S32, S32>(beam.shots[2], 1, 1, 1000, ap, apsize,
                                             "beam.shots[2]");
        }
        if (init)
        {
            beam.fade_dist = 20.0f;
            auto_tweak::load_param<F32, F32>(beam.fade_dist, 1.0f, 0.0f, 100000.0f, ap, apsize,
                                             "beam.fade_dist");
        }
        if (init)
        {
            teleport.accel = xVec3::create(20.0f, 20.0f, 20.0f);
            auto_tweak::load_param<xVec3, S32>(teleport.accel, 0, 0, 0, ap, apsize,
                                               "teleport.accel");
        }
        if (init)
        {
            teleport.max_vel = xVec3::create(20.0f, 20.0f, 20.0f);
            auto_tweak::load_param<xVec3, S32>(teleport.max_vel, 0, 0, 0, ap, apsize,
                                               "teleport.max_vel");
        }
        if (init)
        {
            teleport.turn_accel = 2160.0f;
            auto_tweak::load_param<F32, F32>(teleport.turn_accel, DEG2RAD(10), 0.01f, 1000000000.0f,
                                             ap, apsize, "teleport.turn_accel");
        }
        if (init)
        {
            teleport.turn_max_vel = 720.0f;
            auto_tweak::load_param<F32, F32>(teleport.turn_max_vel, DEG2RAD(10), 0.01,
                                             1000000000.0f, ap, apsize, "teleport.turn_max_vel");
        }
        if (init)
        {
            teleport.fade_time = 0.5f;
            auto_tweak::load_param<F32, F32>(teleport.fade_time, 1.0f, 0.01f, 10.0f, ap, apsize,
                                             "teleport.fade_time");
        }
        if (init)
        {
            teleport.trail_width = 0.0f;
            auto_tweak::load_param<F32, F32>(teleport.trail_width, 1.0f, 0.0f, 10.0f, ap, apsize,
                                             "teleport.trail_width");
        }
        if (init)
        {
            flame.accel = 80.0f;
            auto_tweak::load_param<F32, F32>(flame.accel, 1.0f, 0.0f, 1000000000.0f, ap, apsize,
                                             "flame.accel");
        }
        if (init)
        {
            flame.max_vel = 10.0f;
            auto_tweak::load_param<F32, F32>(flame.max_vel, 1.0f, 0.0f, 1000000000.0f, ap, apsize,
                                             "flame.max_vel");
        }
        if (init)
        {
            flame.start_delay = 0.5f;
            auto_tweak::load_param<F32, F32>(flame.start_delay, 1.0f, 0.01f, 10.0f, ap, apsize,
                                             "flame.start_delay");
        }
        if (init)
        {
            flame.wave_rate = 2.0f;
            auto_tweak::load_param<F32, F32>(flame.wave_rate, 1.0f, 0.01f, 100.0f, ap, apsize,
                                             "flame.wave_rate");
        }
        if (init)
        {
            flame.unit_dist = 0.8f;
            auto_tweak::load_param<F32, F32>(flame.unit_dist, 1.0f, 0.01f, 100.0f, ap, apsize,
                                             "flame.unit_dist");
        }
        if (init)
        {
            flame.start_dist = 0.0f;
            auto_tweak::load_param<F32, F32>(flame.start_dist, 1.0f, 0.0f, 10.0f, ap, apsize,
                                             "flame.start_dist");
        }
        if (init)
        {
            flame.lead_dist = 2.0f;
            auto_tweak::load_param<F32, F32>(flame.lead_dist, 1.0f, -10.0f, 10.0f, ap, apsize,
                                             "flame.lead_dist");
        }
        if (init)
        {
            flame.emit_rate[0] = 2.0f;
            auto_tweak::load_param<F32, F32>(flame.emit_rate[0], 1.0f, 0.0f, 1000000.0f, ap, apsize,
                                             "flame.emit_rate[0]");
        }
        if (init)
        {
            flame.emit_rate[1] = 4.0f;
            auto_tweak::load_param<F32, F32>(flame.emit_rate[1], 1.0f, 0.0f, 1000000.0f, ap, apsize,
                                             "flame.emit_rate[1]");
        }
        if (init)
        {
            flame.emit_rate[2] = 10.0f;
            auto_tweak::load_param<F32, F32>(flame.emit_rate[2], 1.0f, 0.0f, 1000000.0f, ap, apsize,
                                             "flame.emit_rate[2]");
        }
        if (init)
        {
            flame.emit_width[0] = 0.1f;
            auto_tweak::load_param<F32, F32>(flame.emit_width[0], 1.0f, 0.0f, 10.0f, ap, apsize,
                                             "flame.emit_width[0]");
        }
        if (init)
        {
            flame.emit_width[1] = 0.3f;
            auto_tweak::load_param<F32, F32>(flame.emit_width[1], 1.0f, 0.0f, 10.0f, ap, apsize,
                                             "flame.emit_width[1]");
        }
        if (init)
        {
            flame.emit_width[2] = 1.0f;
            auto_tweak::load_param<F32, F32>(flame.emit_width[2], 1.0f, 0.0f, 10.0f, ap, apsize,
                                             "flame.emit_width[2]");
        }
        if (init)
        {
            flame.snot_dist = 0.2f;
            auto_tweak::load_param<F32, F32>(flame.snot_dist, 1.0f, -10.0f, 10.0f, ap, apsize,
                                             "flame.snot_dist");
        }
        if (init)
        {
            flame.snot_vel = 2.0f;
            auto_tweak::load_param<F32, F32>(flame.snot_vel, 1.0f, -100.0f, 100.0f, ap, apsize,
                                             "flame.snot_vel");
        }
        if (init)
        {
            flame.snot_height = -0.2f;
            auto_tweak::load_param<F32, F32>(flame.snot_height, 1.0f, -10.0f, 10.0f, ap, apsize,
                                             "flame.snot_height");
        }
        if (init)
        {
            flame.splash_width = 0.1f;
            auto_tweak::load_param<F32, F32>(flame.splash_width, 1.0f, 0.0f, 10.0f, ap, apsize,
                                             "flame.splash_width");
        }
        if (init)
        {
            flame.decay = 0.75f;
            auto_tweak::load_param<F32, F32>(flame.decay, 1.0f, 0.0f, 1.0f, ap, apsize,
                                             "flame.decay");
        }
        if (init)
        {
            flame.blob_pitch = 60.0f;
            auto_tweak::load_param<F32, F32>(flame.blob_pitch, DEG2RAD(10), -90.0f, 90.0f, ap,
                                             apsize, "flame.blob_pitch");
        }
        if (init)
        {
            flame.spray_width = 0.1f;
            auto_tweak::load_param<F32, F32>(flame.splash_width, 1.0f, 0.0f, 10.0f, ap, apsize,
                                             "flame.spray_width");
        }
        if (init)
        {
            flame.warm_up_time = 0.4f;
            auto_tweak::load_param<F32, F32>(flame.warm_up_time, 1.0f, 0.01f, 10.0f, ap, apsize,
                                             "flame.warm_up_time");
        }
        if (init)
        {
            flame.sneeze_mult = 10.0f;
            auto_tweak::load_param<F32, F32>(flame.sneeze_mult, 1.0f, 1.0f, 100.0f, ap, apsize,
                                             "flame.sneete_mult");
        }
        if (init)
        {
            lasso.min_dist_enable = 2.0f;
            auto_tweak::load_param<F32, F32>(lasso.min_dist_enable, 1.0f, 0.0f, 100.0f, ap, apsize,
                                             "lasso.min_dist_enable");
        }
        if (init)
        {
            lasso.min_dist_disable = 0.5f;
            auto_tweak::load_param<F32, F32>(lasso.min_dist_disable, 1.0f, 0.0f, 100.0f, ap, apsize,
                                             "lasso.min_dist_disable");
        }
        if (init)
        {
            lasso.max_angle_enable = 60.0f;
            auto_tweak::load_param<F32, F32>(lasso.max_angle_enable, DEG2RAD(10), 0.01f,
                                             1000000000.0f, ap, apsize, "lasso.max_angle_enable");
        }
        if (init)
        {
            lasso.max_angle_disable = 90.0f;
            auto_tweak::load_param<F32, F32>(lasso.max_angle_disable, DEG2RAD(10), 0.01f,
                                             1000000000.0f, ap, apsize, "lasso.max_angle_disable");
        }
        if (init)
        {
            lasso.safety_dist = 2.0f;
            auto_tweak::load_param<F32, F32>(lasso.safety_dist, 1.0f, 0.0f, 100.0f, ap, apsize,
                                             "lasso.safety_dist");
        }
        if (init)
        {
            lasso.decel = 20.0f;
            auto_tweak::load_param<F32, F32>(lasso.decel, 1.0f, 0.0f, 1000.0f, ap, apsize,
                                             "lasso.decel");
        }
        if (init)
        {
            lasso.escape_delay = 1.0f;
            auto_tweak::load_param<F32, F32>(lasso.escape_delay, 1.0f, 0.0f, 100.0f, ap, apsize,
                                             "lasso.escape_delay");
        }
        if (init)
        {
            damage.beam_radius = 0.1f;
            auto_tweak::load_param<F32, F32>(damage.beam_radius, 1.0f, 0.0f, 10.0f, ap, apsize,
                                             "damage.beam_radius");
        }
        if (init)
        {
            damage.beam_blast_radius = 0.4f;
            auto_tweak::load_param<F32, F32>(damage.beam_blast_radius, 1.0f, 0.0f, 10.0f, ap,
                                             apsize, "damage.beam_blast_radius");
        }
        if (init)
        {
            damage.flame_size = xVec3::create(0.4f, 1.5f, 3.0f);
            auto_tweak::load_param<xVec3, S32>(damage.flame_size, 0, 0, 0, ap, apsize,
                                               "damage.flame_size");
        }
        if (init)
        {
            damage.snot_size = xVec3::create(2.0f, 2.0f, 2.5f);
            auto_tweak::load_param<xVec3, S32>(damage.snot_size, 0, 0, 0, ap, apsize,
                                               "damage.snot_size");
        }
        if (init)
        {
            damage.hand_radius = 0.5f;
            auto_tweak::load_param<F32, F32>(damage.hand_radius, 1.0f, 0.0f, 10.0f, ap, apsize,
                                             "damage.hand_radius");
        }
        if (init)
        {
            damage.slime_width = 1.0f;
            auto_tweak::load_param<F32, F32>(damage.slime_width, 1.0f, 0.0f, 10.0f, ap, apsize,
                                             "damage.slime_width");
        }
        if (init)
        {
            damage.slime_time = 6.0f;
            auto_tweak::load_param<F32, F32>(damage.slime_time, 1.0f, 0.0f, 20.0f, ap, apsize,
                                             "damage.slime_time");
        }
        if (init)
        {
            wipe.delay = 1.2f;
            auto_tweak::load_param<F32, F32>(wipe.delay, 1.0f, 0.0f, 10.0f, ap, apsize,
                                             "wipe.delay");
        }
        if (init)
        {
            wipe.duration = 0.3f;
            auto_tweak::load_param<F32, F32>(wipe.duration, 1.0f, 0.0f, 10.0f, ap, apsize,
                                             "wipe.duration");
        }
        if (init)
        {
            wipe.rate_mult = 2.0f;
            auto_tweak::load_param<F32, F32>(wipe.rate_mult, 1.0f, 0.0f, 100.0f, ap, apsize,
                                             "wipe.rate_mult");
        }
        if (init)
        {
            wipe.yoffset = 0.0f;
            auto_tweak::load_param<F32, F32>(wipe.yoffset, 1.0f, -10.0f, 10.0f, ap, apsize,
                                             "wipe.yoffset");
        }
        if (init)
        {
            death.wind_duration = 5.0f;
            auto_tweak::load_param<F32, F32>(death.wind_duration, 1.0f, 0.01f, 100.0f, ap, apsize,
                                             "death.wind_duration");
        }
        if (init)
        {
            death.wink_duration = 1.0f;
            auto_tweak::load_param<F32, F32>(death.wink_duration, 1.0f, 0.01f, 100.0f, ap, apsize,
                                             "death.wink_duration");
        }
        if (init)
        {
            death.start_y = -2.0f;
            auto_tweak::load_param<F32, F32>(death.start_y, 1.0f, -100.0f, 100.0f, ap, apsize,
                                             "death.start_y");
        }
        if (init)
        {
            death.end_y = 7.0f;
            auto_tweak::load_param<F32, F32>(death.end_y, 1.0f, -100.0f, 100.0f, ap, apsize,
                                             "death.end_y");
        }
        if (init)
        {
            death.wind_min = 2.0f;
            auto_tweak::load_param<F32, F32>(death.wind_min, 1.0f, 0.0f, 1000000000.0f, ap, apsize,
                                             "death.wind_min");
        }
        if (init)
        {
            death.wind_kill_dist = 2.0f;
            auto_tweak::load_param<F32, F32>(death.wind_kill_dist, 1.0f, 0.01f, 1000000000.0f, ap,
                                             apsize, "death.wind_kill_dist");
        }
        if (init)
        {
            death.wind_mag_up = 0.0f;
            auto_tweak::load_param<F32, F32>(death.wind_mag_up, 1.0f, -1000000000.0f, 1000000000.0f,
                                             ap, apsize, "death.wind_mag_up");
        }
        if (init)
        {
            death.wind_mag_right = 10.0f;
            auto_tweak::load_param<F32, F32>(death.wind_mag_right, 1.0f, -1000000000.0f,
                                             1000000000.0f, ap, apsize, "death.wind_mag_right");
        }
        if (init)
        {
            sound[SOUND_BEAM].volume = 0.5f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_BEAM].volume, 1.0f, 0.0f, 1.0f, ap, apsize,
                                             "sound[SOUND_BEAM].volume");
        }
        if (init)
        {
            sound[SOUND_BEAM].range_inner = 0.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_BEAM].range_inner, 1.0f, 0.0f, 100000.0f,
                                             ap, apsize, "sound[SOUND_BEAM].range_inner");
        }
        if (init)
        {
            sound[SOUND_BEAM].range_outer = 20.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_BEAM].range_outer, 1.0f, 0.0f, 100000.0f,
                                             ap, apsize, "sound[SOUND_BEAM].range_outer");
        }
        if (init)
        {
            sound[SOUND_BEAM].delay = 0.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_BEAM].delay, 1.0f, 0.0f, 100000.0f, ap,
                                             apsize, "sound[SOUND_BEAM].delay");
        }
        if (init)
        {
            sound[SOUND_BEAM].fade_time = 0.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_BEAM].fade_time, 1.0f, 0.0f, 100000.0f, ap,
                                             apsize, "sound[SOUND_BEAM].fade_time");
        }
        if (init)
        {
            sound[SOUND_FLAME].volume = 0.5f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_FLAME].volume, 1.0f, 0.0f, 1.0f, ap,
                                             apsize, "sound[SOUND_FLAME].volume");
        }
        if (init)
        {
            sound[SOUND_FLAME].range_inner = 0.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_FLAME].range_inner, 1.0f, 0.0f, 100000.0f,
                                             ap, apsize, "sound[SOUND_FLAME].range_inner");
        }
        if (init)
        {
            sound[SOUND_FLAME].range_outer = 20.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_FLAME].range_outer, 1.0f, 0.0f, 100000.0f,
                                             ap, apsize, "sound[SOUND_FLAME].range_outer");
        }
        if (init)
        {
            sound[SOUND_FLAME].delay = 0.2f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_FLAME].delay, 1.0f, 0.0f, 100000.0f, ap,
                                             apsize, "sound[SOUND_FLAME].delay");
        }
        if (init)
        {
            sound[SOUND_FLAME].fade_time = 1.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_FLAME].fade_time, 1.0f, 0.0f, 100000.0f,
                                             ap, apsize, "sound[SOUND_FLAME].fade_time");
        }
        if (init)
        {
            sound[SOUND_VAPOR].volume = 1.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_VAPOR].volume, 1.0f, 0.0f, 1.0f, ap,
                                             apsize, "sound[SOUND_VAPOR].volume");
        }
        if (init)
        {
            sound[SOUND_VAPOR].range_inner = 10.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_VAPOR].range_inner, 1.0f, 0.0f, 100000.0f,
                                             ap, apsize, "sound[SOUND_VAPOR].range_inner");
        }
        if (init)
        {
            sound[SOUND_VAPOR].range_outer = 30.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_VAPOR].range_outer, 1.0f, 0.0f, 100000.0f,
                                             ap, apsize, "sound[SOUND_VAPOR].range_outer");
        }
        if (init)
        {
            sound[SOUND_VAPOR].delay = 0.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_VAPOR].delay, 1.0f, 0.0f, 100000.0f, ap,
                                             apsize, "sound[SOUND_VAPOR].delay");
        }
        if (init)
        {
            sound[SOUND_VAPOR].fade_time = 0.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_VAPOR].fade_time, 1.0f, 0.0f, 100000.0f,
                                             ap, apsize, "sound[SOUND_VAPOR].fade_time");
        }
        if (init)
        {
            sound[SOUND_HIGH_HUMM].volume = 1.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_HIGH_HUMM].volume, 1.0f, 0.0f, 1.0f, ap,
                                             apsize, "sound[SOUND_HIGH_HUMM].volume");
        }
        if (init)
        {
            sound[SOUND_HIGH_HUMM].range_inner = 0.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_HIGH_HUMM].range_inner, 1.0f, 0.0f,
                                             100000.0f, ap, apsize,
                                             "sound[SOUND_HIGH_HUMM].range_inner");
        }
        if (init)
        {
            sound[SOUND_HIGH_HUMM].range_outer = 10.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_HIGH_HUMM].range_outer, 1.0f, 0.0f,
                                             100000.0f, ap, apsize,
                                             "sound[SOUND_HIGH_HUMM].range_outer");
        }
        if (init)
        {
            sound[SOUND_HIGH_HUMM].delay = 0.1f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_HIGH_HUMM].delay, 1.0f, 0.0f, 100000.0f,
                                             ap, apsize, "sound[SOUND_HIGH_HUMM].delay");
        }
        if (init)
        {
            sound[SOUND_HIGH_HUMM].fade_time = 0.5f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_HIGH_HUMM].fade_time, 1.0f, 0.0f,
                                             100000.0f, ap, apsize,
                                             "sound[SOUND_HIGH_HUMM].fade_time");
        }
        if (init)
        {
            sound[SOUND_BIZARRE].volume = 0.5f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_BIZARRE].volume, 1.0f, 0.0f, 1.0f, ap,
                                             apsize, "sound[SOUND_BIZARRE].volume");
        }
        if (init)
        {
            sound[SOUND_BIZARRE].range_inner = 1.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_BIZARRE].range_inner, 1.0f, 0.0f,
                                             100000.0f, ap, apsize,
                                             "sound[SOUND_BIZARRE].range_inner");
        }
        if (init)
        {
            sound[SOUND_BIZARRE].range_outer = 10.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_BIZARRE].range_outer, 1.0f, 0.0f,
                                             100000.0f, ap, apsize,
                                             "sound[SOUND_BIZARRE].range_outer");
        }
        if (init)
        {
            sound[SOUND_BIZARRE].delay = 40.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_BIZARRE].delay, 1.0f, 0.0f, 10.0f, ap,
                                             apsize, "sound[SOUND_BIZARRE].delay");
        }

        if (init)
        {
            sound[SOUND_MORE_BIZARRE].volume = 1.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_MORE_BIZARRE].volume, 1.0f, 0.0f, 1.0f, ap,
                                             apsize, "sound[SOUND_MORE_BIZARRE].volume");
        }
        if (init)
        {
            sound[SOUND_MORE_BIZARRE].range_inner = 10.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_MORE_BIZARRE].range_inner, 1.0f, 0.0f,
                                             100000.0f, ap, apsize,
                                             "sound[SOUND_MORE_BIZARRE].range_inner");
        }
        if (init)
        {
            sound[SOUND_MORE_BIZARRE].range_outer = 40.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_MORE_BIZARRE].range_outer, 1.0f, 0.0f,
                                             100000.0f, ap, apsize,
                                             "sound[SOUND_MORE_BIZARRE].range_outer");
        }
        if (init)
        {
            sound[SOUND_MORE_BIZARRE].delay = 0.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_MORE_BIZARRE].delay, 1.0f, 0.0f, 10.0f, ap,
                                             apsize, "sound[SOUND_MORE_BIZARRE].delay");
        }
    }

} // namespace

//13 new states
//8 new transitions
xAnimTable* ZNPC_AnimTable_Dutchman()
{
    // clang-format off
    S32 ourAnims[13] = {
        ANIM_Idle01,
        ANIM_Fidget01, 
        ANIM_Fidget02, 
        ANIM_Fidget03, 
        ANIM_Taunt01, 
        ANIM_Death01, 
        ANIM_AttackWindup01, 
        ANIM_AttackLoop01,
        ANIM_AttackEnd01, 
        ANIM_Attack02Windup01, 
        ANIM_Attack02Loop01, 
        ANIM_Attack02End01,
        ANIM_LassoGrab01,
        
    };
    // clang-format on
    xAnimTable* table = xAnimTableNew("zNPCDutchman", NULL, 0);

    xAnimTableNewState(table, g_strz_subbanim[ANIM_Idle01], 0x10, 0, f1606, NULL, NULL, f1605, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_subbanim[ANIM_Death01], 0, 0, f1606, NULL, NULL, f1605, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_subbanim[ANIM_Fidget01], 0x20, 0, f1606, NULL, NULL, f1605,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_subbanim[ANIM_Fidget02], 0x20, 0, f1606, NULL, NULL, f1605,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_subbanim[ANIM_Fidget03], 0x20, 0, f1606, NULL, NULL, f1605,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_subbanim[ANIM_Taunt01], 0x20, 0, f1606, NULL, NULL, f1605,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_subbanim[ANIM_AttackWindup01], 0x20, 0, f1606, NULL, NULL,
                       f1605, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_subbanim[ANIM_AttackLoop01], 0x10, 0, f1606, NULL, NULL, f1605,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_subbanim[ANIM_AttackEnd01], 0x20, 0, f1606, NULL, NULL, f1605,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_subbanim[ANIM_Attack02Windup01], 0x20, 0, f1606, NULL, NULL,
                       f1605, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_subbanim[ANIM_Attack02Loop01], 0x10, 0, f1606, NULL, NULL,
                       f1605, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_subbanim[ANIM_Attack02End01], 0x20, 0, f1606, NULL, NULL,
                       f1605, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_subbanim[ANIM_LassoGrab01], 0x20, 0x2000000, f1606, NULL, NULL,
                       f1605, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);

    NPCC_BuildStandardAnimTran(table, g_strz_subbanim, ourAnims, 1, f1689);

    xAnimTableNewTransition(table, g_strz_subbanim[ANIM_AttackWindup01],
                            g_strz_subbanim[ANIM_AttackLoop01], 0, 0, 0x10, 0, 0, 0, 0, 0, f1690,
                            0);
    xAnimTableNewTransition(table, g_strz_subbanim[ANIM_AttackLoop01],
                            g_strz_subbanim[ANIM_AttackEnd01], 0, 0, 0, 0, 0, 0, 0, 0, f1690, 0);
    xAnimTableNewTransition(table, g_strz_subbanim[ANIM_Attack02Windup01],
                            g_strz_subbanim[ANIM_Attack02Loop01], 0, 0, 0x10, 0, 0, 0, 0, 0, f1690,
                            0);
    xAnimTableNewTransition(table, g_strz_subbanim[ANIM_Attack02Loop01],
                            g_strz_subbanim[ANIM_Attack02End01], 0, 0, 0, 0, 0, 0, 0, 0, f1690, 0);
    xAnimTableNewTransition(table, g_strz_subbanim[ANIM_Fidget02], g_strz_subbanim[ANIM_Idle01], 0,
                            0, 0x10, 0, 0, 0, 0, 0, f1690, 0);
    xAnimTableNewTransition(table, g_strz_subbanim[ANIM_Fidget02],
                            g_strz_subbanim[ANIM_AttackWindup01], 0, 0, 0, 0, 0, 0, 0, 0, f1690, 0);
    xAnimTableNewTransition(table, g_strz_subbanim[ANIM_Fidget02], g_strz_subbanim[ANIM_Fidget01],
                            0, 0, 0, 0, 0, 0, 0, 0, f1690, 0);
    xAnimTableNewTransition(table, g_strz_subbanim[ANIM_LassoGrab01], g_strz_subbanim[ANIM_Death01],
                            0, 0, 0, 0, 0, 0, 0, 0, f1690, 0);

    return table;
}

void zNPCDutchman::Init(xEntAsset* asset)
{
    // Function is at 60%
    // Laser_texture and m both need to be used?

    char* scorch_name[2];
    S32 i;
    RwTexture* laser_texture;
    S32 model_index;
    xModelInstance* m = model;
    xFXRibbon* ribbon;

    dutchman_count = dutchman_count + 1;
    boss_cam.init();
    zNPCCommon::Init(asset);
    flg_move = 1;
    ribbon = eye_scorch;
    flg_vuln = 1;

    for (i = 0; i < 2; i++)
    {
        ribbon->init((S32)eye_scorch, (const char*)0x1ff);
        ribbon->set_default_config();
        ribbon->set_curve(ribbon->curve, 0x7);
        ribbon->set_texture("fx_streak1");
        ribbon->cfg.life_time = 5.0;
        ribbon->refresh_config();
    }

    laser_raster = (RwRaster*)xSTFindAsset((U32)xStrHash("laser_beam_white_blue"), 0x0);

    waves.init(0xf);
    slime.slices.init(0x3f);
}

void zNPCDutchman::Setup()
{
    zNPCSubBoss::Setup();
}

void zNPCDutchman::Reset()
{
    // Best I can get it
    // xFXRibbon::clear doenst make much sense
    zNPCCommon::Reset();
    memset((void*)flag.face_player, 0, 16);
    decompose();
    life = 3;
    round = 0;
    stage = -1;
    alpha = 1.0f;
    update_round();
    face_player();
    flg_vuln = 1;
    reset_speed();
    move.vel = 0.0f;
    move.dest = get_center();
    flag.move = MOVE_FOLLOW;
    flames.imax_dist = 1.0f / tweak.ground_radius;
    reset_blob_mat();
    waves.clear();
    slime.slices.clear();
    //eye_scorch->joints.clear();
    //eye_scorch->joints.clear();
    fade.sound_handle = 0;
    vanish();
    refresh_reticle();
    flag.fighting = 0;
    plasma_emitter = zParEmitterFind("PAREMIT_DUTCHMAN_PLASMA");
    plasma_emitter_settings.custom_flags = 0x100;
    plasma_emitter_settings.pos = g_O3;
    spark_emitter = zParEmitterFind("PAREMIT_DUTCHMAN_SPARKS");
    spark_emitter_settings.custom_flags = 0x100;
    spark_emitter_settings.pos = g_O3;
    light_emitter = zParEmitterFind("PAREMIT_DUTCHMAN_LIGHT");
    light_emitter_settings.custom_flags = 0x110;
    light_emitter_settings.pos = g_O3;
    light_emitter->prop->life.set((119.99999f * tweak.beam.light_rate));
    eyeglow_emitter[0] = zParEmitterFind("PAREMIT_DUTCHMAN_EYEGLOW0");
    eyeglow_emitter[1] = zParEmitterFind("PAREMIT_DUTCHMAN_EYEGLOW1");
    death_emitter = zParEmitterFind("PAREMIT_DUTCHMAN_DEATH");
    dissolve_emitter = zParEmitterFind("PAREMIT_DUTCHMAN_DISSOLVE");
    fadeout_emitter = zParEmitterFind("PAREMIT_DUTCHMAN_FADEOUT");
    fadein_emitter = zParEmitterFind("PAREMIT_DUTCHMAN_FADEIN");
    flame_emitter[0] = zParEmitterFind("PAREMIT_DUTCHMAN_FLAME_LIGHT");
    flame_emitter[1] = zParEmitterFind("PAREMIT_DUTCHMAN_FLAME_NORMAL");
    flame_emitter[2] = zParEmitterFind("PAREMIT_DUTCHMAN_FLAME_SPRAY");
    flame_emitter_settings.custom_flags = 0x110;
    flame_emitter_settings.pos = g_O3;
    light_emitter->prop->life.set((59.999996f));
    snot_emitter = zParEmitterFind("PAREMIT_DUTCHMAN_FLAME_SNOT");
    snot_emitter_settings.custom_flags = 0x300;
    slime_emitter = zParEmitterFind("PAREMIT_DUTCHMAN_SLIME_TRAIL");
    slime_emitter_settings.custom_flags = 0x100;
    hand_trail_emitter = zParEmitterFind("PAREMIT_DUTCHMAN_HAND_TRAIL");
    blob_emitter = zParEmitterFind("PAREMIT_DUTCHMAN_BLOB");
    psy_instinct->GoalSet('NGM=', 1);
}

void zNPCDutchman::Destroy()
{
    zNPCCommon::Destroy();
    dutchman_count--;
}

void zNPCDutchman::Process(xScene* xscn, F32 dt)
{
    xVec3 player_loc;

    if (flag.fighting == 0)
    {
        zNPCCommon::Process(xscn, dt);
    }
    else
    {
        delay = delay + dt;
        psy_instinct->Timestep(dt, NULL);
        if (flag.fighting == 0)
        {
            zNPCCommon::Process(xscn, dt);
        }
        else
        {
            if (flag.face_player != 0)
            {
                player_loc = globals.player.ent.model->Scale;
                get_center();
            }
            update_turn(dt);
            update_move(dt);
            update_animation(dt);
            update_flames(dt);
            update_eye_glow(dt);
            update_hand_trail(dt);
            update_fade(dt);
            update_slime(dt);

            if ((check_player_damage() & 0xff) != 0)
            {
                zEntPlayer_Damage((xBase*)this, 1);
            }
            update_camera(dt);
            refresh_reticle();
            flg_xtrarend = flg_xtrarend | 1;
            zNPCCommon::Process(xscn, dt);
        }
    }
}

S32 zNPCDutchman::SysEvent(xBase* from, xBase* to, U32 toEvent, const F32* toParam,
                           xBase* toParamWidget, S32* handled)
{
    // Was going to try this function, but literally can't find 0x1d9
    if (toEvent == 0x1d9)
    {
        psy_instinct->GoalSet('NGM=', 1);
    }
    else
    {
        if ((0x1d8 < toEvent) || (toEvent != 0x1b5))
        {
            handled = 0;
            return zNPCCommon::SysEvent(from, to, toEvent, toParam, toParamWidget, handled);
        }
        start_fight();
    }
    return 1;
}

void zNPCDutchman::Render()
{
    zNPCDutchman::render_debug();
}

void zNPCDutchman::RenderExtra()
{
    S32 oldzwrite;
    S32 oldztest;
    U32 oldsrcblend;
    U32 olddestblend;
    U8 oldcmp;
    xModelInstance* m;
    U8 haloing;

    RwRenderStateGet(rwRENDERSTATEFOGENABLE, (void*)&oldcmp);
    RwRenderStateGet(rwRENDERSTATESRCBLEND, (void*)&oldcmp);
    RwRenderStateGet(rwRENDERSTATEDESTBLEND, (void*)&oldcmp);
    RwRenderStateGet(rwRENDERSTATEVERTEXALPHAENABLE, (void*)&oldcmp);
    RwRenderStateSet(rwRENDERSTATEFOGENABLE, (void*)&oldcmp);
    RwRenderStateSet(rwRENDERSTATESRCBLEND, (void*)&oldcmp);
    RwRenderStateSet(rwRENDERSTATEDESTBLEND, (void*)&oldcmp);
    RwRenderStateSet(rwRENDERSTATEVERTEXALPHAENABLE, (void*)&oldcmp);
    iDrawSetFBMSK(-1);

    for (m = model; m != 0; m = m)
    {
        xModelRenderSingle(m);
    }

    iDrawSetFBMSK(0);

    for (m = model; m != 0; m = m)
    {
        xModelRenderSingle(m);
    }

    oldcmp = FALSE;

    if (flag.beaming != 0)
    {
        if (beam->segments != 0)
        {
            oldcmp = TRUE;
        }
        render_beam();
        // if (*(int*)(this + 0x430) + *(int*)(this + 0x54c) != 0)
        // {
        //     bVar1 = true;
        // }
    }
    // 0x2c0
    oldzwrite = flag.fade;
    if (oldcmp)
    {
        render_beam();
    }
    if ((2U - oldzwrite | oldzwrite - 2U) < 0)
    {
        render_halo();
    }
    RwRenderStateSet(rwRENDERSTATEFOGENABLE, (void*)&oldcmp);
    RwRenderStateSet(rwRENDERSTATESRCBLEND, (void*)&oldcmp);
    RwRenderStateSet(rwRENDERSTATESRCBLEND, (void*)&oldcmp);
    RwRenderStateSet(rwRENDERSTATEDESTBLEND, (void*)&oldcmp);
}

void zNPCDutchman::ParseINI()
{
    zNPCCommon::ParseINI();
    cfg_npc->snd_traxShare = &g_sndTrax_Dutchman;
    NPCS_SndTablePrepare(&g_sndTrax_Dutchman);
    cfg_npc->snd_trax = &g_sndTrax_Dutchman;
    NPCS_SndTablePrepare(&g_sndTrax_Dutchman);
    tweak.load(parmdata, pdatsize);
}

void zNPCDutchman::SelfSetup()
{
    xBehaveMgr* bmgr = xBehaveMgr_GetSelf();
    this->psy_instinct = bmgr->Subscribe(this, 0);
    xPsyche* psy = this->psy_instinct;
    psy->BrainBegin();
    S32 i;
    for (i = NPC_GOAL_DUTCHMANNIL; i <= NPC_GOAL_DUTCHMANDEATH; i++)
    {
        psy->AddGoal(i, this);
    }
    psy->BrainEnd();
    psy->SetSafety(NPC_GOAL_DUTCHMANIDLE);
}

void zNPCDutchman::Damage(en_NPC_DAMAGE_TYPE, xBase*, const xVec3*)
{
    xPsyche* psy = this->psy_instinct;
    psy->GIDOfActive();
}

U32 zNPCDutchman::AnimPick(S32 rawgoal, en_NPC_GOAL_SPOT gspot, xGoal* goal)
{
    S32 index = -1;
    U32 animId = 0;

    switch (rawgoal)
    {
    case NPC_GOAL_DUTCHMANNIL:
    case NPC_GOAL_DUTCHMANDAMAGE:
    case NPC_GOAL_DUTCHMANDEATH:
        index = -1;
        break;
    case NPC_GOAL_DUTCHMANINITIATE:
    case NPC_GOAL_DUTCHMANIDLE:
    case NPC_GOAL_DUTCHMANDISAPPEAR:
    case NPC_GOAL_DUTCHMANTELEPORT:
        index = 1;
        break;
    case NPC_GOAL_DUTCHMANREAPPEAR:
        index = 5;
        break;
    case NPC_GOAL_DUTCHMANBEAM:
        index = 0xC;
        break;
    case NPC_GOAL_DUTCHMANFLAME:
        index = 0x10;
        break;
    case NPC_GOAL_DUTCHMANPOSTFLAME:
        if (flag.hurting != false)
        {
            index = 4;
        }
        else
        {
            index = 6;
        }
        break;
    case NPC_GOAL_DUTCHMANCAUGHT:
        index = 0x13;
        break;

    default:
        index = 1;
        break;
    }

    if (index > -1)
    {
        animId = g_hash_subbanim[index];
    }

    return animId;
}

void zNPCDutchman::LassoNotify(en_LASSO_EVENT event)
{
    if ((event != 3) && (event < 3) && (event < 2))
    {
        psy_instinct->GoalSet('NGMF', 1);
    }

    zNPCCommon::LassoNotify(event);
}

// double zNPCDutchman::goal_delay()
// {
//     move_info* tempR4;
//     tempR4 = &this->move;
//     move = *tempR4;
// }

S32 zNPCDutchman::LassoSetup()
{
    zNPCCommon::LassoUseGuides(1, 1);
    return zNPCCommon::LassoSetup();
}

void zNPCDutchman::update_round()
{
    S32 roundCntr = round;
    if (life == 0)
    {
        round = 3;
    }
    else
    {
        round = 2 - ((life + -1) * 3) / 3;
    }
    if (round == roundCntr)
    {
        return;
    }

    stage = -1;
}

S32 zNPCDutchman::next_goal()
{
    return 0;
}

F32 zNPCDutchman::goal_delay()
{
    return 0;
}

void zNPCDutchman::decompose()
{
    if (flag.fighting != 0)
    {
        flag.fighting = 0;
        disable_emitter(*dissolve_emitter);
        disable_emitter(*fadein_emitter);
        disable_emitter(*fadeout_emitter);
        zCameraEnableTracking(CO_BOSS);
        boss_cam.stop();
    }
}

void zNPCDutchman::render_debug()
{
}

void zNPCDutchman::update_animation(F32)
{
}

void zNPCDutchman::update_camera(F32 dt)
{
    zCameraDisableTracking(CO_BOSS);
    if ((zCameraIsTrackingDisabled() & -9) == 0)
    {
        boss_cam.update(dt);
    }
}

void zNPCDutchman::kill_wave(zNPCDutchman::wave_data& wave)
{
    kill_sound(1, wave.sound_handle);
}

void zNPCDutchman::start_eye_glow()
{
    flag.eye_glow = true;
    eye_glow.size = 1;
}

void zNPCDutchman::stop_eye_glow()
{
    flag.eye_glow = false;
}

void zNPCDutchman::start_hand_trail()
{
    flag.hand_trail = true;
    for (S32 i = 0; i < 2; i++)
    {
        get_hand_loc(i);
        hand_trail.loc[i] = hand_trail.loc[i];
    }

    // hand_trail.loc[0] // 0x5cc
}

void zNPCDutchman::stop_hand_trail()
{
    flag.hand_trail = false;
}

void zNPCDutchman::dissolve(F32 delay)
{
    F32 volume;
    if (delay <= 0.0f)
    {
        flag.fade = FADE_TELEPORT;
        disable_emitter(*fadeout_emitter);
        set_alpha(0.0f);
        vanish();
        volume = 1.0f;
    }
    else
    {
        flag.fade = FADE_DISSOLVE;
        fade.time = 0.0f;
        fade.duration = delay;
        fade.iduration = 1.0f / fade.duration;
        enable_emitter(*fadeout_emitter);
        set_alpha(1.0f);
        reappear();
        volume = 0.0f;
    }
    enable_emitter(*dissolve_emitter);
    start_eye_glow();
    start_hand_trail();

    if (fade.sound_handle == 0)
    {
        fade.sound_handle = play_sound(2, (const xVec3*)&bound.pad[3], volume);
    }
    else
    {
        set_volume(2, 0, 0.0f);
    }
}

void zNPCDutchman::coalesce(F32 delay)
{
    reappear();
    if (delay <= 0.0f)
    {
        flag.fade = FADE_NONE;
        disable_emitter(*fadein_emitter);
        disable_emitter(*dissolve_emitter);
        set_alpha(1.0f);
        stop_eye_glow();
        stop_hand_trail();
        if (fade.sound_handle != 0)
        {
            kill_sound(2, fade.sound_handle);
            fade.sound_handle = 0;
        }
    }
    else
    {
        flag.fade = FADE_COALESCE;
        fade.time = 0.0f;
        fade.duration = delay;
        fade.iduration = 1.0f / fade.duration;
        enable_emitter(*fadein_emitter);
        enable_emitter(*dissolve_emitter);
        set_alpha(0.0f);
        start_eye_glow();
        start_hand_trail();
        if (fade.sound_handle != 0)
        {
            set_volume(2, fade.sound_handle, 1.0f);
        }
    }
}

void zNPCDutchman::reset_blob_mat()
{
    // Decomp.me says 90%
    F32 temp;
    F32 temp2;

    temp = isin(tweak.flame.blob_pitch);
    temp2 = icos(tweak.flame.blob_pitch);
    flames.blob_mat.right.assign(1.0f, 0.0f, 0.0f);
    flames.blob_mat.up.assign(0.0f, temp2, temp);
    flames.blob_mat.at.assign(0.0f, -temp, temp2);
}

void zNPCDutchman::reset_lasso_anim()
{
    xAnimPlaySetState(0, lassdata->holdGuideAnim, 0);
}

void zNPCDutchman::update_fade(F32 delay)
{
    F32 frac;
    if (flag.fade != FADE_TELEPORT)
    {
        if (flag.fade < 1)
        {
            if (flag.fade < 4)
            {
                fade.time = fade.time + delay;
                if (fade.time >= fade.duration)
                {
                    flag.fade = FADE_TELEPORT;
                    disable_emitter(*fadeout_emitter);
                    set_alpha(0.0f);
                    vanish();
                    set_volume(2, fade.sound_handle, 1.0f);
                }
                else
                {
                    frac = fade.time * fade.iduration;
                    set_alpha(1.0f - frac);
                    set_volume(2, fade.sound_handle, frac);
                }
            }
        }
        else if (flag.fade < 4)
        {
            fade.time = fade.time + delay;
            if (fade.time >= fade.duration)
            {
                flag.fade = FADE_NONE;
                disable_emitter(*fadein_emitter);
                disable_emitter(*dissolve_emitter);
                set_alpha(1.0f);
                stop_eye_glow();
                stop_hand_trail();
                reappear();
                kill_sound(2, fade.sound_handle);
                fade.sound_handle = 0;
            }
            else
            {
                frac = fade.time * fade.iduration;
                set_alpha(frac);
                set_volume(2, fade.sound_handle, 1.0f - frac);
            }
        }
    }
}

void zNPCDutchman::add_splash(const xVec3&, float)
{
}

void zNPCDutchman::start_fight()
{
    if (flag.fighting == 0 && life <= 0)
    {
        flag.fighting = 1;
        psy_instinct->GoalSet(0, 0);
        zCameraDisableTracking(CO_BOSS);
        boss_cam.start(globals.camera);
        boss_cam.set_targets((xVec3&)globals.player.ent.model->Mat->pos, (xVec3&)model->Mat->pos,
                             2.0f);
    }
}

void zNPCDutchman::set_life(S32 lf)
{
    life = range_limit<S32>(life, 0, 3);
    if (life < lf)
    {
        flag.hurting = 1;
        for (S32 i = life; i < life; i++)
        {
            zEntEvent((xBase*)lf, (xBase*)lf, 0x1d7); // Haven't found 0x1d7. only 0x1d8 and 0x1d4
        }
    }
}

void zNPCDutchman::start_beam()
{
    if ((flag.beaming) != 0)
    {
        return;
    }
    flag.beaming = 1;
    flag.was_beaming = 0;
    beam[1].segments = 0; //0x54C
    beam[0].segments = 0; //0x430

    //Could also write as:

    //for (S32 i = 1; i >= 0; --i)
    // {
    //    beam[i].segments = 0;
    // }
}

void zNPCDutchman::stop_beam()
{
    flag.beaming = false;
}

void zNPCDutchman::start_flames()
{
    //static_queue<zNPCDutchman::slime_slice>::clear();
    flag.flaming = true;
    flames.time = 0.0;
    flames.emitted = 0;
    flames.blob_break = 1;
    flames.splash_break = 1;
    slime.slices.clear();
}

void zNPCDutchman::stop_flames()
{
    flag.flaming = false;
}

void zNPCDutchman::get_eye_loc(S32 idx) const
{
    // Not sure if this is correct.
    static size_t lookup;
    xModelGetBoneLocation(*model, lookup << 2 + idx);
}

void zNPCDutchman::get_hand_loc(S32) const
{
}

void zNPCDutchman::get_splash_loc() const
{
}

void zNPCDutchman::vanish()
{
    old.moreFlags = moreFlags;
    pflags = 0;
    moreFlags = 0;
    flags2.flg_colCheck = 0;
    flags2.flg_penCheck = 0;
    chkby = 0;
    penby = 0;
    xEntHide(this);
}

void zNPCDutchman::reappear()
{
    moreFlags = old.moreFlags;
    xNPCBasic::RestoreColFlags();
    xEntShow(this);
}

void zNPCDutchman::reset_speed()
{
}

void zNPCDutchman::render_beam()
{
}

xFactoryInst* zNPCGoalDutchmanInitiate::create(S32 who, RyzMemGrow* grow, void* info)
{
    return new (who, grow) zNPCGoalDutchmanInitiate(who, (zNPCDutchman&)*info);
}

S32 zNPCGoalDutchmanInitiate::Enter(F32 dt, void* updCtxt)
{
    owner.get_orbit();
    owner.face_player();
    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalDutchmanInitiate::Exit(F32 dt, void* updCtxt)
{
    owner.turn.accel = tweak.turn_accel;
    return xGoal::Exit(dt, updCtxt);
}

xFactoryInst* zNPCGoalDutchmanIdle::create(S32 who, RyzMemGrow* grow, void* info)
{
    return new (who, grow) zNPCGoalDutchmanIdle(who, (zNPCDutchman&)*info);
}

S32 zNPCGoalDutchmanIdle::Enter(F32 dt, void* updCtxt)
{
    owner.face_player();
    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalDutchmanIdle::Exit(F32 dt, void* updCtxt)
{
    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalDutchmanIdle::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn)
{
    F32 tmpFlt = owner.goal_delay();
    if (owner.delay >= tmpFlt)
    {
        owner.delay = 0;

        owner.next_goal();
    }
    else
    {
        xGoal::Process(trantype, dt, updCtxt, xscn);
    }
    return 0;

    //return xGoal::Process(trantype, dt, updCtxt, xscn);
}

xFactoryInst* zNPCGoalDutchmanDisappear::create(S32 who, RyzMemGrow* grow, void* info)
{
    return new (who, grow) zNPCGoalDutchmanDisappear(who, (zNPCDutchman&)*info);
}

S32 zNPCGoalDutchmanDisappear::Exit(F32 dt, void* updCtxt)
{
    return xGoal::Exit(dt, updCtxt);
}

xFactoryInst* zNPCGoalDutchmanDamage::create(S32 who, RyzMemGrow* grow, void* info)
{
    return new (who, grow) zNPCGoalDutchmanDamage(who, (zNPCDutchman&)*info);
}

S32 zNPCGoalDutchmanDamage::Exit(F32 dt, void* updCtxt)
{
    return xGoal::Exit(dt, updCtxt);
}

xFactoryInst* zNPCGoalDutchmanTeleport::create(S32 who, RyzMemGrow* grow, void* info)
{
    return new (who, grow) zNPCGoalDutchmanTeleport(who, (zNPCDutchman&)*info);
}

S32 zNPCGoalDutchmanTeleport::Exit(F32 dt, void* updCtxt)
{
    return xGoal::Exit(dt, updCtxt);
}

xFactoryInst* zNPCGoalDutchmanReappear::create(S32 who, RyzMemGrow* grow, void* info)
{
    return new (who, grow) zNPCGoalDutchmanReappear(who, (zNPCDutchman&)*info);
}

S32 zNPCGoalDutchmanReappear::Exit(F32 dt, void* updCtxt)
{
    owner.reset_speed();
    return xGoal::Exit(dt, updCtxt);
}

xFactoryInst* zNPCGoalDutchmanBeam::create(S32 who, RyzMemGrow* grow, void* info)
{
    return new (who, grow) zNPCGoalDutchmanBeam(who, (zNPCDutchman&)*info);
}

S32 zNPCGoalDutchmanBeam::Exit(F32 dt, void* updCtxt)
{
    return xGoal::Exit(dt, updCtxt);
}

void zNPCGoalDutchmanBeam::update_stop(F32 dt)
{
}

xFactoryInst* zNPCGoalDutchmanFlame::create(S32 who, RyzMemGrow* grow, void* info)
{
    return new (who, grow) zNPCGoalDutchmanFlame(who, (zNPCDutchman&)*info);
}

S32 zNPCGoalDutchmanFlame::Enter(F32 dt, void* updCtxt)
{
    owner.reset_lasso_anim();
    owner.get_orbit();
    owner.turn_to_face(owner.flames.splash_loc); //dont know the correct xVec3&
    owner.delay = 0;
    owner.collis = 0;
    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalDutchmanFlame::Exit(F32 dt, void* updCtxt)
{
    S32 tempR0;
    tempR0 = this->owner.flg_vuln;
    tempR0 = tempR0 &= 0xFEFFFFFF;
    this->owner.flg_vuln = tempR0;

    owner.stop_flames();
    owner.stop_hand_trail();
    return xGoal::Exit(dt, updCtxt);
}

xFactoryInst* zNPCGoalDutchmanPostFlame::create(S32 who, RyzMemGrow* grow, void* info)
{
    return new (who, grow) zNPCGoalDutchmanPostFlame(who, (zNPCDutchman&)*info);
}

S32 zNPCGoalDutchmanPostFlame::Exit(F32 dt, void* updCtxt)
{
    owner.flag.hurting = 0;
    return xGoal::Exit(dt, updCtxt);
}

xFactoryInst* zNPCGoalDutchmanCaught::create(S32 who, RyzMemGrow* grow, void* info)
{
    return new (who, grow) zNPCGoalDutchmanCaught(who, (zNPCDutchman&)*info);
}

S32 zNPCGoalDutchmanCaught::Enter(float dt, void* updCtxt)
{
    // TODO
    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalDutchmanCaught::Exit(F32 dt, void* updCtxt)
{
    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalDutchmanDeath::Enter(F32 dt, void* updCtxt)
{
    owner.delay = 0.0f;
    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalDutchmanDeath::Exit(F32 dt, void* updCtxt)
{
    owner.move.dest.assign(dt, 1.0f, 0.0f);
    return xGoal::Exit(dt, updCtxt);
}

xFactoryInst* zNPCGoalDutchmanDeath::create(S32 who, RyzMemGrow* grow, void* info)
{
    return new (who, grow) zNPCGoalDutchmanDeath(who, (zNPCDutchman&)*info);
}

S32 zNPCGoalDutchmanDeath::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn)
{
    if (owner.delay >= 2.0f)
    {
        owner.decompose();
        owner.vanish();
    }
    return xGoal::Process(trantype, dt, updCtxt, xscn);
}

U8 zNPCDutchman::PhysicsFlags() const
{
    return 3;
}

U8 zNPCDutchman::ColPenByFlags() const
{
    return 16;
}

U8 zNPCDutchman::ColChkByFlags() const
{
    return 16;
}

U8 zNPCDutchman::ColPenFlags() const
{
    return 0;
}

U8 zNPCDutchman::ColChkFlags() const
{
    return 0;
}

WEAK void zNPCDutchman::face_player()
{
    flag.face_player = true;
}
