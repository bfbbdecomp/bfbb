#include "xHudModel.h"
#include "xHud.h"

#include <types.h>

extern F32 lbl_803CCDE0; // 1.0f
extern F32 lbl_803CCDE4; // 0.0f
extern const char lbl_80252F38[];

#if 0
// Fix the strings.
xAnimTable* XHUD_AnimTable_Idle()
{
    xAnimTable* table = xAnimTableNew("XHUD_AnimTable_Idle", NULL, 0);
    xAnimTableNewState(table, "Idle01", 0x10, 1, lbl_803CCDE0, NULL, NULL, lbl_803CCDE4, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    return table;
}

#endif

#if 0
// Works except for the string label offset.
char* xhud::model_asset::type_name()
{
    return (char*)(lbl_80252F38 + 0x1B);
}

#endif
