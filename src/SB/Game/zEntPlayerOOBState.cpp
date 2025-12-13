#include "zEntPlayerOOBState.h"
#include "zGlobals.h"

#include "xMath.h"
#include "xMathInlines.h"
#include "zSurface.h"
#include "zRenderState.h"
#include "zEntPlayerBungeeState.h"

#include <types.h>
#include <rwplcore.h>

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

        static void render_model(xModelInstance& model, const xVec3& loc, const xVec3& size,
                                 const xVec3& ypr /*Yaw Pitch Roll*/)
        {
            basic_rect<F32> screen_rect = { 0.0f, 0.0f, 1.0f, 1.0f };
            screen_rect.x = loc.x;
            screen_rect.y = loc.y;

            xVec3 from = { 0.0f, 0.0f, 1.0f };

            xVec3 to = { 0.0f, 0.0f, 0.0f };
            to.z = -loc.z;

            xMat3x3 scaledMat;
            xMat3x3 eulerMat;
            xMat4x3 outMat;
            xMat3x3ScaleC(&scaledMat, size.x * (1.0f + loc.z), size.y * (1.0f + loc.z),
                          1.0f + loc.z);
            xMat3x3Euler(&eulerMat, &ypr);
            xMat3x3Mul(&outMat, &eulerMat, &scaledMat);

            outMat.pos = 0.0f;
            outMat.flags = 0x0;
            xModelSetFrame(&model, &outMat);

            xModelRender2D(model, screen_rect, from, to);
        }

        static void move_up(xVec3& vec, F32 scale)
        {
            xMat4x3& camMat = globals.camera.mat;

            xVec3 localCoords;
            xMat4x3Tolocal(&localCoords, &camMat, &vec);

            vec += camMat.up * scale * localCoords.z;
        }

        static void move_right(xVec3& vec, F32 scale)
        {
            xMat4x3& camMat = globals.camera.mat;

            xVec3 localCoords;
            xMat4x3Tolocal(&localCoords, &camMat, &vec);

            vec += camMat.right * scale * localCoords.z * (4.0f / 3.0f);
        }

        static void update_max_out_time(const xSurface& surface)
        {
            F32 delay = zSurfaceGetOutOfBoundsDelay(surface);
            if (delay < 0.0f)
            {
                delay = fixed.out_time;
            }

            F32 old_max_out_time = shared.max_out_time;
            shared.max_out_time = delay;
            shared.out_time -= old_max_out_time - delay;
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

        static void move_hand(F32 dt)
        {
            F32 old_vel = shared.vel;

            shared.vel = shared.accel * dt + old_vel;
            shared.loc += shared.dir * (0.5f * shared.accel * dt * dt + old_vel * dt);
        }

        static void set_rect_verts(rwGameCube2DVertex*, F32, F32, F32, F32, iColor_tag c, F32 nsz,
                                   F32 rcz);
        static void set_rect_vert(rwGameCube2DVertex&, F32 x, F32 y, F32 z, iColor_tag c, F32 rcz);
        static void render_fade()
        {
            iColor_tag color = {};
            color.a = 255.0f * (1.0f - shared.fade_alpha) + 0.5f;

            zRenderState(SDRS_OOBFade);
            RwRenderStateSet(rwRENDERSTATETEXTURERASTER, NULL);
            F32 nsz = 1.0f / ((RwCamera*)RWSRCGLOBAL(curCamera))->farPlane;
            F32 rcz = RwIm2DGetFarScreenZ();

            RwIm2DVertex vert[4];
            set_rect_verts((rwGameCube2DVertex*)vert, 0.0f, 0.0f, 640.0f, 480.0f, color, rcz, nsz);
            RwIm2DRenderPrimitive(rwPRIMTYPETRISTRIP, (RwIm2DVertex*)vert, 4);
        }

        static void set_rect_verts(rwGameCube2DVertex* verts, F32 x, F32 y, F32 w, F32 h,
                                   iColor_tag c, F32 rcz, F32 nsz)
        {
            set_rect_vert(verts[0], x, y, rcz, c, nsz);
            set_rect_vert(verts[1], x, y + h, rcz, c, nsz);
            set_rect_vert(verts[2], x + w, y, rcz, c, nsz);
            set_rect_vert(verts[3], x + w, y + h, rcz, c, nsz);
        }

        static void set_rect_vert(rwGameCube2DVertex& vert, F32 x, F32 y, F32 z, iColor_tag c,
                                  F32 rcz)
        {
            vert.x = x;
            vert.y = y;
            vert.z = z;
            vert.emissiveColor.red = c.r;
            vert.emissiveColor.green = c.g;
            vert.emissiveColor.blue = c.b;
            vert.emissiveColor.alpha = c.a;
        }

        static void render_ghost()
        {
            xEnt& ent = globals.player.ent;

            iDrawSetFBMSK(-1);
            zRenderState(SDRS_OOBPlayerZ);

            xModelInstance* xm = ent.model;
            while (xm != NULL)
            {
                RpAtomic& model = *xm->Data;

                if (xm->Flags & 0x1)
                {
                    iModelRender(&model, xm->Mat);
                }

                xm = xm->Next;
            }

            iDrawSetFBMSK(0);
            zRenderState(SDRS_OOBPlayerAlpha);
            xLightKit_Enable(ent.lightKit, globals.currWorld);

            U8 alpha = 255.0f * (1.0f - shared.fade_alpha) + 0.5f;
            alpha &= 0xFF;

            xm = ent.model;
            while (xm != NULL)
            {
                RpAtomic& model = *xm->Data;

                if (xm->Flags & 0x1)
                {
                    iModelSetMaterialAlpha(&model, alpha);
                    iModelRender(&model, xm->Mat);
                    iModelResetMaterial(&model);
                }

                xm = xm->Next;
            }

            xLightKit_Enable(NULL, globals.currWorld);
        }

        static void render_hand()
        {
            zRenderState(SDRS_OOBHand);

            xVec3 modelLoc = { 0.0f, 0.0f, 0.0f };
            xVec3 modelSize = { 0.0f, 0.0f, 1.0f };
            xVec3 modelYpr = { 0.0f, 0.0f, 0.0f };

            modelLoc.x = shared.loc.x;
            modelLoc.y = shared.loc.y;

            modelSize.x = fixed.hand_size_x;
            modelSize.y = fixed.hand_size_y;

            modelYpr.x = fixed.hand_yaw;
            modelYpr.y = fixed.hand_pitch;
            modelYpr.z = fixed.hand_roll;

            render_model(*shared.model, modelLoc, modelSize, modelYpr);
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

namespace oob_state
{
    namespace
    {
        drop_state_type::drop_state_type() : state_type(STATE_DROP)
        {
            this->updatess[0] = &supdate_moving_in;
            this->updatess[1] = &supdate_stopping;
            this->updatess[2] = &supdate_stopped;
            this->updatess[3] = &supdate_starting;
            this->updatess[4] = &supdate_moving_out;
            this->updatess[5] = &supdate_start_fade_in;
            this->updatess[6] = &supdate_fade_in;
        }

        drop_state_type::substate_enum drop_state_type::supdate_fade_in(drop_state_type& gst,
                                                                        xScene& scn, F32& dt)
        {
            return gst.update_fade_in(scn, dt);
        }

        drop_state_type::substate_enum drop_state_type::update_fade_in(xScene& scn, F32& dt)
        {
            this->fade_time -= dt;
            shared.fade_alpha = 1.0f - this->fade_time / fixed.drop.fade_time;

            if (shared.fade_alpha > 1.0f)
            {
                shared.fade_alpha = 1.0f;
            }

            if (this->fade_time > 0.0f)
            {
                return SS_FADE_IN;
            }

            dt += this->fade_time;
            return SS_INVALID;
        }

        drop_state_type::substate_enum drop_state_type::supdate_start_fade_in(drop_state_type& gst,
                                                                              xScene& scn, F32& dt)
        {
            return gst.update_start_fade_in(scn, dt);
        }

        drop_state_type::substate_enum drop_state_type::update_start_fade_in(xScene& scn, F32& dt)
        {
            this->fade_start_time -= dt;

            if (this->fade_start_time > 0.0f)
            {
                return SS_START_FADE_IN;
            }

            dt += this->fade_start_time;
            return SS_FADE_IN;
        }

        drop_state_type::substate_enum drop_state_type::supdate_moving_out(drop_state_type& gst,
                                                                           xScene& scn, F32& dt)
        {
            return gst.update_moving_out(scn, dt);
        }

        drop_state_type::substate_enum drop_state_type::update_moving_out(xScene& scn, F32& dt)
        {
            move_hand(dt);

            F32 projection = (shared.loc - fixed.out_loc).dot(shared.dir);
            if (projection >= 0.0f)
            {
                return SS_MOVING_OUT;
            }

            dt = 0.0f;
            return SS_INVALID;
        }

        drop_state_type::substate_enum drop_state_type::supdate_starting(drop_state_type& gst,
                                                                         xScene& scn, F32& dt)
        {
            return gst.update_starting(scn, dt);
        }

        drop_state_type::substate_enum drop_state_type::update_starting(xScene& scn, F32& dt)
        {
            move_hand(dt);

            if (shared.vel > -fixed.drop.out_vel)
            {
                return SS_STARTING;
            }

            shared.vel = -fixed.drop.out_vel;
            shared.accel = 0.0f;
            return SS_MOVING_OUT;
        }

        drop_state_type::substate_enum drop_state_type::supdate_stopped(drop_state_type& gst,
                                                                        xScene& scn, F32& dt)
        {
            return gst.update_stopped(scn, dt);
        }

        drop_state_type::substate_enum drop_state_type::update_stopped(xScene& scn, F32& dt)
        {
            this->stop_time -= dt;

            if (this->stop_time > 0.0f)
            {
                return SS_STOPPED;
            }

            dt += this->stop_time;
            shared.accel =
                (-fixed.drop.out_vel * fixed.drop.out_vel) / (2.0f * fixed.drop.out_start_dist);
            return SS_STARTING;
        }

        drop_state_type::substate_enum drop_state_type::supdate_stopping(drop_state_type& gst,
                                                                         xScene& scn, F32& dt)
        {
            return gst.update_stopping(scn, dt);
        }

        drop_state_type::substate_enum drop_state_type::update_stopping(xScene& scn, F32& dt)
        {
            move_hand(dt);
            if (shared.vel > 0.0f)
            {
                return SS_STOPPING;
            }

            shared.loc = fixed.in_loc;
            shared.vel = 0.0f;
            shared.accel = 0.0f;
            this->stop_time = fixed.drop.out_wait_time;

            return SS_STOPPED;
        }

        drop_state_type::substate_enum drop_state_type::supdate_moving_in(drop_state_type& gst,
                                                                          xScene& scn, F32& dt)
        {
            return gst.update_moving_in(scn, dt);
        }

        drop_state_type::substate_enum drop_state_type::update_moving_in(xScene& scn, F32& dt)
        {
            move_hand(dt);

            xVec2 in_out_path = fixed.in_loc - fixed.out_loc;
            xVec2 norm = in_out_path.normal();

            F32 projection = norm.dot(fixed.in_loc - shared.loc);
            if (projection > fixed.grab.in_stop_dist)
            {
                return SS_MOVING_IN;
            }
            else if (projection <= 0.0f)
            {
                shared.vel = 0.0f;
                shared.loc = fixed.in_loc;
                shared.accel = 0.0f;
            }
            else
            {
                shared.accel = (-shared.vel * shared.vel) / (2.0f * projection);
            }

            return SS_STOPPING;
        }

        state_type::state_type(state_enum state)
        {
            this->type = state;
        }

        grab_state_type::grab_state_type() : state_type(STATE_GRAB), cb(*this)
        {
            this->updatess[0] = &supdate_reorient;
            this->updatess[1] = &supdate_begin_wait;
            this->updatess[2] = &supdate_moving_in;
            this->updatess[3] = &supdate_stopping;
            this->updatess[4] = &supdate_stopped;
            this->updatess[5] = &supdate_tutorial;
            this->updatess[6] = &supdate_starting;
            this->updatess[7] = &supdate_moving_out;
            this->updatess[8] = &supdate_start_fade_out;
            this->updatess[9] = &supdate_fade_out;
        }

        grab_state_type::substate_enum grab_state_type::supdate_fade_out(grab_state_type& gst,
                                                                         xScene& scene, F32& dt)
        {
            return gst.update_fade_out(scene, dt);
        }

        grab_state_type::substate_enum grab_state_type::update_fade_out(xScene& scene, F32& dt)
        {
            this->fade_time -= dt;
            shared.fade_alpha = this->fade_time / fixed.grab.fade_time;

            if (shared.fade_alpha < 0.0f)
            {
                shared.fade_alpha = 0.0f;
            }

            if (this->fade_time > 0.0f)
            {
                return SS_FADE_OUT;
            }

            dt += this->fade_time;
            return SS_INVALID;
        }

        grab_state_type::substate_enum
        grab_state_type::supdate_start_fade_out(grab_state_type& gst, xScene& scene, F32& dt)
        {
            return gst.update_start_fade_out(scene, dt);
        }

        grab_state_type::substate_enum grab_state_type::update_start_fade_out(xScene& scene,
                                                                              F32& dt)
        {
            this->fade_start_time -= dt;

            if (this->fade_start_time > 0.0f)
            {
                return SS_START_FADE_OUT;
            }

            dt += this->fade_start_time;
            return SS_FADE_OUT;
        }

        grab_state_type::substate_enum grab_state_type::supdate_moving_out(grab_state_type& gst,
                                                                           xScene& scene, F32& dt)
        {
            return gst.update_moving_out(scene, dt);
        }

        grab_state_type::substate_enum grab_state_type::update_moving_out(xScene& scene, F32& dt)
        {
            move_hand(dt);

            if ((shared.loc - fixed.out_loc).dot(shared.dir) >= 0.0f)
            {
                return SS_MOVING_OUT;
            }

            dt = 0.0f;
            return SS_INVALID;
        }

        grab_state_type::substate_enum grab_state_type::supdate_starting(grab_state_type& gst,
                                                                         xScene& scene, F32& dt)
        {
            return gst.update_starting(scene, dt);
        }

        grab_state_type::substate_enum grab_state_type::update_starting(xScene& scene, F32& dt)
        {
            move_hand(dt);

            if (shared.vel > -fixed.grab.out_vel)
            {
                return SS_STARTING;
            }

            shared.vel = -fixed.grab.out_vel;
            shared.accel = 0.0f;
            return SS_MOVING_OUT;
        }

        grab_state_type::substate_enum grab_state_type::supdate_tutorial(grab_state_type& gst,
                                                                         xScene& scene, F32& dt)
        {
            return gst.update_tutorial(scene, dt);
        }

        grab_state_type::substate_enum grab_state_type::update_tutorial(xScene& scene, F32& dt)
        {
            this->delay -= dt;
            if (!this->finished_tutorial || this->delay > 0.0f)
            {
                return SS_TUTORIAL;
            }

            dt = 0.0f;
            shared.accel =
                (-fixed.grab.out_vel * fixed.grab.out_vel) / (2.0f * fixed.grab.out_start_dist);
            return SS_STARTING;
        }

        grab_state_type::substate_enum grab_state_type::supdate_stopped(grab_state_type& gst,
                                                                        xScene& scene, F32& dt)
        {
            return gst.update_stopped(scene, dt);
        }

        grab_state_type::substate_enum grab_state_type::update_stopped(xScene& scene, F32& dt)
        {
            this->delay -= dt;

            if (this->delay > 0.0f)
            {
                return SS_STOPPED;
            }

            dt += this->delay;
            shared.accel =
                (-fixed.grab.out_vel * fixed.grab.out_vel) / (2.0f * fixed.grab.out_start_dist);
            return SS_STARTING;
        }

        grab_state_type::substate_enum grab_state_type::supdate_stopping(grab_state_type& gst,
                                                                         xScene& scene, F32& dt)
        {
            return gst.update_stopping(scene, dt);
        }

        grab_state_type::substate_enum grab_state_type::update_stopping(xScene& scene, F32& dt)
        {
            move_hand(dt);

            if (shared.vel > 0.0f)
            {
                return SS_STOPPING;
            }

            shared.loc = fixed.in_loc;

            shared.vel = 0.0f;
            shared.accel = 0.0f;

            this->delay = fixed.grab.out_wait_time;

            if (assume_player_is_stupid())
            {
                shared.tutorial->start_talk(xStrHash("TODO"), (ztalkbox::callback*)&cb, NULL);
                return SS_TUTORIAL;
            }

            return SS_STOPPED;
        }

        grab_state_type::substate_enum grab_state_type::supdate_moving_in(grab_state_type& gst,
                                                                          xScene& scene, F32& dt)
        {
            return gst.update_moving_in(scene, dt);
        }

        grab_state_type::substate_enum grab_state_type::update_moving_in(xScene& scene, F32& dt)
        {
            move_hand(dt);

            xVec2 in_out_path = fixed.in_loc - fixed.out_loc;
            xVec2 norm = in_out_path.normal();

            F32 projection = norm.dot(fixed.in_loc - shared.loc);
            if (projection > fixed.grab.in_stop_dist)
            {
                return SS_MOVING_IN;
            }
            else if (projection <= 0.0f)
            {
                shared.vel = 0.0f;
                shared.loc = fixed.in_loc;
                shared.accel = 0.0f;
            }
            else
            {
                shared.accel = (-shared.vel * shared.vel) / (2.0f * projection);
            }

            return SS_STOPPING;
        }

        grab_state_type::substate_enum grab_state_type::supdate_begin_wait(grab_state_type& gst,
                                                                           xScene& scene, F32& dt)
        {
            return gst.update_begin_wait(scene, dt);
        }

        grab_state_type::substate_enum grab_state_type::update_begin_wait(xScene& scene, F32& dt)
        {
            this->delay -= dt;
            if (this->delay > 0.0f)
            {
                return SS_BEGIN_WAIT;
            }

            shared.render_hand = true;
            return SS_MOVING_IN;
        }

        grab_state_type::substate_enum grab_state_type::supdate_reorient(grab_state_type& gst,
                                                                         xScene& scene, F32& dt)
        {
            return gst.update_reorient(scene, dt);
        }

        grab_state_type::substate_enum oob_state::grab_state_type::update_reorient(xScene& scene,
                                                                                   F32& dt)
        {
            return SS_BEGIN_WAIT;
        };

        grab_state_type::tutorial_callback::tutorial_callback(grab_state_type& owner) : owner(owner)
        {
        }
        
        out_state_type::out_state_type() : state_type(STATE_OUT)
        {
        }

        in_state_type::in_state_type() : state_type(STATE_IN)
        {
        }

        void state_type::start()
        {
        };

        void state_type::stop()
        {
        };
    } // namespace
} // namespace oob_state

bool oob_state::IsPlayerInControl()
{
    return oob_state::shared.control == 0;
}

F32 oob_state::oob_timer()
{
    if (shared.reset_time == fixed.reset_time)
    {
        return shared.out_time;
    }

    return -1.0f;
}

bool oob_state::render()
{
    if ((shared.flags & 0x3) != 3)
    {
        return false;
    }

    if (!shared.control)
    {
        return false;
    }

    xLightKit_Enable(globals.player.ent.lightKit, globals.currWorld);
    xEntRender(&globals.player.ent);
    xLightKit_Enable(NULL, globals.currWorld);

    return true;
}

void oob_state::fx_render()
{
    if ((shared.flags & 0x3) != 3)
    {
        return;
    }

    if (shared.control && shared.fade_alpha < 1.0f)
    {
        render_fade();
        render_ghost();
    }
    
    if (shared.render_hand && shared.model != NULL)
    {
        render_hand();
    }
}

void oob_state::force_start()
{
    if ((shared.flags & 0x7) == 0x3 && !bungee_state::active())
    {
        if (globals.player.ControlOff & 0x8000)
        {
            shared.flags |= 0x8;
            oob_player_teleported = false;
        }
        else
        {
            shared.flags &= ~0x8;
            shared.state->stop();
            shared.state = shared.states[2];
            shared.state->start();
        }
    }
}

void oob_state::read_persistent(xSerial& s)
{
    for (U32 i = 0; i < 6; i++)
    {
        S32 val;
        s.Read_b1(&val);

        idiot_levels[i].triggered = (bool)val;
    }
}

void oob_state::write_persistent(xSerial& s)
{
    for (U32 i = 0; i < 6; i++)
    {
        s.Write_b1((bool)idiot_levels[i].triggered);
    }
}

void oob_state::in_state_type::start()
{
    shared.reset_time = FLOAT_MAX;
    shared.out_time = FLOAT_MAX;
    shared.control = 0;
};

void oob_state::in_state_type::stop() {

};

void oob_state::out_state_type::start()
{
    shared.out_time = shared.max_out_time;
    shared.reset_time = fixed.reset_time;
};

void oob_state::out_state_type::stop() {

};

namespace oob_state
{
    namespace
    {
        void grab_state_type::start()
        {
        }

        void grab_state_type::stop()
        {
        }

        state_enum grab_state_type::update(xScene& scene, F32& dt)
        {
            return STATE_DROP;
        }

        void drop_state_type::start()
        {
        }

        void drop_state_type::stop()
        {
        }

        state_enum drop_state_type::update(xScene& scene, F32& dt)
        {
            return STATE_DROP;
        }
    } // namespace
} // namespace oob_state

WEAK F32 xVec2::dot(const xVec2& b) const
{
    return (x * b.x) + (y * b.y);
}

WEAK xVec2& xVec2::normalize()
{
    *this /= length();
    return *this;
}
