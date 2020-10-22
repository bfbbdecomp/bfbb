#include "zUIFont.h"

#include <types.h>

// set_text(zUIFont&,unsigned int)
#pragma GLOBAL_ASM("asm/Game/zUIFont.s", "set_text__FR7zUIFontUi")

// zUIFont_GetHackFlags(zUIFont*)
#pragma GLOBAL_ASM("asm/Game/zUIFont.s", "zUIFont_GetHackFlags__FP7zUIFont")

// zUIFontInit()
#pragma GLOBAL_ASM("asm/Game/zUIFont.s", "zUIFontInit__Fv")

// zUIFont_Init(zUIFont*,xEntAsset*)
#pragma GLOBAL_ASM("asm/Game/zUIFont.s", "zUIFont_Init__FP7zUIFontP9xEntAsset")

// zUIFont_Save(zUIFont*,xSerial*)
#pragma GLOBAL_ASM("asm/Game/zUIFont.s", "zUIFont_Save__FP7zUIFontP7xSerial")

// zUIFont_Load(zUIFont*,xSerial*)
#pragma GLOBAL_ASM("asm/Game/zUIFont.s", "zUIFont_Load__FP7zUIFontP7xSerial")

// zUIFont_Reset(zUIFont*)
#pragma GLOBAL_ASM("asm/Game/zUIFont.s", "zUIFont_Reset__FP7zUIFont")

// zUIFont_PreUpdate(zUIFont*,xScene*,float)
#pragma GLOBAL_ASM("asm/Game/zUIFont.s", "zUIFont_PreUpdate__FP7zUIFontP6xScenef")

// zUIFontEventCB(xBase*,xBase*,unsigned int,const float*,xBase*)
#pragma GLOBAL_ASM("asm/Game/zUIFont.s", "zUIFontEventCB__FP5xBaseP5xBaseUiPCfP5xBase")

// zUIFont_Render(xEnt*)
#pragma GLOBAL_ASM("asm/Game/zUIFont.s", "zUIFont_Render__FP4xEnt")

// xtextbox::yextent(float,int&,bool) const
#pragma GLOBAL_ASM("asm/Game/zUIFont.s", "yextent__8xtextboxCFfRib")
