#include "xHudMeter.h"

#include <types.h>

#include "xString.h"
#include "xMathInlines.h"
#include "PowerPC_EABI_Support\MSL_C\MSL_Common\printf.h"

namespace xhud
{
    namespace
    {
        static void add_global_tweaks()
        {
        }
    } // namespace

    meter_widget::meter_widget(const meter_asset& asset)
        : widget((xhud::asset&)asset), res((xhud::meter_asset&)asset), value(asset.start_value),
          min_value(asset.min_value), max_value(asset.max_value), end_value(asset.start_value),
          value_vel(0.0f), ping_delay(10.0f)
    {
        add_global_tweaks();
    }
} // namespace xhud

void xhud::meter_widget::set_value(F32 v)
{
    F32 dvalue;
    F32 sign;

    dvalue = v - value;
    if (dvalue < -0.01f)
    {
        if (res.sound.start_decrement != 0)
        {
            xSndPlay(res.sound.start_decrement, 1.0f, 0.0f, 0x80, 0x0, NULL, SND_CAT_GAME, 0.0f);
        }

        if (res.decrement_time < 0.01f)
        {
            set_value_immediate(v);
            return;
        }

        dvalue = -1.0f;
    }
    else if (dvalue > 0.01f)
    {
        if (res.sound.start_increment != 0)
        {
            xSndPlay(res.sound.start_increment, 1.0f, 0.0f, 0x80, 0x0, NULL, SND_CAT_GAME, 0.0f);
        }

        if (res.increment_time < 0.01f)
        {
            set_value_immediate(v);
            return;
        }

        dvalue = 1.0f;
    }
    else
    {
        set_value_immediate(v);
        return;
    }

    end_value = dvalue;

    if (res.decrement_time == 0.0f)
    {
        printf("decrement time = 0 -- ass saved!\n");
    }

    dvalue = res.decrement_time > 1e-5f ? 1e-5f : dvalue / res.decrement_time;
    value_vel = dvalue;
    value_accel = 50.0f * res.decrement_time;

    if (xsqrt(2.0f * (v - value) / res.decrement_time) > 2.0f)
    {
        value_accel = 25.0f * res.decrement_time;
    }
}

void xhud::meter_widget::set_value_immediate(F32 v)
{
    value = v;
    end_value = v;
    value_vel = 0.0f;
}

void xhud::meter_widget::destruct()
{
    xhud::widget::destruct();
}

U32 xhud::meter_widget::type() const
{
    static U32 myid = xStrHash(res.type_name());

    return myid;
}

bool xhud::meter_widget::is(U32 id) const
{
    bool isTheWidget = false;

    if (id == xhud::meter_widget::type() || xhud::widget::is(id))
    {
        isTheWidget = true;
    }

    return isTheWidget;
}

void xhud::meter_widget::updater(F32 dt)
{
    F32 old_value;
    F32 pitch; // This was Heavy Iron, idk why they chose a name that causes name collisions :(
    F32 min_ping_time;

    xhud::widget::updater(dt);

    ping_delay += dt;
    this->pitch += dt;

    if (value_vel != 0.0f)
    {
        old_value = value;

        value = value + dt * (0.5f * value_accel * dt);
        value_vel += value_accel * dt;

        if (value_vel < 0.0f)
        {
            if (value <= end_value)
            {
                value = end_value;
                end_value = 0.0f;
            }

            pitch = range_limit<F32>(-4.0f * this->pitch, -10.0f, 6.5f);
            min_ping_time = 0.05f * xpow(0.5f, 0.083333336f * pitch);

            if ((S32)value != (S32)old_value && res.sound.decrement != 0 &&
                ping_delay > min_ping_time)
            {
                ping_delay = 0.0f;
                pings.play(res.sound.decrement, 1.0f, pitch, 0x80, 0, 0, SND_CAT_GAME);
            }
        }
        else
        {
            if (value >= end_value)
            {
                value = end_value;
                value_vel = 0.0f;
            }

            pitch = range_limit<F32>(2.0f * this->pitch, -10.0f, 6.5f);
            min_ping_time = 0.05f * xpow(0.5f, 0.083333336f * pitch);

            if ((S32)value != (S32)old_value && res.sound.increment != 0 &&
                ping_delay > min_ping_time)
            {
                ping_delay = 0.0f;
                pings.play(res.sound.increment, 1.0f, pitch, 0x80, 0, 0, SND_CAT_GAME);
            }
        }
    }
}
