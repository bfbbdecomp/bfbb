#include "xsavegame.h"

#include <types.h>

// xSGStartup()
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGStartup__Fv")

// xSGShutdown()
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGShutdown__Fv")

// xSGInit(en_SAVEGAME_MODE)
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGInit__F16en_SAVEGAME_MODE")

// xSGDone(st_XSAVEGAME_DATA*)
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGDone__FP17st_XSAVEGAME_DATA")

// xSGCheckForCorruptFiles(st_XSAVEGAME_DATA*,char (*)[64])
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGCheckForCorruptFiles__FP17st_XSAVEGAME_DATAPA64_c")

// xSGTgtCount(st_XSAVEGAME_DATA*,int*)
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGTgtCount__FP17st_XSAVEGAME_DATAPi")

// xSGTgtPhysSlotIdx(st_XSAVEGAME_DATA*,int)
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGTgtPhysSlotIdx__FP17st_XSAVEGAME_DATAi")

// xSGTgtIsFormat(st_XSAVEGAME_DATA*,int,int*)
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGTgtIsFormat__FP17st_XSAVEGAME_DATAiPi")

// xSGTgtFormatTgt(st_XSAVEGAME_DATA*,int,int*)
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGTgtFormatTgt__FP17st_XSAVEGAME_DATAiPi")

// xSGTgtSelect(st_XSAVEGAME_DATA*,int)
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGTgtSelect__FP17st_XSAVEGAME_DATAi")

// xSGTgtHasGameDir(st_XSAVEGAME_DATA*,int)
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGTgtHasGameDir__FP17st_XSAVEGAME_DATAi")

// xSGTgtHaveRoom(st_XSAVEGAME_DATA*,int,int,int,int*,int*,int*)
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGTgtHaveRoom__FP17st_XSAVEGAME_DATAiiiPiPiPi")

// xSGTgtHaveRoomStartup(st_XSAVEGAME_DATA*,int,int,int,int*,int*,int*)
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGTgtHaveRoomStartup__FP17st_XSAVEGAME_DATAiiiPiPiPi")

// xSGCheckMemoryCard(st_XSAVEGAME_DATA*,int)
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGCheckMemoryCard__FP17st_XSAVEGAME_DATAi")

// xSGGameSet(st_XSAVEGAME_DATA*,int)
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGGameSet__FP17st_XSAVEGAME_DATAi")

// xSGGameIsEmpty(st_XSAVEGAME_DATA*,int)
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGGameIsEmpty__FP17st_XSAVEGAME_DATAi")

// xSGGameSize(st_XSAVEGAME_DATA*,int)
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGGameSize__FP17st_XSAVEGAME_DATAi")

// xSGGameModDate(st_XSAVEGAME_DATA*,int)
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGGameModDate__FP17st_XSAVEGAME_DATAi")

// xSGGameLabel(st_XSAVEGAME_DATA*,int)
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGGameLabel__FP17st_XSAVEGAME_DATAi")

// xSGGameThumbIndex(st_XSAVEGAME_DATA*,int)
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGGameThumbIndex__FP17st_XSAVEGAME_DATAi")

// xSGGameProgress(st_XSAVEGAME_DATA*,int)
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGGameProgress__FP17st_XSAVEGAME_DATAi")

// xSGAddSaveClient(st_XSAVEGAME_DATA*,unsigned int,void*,int (*)(void*, st_XSAVEGAME_DATA*, int*, int*),int (*)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_WRITECONTEXT*))
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGAddSaveClient__FP17st_XSAVEGAME_DATAUiPvPFPvP17st_XSAVEGAME_DATAPiPi_iPFPvP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXT_i")

// xSGAddLoadClient(st_XSAVEGAME_DATA*,unsigned int,void*,int (*)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_READCONTEXT*, unsigned int, int))
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGAddLoadClient__FP17st_XSAVEGAME_DATAUiPvPFPvP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTUii_i")

// xSGSetup(st_XSAVEGAME_DATA*)
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGSetup__FP17st_XSAVEGAME_DATA")

// xSGSetup(st_XSAVEGAME_DATA*,int,char*,int,long long,int)
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGSetup__FP17st_XSAVEGAME_DATAiPcixi")

// xSGProcess(st_XSAVEGAME_DATA*)
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGProcess__FP17st_XSAVEGAME_DATA")

// xSGWrapup(st_XSAVEGAME_DATA*)
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGWrapup__FP17st_XSAVEGAME_DATA")

// xSGAsyncStatus(st_XSAVEGAME_DATA*,int,en_XSG_WHYFAIL*,char*)
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGAsyncStatus__FP17st_XSAVEGAME_DATAiP14en_XSG_WHYFAILPc")

// xSGWriteData(st_XSAVEGAME_DATA*,st_XSAVEGAME_WRITECONTEXT*,char*,int,int)
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGWriteData__FP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXTPcii")

// xSGWriteStrLen(const char*)
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGWriteStrLen__FPCc")

// xSGWriteData(st_XSAVEGAME_DATA*,st_XSAVEGAME_WRITECONTEXT*,char*,int)
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGWriteData__FP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXTPci")

// xSGWriteData(st_XSAVEGAME_DATA*,st_XSAVEGAME_WRITECONTEXT*,int*,int)
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGWriteData__FP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXTPii")

// xSGWriteData(st_XSAVEGAME_DATA*,st_XSAVEGAME_WRITECONTEXT*,unsigned int*,int)
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGWriteData__FP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXTPUii")

// xSGWriteData(st_XSAVEGAME_DATA*,st_XSAVEGAME_WRITECONTEXT*,float*,int)
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGWriteData__FP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXTPfi")

// xSGReadData(st_XSAVEGAME_DATA*,st_XSAVEGAME_READCONTEXT*,char*,int,int)
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGReadData__FP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTPcii")

// xSGReadData(st_XSAVEGAME_DATA*,st_XSAVEGAME_READCONTEXT*,char*,int)
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGReadData__FP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTPci")

// xSGReadData(st_XSAVEGAME_DATA*,st_XSAVEGAME_READCONTEXT*,int*,int)
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGReadData__FP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTPii")

// xSGReadData(st_XSAVEGAME_DATA*,st_XSAVEGAME_READCONTEXT*,unsigned int*,int)
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGReadData__FP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTPUii")

// xSGReadData(st_XSAVEGAME_DATA*,st_XSAVEGAME_READCONTEXT*,float*,int)
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGReadData__FP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTPfi")

// xSG_grab_leaders(st_XSAVEGAME_DATA*)
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSG_grab_leaders__FP17st_XSAVEGAME_DATA")

// xSG_chdir_gamedir(st_XSAVEGAME_DATA*)
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSG_chdir_gamedir__FP17st_XSAVEGAME_DATA")

// xSG_cm_slotname(st_XSAVEGAME_DATA*,int)
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSG_cm_slotname__FP17st_XSAVEGAME_DATAi")

// xSG_areaComposeLabel(char*,int,char*,int)
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSG_areaComposeLabel__FPciPci")

// xSG_sv_flipinfo(st_XSAVEGAME_DATA*)
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSG_sv_flipinfo__FP17st_XSAVEGAME_DATA")

// xSG_sv_prepdest(st_XSAVEGAME_DATA*)
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSG_sv_prepdest__FP17st_XSAVEGAME_DATA")

// xSG_sv_flipproc(st_XSAVEGAME_DATA*)
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSG_sv_flipproc__FP17st_XSAVEGAME_DATA")

// xSG_sv_bldchksum(st_XSAVEGAME_DATA*)
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSG_sv_bldchksum__FP17st_XSAVEGAME_DATA")

// xSG_smem_blkopen(st_XSAVEGAME_DATA*)
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSG_smem_blkopen__FP17st_XSAVEGAME_DATA")

// xSG_smem_blkclose(st_XSAVEGAME_DATA*)
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSG_smem_blkclose__FP17st_XSAVEGAME_DATA")

// xSG_smem_cltopen(st_XSAVEGAME_DATA*,st_XSAVEGAME_CLIENT*)
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSG_smem_cltopen__FP17st_XSAVEGAME_DATAP19st_XSAVEGAME_CLIENT")

// xSG_smem_cltclose(st_XSAVEGAME_DATA*,st_XSAVEGAME_CLIENT*)
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSG_smem_cltclose__FP17st_XSAVEGAME_DATAP19st_XSAVEGAME_CLIENT")

// xSG_sv_commit(st_XSAVEGAME_DATA*)
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSG_sv_commit__FP17st_XSAVEGAME_DATA")

// xSG_ld_prepload(st_XSAVEGAME_DATA*)
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSG_ld_prepload__FP17st_XSAVEGAME_DATA")

// xSG_ld_readgame(st_XSAVEGAME_DATA*)
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSG_ld_readgame__FP17st_XSAVEGAME_DATA")

// xSG_ld_readhead(st_XSAVEGAME_DATA*)
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSG_ld_readhead__FP17st_XSAVEGAME_DATA")

// xSG_ld_validate(st_XSAVEGAME_DATA*)
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSG_ld_validate__FP17st_XSAVEGAME_DATA")

// xSG_ld_findcltblk(st_XSAVEGAME_DATA*)
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSG_ld_findcltblk__FP17st_XSAVEGAME_DATA")

// xSG_ld_flipload(st_XSAVEGAME_DATA*)
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSG_ld_flipload__FP17st_XSAVEGAME_DATA")

// xSGAutoSave_GetCache()
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGAutoSave_GetCache__Fv")

// xSGAutoSave_Startup()
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGAutoSave_Startup__Fv")

// XSGAutoData::IsValid()
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "IsValid__11XSGAutoDataFv")

// XSGAutoData::MarkInvalid()
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "MarkInvalid__11XSGAutoDataFv")

// XSGAutoData::SetCache(int,int,int)
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "SetCache__11XSGAutoDataFiii")

// XSGAutoData::Discard()
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "Discard__11XSGAutoDataFv")

// XSGAutoData::HWConnect(int)
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "HWConnect__11XSGAutoDataFi")

// XSGAutoData::HWDisconnect(st_ISGSESSION*)
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "HWDisconnect__11XSGAutoDataFP13st_ISGSESSION")

// XSGAutoData::HWCheckConnect(int)
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "HWCheckConnect__11XSGAutoDataFi")
