#include "xstransvc.h"
#include "zTalkBox.h"
#include "xDebug.h"
#include "zEntPlayer.h"
#include "zGame.h"
#include "zGlobals.h"
#include "zMusic.h"
#include <types.h>
#include "zGame.h"
#include "xSnd.h"

U32 xGroupGetCount(xGroup* g);
xBase* xGroupGetItemPtr(xGroup* g, U32 index);
void zEntPlayerSpeakStart(U32 sound, U32 param_2, S32 param_3);
void zEntPlayer_SNDStopStream();
U8 xSndStreamLock(U32 lock, sound_category category, bool enable);
void xSndStreamUnlock(U32 lock);
U8 xSndStreamReady(U32 lock);
S32 zGameIsPaused();
namespace
{
    shared_type shared;
    static void update_prompt_status(F32 dt);
    static void update_quit_status(F32 dt);
    static void stop();
    static U32* pad_pressed();

    static U32 new_tags_size = 9;
    static F32 music_fade = 0.25f;
    static F32 music_fade_delay = 0.5f;

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
        if (shared.delay_events)
        {
            shared.triggered.push_back();
            trigger_pair& tp = shared.triggered.back();
            tp.origin = shared.active;
            tp.event = event;
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

    static void flush_triggered()
    {
        while (!shared.triggered.empty())
        {
            trigger_pair tp = shared.triggered.front();
            shared.triggered.pop_front();
            zEntEvent(tp.origin, tp.origin, tp.event);
        }
    }

    static bool read_bool(const substr& s, bool def)
    {
        static const substr positive[6] = { { "yes", 3 },  { "y", 1 }, { "1", 1 },
                                            { "true", 4 }, { "t", 1 }, { "on", 2 }

        };
        static const substr negative[6] = { { "no", 3 },    { "n", 1 }, { "0", 1 },
                                            { "false", 5 }, { "f", 1 }, { "off", 3 }

        };
        if (def)
        {
            for (U32 i = 0; i < 6; i++)
            {
                if (icompare(s, negative[i]) == 0)
                {
                    return false;
                }
            }
            return true;
        }
        else
        {
            for (U32 i = 0; i < 6; i++)
            {
                if (icompare(s, positive[i]) == 0)
                {
                    return true;
                }
            }
            return false;
        }
    }

    static void reset_auto_wait()
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

    static void load_wait_context(wait_context& c, const xtextbox::tag_entry_list& el)
    {
        static S32 v[32];

        c.reset_type();
        c.delay = 0.0f;

        xtextbox::tag_entry* e = xtextbox::find_entry(el, substr::create("wait", 4));

        if (e && xtextbox::read_list(*e, &c.delay, 1) == 1)
        {
            c.type.time = true;
        }

        xtextbox::tag_entry* prompt = xtextbox::find_entry(el, substr::create("prompt", 6));

        if (prompt)
        {
            c.type.prompt = true;
            if (prompt->op == '=' && prompt->args_size == 1 &&
                icompare(*prompt->args, substr::create("yesno", 5)) == 0)
            {
                c.query = Q_YESNO;
            }
            else
            {
                c.query = Q_SKIP;
            }
        }

        e = xtextbox::find_entry(el, substr::create("sound", 5));
        c.type.sound = (e != NULL);

        e = xtextbox::find_entry(el, substr::create("event", 5));
        if (e)
        {
            c.type.event = true;
            U32 r = xtextbox::read_list(*e, v, 32);
            if (r == 0)
            {
                c.event_mask = -1;
            }
            else if (e->op == '=')
            {
                for (U32 i = 0; i < r; i++)
                {
                    if ((U32)v[i] < 32)
                    {
                        c.event_mask |= (1 << v[i]);
                    }
                }
                if (c.event_mask & 1)
                {
                    c.event_mask = -1;
                }
            }
        }
        e = xtextbox::find_entry(el, substr::create("need", 4));

        if (e && (e->op != '=' || e->args_size == 0 || !read_bool(*e->args, true)))
        {
            c.need = true;
        }
        else
        {
            c.need = false;
        }
    }

    void wait_context::reset_type()
    {
        *(U16*)&this->type = 0;
    }
    static void parse_tag_auto_wait(xtextbox::jot& j, const xtextbox& ctb, const xtextbox& tb,
                                    const xtextbox::split_tag& ti)
    {
        if (!shared.active)
        {
            return;
        }
        if (&shared.active->dialog_box->tb != &tb)
        {
            return;
        }

        wait_context* c = (wait_context*)j.context;
        j.context_size = sizeof(wait_context);

        xtextbox::tag_entry_list el = xtextbox::read_tag(ti.tag);
        xtextbox::tag_entry& e = *el.entries;

        if (e.op == '=' && e.args_size != 0 && !read_bool(*e.args, true))
        {
            c->reset_type();
            c->delay = 0.0f;
        }
        else
        {
            el.size--;
            el.entries++;
            load_wait_context(*c, el);
        }

        shared.auto_wait = *c;
    }
    wait_context& wait_context::operator=(const wait_context& rhs)
    {
        *(U16*)&type = *(const U16*)&rhs.type;
        need = rhs.need;
        delay = rhs.delay;
        event_mask = rhs.event_mask;
        query = rhs.query;
        return *this;
    }
    static void reset_tag_auto_wait(xtextbox::jot& j, const xtextbox&, const xtextbox& ctb,
                                    const xtextbox::split_tag&)
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
    static U8 trigger_auto_wait(const xtextbox::jot& j)
    {
        shared.auto_wait = *(const wait_context*)j.context;

        return 1;
    }
    static void parse_tag_signal(xtextbox::jot& j, const xtextbox& ctb, const xtextbox& tb,
                                 const xtextbox::split_tag& ti)
    {
        if (!shared.active)
        {
            return;
        }
        if (&shared.active->dialog_box->tb != &tb)
        {
            return;
        }

        S32 v[20];

        signal_context& c = *(signal_context*)&j.context;
        c.flags = 0;

        xtextbox::tag_entry_list el = xtextbox::read_tag(ti.tag);

        if (el.entries->op != ':')
        {
            return;
        }

        U32 r = xtextbox::read_list(*el.entries, v, 20);
        if (r == 0)
        {
            c.flags = 0x7FFFFFFF;
        }
        else
        {
            for (U32 i = 0; i < r; i++)
            {
                if ((U32)v[i] < 20)
                {
                    c.flags |= (1 << v[i]);
                }
            }
        }

        el.entries++;
        el.size--;

        xtextbox::tag_entry* e = xtextbox::find_entry(el, substr::create("need", 4));
        if (e)
        {
            if (e->op != '=' || !e->args_size || !read_bool(*e->args, true))
            {
                c.flags |= 0x80000000;
            }
        }
    }
    static bool trigger_signal(const xtextbox::jot& j)
    {
        signal_context& c = *(signal_context*)&j.context;
        static const U32 signals[20] = { 0x156, 0x157, 0x158, 0x159, 0x15A, 0x15B, 0x15C,
                                         0x15D, 0x15E, 0x15F, 0x1C9, 0x1CA, 0x1CB, 0x1CC,
                                         0x1CD, 0x1CE, 0x1CF, 0x1D0, 0x1D1, 0x1D2 };

        if (shared.quitting && !(c.flags & 0x80000000))
        {
            return true;
        }

        U32 flags = c.flags;

        for (U32 i = 0; i < 20; i++)
        {
            if (flags & (1 << i))
            {
                trigger(signals[i]);
            }
        }

        if (shared.cb)
        {
            shared.cb->on_signal(c.flags & 0x7FFFFFFF);
        }

        return true;
    }
    static bool load_sound_type(sound_context& c, const xtextbox::tag_entry_list& el)
    {
        xtextbox::tag_entry* e = xtextbox::find_entry(el, substr::create("volume", 6));
        if (e)
        {
            U32 r = xtextbox::read_list(*e, &c.volume.left, 2);
            if (r == 1)
            {
                c.volume.right = c.volume.left;
            }
            if (r != 0)
            {
                c.type = sound_context::TYPE_VOLUME;
                return true;
            }
        }

        c.volume.right = c.volume.left = 1.0f;
        c.type = sound_context::TYPE_VOLUME;
        return true;
    }
    static void parse_tag_sound(xtextbox::jot& j, const xtextbox& ctb, const xtextbox& tb,
                                const xtextbox::split_tag& ti)
    {
        if (!shared.active)
        {
            return;
        }
        if (&shared.active->dialog_box->tb != &tb)
        {
            return;
        }

        sound_context* c = (sound_context*)j.context;

        xtextbox::tag_entry_list el = xtextbox::read_tag(ti.tag);
        ::st_PKR_ASSET_TOCINFO ainfo;

        c->action = sound_context::ACTION_SET;

        xtextbox::tag_entry* e = xtextbox::find_entry(el, substr::create("action", 6));
        if (e && e->args_size != 0)
        {
            substr& action = *e->args;
            if (icompare(action, substr::create("add", 3)) == 0)
            {
                c->action = sound_context::ACTION_PUSH;
            }
            else if (icompare(action, substr::create("remove", 6)) == 0)
            {
                c->action = sound_context::ACTION_POP;
            }
        }

        xtextbox::tag_entry* first = el.entries;
        if (c->action == sound_context::ACTION_POP)
        {
            c->id = 0;
        }
        else if (first->op == ':' && first->args_size != 0)
        {
            c->id = xStrHash(first->args->text, first->args->size);
        }
        else
        {
            return;
        }

        if (c->id != 0 && c->action != sound_context::ACTION_POP)
        {
            load_sound_type(*c, el);
        }

        c->speaker = 2;

        e = xtextbox::find_entry(el, substr::create("speaker", 7));
        if (e && e->args_size != 0)
        {
            substr& action = *e->args;
            if (icompare(action, substr::create("pc", 2)) == 0)
            {
                c->speaker = 1;
            }
            else if (icompare(action, substr::create("none", 4)) == 0)
            {
                c->speaker = 0;
            }
            else if (action.size != 0)
            {
                c->speaker = xStrHash(action.text, action.size);
            }
        }

        c->anim = 0;

        e = xtextbox::find_entry(el, substr::create("anim", 4));
        if (e && e->args_size != 0)
        {
            S32 anim = 0;
            xtextbox::read_list(*e, &anim, 1);
            c->anim = (U8)anim;
        }

        if (c->id != 0)
        {
            S32 result = xSTGetAssetInfo(c->id, &ainfo);
            if (result)
            {
                U32 source = ainfo.typeref->typetag;
                if (source == 0x534E4420)
                {
                    c->source = sound_context::SOURCE_MEMORY;
                }
                else if (source == 0x534E4453)
                {
                    c->source = sound_context::SOURCE_STREAM;
                }
                else
                {
                    return;
                }

                j.context_size = sizeof(sound_context);
            }
        }
    }
    void __deadstripped_zTalkbox()
    {
        xprintf("pointer");
        xprintf("location");
    }
    static void reset_tag_sound(xtextbox::jot& j, const xtextbox& ctb, const xtextbox& tb,
                                const xtextbox::split_tag& ti)
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
        j.context_size = sizeof(sound_context);
        c.id = 0;
        c.action = sound_context::ACTION_SET;
    }

    static bool trigger_sound(const xtextbox::jot& j)
    {
        if (shared.quitting)
        {
            shared.sounds.clear();
            speak_stop();
            return true;
        }

        sound_context& c = *(sound_context*)j.context;

        switch (c.action)
        {
        case sound_context::ACTION_PUSH:
            break;
        case sound_context::ACTION_POP:
            if (shared.sounds.size() > 0)
            {
                shared.sounds.pop();
                return 1;
            }
            break;
        case sound_context::ACTION_SET:
            shared.sounds.clear();
            speak_stop();
            return 1;
        }

        if (c.id == 0)
        {
            return true;
        }

        F32 vol = c.volume.left;
        if (!(vol > c.volume.right))
        {
            vol = c.volume.right;
        }

        shared.sounds.play(c.id, shared.volume * vol, 0.0f, 0x80, 0,
                           (U32)&shared.stream_locked[shared.next_stream], SND_CAT_DIALOG);

        shared.next_stream ^= 1;

        zNPCCommon* npc = NULL;
        xEnt* player = NULL;
        ztalkbox& talk = *shared.active;

        switch (c.speaker)
        {
        case 0:
            break;
        case 1:
            player = (xEnt*)&globals.player.ent;
            break;
        case 2:
            npc = talk.npc;
            break;
        default:
        {
            xBase* obj = zSceneFindObject(c.speaker);
            if (obj)
            {
                if (obj->baseType == 0x2B)
                {
                    npc = (zNPCCommon*)obj;
                }
                else if (obj->baseType == 0x03)
                {
                    player = (xEnt*)&globals.player.ent;
                }
                else if (obj->baseType == 0x11)
                {
                    U32 size = xGroupGetCount((xGroup*)&obj);
                    for (U32 i = 0; i < size; i++)
                    {
                        xBase* entry = xGroupGetItemPtr((xGroup*)&obj, i);
                        if (entry && entry->baseType == 0x2B)
                        {
                            npc = (zNPCCommon*)entry;
                            if (xEntIsVisible((const xEnt*)entry))
                            {
                                break;
                            }
                        }
                    }
                }
            }
            break;
        }
        }

        if (npc)
        {
            npc->SpeakStart(c.id, 0, c.anim - 1);
            shared.speak_npc = npc;
        }
        else if (player)
        {
            zEntPlayerSpeakStart(c.id, 0, c.anim - 1);
            shared.speak_player = 1;
        }

        return true;
    }

    static void parse_tag_pause(xtextbox::jot&, const xtextbox&, const xtextbox&,
                                const xtextbox::split_tag&)
    {
    }

    static void reset_tag_pause(xtextbox::jot&, const xtextbox&, const xtextbox&,
                                const xtextbox::split_tag&)
    {
    }
    static U8 trigger_pause(const xtextbox::jot&)
    {
        return 1;
    }

    static void parse_tag_allow_quit(xtextbox::jot& j, const xtextbox&, const xtextbox&,
                                     const xtextbox::split_tag& ti)
    {
        U8 c = 0;

        if (ti.action.size != 1 || ti.action.text[0] != '=' || read_bool(ti.value, 1) != 0)
        {
            c = 1;
        }

        *(U8*)&j.context = c;
    }

    static void reset_tag_allow_quit(xtextbox::jot& j, const xtextbox&, const xtextbox& ctb,
                                     const xtextbox::split_tag&)
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

    static U8 trigger_allow_quit(const xtextbox::jot& j)
    {
        shared.allow_quit = (j.context != NULL);

        return 1;
    }

    static void parse_tag_teleport(xtextbox::jot& j, const xtextbox& ctb, const xtextbox& tb,
                                   const xtextbox::split_tag& ti)
    {
        if (!shared.active)
        {
            return;
        }

        U32 id = shared.active->asset->teleport;
        teleport_context& c = *(teleport_context*)j.context;

        bool has_value = ti.action.size == 1 && *ti.action.text == ':' && ti.value.size != 0;
        if (has_value)
        {
            id = xStrHash(ti.value.text, ti.value.size);
        }

        if (id == 0)
        {
            return;
        }

        c.use_yaw = false;
        c.use_loc = false;

        xDynAsset* a = (xDynAsset*)xSTFindAsset(id, NULL);
        if (!a)
        {
            return;
        }

        if (a->type == xStrHash(location_asset::type_name()))
        {
            location_asset& ta = *(location_asset*)a;
            c.use_loc = true;
            c.loc = ta.loc;
        }
        else if (a->type == xStrHash(pointer_asset::type_name()))
        {
            pointer_asset& ta = *(pointer_asset*)a;
            c.use_yaw = true;
            c.use_loc = true;
            c.loc = ta.loc;
            c.yaw = ta.yaw * (3.14159265f / 180.0f);
        }

        j.context_size = sizeof(teleport_context);
    }
    static void move_player(const xVec3& loc)
    {
        RwMatrix* dst_mat = globals.player.ent.model->Mat;
        xEntFrame* out_frame = globals.player.ent.frame;

        xVec3* dst_pos = (xVec3*)&dst_mat->pos;
        xVec3* src_pos = &out_frame->mat.pos;

        dst_pos->operator=(*src_pos = loc);
    }

    static void turn_player(F32 yaw)
    {
        xMat3x3& m = *(xMat3x3*)globals.player.ent.model->Mat;
        xVec3 ang;
        xMat3x3GetEuler(&m, &ang);
        ang.x = yaw;
        xMat3x3Euler(&m, &ang);
    }

    static U8 trigger_teleport(const xtextbox::jot& j)
    {
        if (j.context_size != sizeof(teleport_context))
        {
            return 1;
        }

        teleport_context* c = (teleport_context*)j.context;

        if (c->use_loc)
        {
            move_player(c->loc);
        }

        if (c->use_yaw)
        {
            turn_player(c->yaw);
        }
        return 1;
    }

    static void parse_tag_trap(xtextbox::jot& j, const xtextbox& ctb, const xtextbox& tb,
                               const xtextbox::split_tag& ti)
    {
        U8 c = false;

        if (ti.action.size == 1 && *ti.action.text == '=' && !read_bool(ti.value, true))
        {
        }
        else
        {
            c = true;
        }

        *(U8*)&j.context = c;
    }

    static void reset_tag_trap(xtextbox::jot& j, const xtextbox&, const xtextbox& ctb,
                               const xtextbox::split_tag&)
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

    static U8 trigger_trap(const xtextbox::jot& j)
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

    static void parse_tag_wait(xtextbox::jot& j, const xtextbox&, const xtextbox& ctb,
                               const xtextbox::split_tag& ti)
    {
        if (!shared.active)
        {
            return;
        }

        if ((const void*)&shared.active->dialog_box->tb != (const void*)&ctb)
        {
            return;
        }

        wait_context& c = *(wait_context*)j.context;
        j.context_size = sizeof(wait_context);

        const substr& s = *(const substr*)&ti;
        xtextbox::tag_entry_list el = xtextbox::read_tag(s);

        if (el.size == 1 && el.entries->args_size == 0)
        {
            c = shared.auto_wait;
        }
        else
        {
            load_wait_context(c, el);
        }
    }
    static U8 trigger_wait(const xtextbox::jot& j)
    {
        wait_context& c = *(wait_context*)j.context;

        if (shared.quitting != 0 && shared.allow_quit != 0 && c.need == 0)
        {
            return 1;
        }

        shared.wait = c;

        return 0;
    }
    xtextbox::tag_type new_tags[] = {
        { { "allow_quit", 10 },
          parse_tag_allow_quit,
          reset_tag_allow_quit,
          (void*)trigger_allow_quit },
        { { "aq", 2 }, parse_tag_allow_quit, reset_tag_allow_quit, (void*)trigger_allow_quit },
        { { "auto_wait", 9 }, parse_tag_auto_wait, reset_tag_auto_wait, (void*)trigger_auto_wait },
        { { "pause", 5 }, parse_tag_pause, reset_tag_pause, (void*)trigger_pause },
        { { "signal", 6 }, parse_tag_signal, NULL, (void*)trigger_signal },
        { { "sound", 5 }, parse_tag_sound, reset_tag_sound, (void*)trigger_sound },
        { { "teleport", 8 }, parse_tag_teleport, NULL, (void*)trigger_teleport },
        { { "trap", 4 }, parse_tag_trap, reset_tag_trap, (void*)trigger_trap },
        { { "wait", 4 }, parse_tag_wait, NULL, (void*)trigger_wait },
    };
    static void start_audio_effect(ztalkbox& talk)
    {
        static bool registered = false;

        if (!registered)
        {
            registered = true;
        }

        xDebugAddTweak("Temp|Talk Music Fade", &music_fade, 0.0f, 1.0f, NULL, NULL, 0);
        xDebugAddTweak("Temp|Talk Music Fade Delay", &music_fade_delay, 0.0f, 10.0f, NULL, NULL, 0);

        switch (talk.asset->audio_effect)
        {
        case 0:

            break;
        case 1:
            zMusicSetVolume(music_fade, music_fade_delay);
            break;
        }

        if (talk.asset->trap)
        {
            zEntPlayer_SNDStopStream();
        }
    }
    static void stop_audio_effect()
    {
        if ((shared.active) && (shared.active->asset->audio_effect != 1))
        {
            zMusicSetVolume(1.0f, music_fade_delay);
            return;
        }
    }

    static void deactivate()
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

    static void activate(ztalkbox& t)
    {
        deactivate();

        shared.active = &t;

        if (t.dialog_box->flag.active)
        {
            t.dialog_box->deactivate();
        }

        if (t.prompt_box != NULL && t.flag.visible)
        {
            t.prompt_box->activate();
        }

        start_audio_effect(t);

        t.dialog_box->flag.visible = 1;
    }
    static bool is_wait_jot(const xtextbox::jot& j)
    {
        return j.tag && j.tag->parse_tag == parse_tag_wait;
    }
    static bool layout_contains_streams()
    {
        tag_type* sound_tag = (tag_type*)xtextbox::find_format_tag(substr::create("sound", 5));
        jot* jots = (jot*)((xtextbox::layout*)&shared.lt)->jots();
        jot* end = jots + ((xtextbox::layout*)&shared.lt)->jots_size();

        for (; jots != end; jots++)
        {
            if (jots->tag == sound_tag && jots->context_size == sizeof(sound_context))
            {
                sound_context* c = (sound_context*)jots->context;
                if (c->source == sound_context::SOURCE_STREAM)
                {
                    return true;
                }
            }
        }

        return false;
    }

    static void lock_stream()
    {
        shared.stream_locked[0] =
            xSndStreamLock((U32)&shared.stream_locked[0], SND_CAT_DIALOG, true);
        shared.stream_locked[1] =
            xSndStreamLock((U32)&shared.stream_locked[1], SND_CAT_DIALOG, true);
    }
    static void unlock_stream()
    {
        xSndStreamUnlock((U32)&shared.stream_locked[0]);
        xSndStreamUnlock((U32)&shared.stream_locked[1]);
        shared.stream_locked[0] = 0;
        shared.stream_locked[1] = 0;
    }
    static void refresh_prompts()
    {
        ztalkbox& active = *shared.active;

        if (active.prompt_box)
        {
            char* message;

            if (shared.wait.type.prompt && shared.prompt_ready)
            {
                char* queries[2] = { (char*)active.prompt.skip, (char*)active.prompt.yesno };
                message = queries[shared.wait.query];
            }
            else
            {
                message = (char*)active.prompt.noskip;
            }

            if (message)
            {
                active.prompt_box->set_text(message);
                if (active.flag.visible)
                {
                    active.prompt_box->activate();
                }
            }
            else
            {
                active.prompt_box->deactivate();
            }
        }

        if (active.quit_box)
        {
            if (shared.allow_quit && active.prompt.quit && shared.quit_ready)
            {
                active.quit_box->set_text(active.prompt.quit);
                if (active.flag.visible)
                {
                    active.quit_box->activate();
                }
            }
            else if (shared.allow_quit && shared.quit_delay <= 0.0f)
            {
                active.quit_box->deactivate();
            }
            else if (active.prompt.noquit)
            {
                active.quit_box->set_text(active.prompt.noquit);
                if (active.flag.visible)
                {
                    active.quit_box->activate();
                }
            }
            else
            {
                active.quit_box->deactivate();
            }
        }
    }
    static void update_prompt_status(F32 dt)
    {
        if (!shared.wait.type.prompt)
        {
            return;
        }

        if (shared.prompt_ready)
        {
            return;
        }

        shared.prompt_delay -= dt;
        if (shared.prompt_delay > 0.0f)
        {
            return;
        }

        if (!shared.stream_locked[shared.next_stream] ||
            xSndStreamReady((U32)&shared.stream_locked[shared.next_stream]))
        {
            shared.prompt_ready = true;
            refresh_prompts();
        }
    }
    static void update_quit_status(F32 dt)
    {
        if (shared.quit_ready)
        {
            return;
        }

        shared.quit_delay -= dt;
        if (shared.quit_delay > 0.0f)
        {
            return;
        }

        shared.quit_ready = true;
        refresh_prompts();
    }
    static void hide_prompts()
    {
        ztalkbox& active = *(ztalkbox*)shared.active;

        if (active.prompt_box)
        {
            active.prompt_box->deactivate();
        }
        if (active.quit_box)
        {
            active.quit_box->deactivate();
        }
    }
    static void stop_wait(ztalkbox& e, const F32* args, U32 args_size)
    {
        if (shared.active != &e)
        {
            return;
        }

        U32 mask = 0;
        U32 i = 0;

        for (; i < args_size; i++)
        {
            U32 v = (U32)args[i];

            if (v != 0 && v < 32)
            {
                mask |= (1 << v);
            }
        }

        if (mask == 0)
        {
            mask = 0xFFFFFFFF;
        }

        e.stop_wait(mask);
    }

    S32 cb_dispatch(xBase*, xBase* to, U32 event, const F32* argf, xBase*)
    {
        shared.delay_events = true;
        ztalkbox& e = *(ztalkbox*)to;

        switch (event)
        {
        case 10:
        case 88:
            e.reset();
            break;
        case 4:
        case 504:
            e.hide();
            break;
        case 3:
        case 503:
            e.show();
            break;
        case 335:
        {
            U32 textID = ((U32*)argf == NULL) ? 0 : *(U32*)argf;
            e.start_talk(textID, NULL, NULL);
            flush_triggered();
            break;
        }
        case 336:
            e.stop_talk();
            flush_triggered();
            break;
        case 352:
            if (argf == NULL)
            {
                stop_wait(e, NULL, 0);
            }
            else
            {
                stop_wait(e, argf, 4);
            }
            flush_triggered();
            break;
        case 334:
            if ((U32*)argf != NULL)
            {
                e.set_text(*(U32*)argf);
            }
            break;
        case 338:
            if ((U32*)argf != NULL)
            {
                e.add_text(*(U32*)argf);
            }
            break;
        case 339:
            e.clear_text();
            break;
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
        case 452:
        case 453:
        case 454:
        case 465:
        case 466:
            break;
        }

        shared.delay_events = false;
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
void ztalkbox::set_text(const char* s)
{
    ztextbox& d = *dialog_box;

    if (s)
    {
        d.set_text(s);
    }
    else
    {
        d.clear_text();
    }

    d.refresh();

    if (shared.active != this)
    {
        return;
    }

    if (shared.state)
    {
        shared.state->stop();
        shared.state = NULL;
    }

    ((xtextbox::layout*)&shared.lt)->refresh(d.tb, false);

    if (layout_contains_streams())
    {
        lock_stream();
    }

    shared.state = shared.states[1];
    shared.state->start();
}
void ztalkbox::set_text(U32 id)
{
    if (id == 0)
    {
        return;
    }
    xTextAsset* ta = (xTextAsset*)xSTFindAsset(id, 0);

    if (!ta)
    {
        clear_text();
        return;
    }

    set_text((const char*)(ta + 1));
}
void ztalkbox::add_text(const char* text)
{
    dialog_box->add_text(text);

    if (shared.active == this)
    {
        ((xtextbox::layout*)&shared.lt)->refresh_end(dialog_box->tb);
    }
}
void ztalkbox::add_text(U32 textID)
{
    if (!textID)
    {
        return;
    }

    xTextAsset* a = (xTextAsset*)xSTFindAsset(textID, NULL);
    if (!a)
    {
        return;
    }

    add_text((const char*)(a + 1));
}
void ztalkbox::clear_text()
{
    set_text((const char*)NULL);
}
void ztalkbox::start_talk(const char* s, callback* cb, zNPCCommon* npc)
{
    this->npc = npc;

    if (shared.active)
    {
        shared.active->stop_talk();
    }

    activate(*this);

    shared.cb = cb;
    shared.wait_event_mask = 0;

    reset_auto_wait();

    shared.allow_quit = (asset->allow_quit != 0);
    shared.quitting = false;

    if (asset->trap)
    {
        zEntPlayerControlOff((zControlOwner)0x10);
    }
    else
    {
        zEntPlayerControlOn((zControlOwner)0x10);
    }
    MasterTellSlaves(1);
    refresh_prompts();

    ztextbox& d = *dialog_box;

    if (d.flag.active)
    {
        d.deactivate();
    }

    if (s)
    {
        d.set_text(s);
    }

    d.refresh();

    ((xtextbox::layout*)&shared.lt)->refresh(d.tb, false);

    if (layout_contains_streams())
    {
        lock_stream();
    }

    shared.state = shared.states[1];
    trigger(0x161);

    if (cb)
    {
        cb->on_start();
    }

    shared.state->start();
}
void ztalkbox::start_talk(U32 text_id, callback* cb, zNPCCommon* npc)
{
    if (!text_id)
    {
        start_talk((const char*)NULL, cb, npc);
        return;
    }

    xTextAsset* ta = (xTextAsset*)xSTFindAsset(text_id, NULL);
    if (ta)
    {
        start_talk((const char*)(ta + 1), cb, npc);
    }
}
void ztalkbox::stop_talk()
{
    if (shared.active == this)
    {
        stop();
    }
}
namespace
{
    static void stop()
    {
        if (!shared.state)
        {
            return;
        }

        shared.state->stop();
        hide_prompts();
        shared.active->MasterTellSlaves(0);
        zEntPlayerControlOn((zControlOwner)0x10);
        trigger(0x162);

        if (shared.cb)
        {
            shared.cb->on_stop();
        }

        shared.state = NULL;
        deactivate();
        shared.sounds.clear();
        speak_stop();
        unlock_stream();
    }
} // namespace

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

    if (prompt_box)
    {
        prompt_box->activate();
    }

    if (shared.allow_quit && prompt.quit && quit_box)
    {
        quit_box->activate();
    }
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
void ztalkbox::MasterTellSlaves(S32 isBeginning)
{
    S32 i = 0;

    for (; i < (S32)linkCount; i++)
    {
        xLinkAsset* link = &this->link[i];

        if (link->dstEvent == 0x133)
        {
            xSceneID2Name(globals.sceneCur, id);
            xSceneID2Name(globals.sceneCur, link->dstAssetID);

            xBase* mychild = zSceneFindObject(link->dstAssetID);
            if (mychild)
            {
                MasterLoveSlave(mychild, isBeginning);
            }
        }
    }
}
void ztalkbox::MasterLoveSlave(xBase* slave, S32 starting)
{
    switch (slave->baseType)
    {
    case 0x11:
    {
        xGroup* grp = (xGroup*)slave;
        S32 cnt = xGroupGetCount(grp);
        S32 i = 0;
        for (; i < cnt; i++)
        {
            xBase* grpitem = xGroupGetItemPtr(grp, i);
            if (grpitem)
            {
                MasterLoveSlave(grpitem, starting);
            }
        }
        break;
    }
    case 0x2b:
    {
        zNPCCommon* npc = (zNPCCommon*)slave;
        if (starting)
        {
            npc->SpeakBegin();
        }
        else
        {
            npc->SpeakEnd();
        }
        break;
    }
    }
}
void ztalkbox::load_settings(xIniFile& ini)
{
    shared.volume = xIniGetFloat(&ini, "talk_box.volume", 2.0f);
    xDebugAddTweak("Talk Box|\01Globals|volume", &shared.volume, 0.0f, 10.0f, NULL, NULL, 0);
}
void ztalkbox::init()
{
    xtextbox::register_tags(new_tags, new_tags_size);

    static start_state_type start_state;
    shared.states[1] = &start_state;

    static next_state_type next_state;
    shared.states[2] = &next_state;

    static wait_state_type wait_state;
    shared.states[3] = &wait_state;

    static stop_state_type stop_state;
    shared.states[4] = &stop_state;

    ztalkbox::reset_all();
}
namespace
{
    stop_state_type::stop_state_type() : state_type((state_enum)4)
    {
    }
    state_type::state_type(state_enum t)
    {
        type = t;
    }
    wait_state_type::wait_state_type() : state_type((state_enum)3)
    {
    }
    next_state_type::next_state_type() : state_type((state_enum)2)
    {
    }
    start_state_type::start_state_type() : state_type((state_enum)1)
    {
    }

} // namespace

void ztalkbox::load(xBase& data, xDynAsset& asset, u32)
{
    ((ztalkbox&)data).load((const ztalkbox::asset_type&)asset);
}

void ztalkbox::update_all(xScene& s, F32 dt)
{
    if (zGameIsPaused())
    {
        return;
    }

    while (shared.state)
    {
        shared.delay_events = true;
        state_enum newtype = shared.state->update(s, dt);

        if (newtype == shared.state->type)
        {
            break;
        }

        shared.state->stop();

        if (newtype == (state_enum)-1)
        {
            stop();
            break;
        }

        shared.state = shared.states[newtype];
        shared.state->start();
        shared.delay_events = false;
        flush_triggered();
    }

    if (shared.state && shared.active)
    {
        trigger_pads_enum tp = (trigger_pads_enum)shared.active->asset->trigger_pads;

        if (tp == TP_ACTIVE && !globals.cmgr)
        {
            trigger_pads(*pad_pressed());
        }
        else if (tp == TP_TRAPPED && globals.cmgr)
        {
            trigger_pads(*pad_pressed());
        }
    }

    shared.delay_events = false;
    flush_triggered();
}
namespace
{
    static U32* pad_pressed()
    {
        if (shared.permit & 2)
        {
            return &globals.pad0->pressed;
        }

        static U32 zero;
        zero = 0;
        return &zero;
    }

}; // namespace
void ztalkbox::render_all()
{
    if (!(shared.permit & 1))
    {
        return;
    }

    if (!shared.state)
    {
        return;
    }

    if (!shared.active->flag.visible)
    {
        return;
    }

    ztextbox& d = *shared.active->dialog_box;

    if (d.flag.active)
    {
        d.deactivate();
    }

    if (d.flag.show_backdrop)
    {
        d.render_backdrop();
    }

    d.tb.render(*(xtextbox::layout*)&shared.lt, shared.begin_jot, shared.end_jot);
}
void ztalkbox::reset_all()
{
    shared.flags = 0;
    shared.permit = 0xFFFFFFFF;
    shared.active = NULL;
    shared.state = NULL;
    shared.cb = NULL;
    shared.delay_events = false;
    shared.speak_npc = NULL;
    shared.triggered.reset();
    shared.quit_ready = false;
    shared.prompt_ready = false;
    shared.next_stream = 0;
    shared.stream_locked[1] = 0;
    shared.stream_locked[0] = 0;
    ((xtextbox::layout*)&shared.lt)->clear();
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

namespace
{
    void stop_state_type::start()
    {
    }
    void stop_state_type::stop()
    {
    }

    state_enum stop_state_type::update(xScene& scn, F32 dt)
    {
        return (state_enum)-1;
    }
    void state_type::start()
    {
    }

    void state_type::stop()
    {
    }
    void wait_state_type::start()
    {
        this->answer_yes = false;
        refresh_prompts();
    }

    void wait_state_type::stop()
    {
        if (!shared.wait.type.time || shared.wait.type.prompt)
        {
            shared.prompt_delay = 0.1f;
            shared.prompt_ready = false;
        }

        shared.quit_delay = 0.0f;
        shared.quit_ready = true;

        if (shared.wait.type.prompt && shared.wait.query == Q_YESNO)
        {
            if (shared.cb)
            {
                ztalkbox::answer_enum answer = (ztalkbox::answer_enum)2;
                if (this->answer_yes)
                {
                    answer = (ztalkbox::answer_enum)1;
                }
                shared.cb->on_answer(answer);
            }

            if (this->answer_yes)
            {
                trigger(0x1C5);
            }
            else
            {
                trigger(0x1C6);
            }
        }

        shared.wait.reset_type();
        shared.wait.type.time = true;
        shared.wait.delay = 0.0f;
        shared.wait.need = false;
    }
    state_enum wait_state_type::update(xScene& scn, F32 dt)
    {
        update_prompt_status(dt);
        update_quit_status(dt);
        U32* pressed = pad_pressed();

        if (shared.quitting)
        {
            if (shared.allow_quit && !shared.wait.need)
            {
                return (state_enum)2;
            }
            shared.quitting = false;
        }

        if (shared.wait.type.time)
        {
            shared.wait.delay -= dt;
            if (shared.wait.delay <= 0.0f)
            {
                return (state_enum)2;
            }
        }

        if (shared.wait.type.prompt && shared.prompt_ready)
        {
            switch (shared.wait.query)
            {
            case Q_YESNO:
                if (*pressed & 0x10000)
                {
                    *pressed &= ~0x10000;
                    this->answer_yes = true;
                    return (state_enum)2;
                }
                if (*pressed & 0x40000)
                {
                    *pressed &= ~0x40000;
                    return (state_enum)2;
                }
                break;
            case Q_SKIP:
            default:
                if (*pressed & 0x10000)
                {
                    *pressed &= ~0x10000;
                    return (state_enum)2;
                }
                break;
            }
        }

        if (shared.allow_quit && (*pressed & 0x80000) && shared.quit_ready && (*pressed & 0x80000))
        {
            shared.quitting = true;
            *pressed &= ~0x80000;
            return (state_enum)2;
        }

        if (shared.wait.type.sound)
        {
            if (!shared.sounds.playing(-1, true))
            {
                return (state_enum)2;
            }
        }

        if (shared.wait.type.event)
        {
            if (shared.wait_event_mask & shared.wait.event_mask)
            {
                shared.wait_event_mask &= ~shared.wait.event_mask;
                return (state_enum)2;
            }
        }

        return (state_enum)3;
    }
    static bool trigger_jot(const xtextbox::jot& j)
    {
        if (!j.tag)
        {
            return true;
        }

        if (j.tag->context)
        {
            return ((bool (*)(const xtextbox::jot&))j.tag->context)(j);
        }

        return true;
    }
    static bool trigger_jot(S32 index)
    {
        xtextbox::jot* jots = ((xtextbox::layout*)&shared.lt)->jots();
        return trigger_jot(jots[index]);
    }
    void next_state_type::start()
    {
        if (shared.end_jot == shared.page_end_jot)
        {
            xtextbox& tb = shared.active->dialog_box->tb;
            S32 jots_size = ((xtextbox::layout*)&shared.lt)->jots_size();
            ((xtextbox::layout*)&shared.lt)->jots();

            shared.begin_jot = shared.end_jot;
            S32 size;
            tb.yextent(tb.bounds.h, size, *(xtextbox::layout*)&shared.lt, shared.begin_jot, -1);

            if (size == 0 && jots_size > shared.begin_jot)
            {
                size = 1;
            }

            shared.page_end_jot = shared.begin_jot + size;
        }

        while (shared.end_jot < shared.page_end_jot)
        {
            shared.end_jot++;
            if (!trigger_jot(shared.end_jot - 1))
            {
                break;
            }
        }

        if (shared.end_jot == shared.page_end_jot)
        {
            xtextbox::jot* jots = ((xtextbox::layout*)&shared.lt)->jots();
            xtextbox::jot* last = &jots[shared.end_jot - 1];

            if (last->flag.page_break && (S32)(shared.end_jot - 1) > shared.begin_jot)
            {
                last--;
            }

            if (!is_wait_jot(*last))
            {
                shared.wait = shared.auto_wait;
            }
        }
    }

    void next_state_type::stop()
    {
    }
    state_enum next_state_type::update(xScene& scn, F32 dt)
    {
        if (shared.begin_jot == shared.page_end_jot)
        {
            return (state_enum)4;
        }
        return (state_enum)3;
    }
    void start_state_type::start()
    {
        shared.page_end_jot = 0;
        shared.end_jot = 0;
        shared.begin_jot = 0;
        shared.wait.reset_type();
        shared.wait.type.time = true;
        shared.wait.delay = 0.0f;
        shared.quit_delay = 0.25f;
        shared.prompt_delay = 0.25f;
        shared.quit_ready = false;
        shared.prompt_ready = false;
        refresh_prompts();
    }
    void start_state_type::stop()
    {
    }

    state_enum start_state_type::update(xScene& scn, F32 dt)
    {
        return (state_enum)2;
    }

} // namespace
