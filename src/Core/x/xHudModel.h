#ifndef XHUDMODEL_H
#define XHUDMODEL_H

#include "xAnim.h"
#include "xHud.h"

namespace xhud
{
    struct model_asset : asset
    {
        uint32 model;

        char* type_name();
    };

    struct model_widget : widget
    {
        uint32 mid;
        xModelInstance* model;

        static void load(xBase& data, xDynAsset& asset, ulong32);
    };
} // namespace xhud

xAnimTable* XHUD_AnimTable_Idle();

#endif