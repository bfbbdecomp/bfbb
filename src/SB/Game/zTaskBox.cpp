#include "zTaskBox.h"

#include "xEvent.h"
#include "xGroup.h"
#include "xstransvc.h"

#include "zBase.h"
#include "zScene.h"
#include "zTalkBox.h"

#include <types.h>

ztaskbox::talk_callback* ztaskbox::tcb;

namespace
{
    static ztaskbox* shared;
}

void ztaskbox::load(const ztaskbox::asset_type& a)
{
    xBaseInit((xBase*)this, &(xBaseAsset)a);
    this->baseType = eBaseTypeTaskBox;
    this->asset = &a;
    this->eventFunc = cb_dispatch;
    if (this->linkCount != 0)
    {
        this->link = (xLinkAsset*)(&a + 1);
    }
    this->state = STATE_INVALID;
    if (a.enable)
    {
        this->flag.enabled = true;
        this->set_state(STATE_BEGIN);
        this->current = this;
    }
    else
    {
        this->flag.enabled = false;
        this->current = NULL;
    }
    if (a.persistent)
    {
        this->baseFlags |= 2;
    }
}

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

// Equivalent: branching weirdness
void ztaskbox::start_talk(zNPCCommon* npc)
{
    ztaskbox* curr = this->current;
    if (curr != NULL)
    {
        if (curr != this)
        {
            curr->set_callback(this->cb);
            this->current->start_talk(NULL);
        }
        else
        {
            if (this->flag.enabled && this->state != STATE_INVALID)
            {
                if (shared != NULL && shared != this)
                {
                    shared->stop_talk();
                }
                ztalkbox* talkbox = (ztalkbox*)zSceneFindObject(asset->talk_box);
                if (talkbox != NULL)
                {
                    U32 text = current->get_text(asset->stages[state]);
                    if (text != 0)
                    {
                        shared = this;
                        tcb->reset(*this);
                        talkbox->start_talk(text, tcb, npc);
                    }
                }
            }
        }
    }
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

// Equivalent: scheduling
void ztaskbox::init()
{
    shared = NULL;

    static talk_callback tcb;
    ztaskbox::tcb = &tcb;
}

void ztaskbox::load(xBase& data, xDynAsset& asset, size_t num)
{
    ((ztaskbox&)data).load((asset_type&)asset);
}

bool ztaskbox::exists(state_enum stage)
{
    U32 state = this->asset->stages[stage];
    return state != STATE_BEGIN && xSTFindAsset(state, NULL) != NULL;
}

void ztaskbox::set_state(state_enum stage)
{
    this->state = stage;
    this->current = this;

    switch (stage)
    {
        case STATE_BEGIN:
            if (!exists(stage))
            {
                set_state(STATE_DESCRIPTION);
            }
            break;
        case STATE_DESCRIPTION:
            if (!exists(stage))
            {
                set_state(STATE_REMINDER);
            }
            break;
        case STATE_REMINDER:
        case STATE_SUCCESS:
        case STATE_FAILURE:
            if (!exists(stage))
            {
                set_state(STATE_END);
            }
            break;
        case STATE_END:
            if (!exists(stage))
            {
                set_state(STATE_INVALID);
            }
            break;
        default:
            complete();
            break;
    }
}

void ztaskbox::on_talk_start()
{
    if (this->cb != NULL)
    {
        cb->on_talk_start();
    }
}

void ztaskbox::on_talk_stop(ztalkbox::answer_enum answer)
{
    switch (state)
    {
    case ztalkbox::ANSWER_YES:
        set_state(STATE_REMINDER);
        break;
    case ztalkbox::ANSWER_3:
        set_state(STATE_END);
        break;
    case ztalkbox::ANSWER_4:
        if (asset->retry != 0)
        {
            set_state(STATE_DESCRIPTION);
        }
        else
        {
            set_state(STATE_END);
        }
        break;
    default:
        if (asset->loop != 0)
        {
            set_state(STATE_BEGIN);
        }
        break;
    case ztalkbox::ANSWER_CONTINUE:
    case ztalkbox::ANSWER_NO:
    case ztalkbox::ANSWER_5:
        break;
    }

    if (cb != NULL)
    {
        cb->on_talk_stop();
    }
}

U32 ztaskbox::get_text(U32 textID)
{
    U32 id = textID;
    xGroup* group = (xGroup*)zSceneFindObject(textID);
    if (group != NULL)
    {
        if (group->baseType != eBaseTypeGroup)
        {
            return 0;
        }

        id = group->get_any();
    }

    if (id == 0)
    {
        return 0;
    }

    // What type is this?
    void* asset = xSTFindAsset(id, NULL);
    if (asset == NULL)
    {
        return 0;
    }
    else
    {
        // HACK
        return (U32)asset + 4;
    }
}

S32 ztaskbox::cb_dispatch(xBase*, xBase* to, U32 event, const F32*, xBase*)
{
    ztaskbox& taskbox = *(ztaskbox*)to;

    switch (event)
    {
    case eEventReset:
        taskbox.reset();
        break;
    case eEventStartConversation:
        taskbox.start_talk(NULL);
        break;
    case eEventEndConversation:
        taskbox.stop_talk();
        break;
    case eEventTaskBox_Initiate:
        taskbox.initiate();
        break;
    case eEventTaskBox_SetSuccess:
        taskbox.succeed();
        break;
    case eEventTaskBox_SetFailure:
        taskbox.fail();
        break;
    case eEventTaskBox_OnAccept:
    case eEventTaskBox_OnDecline:
    case eEventTaskBox_OnComplete:
        break;
    }

    return 1;
}
