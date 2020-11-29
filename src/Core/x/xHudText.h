#ifndef XHUDTEXT_H
#define XHUDTEXT_H

#include "xHud.h"
#include "xFont.h"

namespace xhud
{
    struct text_widget : widget
    {
        int8 text[128];
        xtextbox tb;

        void render();
        void update(float32 dt);
        uint8 is(uint32 id);
        void destroy();
        void setup();
    };

}; // namespace xhud

#endif