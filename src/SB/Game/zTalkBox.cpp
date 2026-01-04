#include "xstransvc.h"
#include "zTalkBox.h"
#include "xDebug.h"
#include "zEntPlayer.h"
#include <types.h>

namespace
{
    shared_type shared;

    void stop_audio_effect();

    void speak_stop()
    {
        if (shared.speak_npc != NULL)
        {
            shared.speak_npc->SpeakStop();
            shared.speak_npc = NULL;
        }

        if (shared.speak_player != 0)
        {
            zEntPlayerSpeakStop();
            shared.speak_player = 0;
        }
    }

    static void trigger(U32 event)
    {
        // shared.delay_events = 0; // -0x7286
        // shared.triggered._first = 0; // -0x7280

        if (shared.delay_events == 0)
        {
            shared.triggered.push_back();
            shared.triggered.back();
            shared.active->id = 0;
        }
        else
        {
            zEntEvent(shared.active, shared.active, event);
        }
    }

    void trigger_pads(U32 pressed)
    {
        if ((pressed & 0x10) != 0)
        {
            trigger(73);
        }
        if ((pressed & 0x40) != 0)
        {
            trigger(74);
        }
        if ((pressed & 0x80) != 0)
        {
            trigger(76);
        }
        if ((pressed & 0x20) != 0)
        {
            trigger(75);
        }
        if ((pressed & 1) != 0)
        {
            trigger(71);
        }
        if ((pressed & 2) != 0)
        {
            trigger(72);
        }
        if ((pressed & 0x1000) != 0)
        {
            trigger(69);
        }
        if ((pressed & 0x2000) != 0)
        {
            trigger(70);
        }
        if ((pressed & 0x100) != 0)
        {
            trigger(67);
        }
        if ((pressed & 0x200) != 0)
        {
            trigger(68);
        }
        if ((pressed & 0x10000) != 0)
        {
            trigger(63);
        }
        if ((pressed & 0x20000) != 0)
        {
            trigger(65);
        }
        if ((pressed & 0x40000) != 0)
        {
            trigger(66);
        }
        if ((pressed & 0x80000) != 0)
        {
            trigger(64);
        }
    }

    void flush_triggered()
    {
    }

    void deactivate()
    {
        stop_audio_effect();

        ztalkbox* active = shared.active;
        if (active == NULL)
        {
            return;
        }

        if (active->prompt_box != NULL)
        {
            active->prompt_box->deactivate();
        }
        shared.active = NULL;
        active->dialog_box->flag.visible = false;
    }

    void stop_wait(ztalkbox& talkbox, const F32*, U32);

    static void stop();

    // Equivalent: see fixme
    S32 cb_dispatch(xBase*, xBase* to, U32 event, const F32* argf, xBase*)
    {
        //shared.unk8D7A = 1;
        ztalkbox& talkbox = *(ztalkbox*)to;

        switch (event)
        {
        case 10:
        case 88:
            talkbox.reset();
            break;
        case 4:
        case 504:
            talkbox.hide();
            break;
        case 3:
        case 503:
            talkbox.show();
            break;
        case 335:
        {
            U32 textID = ((U32*)argf == NULL) ? 0 : *(U32*)argf;
            talkbox.start_talk(textID, NULL, NULL);
            flush_triggered();
            break;
        }
        case 336:
            talkbox.stop_talk();
            flush_triggered();
            break;
        case 352:
            if (argf == NULL)
            {
                stop_wait(talkbox, NULL, 0);
            }
            else
            {
                stop_wait(talkbox, argf, 4);
            }
            flush_triggered();
            break;
        case 334:
            if ((U32*)argf != NULL)
            {
                talkbox.set_text(*(U32*)argf);
            }
            break;
        case 338:
            if ((U32*)argf != NULL)
            {
                talkbox.add_text(*(U32*)argf);
            }
            break;
        case 339:
            talkbox.clear_text();
            break;

        // FIXME: Figure out the right no-op cases
        case 75:
        case 76:
        case 342:
        case 343:
        case 344:
        case 345:
        case 346:
        case 347:
        case 348:
        case 349:
        case 350:
        case 351:
        case 353:
        case 356:
        case 357:
        case 358:
        case 359:
        // case 452:
        // case 453:
        // case 454:
        case 465:
        case 466:
            break;
        }

        //shared.unk8D7A = 0;
        return 1;
    }

    char* load_text(U32 id)
    {
        if (id == 0)
        {
            return NULL;
        }

        // What type is this?
        void* asset = xSTFindAsset(id, NULL);
        if (asset == NULL)
        {
            return NULL;
        }

        // HACK
        return (char*)(asset) + 4;
    }

} // namespace

void ztalkbox::load(const asset_type& tasset)
{
    xBaseInit(this, (xBaseAsset*)&tasset);
    baseType = eBaseTypeTalkBox;
    asset = &tasset;
    eventFunc = cb_dispatch;
    if (linkCount != 0)
    {
        link = (xLinkAsset*)(&tasset + 1);
    }

    dialog_box = (ztextbox*)zSceneFindObject(tasset.dialog_box);

    if (tasset.prompt_box == 0)
    {
        prompt_box = NULL;
    }
    else
    {
        prompt_box = (ztextbox*)zSceneFindObject(tasset.prompt_box);
    }

    if (tasset.quit_box == 0)
    {
        quit_box = NULL;
    }
    else
    {
        quit_box = (ztextbox*)zSceneFindObject(tasset.quit_box);
    }

    prompt.skip = load_text(tasset.prompt.skip);
    prompt.noskip = load_text(tasset.prompt.noskip);
    prompt.quit = load_text(tasset.prompt.quit);
    prompt.noquit = load_text(tasset.prompt.noquit);
    prompt.yesno = load_text(tasset.prompt.yesno);

    reset();
}

void ztalkbox::reset()
{
    flag.visible = true;
    if (shared.active == this)
    {
        deactivate();
    }
}

namespace
{
    void state_type::start()
    {
    }

    void state_type::stop()
    {
    }
} // namespace

void ztalkbox::clear_text()
{
    set_text((const char*)NULL);
}

void ztalkbox::stop_talk()
{
    if (shared.active == this)
    {
        stop();
    }
}

void ztalkbox::stop_wait(U32 x)
{
    if (shared.active == this)
    {
        shared.wait_event_mask = shared.wait_event_mask | x;
    }
}

void ztalkbox::show()
{
    flag.visible = true;

    if (shared.active != this)
    {
        return;
    }

    if (prompt_box != NULL)
    {
        prompt_box->activate();
    }

    // if (shared.unk8D78 != 0 && prompt.quit != 0 && quit_box != NULL)
    // {
    //     quit_box->activate();
    // }
}

void ztalkbox::hide()
{
    flag.visible = false;

    if (prompt_box != NULL)
    {
        prompt_box->deactivate();
    }

    if (quit_box != NULL)
    {
        quit_box->deactivate();
    }
}

ztalkbox* ztalkbox::get_active()
{
    return shared.active;
}

void ztalkbox::permit(U32 add_flags, U32 remove_flags)
{
    shared.permit &= ~remove_flags;
    shared.permit |= add_flags;
}

void ztalkbox::load(xBase& data, xDynAsset& asset, size_t)
{
    ((ztalkbox&)data).load((const ztalkbox::asset_type&)asset);
}

void ztalkbox::load_settings(xIniFile& ini) //TODO
{
    shared.volume = xIniGetFloat(&ini, "talk_box.volume", 2.0f);
    xDebugAddTweak("Talk Box|\u{1}Globals|volume", &shared.volume, 0.1f, 10.0f, NULL, NULL, 0);
}

namespace
{
    static U8 read_bool(const substr& s, bool def) //TODO 99%
    {
        extern const substr negative[6];
        extern const substr positive[6];
        if (def)
        {
            for (U32 i = 0; i < 6; ++i)
            {
                if (icompare(s, negative[i]) == 0)
                    return 0;
            }
            return 1;
        }
        else
            for (U32 i = 0; i < 6; ++i)
            {
                if (icompare(s, positive[i]) == 0)
                    return 1;
            }
        return 0;
    }
    static void parse_tag_pause(xtextbox::jot&, const xtextbox&, const xtextbox&,
                                const xtextbox::split_tag&)
    {
    }

    static void parse_tag_trap(xtextbox::jot& j, const xtextbox&, const xtextbox&,
                               const xtextbox::split_tag& ti) //TODO 99%
    {
        U8 c = 0;

        if (ti.action.size == 1 && ti.action.text[0] == '=')
        {
            if (read_bool(ti.value, 1) != 0)
            {
                c = 1;
            }
        }

        *(U8*)&j.context = c;
    }

    static void reset_tag_pause(xtextbox::jot&, const xtextbox&, const xtextbox&,
                                const xtextbox::split_tag&) //DONE
    {
    }
    static void reset_tag_sound(xtextbox::jot& j, const xtextbox&, const xtextbox& tb,
                                const xtextbox::split_tag&) //DONE
    {
        if (!shared.active)
        {
            return;
        }

        if (&shared.active->dialog_box->tb != &tb)
        {
            return;
        }

        sound_context& c = *(sound_context*)j.context;

        j.context_size = 24;

        c.id = 0;
        c.action = sound_context::ACTION_SET;
    }
    static void reset_tag_trap(xtextbox::jot& j, const xtextbox&, const xtextbox& ctb,
                               const xtextbox::split_tag&) //DONE
    {
        if (!shared.active)
        {
            return;
        }

        if (&shared.active->dialog_box->tb != &ctb)
        {
            return;
        }

        *(bool*)&j.context = (shared.active->asset->trap != 0);
    }

    static void reset_tag_allow_quit(xtextbox::jot& j, const xtextbox&, const xtextbox& ctb,
                                     const xtextbox::split_tag&) //DONE
    {
        if (!shared.active)
        {
            return;
        }

        if (&shared.active->dialog_box->tb != &ctb)
        {
            return;
        }

        *(bool*)&j.context = (shared.active->asset->allow_quit != 0);
    }

    U8 trigger_pause(const xtextbox::jot&)
    {
        return 1;
    }

    U8 trigger_allow_quit(const xtextbox::jot& j) //DONE
    {
        shared.allow_quit = (j.context != NULL);

        return 1;
    }
    U8 trigger_auto_wait(const xtextbox::jot& j) //DONE
    {
        shared.auto_wait = *(const wait_context*)j.context;

        return 1;
    }
    state_type::state_type(state_enum t)
    {
        type = t;
    }

    wait_context& wait_context::operator=(const wait_context& rhs) //FIXME
    {
        type = rhs.type;
        need = rhs.need;
        delay = rhs.delay;
        event_mask = rhs.event_mask;
        query = rhs.query;
        return *this;
    }

    void stop_audio_effect() //TODO
    {
        if (!shared.active)
        {
            return;
        }

        if (shared.active->asset == 0)
        {
            return;
        }
    }
    static void reset_auto_wait() //DONE
    {
        const ztalkbox::asset_type* a = shared.active->asset;

        shared.auto_wait.type.time = a->auto_wait.type.time;
        shared.auto_wait.type.prompt = a->auto_wait.type.prompt;
        shared.auto_wait.type.sound = a->auto_wait.type.sound;
        shared.auto_wait.type.event = a->auto_wait.type.event;

        shared.auto_wait.delay = a->auto_wait.delay;

        shared.auto_wait.need = 0;

        if (a->auto_wait.which_event <= 0 || a->auto_wait.which_event >= 32)
        {
            shared.auto_wait.event_mask = -1;
        }
        else
        {
            shared.auto_wait.event_mask = 1u << a->auto_wait.which_event;
        }

        shared.auto_wait.query = Q_SKIP;
    }
    static void reset_tag_auto_wait(xtextbox::jot& j, const xtextbox&, const xtextbox& ctb,
                                    const xtextbox::split_tag&) //DONE
    {
        if (!shared.active)
        {
            return;
        }
        if (&shared.active->dialog_box->tb != &ctb)
        {
            return;
        }

        wait_context& c = *(wait_context*)j.context;
        j.context_size = sizeof(wait_context);
        reset_auto_wait();
        c = shared.auto_wait;
    }

} // namespace

void start_state_type::stop()
{
}

S8 start_state_type::update(xScene& scn, F32 dt)
{
    return 2;
}

void next_state_type::stop()
{
}

void stop_state_type::start()
{
}

void stop_state_type::stop()
{
}

S8 stop_state_type::update(xScene& scn, F32 dt)
{
    return -1;
}

void wait_context::reset_type()
{
    *(U16*)&this->type = 0;
}

static U8 trigger_trap(const xtextbox::jot& j) //DONE
{
    if (j.context != 0)
    {
        zEntPlayerControlOff(CONTROL_OWNER_TALK_BOX);
    }
    else
    {
        zEntPlayerControlOn(CONTROL_OWNER_TALK_BOX);
    }
    return 1;
}
