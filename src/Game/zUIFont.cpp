#include "zUIFont.h"

#include "zSaveLoad.h"

#include "../Core/x/xTextAsset.h"
#include "../Core/x/xstransvc.h"
#include "../Core/x/xMath2.h"
#include "../Core/x/xString.h"
#include "../Core/x/xFont.h"
#include "../Core/x/xTRC.h"
#include "../Core/x/xEvent.h"
#include "../Core/x/xColor.h"

static const basic_rect<float32> _855_0 = { 0, 0, 0, 0 }; // remove when decomping zUIFont_Render

extern float32 _930;
extern float64 _932_0;

static void set_text(zUIFont& uif, uint32 id)
{
    xTextAsset* t;

    uif.text = NULL;

    t = (xTextAsset*)xSTFindAsset(id, NULL);

    if (t)
    {
        uif.text = xTextAssetGetText(t);
    }
}

static uint16 zUIFont_GetHackFlags(zUIFont* uif)
{
    uint16 flags = 0;

    if (uif->id == xStrHash("MNU3 PRESS START"))
    {
        flags |= 0x1;
    }

    if (uif->id == xStrHash("MNU3 PRESS START"))
    {
        flags |= 0x2;
    }

    return flags;
}

void zUIFontInit()
{
}

void zUIFont_Init(void* ent, void* asset)
{
    zUIFont_Init((zUIFont*)ent, (xEntAsset*)asset);
}

void zUIFont_Init(zUIFont* ent, xEntAsset* asset)
{
    zUI_Init(ent, asset);

    ent->render = zUIFont_Render;
    ent->fasset = (zUIFontAsset*)asset;
    ent->text_id = (!ent->fasset) ? 0 : ent->fasset->textAssetID;
    ent->update = (xEntUpdateCallback)zUIFont_Update;
    ent->eventFunc = zUIFontEventCB;

    if (ent->linkCount)
    {
        ent->link = (xLinkAsset*)(ent->fasset + 1);
    }

    ent->uiFontFlags = ent->fasset->uiFontFlags;
    ent->uiFontHackFlags = zUIFont_GetHackFlags(ent);
    ent->uiButton = 0;

    if (ent->flags & 0x40)
    {
        ent->flags ^= 0x40;
    }

    ent->text = NULL;

    switch (ent->fasset->mode)
    {
    case ZUIFONT_MODE_1:
    case ZUIFONT_MODE_2:
    {
        ent->fasset->pos.x = 50.0f;
        ent->fasset->dim[0] = 540;

        // no break here
    }
    case ZUIFONT_MODE_3:
    case ZUIFONT_MODE_4:
    case ZUIFONT_MODE_5:
    case ZUIFONT_MODE_6:
    {
        ent->fasset->fontID = 1;
        ent->fasset->color[0] = 255;
        ent->fasset->color[1] = 230;
        ent->fasset->color[2] = 0;
        ent->fasset->color[3] = 255;
    }
    }

    set_text(*ent, ent->fasset->textAssetID);
}

void zUIFont_Save(zUIFont* ent, xSerial* s)
{
    zUI_Save(ent, s);
}

void zUIFont_Load(zUIFont* ent, xSerial* s)
{
    zUI_Load(ent, s);
}

void zUIFont_Reset(zUIFont* ent)
{
    zUI_Reset(ent);

    ent->uiFontFlags = ent->fasset->uiFontFlags;
    ent->uiButton = 0;

    if (ent->flags & 0x40)
    {
        ent->flags ^= 0x40;
    }
}

void zUIFont_PreUpdate(zUIFont* ent, xScene* sc, float32 dt)
{
    zUI_PreUpdate(ent, sc, dt);
}

void zUIFont_Update(zUIFont* ent, xScene*, float32)
{
    _zUI* ui;
    xBase* sendTo;

    if (ent->uiButton && gTrcPad[0].state == TRC_PadInserted)
    {
        if (ent->uiButton & XPAD_BUTTON_UP)
        {
            zEntEvent(ent, ent, eEventPadPressUp);

            if (ent->id == xStrHash("LD GAMESLOT 2") && !zSaveLoad_slotIsEmpty(0) &&
                zSaveLoad_slotIsEmpty(1) && !zSaveLoad_slotIsEmpty(2))
            {
                zEntEvent(ent, ent, eEventUIUnselect);

                sendTo = zSceneFindObject(xStrHash("LD GAMESLOT 0"));

                zEntEvent(sendTo, eEventUISelect);
            }
        }
        else if (ent->uiButton & XPAD_BUTTON_DOWN)
        {
            zEntEvent(ent, ent, eEventPadPressDown);

            if (ent->id == xStrHash("LD GAMESLOT 0") && !zSaveLoad_slotIsEmpty(0) &&
                zSaveLoad_slotIsEmpty(1) && !zSaveLoad_slotIsEmpty(2))
            {
                zEntEvent(ent, ent, eEventUIUnselect);

                sendTo = zSceneFindObject(xStrHash("LD GAMESLOT 2"));

                zEntEvent(sendTo, eEventUISelect);
            }
        }
        else if (ent->uiButton & XPAD_BUTTON_LEFT)
        {
            zEntEvent(ent, ent, eEventPadPressLeft);
        }
        else if (ent->uiButton & XPAD_BUTTON_RIGHT)
        {
            zEntEvent(ent, ent, eEventPadPressRight);
        }
        else if (ent->uiButton & XPAD_BUTTON_START)
        {
            zEntEvent(ent, ent, eEventPadPressStart);
        }
        else if (ent->uiButton & XPAD_BUTTON_SELECT)
        {
            zEntEvent(ent, ent, eEventPadPressSelect);
        }
        else if (ent->uiButton & XPAD_BUTTON_R1)
        {
            zEntEvent(ent, ent, eEventPadPressR1);
            ent->uiButton = XPAD_BUTTON_R1;
        }
        else if (ent->uiButton & XPAD_BUTTON_R2)
        {
            zEntEvent(ent, ent, eEventPadPressR2);
            ent->uiButton = XPAD_BUTTON_R2;
        }
        else if (ent->uiButton & XPAD_BUTTON_L1)
        {
            zEntEvent(ent, ent, eEventPadPressL1);
        }
        else if (ent->uiButton & XPAD_BUTTON_L2)
        {
            zEntEvent(ent, ent, eEventPadPressL2);
        }
        else if (ent->uiButton & XPAD_BUTTON_X)
        {
            zEntEvent(ent, ent, eEventPadPressX);
        }
        else if (ent->uiButton & XPAD_BUTTON_O)
        {
            zEntEvent(ent, ent, eEventPadPressO);
        }
        else if (ent->uiButton & XPAD_BUTTON_TRIANGLE)
        {
            zEntEvent(ent, ent, eEventPadPressTriangle);
        }
        else if (ent->uiButton & XPAD_BUTTON_SQUARE)
        {
            zEntEvent(ent, ent, eEventPadPressSquare);
        }

        ent->uiFlags &= ~0x40;
    }
}

int32 zUIFontEventCB(xBase* from, xBase* to, uint32 toEvent, const float32* toParam,
                     xBase* toParamWidget)
{
    int32 rval = 1;
    zUIFont* s = (zUIFont*)to;

    switch (toEvent)
    {
    case eEventVisible:
    case eEventFastVisible:
    {
        if (toParam && *(uint32*)&toParam[0])
        {
            set_text(*s, *(uint32*)&toParam[0]);
        }

        xEntShow(s);

        switch (s->fasset->mode)
        {
        case ZUIFONT_MODE_3:
        case ZUIFONT_MODE_4:
        case ZUIFONT_MODE_5:
        {
            zEntEvent("mnu4 xtocontinue", toEvent);
            break;
        }
        case ZUIFONT_MODE_6:
        {
            break;
        }
        }

        break;
    }
    case eEventInvisible:
    case eEventFastInvisible:
    {
        xEntHide(s);

        switch (s->fasset->mode)
        {
        case ZUIFONT_MODE_3:
        case ZUIFONT_MODE_4:
        case ZUIFONT_MODE_5:
        {
            zEntEvent("mnu4 xtocontinue", toEvent);
            break;
        }
        case ZUIFONT_MODE_6:
        {
            break;
        }
        }

        break;
    }
    case eEventReset:
    {
        zUIFont_Reset(s);
        break;
    }
    case eEventFontBackdropOn:
    {
        s->uiFontFlags |= 0x8;
        break;
    }
    case eEventFontBackdropOff:
    {
        if (s->uiFontFlags & 0x8)
        {
            s->uiFontFlags ^= 0x8;
        }

        break;
    }
    case eEventSetText:
    {
        if (toParam)
        {
            set_text(*s, *(uint32*)&toParam[0]);
        }

        break;
    }
    case eEventClearText:
    {
        s->text = NULL;
        break;
    }
    default:
    {
        rval = zUIEventCB(from, to, toEvent, toParam, toParamWidget);
        break;
    }
    }

    return rval;
}

#ifndef NON_MATCHING
// func_800BCC98
#pragma GLOBAL_ASM("asm/Game/zUIFont.s", "zUIFont_Render__FP4xEnt")
#else
void zUIFont_Render(xEnt* e)
{
    zUIFont* ent = (zUIFont*)e;

    if (!xEntIsVisible(ent))
    {
        return;
    }

    iColor_tag var_104;
    var_104.r = ent->fasset->color[0];
    var_104.g = ent->fasset->color[1];
    var_104.b = ent->fasset->color[2];
    var_104.a = ent->fasset->color[3];

    if (ent->uiFontFlags & 0x10)
    {
        if (ent->uiFontFlags & 0x80)
        {
            ent->uiFontFlags ^= 0x80;
        }

        if (ent->uiFontFlags & 0x20 && !(ent->uiFlags & 0x2))
        {
            ent->uiFontFlags |= 0x80;
            var_104.a >>= 1;
        }

        if (ent->uiFontFlags & 0x40 && !(ent->uiFlags & 0x8))
        {
            ent->uiFontFlags |= 0x80;
            var_104.a >>= 1;
        }
    }

    if (!(ent->uiFlags & 0x4))
    {
        return;
    }

    zUIFontAsset& a = *ent->fasset;

    if (!ent->text || ent->text[0] == '\0')
    {
        if (ent->uiFontFlags & 0x8)
        {
            iColor_tag c = xColorFromRGBA(a.bcolor[0], a.bcolor[1], a.bcolor[2], a.bcolor[3]);
            basic_rect<float32> r = { NSCREENX(a.pos.x), NSCREENY(a.pos.y), NSCREENX(a.dim[0]),
                                      NSCREENY(a.dim[1]) };

            render_fill_rect(r, c);
        }
    }
    else
    {
        xtextbox tb;

        tb.font.id = a.fontID;
        tb.font.width = NSCREENX(a.cdim[0]);
        tb.font.height = NSCREENY(a.cdim[1]);
        tb.font.space = NSCREENX(a.space[0]) - tb.font.width;
        tb.font.color = var_104;
        tb.font.clip.assign(NSCREENX(a.pos.x), NSCREENY(a.pos.y), NSCREENX(a.dim[0]),
                            NSCREENY(a.dim[1]));
        tb.bounds = tb.font.clip;
        tb.bounds.contract(NSCREENX(a.inset[2]), NSCREENY(a.inset[0]), NSCREENX(a.inset[3]),
                           NSCREENY(a.inset[1]));

        tb.flags = 0;

        if (ent->uiFontFlags & 0x4)
        {
            tb.flags |= 0x2;
        }
        else if (ent->uiFontFlags & 0x2)
        {
            tb.flags |= 0x1;
        }

        tb.set_text(ent->text);

        if (a.uiFontFlags & 0xc00)
        {
            int32 size;
            float32 yextent;

            yextent = tb.yextent(NSCREENY(a.max_height), size, true);

            if (yextent > tb.bounds.h)
            {
                if ((a.uiFontFlags & 0xc00) == 0xc00)
                {
                    tb.bounds.y -= 0.5f * (yextent - tb.bounds.h);
                }
                else if (a.uiFontFlags & 0x400)
                {
                    tb.bounds.y -= yextent - tb.bounds.h;
                }

                tb.bounds.h = yextent;
            }
        }

        if (ent->uiFontFlags & 0x8)
        {
            iColor_tag c = xColorFromRGBA(a.bcolor[0], a.bcolor[1], a.bcolor[2], a.bcolor[3]);

            render_fill_rect(tb.font.clip, c);
        }

        tb.render(true);
    }
}
#endif

float32 xtextbox::yextent(float32 max, int32& size, bool cache) const
{
    return yextent(max, size, temp_layout(cache), 0, -1);
}

__declspec(section ".sdata2") static float32 _930 = 0.5f;
__declspec(section ".sdata2") static float64 _932_0 = 4.503599627370496e15;