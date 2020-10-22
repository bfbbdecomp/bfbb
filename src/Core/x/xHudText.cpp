#include "xHudText.h"

#include <types.h>

// xhud::text_widget::load(xBase&,xDynAsset&,unsigned long)
#pragma GLOBAL_ASM("asm/Core/x/xHudText.s", "load__Q24xhud11text_widgetFR5xBaseR9xDynAssetUl")

// xhud::text_widget::text_widget(const xhud::text_asset&)
#pragma GLOBAL_ASM("asm/Core/x/xHudText.s", "__ct__Q24xhud11text_widgetFRCQ24xhud10text_asset")

// xhud::text_widget::destruct()
#pragma GLOBAL_ASM("asm/Core/x/xHudText.s", "destruct__Q24xhud11text_widgetFv")

// xhud::text_widget::type() const
#pragma GLOBAL_ASM("asm/Core/x/xHudText.s", "type__Q24xhud11text_widgetCFv")

// xhud::text_asset::type_name()
#pragma GLOBAL_ASM("asm/Core/x/xHudText.s", "type_name__Q24xhud10text_assetFv")
