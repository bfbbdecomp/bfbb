#ifndef XHUDMETER_H
#define XHUDMETER_H

#include "xHud.h"
#include "xSnd.h"

namespace xhud
{
    struct meter_asset : asset
    {
        float32 start_value;
        float32 min_value;
        float32 max_value;
        float32 increment_time;
        float32 decrement_time;
        struct _class_0
        {
            uint32 start_increment;
            uint32 increment;
            uint32 start_decrement;
            uint32 decrement;
        } sound;
    };

    struct meter_widget : widget
    {
        meter_asset& res;
        float32 value;
        float32 min_value;
        float32 max_value;
        float32 end_value;
        float32 value_vel;
        float32 value_accel;
        float32 ping_delay;
        float32 pitch;
        sound_queue<4> pings;
    };
} // namespace xhud

#endif