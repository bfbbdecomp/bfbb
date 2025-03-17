#ifndef ZDISCOFLOOR_H
#define ZDISCOFLOOR_H

#include "zEntSimpleObj.h"

#include "xBase.h"
#include "xMath3.h"

struct z_disco_floor_asset : xBaseAsset
{
    U32 flags;
    struct
    {
        F32 transition;
        F32 state;
    } interval;
    struct
    {
        U32 off;
        U32 transition;
        U32 on;
    } prefix_offset;
    U32 state_mask_size;
    U32 states_offset;
    U32 states_size;
};

struct z_disco_floor : xBase
{
    struct tile_data
    {
        bool culled;
        zEntSimpleObj* ent;
        xSphere sphere;
    };

    struct
    {
        bool enabled;
        bool forward;
        bool culled;
        bool glow_culled;
    } flag;
    z_disco_floor_asset* asset;

    U8** state_masks;
    U8* active_state_mask;
    U8* next_state_mask;
    const char* prefix[3];
    tile_data* tiles[3];
    U32 tiles_size;
    U32 min_state;
    U32 max_state;
    U32 state;
    U32 next_state;
    U32 state_counter;
    F32 transition_delay;
    F32 state_delay;
    F32 transition_time;
    F32 state_time;
    xSphere bound;
    F32 pulse_time;
    F32 pulse_glow[3];
    F32 cull_dist_glow;
    F32 cull_dist_update;
    F32 glow_fade;
    F32 sound_delay;
    S32 curr_note;

    static void init();
    static void init(void* ent, void* asset);
    static void post_setup();
    static void destroy();
    static void render_all();
    static void effects_render_all();
    static S32 event_handler(xBase*, xBase* to, U32 event, const F32* argf, xBase*);

    void load(z_disco_floor_asset& asset);
    void setup();
    void reset();
    void update(xScene&, F32 dt);
    void set_state(size_t state, bool immediate);
    void enable();
    void disable();
    void set_state_range(S32 min, S32 max, bool immediate);
    void set_transition_delay(F32 s);
    void set_state_delay(F32 s);
    void refresh_spheres();
    void update_pulse(F32 dt);
    void refresh_bound();
    void refresh_cull_dist();
    void distance_cull();
    void render(S32 group);
    void effects_render(S32 group);
};

#endif
