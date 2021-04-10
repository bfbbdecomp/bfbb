#ifndef ZTALKBOX_H
#define ZTALKBOX_H

#include "zTextBox.h"
#include "zNPCTypeCommon.h"

#include "../Core/x/xScene.h"

struct ztalkbox : xBase
{
    struct asset_type : xDynAsset
    {
        uint32 dialog_box;
        uint32 prompt_box;
        uint32 quit_box;
        bool trap : 8;
        bool pause : 8;
        bool allow_quit : 8;
        bool trigger_pads : 8;
        bool page : 8;
        bool show : 8;
        bool hide : 8;
        bool audio_effect : 8;
        uint32 teleport;
        struct
        {
            struct
            {
                bool time : 8;
                bool prompt : 8;
                bool sound : 8;
                bool event : 8;
            } type;
            float32 delay;
            int32 which_event;
        } auto_wait;
        struct
        {
            uint32 skip;
            uint32 noskip;
            uint32 quit;
            uint32 noquit;
            uint32 yesno;
        } prompt;
    };

    enum answer_enum
    {
        ANSWER_CONTINUE,
        ANSWER_YES,
        ANSWER_NO
    };

    struct callback
    {
        callback();
        virtual void on_signal(uint32);
        virtual void on_start();
        virtual void on_stop();
        virtual void on_answer(answer_enum);
    };

    struct
    {
        bool visible : 1;
    } flag;
    asset_type* asset;
    ztextbox* dialog_box;
    ztextbox* prompt_box;
    ztextbox* quit_box;
    struct
    {
        const char* skip;
        const char* noskip;
        const char* quit;
        const char* noquit;
        const char* yesno;
    } prompt;
    zNPCCommon* npc;

    static void init();
    static void load(xBase& data, xDynAsset& asset, ulong32);
    static void update_all(xScene& s, float32 dt);
    static void render_all();
    static void reset_all();
    static void permit(uint32 add_flags, uint32 remove_flags);

    void stop_talk();
};

#endif