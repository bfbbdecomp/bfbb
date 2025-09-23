#ifndef ZTALKBOX_H
#define ZTALKBOX_H

#include "zTextBox.h"
#include "zNPCTypeCommon.h"
#include "xIni.h"
#include "containers.h"
#include "zEntPlayer.h"

#include "xScene.h"

enum state_enum
{
    STATE_INVALID = -1,
    BEGIN_STATE = 0,
    STATE_START = 1,
    STATE_NEXT = 2,
    STATE_WAIT = 3,
    STATE_STOP = 4,
    END_STATE = 5,
    MAX_STATE = 5,
};

enum query_enum
{
    Q_SKIP,
    Q_YESNO
};

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
        ANSWER_4,
        ANSWER_5,
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
    const asset_type* asset;
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
    static void load_settings(xIniFile& ini);
    static void update_all(xScene& s, F32 dt);
    static void render_all();
    static void reset_all();
    static void clear_layout();
    static void permit(U32 add_flags, U32 remove_flags);
    static ztalkbox* get_active();

    void start_talk(U32 textID, callback*, zNPCCommon*); // FIXME: params not verified

    void load(const asset_type& tasset);
    void reset();
    void set_text(const char* text);
    void set_text(U32 textID);
    void add_text(U32 textID);
    void clear_text();
    void stop_talk();
    void stop_wait(U32 x);
    void show();
    void hide();
};

struct state_type
{
    state_enum type;
};

struct jot;

struct callback
{
    void (*render)(jot&, xtextbox&, F32, F32);
    void (*layout_update)(jot&, xtextbox&, xtextbox&);
    void (*render_update)(jot&, xtextbox&, xtextbox&);
};

struct split_tag
{
    substr tag;
    substr name;
    substr action;
    substr value;
};

struct tag_type
{
    substr name;
    void (*parse_tag)(jot&, xtextbox&, xtextbox&, split_tag&);
    void (*reset_tag)(jot&, xtextbox&, xtextbox&, split_tag&);
    void* context;
};

struct jot
{
    substr s;

    struct
    {
        // Offset: 0x8
        bool invisible : 1; // bit 24
        bool ethereal : 1; // bit 25
        bool merge : 1; // bit 26
        bool word_break : 1; // bit 27
        bool word_end : 1; // bit 28
        bool line_break : 1; // bit 29
        bool stop : 1; // bit 30
        bool tab : 1; // bit 31

        // Offset: 0x9
        bool insert : 1; // bit 24
        bool dynamic : 1; // bit 25
        bool page_break : 1; // bit 26
        bool stateful : 1; // bit 27
        U16 dummy : 4; // bits 28-31
    } flag;
    // Offset: 0xC
    U16 context_size;

    // Offset: 0x10
    void* context;
    basic_rect<F32> bounds;
    basic_rect<F32> render_bounds;
    callback* cb;
    tag_type* tag;

    void intersect_flags(const jot& other);
    void reset_flags();
};

struct jot_line
{
    basic_rect<F32> bounds;
    F32 baseline;
    U32 first;
    U32 last;
    U8 page_break;
};

struct layout
{
    xtextbox tb; // offset 0x0, size 0x68
    jot _jots[512]; // offset 0x68, size 0x7000
    U32 _jots_size; // offset 0x7068, size 0x4
    jot_line _lines[128]; // offset 0x706C, size 0x1000
    U32 _lines_size; // offset 0x806C, size 0x4
    U8 context_buffer[1024]; // offset 0x8070, size 0x400
    U32 context_buffer_size; // offset 0x8470, size 0x4
    U16 dynamics[64]; // offset 0x8474, size 0x80
    U32 dynamics_size; // offset 0x84F4, size 0x4
};

struct wait_context
{
    struct
    {
        U8 time : 1; // offset 0x0, size 0x1
        U8 prompt : 1; // offset 0x0, size 0x1
        U8 sound : 1; // offset 0x0, size 0x1
        U8 event : 1; // offset 0x0, size 0x1
        U16 pad : 12; // offset 0x0, size 0x2
    } type; // offset 0x0, size 0x2
    U8 need; // offset 0x2, size 0x1
    F32 delay; // offset 0x4, size 0x4
    U32 event_mask; // offset 0x8, size 0x4
    query_enum query; // offset 0xC, size 0x4
};

struct sound_queue
{
    U32 _playing[5];
    S32 head;
    S32 tail;
};

struct trigger_pair
{
    ztalkbox* origin;
    U32 event;
};

struct shared_type
{
    S32 flags; // offset 0x0, size 0x4
    U32 permit; // offset 0x4, size 0x4
    ztalkbox* active; // offset 0x8, size 0x4
    state_type* state; // offset 0xC, size 0x4
    state_type* states[5]; // offset 0x10, size 0x14
    layout lt; // offset 0x24, size 0x84F8
    S32 begin_jot; // offset 0x851C, size 0x4
    S32 end_jot; // offset 0x8520, size 0x4
    S32 page_end_jot; // offset 0x8524, size 0x4
    wait_context wait; // offset 0x8528, size 0x10
    wait_context auto_wait; // offset 0x8538, size 0x10
    U32 wait_event_mask; // offset 0x8548, size 0x4
    F32 prompt_delay; // offset 0x854C, size 0x4
    F32 quit_delay; // offset 0x8550, size 0x4
    U8 prompt_ready; // offset 0x8554, size 0x1
    U8 quit_ready; // offset 0x8555, size 0x1
    U8 stream_locked[2]; // offset 0x8556, size 0x2
    S32 next_stream; // offset 0x8558, size 0x4
    // The below builds perfectly fine, unsure if its 100% correct though
    sound_queue<4> sounds; // offset 0x855C, size 0x1C
    U8 allow_quit; // offset 0x8578, size 0x1
    U8 quitting; // offset 0x8579, size 0x1
    U8 delay_events; // offset 0x857A, size 0x1
    callback* cb; // offset 0x857C, size 0x4
    // The below builds perfectly fine, unsure if its 100% correct though
    fixed_queue<trigger_pair, 32> triggered; // offset 0x8580, size 0x110
    F32 volume; // offset 0x8690, size 0x4
    zNPCCommon* speak_npc; // offset 0x8694, size 0x4
    U32 speak_player; // offset 0x8698, size 0x4
};

#endif
