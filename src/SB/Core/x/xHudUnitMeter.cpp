#include "xHudUnitMeter.h"
#include "xString.h"

#include <PowerPC_EABI_Support/MSL_C++/MSL_Common/Include/new.h>
#include <types.h>

void xhud::unit_meter_widget::load(xBase& data, xDynAsset& asset, size_t arg2)
{
    this->init_base(data, asset, sizeof(xBase) + sizeof(unit_meter_widget));
    unit_meter_widget* widget = (unit_meter_widget*)(&data + 1);
    new (widget) unit_meter_widget((unit_meter_asset&)asset);
}

void xhud::unit_meter_widget::destruct()
{
    meter_widget::destruct();
}

void xhud::unit_meter_widget::destroy()
{
    this->destruct();
}

U32 xhud::unit_meter_widget::type() const
{
    static U32 myid = xStrHash(((unit_meter_asset*)a)->type_name());
    return myid;
}

bool xhud::unit_meter_widget::is(U32 id) const
{
    bool isType = false;
    if (unit_meter_widget::type() == id || meter_widget::is(id))
    {
       isType = true;
    }

    return isType;
}

void xhud::unit_meter_widget::setup()
{
    widget::presetup();
}

void xhud::unit_meter_widget::update(F32 dt)
{
    meter_widget::updater(dt);

    if (!widget::visible() || this->rc.a >= (5.0f / 255.0f))
    {
        return;
    }

    anim_time += dt;

    // S32 units = 
    // while () {

    // }
}
