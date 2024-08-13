#include "zEntPlayerOOBState.h"

#include "xMath.h"

#include <types.h>

bool oob_player_teleported;

namespace oob_state {
namespace
{
    _class_9 shared =
    {
        1,
        NULL,
        0,
        { NULL, NULL, NULL, NULL },
        0.0f, 0.0f, 0.0f,
        NULL,
        NULL, NULL,
        0.0f,
        0,
        0,
        0.0f, 0.0f,
        0,
        0,
        NULL,

        { 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, NULL, NULL }
    };

    static idiot_level_data idiot_levels[6] =
    {
        { NULL },
        { 0, 'HB01' },
        { 0, 'JF01' },
        { 0, 'JF03' },
        { 0, 'BB01' },
        { 0, 'GL01' },
    };

    xMat4x3 shared_target;
    tagFixed fixed;
}}

float oob_state::oob_timer()
{
    if (shared.reset_time == fixed.reset_time)
    {
        return shared.out_time;
    }

    return -1.0f;
}

void oob_state::in_state_type::start()
{
    shared.reset_time = 1e38;
    shared.out_time = 1e38;
    shared.control = 0;
};

void oob_state::in_state_type::stop()
{

};

void oob_state::out_state_type::start()
{
    shared.out_time = shared.max_out_time;
    shared.reset_time = fixed.reset_time;
};

void oob_state::out_state_type::stop()
{

};

void oob_state::state_type::start()
{

};

void oob_state::state_type::stop()
{

};

bool oob_state::grab_state_type::update_reorient(xScene&, F32&)
{
    return true;
};

void oob_state::grab_state_type::stop()
{

};

void oob_state::grab_state_type::tutorial_callback::on_stop()
{
    owner.finished_tutorial = true;
};

bool oob_state::IsPlayerInControl()
{
    return oob_state::shared.control == 0;
}

WEAK ztalkbox::callback::callback() { }
WEAK void ztalkbox::callback::on_signal(U32) { }
WEAK void ztalkbox::callback::on_start() { }
WEAK void ztalkbox::callback::on_stop() { }
WEAK void ztalkbox::callback::on_answer(ztalkbox::answer_enum) { }

WEAK F32 xVec2::dot(const xVec2& b) const
{
    return (x * b.x) + (y * b.y);
}

WEAK xVec2& xVec2::normalize()
{
    *this /= length();
    return *this;
}