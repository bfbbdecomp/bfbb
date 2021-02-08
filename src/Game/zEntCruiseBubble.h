#ifndef ZENTCRUISEBUBBLE_H
#define ZENTCRUISEBUBBLE_H

#include <types.h>

#include "zRumble.h"

namespace cruise_bubble
{

struct sound_config
{
    int8* name; // probably char*
    float32 volume;
    float32 radius_inner;
    float32 radius_outer;
    uint8 streamed; // might be bool, not sure
    uint8 looping; // might be bool, not sure
    _tagSDRumbleType rumble;
    int32 first;
    int32 last;
    uint32 id;
    uint32 handle;
};

bool active();
void render_screen();
void init_sound();
void stop_sound(int32 which, uint32 handle);
uint32 play_sound(int32 which, float32 volFactor);

} // namespace cruise_bubble

#endif