#ifndef ZENTCRUISEBUBBLE_H
#define ZENTCRUISEBUBBLE_H

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

    struct state_type
    {
        state_enum type;
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

    struct zShrapnelAsset
    {
        int32 fassetCount;
        uint32 shrapnelID;
        // TODO: fix this weird function definition from dwarf data
        // void (*initCB)(zShrapnelAsset*, xModelInstance*, xVec3*, void (*)(zFrag*, zFragAsset*));
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
    uint8 can_damage(xEnt* ent);
    uint8 was_damaged(xEnt* ent);

} // namespace cruise_bubble

#endif