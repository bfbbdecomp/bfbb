#include "zEntPlayerOOBState.h"
#include "zGlobals.h"

#include "xMath.h"
#include "xMathInlines.h"

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

        static void set_camera(bool instant)
        {
            xCamera& cam = globals.camera;
            xVec3 target_offset;
            F32 tm;
            F32 tm_acc;

            shared_target = g_I3;
            shared_target.pos = globals.player.ent.model->Scale;

            globals.camera.tgt_omat = &shared_target;
            globals.camera.tgt_mat = globals.camera.tgt_omat;

            zCameraDisableInput();
            zCameraSetBbounce(0);
            zCameraSetLongbounce(0);
            zCameraSetHighbounce(0);
            zCameraDisableTracking(CO_OOB);
            xCameraDoCollisions(0, 6);

            if (instant)
            {
                tm = 0.0f;
            }
            else
            {
                tm = 0.3f;
            }

            if (instant != NULL)
            {
                tm_acc = 0.0f;
            }
            else
            {
                tm_acc = 0.1f;
            }

            xCameraMove(&cam, 40, (xatan2(cam.mat.at.x, cam.mat.at.z) + PI), fixed.cam_dist,
                        cam.pcur, tm, tm_acc, fixed.cam_height);

            cam.tgt_mat->pos - cam.mat.pos;
            cam.tgt_mat->pos.normal();

            xCameraLookYPR(&cam, NULL, xatan2(cam.mat.up.x, cam.mat.up.z), 0.0f, 0.0f, 0.0f, 0.0f,
                           0.0f);

            zCameraTweakGlobal_Init();
        }

        static void reset_camera()
        {
            globals.camera.tgt_omat = xEntGetFrame(&(xEnt)globals.player.ent);
            globals.camera.tgt_mat = globals.camera.tgt_omat;

            zCameraEnableInput();
            zCameraEnableTracking(CO_OOB);
            xCameraDoCollisions(1, 6);
            zCameraTweakGlobal_Init();
        }

        static void move_up(xVec3& vec, F32 arg1)
        {
            xMat4x3Tolocal(&vec, &globals.camera.mat, &vec);
        }

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

        static void move_hand(float dt /* r29+0x10 */)
        {
        }

        static void render_fade()
        {
        }

        static void set_rect_vert(rwGameCube2DVertex&, F32, F32, F32, iColor_tag, F32)
        {
        }

        drop_state_type::substate_enum drop_state_type::supdate_fade_in(drop_state_type&,
                                                                        xScene& scn, F32& unk0)
        {
            return drop_state_type::update_fade_in();
        }

        drop_state_type::substate_enum drop_state_type::update_fade_in(xScene&, float&)
        {
            return SS_MOVING_IN;
        }

    } // namespace
} // namespace oob_state

/*
static class 
{
    // total size: 0x70
public:
    signed int flags; // offset 0x0, size 0x4
    class state_type* state; // offset 0x4, size 0x4
    unsigned char control; // offset 0x8, size 0x1
    class state_type* states[4]; // offset 0xC, size 0x10
    float out_time; // offset 0x1C, size 0x4
    float max_out_time; // offset 0x20, size 0x4
    float reset_time; // offset 0x24, size 0x4
    class xModelInstance* model; // offset 0x28, size 0x4
    class xVec2 loc; // offset 0x2C, size 0x8
    class xVec2 dir; // offset 0x34, size 0x8
    float fade_alpha; // offset 0x3C, size 0x4
    unsigned char render_hand; // offset 0x40, size 0x1
    unsigned char vertical; // offset 0x41, size 0x1
    float vel; // offset 0x44, size 0x4
    float accel; // offset 0x48, size 0x4
    class ztalkbox* tutorial; // offset 0x4C, size 0x4
    class
    {
        // total size: 0x20
    public:
        float near_d; // offset 0x0, size 0x4
        float near_h; // offset 0x4, size 0x4
        float near_pitch; // offset 0x8, size 0x4
        float far_d; // offset 0xC, size 0x4
        float far_h; // offset 0x10, size 0x4
        float far_pitch; // offset 0x14, size 0x4
        class xMat4x3* tgt_mat; // offset 0x18, size 0x4
        class xMat4x3* tgt_omat; // offset 0x1C, size 0x4
    } cam_data; // offset 0x50, size 0x20
}
shared; // size: 0x70, address: 0x4DFA90
*/

/*
static class {
    // total size: 0x58
public:
    float bottom_anim_frac; // offset 0x0, size 0x4
    float top_anim_frac; // offset 0x4, size 0x4
    float bottom_anim_time; // offset 0x8, size 0x4
    float top_anim_time; // offset 0xC, size 0x4
    float hit_anim_time; // offset 0x10, size 0x4
    float damage_rot; // offset 0x14, size 0x4
    float death_time; // offset 0x18, size 0x4
    float vel_blur; // offset 0x1C, size 0x4
    float fade_dist; // offset 0x20, size 0x4
    float player_radius; // offset 0x24, size 0x4
    float hook_fade_alpha; // offset 0x28, size 0x4
    float hook_fade_time; // offset 0x2C, size 0x4
    class {
        // total size: 0xC
    public:
        float edge_zone; // offset 0x0, size 0x4
        float sway; // offset 0x4, size 0x4
        float decay; // offset 0x8, size 0x4
    } horizontal; // offset 0x30, size 0xC
    class {
        // total size: 0x10
    public:
        float time; // offset 0x0, size 0x4
        float anim_out_time; // offset 0x4, size 0x4
        float min_dist; // offset 0x8, size 0x4
        float max_dist; // offset 0xC, size 0x4
    } dive; // offset 0x3C, size 0x10
    class {
        // total size: 0x4
    public:
        float speed; // offset 0x0, size 0x4
    } camera; // offset 0x4C, size 0x4
    class {
        // total size: 0x8
    public:
        float spring; // offset 0x0, size 0x4
        float decay; // offset 0x4, size 0x4
    } turn; // offset 0x50, size 0x8
} fixed; // size: 0x58, address: 0x5CDE00 */

void oob_state::load_settings(xIniFile& ini)
{
    fixed.hand_model = xIniGetString(&ini, "player.state.out_of_bounds.hand_model", "hand");
    fixed.out_time = xIniGetFloat(&ini, "player.state.out_of_bounds.out_time", 9.0f);
    fixed.reset_time = xIniGetFloat(&ini, "player.state.out_of_bounds.reset_time", 3.0f);
    fixed.cam_dist = xIniGetFloat(&ini, "player.state.out_of_bounds.cam_dist", 3.0f);
    fixed.cam_height = xIniGetFloat(&ini, "player.state.out_of_bounds.cam_height", 1.0f);
    fixed.cam_pitch =
        (xIniGetFloat(&ini, "player.state.out_of_bounds.cam_pitch", 10.0f) * 0.017453292f);
    fixed.reorient_time = xIniGetFloat(&ini, "player.state.out_of_bounds.reorient_time", 0.25f);
    fixed.in_loc.x = xIniGetFloat(&ini, "player.state.out_of_bounds.in_loc.x", 0.2f);
    fixed.in_loc.y = xIniGetFloat(&ini, "player.state.out_of_bounds.in_loc.y", 0.0f);
    fixed.out_loc.x = xIniGetFloat(&ini, "player.state.out_of_bounds.out_loc.x", 1.0f);
    fixed.out_loc.y = xIniGetFloat(&ini, "player.state.out_of_bounds.out_loc.y", 0.0f);
    fixed.grab.in_wait_time =
        xIniGetFloat(&ini, "player.state.out_of_bounds.grab.in_wait_time", 0.0f);
    fixed.grab.in_vel = xIniGetFloat(&ini, "player.state.out_of_bounds.grab.in_vel", 2.0f);
    fixed.grab.in_stop_dist =
        xIniGetFloat(&ini, "player.state.out_of_bounds.grab.in_stop_dist", 0.05f);
    fixed.grab.out_wait_time =
        xIniGetFloat(&ini, "player.state.out_of_bounds.grab.out_wait_time", 0.5f);
    fixed.grab.out_vel = xIniGetFloat(&ini, "player.state.out_of_bounds.grab.out_vel", 0.5f);
    fixed.grab.out_start_dist =
        xIniGetFloat(&ini, "player.state.out_of_bounds.grab.out_start_dist", 0.1f);
    fixed.grab.fade_start_time =
        xIniGetFloat(&ini, "player.state.out_of_bounds.grab.fade_start_time", 0.0f);
    fixed.grab.fade_time = xIniGetFloat(&ini, "player.state.out_of_bounds.grab.fade_time", 2.0f);
    fixed.drop.in_vel = xIniGetFloat(&ini, "player.state.out_of_bounds.drop.in_vel", 0.5f);
    fixed.drop.in_stop_dist =
        xIniGetFloat(&ini, "player.state.out_of_bounds.drop.in_stop_dist", 0.1f);
    fixed.drop.out_wait_time =
        xIniGetFloat(&ini, "player.state.out_of_bounds.drop.out_wait_time", 0.5f);
    fixed.drop.out_vel = xIniGetFloat(&ini, "player.state.out_of_bounds.drop.out_vel", 2.0f);
    fixed.drop.out_start_dist =
        xIniGetFloat(&ini, "player.state.out_of_bounds.drop.out_start_dist", 0.05f);
    fixed.drop.fade_start_time =
        xIniGetFloat(&ini, "player.state.out_of_bounds.drop.fade_start_time", 0.0f);
    fixed.drop.fade_time = xIniGetFloat(&ini, "player.state.out_of_bounds.drop.fade_time", 1.5f);
    fixed.hand_size_x = xIniGetFloat(&ini, "player.state.out_of_bounds.hand_size_x", 0.4f);
    fixed.hand_size_y = xIniGetFloat(&ini, "player.state.out_of_bounds.hand_size_y", 0.4f);
    fixed.hand_yaw =
        (xIniGetFloat(&ini, "player.state.out_of_bounds.hand_yaw", 0.0f) * 0.017453292f);
    fixed.hand_pitch =
        (xIniGetFloat(&ini, "player.state.out_of_bounds.hand_pitch", 0.0f) * 0.017453292f);
    fixed.hand_roll =
        (xIniGetFloat(&ini, "player.state.out_of_bounds.hand_roll", 90.0f) * 0.017453292f);
}

void oob_state::init()
{
}

#define TODO_FIX_FLOAT 0.000000000000

oob_state::grab_state_type::substate_enum oob_state::grab_state_type::update_stopping(xScene& scene,
                                                                                      F32& dt)
{
    move_hand(dt);

    if (shared.vel > TODO_FIX_FLOAT)
    {
        return SS_STOPPING;
    }

    shared.loc = fixed.in_loc;

    shared.vel = TODO_FIX_FLOAT;
    shared.accel = TODO_FIX_FLOAT;

    // fade_start_time is probably incorrect, due to commented issue down below with cb.
    // It's probably supposed to be the variable above this, 'delay'
    fade_start_time = fixed.grab.out_wait_time;

    if (assume_player_is_stupid())
    {
        // callback 'cb' should be the correct paramater at 0x8 offset.
        // right now it's at 0x4 offset, so this will need to be fixed
        shared.tutorial->start_talk(xStrHash("TODO"), (ztalkbox::callback*)&cb, NULL);
        return SS_TUTORIAL;
    }

    return SS_STOPPED;
}

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
