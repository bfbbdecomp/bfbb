#include "xHudModel.h"
#include "xHud.h"

#include <types.h>

extern float32 lbl_803CCDE0; // 1.0f
extern float32 lbl_803CCDE4; // 0.0f
extern const char lbl_80252F38[];

#if 1

// func_8002FC88
#pragma GLOBAL_ASM("asm/Core/x/xHudModel.s", "XHUD_AnimTable_Idle__Fv")

#else

// Fix the strings.
xAnimTable* XHUD_AnimTable_Idle()
{
    xAnimTable* table = xAnimTableNew("XHUD_AnimTable_Idle", NULL, 0);
    xAnimTableNewState(table, "Idle01", 0x10, 1, lbl_803CCDE0, NULL, NULL, lbl_803CCDE4, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    return table;
}

#endif

// func_8002FD10
#pragma GLOBAL_ASM("asm/Core/x/xHudModel.s", "load__Q24xhud12model_widgetFR5xBaseR9xDynAssetUl")

// func_8002FD68
#pragma GLOBAL_ASM("asm/Core/x/xHudModel.s", "__ct__Q24xhud12model_widgetFRCQ24xhud11model_asset")

// func_8002FDCC
#pragma GLOBAL_ASM("asm/Core/x/xHudModel.s", "destruct__Q24xhud12model_widgetFv")

// func_8002FDEC
#pragma GLOBAL_ASM("asm/Core/x/xHudModel.s", "destroy__Q24xhud12model_widgetFv")

// func_8002FE0C
#pragma GLOBAL_ASM("asm/Core/x/xHudModel.s", "type__Q24xhud12model_widgetCFv")

// func_8002FE4C
#pragma GLOBAL_ASM("asm/Core/x/xHudModel.s", "is__Q24xhud12model_widgetCFUi")

// func_8002FEB4
#pragma GLOBAL_ASM("asm/Core/x/xHudModel.s", "update__Q24xhud12model_widgetFf")

// func_8002FF30
#pragma GLOBAL_ASM("asm/Core/x/xHudModel.s", "render__Q24xhud12model_widgetFv")

#if 1

// func_8002FF70
#pragma GLOBAL_ASM("asm/Core/x/xHudModel.s", "type_name__Q24xhud11model_assetFv")

#else

// Works except for the string label offset.
char* xhud::model_asset::type_name()
{
    return (char*)(lbl_80252F38 + 0x1B);
}

#endif