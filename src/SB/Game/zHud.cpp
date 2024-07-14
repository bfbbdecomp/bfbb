#include "xHud.h"
#include "zHud.h"

#include <types.h>
#include <string.h>

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