#include "isavegame.h"

#include <types.h>
#include <stdio.h>
#include <string.h>

#include "iTRC.h"

extern int8 isavegame_strings[];

extern st_ISGSESSION g_isgdata_MAIN;

extern int32 g_isginit;

// func_800CC5E8
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSGStartup__Fv")
// int32 iSGStartup()
// {
//     int32 i = g_isginit;

//     if (g_isginit != 0)
//     {
//         g_isginit = i;

//         return i;
//     }
//     g_isginit = i;
//     // return g_isginit;
//     iSG_start_your_engines();
//     iSG_load_icondata();
//     return i;
// }

// func_800CC62C
int32 iSGShutdown()
{
    iSG_discard_icondata();
    return 1;
}

// func_800CC650
#if 1
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSGMakeName__F15en_NAMEGEN_TYPEPCci")
#else
// WIP
int8* iSGMakeName(en_NAMEGEN_TYPE type, const int8* base, int32 idx)
{
    static int32 rotate = 0;
    static int8 rotatebuf[32][8];

    int8* use_buf = rotatebuf[rotate];
    int8* fmt_sd = isavegame_strings;
    rotate++;
    if (rotate == 8)
    {
        rotate = 0;
    }

    *use_buf = NULL;
    switch (type)
    {
    case ISG_NGTYP_GAMEFILE:

        if (base != NULL)
        {
            sprintf(use_buf, fmt_sd, base, idx);
        }
        else
        {
            sprintf(use_buf, fmt_sd, isavegame_strings + 7, idx);
        }
        break;
    case ISG_NGTYP_GAMEDIR:
    case ISG_NGTYP_CONFIG:
    case ISG_NGTYP_ICONTHUM:
        break;
    }

    return use_buf;
}
#endif

// func_800CC728
#if 1
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSGSessionBegin__FPvPFPv10en_CHGCODE_vi")
#else
// Struct definition is screwed up.
st_ISGSESSION* iSGSessionBegin(void* cltdata, void (*chgfunc)(void*, en_CHGCODE), int32 monitor)
{
    iTRCDisk::CheckDVDAndResetState();
    memset(&g_isgdata_MAIN, 0, sizeof(st_ISGSESSION));

    g_isgdata_MAIN.chgfunc = chgfunc;
    g_isgdata_MAIN.cltdata = cltdata;

    iSG_chk_icondata();
    return &g_isgdata_MAIN;
}
#endif

// func_800CC798
#if 0
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSGSessionEnd__FP13st_ISGSESSION")
#else
// Structs make no sense
void iSGSessionEnd(st_ISGSESSION* isgdata)
{
    iTRCDisk::CheckDVDAndResetState();
    for (int32 i = 0; i < 2; i++)
    {
        if (isgdata->mcdata[i].mcport != 0)
        {
            iSG_mc_unmount(i);
            isgdata->mcdata[i].mcport = 0;
        }
    }
    memset(isgdata, 0, sizeof(st_ISGSESSION));
}
#endif

// func_800CC820
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSGTgtCount__FP13st_ISGSESSIONPi")

// func_800CC8A8
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSGTgtPhysSlotIdx__FP13st_ISGSESSIONi")

// func_800CC8F0
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSGTgtFormat__FP13st_ISGSESSIONiiPi")

// func_800CC9E4
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSGTgtState__FP13st_ISGSESSIONiPCc")

// func_800CCB7C
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSGTgtSetActive__FP13st_ISGSESSIONi")

// func_800CCC18
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSGTgtHaveRoom__FP13st_ISGSESSIONiiPCcPCcPiPiPi")

// func_800CCDCC
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s",                                                      \
                   "iSGTgtHaveRoomStartup__FP13st_ISGSESSIONiiPCcPCcPiPiPi")

// func_800CCF9C
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSGFileSize__FP13st_ISGSESSIONPCc")

// func_800CD01C
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSGFileModDate__FP13st_ISGSESSIONPCc")

// func_800CD054
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSGFileModDate__FP13st_ISGSESSIONPCcPiPiPiPiPiPi")

// func_800CD198
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSGMakeTimeStamp__FPc")

// func_800CD258
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSGSelectGameDir__FP13st_ISGSESSIONPCc")

// func_800CD340
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSGSetupGameDir__FP13st_ISGSESSIONPCci")

// func_800CD348
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSGSaveFile__FP13st_ISGSESSIONPCcPciiPc")

// func_800CD5F0
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSGLoadFile__FP13st_ISGSESSIONPCcPci")

// func_800CD65C
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSGReadLeader__FP13st_ISGSESSIONPCcPcii")

// func_800CD83C
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSGPollStatus__FP13st_ISGSESSIONP15en_ASYNC_OPCODEi")

// func_800CD844
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSGOpError__FP13st_ISGSESSIONPc")

// func_800CD8D4
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSG_start_your_engines__Fv")

// func_800CD8F8
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSG_mcidx2slot__FiPiPi")

// func_800CD9F8
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSG_mc_exists__Fi")

// func_800CDA70
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSG_mc_tryRepair__FP19st_ISG_MEMCARD_DATA")

// func_800CDB10
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSG_mc_isformatted__FP19st_ISG_MEMCARD_DATA")

// func_800CDBA0
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSG_mc_isGCcard__FP19st_ISG_MEMCARD_DATAPiPi")

// func_800CDD34
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s",                                                      \
                   "iSG_isSpaceForFile__FP19st_ISG_MEMCARD_DATAiPCcPiPiPi")

// func_800CDE8C
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSG_mc_settgt__FP19st_ISG_MEMCARD_DATAi")

// func_800CDF0C
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSG_get_finfo__FP19st_ISG_MEMCARD_DATAPCc")

// func_800CDF90
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSG_curKosher__FP8CARDStatP12CARDFileInfo")

// func_800CE0FC
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSG_fileKosher__FP19st_ISG_MEMCARD_DATAPCciPi")

// func_800CE1C4
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSG_get_fsize__FP19st_ISG_MEMCARD_DATAPCc")

// func_800CE218
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s",                                                      \
                   "iSG_get_fmoddate__FP19st_ISG_MEMCARD_DATAPCcPiPiPiPiPiPi")

// func_800CE38C
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSG_timestamp__FP8CARDStat")

// func_800CE390
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSG_cubeicon_size__Fii")

// func_800CE3BC
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSG_chk_icondata__Fv")

// func_800CE3C4
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSG_load_icondata__Fv")

// func_800CE470
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSG_discard_icondata__Fv")

// func_800CE4B8
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSG_bfr_icondata__FPcP8CARDStatPci")

// func_800CE654
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSG_upd_icostat__FP8CARDStatP8CARDStat")

// func_800CE784
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSG_tpl_unpack__FP21st_ISG_TPL_TEXPALETTE")

// func_800CE848
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSG_bnr_unpack__FP21st_ISG_TPL_TEXPALETTE")

// func_800CE868
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSG_tpl_TEXGet__FP21st_ISG_TPL_TEXPALETTEUi")

// func_800CE878
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSG_mc_mount__Fi")

// func_800CE928
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSG_mc_unmount__Fi")

// func_800CE98C
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSG_cb_unmount__Fll")

// func_800CEA08
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSG_mc_format__FP19st_ISG_MEMCARD_DATAiPi")

// func_800CEAFC
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s",                                                      \
                   "iSG_mc_fopen__FP19st_ISG_MEMCARD_DATAPCci13en_ISG_IOMODEP14en_ASYNC_OPERR")

// func_800CECB0
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSG_mc_fclose__FP19st_ISG_MEMCARD_DATA")

// func_800CECD4
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSG_mc_fclose__FP19st_ISG_MEMCARD_DATAP8CARDStat")

// func_800CED6C
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSG_mc_fdel__FP19st_ISG_MEMCARD_DATAPCc")

// func_800CEE48
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSG_cb_asyndone__Fll")

// func_800CEE4C
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSG_mc_fread__FP19st_ISG_MEMCARD_DATAPcii")

// func_800CEE6C
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSG_mcqa_fread__FP19st_ISG_MEMCARD_DATAPcii")

// func_800CEF54
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSG_mc_fwrite__FP19st_ISG_MEMCARD_DATAPci")

// func_800CEF74
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSG_mcqa_fwrite__FP19st_ISG_MEMCARD_DATAPci")

// func_800CF08C
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSGCheckForWrongDevice__Fv")

// func_800CF15C
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSGCheckForCorruptFiles__FP13st_ISGSESSIONPA64_c")

// func_800CF214
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSGCheckMemoryCard__FP13st_ISGSESSIONi")

// func_800CF258
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSGAutoSave_Startup__Fv")

// func_800CF25C
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSGAutoSave_Connect__FiPvPFPv10en_CHGCODE_v")

// func_800CF2CC
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSGAutoSave_Disconnect__FP13st_ISGSESSION")

// func_800CF2EC
#pragma GLOBAL_ASM("asm/Core/p2/isavegame.s", "iSGAutoSave_Monitor__FP13st_ISGSESSIONi")
