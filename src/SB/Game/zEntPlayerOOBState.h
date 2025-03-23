#ifndef ZENTPLAYEROOBSTATE_H
#define ZENTPLAYEROOBSTATE_H

#include "xserializer.h"
#include "zTalkBox.h"
#include "zTaskBox.h"

extern bool oob_player_teleported;

namespace oob_state
{
    bool render();
    void fx_render();
    void read_persistent(xSerial& s);
    void write_persistent(xSerial& s);

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

            void start();
            void stop();
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
            float reorient_time;
            float angle_delta;
            float delay;
            float fade_start_time;
            float fade_time;
            unsigned int scene_reset;

            // Todo: this is not in the DWARF, but is required for
            //       tutorial_callback::on_stop to match. Probably
            //       not correct.
            char pad[4];

            unsigned char finished_tutorial;

            substate_enum (*updatess)(grab_state_type&, xScene&, float&)[10];
            bool update_reorient(xScene&, F32&);
            substate_enum update_stopping(xScene&, float&);

            void start();
            void stop();
        };

        struct _class_9
        {
            int flags;
            state_type* state;
            unsigned char control;
            state_type* states[4];
            float out_time;
            float max_out_time;
            float reset_time;
            xModelInstance* model;
            xVec2 loc;
            xVec2 dir;
            float fade_alpha;
            unsigned char render_hand;
            unsigned char vertical;
            float vel;
            float accel;
            ztalkbox* tutorial;
            struct
            {
                float near_d;
                float near_h;
                float near_pitch;
                float far_d;
                float far_h;
                float far_pitch;
                xMat4x3* tgt_mat;
                xMat4x3* tgt_omat;
            } cam_data;
        };

        struct tagFixed
        {
            float out_time;
            float reset_time;
            float cam_dist;
            float cam_height;
            float cam_pitch;
            float reorient_time;
            char* hand_model;
            xVec2 in_loc;
            xVec2 out_loc;
            struct
            {
                float in_wait_time;
                float in_vel;
                float in_stop_dist;
                float out_wait_time;
                float out_vel;
                float out_start_dist;
                float fade_start_time;
                float fade_time;
            } grab;
            struct
            {
                float in_vel;
                float in_stop_dist;
                float out_wait_time;
                float out_vel;
                float out_start_dist;
                float fade_start_time;
                float fade_time;
            } drop;
            float hand_size_x;
            float hand_size_y;
            float hand_yaw;
            float hand_pitch;
            float hand_roll;
        };
    } // namespace

    struct idiot_level_data
    {
        bool triggered; // offset 0x0, size 0x1
        U32 scene; // offset 0x4, size 0x4
    };

} // namespace oob_state

#endif
