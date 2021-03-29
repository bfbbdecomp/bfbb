#include "xsavegame.h"

#include <types.h>

// func_8003CC4C
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGStartup__Fv")

// func_8003CCA0
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGShutdown__Fv")

// func_8003CCD8
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGInit__F16en_SAVEGAME_MODE")

// func_8003CDD4
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGDone__FP17st_XSAVEGAME_DATA")

// func_8003CEF8
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGCheckForCorruptFiles__FP17st_XSAVEGAME_DATAPA64_c")

// func_8003CF1C
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGTgtCount__FP17st_XSAVEGAME_DATAPi")

// func_8003CF40
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGTgtPhysSlotIdx__FP17st_XSAVEGAME_DATAi")

// func_8003CF64
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGTgtIsFormat__FP17st_XSAVEGAME_DATAiPi")

// func_8003CFDC
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGTgtFormatTgt__FP17st_XSAVEGAME_DATAiPi")

// func_8003D008
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGTgtSelect__FP17st_XSAVEGAME_DATAi")

// func_8003D064
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGTgtHasGameDir__FP17st_XSAVEGAME_DATAi")

// func_8003D0A4
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGTgtHaveRoom__FP17st_XSAVEGAME_DATAiiiPiPiPi")

// func_8003D17C
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s",                                                       \
                   "xSGTgtHaveRoomStartup__FP17st_XSAVEGAME_DATAiiiPiPiPi")

// func_8003D254
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGCheckMemoryCard__FP17st_XSAVEGAME_DATAi")

// func_8003D278
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGGameSet__FP17st_XSAVEGAME_DATAi")

// func_8003D280
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGGameIsEmpty__FP17st_XSAVEGAME_DATAi")

// func_8003D2B0
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGGameSize__FP17st_XSAVEGAME_DATAi")

// func_8003D320
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGGameModDate__FP17st_XSAVEGAME_DATAi")

// func_8003D3C4
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGGameLabel__FP17st_XSAVEGAME_DATAi")

// func_8003D420
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGGameThumbIndex__FP17st_XSAVEGAME_DATAi")

// func_8003D478
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGGameProgress__FP17st_XSAVEGAME_DATAi")

// func_8003D4D0
#pragma GLOBAL_ASM(                                                                                \
    "asm/Core/x/xsavegame.s",                                                                      \
    "xSGAddSaveClient__FP17st_XSAVEGAME_DATAUiPvPFPvP17st_XSAVEGAME_DATAPiPi_iPFPvP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXT_i")

// func_8003D5A4
#pragma GLOBAL_ASM(                                                                                \
    "asm/Core/x/xsavegame.s",                                                                      \
    "xSGAddLoadClient__FP17st_XSAVEGAME_DATAUiPvPFPvP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTUii_i")

// func_8003D6E4
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGSetup__FP17st_XSAVEGAME_DATA")

// func_8003D724
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGSetup__FP17st_XSAVEGAME_DATAiPcixi")

// func_8003D82C
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGProcess__FP17st_XSAVEGAME_DATA")

// func_8003D96C
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGWrapup__FP17st_XSAVEGAME_DATA")

// func_8003DAB4
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s",                                                       \
                   "xSGAsyncStatus__FP17st_XSAVEGAME_DATAiP14en_XSG_WHYFAILPc")

// func_8003DBB0
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSG_cb_leader_svinfo__FPvP17st_XSAVEGAME_DATAPiPi")

// func_8003DBC4
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s",                                                       \
                   "xSG_cb_leader_svproc__FPvP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXT")

// func_8003DCD4
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s",                                                       \
                   "xSG_cb_leader_load__FPvP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTUii")

// func_8003DDB0
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s",                                                       \
                   "xSGWriteData__FP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXTPcii")

// func_8003DEC0
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGWriteStrLen__FPCc")

// func_8003DEF0
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s",                                                       \
                   "xSGWriteData__FP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXTPci")

// func_8003DF18
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s",                                                       \
                   "xSGWriteData__FP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXTPii")

// func_8003DF40
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s",                                                       \
                   "xSGWriteData__FP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXTPUii")

// func_8003DF68
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s",                                                       \
                   "xSGWriteData__FP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXTPfi")

// func_8003DF90
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s",                                                       \
                   "xSGReadData__FP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTPcii")

// func_8003E090
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s",                                                       \
                   "xSGReadData__FP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTPci")

// func_8003E0B8
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s",                                                       \
                   "xSGReadData__FP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTPii")

// func_8003E0E0
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s",                                                       \
                   "xSGReadData__FP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTPUii")

// func_8003E108
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s",                                                       \
                   "xSGReadData__FP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTPfi")

// func_8003E130
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSG_grab_leaders__FP17st_XSAVEGAME_DATA")

// func_8003E238
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSG_chdir_gamedir__FP17st_XSAVEGAME_DATA")

// func_8003E29C
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSG_cm_slotname__FP17st_XSAVEGAME_DATAi")

// func_8003E308
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSG_areaComposeLabel__FPciPci")

// func_8003E3DC
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSG_sv_flipinfo__FP17st_XSAVEGAME_DATA")

// func_8003E4E8
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSG_sv_prepdest__FP17st_XSAVEGAME_DATA")

// func_8003E590
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSG_sv_flipproc__FP17st_XSAVEGAME_DATA")

// func_8003E6A0
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSG_sv_bldchksum__FP17st_XSAVEGAME_DATA")

// func_8003E6E8
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSG_smem_blkopen__FP17st_XSAVEGAME_DATA")

// func_8003E790
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSG_smem_blkclose__FP17st_XSAVEGAME_DATA")

// func_8003E818
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s",                                                       \
                   "xSG_smem_cltopen__FP17st_XSAVEGAME_DATAP19st_XSAVEGAME_CLIENT")

// func_8003E8D0
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s",                                                       \
                   "xSG_smem_cltclose__FP17st_XSAVEGAME_DATAP19st_XSAVEGAME_CLIENT")

// func_8003E998
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSG_sv_commit__FP17st_XSAVEGAME_DATA")

// func_8003EAD4
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSG_cb_ISGChange__FPv10en_CHGCODE")

// func_8003EB28
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSG_ld_prepload__FP17st_XSAVEGAME_DATA")

// func_8003EBB0
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSG_ld_readgame__FP17st_XSAVEGAME_DATA")

// func_8003EC40
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSG_ld_readhead__FP17st_XSAVEGAME_DATA")

// func_8003ED34
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSG_ld_validate__FP17st_XSAVEGAME_DATA")

// func_8003EDB4
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSG_ld_findcltblk__FP17st_XSAVEGAME_DATA")

// func_8003F054
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSG_ld_flipload__FP17st_XSAVEGAME_DATA")

// func_8003F128
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGAutoSave_GetCache__Fv")

// func_8003F134
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGAutoSave_Startup__Fv")

// func_8003F170
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "IsValid__11XSGAutoDataFv")

// func_8003F1C8
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "MarkInvalid__11XSGAutoDataFv")

// func_8003F1D8
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "SetCache__11XSGAutoDataFiii")

// func_8003F268
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "Discard__11XSGAutoDataFv")

// func_8003F2C0
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "HWConnect__11XSGAutoDataFi")

// func_8003F300
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "HWDisconnect__11XSGAutoDataFP13st_ISGSESSION")

// func_8003F324
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "HWCheckConnect__11XSGAutoDataFi")

// func_8003F350
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "ASG_ISG_changed__FPv10en_CHGCODE")
