#include "xHudUnitMeter.h"

#include <types.h>

// xhud::unit_meter_widget::load(xBase&,xDynAsset&,unsigned long)
#pragma GLOBAL_ASM("asm/Core/x/xHudUnitMeter.s", "load__Q24xhud17unit_meter_widgetFR5xBaseR9xDynAssetUl")

// xhud::unit_meter_widget::unit_meter_widget(const xhud::unit_meter_asset&)
#pragma GLOBAL_ASM("asm/Core/x/xHudUnitMeter.s", "__ct__Q24xhud17unit_meter_widgetFRCQ24xhud16unit_meter_asset")

// xhud::unit_meter_widget::destruct()
#pragma GLOBAL_ASM("asm/Core/x/xHudUnitMeter.s", "destruct__Q24xhud17unit_meter_widgetFv")

// xhud::unit_meter_widget::type() const
#pragma GLOBAL_ASM("asm/Core/x/xHudUnitMeter.s", "type__Q24xhud17unit_meter_widgetCFv")

// xfmod(float,float)
#pragma GLOBAL_ASM("asm/Core/x/xHudUnitMeter.s", "xfmod__Fff")

// std::fmodf(float,float)
#pragma GLOBAL_ASM("asm/Core/x/xHudUnitMeter.s", "fmodf__3stdFff")

// xDebugAddTweak(const char*,float*,float,float,const tweak_callback*,void*,unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xHudUnitMeter.s", "xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi")

// xhud::unit_meter_asset::type_name()
#pragma GLOBAL_ASM("asm/Core/x/xHudUnitMeter.s", "type_name__Q24xhud16unit_meter_assetFv")
