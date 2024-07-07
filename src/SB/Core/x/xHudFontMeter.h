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

    struct font_meter_widget : meter_widget
    {
        font_context font;
        font_context start_font;
        S32 precision;
        xVec2 offset;
        char buffer[12];
        S32 last_value;
        xfont xf;

        static void load(xBase& data, xDynAsset& asset, size_t);
    };
} // namespace xhud

#endif
