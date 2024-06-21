#ifndef ZENTPLAYEROOBSTATE_H
#define ZENTPLAYEROOBSTATE_H

#include "xserializer.h"

extern bool oob_player_teleported;

namespace oob_state
{
    bool render();
    void fx_render();
    void read_persistent(xSerial& s);
    void write_persistent(xSerial& s);
} // namespace oob_state

#endif
