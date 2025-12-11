#ifndef ZENTPLAYEROOBSTATE_H
#define ZENTPLAYEROOBSTATE_H

#include "xserializer.h"
#include "zTalkBox.h"
#include "zTaskBox.h"
#include "zCamera.h"
#include "zCameraTweak.h"

extern bool oob_player_teleported;

namespace oob_state
{
    bool render();
    void fx_render();
    void read_persistent(xSerial& s);
    void write_persistent(xSerial& s);
    void load_settings(xIniFile& ini);
    void init();

    float oob_timer();

    bool IsPlayerInControl();

    struct callback
    {
        virtual void on_stop();
    };

    enum state_enum
    {
        STATE_INVALID = -1,
        BEGIN_STATE,
        STATE_IN = 0,
        STATE_OUT,
        STATE_GRAB,
        STATE_DROP,
        END_STATE,
        MAX_STATE = 0x4
    };

    namespace
    {
        struct state_type
        {
            state_enum type;

            virtual void start();
            virtual void stop();
            virtual state_enum update(xScene& scene, F32& dt);
        };

        struct in_state_type : state_type
        {
            void start();
            void stop();
        };

        struct out_state_type : state_type
        {
            void start();
            void stop();
        };

        struct grab_state_type : state_type
        {
            enum substate_enum
            {
                SS_INVALID = -1,
                SS_REORIENT,
                SS_BEGIN_WAIT,
                SS_MOVING_IN,
                SS_STOPPING,
                SS_STOPPED,
                SS_TUTORIAL,
                SS_STARTING,
                SS_MOVING_OUT,
                SS_START_FADE_OUT,
                SS_FADE_OUT,
                MAX_SS
            };

            struct tutorial_callback : callback
            {
                grab_state_type& owner;

                void on_stop();
            };

            tutorial_callback cb;
            substate_enum move_substate;
            substate_enum fade_substate;
            xVec3 player_start;
            F32 reorient_time;
            F32 angle_delta;
            F32 delay;
            F32 fade_start_time;
            F32 fade_time;
            U32 scene_reset;

            // Todo: this is not in the DWARF, but is required for
            //       tutorial_callback::on_stop to match. Probably
            //       not correct.
            char pad[4];

            U8 finished_tutorial;

            substate_enum (*updatess)(grab_state_type&, xScene&, float&)[10];
            bool update_reorient(xScene&, F32&);
            substate_enum update_stopping(xScene&, float&);

            void start();
            void stop();
        };

        struct drop_state_type : state_type
        {
            enum substate_enum
            {
                SS_INVALID = -1,
                SS_MOVING_IN,
                SS_STOPPING,
                SS_STOPPED,
                SS_STARTING,
                SS_MOVING_OUT,
                SS_START_FADE_IN,
                SS_FADE_IN,
                MAX_SS,
            };

            substate_enum move_substate;
            substate_enum fade_substate;
            xVec3 player_start;
            F32 stop_time;
            F32 fade_start_time;
            F32 fade_time;
            substate_enum (*updatess)(drop_state_type&, xScene&, F32&)[7];

            drop_state_type();
            virtual void start();
            virtual void stop();
            virtual state_enum update(xScene& scene, F32& dt);

            static substate_enum supdate_fade_in(drop_state_type&, xScene&, F32&);
            substate_enum update_fade_in(xScene&, F32&);
            static substate_enum supdate_start_fade_in(drop_state_type&, xScene&, F32&);
            substate_enum update_start_fade_in(xScene&, F32&);
            static substate_enum supdate_moving_out(drop_state_type&, xScene&, F32&);
            substate_enum update_moving_out(xScene&, F32&);
            static substate_enum supdate_starting(drop_state_type&, xScene&, F32&);
            substate_enum update_starting(xScene&, F32&);
            static substate_enum supdate_stopped(drop_state_type&, xScene&, F32&);
            substate_enum update_stopped(xScene&, F32&);
            static substate_enum supdate_stopping(drop_state_type&, xScene&, F32&);
            substate_enum update_stopping(xScene&, F32&);
            static substate_enum supdate_moving_in(drop_state_type&, xScene&, F32&);
            substate_enum update_moving_in(xScene&, F32&);
        };

        struct _class_9
        {
            S32 flags;
            state_type* state;
            U8 control;
            state_type* states[4];
            F32 out_time;
            F32 max_out_time;
            F32 reset_time;
            xModelInstance* model;
            xVec2 loc;
            xVec2 dir;
            F32 fade_alpha;
            U8 render_hand;
            U8 vertical;
            F32 vel;
            F32 accel;
            ztalkbox* tutorial;
            struct
            {
                F32 near_d;
                F32 near_h;
                F32 near_pitch;
                F32 far_d;
                F32 far_h;
                F32 far_pitch;
                xMat4x3* tgt_mat;
                xMat4x3* tgt_omat;
            } cam_data;
        };

        struct tagFixed
        {
            F32 out_time;
            F32 reset_time;
            F32 cam_dist;
            F32 cam_height;
            F32 cam_pitch;
            F32 reorient_time;
            char* hand_model;
            xVec2 in_loc;
            xVec2 out_loc;
            struct
            {
                F32 in_wait_time;
                F32 in_vel;
                F32 in_stop_dist;
                F32 out_wait_time;
                F32 out_vel;
                F32 out_start_dist;
                F32 fade_start_time;
                F32 fade_time;
            } grab;
            struct
            {
                F32 in_vel;
                F32 in_stop_dist;
                F32 out_wait_time;
                F32 out_vel;
                F32 out_start_dist;
                F32 fade_start_time;
                F32 fade_time;
            } drop;
            F32 hand_size_x;
            F32 hand_size_y;
            F32 hand_yaw;
            F32 hand_pitch;
            F32 hand_roll;
        };
    } // namespace

    struct idiot_level_data
    {
        bool triggered; // offset 0x0, size 0x1
        U32 scene; // offset 0x4, size 0x4
    };

} // namespace oob_state

#endif
