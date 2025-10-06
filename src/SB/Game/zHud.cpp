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

        static void hide_widget(xhud::widget& widget, xhud::motive& motive)
        {
            widget.hide();
        }

        static void ping_widget(xhud::widget& widget)
        {
            widget.show();
            widget.add_motive(xhud::motive((F32*)&widget.rc.loc.x, 0.02f, 0.0f, 0.5f, xhud::shake_motive_update, NULL));
        }

        static void delay_hide_widget(xhud::widget& widget) {
            widget.add_motive(xhud::motive(NULL, 0.0f, 4.0f, 0.0f, xhud::delay_motive_update, (void*)hide_widget));
        }

        static xhud::widget* get_meter_widget(S32 index) {
            static U32 meter_type = xStrHash(((xhud::meter_widget*) widgets[index])->res.type_name());

            return widgets[index];
        }

        static xhud::widget* get_model_widget(S32 index) {
            static U32 model_type = xStrHash(((xhud::model_asset*) widgets[index]->a)->type_name());

            return widgets[index];
        }

        static void on_pause() {
            show();
        }

        // Surely there was some debug code here that got debug macro'd away?
        static void on_unpause() {
            if (inited) {
                return;
            }
        }
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