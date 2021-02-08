#ifndef ZENTCRUISEBUBBLE_H
#define ZENTCRUISEBUBBLE_H

#include <types.h>

#include "zRumble.h"

namespace cruise_bubble
{

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

bool active();
void render_screen();
void init_sound();
void stop_sound(int32 which, uint32 handle);
uint32 play_sound(int32 which, float32 volFactor);
uint32 play_sound(int32 which, float32 volFactor, const xVec3* pos);
void set_pitch(int32 which, float32 pitch, uint32 handle);

} // namespace cruise_bubble

#endif