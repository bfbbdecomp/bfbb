#ifndef ZTALKBOX_H
#define ZTALKBOX_H

#include "zTextBox.h"
#include "zNPCTypeCommon.h"

#include "xScene.h"

struct ztalkbox : xBase
{
    struct asset_type : xDynAsset
    {
        U32 dialog_box;
        U32 prompt_box;
        U32 quit_box;
        bool trap : 8;
        bool pause : 8;
        bool allow_quit : 8;
        bool trigger_pads : 8;
        bool page : 8;
        bool show : 8;
        bool hide : 8;
        bool audio_effect : 8;
        U32 teleport;
        struct
        {
            struct
            {
                bool time : 8;
                bool prompt : 8;
                bool sound : 8;
                bool event : 8;
            } type;
            F32 delay;
            S32 which_event;
        } auto_wait;
        struct
        {
            U32 skip;
            U32 noskip;
            U32 quit;
            U32 noquit;
            U32 yesno;
        } prompt;
    };

    enum answer_enum
    {
        ANSWER_CONTINUE,
        ANSWER_YES,
        ANSWER_NO,
        ANSWER_3,
    };

    struct callback
    {
        callback();
        virtual void on_signal(U32);
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
    static void load(xBase& data, xDynAsset& asset, size_t);
    static void update_all(xScene& s, F32 dt);
    static void render_all();
    static void reset_all();
    static void clear_layout();
    static void permit(U32 add_flags, U32 remove_flags);
    static ztalkbox* get_active();


    void start_talk(U32 textID, callback*, zNPCCommon*); // FIXME: params not verified
    void stop_talk();

    void set_text(U32 textID);
};

#endif
