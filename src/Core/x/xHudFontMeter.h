#ifndef XHUDFONTMETER_H
#define XHUDFONTMETER_H

#include "xHudMeter.h"
#include "xFont.h"

namespace xhud
{
    struct font_context
    {
        uint32 id;
        int32 justify;
        float32 w;
        float32 h;
        float32 space;
        float32 drop_x;
        float32 drop_y;
        color32u c;
        color32u drop_c;
    };

    struct font_meter_widget : meter_widget
    {
        font_context font;
        font_context start_font;
        int32 precision;
        xVec2 offset;
        int8 buffer[12];
        int32 last_value;
        xfont xf;

        static void load(xBase& data, xDynAsset& asset, ulong32);
    };
} // namespace xhud

#endif