#include "zNPCTypeKingJelly.h"

#include "xColor.h"
#include "zNPCGoalCommon.h"
#include <types.h>
#include "string.h"

#define f1868 1.0f
#define f1869 0.0f
#define f2105 0.2f
#define f2106 0.1f

#define ANIM_Unknown 0 // 0x0
#define ANIM_Idle01 1 // 0x04
#define ANIM_Idle02 2 // 0x08
#define ANIM_Idle03 3 // 0xC
#define ANIM_Fidget01 4 //
#define ANIM_Fidget02 5
#define ANIM_Fidget03 6
#define ANIM_Taunt01 7 // 0x1c
#define ANIM_Attack01 8 //0x20
#define ANIM_Damage01 9 //0x24
#define ANIM_Damage02 10 //0x28
#define ANIM_Death01 11 //0x2c
#define ANIM_AttackWindup01 12 //0x30
#define ANIM_AttackLoop01 13 //0x34
#define ANIM_AttackEnd01 14 //0x38
#define ANIM_SpawnKids01 15 //0x3C
#define ANIM_Attack02Windup01 16
#define ANIM_Attack02Loop01 17
#define ANIM_Attack02End01 18
#define ANIM_LassoGrab01 19

#define SOUND_AMBIENT_RING 0
#define SOUND_BIRTH 1
#define SOUND_CHARGE 2
#define SOUND_CHEER 3
#define SOUND_GRUNT 4
#define SOUND_LAND 5
#define SOUND_MOVE 6
#define SOUND_OSCILLATE 7
#define SOUND_RISE 8
#define SOUND_TAUNT 9
#define SOUND_WAVE_RING 10

namespace
{
    S32 boss_cam()
    {
        return 0; //todo
    }

    S32 play_sound(int, const xVec3*)
    {
        return 0; //todo
    }

    S32 kill_sound(int)
    {
        return 0; //to do
    }

    void kill_sounds()
    {
        for (S32 i = 0; i < 11; i++)
        {
            kill_sound(i);
        }
    }

    void reset_model_color(xModelInstance* submodel) //25% matching. will need rewritten
    {
        while (submodel != NULL)
        {
            submodel = submodel->Next;
        }
    }

    void tweak()
    {
    }

    struct tweak_group
    {
        void* context;
        tweak_callback* cb_fade_obstructions;
        tweak_callback* cb_ambient_ring;
        S32 max_life;
        F32 min_dist;
        F32 move_radius;
        F32 vel_decay;
        F32 repel_radius;
        F32 repel_radius_ground;
        F32 fade_obstructions;
        F32 music_fade;
        F32 music_fade_delay;
        struct
        {
            F32 duration;
            S32 amount;
            F32 drop_off;
            struct
            {
                F32 r;
                F32 g;
                F32 b;
                F32 a;
            } color;
        } blink;
        struct
        {
            F32 variance;
            F32 attack[3];
            F32 warm_up;
            F32 release;
            F32 cool_down;
        } interval;
        struct
        {
            S32 cycles;
            F32 voffset;
            F32 hoffset;
            F32 delay;
            F32 fall_time;
            struct
            {
                F32 speed;
                F32 drop_off;
                F32 delay;
                F32 voffset;
            } spew;
        } spawn;
        wave_ring_type wave_ring;
        struct
        {
            F32 radius;
            F32 min_height;
            F32 max_height;
            F32 speed;
            F32 segment_length;
            F32 thickness;
            iColor_tag color;
            F32 knock_back;
            struct
            {
                F32 radius;
                F32 max_height;
                F32 speed;
                F32 thickness;
                iColor_tag color;
            } charge;
        } ambient_ring;
        struct
        {
            F32 thickness;
            F32 rand_radius;
            F32 rot_radius;
            F32 move_degrees;
            iColor_tag color;
            F32 delay;
            F32 time;
            S32 max;
            F32 particles;
            F32 knock_back;
            F32 damage_width;
            struct
            {
                F32 thickness;
                iColor_tag color;
                F32 move_degrees;
            } charge;
        } tentacle;
        struct
        {
            F32 delay;
            S32 rings;
            F32 voffset;
            F32 particles;
            F32 radius;
            F32 width;
            F32 vel;
            F32 particle_drop_off;
            F32 vel_drop_off;
        } thump;
        struct
        {
            F32 volume;
            F32 delay;
            F32 radius_inner;
            F32 radius_outer;
            S32 priority;
        } sound[11];

        void load(xModelAssetParam* ap, U32 apsize);
        void register_tweaks(bool init, xModelAssetParam* ap, U32 apsize, const char*);
    };

    void tweak_group::load(xModelAssetParam* ap, U32 apsize)
    {
        tweak_group::register_tweaks(TRUE, ap, apsize, NULL);
    }

    void tweak_group::register_tweaks(bool init, xModelAssetParam* ap, U32 apsize, const char*)
    {
        if (init)
        {
            max_life = 3;
            auto_tweak::load_param<S32, S32>(max_life, 1, 1, 10000000, ap, apsize, "max_life");
        }
        if (init)
        {
            min_dist = 4.0f;
            auto_tweak::load_param<F32, F32>(min_dist, 1.0f, 0.0f, 10.0f, ap, apsize, "min_dist");
        }
        if (init)
        {
            move_radius = 13.0f;
            auto_tweak::load_param<F32, F32>(move_radius, 1.0, 0.0f, 20.f, ap, apsize,
                                             "move_radius");
        }
        if (init)
        {
            vel_decay = 0.8f;
            auto_tweak::load_param<F32, F32>(vel_decay, 1.0f, 0.0f, 1.0f, ap, apsize, "vel_decay");
        }
        if (init)
        {
            repel_radius = 1.8f;
            auto_tweak::load_param<F32, F32>(repel_radius, 1.0f, 0.0f, 1000.0f, ap, apsize,
                                             "repel_radius");
        }
        if (init)
        {
            repel_radius_ground = 3.2f;
            auto_tweak::load_param<F32, F32>(repel_radius_ground, 1.0, 0.0f, 1000.f, ap, apsize,
                                             "repel_radius_ground");
        }
        if (init)
        {
            fade_obstructions = 0.4f;
            auto_tweak::load_param<F32, F32>(fade_obstructions, 1.0f, 0.0f, 1.0f, ap, apsize,
                                             "fade_obstructions");
        }
        if (init)
        {
            music_fade = 0.5f;
            auto_tweak::load_param<F32, F32>(music_fade, 1.0f, 0.0f, 1.0f, ap, apsize,
                                             "music_fade");
        }
        if (init)
        {
            music_fade_delay = 1.0f;
            auto_tweak::load_param<F32, F32>(music_fade_delay, 1.0f, 0.0f, 10.0f, ap, apsize,
                                             "music_fade_delay");
        }
        if (init)
        {
            blink.duration = 2.0f;
            auto_tweak::load_param<F32, F32>(blink.duration, 1.0f, 0.1, 100.f, ap, apsize,
                                             "blink.duration");
        }
        if (init)
        {
            blink.amount = 4;
            auto_tweak::load_param<S32, S32>(blink.amount, 1, 1, 100, ap, apsize, "blink.amount");
        }
        if (init)
        {
            blink.drop_off = 0.2f;
            auto_tweak::load_param<F32, F32>(blink.drop_off, 1.0f, 0.0f, 1.0f, ap, apsize,
                                             "blink.drop_off");
        }
        if (init)
        {
            blink.color.r = 2.0f;
            auto_tweak::load_param<F32, F32>(blink.color.r, 1.0f, 0.0f, 100000.0f, ap, apsize,
                                             "blink.color.r");
        }
        if (init)
        {
            blink.color.g = 0.0f;
            auto_tweak::load_param<F32, F32>(blink.color.g, 1.0f, 0.0f, 100000.0f, ap, apsize,
                                             "blink.color.g");
        }
        if (init)
        {
            blink.color.b = 0.0f;
            auto_tweak::load_param<F32, F32>(blink.color.b, 1.0f, 0.0f, 100000.0f, ap, apsize,
                                             "blink.color.b");
        }
        if (init)
        {
            blink.color.a = 0.0f;
            auto_tweak::load_param<F32, F32>(blink.color.a, 1.0f, 0.0f, 100000.0f, ap, apsize,
                                             "blink.color.a");
        }
        if (init)
        {
            interval.variance = 0.2;
            auto_tweak::load_param<F32, F32>(interval.variance, 1.0f, 0.0, 10.f, ap, apsize,
                                             "interval.variance");
        }
        if (init)
        {
            interval.attack[0] = 4.5f;
            auto_tweak::load_param<F32, F32>(interval.attack[0], 1.0f, 0.0f, 100.0f, ap, apsize,
                                             "interval.attack[0]");
        }
        if (init)
        {
            interval.attack[1] = 3.5f;
            auto_tweak::load_param<F32, F32>(interval.attack[1], 1.0f, 0.0f, 100.0f, ap, apsize,
                                             "interval.attack[1]");
        }
        if (init)
        {
            interval.attack[2] = 2.5f;
            auto_tweak::load_param<F32, F32>(interval.attack[2], 1.0f, 0.0f, 100.0f, ap, apsize,
                                             "interval.attack[2]");
        }
        if (init)
        {
            interval.warm_up = 1.0f;
            auto_tweak::load_param<F32, F32>(interval.warm_up, 1.0f, 0.0f, 1000000000.0, ap, apsize,
                                             "interval.warm_up");
            ;
        }
        if (init)
        {
            interval.release = 0.5f;
            auto_tweak::load_param<F32, F32>(interval.release, 1.0f, 0.0f, 100.0f, ap, apsize,
                                             "interval.release");
        }
        if (init)
        {
            interval.cool_down = 0.25;
            auto_tweak::load_param<F32, F32>(interval.cool_down, 1.0f, 0.0f, 100.0f, ap, apsize,
                                             "interval.cool_down");
        }
        if (init)
        {
            spawn.cycles = 3;
            auto_tweak::load_param<S32, S32>(spawn.cycles, 1, 0, 100000, ap, apsize,
                                             "spawn.cycles");
        }
        if (init)
        {
            spawn.voffset = 3.0f;
            auto_tweak::load_param<F32, F32>(spawn.voffset, 1.0f, -100.0f, 100.f, ap, apsize,
                                             "spawn.voffset");
        }
        if (init)
        {
            spawn.hoffset = 0.5f;
            auto_tweak::load_param<F32, F32>(spawn.hoffset, 1.0f, 0.0f, 10.0f, ap, apsize,
                                             "spawn.hoffset");
        }
        if (init)
        {
            spawn.delay = 0.75f;
            auto_tweak::load_param<F32, F32>(spawn.delay, 1.0f, 0.0f, 100.0f, ap, apsize,
                                             "spawn.delay");
        }
        if (init)
        {
            spawn.fall_time = 2.5f;
            auto_tweak::load_param<F32, F32>(spawn.fall_time, 1.0f, 0.0f, 10.0f, ap, apsize,
                                             "spawn.fall_time");
        }
        if (init)
        {
            spawn.spew.speed = 4000.0f;
            auto_tweak::load_param<F32, F32>(spawn.spew.speed, 1.0f, 0.0f, 1000000000.0f, ap,
                                             apsize, "spawn.spew.speed");
        }
        if (init)
        {
            spawn.spew.drop_off = -6000.0f;
            auto_tweak::load_param<F32, F32>(spawn.spew.drop_off, 1.0f, -1000000000.0f, 0.0f, ap,
                                             apsize, "spawn.spew.drop_off");
        }
        if (init)
        {
            spawn.spew.delay = 0.75f;
            auto_tweak::load_param<F32, F32>(spawn.spew.delay, 1.0f, 0.0f, 100.0f, ap, apsize,
                                             "spawn.spew.delay");
        }
        if (init)
        {
            spawn.spew.voffset = -2.0f;
            auto_tweak::load_param<F32, F32>(spawn.spew.voffset, 1.0f, -100.0f, 100.0f, ap, apsize,
                                             "spawn.spew.voffset");
        }
        if (init)
        {
            wave_ring.min_radius = 1.0f;
            auto_tweak::load_param<F32, F32>(wave_ring.min_radius, 1.0f, 0.0f, 10.0f, ap, apsize,
                                             "wave_ring.min_radius");
        }
        if (init)
        {
            wave_ring.max_radius = 25.0f;
            auto_tweak::load_param<F32, F32>(wave_ring.max_radius, 1.0f, 0.0f, 1000.0f, ap, apsize,
                                             "wave_ring.max_radius");
        }
        if (init)
        {
            wave_ring.height = 0.2f;
            auto_tweak::load_param<F32, F32>(wave_ring.height, 1.0f, -100.0f, 100.0f, ap, apsize,
                                             "wave_ring.height");
        }
        if (init)
        {
            wave_ring.fade_time = 2.0f;
            auto_tweak::load_param<F32, F32>(wave_ring.fade_time, 1.0f, 0.0f, 10.0f, ap, apsize,
                                             "wave_ring.fade_time");
        }
        if (init)
        {
            wave_ring.max_vel = 20.0f;
            auto_tweak::load_param<F32, F32>(wave_ring.max_vel, 1.0f, 0.0, 10000.0f, ap, apsize,
                                             "wave_ring.max_vel");
        }
        if (init)
        {
            wave_ring.accel = 70.0f;
            auto_tweak::load_param<F32, F32>(wave_ring.accel, 1.0f, 0.0f, 1000.0f, ap, apsize,
                                             "wave_ring.accel");
        }
        if (init)
        {
            wave_ring.segment_length = 1.0f;
            auto_tweak::load_param<F32, F32>(wave_ring.segment_length, 1.0f, 0.0099999998f, 10.0f,
                                             ap, apsize, "wave_ring.segment_length");
        }
        if (init)
        {
            wave_ring.particle_height = -0.3f;
            auto_tweak::load_param<F32, F32>(wave_ring.particle_height, 1.0f, -10.0f, 10.0f, ap,
                                             apsize, "wave_ring.particle_height");
        }
        if (init)
        {
            wave_ring.particles = 5000.0f;
            auto_tweak::load_param<F32, F32>(wave_ring.particles, 1.0f, 0.0f, 100000.0f, ap, apsize,
                                             "wave_ring.particles");
        }
        if (init)
        {
            wave_ring.damage_height = 1.0f;
            auto_tweak::load_param<F32, F32>(wave_ring.damage_height, 1.0f, -100.0f, 100.0f, ap,
                                             apsize, "wave_ring.damage_height");
        }
        if (init)
        {
            wave_ring.damage_width = 1.0f;
            auto_tweak::load_param<F32, F32>(wave_ring.damage_width, 1.0f, 0.0f, 10.0f, ap, apsize,
                                             "wave_ring.damage_width");
        }
        if (init)
        {
            wave_ring.knock_back = 10.0f;
            auto_tweak::load_param<F32, F32>(wave_ring.knock_back, 1.0f, 0.0f, 1000.0f, ap, apsize,
                                             "wave_ring.knock_back");
        }
        if (init)
        {
            wave_ring.unit[0].radius_offset = 0.25f;
            auto_tweak::load_param<F32, F32>(wave_ring.unit[0].radius_offset, 1.0f, -10.0f, 10.0f,
                                             ap, apsize, "wave_ring.unit[0].radius_offset");
        }
        if (init)
        {
            wave_ring.unit[0].height_offset = 1.0f;
            auto_tweak::load_param<F32, F32>(wave_ring.unit[0].height_offset, 1.0f, -10.0f, 10.0f,
                                             ap, apsize, "wave_ring.unit[0].height_offset");
        }
        if (init)
        {
            wave_ring.unit[0].line = 0;
            auto_tweak::load_param<U8, U8>(wave_ring.unit[0].line, 0, 0, 0, ap, apsize,
                                           "wave_ring.unit[0].line");
        }
        if (init)
        {
            wave_ring.unit[0].thickness = 0.3f;
            auto_tweak::load_param<F32, F32>(wave_ring.unit[0].thickness, 1.0f, 0.0f, 100.0f, ap,
                                             apsize, "wave_ring.unit[0].thickness");
        }
        if (init)
        {
            wave_ring.unit[0].color = xColorFromRGBA(255, 255, 0, 255);
            auto_tweak::load_param<iColor_tag, S32>(wave_ring.unit[0].color, 0, 0, 0, ap, apsize,
                                                    "wave_ring.unit[0].color");
        }
        if (init)
        {
            wave_ring.unit[0].rot_radius = 1.0f;
            auto_tweak::load_param<F32, F32>(wave_ring.unit[0].rot_radius, 1.0f, 0.0f, 100.0f, ap,
                                             apsize, "wave_ring.unit[0].rot_radius");
        }
        if (init)
        {
            wave_ring.unit[0].degrees = 720.0f;
            auto_tweak::load_param<F32, F32>(wave_ring.unit[0].degrees, 1.0f, 0.0f, 100000.0f, ap,
                                             apsize, "wave_ring.unit[0].degrees");
        }
        if (init)
        {
            wave_ring.unit[1].radius_offset = 0.0f;
            auto_tweak::load_param<F32, F32>(wave_ring.unit[1].radius_offset, 1.0f, -10.0f, 10.0f,
                                             ap, apsize, "wave_ring.unit[1].radius_offset");
        }
        if (init)
        {
            wave_ring.unit[1].height_offset = 0.0f;
            auto_tweak::load_param<F32, F32>(wave_ring.unit[1].height_offset, 1.0f, -10.0f, 10.0f,
                                             ap, apsize, "wave_ring.unit[1].height_offset");
        }
        if (init)
        {
            wave_ring.unit[1].line = 0;
            auto_tweak::load_param<U8, U8>(wave_ring.unit[1].line, 0, 0, 0, ap, apsize,
                                           "wave_ring.unit[1].line");
        }
        if (init)
        {
            wave_ring.unit[1].thickness = 1.5f;
            auto_tweak::load_param<F32, F32>(wave_ring.unit[1].thickness, 1.0f, 0.0f, 100.0f, ap,
                                             apsize, "wave_ring.unit[1].thickness");
        }
        if (init)
        {
            wave_ring.unit[1].color = xColorFromRGBA(255, 255, 255, 255);
            auto_tweak::load_param<iColor_tag, S32>(wave_ring.unit[1].color, 0, 0, 0, ap, apsize,
                                                    "wave_ring.unit[1].color");
        }
        if (init)
        {
            wave_ring.unit[1].rot_radius = 0.5f;
            auto_tweak::load_param<F32, F32>(wave_ring.unit[1].rot_radius, 1.0f, 0.0f, 100.0f, ap,
                                             apsize, "wave_ring.unit[1].rot_radius");
        }
        if (init)
        {
            wave_ring.unit[1].degrees = 360.0f;
            auto_tweak::load_param<F32, F32>(wave_ring.unit[1].degrees, 1.0f, 0.0f, 100000.0f, ap,
                                             apsize, "wave_ring.unit[1].degrees");
        }
        if (init)
        {
            wave_ring.unit[2].radius_offset = -0.5f;
            auto_tweak::load_param<F32, F32>(wave_ring.unit[2].radius_offset, 1.0f, -10.0f, 10.0f,
                                             ap, apsize, "wave_ring.unit[2].radius_offset");
        }
        if (init)
        {
            wave_ring.unit[2].height_offset = 0.0f;
            auto_tweak::load_param<F32, F32>(wave_ring.unit[2].height_offset, 1.0f, -10.0f, 10.0f,
                                             ap, apsize, "wave_ring.unit[2].height_offset");
        }
        if (init)
        {
            wave_ring.unit[2].line = 0;
            auto_tweak::load_param<U8, U8>(wave_ring.unit[2].line, 0, 0, 0, ap, apsize,
                                           "wave_ring.unit[2].line");
        }
        if (init)
        {
            wave_ring.unit[2].thickness = 1.0f;
            auto_tweak::load_param<F32, F32>(wave_ring.unit[2].thickness, 1.0f, 0.0f, 100.0f, ap,
                                             apsize, "wave_ring.unit[2].thickness");
        }
        if (init)
        {
            wave_ring.unit[2].color = xColorFromRGBA(255, 255, 255, 255);
            auto_tweak::load_param<iColor_tag, S32>(wave_ring.unit[2].color, 0, 0, 0, ap, apsize,
                                                    "wave_ring.unit[2].color");
        }
        if (init)
        {
            wave_ring.unit[2].rot_radius = 0.5f;
            auto_tweak::load_param<F32, F32>(wave_ring.unit[2].rot_radius, 1.0f, 0.0f, 100.0f, ap,
                                             apsize, "wave_ring.unit[2].rot_radius");
        }
        if (init)
        {
            wave_ring.unit[2].degrees = 360.0f;
            auto_tweak::load_param<F32, F32>(wave_ring.unit[2].degrees, 1.0f, 0.0f, 100000.0f, ap,
                                             apsize, "wave_ring.unit[2].degrees");
        }
        if (init)
        {
            wave_ring.unit[3].radius_offset = -1.0f;
            auto_tweak::load_param<F32, F32>(wave_ring.unit[3].radius_offset, 1.0f, -10.0f, 10.0f,
                                             ap, apsize, "wave_ring.unit[3].radius_offset");
        }
        if (init)
        {
            wave_ring.unit[3].height_offset = 0.0f;
            auto_tweak::load_param<F32, F32>(wave_ring.unit[3].height_offset, 1.0f, -10.0f, 10.0f,
                                             ap, apsize, "wave_ring.unit[3].height_offset");
        }
        if (init)
        {
            wave_ring.unit[3].line = 0;
            auto_tweak::load_param<U8, U8>(wave_ring.unit[3].line, 0, 0, 0, ap, apsize,
                                           "wave_ring.unit[3].line");
        }
        if (init)
        {
            wave_ring.unit[3].thickness = 0.5f;
            auto_tweak::load_param<F32, F32>(wave_ring.unit[3].thickness, 1.0f, 0.0f, 100.0f, ap,
                                             apsize, "wave_ring.unit[3].thickness");
        }
        if (init)
        {
            wave_ring.unit[3].color = xColorFromRGBA(0, 255, 255, 255);
            auto_tweak::load_param<iColor_tag, S32>(wave_ring.unit[3].color, 0, 0, 0, ap, apsize,
                                                    "wave_ring.unit[3].color");
        }
        if (init)
        {
            wave_ring.unit[3].rot_radius = 0.5f;
            auto_tweak::load_param<F32, F32>(wave_ring.unit[3].rot_radius, 1.0f, 0.0f, 100.0f, ap,
                                             apsize, "wave_ring.unit[3].rot_radius");
        }
        if (init)
        {
            wave_ring.unit[3].degrees = 360.0f;
            auto_tweak::load_param<F32, F32>(wave_ring.unit[3].degrees, 1.0f, 0.0f, 100000.0f, ap,
                                             apsize, "wave_ring.unit[3].degrees");
        }
        if (init)
        {
            ambient_ring.radius = 2.0f;
            auto_tweak::load_param<F32, F32>(ambient_ring.radius, 1.0f, 0.0f, 100.0f, ap, apsize,
                                             "ambient_ring.radius");
        }
        if (init)
        {
            ambient_ring.min_height = 0.4f;
            auto_tweak::load_param<F32, F32>(ambient_ring.min_height, 1.0f, -100.0f, 100.0f, ap,
                                             apsize, "ambient_ring.min_height");
        }
        if (init)
        {
            ambient_ring.max_height = 3.5f;
            auto_tweak::load_param<F32, F32>(ambient_ring.max_height, 1.0f, -100.0f, 100.0f, ap,
                                             apsize, "ambient_ring.max_height");
        }
        if (init)
        {
            ambient_ring.speed = 2.0f;
            auto_tweak::load_param<F32, F32>(ambient_ring.speed, 1.0f, 0.0f, 10000.0f, ap, apsize,
                                             "ambient_ring.speed");
        }
        if (init)
        {
            ambient_ring.segment_length = 1.0f;
            auto_tweak::load_param<F32, F32>(ambient_ring.segment_length, 1.0f, 0.0f, 10.0f, ap,
                                             apsize, "ambient_ring.segment_length");
        }
        if (init)
        {
            ambient_ring.thickness = 0.2;
            auto_tweak::load_param<F32, F32>(ambient_ring.thickness, 1.0f, 0.0f, 10.0f, ap, apsize,
                                             "ambient_ring.thickness");
        }
        if (init)
        {
            ambient_ring.color = xColorFromRGBA(255, 100, 155, 255);
            auto_tweak::load_param<iColor_tag, S32>(ambient_ring.color, 0, 0, 0, ap, apsize,
                                                    "ambient_ring.color");
        }
        if (init)
        {
            ambient_ring.knock_back = 5.0f;
            auto_tweak::load_param<F32, F32>(ambient_ring.knock_back, 1.0f, 0.0f, 100.0f, ap,
                                             apsize, "ambient_ring.knock_back");
        }
        if (init)
        {
            ambient_ring.charge.radius = 4.5f;
            auto_tweak::load_param<F32, F32>(ambient_ring.charge.radius, 1.0f, 0.0f, 10.0f, ap,
                                             apsize, "ambient_ring.charge.radius");
        }
        if (init)
        {
            ambient_ring.charge.max_height = 8.0f;
            auto_tweak::load_param<F32, F32>(ambient_ring.charge.max_height, 1.0f, -100.0f, 100.0f,
                                             ap, apsize, "ambient_ring.charge.max_height");
        }
        if (init)
        {
            ambient_ring.charge.speed = 15.0f;
            auto_tweak::load_param<F32, F32>(ambient_ring.charge.speed, 1.0f, 0.0f, 10000.0f, ap,
                                             apsize, "ambient_ring.charge.speed");
        }
        if (init)
        {
            ambient_ring.charge.thickness = 5.0f;
            auto_tweak::load_param<F32, F32>(ambient_ring.charge.thickness, 1.0f, 0.0f, 10.0f, ap,
                                             apsize, "ambient_ring.charge.thickness");
        }
        if (init)
        {
            ambient_ring.charge.color = xColorFromRGBA(155, 100, 100, 0);
            auto_tweak::load_param<iColor_tag, S32>(ambient_ring.charge.color, 0, 0, 0, ap, apsize,
                                                    "ambient_ring.charge.color");
            ;
        }
        if (init)
        {
            tentacle.thickness = 0.2f;
            auto_tweak::load_param<F32, F32>(tentacle.thickness, 1.0f, 0.0f, 100.0f, ap, apsize,
                                             "tentacle.thickness");
        }
        if (init)
        {
            tentacle.rand_radius = 1.0f;
            auto_tweak::load_param<F32, F32>(tentacle.rand_radius, 1.0f, 0.0f, 100.0f, ap, apsize,
                                             "tentacle.rand_radius");
        }
        if (init)
        {
            tentacle.rot_radius = 1.0f;
            auto_tweak::load_param<F32, F32>(tentacle.rot_radius, 1.0f, 0.0f, 100.0f, ap, apsize,
                                             "tentacle.rot_radius");
        }
        if (init)
        {
            tentacle.move_degrees = 2440.0f;
            auto_tweak::load_param<F32, F32>(tentacle.move_degrees, 1.0f, 0.0f, 100000.0f, ap,
                                             apsize, "tentacle.move_degrees");
        }
        if (init)
        {
            tentacle.color = xColorFromRGBA(255, 255, 196, 255);
            auto_tweak::load_param<iColor_tag, S32>(tentacle.color, 0, 0, 0, ap, apsize,
                                                    "tentacle.color");
        }
        if (init)
        {
            tentacle.delay = 1.0f;
            auto_tweak::load_param<F32, F32>(tentacle.delay, 1.0f, 0.0f, 10.0f, ap, apsize,
                                             "tentacle.delay");
        }
        if (init)
        {
            tentacle.time = 2.0f;
            auto_tweak::load_param<F32, F32>(tentacle.time, 1.0f, 0.0f, 100.0f, ap, apsize,
                                             "tentacle.time");
        }
        if (init)
        {
            tentacle.max = 5;
            auto_tweak::load_param<S32, S32>(tentacle.max, 1, 1, 7, ap, apsize, "tentacle.max");
        }
        if (init)
        {
            tentacle.particles = 0.0f;
            auto_tweak::load_param<F32, F32>(tentacle.particles, 1.0f, 0.0f, 100000.0f, ap, apsize,
                                             "tentacle.particles");
        }
        if (init)
        {
            tentacle.knock_back = 5.0f;
            auto_tweak::load_param<F32, F32>(tentacle.knock_back, 1.0f, 0.0f, 100000.0f, ap, apsize,
                                             "tentacle.knock_back");
        }
        if (init)
        {
            tentacle.damage_width = 0.3f;
            auto_tweak::load_param<F32, F32>(tentacle.damage_width, 1.0f, 0.0f, 1.0f, ap, apsize,
                                             "tentacle.damage_width");
        }
        if (init)
        {
            tentacle.charge.thickness = 0.4f;
            auto_tweak::load_param<F32, F32>(tentacle.charge.thickness, 1.0f, 0.0f, 100.0f, ap,
                                             apsize, "tentacle.charge.thickness");
        }
        if (init)
        {
            tentacle.charge.color = xColorFromRGBA(255, 255, 0, 255);
            auto_tweak::load_param<iColor_tag, S32>(tentacle.charge.color, 0, 0, 0, ap, apsize,
                                                    "tentacle.charge.color");
        }
        if (init)
        {
            tentacle.charge.move_degrees = 180.0f;
            auto_tweak::load_param<F32, F32>(tentacle.charge.move_degrees, 1.0f, 0.0f, 100000.0f,
                                             ap, apsize, "tentacle.charge.move_degrees");
        }
        if (init)
        {
            thump.delay = 0.6f;
            auto_tweak::load_param<F32, F32>(thump.delay, 1.0f, 0.0f, 10.0f, ap, apsize,
                                             "thump.delay");
        }
        if (init)
        {
            thump.rings = 5;
            auto_tweak::load_param<S32, S32>(thump.rings, 1, 1, 10, ap, apsize, "thump.rings");
        }
        if (init)
        {
            thump.voffset = 0.0f;
            auto_tweak::load_param<F32, F32>(thump.voffset, 1.0f, -100.0f, 100.0f, ap, apsize,
                                             "thump.voffset");
        }
        if (init)
        {
            thump.particles = 200.0f;
            auto_tweak::load_param<F32, F32>(thump.particles, 1.0f, 0.0f, 10000.0f, ap, apsize,
                                             "thump.particles");
        }
        if (init)
        {
            thump.radius = 4.0f;
            auto_tweak::load_param<F32, F32>(thump.radius, 1.0f, 0.0f, 100.0f, ap, apsize,
                                             "thump.radius");
        }
        if (init)
        {
            thump.width = 2.0f;
            auto_tweak::load_param<F32, F32>(thump.width, 1.0f, 0.0f, 10.0f, ap, apsize,
                                             "thump.width");
        }
        if (init)
        {
            thump.vel = 10.0f;
            auto_tweak::load_param<F32, F32>(thump.vel, 1.0f, 0.0f, 10000.0f, ap, apsize,
                                             "thump.vel");
        }
        if (init)
        {
            thump.particle_drop_off = 0.5f;
            auto_tweak::load_param<F32, F32>(thump.particle_drop_off, 1.0f, 0.0f, 1.0f, ap, apsize,
                                             "thump.particle_drop_off");
        }
        if (init)
        {
            thump.vel_drop_off = 0.69999999f;
            auto_tweak::load_param<F32, F32>(thump.vel_drop_off, 1.0f, 0.0f, 1.0f, ap, apsize,
                                             "thump.vel_drop_off");
        }
        if (init)
        {
            sound[SOUND_AMBIENT_RING].volume = 0.3f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_AMBIENT_RING].volume, 1.0f, 0.0f, 1.0f, ap,
                                             apsize, "sound[SOUND_AMBIENT_RING].volume");
        }
        if (init)
        {
            sound[SOUND_AMBIENT_RING].delay = 0.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_AMBIENT_RING].delay, 1.0f, 0.0f, 100000.0f,
                                             ap, apsize, "sound[SOUND_AMBIENT_RING].delay");
        }
        if (init)
        {
            sound[SOUND_AMBIENT_RING].radius_inner = 0.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_AMBIENT_RING].radius_inner, 1.0f, 0.0f,
                                             100000.0f, ap, apsize,
                                             "sound[SOUND_AMBIENT_RING].radius_inner");
        }
        if (init)
        {
            sound[SOUND_AMBIENT_RING].priority = 0;
            auto_tweak::load_param<S32, S32>(sound[SOUND_AMBIENT_RING].priority, 1, 0, 1000, ap,
                                             apsize, "sound[SOUND_AMBIENT_RING].priority");
        }
        if (init)
        {
            sound[SOUND_BIRTH].volume = 1.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_BIRTH].volume, 1.0f, 0.0f, 10.0f, ap,
                                             apsize, "sound[SOUND_BIRTH].volume");
        }
        if (init)
        {
            sound[SOUND_BIRTH].delay = 0.2f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_BIRTH].delay, 1.0f, 0.0f, 10.0f, ap,
                                             apsize, "sound[SOUND_BIRTH].delay");
        }
        if (init)
        {
            sound[SOUND_BIRTH].radius_inner = 20.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_BIRTH].radius_inner, 1.0f, 0.0f, 100000.0f,
                                             ap, apsize, "sound[SOUND_BIRTH].radius_inner");
        }
        if (init)
        {
            sound[SOUND_BIRTH].radius_outer = 50.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_BIRTH].radius_outer, 1.0f, 0.0f, 100000.0f,
                                             ap, apsize, "sound[SOUND_BIRTH].radius_outer");
        }
        if (init)
        {
            sound[SOUND_BIRTH].priority = 0;
            auto_tweak::load_param<S32, S32>(sound[SOUND_BIRTH].priority, 1, 0, 1000, ap, apsize,
                                             "sound[SOUND_BIRTH].priority");
        }
        if (init)
        {
            sound[SOUND_CHARGE].volume = 0.75f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_CHARGE].volume, 1.0f, 0.0f, 10.0f, ap,
                                             apsize, "sound[SOUND_CHARGE].volume");
        }
        if (init)
        {
            sound[SOUND_CHARGE].delay = 0.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_CHARGE].delay, 1.0f, 0.0f, 10.0f, ap,
                                             apsize, "sound[SOUND_CHARGE].delay");
        }
        if (init)
        {
            sound[SOUND_CHARGE].radius_inner = 10.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_CHARGE].radius_inner, 1.0f, 0.0f,
                                             100000.0f, ap, apsize,
                                             "sound[SOUND_CHARGE].radius_inner");
        }
        if (init)
        {
            sound[SOUND_CHARGE].radius_outer = 40.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_CHARGE].radius_outer, 1.0f, 0.0f,
                                             100000.0f, ap, apsize,
                                             "sound[SOUND_CHARGE].radius_outer");
        }
        if (init)
        {
            sound[SOUND_CHARGE].priority = 0;
            auto_tweak::load_param<S32, S32>(sound[SOUND_CHARGE].priority, 1, 0, 1000, ap, apsize,
                                             "sound[SOUND_CHARGE].priority");
        }
        if (init)
        {
            sound[SOUND_CHEER].volume = 1.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_CHEER].volume, 1.0f, 0.0f, 10.0f, ap,
                                             apsize, "sound[SOUND_CHEER].volume");
        }
        if (init)
        {
            sound[SOUND_CHEER].delay = 0.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_CHEER].delay, 1.0f, 0.0f, 10.0f, ap,
                                             apsize, "sound[SOUND_CHEER].delay");
        }
        if (init)
        {
            sound[SOUND_CHEER].radius_inner = 20.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_CHEER].radius_inner, 1.0f, 0.0f, 100000.0f,
                                             ap, apsize, "sound[SOUND_CHEER].radius_inner");
        }
        if (init)
        {
            sound[SOUND_CHEER].radius_outer = 50.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_CHEER].radius_outer, 1.0f, 0.0f, 100000.0f,
                                             ap, apsize, "sound[SOUND_CHEER].radius_outer");
        }
        if (init)
        {
            sound[SOUND_CHEER].priority = 0;
            auto_tweak::load_param<S32, S32>(sound[SOUND_CHEER].priority, 1, 0, 1000, ap, apsize,
                                             "sound[SOUND_CHEER].priority");
        }
        if (init)
        {
            sound[SOUND_GRUNT].volume = 1.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_GRUNT].volume, 1.0f, 0.0f, 10.0f, ap,
                                             apsize, "sound[SOUND_GRUNT].volume");
        }
        if (init)
        {
            sound[SOUND_GRUNT].delay = 0.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_GRUNT].delay, 1.0f, 0.0f, 10.0f, ap,
                                             apsize, "sound[SOUND_GRUNT].delay");
        }
        if (init)
        {
            sound[SOUND_GRUNT].radius_inner = 20.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_GRUNT].radius_inner, 1.0f, 0.0f, 100000.0f,
                                             ap, apsize, "sound[SOUND_GRUNT].radius_inner");
        }
        if (init)
        {
            sound[SOUND_GRUNT].radius_outer = 50.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_GRUNT].radius_outer, 1.0f, 0.0f, 100000.0f,
                                             ap, apsize, "sound[SOUND_GRUNT].radius_outer");
        }
        if (init)
        {
            sound[SOUND_GRUNT].priority = 0;
            auto_tweak::load_param<S32, S32>(sound[SOUND_GRUNT].priority, 1, 0, 1000, ap, apsize,
                                             "sound[SOUND_GRUNT].priority");
        }
        if (init)
        {
            sound[SOUND_LAND].volume = 1.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_LAND].volume, 1.0f, 0.0f, 10.0f, ap,
                                             apsize, "sound[SOUND_LAND].volume");
        }
        if (init)
        {
            sound[SOUND_LAND].delay = 0.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_LAND].delay, 1.0f, 0.0f, 10.0f, ap, apsize,
                                             "sound[SOUND_LAND].delay");
        }
        if (init)
        {
            sound[SOUND_LAND].radius_inner = 10.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_LAND].radius_inner, 1.0f, 0.0f, 100000.0f,
                                             ap, apsize, "sound[SOUND_LAND].radius_inner");
        }
        if (init)
        {
            sound[SOUND_LAND].radius_outer = 40.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_LAND].radius_outer, 1.0f, 0.0f, 100000.0f,
                                             ap, apsize, "sound[SOUND_LAND].radius_outer");
        }
        if (init)
        {
            sound[SOUND_LAND].priority = 0;
            auto_tweak::load_param<S32, S32>(sound[SOUND_LAND].priority, 1, 0, 1000, ap, apsize,
                                             "sound[SOUND_LAND].priority");
        }
        if (init)
        {
            sound[SOUND_MOVE].volume = 1.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_MOVE].volume, 1.0f, 0.0f, 10.0f, ap,
                                             apsize, "sound[SOUND_MOVE].volume");
        }
        if (init)
        {
            sound[SOUND_MOVE].radius_inner = 10.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_MOVE].radius_inner, 1.0f, 0.0f, 100000.0f,
                                             ap, apsize, "sound[SOUND_MOVE].radius_inner");
        }
        if (init)
        {
            sound[SOUND_MOVE].radius_outer = 30.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_MOVE].radius_outer, 1.0f, 0.0f, 100000.0f,
                                             ap, apsize, "sound[SOUND_MOVE].radius_outer");
        }
        if (init)
        {
            sound[SOUND_MOVE].priority = 0;
            auto_tweak::load_param<S32, S32>(sound[SOUND_MOVE].priority, 1, 0, 1000, ap, apsize,
                                             "sound[SOUND_MOVE].priority");
        }
        if (init)
        {
            sound[SOUND_OSCILLATE].volume = 0.5f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_OSCILLATE].volume, 1.0f, 0.0f, 10.0f, ap,
                                             apsize, "sound[SOUND_OSCILLATE].volume");
        }
        if (init)
        {
            sound[SOUND_OSCILLATE].radius_inner = 0.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_OSCILLATE].radius_inner, 1.0f, 0.0f,
                                             100000.0f, ap, apsize,
                                             "sound[SOUND_OSCILLATE].radius_inner");
        }
        if (init)
        {
            sound[SOUND_OSCILLATE].radius_outer = 25.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_OSCILLATE].radius_outer, 1.0f, 0.0f,
                                             100000.0f, ap, apsize,
                                             "sound[SOUND_OSCILLATE].radius_outer");
        }
        if (init)
        {
            sound[SOUND_OSCILLATE].priority = 0;
            auto_tweak::load_param<S32, S32>(sound[SOUND_OSCILLATE].priority, 1, 0, 1000, ap,
                                             apsize, "sound[SOUND_OSCILLATE].priority");
        }
        if (init)
        {
            sound[SOUND_RISE].volume = 1.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_RISE].volume, 1.0f, 0.0f, 10.0f, ap,
                                             apsize, "sound[SOUND_RISE].volume");
        }
        if (init)
        {
            sound[SOUND_RISE].delay = 0.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_RISE].delay, 1.0f, 0.0f, 10.0f, ap, apsize,
                                             "sound[SOUND_RISE].delay");
        }
        if (init)
        {
            sound[SOUND_RISE].radius_inner = 10.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_RISE].radius_inner, 1.0f, 0.0f, 100000.0f,
                                             ap, apsize, "sound[SOUND_RISE].radius_inner");
        }
        if (init)
        {
            sound[SOUND_RISE].radius_outer = 40.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_RISE].radius_outer, 1.0f, 0.0f, 100000.0f,
                                             ap, apsize, "sound[SOUND_RISE].radius_outer");
        }
        if (init)
        {
            sound[SOUND_RISE].priority = 0;
            auto_tweak::load_param<S32, S32>(sound[SOUND_RISE].priority, 1, 0, 1000, ap, apsize,
                                             "sound[SOUND_RISE].priority");
        }
        if (init)
        {
            sound[SOUND_TAUNT].volume = 1.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_TAUNT].volume, 1.0f, 0.0f, 10.0f, ap,
                                             apsize, "sound[SOUND_TAUNT].volume");
        }
        if (init)
        {
            sound[SOUND_TAUNT].delay = 0.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_TAUNT].delay, 1.0f, 0.0f, 10.0f, ap,
                                             apsize, "sound[SOUND_TAUNT].delay");
        }
        if (init)
        {
            sound[SOUND_TAUNT].radius_inner = 20.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_TAUNT].radius_inner, 1.0f, 0.0f, 100000.0f,
                                             ap, apsize, "sound[SOUND_TAUNT].radius_inner");
        }
        if (init)
        {
            sound[SOUND_TAUNT].radius_outer = 50.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_TAUNT].radius_outer, 1.0f, 0.0f, 100000.0f,
                                             ap, apsize, "sound[SOUND_TAUNT].radius_outer");
        }
        if (init)
        {
            sound[SOUND_TAUNT].priority = 0;
            auto_tweak::load_param<S32, S32>(sound[SOUND_TAUNT].priority, 1, 0, 1000, ap, apsize,
                                             "sound[SOUND_TAUNT].priority");
        }
        if (init)
        {
            sound[SOUND_WAVE_RING].volume = 0.75f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_WAVE_RING].volume, 1.0f, 0.0f, 10.0f, ap,
                                             apsize, "sound[SOUND_WAVE_RING].volume");
        }
        if (init)
        {
            sound[SOUND_WAVE_RING].delay = 0.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_WAVE_RING].delay, 1.0f, 0.0f, 10.0f, ap,
                                             apsize, "sound[SOUND_WAVE_RING].delay");
        }
        if (init)
        {
            sound[SOUND_WAVE_RING].radius_inner = 20.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_WAVE_RING].radius_inner, 1.0f, 0.0f,
                                             100000.0f, ap, apsize,
                                             "sound[SOUND_WAVE_RING].radius_inner");
        }
        if (init)
        {
            sound[SOUND_WAVE_RING].radius_outer = 50.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_WAVE_RING].radius_outer, 1.0f, 0.0f,
                                             100000.0f, ap, apsize,
                                             "sound[SOUND_WAVE_RING].radius_outer");
        }
        if (init)
        {
            sound[SOUND_WAVE_RING].priority = 0;
            auto_tweak::load_param<S32, S32>(sound[SOUND_WAVE_RING].priority, 1, 0, 1000, ap,
                                             apsize, "sound[SOUND_WAVE_RING].priority");
        }
    }
} // namespace

void lightning_ring::create()
{
    // store 1 into 0x0
    active = 1;
    arcs_size = 0;

    //store 0 into 0x7c
}

void lightning_ring::destroy()
{
    for (S32 i = 0; i < arcs_size; i++)
    {
        zLightningKill(arcs[i]);
    }
    arcs_size = 0;
    active = 0;
}

xAnimTable* ZNPC_AnimTable_KingJelly()
{
    // clang-format off
    S32 ourAnims[11] = {
        ANIM_Idle01,
        ANIM_Idle02,
        ANIM_Idle03,
        ANIM_Taunt01,
        ANIM_Attack01,
        ANIM_AttackWindup01,        
        ANIM_AttackLoop01,
        ANIM_AttackEnd01,
        ANIM_Damage01,
        ANIM_SpawnKids01,
        ANIM_Unknown,
        
    };
    // clang-format on
    xAnimTable* table = xAnimTableNew("zNPCKingJelly", NULL, 0);

    xAnimTableNewState(table, g_strz_subbanim[ANIM_Idle01], 0x10, 0, f1868, NULL, NULL, f1869, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_subbanim[ANIM_Idle02], 0x20, 0, f1868, NULL, NULL, f1869, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_subbanim[ANIM_Idle03], 0x20, 0, f1868, NULL, NULL, f1869, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_subbanim[ANIM_Taunt01], 0x20, 0, f1868, NULL, NULL, f1869,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_subbanim[ANIM_Attack01], 0x10, 0, f1868, NULL, NULL, f1869,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_subbanim[ANIM_AttackWindup01], 0x20, 0, f1868, NULL, NULL,
                       f1869, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_subbanim[ANIM_AttackLoop01], 0x10, 0, f1868, NULL, NULL, f1869,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_subbanim[ANIM_AttackEnd01], 0x20, 0, f1868, NULL, NULL, f1869,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_subbanim[ANIM_Damage01], 0x20, 0, f1868, NULL, NULL, f1869,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_subbanim[ANIM_SpawnKids01], 0x10, 0, f1868, NULL, NULL, f1869,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);

    NPCC_BuildStandardAnimTran(table, g_strz_subbanim, ourAnims, 1, f2105);

    xAnimTableNewTransition(table, g_strz_subbanim[ANIM_AttackWindup01],
                            g_strz_subbanim[ANIM_Attack01], 0, 0, 0x10, 0, 0, 0, 0, 0, f2106, 0);
    xAnimTableNewTransition(table, g_strz_subbanim[ANIM_AttackLoop01],
                            g_strz_subbanim[ANIM_Attack01], 0, 0, 0, 0, 0, 0, 0, 0, f2106, 0);
    xAnimTableNewTransition(table, g_strz_subbanim[ANIM_Attack01],
                            g_strz_subbanim[ANIM_AttackLoop01], 0, 0, 0, 0, 0, 0, 0, 0, f2106, 0);
    xAnimTableNewTransition(table, g_strz_subbanim[ANIM_AttackLoop01],
                            g_strz_subbanim[ANIM_AttackEnd01], 0, 0, 0, 0, 0, 0, 0, 0, f2106, 0);
    xAnimTableNewTransition(table, g_strz_subbanim[ANIM_Idle02], g_strz_subbanim[ANIM_Damage01], 0,
                            0, 0, 0, 0, 0, 0, 0, f2106, 0);
    xAnimTableNewTransition(table, g_strz_subbanim[ANIM_Idle03], g_strz_subbanim[ANIM_Damage01], 0,
                            0, 0, 0, 0, 0, 0, 0, f2106, 0);
    xAnimTableNewTransition(table, g_strz_subbanim[ANIM_Taunt01], g_strz_subbanim[ANIM_Damage01], 0,
                            0, 0, 0, 0, 0, 0, 0, f2106, 0);
    xAnimTableNewTransition(table, g_strz_subbanim[ANIM_AttackWindup01],
                            g_strz_subbanim[ANIM_Damage01], 0, 0, 0, 0, 0, 0, 0, 0, f2106, 0);
    xAnimTableNewTransition(table, g_strz_subbanim[ANIM_AttackLoop01],
                            g_strz_subbanim[ANIM_Damage01], 0, 0, 0, 0, 0, 0, 0, 0, f2106, 0);
    xAnimTableNewTransition(table, g_strz_subbanim[ANIM_Attack01], g_strz_subbanim[ANIM_Damage01],
                            0, 0, 0, 0, 0, 0, 0, 0, f2106, 0);
    xAnimTableNewTransition(table, g_strz_subbanim[ANIM_AttackEnd01],
                            g_strz_subbanim[ANIM_Damage01], 0, 0, 0, 0, 0, 0, 0, 0, f2106, 0);
    xAnimTableNewTransition(table, g_strz_subbanim[ANIM_SpawnKids01],
                            g_strz_subbanim[ANIM_Damage01], 0, 0, 0, 0, 0, 0, 0, 0, f2106, 0);
    xAnimTableNewTransition(table, g_strz_subbanim[ANIM_Idle02], g_strz_subbanim[ANIM_Taunt01], 0,
                            0, 0, 0, 0, 0, 0, 0, f2106, 0);
    xAnimTableNewTransition(table, g_strz_subbanim[ANIM_Idle03], g_strz_subbanim[ANIM_Taunt01], 0,
                            0, 0, 0, 0, 0, 0, 0, f2106, 0);
    xAnimTableNewTransition(table, g_strz_subbanim[ANIM_AttackWindup01],
                            g_strz_subbanim[ANIM_Taunt01], 0, 0, 0, 0, 0, 0, 0, 0, f2106, 0);
    xAnimTableNewTransition(table, g_strz_subbanim[ANIM_AttackLoop01],
                            g_strz_subbanim[ANIM_Taunt01], 0, 0, 0, 0, 0, 0, 0, 0, f2106, 0);
    xAnimTableNewTransition(table, g_strz_subbanim[ANIM_Attack01], g_strz_subbanim[ANIM_Taunt01], 0,
                            0, 0, 0, 0, 0, 0, 0, f2106, 0);
    xAnimTableNewTransition(table, g_strz_subbanim[ANIM_AttackEnd01], g_strz_subbanim[ANIM_Taunt01],
                            0, 0, 0, 0, 0, 0, 0, 0, f2106, 0);
    xAnimTableNewTransition(table, g_strz_subbanim[ANIM_SpawnKids01], g_strz_subbanim[ANIM_Taunt01],
                            0, 0, 0, 0, 0, 0, 0, 0, f2106, 0);
    xAnimTableNewTransition(table, g_strz_subbanim[ANIM_Damage01],
                            g_strz_subbanim[ANIM_SpawnKids01], 0, 0, 0, 0, 0, 0, 0, 0, f2106, 0);

    return table;
}

void zNPCKingJelly::Init(xEntAsset* asset)
{
    zNPCCommon::Init(asset);
    memset(&flag.fighting, 0, 5);
    this->bossCam.init();
}

xVec3* zNPCKingJelly::get_bottom()
{
    return (xVec3*)&this->model->Mat->pos;
}

void zNPCKingJelly::Setup()
{
    this->children_size = 0; //0x88C
    load_model();
    load_curtain_model();
    zNPCSubBoss::Setup();
}

void zNPCKingJelly::Reset()
{
    // u32 i
}

void zNPCKingJelly::Destroy()
{
    decompose();
    post_decompose();
    zNPCCommon::Destroy();
}

void zNPCKingJelly::BUpdate(xVec3* pos)
{
    // Original stack variables:
    //xVec3& subloc;
    //xVec3 loc;

    // Something like this...
    // Some vec is being added to another on the stack (probably)
    // (xVec3&)this->model->Mat->pos = (xVec3&)this->model->Mat->pos + *pos;

    zNPCCommon::BUpdate(pos);
}

S32 zNPCKingJelly::SysEvent(xBase* from, xBase* to, U32 toEvent, const F32* toParam,
                            xBase* toParamWidget, S32* handled)
{
    U32 ret;

    if (toEvent == 0x1b9)
    {
        ret = 1;
    }
    else
    {
        if (toEvent < 0x1b9)
        {
            if (toEvent == 0x1b5)
            {
                start_fight();
                return 1;
            }
        }
        else if (toEvent == 0x1d9)
        {
            xPsyche* psy = this->psy_instinct;
            psy->GoalSet(0x4e474d37, 1);
            return 1;
        }
        handled = 0;
        ret = zNPCCommon::SysEvent(from, to, toEvent, toParam, toParamWidget, handled);
    }
    return ret;
}

void zNPCKingJelly::RenderExtra()
{
    zNPCKingJelly::render_debug();
}

void zNPCKingJelly::ParseINI()
{
    zNPCCommon::ParseINI();
    cfg_npc->snd_traxShare = &g_sndTrax_KingJelly;
    NPCS_SndTablePrepare((NPCSndTrax*)&g_sndTrax_KingJelly);
    cfg_npc->snd_trax = &g_sndTrax_KingJelly;
    NPCS_SndTablePrepare((NPCSndTrax*)&g_sndTrax_KingJelly);
}

void zNPCKingJelly::SelfSetup()
{
    xBehaveMgr* bmgr;
    xPsyche* psy;

    bmgr = xBehaveMgr_GetSelf();
    psy_instinct = bmgr->Subscribe(this, 0);
    psy = psy_instinct;
    psy->BrainBegin();
    psy->AddGoal(NPC_GOAL_KJIDLE, NULL);
    psy->AddGoal(NPC_GOAL_KJBORED, NULL);
    psy->AddGoal(NPC_GOAL_KJSPAWNKIDS, NULL);
    psy->AddGoal(NPC_GOAL_KJTAUNT, NULL);
    psy->AddGoal(NPC_GOAL_KJSHOCKGROUND, NULL);
    psy->AddGoal(NPC_GOAL_KJDAMAGE, NULL);
    psy->AddGoal(NPC_GOAL_KJDEATH, NULL);
    psy->AddGoal(NPC_GOAL_LIMBO, NULL);
    psy->BrainEnd();
    psy->SetSafety(NPC_GOAL_KJIDLE);
}

S32 zNPCKingJelly::max_strikes() const
{
    return round + 1;
}

void zNPCKingJelly::init_child(zNPCKingJelly::child_data& child, zNPCCommon& npc, int wave)
{
    child.npc = &npc;
    child.wave = wave;
    child.active = 1;
    child.callback.eventFunc = npc.eventFunc;
    child.callback.update = npc.update;
    child.callback.bupdate = npc.bupdate;
    child.callback.move = npc.move;
    child.callback.render = npc.render;
    child.callback.transl = npc.transl;
}

void zNPCKingJelly::disable_child(zNPCKingJelly::child_data& child)
{
    if (child.active)
    {
        ((zNPCJelly*)child.npc)->JellyKill();
        child.active = false;
    }
}

void zNPCKingJelly::enable_child(zNPCKingJelly::child_data& child)
{
    if (child.active == false)
    {
        child.active = true;
    }
}

S32 zNPCKingJelly::max_strikes()
{
    return round + 1;
}

void zNPCKingJelly::on_change_ambient_ring(const tweak_info&)
{
}

void zNPCKingJelly::on_change_fade_obstructions(const tweak_info&)
{
}

void zNPCKingJelly::render_debug()
{
}

void zNPCKingJelly::decompose()
{
}

void zNPCKingJelly::post_decompose()
{
}

void zNPCKingJelly::vanish()
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

void zNPCKingJelly::reappear()
{
    moreFlags = old.moreFlags;
    this->RestoreColFlags();
    xEntShow(this);
}

void zNPCKingJelly::create_tentacle_lightning()
{
}

void zNPCKingJelly::destroy_tentacle_lightning()
{
    for (S32 i = 0; i < 7; i++)
    {
        if (tentacle_lightning[i])
        {
            zLightningKill(tentacle_lightning[i]);
            tentacle_lightning[i] = NULL;
        }
    }
}

void zNPCKingJelly::refresh_tentacle_points()
{
    S32 tempvar = 0;
    do
    {
        refresh_tentacle_points(tempvar);
        tempvar = tempvar + 1;
    } while (tempvar < 7);
}

void zNPCKingJelly::destroy_ambient_rings()
{
    for (S32 i = 0; i < 3; i++)
    {
        ambient_rings[i].destroy();
    }
}

void zNPCKingJelly::generate_spawn_particles()
{
}

void zNPCKingJelly::load_model()
{
}

void zNPCKingJelly::load_curtain_model()
{
}

void zNPCKingJelly::show_shower_model()
{
}

void zNPCKingJelly::reset_curtain()
{
}

S32 zNPCGoalKJIdle::Exit(float dt, void* updCtxt)
{
    zNPCKingJelly& kj = *(zNPCKingJelly*)this->psyche->clt_owner;
    kill_sound(6);
    kj.flag.stop_moving = 1;
    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalKJBored::Enter(float dt, void* updCtxt)
{
    zNPCKingJelly& kj = *(zNPCKingJelly*)this->psyche->clt_owner;
    //play_sound(int, const xVec3*);
    play_sound(3, kj.model->anim_coll.verts); // kj.model is correct? dont know the xVec3*
    play_sound(3, kj.model->anim_coll.verts); // same as above
    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalKJBored::Exit(float dt, void* updCtxt)
{
    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalKJSpawnKids::Enter(float dt, void* updCtxt)
{
    zNPCKingJelly& kj = *(zNPCKingJelly*)this->psyche->clt_owner;
    count_children(kj.round);
    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalKJSpawnKids::Exit(float dt, void* updCtxt)
{
    zNPCKingJelly& kj = *(zNPCKingJelly*)this->psyche->clt_owner;
    if (spawn_count < child_count) //0x58 child_count
    {
        kj.generate_spawn_particles();
        kj.spawn_children(kj.round, child_count - spawn_count);
    }
    return zNPCGoalCommon::Exit(dt, updCtxt);
}

S32 zNPCGoalKJTaunt::Enter(float dt, void* updCtxt)
{
    zNPCKingJelly& kj = *(zNPCKingJelly*)this->psyche->clt_owner;
    //play_sound(int, const xVec3*);
    play_sound(9, kj.model->anim_coll.verts); // kj.model is correct? dont know the xVec3*
    play_sound(9, kj.model->anim_coll.verts); // same as above
    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalKJTaunt::Exit(float dt, void* updCtxt)
{
    return xGoal::Exit(dt, updCtxt);
}

// void zNPCKingJelly::start_blink()
// {
//     blink.active = 1;
//     blink.delay = 0;
//     blink.count = 0;
//     // 0x24 model
//     // 0x44 render
// }

S32 zNPCGoalKJDamage::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn)
{
    zNPCKingJelly& kj = *(zNPCKingJelly*)this->psyche->clt_owner;
    return 0;
}

S32 zNPCGoalKJShockGround::Exit(F32 dt, void* updCtxt)
{
    zNPCKingJelly& kj = *(zNPCKingJelly*)this->psyche->clt_owner;
    if (kj.flag.charging != 0)
    {
        kj.end_charge();
    }
    kj.create_ambient_rings();
    kj.disable_tentacle_damage = 0;
    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalKJDamage::Enter(F32 dt, void* updCtxt)
{
    zNPCKingJelly& kj = *(zNPCKingJelly*)this->psyche->clt_owner;
    //play_sound(int, const xVec3*);
    play_sound(4, kj.model->anim_coll.verts); // kj.model is correct? dont know the xVec3*
    play_sound(4, kj.model->anim_coll.verts); // same as above
    kj.disable_tentacle_damage = 1;
    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalKJDamage::Exit(F32 dt, void* updCtxt)
{
    // Needs to be a reference, casting as a pointer doesn't work.
    // Would never have gotten this if not for DWARF data.
    zNPCKingJelly& kj = *(zNPCKingJelly*)this->psyche->clt_owner;

    kj.update_round();
    kj.disable_tentacle_damage = false;

    return xGoal::Exit(dt, updCtxt);
}

void zNPCKingJelly::update_round()
{
}

S32 zNPCGoalKJDeath::Enter(float dt, void* updCtxt)
{
    zNPCKingJelly& kj = *(zNPCKingJelly*)this->psyche->clt_owner;
    kj.decompose();
    kj.post_decompose();
    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalKJDeath::Exit(float dt, void* updCtxt)
{
    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalKJDeath::Process(en_trantype* trantype, float dt, void* updCtxt, xScene* xscn)
{
    return xGoal::Process(trantype, dt, updCtxt, xscn);
}
