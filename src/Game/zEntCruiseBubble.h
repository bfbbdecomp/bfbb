#ifndef ZENTCRUISEBUBBLE_H
#define ZENTCRUISEBUBBLE_H

#include "zShrapnel.h"
#include <types.h>

#include "zRumble.h"

namespace cruise_bubble
{
    enum state_enum
    {
        BEGIN_STATE_PLAYER,
        STATE_PLAYER_HALT,
        STATE_PLAYER_AIM,
        STATE_PLAYER_FIRE,
        STATE_PLAYER_WAIT,
        END_STATE_PLAYER,
        BEGIN_STATE_MISSLE = 0x4,
        BACKUP_STATE_MISSLE = 0x3,
        STATE_MISSLE_APPEAR,
        STATE_MISSLE_FLY,
        STATE_MISSLE_EXPLODE,
        END_STATE_MISSLE,
        BEGIN_STATE_CAMERA = 0x7,
        BACKUP_STATE_CAMERA = 0x6,
        STATE_CAMERA_AIM,
        STATE_CAMERA_SEIZE,
        STATE_CAMERA_ATTACH,
        STATE_CAMERA_SURVEY,
        STATE_CAMERA_RESTORE,
        END_STATE_CAMERA,
        MAX_STATE = 0xc,
        BACKUP_STATE_PLAYER = 0xffffffff,
        STATE_INVALID = 0xffffffff
    };

    enum thread_enum
    {
        THREAD_PLAYER,
        THREAD_MISSLE,
        THREAD_CAMERA,
        MAX_THREAD
    };

    struct state_type
    {
        state_enum type;

        virtual void start();
        virtual void stop();
        virtual state_enum update(float32 dt) = 0;
        virtual void render();
        virtual void abort();
    };

    struct state_missle_fly : state_type
    {
        float32 life;
        float32 vel;
        xVec3 rot;
        xVec3 rot_vel;
        float32 engine_pitch;
        xVec3 last_loc;
        float32 flash_time;

        void start();
        state_enum update(float32 dt);
        uint8 hit_test(xVec3& hit_loc, xVec3& hit_norm, xVec3& hit_depen, xEnt*& hit_ent) const;
    };
    
    struct sound_config
    {
        // offset 0x0
        int8* name; // probably char*
        // offset 0x4
        float32 volume;
        // offset 0x8
        float32 radius_inner;
        // offset 0xc
        float32 radius_outer;
        // offset 0x10
        uint8 streamed; // might be bool, not sure
        uint8 looping; // might be bool, not sure
        // offset 0x14
        _tagSDRumbleType rumble;
        // offset 0x18
        int32 first;
        // offset 0x1c
        int32 last;
        // offset 0x20
        uint32 id;
        // offset 0x24
        uint32 handle;
    };

    struct hud_gizmo
    {
        int32 flags;
        basic_rect<float32> bound;
        float32 alpha;
        float32 alpha_vel;
        float32 glow;
        float32 glow_vel;
        float32 opacity;
        xVec3* target;
        xModelInstance* model;
    };

    struct uv_animated_model
    {
        RpAtomic* model;
        RwTexCoords* uv;
        int32 uvsize;
        xVec2 offset;
        xVec2 offset_vel;

        bool init(RpAtomic*);
        bool clone_uv(RwTexCoords*&, int32&, RpAtomic*) const;
        bool get_uv(RwTexCoords*&, int32&, RpAtomic*) const;
    };

    struct tweak_group
    {
        float32 aim_delay;
        // Size: 0x10
        struct _class_2
        {
            float32 halt_time;
            struct _class_4
            {
                float32 turn_speed;
                float32 anim_delta;
            } aim;
            struct _class_11
            {
                float32 delay_wand;
            } fire;
        } player;
        
        // Size: 0x5c
        struct _class_22
        {
            float32 life;
            float32 hit_dist;
            float32 crash_angle;
            float32 collide_twist;
            int32 hit_tests;
            struct _class_27
            {
                float32 delay_show;
                float32 delay_fly;
                xVec3 offset;
            } appear;
            struct _class_32
            {
                float32 accel;
                float32 max_vel;
                float32 engine_pitch_max;
                float32 engine_pitch_sensitivity;
                float32 flash_interval;
                struct _class_38
                {
                    float32 xdelta;
                    float32 ydelta;
                    float32 xdecay;
                    float32 ydecay;
                    float32 ybound;
                    float32 roll_frac;
                } turn;
            } fly;
            struct _class_49
            {
                float32 hit_radius;
                float32 hit_duration;
            } explode;
        } missle;

        // Size: 0x5c
        struct _class_10
        {
            struct _class_15
            {
                float32 dist;
                float32 height;
                float32 pitch;
                float32 accel;
                float32 max_vel;
                float32 stick_decel;
                float32 stick_accel;
                float32 stick_max_vel;
                float32 turn_speed;
            } aim;
            struct _class_24
            {
                float32 delay;
                float32 blend_time;
                float32 fade_dist;
                float32 hide_dist;
                float32 fov;
            } seize;
            struct _class_30
            {
                float32 duration;
                float32 min_duration;
                float32 min_dist;
                float32 cut_dist;
                float32 drift_dist;
                float32 drift_softness;
                float32 jerk_offset;
                float32 jerk_deflect;
            } survey;
            struct _class_39
            {
                float32 control_delay;
            } restore;
        } camera;

        // Size 0x18
        struct _class_48
        {
            float32 env_alpha;
            float32 env_coeff;
            uint32 env_texture;
            float32 fresnel_alpha;
            float32 fresnel_coeff;
            uint32 fresnel_texture;
        } material;

        // Size 0x14
        struct _class_9
        {
            float32 dist_min;
            float32 dist_max;
            float32 ang_show;
            float32 ang_hide;
            float32 delay_retarget;
        } reticle;

        // Size 0x10
        struct _class_20
        {
            float32 sample_rate;
            float32 bubble_rate;
            float32 bubble_emit_radius;
            float32 wake_emit_radius;
        } trail;
        
        // Size 0x10
        struct _class_29
        {
            uint32 emit;
            float32 radius;
            float32 vel;
            float32 rand_vel;
        } blast;

        // Size 0x24
        struct _class_35
        {
            float32 dist_min;
            float32 dist_max;
            uint32 emit_min;
            uint32 emit_max;
            float32 vel_min;
            float32 vel_max;
            float32 vel_perturb;
            float32 vel_angle;
            float32 rot_vel_max;
        } droplet;
        
        // Size 0x44
        struct _class_43
        {
            float32 glow_size;
            float32 time_fade;
            float32 time_glow;
            struct _class_46
            {
                float32 size;
                float32 du;
                float32 dv;
            } swirl;
            struct _class_5
            {
                float32 size;
                float32 du;
                float32 dv;
            } wind;
            struct _class_12
            {
                float32 size;
            } reticle;
            struct _class_18
            {
                float32 size;
            } target;
            struct _class_23
            {
                // Offset: 0x168
                int32 font;
                float32 font_width;
                float32 font_height;
                float32 x;
                float32 y;
                // Offset: 0x17c
                float32 glow_size;
            } timer;
        } hud;
        
        // Size 0xc
        struct _class_34
        {
            float32 freq;
            float32 decay;
            float32 min_freq;
        } dialog;

        void* context;
        tweak_callback cb_missle_model;

        void register_tweaks(uint8 init, xModelAssetParam* ap, uint32 apsize);
    };


    bool active();
    void render_screen();
    void init_sound();
    void stop_sound(int32 which, uint32 handle);
    uint32 play_sound(int32 which, float32 volFactor);
    uint32 play_sound(int32 which, float32 volFactor, const xVec3* pos);
    void set_pitch(int32 which, float32 pitch, uint32 handle);
    void show_wand();
    void hide_wand();
    void show_missle();
    void hide_missle();
    void capture_camera();
    void release_camera();
    uint32 camera_taken();
    uint32 camera_leave();
    void start_damaging();
    void damage_entity(xEnt& ent, const xVec3& loc, const xVec3& dir, const xVec3& hit_norm,
            float32 radius, uint8 explosive);
    uint8 can_damage(xEnt* ent);
    uint8 was_damaged(xEnt* ent);
    void notify_triggers(xScene& s, const xSphere& o, const xVec3& dir);
    void exit_triggers(xScene& s);
    void signal_event(uint32 toEvent);
    void refresh_trail(xMat4x3& mat, xQuat& quat);
    void start_trail();
    void stop_trail();
    void set_state(thread_enum thread, state_enum state);
    uint32 check_launch();
    void kill(bool reset_camera, bool abortive);
    void distort_screen(float32);
    void update_player(xScene& s, float32 dt);
    xVec3& get_player_loc();
    void render_player();
    void refresh_controls();
    void update_state(xScene* s, float32 dt);
    void render_state();
    RpAtomic* custom_bubble_render(RpAtomic* atomic);
    void init_missle_model();
    void reset_wake_ribbons();
    void init_wake_ribbons();
    void reset_explode_decal();
    void init_explode_decal();
    void init_shrapnel();
    void update_trail(float32 dt);
    void refresh_missle_model();
    void update_missle(xScene& s, float32 dt);
    void render_missle();
    xModelInstance* load_model(uint32);
    void init_hud();
    void show_gizmo(hud_gizmo& gizmo, const basic_rect<float32>& rect, xModelInstance* m);
    void update_gizmo(hud_gizmo& gizmo, float32 dt);
    void flash_hud();
    void render_timer(float32 alpha, float32 glow);
    void lerp(iColor_tag& c, float32 t, iColor_tag a, iColor_tag b);
    void hide_hud();

} // namespace cruise_bubble

#endif