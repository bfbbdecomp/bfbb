#ifndef XHUDUNITMETER_H
#define XHUDUNITMETER_H

#include "xHudMeter.h"
#include "xModel.h"

namespace xhud
{
    struct model_info
    {
        U32 id;
        xVec3 loc;
        xVec3 size;
    };

    struct unit_meter_asset : meter_asset
    {
        model_info model[2];
        xVec3 offset;
        U32 fill_forward;

        static const char* type_name()
        {
            return "hud:meter:unit";
        }
    };

    struct unit_meter_widget : meter_widget
    {
        unit_meter_asset res;
        xModelInstance* model[2][6];
        F32 anim_time;

        unit_meter_widget(const unit_meter_asset& other_widget);

        static void load(xBase& data, xDynAsset& asset, size_t arg2);
        void destruct();
        void destroy();
        U32 type() const;
        bool is(U32 id) const;
        void setup();
        void update(F32 dt);
        void render();
    };
} // namespace xhud

#endif
