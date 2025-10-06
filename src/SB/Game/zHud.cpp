#include "xHud.h"
#include "xHudText.h"
#include "xHudFontMeter.h"
#include "xString.h"
#include "zHud.h"
#include "zScene.h"

#include <types.h>
#include <string.h>

// TODO: This also lives in zCombo - those should be moved to a header at some point
struct widget_chunk : xBase
{
    xhud::text_widget w;
};

namespace zhud
{
    namespace
    {
        widget widgets[];
        bool inited;
        bool last_paused = true;
    }
    
    void zhud::render()
    {
        xhud::render();
    }
    
    void zhud::init()
    {
        inited = true;
        xhud::init();
    }
    
    void zhud::destroy()
    {
        inited = false;
        memset(widgets, 0x0, 0x24);
        xhud::destroy();
        last_paused = true;
    }
}