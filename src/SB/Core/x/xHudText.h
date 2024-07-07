#ifndef XHUDTEXT_H
#define XHUDTEXT_H

#include "xHud.h"
#include "xFont.h"

namespace xhud
{
    struct text_asset : asset
    {
        U32 text_box;
        U32 text;
    };

    struct text_widget : widget
    {
        char text[128];
        xtextbox tb;

        text_widget(); // possibly temp, added so zCombo.cpp compiles
        text_widget(const text_asset&);

        static void load(xBase& data, xDynAsset& asset, size_t);

        void render();
        void update(F32 dt);
        U8 is(U32 id);
        void destroy();
        void setup();
    };

}; // namespace xhud

#endif
