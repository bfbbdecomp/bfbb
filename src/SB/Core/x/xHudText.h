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

        static const char* type_name()
        {
            return "hud:text";
        }
    };

    struct text_widget : widget
    {
        char text[128];
        xtextbox tb;

        text_widget(); // possibly temp, added so zCombo.cpp compiles
        text_widget(const text_asset&);

        static void load(xBase& data, xDynAsset& asset, size_t);

        void destruct();

        virtual void destroy();
        virtual U32 type() const;
        virtual bool is(U32 id) const;
        virtual void setup();
        virtual void update(F32 dt);
        virtual void render();
    };

}; // namespace xhud

#endif
