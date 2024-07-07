#ifndef XHUDMODEL_H
#define XHUDMODEL_H

#include "xAnim.h"
#include "xHud.h"

namespace xhud
{
    struct model_asset : asset
    {
        U32 model;

        char* type_name();
    };

    struct model_widget : widget
    {
        U32 mid;
        xModelInstance* model;

        static void load(xBase& data, xDynAsset& asset, size_t);
    };
} // namespace xhud

xAnimTable* XHUD_AnimTable_Idle();

#endif
