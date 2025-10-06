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
        static U8 hiding[5];

        static U32 value[5];
        static U32 old_value[5];
        static U32 max_value[5];
        static U32 old_max_value[5];
        static xhud::widget* widgets[9];

        static char* widget_resources[9] = {
            "HUD_INT_METER_SHINY",
            "HUD_INT_METER_SPATULA",
            "HUD_MODEL_SHINY",
            "HUD_MODEL_SPATULA",
            "HUD_UNIT_METER_HEALTH",
            "HUD_INT_METER_PATSSOCK",
            "HUD_MODEL_PATSSOCK",
            "HUD_INT_METER_SPECIAL",
            "HUD_MODEL_SPECIAL"
        };
        static special_data level_specials[15] = {
            {},
            {"HUD_MODEL_JF_ANTITODE", 1},
            {"HUD_MODEL_BB_STEERINGWHEEL", 11},
            {"HUD_MODEL_GL_BALLOON", 5},
            {},
            {"HUD_MODEL_RB_ARTPIECES", 6},
            {"HUD_MODEL_BC_SECURITYBUTTONS", 4},
            {},
            {},
            {"HUD_MODEL_KF_LIGHTCRYSTALS", 6},
            {"HUD_MODEL_GY_CANNONS", 4},
            {}
        };

        static const S32 meter_widget_index[5] = {4, 0, 1, 5, 7};
        static const S32 model_widget_index[5] = {-1, 2, 3, 6, 8};

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