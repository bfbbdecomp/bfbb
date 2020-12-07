#include "zUI.h"

#include <types.h>

// func_800B96B8
#pragma GLOBAL_ASM("asm/Game/zUI.s", "refresh_model__17_esc__2_unnamed_esc__2_zUI_cpp_esc__2_FR4_zUI")

// func_800B9740
#pragma GLOBAL_ASM("asm/Game/zUI.s", "init_tweaks__17_esc__2_unnamed_esc__2_zUI_cpp_esc__2_Fv")

// func_800B9744
#pragma GLOBAL_ASM("asm/Game/zUI.s", "debug_update__17_esc__2_unnamed_esc__2_zUI_cpp_esc__2_FR6zScenef")

// func_800B9748
#pragma GLOBAL_ASM("asm/Game/zUI.s", "debug_render__17_esc__2_unnamed_esc__2_zUI_cpp_esc__2_Fv")

// func_800B974C
#pragma GLOBAL_ASM("asm/Game/zUI.s", "PreUpdate__6zUIMgrFP6zScenef")

// func_800B974C
#pragma GLOBAL_ASM("asm/Game/zUI.s", "Update__6zUIMgrFP6zScenef")

// func_800B98AC
#pragma GLOBAL_ASM("asm/Game/zUI.s", "Setup__6zUIMgrFP6zScene")

// func_800B9958
#pragma GLOBAL_ASM("asm/Game/zUI.s", "Touch__6zUIMgrFP4_zUI")

// func_800B99A8
#pragma GLOBAL_ASM("asm/Game/zUI.s", "Remove__6zUIMgrFP4_zUI")

// func_800B99EC
#pragma GLOBAL_ASM("asm/Game/zUI.s", "Remove_PreUpdate__6zUIMgrFP4_zUI")

// func_800B9A78
#pragma GLOBAL_ASM("asm/Game/zUI.s", "Remove_Update__6zUIMgrFP4_zUI")

// func_800B9B04
#pragma GLOBAL_ASM("asm/Game/zUI.s", "Add__6zUIMgrFP4_zUI")

// func_800B9B48
#pragma GLOBAL_ASM("asm/Game/zUI.s", "Add_PreUpdate__6zUIMgrFP4_zUI")

// func_800B9BAC
#pragma GLOBAL_ASM("asm/Game/zUI.s", "Add_Update__6zUIMgrFP4_zUI")

// func_800B9C34
#pragma GLOBAL_ASM("asm/Game/zUI.s", "zUI_Init__Fv")

// func_800B9C54
#pragma GLOBAL_ASM("asm/Game/zUI.s", "zUI_Init__FPvPv")

// func_800B9C74
#pragma GLOBAL_ASM("asm/Game/zUI.s", "load_model__17_esc__2_unnamed_esc__2_zUI_cpp_esc__2_FUi")

// func_800B9D18
#pragma GLOBAL_ASM("asm/Game/zUI.s", "load_anim_list__17_esc__2_unnamed_esc__2_zUI_cpp_esc__2_FR4_zUI")

// func_800B9DE4
#pragma GLOBAL_ASM("asm/Game/zUI.s", "zUI_Init__FP4_zUIP9xEntAsset")

// func_800B9FB8
#pragma GLOBAL_ASM("asm/Game/zUI.s", "zUI_Save__FP4_zUIP7xSerial")

// func_800B9FD8
#pragma GLOBAL_ASM("asm/Game/zUI.s", "zUI_Load__FP4_zUIP7xSerial")

// func_800B9FF8
#pragma GLOBAL_ASM("asm/Game/zUI.s", "zUI_Reset__FP4_zUI")

// func_800BA054
#pragma GLOBAL_ASM("asm/Game/zUI.s", "zUI_PreUpdate__FP4_zUIP6xScenef")

// func_800BA35C
#pragma GLOBAL_ASM("asm/Game/zUI.s", "zUI_Update__FP4_zUIP6xScenef")

// func_800BA594
#pragma GLOBAL_ASM("asm/Game/zUI.s", "zUIRenderIteratorInsert__FP5xBaseP6zScenePv")

// func_800BA5B4
#pragma GLOBAL_ASM("asm/Game/zUI.s", "iRenderQSort_Face__FPCvPCv")

// func_800BA6B0
#pragma GLOBAL_ASM("asm/Game/zUI.s", "zUIRenderAll__Fv")

// func_800BA814
#pragma GLOBAL_ASM("asm/Game/zUI.s", "zUI_Render__FP4xEnt")

// func_800BAD78
#pragma GLOBAL_ASM("asm/Game/zUI.s", "zUIEventCB__FP5xBaseP5xBaseUiPCfP5xBase")

// func_800BB000
#pragma GLOBAL_ASM("asm/Game/zUI.s", "zUI_ParseINI__FP8xIniFile")

// func_800BB16C
#pragma GLOBAL_ASM("asm/Game/zUI.s", "findUI__FP6zSceneUi")

// func_800BB208
#pragma GLOBAL_ASM("asm/Game/zUI.s", "findUIFont__FP6zSceneUi")

// func_800BB2A4
#pragma GLOBAL_ASM("asm/Game/zUI.s", "zUIPortalEventCB__FP5xBaseP5xBaseUiPCfP5xBase")

// func_800BB364
#pragma GLOBAL_ASM("asm/Game/zUI.s", "zUI_ScenePortalSetToCurrentLevel__FP6zScene")

// func_800BB460
#pragma GLOBAL_ASM("asm/Game/zUI.s", "init_patsocks__FP6zScene")

// func_800BB4DC
#pragma GLOBAL_ASM("asm/Game/zUI.s", "zUI_ScenePortalInit__FP6zScene")

// func_800BBDE8
#pragma GLOBAL_ASM("asm/Game/zUI.s", "hideWorld__Fv")

// func_800BBE48
#pragma GLOBAL_ASM("asm/Game/zUI.s", "showWorld__FUi")

// func_800BBEFC
#pragma GLOBAL_ASM("asm/Game/zUI.s", "disable_ui__FP4_zUI")

// func_800BBF20
#pragma GLOBAL_ASM("asm/Game/zUI.s", "enable_ui__FP4_zUI")

// func_800BBF44
#pragma GLOBAL_ASM("asm/Game/zUI.s", "refresh_patsocks__FUi")

// func_800BC010
#pragma GLOBAL_ASM("asm/Game/zUI.s", "zUI_PortalToKrabs__FUi")

// func_800BC0D8
#pragma GLOBAL_ASM("asm/Game/zUI.s", "zUI_ScenePortalUpdate__Fv")

// func_800BC380
#pragma GLOBAL_ASM("asm/Game/zUI.s", "zUI_ScenePortalSave__FP7xSerial")

// func_800BC3F8
#pragma GLOBAL_ASM("asm/Game/zUI.s", "zUI_ScenePortalLoad__FP7xSerial")

// func_800BC470
#pragma GLOBAL_ASM("asm/Game/zUI.s", "__sinit_zUI_cpp")

// func_800BC52C
#pragma GLOBAL_ASM("asm/Game/zUI.s", "xMat3x3Scale__FP7xMat3x3PC5xVec3")
