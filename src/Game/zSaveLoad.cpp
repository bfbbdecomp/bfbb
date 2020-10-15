#include "zSaveLoad.h"

#include <types.h>

// zUpdateThumbIcon()
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zUpdateThumbIcon__Fv")

// zSaveLoad_Tick()
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_Tick__Fv")

// zSaveLoad_poll(int)
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_poll__Fi")

// zSendEventToThumbIcon(unsigned int)
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSendEventToThumbIcon__FUi")

// zChangeThumbIcon(const char*)
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zChangeThumbIcon__FPCc")

// zSaveLoadInit()
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoadInit__Fv")

// zSaveLoadGameTableInit(zSaveLoadGame*)
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoadGameTableInit__FP13zSaveLoadGame")

// zSaveLoadUITableInit(zSaveLoadUI*)
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoadUITableInit__FP11zSaveLoadUI")

// zSaveLoad_UIEvent(int,unsigned int)
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_UIEvent__FiUi")

// zSaveLoadSGInit(en_SAVEGAME_MODE)
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoadSGInit__F16en_SAVEGAME_MODE")

// zSaveLoadSGDone(st_XSAVEGAME_DATA*)
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoadSGDone__FP17st_XSAVEGAME_DATA")

// zSaveLoad_getgame()
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_getgame__Fv")

// zSaveLoad_getcard()
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_getcard__Fv")

// zSaveLoad_getMCavailable()
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_getMCavailable__Fv")

// zSaveLoad_getMCneeded()
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_getMCneeded__Fv")

// zSaveLoad_getMCAccessType()
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_getMCAccessType__Fv")

// zSaveLoadGetAutoSaveCard()
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoadGetAutoSaveCard__Fv")

// format(int,int)
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "format__Fii")

// CardtoTgt(int)
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "CardtoTgt__Fi")

// zSaveLoad_CardCount()
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardCount__Fv")

// zSaveLoad_CardPrompt(int)
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardPrompt__Fi")

// zSaveLoad_CardPromptFormat(int)
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardPromptFormat__Fi")

// zSaveLoad_CardPromptSpace(int)
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardPromptSpace__Fi")

// zSaveLoad_CardPromptGames(int)
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardPromptGames__Fi")

// zSaveLoad_CardPromptGameSlotEmpty()
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardPromptGameSlotEmpty__Fv")

// zSaveLoad_CardPromptOverwrite()
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardPromptOverwrite__Fv")

// zSaveLoad_CardPromptOverwriteDamaged()
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardPromptOverwriteDamaged__Fv")

// zSaveLoad_ErrorPrompt(int)
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_ErrorPrompt__Fi")

// zSaveLoad_DamagedSaveGameErrorPrompt(int)
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_DamagedSaveGameErrorPrompt__Fi")

// zSaveLoad_CardWrongDeviceErrorPrompt(int)
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardWrongDeviceErrorPrompt__Fi")

// zSaveLoad_CardDamagedErrorPrompt(int)
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardDamagedErrorPrompt__Fi")

// zSaveLoad_SaveDamagedErrorPrompt(int)
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_SaveDamagedErrorPrompt__Fi")

// zSaveLoad_CardYankedErrorPrompt(int)
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardYankedErrorPrompt__Fi")

// zSaveLoad_ErrorFormatPrompt(int)
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_ErrorFormatPrompt__Fi")

// zSaveLoad_ErrorFormatCardYankedPrompt(int)
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_ErrorFormatCardYankedPrompt__Fi")

// zSaveLoad_CardCheckSingle(int)
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardCheckSingle__Fi")

// zSaveLoad_CardCheckFormattedSingle(int)
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardCheckFormattedSingle__Fi")

// zSaveLoad_CardCheckSpaceSingle_doCheck(st_XSAVEGAME_DATA*,int)
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardCheckSpaceSingle_doCheck__FP17st_XSAVEGAME_DATAi")

// zSaveLoad_CardCheckSpaceSingle(int)
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardCheckSpaceSingle__Fi")

// zSaveLoad_CardCheckGamesSingle_doCheck(st_XSAVEGAME_DATA*,int)
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardCheckGamesSingle_doCheck__FP17st_XSAVEGAME_DATAi")

// zSaveLoad_CardCheckGamesSingle(int)
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardCheckGamesSingle__Fi")

// zSaveLoad_CardCheckSlotEmpty_hasGame_doCheck(st_XSAVEGAME_DATA*,int,int)
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardCheckSlotEmpty_hasGame_doCheck__FP17st_XSAVEGAME_DATAii")

// zSaveLoad_CardCheckSlotEmpty_hasGame(int,int)
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardCheckSlotEmpty_hasGame__Fii")

// zSaveLoad_CardCheckSlotOverwrite_Free(int,int)
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardCheckSlotOverwrite_Free__Fii")

// zSaveLoad_CardCheck(int,int)
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardCheck__Fii")

// zSaveLoad_CardCheckFormatted(int,int)
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardCheckFormatted__Fii")

// zSaveLoad_CardCheckValid(int,int)
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardCheckValid__Fii")

// zSaveLoad_CardCheckSpace(int,int)
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardCheckSpace__Fii")

// zSaveLoad_CardCheckGames(int,int)
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardCheckGames__Fii")

// zSaveLoad_CardCheckGameSlot(int,int,int)
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardCheckGameSlot__Fiii")

// zSaveLoad_CardCheckSlotEmpty(int,int)
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardCheckSlotEmpty__Fii")

// zSaveLoad_CardCheckSlotOverwrite(int,int)
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardCheckSlotOverwrite__Fii")

// zSaveLoad_CardPick(int)
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardPick__Fi")

// IsValidName(char*)
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "IsValidName__FPc")

// BuildIt(char*,int)
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "BuildIt__FPci")

// zSaveLoad_BuildName(char*,int)
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_BuildName__FPci")

// zSaveLoad_GameSelect(int)
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_GameSelect__Fi")

// zSaveLoadGetPreAutoSave()
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoadGetPreAutoSave__Fv")

// zSaveLoadPreAutoSave(bool)
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoadPreAutoSave__Fb")

// zSaveLoadAutoSaveUpdate()
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoadAutoSaveUpdate__Fv")

// zSaveLoad_DoAutoSave()
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_DoAutoSave__Fv")

// zSaveLoad_SaveGame()
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_SaveGame__Fv")

// zSaveLoad_LoadGame()
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_LoadGame__Fv")

// zSaveLoad_LoadLoop()
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_LoadLoop__Fv")

// zSaveLoad_SaveLoop()
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_SaveLoop__Fv")

// zSaveLoad_DispatchCB(unsigned int,const float*)
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_DispatchCB__FUiPCf")

// zSaveLoad_slotIsEmpty(unsigned int)
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_slotIsEmpty__FUi")

// XSGAutoData::LastPhysicalSlot()
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "LastPhysicalSlot__11XSGAutoDataFv")

// XSGAutoData::LastGame()
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "LastGame__11XSGAutoDataFv")

// XSGAutoData::LastTarget()
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "LastTarget__11XSGAutoDataFv")
