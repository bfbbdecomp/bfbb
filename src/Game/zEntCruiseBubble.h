#ifndef ZENTCRUISEBUBBLE_H
#define ZENTCRUISEBUBBLE_H

#include <types.h>

#include "zRumble.h"

namespace cruise_bubble
{

struct sound_config
{
    int8* name;
    float32 volume;
    float32 radius_inner;
    float32 radius_outer;
    uint8 streamed;
    uint8 looping;
    _tagSDRumbleType rumble;
    int32 first;
    int32 last;
    uint32 id;
    uint32 handle;
};

bool active();
void render_screen();
void init_sound();

} // namespace cruise_bubble

#endif