#include "xHudText.h"
#include "xstransvc.h"
#include "xTextAsset.h"
#include "zScene.h"
#include "zTextBox.h"

#include <PowerPC_EABI_Support\MSL_C\MSL_Common\cstring>
#include <PowerPC_EABI_Support/MSL_C++/MSL_Common/Include/new>
#include <types.h>

void xhud::text_widget::load(xBase& data, xDynAsset& asset, size_t)
{
    init_base(data, asset, sizeof(xBase) + sizeof(text_widget));
    text_widget* widget = (text_widget*)(&data + 1);
    new (widget) text_widget((text_asset&)asset);
}

xhud::text_widget::text_widget(const xhud::text_asset& asset) : widget(asset)
{
    text[0] = '\0';
}

void xhud::text_widget::destruct()
{
    widget::destruct();
}

void xhud::text_widget::setup()
{
    presetup();
    text_asset* asset = (text_asset*)a;
    ztextbox* textbox = (ztextbox*)zSceneFindObject(asset->text_box);
    if (textbox == NULL)
    {
        tb = xtextbox::create();
        return;
    }

    textbox->refresh();
    tb = textbox->tb;
    textbox->get_text(text, sizeof(text));
    if (asset->text != 0)
    {
        xTextAsset* tasset = (xTextAsset*)xSTFindAsset(asset->text, NULL);
        if (tasset != NULL)
        {
            char* text_asset_text = xTextAssetGetText(tasset);
            U32 len = strlen(text_asset_text);
            if (len >= sizeof(text))
            {
                len = sizeof(text) - 1;
            }
            memcpy(text, text_asset_text, len);
            text[len] = '\0';
        }
    }

    rc.r = tb.font.color.r / 255.0f;
    rc.g = tb.font.color.g / 255.0f;
    rc.b = tb.font.color.b / 255.0f;
}

void xhud::text_widget::destroy()
{
    destruct();
}

// Equivalent: scheduling
U32 xhud::text_widget::type() const
{
    static U32 myid = xStrHash(text_asset::type_name());
    return myid;
}

bool xhud::text_widget::is(U32 id) const
{
    return id == text_widget::type() || widget::is(id);
}

void __deadstripped_xHudText(xhud::text_widget& w)
{
    // NOTE(tgsm): This function only exists to assure correct value ordering in .sdata2.
    // I don't actually know what this function contains, and I wouldn't use it if I were you.
    w.tb.font.width = 0.0f;
}

void xhud::text_widget::update(F32 dt)
{
    updater(dt);

    tb.set_text(text);
    tb.bounds.x = rc.loc.x;
    tb.bounds.y = rc.loc.y;
    tb.bounds.w = rc.size.x;
    tb.bounds.h = rc.size.y;
    tb.font.clip = tb.bounds;

    tb.font.color.r = (rc.r * 255.0f) + 0.5f;
    tb.font.color.g = (rc.g * 255.0f) + 0.5f;
    tb.font.color.b = (rc.b * 255.0f) + 0.5f;
    tb.font.color.a = (rc.a * 255.0f) + 0.5f;
}

void xhud::text_widget::render()
{
    F32 boundX = tb.bounds.x;
    F32 boundY = tb.bounds.y;
    U8 oldRed = tb.font.color.r;
    U8 oldGreen = tb.font.color.g;
    U8 oldBlue = tb.font.color.b;
    U8 oldAlpha = tb.font.color.a;

    U8 alpha;
    F32 fVar1 = (oldAlpha * 200.0f) / 255.0f;
    if (fVar1 > 255.0f)
    {
        alpha = 0xFF;
    }
    else if (fVar1 < 0.0f)
    {
        alpha = 0;
    }
    else
    {
        alpha = fVar1;
    }

    tb.bounds.x += 0.0075f;
    tb.bounds.y += 0.0075f;
    tb.font.color.r = 0x00;
    tb.font.color.g = 0x46;
    tb.font.color.b = 0x55;
    tb.font.color.a = alpha;
    tb.render(true);

    tb.bounds.x = boundX;
    tb.bounds.y = boundY;
    tb.font.color.r = oldRed;
    tb.font.color.g = oldGreen;
    tb.font.color.b = oldBlue;
    tb.font.color.a = oldAlpha;
    tb.render(true);
}
