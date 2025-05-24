#include "xHudModel.h"
#include "xHud.h"
#include "xString.h"

#include <PowerPC_EABI_Support\MSL_C++\MSL_Common\Include\new>
#include <types.h>

xAnimTable* XHUD_AnimTable_Idle()
{
    xAnimTable* table = xAnimTableNew("XHUD_AnimTable_Idle", NULL, 0);
    xAnimTableNewState(table, "Idle01", 0x10, 1, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    return table;
}

namespace xhud
{

    void model_widget::load(xBase& data, xDynAsset& asset, size_t)
    {
        init_base(data, asset, sizeof(xBase) + sizeof(model_widget));
        model_widget* widget = (model_widget*)(&data + 1);
        new (widget) model_widget((model_asset&)asset);
    }

    model_widget::model_widget(const model_asset& masset)
        : widget(masset), mid(masset.model), model(NULL)
    {
        model = load_model(mid);
    }

    void model_widget::destruct()
    {
        widget::destruct();
    }

    void model_widget::destroy()
    {
        destruct();
    }

    // Equivalent: scheduling
    U32 model_widget::type() const
    {
        static U32 myid = xStrHash(model_asset::type_name());
        return myid;
    }

    bool model_widget::is(U32 id) const
    {
        return id == model_widget::type() || widget::is(id);
    }

    void model_widget::update(F32 dt)
    {
        widget::updater(dt);

        if (!visible() || rc.a <= (0.5f / 255.0f))
        {
            return;
        }

        xModelUpdate(model, dt);
        xModelEval(model);
    }

    void model_widget::render()
    {
        if (rc.a <= 0.0f)
        {
            return;
        }

        render_model(*model, rc);
    }

} // namespace xhud
