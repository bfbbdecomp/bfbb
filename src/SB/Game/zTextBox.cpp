#include "zTextBox.h"

#include "zBase.h"

#include "xEvent.h"
#include "xstransvc.h"
#include "xTextAsset.h"

#include <string.h>

extern F32 _720_1;
extern F32 _721_1;
extern F32 _722_0;
extern F32 _723_0;
extern F32 _761_1;

static RwIm2DVertex vert_701[6]; // todo: move to render_bk_tex_scale

iColor_tag convert(const ztextbox::asset_type::color_type& color);

namespace
{
    ztextbox* head_active;

    typedef void (*render_bk_callback)(const ztextbox& e);

    void render_bk_fill(const ztextbox& e);
    void render_bk_tex_scale(const ztextbox& e);
    void render_bk_tex_wrap(const ztextbox& e);

    render_bk_callback render_bk_table[] = { render_bk_fill, render_bk_tex_scale,
                                             render_bk_tex_wrap };

    void parse_tag_blahblah(xtextbox::jot&, const xtextbox&, const xtextbox&,
                            const xtextbox::split_tag&);

    xtextbox::tag_type new_tags[] = { SUBSTR("blahblah"), parse_tag_blahblah, NULL, NULL };
    U32 new_tags_size = sizeof(new_tags) / sizeof(new_tags[0]);

    void set_vert(RwIm2DVertex& vert, F32 x, F32 y, F32 u, F32 v, iColor_tag c, F32 nsz, F32 rcz);

    void render_bk_fill(const ztextbox& e)
    {
        const ztextbox::asset_type& a = *e.asset;

        render_fill_rect(e.tb.font.clip, convert(a.backdrop.color));
    }

    void render_bk_tex_scale(const ztextbox& e)
    {
        // non-matching: float instruction order

        iColor_tag c = convert(e.asset->backdrop.color);

        F32 rcz = _720_1 / RwCameraGetNearClipPlane(RwCameraGetCurrentCamera());
        F32 nsz = RwIm2DGetNearScreenZ();

        xfont::set_render_state(e.bgtex);

        basic_rect<F32> r = e.tb.font.clip;
        r.scale(_721_1, _722_0);

        set_vert(vert_701[0], r.x, r.y, _723_0, _720_1, c, nsz, rcz);
        set_vert(vert_701[1], r.x, r.y + r.h, _723_0, _720_1, c, nsz, rcz);
        set_vert(vert_701[2], r.x + r.w, r.y, _720_1, _723_0, c, nsz, rcz);

        vert_701[3] = vert_701[2];
        vert_701[4] = vert_701[1];

        set_vert(vert_701[5], r.x + r.w, r.y + r.h, _720_1, _720_1, c, nsz, rcz);

        RwIm2DRenderPrimitive(rwPRIMTYPETRILIST, vert_701, 6);

        xfont::restore_render_state();
    }

    void set_vert(RwIm2DVertex& vert, F32 x, F32 y, F32 u, F32 v, iColor_tag c, F32 nsz, F32 rcz)
    {
        RwIm2DVertexSetScreenX(&vert, x);
        RwIm2DVertexSetScreenY(&vert, y);
        RwIm2DVertexSetScreenZ(&vert, nsz);
        RwIm2DVertexSetU(&vert, u, rcz);
        RwIm2DVertexSetV(&vert, v, rcz);
        RwIm2DVertexSetIntRGBA(&vert, c.r, c.g, c.b, c.a);
    }

    void render_bk_tex_wrap(const ztextbox& e)
    {
    }

    void init_textbox(ztextbox& e)
    {
        static const U32 xjlookup[] = { 0x0, 0x2, 0x1 };

        ztextbox::asset_type& a = *e.asset;

        e.tb.flags = 0;
        e.tb.font.id = a.font;
        e.tb.font.width = a.size.width;
        e.tb.font.height = a.size.height;
        e.tb.font.space = a.space.x;
        e.tb.line_space = a.space.y;
        e.tb.font.color = convert(a.color);
        e.tb.bounds.x = a.bounds.x + a.inset.left;
        e.tb.bounds.y = a.bounds.y + a.inset.top;
        e.tb.bounds.w = a.bounds.w - a.inset.left - a.inset.right;
        e.tb.bounds.h = a.bounds.h - a.inset.top - a.inset.bottom;
        e.tb.flags |= (a.xjustify >= 3) ? xjlookup[0] : xjlookup[a.xjustify];
        e.tb.set_text(e.segments, e.segments_size);

        if (a.expand < ztextbox::asset_type::MAX_EX && a.max_height > a.bounds.h)
        {
            S32 lines;
            F32 minh = e.tb.bounds.h;
            F32 maxh = a.max_height - a.inset.top - a.inset.bottom;

            e.tb.bounds.h = maxh;
            e.tb.bounds.h = e.tb.yextent(maxh, lines, true);

            if (e.tb.bounds.h > minh)
            {
                F32 hmore = e.tb.bounds.h - minh;

                if (a.expand == ztextbox::asset_type::EX_CENTER)
                {
                    e.tb.bounds.y -= _761_1 * hmore;
                }
                else if (a.expand == ztextbox::asset_type::EX_UP)
                {
                    e.tb.bounds.y -= hmore;
                }
            }
            else
            {
                e.tb.bounds.h = minh;
            }
        }

        e.tb.font.clip.x = e.tb.bounds.x - a.inset.left;
        e.tb.font.clip.y = e.tb.bounds.y - a.inset.top;
        e.tb.font.clip.w = e.tb.bounds.w + a.inset.left + a.inset.right;
        e.tb.font.clip.h = e.tb.bounds.h + a.inset.top + a.inset.bottom;
    }

    void parse_tag_blahblah(xtextbox::jot&, const xtextbox&, const xtextbox&,
                            const xtextbox::split_tag&)
    {
    }

    S32 cb_dispatch(xBase*, xBase* to, U32 event, const F32* argf, xBase*)
    {
        ztextbox& e = *(ztextbox*)to;

        switch (event)
        {
        case eEventReset:
        case eEventSceneEnd:
        {
            e.reset();
            break;
        }
        case eEventFontBackdropOn:
        {
            e.flag.show_backdrop = true;
            break;
        }
        case eEventFontBackdropOff:
        {
            e.flag.show_backdrop = false;
            break;
        }
        case eEventVisible:
        {
            if (argf && *(U32*)&argf[0])
            {
                e.set_text(*(U32*)&argf[0]);
            }

            e.activate();
            break;
        }
        case eEventInvisible:
        {
            e.deactivate();
            break;
        }
        case eEventSetText:
        {
            if (argf)
            {
                e.set_text(*(U32*)&argf[0]);
            }

            break;
        }
        case eEventAddText:
        {
            if (argf)
            {
                e.add_text(*(U32*)&argf[0]);
            }

            break;
        }
        case eEventClearText:
        {
            e.clear_text();
            break;
        }
        }

        return 1;
    }
} // namespace

void ztextbox::load(const asset_type& a)
{
    xBaseInit(this, (xBaseAsset*)&a);

    baseType = eBaseTypeTextBox;
    asset = (asset_type*)&a;
    eventFunc = cb_dispatch;

    if (linkCount)
    {
        link = (xLinkAsset*)(&a + 1);
    }

    tb.context = this;
    prev = NULL;
    next = NULL;

    memset(&flag, 0, sizeof(flag));

    bgtex = NULL;

    if (a.backdrop.texture)
    {
        RwTexture* tex = (RwTexture*)xSTFindAsset(a.backdrop.texture, NULL);
        bgtex = RwTextureGetRaster(tex);
    }

    reset();
}

void ztextbox::update(xScene&, F32)
{
}

void ztextbox::reset()
{
    deactivate();

    segments_size = 0;
    flag.dirty = true;
    flag.show_backdrop = true;

    set_text(asset->text);
}

void ztextbox::render()
{
    if (flag.dirty)
    {
        init_textbox(*this);
        flag.dirty = false;
    }

    if (flag.show_backdrop)
    {
        render_backdrop();
    }

    tb.render(true);
}

void ztextbox::render_backdrop()
{
    if (asset->backdrop.type < sizeof(render_bk_table) / sizeof(render_bk_table[0]))
    {
        render_bk_table[asset->backdrop.type](*this);
    }
}

void ztextbox::activate()
{
    if (flag.active)
    {
        return;
    }

    flag.active = true;
    flag.visible = true;

    prev = NULL;
    next = head_active;

    if (head_active)
    {
        head_active->prev = this;
    }

    head_active = this;
}

void ztextbox::deactivate()
{
    if (!flag.active)
    {
        return;
    }

    flag.active = false;
    flag.visible = false;

    if (prev)
    {
        prev->next = next;
    }

    if (next)
    {
        next->prev = prev;
    }

    if (head_active == this)
    {
        head_active = next;
    }
}

void ztextbox::set_text(const char* s)
{
    clear_text();
    add_text(s);
}

void ztextbox::set_text(U32 id)
{
    if (!id)
    {
        return;
    }

    xTextAsset* ta = (xTextAsset*)xSTFindAsset(id, NULL);

    if (!ta)
    {
        clear_text();
    }
    else
    {
        set_text(xTextAssetGetText(ta));
    }
}

void ztextbox::add_text(const char* s)
{
    if (!s)
    {
        return;
    }

    segments[segments_size] = s;
    segments_size++;

    flag.dirty = true;
}

void ztextbox::add_text(U32 id)
{
    if (!id)
    {
        return;
    }

    xTextAsset* ta = (xTextAsset*)xSTFindAsset(id, NULL);

    if (ta)
    {
        add_text(xTextAssetGetText(ta));
    }
}

void ztextbox::clear_text()
{
    segments_size = 0;
    flag.dirty = true;
}

void ztextbox::refresh()
{
    if (flag.dirty)
    {
        init_textbox(*this);
        flag.dirty = false;
    }
}

void ztextbox::get_text(char* buffer, size_t buffer_size) const
{
    const char* const* it = segments;
    const char* const* end = it + segments_size;

    while (it != end)
    {
        const char* s = *it;
        U32 len = strlen(s);

        if (len >= buffer_size)
        {
            memcpy(buffer, s, buffer_size - 1);
            buffer += buffer_size - 1;
            break;
        }

        memcpy(buffer, s, len);
        buffer += len;
        it++;
    }

    *buffer = '\0';
}

void ztextbox::init()
{
    xtextbox::register_tags(new_tags, new_tags_size);

    head_active = NULL;
}

void ztextbox::load(xBase& data, xDynAsset& asset, size_t)
{
    ((ztextbox&)data).load((asset_type&)asset);
}

void ztextbox::update_all(xScene& s, F32 dt)
{
    ztextbox* it = head_active;

    while (it)
    {
        it->update(s, dt);
        it = it->next;
    }
}

void ztextbox::render_all()
{
    ztextbox* it = head_active;

    while (it)
    {
        it->render();
        it = it->next;
    }
}

iColor_tag convert(const ztextbox::asset_type::color_type& color)
{
    iColor_tag c;
    c.r = color.r;
    c.g = color.g;
    c.b = color.b;
    c.a = color.a;
    return c;
}
