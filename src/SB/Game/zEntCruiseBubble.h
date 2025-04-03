#ifndef ZENTCRUISEBUBBLE_H

#define ZENTCRUISEBUBBLE_H

#include "xDebug.h"

#include "zNPCHazard.h"
#include "zShrapnel.h"
#include <types.h>

#include "zRumble.h"

// I have no idea where to put this. This is only used by
// cruise_bubble::tweak_group::register_tweaks() so far.
// If you are searching the project for 'auto_tweak' you are
// probably working on one of the bosses which also seem to use this.
// As of now I'm not sure if you should include this declaration,
// define your own or find a good place for shared use.
// NOTE (Square): pretty sure this is from xDebug
namespace auto_tweak
{
    template <class T1, class T2>
    void load_param(T1&, T2, T2, T2, xModelAssetParam*, U32, const char*);
};

namespace cruise_bubble
{
    namespace
    {
        enum state_enum
        {
            BEGIN_STATE_PLAYER,
            STATE_PLAYER_HALT = 0x0,
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

            state_type(state_enum type);

            virtual void start();
            virtual void stop();
            virtual state_enum update(F32 dt) = 0;
            virtual void render();
            virtual void abort();
        };

        struct state_player_fire : state_type
        {
            U8 wand_shown;

            state_player_fire();

            void start();
            void stop();
            state_enum update(F32 dt);
            void update_wand(F32 dt);
        };

        struct state_camera_aim : state_type
        {
            F32 phi;
            F32 phi_vel;
            F32 height;
            F32 height_vel;
            F32 dist;
            F32 dist_vel;
            xQuat facing;
            xQuat target;
            F32 control_delay;
            F32 seize_delay;

            state_camera_aim();

            void start();
            void stop();
            state_enum update(F32 dt);

            void apply_turn() const;
            void turn(F32 dt);
            void collide_inward();
            void apply_motion() const;
            void stop(F32 dt);
            void move(F32 dt);
        };

        struct state_player_halt : state_type
        {
            U8 first_update;
            F32 time;
            xVec3 last_motion;

            state_player_halt();

            void start();
            void stop();
            state_enum update(F32 dt);
        };

        struct state_missle_explode : state_type
        {
            F32 hit_time;

            state_missle_explode();

            void start();
            void stop();
            state_enum update(F32 dt);

            F32 get_radius() const;
            void start_effects();
            void cb_droplet(zFrag* frag, zFragAsset* fa);
            void perturb_direction(const xVec3&, F32, F32, F32, F32);
            void get_next_quadrant(F32&, F32&, F32&, F32&);
            void reset_quadrants(U32 size, F32 ring);
            void apply_damage(F32 radius);
            void apply_damage_hazards(F32);
            U8 hazard_check(NPCHazard& haz, void* context);
        };

        struct state_camera_attach : state_type
        {
            F32 reticle_delay;

            state_camera_attach();

            void start();
            void stop();
            state_enum update(F32 dt);

            void lock_targets();
            void lock_hazard_targets();
            static U8 hazard_check(NPCHazard& haz, void* context);
            void get_view_bound(xBound& bound) const;
        };

        struct state_missle_fly : state_type
        {
            F32 life;
            F32 vel;
            xVec3 rot;
            // Offset: 0x1c
            xVec3 rot_vel;
            // Offset: 0x28
            F32 engine_pitch;
            xVec3 last_loc;
            // Offset: 0x38
            F32 flash_time;

            state_missle_fly();

            void start();
            void stop();
            state_enum update(F32 dt);
            void abort();
            void update_flash(F32 dt);
            void update_engine_sound(F32 dt);

            U8 collide_hazards();
            static bool hazard_check(NPCHazard& haz, void* context);
            U8 collide();
            U8 hit_test(xVec3& hit_loc, xVec3& hit_norm, xVec3& hit_depen, xEnt*& hit_ent) const;
            void update_move(F32 dt);
            void update_turn(F32 dt);
            void calculate_rotation(xVec2& d1, xVec2& v1, F32 dt, const xVec2& d0, const xVec2& v0,
                                    const xVec2& a0, const xVec2& a1) const;
        };

        struct state_missle_appear : state_type
        {
            state_missle_appear();

            void start();
            void stop();
            state_enum update(F32 dt);
            void move();
            void update_effects(F32 dt);
        };

        struct state_camera_seize : state_type
        {
            F32 blend_time;
            xVec3 start_loc;
            xQuat start_dir;
            xQuat end_dir;
            xQuat cur_dir;
            F32 last_s;
            F32 fov;
            F32 wipe_bubbles;

            state_camera_seize();

            void start();
            void stop();
            state_enum update(F32 dt);

            void refresh_missle_alpha(F32);
            void update_turn(F32);
            void update_move(F32);
        };

        struct state_player_aim : state_type
        {
            F32 yaw;
            F32 yaw_vel;
            F32 turn_delay;

            state_player_aim();

            void start();
            void stop();
            state_enum update(F32 dt);

            void update_animation(F32 dt);
            void apply_yaw();
            void face_camera(F32 dt);
        };

        struct state_camera_restore : state_type
        {
            F32 control_delay;

            state_camera_restore();

            void start();
            void stop();
            state_enum update(F32 dt);
        };

        struct state_camera_survey : state_type
        {
            F32 time;
            xVec2 start_sp;
            F32 path_distance[127];

            state_camera_survey();

            void start();
            void stop();
            state_enum update(F32 dt);

            void move();
            void eval_missle_path(F32 dist, xVec3& loc, F32& roll) const;
            void lerp(F32& x, F32 t, F32 a, F32 b) const;
            void lerp(xVec3& v, F32 t, const xVec3& a, const xVec3& b) const;
            S32 find_nearest(F32) const;
            void init_path();
            bool control_jerked() const;
        };

        struct state_player_wait : state_type
        {
            state_player_wait();

            void start();
            state_enum update(F32 dt);
        };

        // Size: 0x1b8
        struct tweak_group
        {
            F32 aim_delay;
            // Size: 0x10, Offset: 0x4
            struct _class_2
            {
                F32 halt_time; // 0x4
                struct _class_4
                {
                    F32 turn_speed; // 0x8
                    F32 anim_delta; // 0xC
                } aim;
                struct _class_11
                {
                    F32 delay_wand; // 0x10
                } fire;
            } player;

            // Size: 0x5c, Offset: 0x14
            struct _class_22
            {
                F32 life;
                F32 hit_dist; // 0x18
                F32 crash_angle; // 0x1c
                F32 collide_twist; // 0x20
                S32 hit_tests; // 0x24
                struct _class_27
                {
                    F32 delay_show; // 0x28
                    F32 delay_fly; // 0x2c
                    xVec3 offset; // 0x30
                } appear;
                struct _class_32
                {
                    F32 accel; // 0x3c
                    F32 max_vel; // 0x40
                    F32 engine_pitch_max; // 0x44
                    F32 engine_pitch_sensitivity; // 0x48
                    // Offset: 0x4c
                    F32 flash_interval;
                    struct _class_38
                    {
                        F32 xdelta; // 0x50
                        F32 ydelta; // 0x54
                        F32 xdecay; // 0x58
                        F32 ydecay; // 0x5c
                        F32 ybound; // 0x60
                        F32 roll_frac; // 0x64
                    } turn;
                } fly;
                struct _class_49
                {
                    F32 hit_radius; // 0x68
                    F32 hit_duration; // 0x6c
                } explode;
            } missle;

            // Size: 0x5c, Offset: 0x70
            struct _class_10
            {
                struct _class_15
                {
                    F32 dist;
                    F32 height; // 0x74
                    F32 pitch; // 0x78
                    F32 accel; // 0x7c
                    F32 max_vel; // 0x80
                    F32 stick_decel; // 0x84
                    F32 stick_accel; // 0x88
                    F32 stick_max_vel; // 0x8c
                    F32 turn_speed; // 0x90
                } aim;
                struct _class_24
                {
                    F32 delay; // 0x94
                    F32 blend_time; // 0x98
                    F32 fade_dist; // 0x9c
                    F32 hide_dist; // 0xa0
                    F32 fov; // 0xa4
                } seize;
                struct _class_30
                {
                    F32 duration; // 0xa8
                    F32 min_duration; // 0xac
                    F32 min_dist; // 0xb0
                    F32 cut_dist; // 0xb4
                    F32 drift_dist; // 0xb8
                    F32 drift_softness; // 0xbc
                    F32 jerk_offset; // 0xc0
                    F32 jerk_deflect; // 0xc4
                } survey;
                struct _class_39
                {
                    F32 control_delay; // 0xc8
                } restore;
            } camera;

            // Size: 0x18, Offset: 0xcc
            struct _class_48
            {
                F32 env_alpha;
                F32 env_coeff; // 0xd0
                U32 env_texture; // 0xd4
                F32 fresnel_alpha; // 0xd8
                F32 fresnel_coeff; // 0xdc
                U32 fresnel_texture; // 0xe0
            } material;

            // Size: 0x14, Offset: 0xe4
            struct _class_9
            {
                // Offset: 0xe4
                F32 dist_min;
                F32 dist_max;
                // Offset: 0xec
                F32 ang_show;
                F32 ang_hide;
                F32 delay_retarget;
            } reticle;

            // Size: 0x10, Offset: 0xf8
            struct _class_20
            {
                // Offset: 0xf8
                F32 sample_rate;
                F32 bubble_rate; // 0xfc
                F32 bubble_emit_radius; // 0x100
                F32 wake_emit_radius; // 0x104
            } trail;

            // Size: 0x10, Offset: 0x108
            struct _class_29
            {
                U32 emit; // 0x108
                F32 radius; // 0x10c
                F32 vel; // 0x110
                F32 rand_vel; // 0x11
            } blast;

            // Size: 0x24, Offset: 0x118
            struct _class_35
            {
                F32 dist_min;
                F32 dist_max;
                U32 emit_min;
                U32 emit_max;
                F32 vel_min;
                F32 vel_max;
                F32 vel_perturb;
                F32 vel_angle;
                F32 rot_vel_max;
            } droplet;

            // Size: 0x44, Offset: 0x13c
            struct _class_43
            {
                F32 glow_size;
                // Offset: 0x140
                F32 time_fade;
                F32 time_glow;
                struct _class_46
                {
                    F32 size;
                    F32 du;
                    F32 dv;
                } swirl;
                struct _class_5
                {
                    F32 size;
                    F32 du;
                    F32 dv;
                } wind;
                struct _class_12
                {
                    F32 size;
                } reticle;
                struct _class_18
                {
                    F32 size;
                } target;
                struct _class_23
                {
                    // Offset: 0x168
                    S32 font;
                    F32 font_width;
                    F32 font_height;
                    F32 x;
                    F32 y;
                    // Offset: 0x17c
                    F32 glow_size;
                } timer;
            } hud;

            // Size: 0xc, Offset: 0x180
            struct _class_34
            {
                F32 freq;
                F32 decay;
                F32 min_freq;
            } dialog;

            void* context;
            tweak_callback cb_missle_model;

            void load(xModelAssetParam* params, U32 size);

            void register_tweaks(bool init, xModelAssetParam* ap, U32 apsize, const char*);
        };

        struct uv_animated_model
        {
            RpAtomic* model;
            RwTexCoords* uv;
            S32 uvsize;
            xVec2 offset;
            xVec2 offset_vel;

            bool init(RpAtomic*);
            bool clone_uv(RwTexCoords*&, S32&, RpAtomic*) const;
            bool get_uv(RwTexCoords*&, S32&, RpAtomic*) const;
            void update(F32 dt);
            void refresh();
        };

        struct sound_config
        {
            // offset 0x0
            char* name;
            // offset 0x4
            F32 volume;
            // offset 0x8
            F32 radius_inner;
            // offset 0xc
            F32 radius_outer;
            // offset 0x10
            U8 streamed; // might be bool, not sure
            U8 looping; // might be bool, not sure
            // offset 0x14
            _tagSDRumbleType rumble;
            // offset 0x18
            S32 first;
            // offset 0x1c
            S32 last;
            // offset 0x20
            U32 id;
            // offset 0x24
            U32 handle;
        };

        struct hud_gizmo
        {
            S32 flags;
            basic_rect<F32> bound;
            F32 alpha;
            // Offset: 0x18
            F32 alpha_vel;
            F32 glow;
            F32 glow_vel;
            F32 opacity;
            const xVec3* target;
            xModelInstance* model;
        };

        struct missle_record_data
        {
            xVec3 loc;
            F32 roll;

            missle_record_data(const xVec3& loc, F32 roll);
        };
    } // namespace

    void init_sound();
    void stop_sound(S32 which, U32 handle);
    U32 play_sound(S32 which, F32 volFactor);
    U32 play_sound(S32 which, F32 volFactor, const xVec3* pos);
    void set_pitch(S32 which, F32 pitch, U32 handle);
    void show_wand();
    void hide_wand();
    void show_missle();
    void hide_missle();
    void capture_camera();
    void release_camera();
    bool camera_taken();
    bool camera_leave();
    void start_damaging();
    // void damage_entity(xEnt& ent, const xVec3& loc, const xVec3& dir, const xVec3& hit_norm,
    //                    F32 radius, bool explosive);
    U8 can_damage(xEnt* ent);
    U8 was_damaged(xEnt* ent);
    void notify_triggers(xScene& s, const xSphere& o, const xVec3& dir);
    void exit_triggers(xScene& s);
    void signal_event(U32 toEvent);
    void refresh_trail(xMat4x3& mat, xQuat& quat);
    void start_trail();
    void stop_trail();
    void set_state(thread_enum thread, state_enum state);
    bool check_launch();
    void kill(bool reset_camera, bool abortive);
    void distort_screen(F32);
    void update_player(xScene& s, F32 dt);
    xVec3& get_player_loc();
    void render_player();
    void refresh_controls();
    void update_state(xScene* s, F32 dt);
    void render_state();
    RpAtomic* custom_bubble_render(RpAtomic* atomic);
    void init_states();
    void init_missle_model();
    void reset_wake_ribbons();
    void init_wake_ribbons();
    void reset_explode_decal();
    void init_explode_decal();
    void init_shrapnel();
    void add_trail_sample(const xVec3& loc0, const xVec3& dir0, const xVec3& loc1,
                          const xVec3& dir1, F32 dt);
    void update_trail(F32 dt);
    void refresh_missle_model();
    void update_missle(xScene& s, F32 dt);
    void render_missle();
    xModelInstance* load_model(U32);
    void render_model_2d(xModelInstance* m, const basic_rect<F32>& bound, F32 alpha);
    void render_glow(xModelInstance* m, const basic_rect<F32>& r, F32 glow, F32 alpha);
    void init_hud();
    void show_gizmo(hud_gizmo& gizmo, const basic_rect<F32>& rect, xModelInstance* m);
    void update_gizmo(hud_gizmo& gizmo, F32 dt);
    void flash_hud();
    void render_timer(F32 alpha, F32 glow);
    void lerp(iColor_tag& c, F32 t, iColor_tag a, iColor_tag b);
    void lerp(U8& x, F32 t, U8 a, U8 b);
    void update_hud(F32 dt);
    void render_hud();
    void show_hud();
    void hide_hud();
    xVec3 world_to_screen(const xVec3& loc);
    S32 find_locked_target(const xVec3* target);
    void lock_target(S32 index, const xVec3* target, F32 opacity);
    void check_lock_target(const xVec3* target);
    U32 check_anim_aim(xAnimTransition*, xAnimSingle*);
    void load_cheat_tweak();
    void load_settings();
    void init();
    void init_debug();
    void reset();
    void launch();
    bool update(xScene* s, F32 dt);
    bool render();
    void render_debug();
    void render_screen();
    void insert_player_animations(xAnimTable& table);
    bool active();
    F32 exploding();
    void get_explode_sphere(xVec3& center, F32& radius);
    xEnt** get_explode_hits(S32& size);
    void add_life(F32, F32);
    void set_life(F32 life);
    void reset_life();
    // xBase* param names are guessed as they go unused and wont appear in dwarf
    bool event_handler(xBase* from, U32 event, const F32* fparam, xBase* to);
    xMat4x3* get_player_mat();
    xMat4x3* get_missle_mat();
} // namespace cruise_bubble

xAnimTable* anim_table();

#endif
