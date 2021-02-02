#ifndef XHUDUNITMETER_H
#define XHUDUNITMETER_H

#include "xHudMeter.h"
#include "xModel.h"

namespace xhud
{
    struct model_info
    {
        uint32 id;
        xVec3 loc;
        xVec3 size;
    };

    struct unit_meter_asset : meter_asset
    {
        model_info model[2];
        xVec3 offset;
        uint32 fill_forward;
    };

    struct unit_meter_widget : meter_widget
    {
        unit_meter_asset res;
        xModelInstance* model[2][6];
        float32 anim_time;

        static void load(xBase& data, xDynAsset& asset, ulong32);
    };
} // namespace xhud

#endif