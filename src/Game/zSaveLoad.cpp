#include "zSaveLoad.h"

#include <types.h>

// func_800AD20C
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zUpdateThumbIcon__Fv")

// func_800AD328
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_Tick__Fv")

// func_800AD598
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_poll__Fi")

// func_800AD600
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSendEventToThumbIcon__FUi")

// func_800AD654
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zChangeThumbIcon__FPCc")

// func_800AD6C8
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoadInit__Fv")

// func_800AD6FC
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoadGameTableInit__FP13zSaveLoadGame")

// func_800AD740
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoadUITableInit__FP11zSaveLoadUI")

// func_800AD790
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_UIEvent__FiUi")

// func_800AD7D8
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoadSGInit__F16en_SAVEGAME_MODE")

// func_800AD874
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoadSGDone__FP17st_XSAVEGAME_DATA")

// func_800AD8CC
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_getgame__Fv")

// func_800AD8D4
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_getcard__Fv")

// func_800AD8DC
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_getMCavailable__Fv")

// func_800AD8E4
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_getMCneeded__Fv")

// func_800AD8EC
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_getMCAccessType__Fv")

// func_800AD8F4
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoadGetAutoSaveCard__Fv")

// func_800AD8FC
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "format__Fii")

// func_800ADA64
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "CardtoTgt__Fi")

// func_800ADAFC
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardCount__Fv")

// func_800ADB04
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardPrompt__Fi")

// func_800ADBD8
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardPromptFormat__Fi")

// func_800ADC70
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardPromptSpace__Fi")

// func_800ADCF0
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardPromptGames__Fi")

// func_800ADD70
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardPromptGameSlotEmpty__Fv")

// func_800ADDD0
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardPromptOverwrite__Fv")

// func_800ADE38
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardPromptOverwriteDamaged__Fv")

// func_800ADEA0
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_ErrorPrompt__Fi")

// func_800ADF18
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_DamagedSaveGameErrorPrompt__Fi")

// func_800ADF6C
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardWrongDeviceErrorPrompt__Fi")

// func_800ADFE4
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardDamagedErrorPrompt__Fi")

// func_800AE05C
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_SaveDamagedErrorPrompt__Fi")

// func_800AE0B0
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardYankedErrorPrompt__Fi")

// func_800AE104
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_ErrorFormatPrompt__Fi")

// func_800AE17C
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_ErrorFormatCardYankedPrompt__Fi")

// func_800AE1F4
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardCheckSingle__Fi")

// func_800AE300
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardCheckFormattedSingle__Fi")

// func_800AE43C
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardCheckSpaceSingle_doCheck__FP17st_XSAVEGAME_DATAi")

// func_800AE500
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardCheckSpaceSingle__Fi")

// func_800AE5D0
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardCheckGamesSingle_doCheck__FP17st_XSAVEGAME_DATAi")

// func_800AE674
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardCheckGamesSingle__Fi")

// func_800AE744
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardCheckSlotEmpty_hasGame_doCheck__FP17st_XSAVEGAME_DATAii")

// func_800AE7CC
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardCheckSlotEmpty_hasGame__Fii")

// func_800AE8BC
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardCheckSlotOverwrite_Free__Fii")

// func_800AE924
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardCheck__Fii")

// func_800AE9B0
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardCheckFormatted__Fii")

// func_800AEA7C
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardCheckValid__Fii")

// func_800AEAAC
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardCheckSpace__Fii")

// func_800AEB48
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardCheckGames__Fii")

// func_800AEBE4
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardCheckGameSlot__Fiii")

// func_800AEC14
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardCheckSlotEmpty__Fii")

// func_800AEC98
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardCheckSlotOverwrite__Fii")

// func_800AED3C
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardPick__Fi")

// func_800AEFA0
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "IsValidName__FPc")

// func_800AF03C
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "BuildIt__FPci")

// func_800AF22C
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_BuildName__FPci")

// func_800AF30C
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_GameSelect__Fi")

// func_800AF790
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoadGetPreAutoSave__Fv")

// func_800AF798
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoadPreAutoSave__Fb")

// func_800AF7CC
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoadAutoSaveUpdate__Fv")

// func_800AF8D4
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_DoAutoSave__Fv")

// func_800AFB84
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_SaveGame__Fv")

// func_800AFE6C
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_LoadGame__Fv")

// func_800B0064
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_LoadLoop__Fv")

// func_800B023C
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_SaveLoop__Fv")

// func_800B0548
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_DispatchCB__FUiPCf")

// func_800B061C
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "xSGT_SaveInfoCB__FPvP17st_XSAVEGAME_DATAPiPi")

// func_800B0670
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "xSGT_SaveProcCB__FPvP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXT")

// func_800B0728
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "xSGT_SaveInfoPrefsCB__FPvP17st_XSAVEGAME_DATAPiPi")

// func_800B0744
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "xSGT_SaveProcPrefsCB__FPvP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXT")

// func_800B0800
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "xSGT_LoadLoadCB__FPvP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTUii")

// func_800B08F0
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "xSGT_LoadPrefsCB__FPvP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTUii")

// func_800B09CC
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_slotIsEmpty__FUi")

// func_800B0A10
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "LastPhysicalSlot__11XSGAutoDataFv")

// func_800B0A18
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "LastGame__11XSGAutoDataFv")

// func_800B0A20
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "LastTarget__11XSGAutoDataFv")
