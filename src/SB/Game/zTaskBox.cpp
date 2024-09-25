#include "zTaskBox.h"

#include "xEvent.h"
#include "xstransvc.h"

#include "zBase.h"
#include "zScene.h"
#include "zTalkBox.h"

#include <types.h>

extern ztaskbox* shared;

#if 0
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
    U8 data[4];
    data[0] = (U8)this->state;
    s.Read(data);
    set_state((ztaskbox::state_enum)data[0]);
}

void ztaskbox::write(xSerial& s)
{
    s.Write((U8)this->state);
}

#if 0
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

void ztaskbox::stop_talk()
{
    ztaskbox* curr = this->current;

    if (curr == NULL)
    {
        return;
    }

    if (curr != this)
    {
        curr->stop_talk();
        return;
    }

    if (!this->flag.enabled || this->state == STATE_INVALID)
    {
        return;
    }

    if (shared != this)
    {
        return;
    }

    ztalkbox* other = (ztalkbox*)zSceneFindObject(this->asset->talk_box);

    if (other)
    {
        other->stop_talk();
        shared = NULL;
    }
}

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

void ztaskbox::succeed()
{
    if (state == STATE_BEGIN || state == STATE_DESCRIPTION || state == STATE_REMINDER)
    {
        set_state(STATE_SUCCESS);
    }
}

void ztaskbox::fail()
{
    if (state == STATE_BEGIN || state == STATE_DESCRIPTION || state == STATE_REMINDER)
    {
        set_state(STATE_FAILURE);
    }
}

void ztaskbox::complete()
{
    if (this->flag.enabled)
    {
        this->state = STATE_INVALID;
        this->flag.enabled = false;
        zEntEvent(this, this, eEventTaskBox_OnComplete);
        this->current = (ztaskbox*)zSceneFindObject(this->asset->next_task);

        // Bruh
        if (this->current != NULL)
        {
            return;
        }
    }
}

void ztaskbox::set_callback(callback* cb)
{
    this->cb = cb;
}

#if 0
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

void ztaskbox::load(xBase& data, xDynAsset& asset, size_t num)
{
    ((ztaskbox&)data).load((asset_type&)asset);
}

bool ztaskbox::exists(state_enum stage)
{
    U32 state = this->asset->stages[stage];
    return state != STATE_BEGIN && xSTFindAsset(state, NULL);
}

void ztaskbox::on_talk_start()
{
    if (this->cb != NULL)
    {
        cb->on_talk_start();
    }
}

void ztaskbox::talk_callback::on_start()
{
    this->task->on_talk_start();
}

void ztaskbox::talk_callback::on_stop()
{
    this->task->on_talk_stop(answer);
}

void ztaskbox::talk_callback::on_answer(ztalkbox::answer_enum answer)
{
    this->answer = answer;
}
