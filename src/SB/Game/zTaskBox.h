#ifndef ZTASKBOX_H
#define ZTASKBOX_H

#include "xBase.h"
#include "xDynAsset.h"

#include "zNPCTypeCommon.h"
#include "zTalkBox.h"

#include <types.h>

struct ztaskbox : xBase
{
    struct flagData
    {
        U8 enabled : 8;
        U32 dummy : 24;
    };

    enum state_enum
    {
        STATE_BEGIN,
        STATE_DESCRIPTION,
        STATE_REMINDER,
        STATE_SUCCESS,
        STATE_FAILURE,
        STATE_END,
        MAX_STATE,
        STATE_INVALID = 0xffffffff
    };

    struct callback
    {
        virtual void on_talk_start();
        virtual void on_talk_stop();
    };

    struct talk_callback : ztalkbox::callback
    {
        ztaskbox* task;
        ztalkbox::answer_enum answer;

        talk_callback();
        void reset(ztaskbox& task);
        void on_start();
        void on_stop();
        void on_answer(ztalkbox::answer_enum answer);
    };

    struct asset_type : xDynAsset
    {
        U8 persistent : 8;
        U8 loop : 8;
        U8 enable : 8;
        U8 retry : 8;
        U32 talk_box;
        U32 next_task;
        U32 stages[6];
    };

    flagData flag;
    asset_type* asset;
    state_enum state;
    callback* cb;
    ztaskbox* current;

    void on_talk_start();
    void on_talk_stop(ztalkbox::answer_enum answer);
    void set_state(state_enum state);
    void set_callback(callback* cb);
    void stop_talk();
    void start_talk(zNPCCommon* npc);
    void write(xSerial& s);
    void read(xSerial& s);
    void load(const asset_type& a);
    static void load(xBase& data, xDynAsset& asset, size_t num);
    void enable();
    void disable();
    void reset();
    void initiate();
    void succeed();
    void fail();
    void complete();
    static void init();
    bool exists(state_enum stage);
};

#endif
