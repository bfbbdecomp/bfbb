#include "zGameExtras.h"

#include <types.h>

// func_80099680
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "zGameExtras_ExtrasFlags__Fv")

// func_80099688
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "zGameExtras_MoDay__FPiPi")

// func_8009969C
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "zGameExtras_SceneInit__Fv")

// func_80099760
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "zGameExtras_SceneReset__Fv")

// func_800997D8
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "zGameExtras_SceneExit__Fv")

// func_80099890
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "zGameExtras_SceneUpdate__Ff")

// func_80099938
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "EGG_check_ExtrasFlags__FP7EGGItem")

// func_80099B04
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "zGameExtras_CheatFlags__Fv")

// func_80099B0C
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "zGameExtras_NewGameReset__Fv")

// func_80099B48
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "zGameExtras_Save__FP7xSerial")

// func_80099B70
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "zGameExtras_Load__FP7xSerial")

// func_80099BAC
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "TestCheat__FPUi")

// func_80099CB4
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "AddToCheatPressed__FUi")

// func_80099D3C
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "zGameCheats__Ff")

// func_80099F0C
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "GEC_CheatFlagAdd__Fi")

// func_80099F1C
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "GEC_CheatFlagToggle__Fi")

// func_80099F2C
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "GEC_dfltSound__Fv")

// func_8009A058
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "GEC_cb_AddShiny__Fv")

// func_8009A0E0
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "GEC_cb_AddSpatulas__Fv")

// func_8009A158
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "GEC_cb_BubbleBowl__Fv")

// func_8009A1BC
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "GEC_cb_CruiseBubble__Fv")

// func_8009A220
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "GEC_cb_MonsterGallery__Fv")

// func_8009A2C0
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "GEC_cb_UnlockArtTheatre__Fv")

// func_8009A304
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "GEC_cb_ChaChing__Fv")

// func_8009A380
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "GEC_cb_RestoreHealth__Fv")

// func_8009A424
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "GEC_cb_ExpertMode__Fv")

// func_8009A444
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "GEC_cb_ShrapBobMode__Fv")

// func_8009A464
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "GEC_cb_NoPantsMode__Fv")

// func_8009A4B0
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "GEC_cb_CruiseControl__Fv")

// func_8009A56C
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "GEC_cb_SwapCCLR__Fv")

// func_8009A58C
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "GEC_cb_SwapCCUD__Fv")

// func_8009A5AC
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "GEC_villSound__Fv")

// func_8009A6BC
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "GEC_cb_BigPlank__Fv")

// func_8009A6DC
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "GEC_cb_Medics__Fv")

// func_8009A6FC
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "GEC_cb_DogTrix__Fv")

// func_8009A71C
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "GEC_cb_SmallPeep__Fv")

// func_8009A73C
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "GEC_cb_SmallCostars__Fv")

// func_8009A75C
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "GEC_cb_RichPeep__Fv")

// func_8009A77C
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "GEC_cb_PanHandle__Fv")

// func_8009A79C
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "zGame_HackGalleryInit__Fv")

// func_8009A7D0
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "zGame_HackIsGallery__Fv")

// func_8009A810
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "xUtil_choose_esc__0_Ui_esc__1___FPCUiiPCf")
