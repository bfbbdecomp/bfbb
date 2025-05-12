#ifndef XHUDMETER_H
#define XHUDMETER_H

#include "xHud.h"
#include "xSnd.h"

namespace xhud
{
    struct meter_asset : asset
    {
        F32 start_value;
        F32 min_value;
        F32 max_value;
        F32 increment_time;
        F32 decrement_time;
        struct _class_0
        {
            U32 start_increment;
            U32 increment;
            U32 start_decrement;
            U32 decrement;
        } sound;

        static const char* type_name()
        {
            return "hud:meter";
        }
    };

    struct meter_widget : widget
    {
        meter_asset& res;
        F32 value;
        F32 min_value;
        F32 max_value;
        F32 end_value;
        F32 value_vel;
        F32 value_accel;
        F32 ping_delay;
        F32 pitch;
        sound_queue<4> pings;

        meter_widget(const meter_asset& asset);

        void set_value(F32 v);
        void set_value_immediate(F32 v);
        void destruct();
        U32 type() const;
        bool is(U32 id) const;
        void updater(F32 dt);

        void update(F32 dt)
        {
            updater(dt);
        }
    };
} // namespace xhud

#endif
