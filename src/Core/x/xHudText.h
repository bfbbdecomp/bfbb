#ifndef XHUDTEXT_H
#define XHUDTEXT_H

#include "xHud.h"
#include "xFont.h"

namespace xhud
{
    struct text_asset : asset
    {
        uint32 text_box;
        uint32 text;
    };

    struct text_widget : widget
    {
        int8 text[128];
        xtextbox tb;

        text_widget(); // possibly temp, added so zCombo.cpp compiles
        text_widget(const text_asset&);

        static void load(xBase& data, xDynAsset& asset, ulong32);

        void render();
        void update(float32 dt);
        uint8 is(uint32 id);
        void destroy();
        void setup();
    };

}; // namespace xhud

#endif