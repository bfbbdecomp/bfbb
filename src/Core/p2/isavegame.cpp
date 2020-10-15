#include "isavegame.h"

#include <types.h>

// iSGStartup()
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSGStartup__Fv")

// iSGShutdown()
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSGShutdown__Fv")

// iSGMakeName(en_NAMEGEN_TYPE,const char*,int)
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSGMakeName__F15en_NAMEGEN_TYPEPCci")

// iSGSessionBegin(void*,void (*)(void*, en_CHGCODE),int)
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSGSessionBegin__FPvPFPv10en_CHGCODE_vi")

// iSGSessionEnd(st_ISGSESSION*)
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSGSessionEnd__FP13st_ISGSESSION")

// iSGTgtCount(st_ISGSESSION*,int*)
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSGTgtCount__FP13st_ISGSESSIONPi")

// iSGTgtPhysSlotIdx(st_ISGSESSION*,int)
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSGTgtPhysSlotIdx__FP13st_ISGSESSIONi")

// iSGTgtFormat(st_ISGSESSION*,int,int,int*)
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSGTgtFormat__FP13st_ISGSESSIONiiPi")

// iSGTgtState(st_ISGSESSION*,int,const char*)
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSGTgtState__FP13st_ISGSESSIONiPCc")

// iSGTgtSetActive(st_ISGSESSION*,int)
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSGTgtSetActive__FP13st_ISGSESSIONi")

// iSGTgtHaveRoom(st_ISGSESSION*,int,int,const char*,const char*,int*,int*,int*)
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSGTgtHaveRoom__FP13st_ISGSESSIONiiPCcPCcPiPiPi")

// iSGTgtHaveRoomStartup(st_ISGSESSION*,int,int,const char*,const char*,int*,int*,int*)
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSGTgtHaveRoomStartup__FP13st_ISGSESSIONiiPCcPCcPiPiPi")

// iSGFileSize(st_ISGSESSION*,const char*)
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSGFileSize__FP13st_ISGSESSIONPCc")

// iSGFileModDate(st_ISGSESSION*,const char*)
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSGFileModDate__FP13st_ISGSESSIONPCc")

// iSGFileModDate(st_ISGSESSION*,const char*,int*,int*,int*,int*,int*,int*)
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSGFileModDate__FP13st_ISGSESSIONPCcPiPiPiPiPiPi")

// iSGMakeTimeStamp(char*)
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSGMakeTimeStamp__FPc")

// iSGSelectGameDir(st_ISGSESSION*,const char*)
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSGSelectGameDir__FP13st_ISGSESSIONPCc")

// iSGSetupGameDir(st_ISGSESSION*,const char*,int)
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSGSetupGameDir__FP13st_ISGSESSIONPCci")

// iSGSaveFile(st_ISGSESSION*,const char*,char*,int,int,char*)
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSGSaveFile__FP13st_ISGSESSIONPCcPciiPc")

// iSGLoadFile(st_ISGSESSION*,const char*,char*,int)
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSGLoadFile__FP13st_ISGSESSIONPCcPci")

// iSGReadLeader(st_ISGSESSION*,const char*,char*,int,int)
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSGReadLeader__FP13st_ISGSESSIONPCcPcii")

// iSGPollStatus(st_ISGSESSION*,en_ASYNC_OPCODE*,int)
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSGPollStatus__FP13st_ISGSESSIONP15en_ASYNC_OPCODEi")

// iSGOpError(st_ISGSESSION*,char*)
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSGOpError__FP13st_ISGSESSIONPc")

// iSG_start_your_engines()
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSG_start_your_engines__Fv")

// iSG_mcidx2slot(int,int*,int*)
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSG_mcidx2slot__FiPiPi")

// iSG_mc_exists(int)
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSG_mc_exists__Fi")

// iSG_mc_tryRepair(st_ISG_MEMCARD_DATA*)
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSG_mc_tryRepair__FP19st_ISG_MEMCARD_DATA")

// iSG_mc_isformatted(st_ISG_MEMCARD_DATA*)
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSG_mc_isformatted__FP19st_ISG_MEMCARD_DATA")

// iSG_mc_isGCcard(st_ISG_MEMCARD_DATA*,int*,int*)
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSG_mc_isGCcard__FP19st_ISG_MEMCARD_DATAPiPi")

// iSG_isSpaceForFile(st_ISG_MEMCARD_DATA*,int,const char*,int*,int*,int*)
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSG_isSpaceForFile__FP19st_ISG_MEMCARD_DATAiPCcPiPiPi")

// iSG_mc_settgt(st_ISG_MEMCARD_DATA*,int)
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSG_mc_settgt__FP19st_ISG_MEMCARD_DATAi")

// iSG_get_finfo(st_ISG_MEMCARD_DATA*,const char*)
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSG_get_finfo__FP19st_ISG_MEMCARD_DATAPCc")

// iSG_curKosher(CARDStat*,CARDFileInfo*)
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSG_curKosher__FP8CARDStatP12CARDFileInfo")

// iSG_fileKosher(st_ISG_MEMCARD_DATA*,const char*,int,int*)
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSG_fileKosher__FP19st_ISG_MEMCARD_DATAPCciPi")

// iSG_get_fsize(st_ISG_MEMCARD_DATA*,const char*)
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSG_get_fsize__FP19st_ISG_MEMCARD_DATAPCc")

// iSG_get_fmoddate(st_ISG_MEMCARD_DATA*,const char*,int*,int*,int*,int*,int*,int*)
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSG_get_fmoddate__FP19st_ISG_MEMCARD_DATAPCcPiPiPiPiPiPi")

// iSG_timestamp(CARDStat*)
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSG_timestamp__FP8CARDStat")

// iSG_cubeicon_size(int,int)
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSG_cubeicon_size__Fii")

// iSG_chk_icondata()
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSG_chk_icondata__Fv")

// iSG_load_icondata()
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSG_load_icondata__Fv")

// iSG_discard_icondata()
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSG_discard_icondata__Fv")

// iSG_bfr_icondata(char*,CARDStat*,char*,int)
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSG_bfr_icondata__FPcP8CARDStatPci")

// iSG_upd_icostat(CARDStat*,CARDStat*)
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSG_upd_icostat__FP8CARDStatP8CARDStat")

// iSG_tpl_unpack(st_ISG_TPL_TEXPALETTE*)
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSG_tpl_unpack__FP21st_ISG_TPL_TEXPALETTE")

// iSG_bnr_unpack(st_ISG_TPL_TEXPALETTE*)
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSG_bnr_unpack__FP21st_ISG_TPL_TEXPALETTE")

// iSG_tpl_TEXGet(st_ISG_TPL_TEXPALETTE*,unsigned int)
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSG_tpl_TEXGet__FP21st_ISG_TPL_TEXPALETTEUi")

// iSG_mc_mount(int)
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSG_mc_mount__Fi")

// iSG_mc_unmount(int)
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSG_mc_unmount__Fi")

// iSG_mc_format(st_ISG_MEMCARD_DATA*,int,int*)
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSG_mc_format__FP19st_ISG_MEMCARD_DATAiPi")

// iSG_mc_fopen(st_ISG_MEMCARD_DATA*,const char*,int,en_ISG_IOMODE,en_ASYNC_OPERR*)
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSG_mc_fopen__FP19st_ISG_MEMCARD_DATAPCci13en_ISG_IOMODEP14en_ASYNC_OPERR")

// iSG_mc_fclose(st_ISG_MEMCARD_DATA*)
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSG_mc_fclose__FP19st_ISG_MEMCARD_DATA")

// iSG_mc_fclose(st_ISG_MEMCARD_DATA*,CARDStat*)
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSG_mc_fclose__FP19st_ISG_MEMCARD_DATAP8CARDStat")

// iSG_mc_fdel(st_ISG_MEMCARD_DATA*,const char*)
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSG_mc_fdel__FP19st_ISG_MEMCARD_DATAPCc")

// iSG_mc_fread(st_ISG_MEMCARD_DATA*,char*,int,int)
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSG_mc_fread__FP19st_ISG_MEMCARD_DATAPcii")

// iSG_mcqa_fread(st_ISG_MEMCARD_DATA*,char*,int,int)
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSG_mcqa_fread__FP19st_ISG_MEMCARD_DATAPcii")

// iSG_mc_fwrite(st_ISG_MEMCARD_DATA*,char*,int)
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSG_mc_fwrite__FP19st_ISG_MEMCARD_DATAPci")

// iSG_mcqa_fwrite(st_ISG_MEMCARD_DATA*,char*,int)
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSG_mcqa_fwrite__FP19st_ISG_MEMCARD_DATAPci")

// iSGCheckForWrongDevice()
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSGCheckForWrongDevice__Fv")

// iSGCheckForCorruptFiles(st_ISGSESSION*,char (*)[64])
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSGCheckForCorruptFiles__FP13st_ISGSESSIONPA64_c")

// iSGCheckMemoryCard(st_ISGSESSION*,int)
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSGCheckMemoryCard__FP13st_ISGSESSIONi")

// iSGAutoSave_Startup()
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSGAutoSave_Startup__Fv")

// iSGAutoSave_Connect(int,void*,void (*)(void*, en_CHGCODE))
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSGAutoSave_Connect__FiPvPFPv10en_CHGCODE_v")

// iSGAutoSave_Disconnect(st_ISGSESSION*)
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSGAutoSave_Disconnect__FP13st_ISGSESSION")

// iSGAutoSave_Monitor(st_ISGSESSION*,int)
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSGAutoSave_Monitor__FP13st_ISGSESSIONi")
