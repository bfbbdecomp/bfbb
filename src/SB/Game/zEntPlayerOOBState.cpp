#include "zEntPlayerOOBState.h"
#include "zGlobals.h"

#include "xMath.h"

#include <types.h>

bool oob_player_teleported;

namespace oob_state
{
    namespace
    {
        _class_9 shared = { 1,
                            NULL,
                            0,
                            { NULL, NULL, NULL, NULL },
                            0.0f,
                            0.0f,
                            0.0f,
                            NULL,
                            NULL,
                            NULL,
                            0.0f,
                            0,
                            0,
                            0.0f,
                            0.0f,
                            0,
                            0,
                            NULL,

                            { 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, NULL, NULL } };

        static idiot_level_data idiot_levels[6] = {
            { false, 0 }, //
            { false, 'HB01' }, //
            { false, 'JF01' }, //
            { false, 'JF03' }, //
            { false, 'BB01' }, //
            { false, 'GL01' },
        };

        tagFixed fixed;
        xMat4x3 shared_target;

        static bool assume_player_is_stupid()
        {
            shared.tutorial = (ztalkbox*)zSceneFindObject(xStrHash("OUT_OF_BOUNDS_TLKBX"));

            if (shared.tutorial == NULL || shared.tutorial->baseType != eBaseTypeTalkBox)
            {
                return false;
            }

            U32 scene = globals.sceneCur->sceneID;
            bool stupid = !idiot_levels[0].triggered;
            idiot_levels[0].triggered = true;

            for (S32 i = 1; i < 6; i++)
            {
                if (scene == idiot_levels[i].scene)
                {
                    stupid = (stupid || !idiot_levels[i].triggered);
                    idiot_levels[i].triggered = true;
                    break;
                }
            }

            return stupid;
        }

    } // namespace
} // namespace oob_state

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
    shared.reset_time = FLOAT_MAX;
    shared.out_time = FLOAT_MAX;
    shared.control = 0;
};

void oob_state::in_state_type::stop(){

};

void oob_state::out_state_type::start()
{
    shared.out_time = shared.max_out_time;
    shared.reset_time = fixed.reset_time;
};

void oob_state::out_state_type::stop(){

};

void oob_state::state_type::start(){

};

void oob_state::state_type::stop(){

};

bool oob_state::grab_state_type::update_reorient(xScene&, F32&)
{
    return true;
};

void oob_state::grab_state_type::stop(){

};

void oob_state::grab_state_type::tutorial_callback::on_stop()
{
    owner.finished_tutorial = true;
};

bool oob_state::IsPlayerInControl()
{
    return oob_state::shared.control == 0;
}

WEAK ztalkbox::callback::callback()
{
}
WEAK void ztalkbox::callback::on_signal(U32)
{
}
WEAK void ztalkbox::callback::on_start()
{
}
WEAK void ztalkbox::callback::on_stop()
{
}
WEAK void ztalkbox::callback::on_answer(ztalkbox::answer_enum)
{
}

WEAK F32 xVec2::dot(const xVec2& b) const
{
    return (x * b.x) + (y * b.y);
}

WEAK xVec2& xVec2::normalize()
{
    *this /= length();
    return *this;
}
