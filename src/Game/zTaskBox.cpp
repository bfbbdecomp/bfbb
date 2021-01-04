#include "zTaskBox.h"

#include "../Core/x/xEvent.h"
#include "../Core/x/xstransvc.h"

#include "zBase.h"
#include "zScene.h"
#include "zTalkBox.h"

#include <types.h>

extern ztaskbox* shared;

#if 1

// func_8013499C
#pragma GLOBAL_ASM("asm/Game/zTaskBox.s", "load__8ztaskboxFRCQ28ztaskbox10asset_type")

#else

// WIP.
void ztaskbox::load(const ztaskbox::asset_type& a)
{
    xBaseInit((xBase*)this, &(xBaseAsset)a);
    this->baseType = eBaseTypeEnv;
    this->asset = &a;
    this->eventFunc = cb_dispatch;
    if (this->linkCount != 0)
    {
        this->link = (xLinkAsset*)(a + 1);
    }
    bool enabled = a.enable;
    this->state = STATE_INVALID;
    if (!enabled)
    {
        this->flag.enabled = false;
        this->current = NULL;
    }
    else
    {
        this->flag.enabled = true;
        set_state(this, STATE_BEGIN);
        this->current = this;
    }
    if (a->persistent)
    {
        this->baseFlags |= 2;
    }
}

#endif

void ztaskbox::read(xSerial& s)
{
    uint8 data[4];
    data[0] = (uint8)this->state;
    s.Read(data);
    set_state((ztaskbox::state_enum)data[0]);
}

void ztaskbox::write(xSerial& s)
{
    s.Write((uint8)this->state);
}

#if 1

// func_80134AC8
#pragma GLOBAL_ASM("asm/Game/zTaskBox.s", "start_talk__8ztaskboxFP10zNPCCommon")

#else

// WIP.
void ztaskbox::start_talk(zNPCCommon* npc)
{
    ztaskbox* curr = this->current;
    if (curr != NULL)
    {
        if (curr == this)
        {
            if (this->flag.enabled && this->state != STATE_INVLAID)
            {
                //TODO!!!
            }
        }
        else
        {
            curr->set_callback(this->cb);
            this->current->start_talk(NULL);
        }
    }
}

#endif

void ztaskbox::talk_callback::reset(ztaskbox& task)
{
    this->task = &task;
    this->answer = ztalkbox::ANSWER_CONTINUE;
}

#if 1

// func_80134BD4
#pragma GLOBAL_ASM("asm/Game/zTaskBox.s", "stop_talk__8ztaskboxFv")

#else

// Need to fix up the conditions.
void ztaskbox::stop_talk()
{
    ztaskbox* curr = this->current;
    if (curr != NULL)
    {
        if (curr != this)
        {
            curr->stop_talk();
        }
        else
        {
            if (this->flag.enabled && this->state != STATE_INVALID &&
                shared == this) // Does not like this condition.
            {
                ztalkbox* other = (ztalkbox*)zSceneFindObject(this->asset->talk_box);
                if (other != NULL)
                {
                    other->stop_talk();
                    shared = NULL;
                }
            }
        }
    }
}

#endif

void ztaskbox::enable()
{
    if (!this->flag.enabled)
    {
        this->flag.enabled = true;
        set_state(STATE_BEGIN);
    }
}

void ztaskbox::disable()
{
    if (this->flag.enabled)
    {
        stop_talk();
        this->flag.enabled = false;
        set_state(STATE_INVALID);
    }
}

void ztaskbox::reset()
{
    disable();
    if (this->asset->enable)
    {
        enable();
    }
}

void ztaskbox::initiate()
{
    if (this->state == STATE_BEGIN)
    {
        set_state(STATE_DESCRIPTION);
    }
}

#if 1

// func_80134D50
#pragma GLOBAL_ASM("asm/Game/zTaskBox.s", "succeed__8ztaskboxFv")

#else

// Need to figure out how to set up the comparisons.
void ztaskbox::succeed()
{
    state_enum state = this->state;
    if (state == STATE_BEGIN || state == STATE_DESCRIPTION || state == STATE_REMINDER)
    {
        set_state(STATE_SUCCESS);
    }
}

#endif

#if 1

// func_80134D90
#pragma GLOBAL_ASM("asm/Game/zTaskBox.s", "fail__8ztaskboxFv")

#else

// Need to figure out how to set up the comparisons. The setup should be identical to the succeed function.
void ztaskbox::fail()
{
    state_enum state = this->state;
    if (state == STATE_BEGIN || state == STATE_DESCRIPTION || state == STATE_REMINDER)
    {
        set_state(STATE_FAIL);
    }
}

#endif

#if 1

// func_80134DD0
#pragma GLOBAL_ASM("asm/Game/zTaskBox.s", "complete__8ztaskboxFv")

#else

// Why does the compiler add a random compare at the end????
void ztaskbox::complete()
{
    if (this->flag.enabled)
    {
        this->state = STATE_INVALID;
        this->flag.enabled = false;
        zEntEvent(this, this, eEventTaskBox_OnComplete);
        this->current = (ztaskbox*)zSceneFindObject(this->asset->next_task);
    }
}

#endif

void ztaskbox::set_callback(callback* cb)
{
    this->cb = cb;
}

#if 1

// func_80134E40
#pragma GLOBAL_ASM("asm/Game/zTaskBox.s", "init__8ztaskboxFv")

#else

// WIP.
void ztaskbox::init()
{
    shared = NULL;
    // STUFF.
}

#endif

ztaskbox::talk_callback::talk_callback()
{
}

void ztaskbox::load(xBase& data, xDynAsset& asset, uint64 num)
{
    load(*(asset_type*)&data);
}

bool ztaskbox::exists(state_enum stage)
{
    uint32 state = this->asset->stages[stage];
    return state != STATE_BEGIN && xSTFindAsset(state, NULL);
}

// func_80134F44
#pragma GLOBAL_ASM("asm/Game/zTaskBox.s", "set_state__8ztaskboxFQ28ztaskbox10state_enum")

#if 1

// func_80135014
#pragma GLOBAL_ASM("asm/Game/zTaskBox.s", "on_talk_start__8ztaskboxFv")

#else

void ztaskbox::on_talk_start()
{
    if (this->cb != NULL)
    {
        // SOMETHING.
    }
}

#endif

// func_8013504C
#pragma GLOBAL_ASM("asm/Game/zTaskBox.s", "on_talk_stop__8ztaskboxFQ28ztalkbox11answer_enum")

// func_80135124
#pragma GLOBAL_ASM("asm/Game/zTaskBox.s", "get_text__8ztaskboxFUi")

// func_801351A4
#pragma GLOBAL_ASM("asm/Game/zTaskBox.s", "cb_dispatch__8ztaskboxFP5xBaseP5xBaseUiPCfP5xBase")

#if 1

// func_8013524C
#pragma GLOBAL_ASM("asm/Game/zTaskBox.s", "on_start__Q28ztaskbox13talk_callbackFv")

#else

// This one just doesn't feel like working.
void ztaskbox::talk_callback::on_start()
{
    this->task->on_talk_start();
}

#endif

void ztaskbox::talk_callback::on_stop()
{
    this->task->on_talk_stop(answer);
}

void ztaskbox::talk_callback::on_answer(ztalkbox::answer_enum answer)
{
    this->answer = answer;
}