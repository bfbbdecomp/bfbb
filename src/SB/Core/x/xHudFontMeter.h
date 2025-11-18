#ifndef XHUDFONTMETER_H
#define XHUDFONTMETER_H

#include "xHudMeter.h"
#include "xFont.h"

namespace xhud
{
    struct font_context
    {
        U32 id;
        S32 justify;
        F32 w;
        F32 h;
        F32 space;
        F32 drop_x;
        F32 drop_y;
        color32u c;
        color32u drop_c;
    };

    struct font_meter_asset : meter_asset
    {
        font_context font; // offset 0x4C, size 0x24
        U8 counter_mode; // offset 0x70, size 0x1
        U8 pad1; // offset 0x71, size 0x1
        U8 pad2; // offset 0x72, size 0x1
        U8 pad3; // offset 0x73, size 0x1

        char* type_name();
    };

    struct font_meter_widget : meter_widget
    {
        font_context font; // 0xC4
        font_context start_font; // 0xE8
        S32 precision; // 0x10C
        xVec2 offset; // 0x110
        char buffer[12]; // 0x118
        S32 last_value; // 0x124
        xfont xf; // 0x128

        static void load(xBase& data, xDynAsset& asset, size_t);
        font_meter_widget(xhud::font_meter_asset& init);
        void destruct();
        void destroy();
        U32 type();
        U8 is(U32 id);
        void update(F32 dt);
        void render();

        font_meter_asset* get_asset()
        {
            return (font_meter_asset*)a;
        }
    };
} // namespace xhud

#endif
