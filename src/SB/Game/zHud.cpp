#include "xHud.h"
#include "xHudText.h"
#include "xHudFontMeter.h"
#include "xHudModel.h"
#include "xString.h"
#include "zHud.h"
#include "zScene.h"
#include "zGlobals.h"
#include "zGameState.h"
#include "zGame.h"

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

        static char* widget_resources[9] = { "HUD_INT_METER_SHINY",   "HUD_INT_METER_SPATULA",
                                             "HUD_MODEL_SHINY",       "HUD_MODEL_SPATULA",
                                             "HUD_UNIT_METER_HEALTH", "HUD_INT_METER_PATSSOCK",
                                             "HUD_MODEL_PATSSOCK",    "HUD_INT_METER_SPECIAL",
                                             "HUD_MODEL_SPECIAL" };
        static special_data level_specials[15] = { {},
                                                   { "HUD_MODEL_JF_ANTITODE", 1 },
                                                   { "HUD_MODEL_BB_STEERINGWHEEL", 11 },
                                                   { "HUD_MODEL_GL_BALLOON", 5 },
                                                   {},
                                                   { "HUD_MODEL_RB_ARTPIECES", 6 },
                                                   { "HUD_MODEL_BC_SECURITYBUTTONS", 4 },
                                                   {},
                                                   {},
                                                   { "HUD_MODEL_KF_LIGHTCRYSTALS", 6 },
                                                   { "HUD_MODEL_GY_CANNONS", 4 },
                                                   {} };

        static const S32 meter_widget_index[5] = { 4, 0, 1, 5, 7 };
        static const S32 model_widget_index[5] = { -1, 2, 3, 6, 8 };

        bool inited;
        bool last_paused = true;

        static void hide_widget(xhud::widget& widget, xhud::motive& motive)
        {
            widget.hide();
        }

        static void ping_widget(xhud::widget& widget)
        {
            widget.show();
            widget.add_motive(xhud::motive((F32*)&widget.rc.loc.x, 0.02f, 0.0f, 0.5f,
                                           xhud::shake_motive_update, NULL));
        }

        static void delay_hide_widget(xhud::widget& widget)
        {
            widget.add_motive(xhud::motive(NULL, 0.0f, 4.0f, 0.0f, xhud::delay_motive_update,
                                           (void*)hide_widget));
        }

        static xhud::widget* get_meter_widget(S32 index)
        {
            static U32 meter_type =
                xStrHash(((xhud::meter_widget*)widgets[index])->res.type_name());

            return widgets[index];
        }

        static xhud::widget* get_model_widget(S32 index)
        {
            static U32 model_type = xStrHash(((xhud::model_asset*)widgets[index]->a)->type_name());

            return widgets[index];
        }

        static void on_pause()
        {
            show();
        }

        // Surely there was some debug code here that got debug macro'd away?
        static void on_unpause()
        {
            if (inited)
            {
                return;
            }
        }
    } // namespace

    void zhud::init()
    {
        inited = true;
        xhud::init();
    }

    void zhud::setup()
    {
        S32 i;
        U32 id;
        widget_chunk* wc;

        xhud::setup();

        for (i = 0; i < 7; i++)
        {
            id = xStrHash(widget_resources[i]);
            wc = (widget_chunk*)zSceneFindObject(id);
            widgets[i] = &wc->w;
            widgets[i]->enable();
        }

        special_data& special = level_specials[zSceneGetLevelIndex()];
        if (special.hud_model == NULL)
        {
            widgets[7] = NULL;
            widgets[8] = NULL;
        }
        else
        {
            xhud::font_meter_widget* meter = (xhud::font_meter_widget*)zSceneFindObject(xStrHash(widget_resources[7]));
            meter->max_value = (F32)special.max_value;
            meter->get_asset()->counter_mode = 1;
            widgets[7] = meter;
            meter->enable();

            // TODO: the return of zSceneFindObject isn't a model_widget, but an object that contains a model_widget at 0x10
            //       what is it???
            xhud::model_widget* model = (xhud::model_widget*)zSceneFindObject(xStrHash(special.hud_model));
            widgets[8] = model;
            model->enable();
        }
        
        memset(max_value, 0x0, sizeof(max_value));
        
        value[0] = globals.player.Health;
        max_value[0] = globals.player.MaxHealth;
        value[1] = globals.player.Inv_Shiny;
        value[2] = globals.player.Inv_Spatula;
        value[3] = globals.player.Inv_PatsSock_Total;
        value[4] = globals.player.Inv_LevelPickups_CurrentLevel;

        for (i = 0; i < 5; i++) 
        {
            if (widgets[meter_widget_index[i]] != NULL) 
            {
                xhud::meter_widget* meter = (xhud::meter_widget*)get_meter_widget(meter_widget_index[i]);
                if (max_value[i] != 0)
                {
                    old_max_value[i] = max_value[i];
                    meter->max_value = (F32)max_value[i];
                }

                old_value[i] = value[i];
                meter->set_value_immediate((F32)value[i]);
                hiding[i] = 0;
            }
        }
    }

    void zhud::destroy()
    {
        inited = false;
        memset(widgets, 0x0, 0x24);
        xhud::destroy();
        last_paused = true;
    }

    void zhud::update(F32 dt)
    {
        S32 i = 0;

        if (globals.cmgr != NULL && globals.cmgr->csn->Ready != 0)
        {
            zhud::hide();
        }

        if (gGameMode == eGameMode_Stall)
        {
            zhud::hide();
        }

        if (!globals.player.ControlOff && globals.pad0->pressed & 0x100000 && !zGameIsPaused() &&
            globals.sceneCur->sceneID != 'PG12')
        {
            zhud::show();
        }

        if (!last_paused && zGameIsPaused())
        {
            on_pause();
            last_paused = true;
        }
        else if (last_paused && !zGameIsPaused())
        {
            on_unpause();
            last_paused = false;
        }

        for (i = 0; i < 5; i++)
        {
            U32 updated_value = 1;
            if (value[i] == old_value[i])
            {
                updated_value = 0;
            }
            
            U32 another_updated_value = 0;
            if (updated_value & 0xFF || (max_value[i] != 0 && old_max_value[i] != max_value[i]))
            {
                another_updated_value = 1;
            }
            
            if (another_updated_value & 0xFF)
            {
                S32 meter_idx = meter_widget_index[i];
                if (widgets[meter_idx] != NULL) 
                {
                    xhud::meter_widget* meter = (xhud::meter_widget*)get_meter_widget(meter_idx);
                    if (max_value[i] != 0)
                    {
                        old_max_value[i] = max_value[i];
                        meter->max_value = (F32)max_value[i];
                    }     
                    
                    old_value[i] = value[i];
                    meter->set_value((F32)value[i]);

                    hiding[i] = 0;
                    ping_widget(*meter);

                    if (model_widget_index[i] != -1) 
                    {
                        ping_widget(*get_model_widget(model_widget_index[i]));
                    }
                }
            }
        }

        if (!zGameIsPaused())
        {
            for (i = 0; i < 5; ++i)
            {
                S32 meter_idx = meter_widget_index[i];
                if (widgets[meter_idx] != NULL)
                {
                    xhud::meter_widget* meter = (xhud::meter_widget*)get_meter_widget(meter_idx);
                    if (!(U8)meter->changing() && !hiding[i])
                    {
                        hiding[i] = 1;
                        delay_hide_widget(*meter);

                        if (model_widget_index[i] != -1)
                        {
                            delay_hide_widget(*get_model_widget(model_widget_index[i]));
                        }
                    }
                }
            }
        }

        xhud::update(dt);
    }

    void zhud::render()
    {
        xhud::render();
    }

    void zhud::show()
    {
        U32 i = 0;
        while (&widgets[i] < &widgets[6])
        {
            if (widgets[i] != NULL)
            {
                xhud::widget* widget = widgets[i];
                widget->clear_motives(xhud::delay_motive_update, (void*)zhud::hide_widget);
                if (!(widget->showing() & 0xFF)) 
                {
                    widget->show();
                }
            }

            i++;
        }

        for (i = 0; i < 5; i++)
        {
            hiding[i] = FALSE;
        }
    }

    void zhud::hide()
    {
        U32 i = 0;

        while (&widgets[i] < &widgets[6])
        {
            xhud::widget* widget = widgets[i];
            if (widget != NULL)
            {
                if (!(widget->hiding() & 0xFF))
                {
                    widget->hide();
                }
            }
            i++;
        }

        for (i = 0; i < 5; i++)
        {
            hiding[i] = FALSE;
        }
    }
} // namespace zhud
