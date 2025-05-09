#include "xstransvc.h"
#include "zTalkBox.h"

#include <types.h>

namespace
{
    struct SharedTalkboxState
    {
        void* padding[2]; // FIXME: variables not verified
        ztalkbox* active;
        U8 unkC[0x8D48 - 0xC];
        U32 unk8D48;
        U8 unk8D4C[0x8D78 - 0x8D4C];
        U8 unk8D78;
        U8 unk8D79;
        U8 unk8D7A;
    }; // size: 0x8E9C?

    SharedTalkboxState shared;

    void stop_audio_effect();

    void deactivate() {
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

    void flush_triggered();
    void stop_wait(ztalkbox& talkbox, const F32*, U32);

    static void stop();

    // Equivalent: see fixme
    S32 cb_dispatch(xBase*, xBase* to, U32 event, const F32* argf, xBase*)
    {
        shared.unk8D7A = 1;
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
            case 335: {
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

        shared.unk8D7A = 0;
        return 1;
    }

    char* load_text(U32 id) {
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
}

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
    if (shared.active == this) {
        deactivate();
    }
}

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

void ztalkbox::stop_wait(U32 unk)
{
    if (shared.active == this)
    {
        shared.unk8D48 |= unk;
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

    if (shared.unk8D78 != 0 && prompt.quit != 0 && quit_box != NULL)
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

ztalkbox* ztalkbox::get_active()
{
    return shared.active;
}
