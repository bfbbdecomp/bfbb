#ifndef XHUDMODEL_H
#define XHUDMODEL_H

#include "xAnim.h"
#include "xHud.h"

namespace xhud
{
    struct model_asset : asset
    {
        U32 model;

        static const char* type_name()
        {
            return "hud:model";
        }
    };

    struct model_widget : widget
    {
        U32 mid;
        xModelInstance* model;

        model_widget(const model_asset&);

        static void load(xBase& data, xDynAsset& asset, size_t);

        void destruct();

        virtual void destroy();
        virtual U32 type() const;
        virtual bool is(U32 id) const;
        virtual void update(F32 dt);
        virtual void render();
    };
} // namespace xhud

xAnimTable* XHUD_AnimTable_Idle();

#endif
