#include "xHudFontMeter.h"

#include <types.h>
#include <xMath2.h>
#include <PowerPC_EABI_Support\MSL_C\MSL_Common\printf.h>
#include <PowerPC_EABI_Support\MSL_C++\MSL_Common\Include\new.h>

void xhud::font_meter_widget::load(xBase& data, xDynAsset& asset, u32 size_t)
{
    widget::init_base((xBase&)*this, *(xBaseAsset*)&data, sizeof(xhud::font_meter_widget) + 0x10);
    new (&this->rc.size)
        xhud::font_meter_widget(*(xhud::font_meter_asset*)&data); // TODO: proper size value
}

xhud::font_meter_widget::font_meter_widget(xhud::font_meter_asset& init) : meter_widget(init)
{
    basic_rect<F32> screen_bounds;

    this->font.id = init.font.id;
    this->font.justify = init.font.justify;
    this->start_font.id = init.font.id;
    this->start_font.justify = init.font.justify;

    // No assembly for this operator but bytewise is too many instructions
    this->font.c = init.font.c;
    this->start_font.c = init.font.c;
    this->font.drop_c = init.font.drop_c;
    this->start_font.drop_c = init.font.drop_c;

    this->last_value = ((S32)(this->value)) - 20;
    this->xf.id = 0;
    this->xf.width = this->font.w;
    this->xf.height = this->font.h;
    this->xf.space = this->font.space;

    this->xf.color = this->font.c;
    this->xf.clip = screen_bounds;
}

void xhud::font_meter_widget::destruct()
{
    ((xhud::meter_widget*)this)->destruct();
}

void xhud::font_meter_widget::destroy()
{
    this->destruct();
}

U32 xhud::font_meter_widget::type()
{
    static S8 init;
    static U32 myid;

    if (init == 0)
    {
        myid = xStrHash(((xhud::font_meter_asset*)this)->type_name());
        init = 1;
    }
    return myid;
}

U8 xhud::font_meter_widget::is(U32 id)
{
    U8 val = 0;

    if ((id == this->type()) || (((xhud::meter_widget*)this->is(id)) != 0))
    {
        val = 1;
    }
    return val;
}

void xhud::font_meter_widget::update(F32 dt)

{
    char* format_text[3];
    format_text[0] = 0;

    F32 a;
    S32 new_value;
    basic_rect<F32> bounds;

    U8 flag_1;
    U8 flag_2;

    (*this).updater(dt);
    this->xf.id = (this->font).id;
    this->xf.space = (this->font).space;
    a = (*this).rc.size.x;
    this->font.w = a;
    this->xf.width = a;
    a = (*this).rc.size.y;
    this->font.h = a;
    this->xf.height = a;

    a = (*this).rc.a * (F32)this->start_font.c.a + 0.5;
    if (a <= 0.0)
    {
        flag_1 = 0;
    }
    else if (a >= 255.0)
    {
        flag_1 = 255;
    }
    else if (a < 2.1474836e+09)
    {
        flag_1 = (U8)(S32)a;
    }
    else
    {
        flag_1 = (U8)(S32)(a - 2.1474836e+09);
    }
    (this->font).c.a = flag_1;

    a = (*this).rc.a * (F32)this->start_font.drop_c.a + 0.5;
    if (a <= 0.0)
    {
        flag_1 = 0;
    }
    else if (a >= 255.0)
    {
        flag_1 = 255;
    }
    else if (a < 2.1474836e+09)
    {
        flag_1 = (U8)(S32)a;
    }
    else
    {
        flag_1 = (U8)(S32)(a - 2.1474836e+09);
    }
    (this->font).drop_c.a = flag_1;

    new_value = (S32)(this->value + 0.5);
    if (this->last_value != new_value)
    {
        this->last_value = new_value;
        a = this->max_value;
        if (a < this->min_value)
        {
            flag_2 = 0;
        }
        else
        {
            flag_2 = ((font_meter_asset*)(this->a))->counter_mode;
        }
        sprintf(this->buffer, format_text[flag_2], new_value, (S32)(a + 0.5));
        bounds = (&this->xf)->bounds(this->buffer);
        (this->offset).x = -bounds.x;
        (this->offset).y = -bounds.y;
    }
    return;
}

void xhud::font_meter_widget::render()

{
    F32 x;
    F32 temp_x;
    F32 y;

    temp_x = (this->offset).x + this->rc.loc.x;
    y = (this->offset).y + this->rc.loc.y;
    if ((this->font).drop_c.a != '\0')
    {
        (this->xf).color = (this->font).drop_c;
        x = temp_x + (this->font).drop_x;
        (this->xf).render(this->buffer, x, y + (this->font).drop_y);
    }
    if ((this->font).c.a != '\0')
    {
        (this->xf).color = (this->font).c;
        (this->xf).render(this->buffer, temp_x, y);
    }
    return;
}

char* xhud::font_meter_asset::type_name()
{
    return "hud:meter:font";
}
