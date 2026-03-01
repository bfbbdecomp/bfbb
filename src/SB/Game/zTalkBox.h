#ifndef ZTALKBOX_H
#define ZTALKBOX_H

#include "zTextBox.h"
#include "zNPCTypeCommon.h"
#include "xIni.h"
#include "containers.h"
#include "zEntPlayer.h"
#include "xScene.h"
#include "xCamera.h"
#include "xPad.h"
#include "xUpdateCull.h"
#include "xGlobals.h"
#include "zCutsceneMgr.h"
#include "zGlobals.h"
#include "xSnd.h"

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
            F32 delay; //Offset 8d3c
            S32 which_event; //Offset 0x8d40
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
        callback()
        {
        }

        virtual void on_signal(U32)
        {
        }

        virtual void on_start()
        {
        }

        virtual void on_stop()
        {
        }

        virtual void on_answer(answer_enum answer)
        {
        }
    };

    struct
    {
        bool visible : 1;
    } flag;
    const asset_type* asset;
    ztextbox* dialog_box; //Offset 0x18
    ztextbox* prompt_box; //Offset 0x1c
    ztextbox* quit_box; //Offset 0x20
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
    void start_talk(const char* text, callback* cb, zNPCCommon* npc);

    void MasterTellSlaves(int event);
    void MasterLoveSlave(xBase*, int);

    void load(const asset_type& tasset);
    void reset();
    void set_text(const char* text);
    void set_text(U32 textID);
    void add_text(U32 textID);
    void add_text(const char* text);
    void clear_text();
    void stop_talk();
    void stop_wait(U32 x);
    void show();
    void hide();
};

namespace
{
    enum trigger_pads_enum
    {
        TP_NEVER,
        TP_TRAPPED,
        TP_ACTIVE,
    };
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

    struct state_type
    {
        state_enum type;

        state_type(state_enum t);
        virtual void start();
        virtual void stop();
        virtual state_enum update(xScene& scn, F32 dt) = 0;
    };

    struct start_state_type : state_type
    {
        start_state_type();
        virtual void start();
        virtual void stop();
        virtual state_enum update(xScene& scn, F32 dt);
    };

    struct next_state_type : state_type
    {
        S32 prev_wait_jot; // offset 0x8, size 0x4

        next_state_type();
        virtual void start();
        virtual void stop();
        virtual state_enum update(xScene& scn, F32 dt);
    };

    struct wait_state_type : state_type
    {
        U8 answer_yes; // offset 0x8, size 0x1

        wait_state_type();
        virtual void start();
        virtual void stop();
        virtual state_enum update(xScene& scn, F32 dt);
    };
    struct stop_state_type : state_type
    {
        stop_state_type();
        virtual void start();
        virtual void stop();
        virtual state_enum update(xScene& scn, F32 dt);
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
        xtextbox tb;
        jot _jots[512]; // 0x68
        U32 _jots_size; // 0x7068
        jot_line _lines[128]; // 0x706C
        U32 _lines_size; // 0x806C
        U8 context_buffer[1024]; // 0x8070
        U32 context_buffer_size; // 0x8470
        U16 dynamics[64]; // 0x8474
        U32 dynamics_size; // 0x84F4
        //refresh(d.tb, false)
    };

    struct wait_context
    {
        struct
        {
            U8 time : 1; // bitfield size: 0x8
            U8 prompt : 1; // bitfield size: 0x8
            U8 sound : 1; // bitfield size: 0x8
            U8 event : 1; // bitfield size: 0x8
            U16 pad : 12; // bitfield size: 0x10
        } type; //offset 0x0, size 0x4
        U8 need; //Offset 08d3a
        F32 delay; //Offset 08d3c
        U32 event_mask; //Offset 08d40
        query_enum query; //Offset 08d44
        void reset_type(); //Offset 08d48
        wait_context& operator=(const wait_context& rhs); //Offset 08d4c
    };

    struct trigger_pair
    {
        ztalkbox* origin;
        U32 event;
    };

    struct shared_type
    {
        S32 flags;
        U32 permit;
        ztalkbox* active; // 0x8
        state_type* state; // 0xC
        state_type* states[5]; // 0x10, size 0x14
        layout lt; // 0x24
        S32 begin_jot; // 0x851C
        S32 end_jot; // 0x8520
        S32 page_end_jot; // 0x8524
        wait_context wait; // 0x8528
        wait_context auto_wait; // 0x8538
        U32 wait_event_mask; // 0x8548
        F32 prompt_delay; // 0x854C
        F32 quit_delay; // 0x8550
        U8 prompt_ready; // 0x8554, size 0x1
        U8 quit_ready; // 0x8555, size 0x1
        U8 stream_locked[2]; // 0x8556
        S32 next_stream; // 0x8558
        sound_queue<4> sounds; // 0x855C
        U8 allow_quit; // 0x8578
        U8 quitting; // 0x8579
        U8 delay_events; // 0x857A
        ztalkbox::callback* cb; // 0x857C
        fixed_queue<trigger_pair, 32> triggered; // 0x8580
        F32 volume; // 0x8690
        zNPCCommon* speak_npc; // 0x8694
        U32 speak_player; // 0x8698
    };

    struct sound_context
    {
        // total size: 0x18
        U32 id; // offset 0x0, size 0x4
        enum
        {
            ACTION_SET,
            ACTION_PUSH,
            ACTION_POP,
        } action : 8; // offset 0x4, size 0x4
        enum
        {
            TYPE_INVALID,
            TYPE_VOLUME,
            TYPE_TARGET,
            TYPE_ORIGIN,
        } type : 8; // offset 0x4, size 0x4
        enum
        {
            SOURCE_MEMORY,
            SOURCE_STREAM,
        } source : 8; // offset 0x4, size 0x4
        U8 anim; // offset 0x7, size 0x1
        union
        { // inferred
            struct
            {
                // total size: 0x8
                float left; // offset 0x0, size 0x4
                float right; // offset 0x4, size 0x4
            } volume; // offset 0x8, size 0x8
            U32 target; // offset 0x8, size 0x4
            xVec3 origin; // offset 0x8, size 0xC
        };
        U32 speaker; // offset 0x14, size 0x4
    };

    struct teleport_context
    {
        // total size: 0x14
        U8 use_loc; // offset 0x0, size 0x1
        U8 use_yaw; // offset 0x1, size 0x1
        xVec3 loc; // offset 0x4, size 0xC
        float yaw; // offset 0x10, size 0x4
    };
    struct tag_entry
    {
        // total size: 0x14
        substr name; // offset 0x0, size 0x8
        char op; // offset 0x8, size 0x1
        substr* args; // offset 0xC, size 0x4
        U32 args_size; // offset 0x10, size 0x4
    };
    struct tag_entry_list
    {
        // total size: 0x8
        tag_entry* entries; // offset 0x0, size 0x4
        U32 size; // offset 0x4, size 0x4
    };
    struct xTextAsset
    {
        U32 len; // offset 0x0, size 0x4
    };

    struct signal_context
    {
        // total size: 0x4
        U32 flags; // offset 0x0, size 0x4
    };

    struct st_PKR_ASSET_TOCINFO
    {
        U32 aid; // offset 0x0, size 0x4
        st_PACKER_ASSETTYPE* typeref; // offset 0x4, size 0x4
        U32 sector; // offset 0x8, size 0x4
        U32 plus_offset; // offset 0xC, size 0x4
        U32 size; // offset 0x10, size 0x4
        void* mempos; // offset 0x14, size 0x4
    };

    struct st_PACKER_ASSETTYPE
    {
        // total size: 0x28
        U32 typetag; // offset 0x0, size 0x4
        U32 tflags; // offset 0x4, size 0x4
        S32 typalign; // offset 0x8, size 0x4
        void* (*readXForm)(void*, U32, void*, U32,
                           U32*); // offset 0xC, size 0x4
        void* (*writeXForm)(void*, U32, void*, void*, U32,
                            U32*); // offset 0x10, size 0x4
        S32 (*assetLoaded)(void*, U32, void*, S32); // offset 0x14, size 0x4
        void* (*makeData)(void*, U32, void*, S32*,
                          S32*); // offset 0x18, size 0x4
        void (*cleanup)(void*, U32, void*); // offset 0x1C, size 0x4
        void (*assetUnloaded)(void*, U32); // offset 0x20, size 0x4
        void (*writePeek)(void*, U32, void*, char*); // offset 0x24, size 0x4
    };

} // namespace
struct location_asset : xDynAsset
{
    xVec3 loc; // offset 0x10, size 0xC
    static const char* type_name();
};
struct pointer_asset : xDynAsset
{
    xVec3 loc; // offset 0x10, size 0xC
    float yaw; // offset 0x1C, size 0x4
    float pitch; // offset 0x20, size 0x4
    float roll; // offset 0x24, size 0x4
    static const char* type_name();
};

#endif
