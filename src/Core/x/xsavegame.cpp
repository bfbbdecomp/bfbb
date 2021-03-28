#include "xsavegame.h"

#include <types.h>
#include <string.h>

#include "xutil.h"
#include "xMemMgr.h"
#include "../p2/isavegame.h"

int32 g_xsginit;
extern st_XSAVEGAME_DATA g_xsgdata;
extern st_XSAVEGAME_LEADER g_leaders[3];
// st_XSG_SHORTLABEL g_msglabels[32];
// XSGAutoData g_autodata;

// func_8003CC4C
int32 xSGStartup()
{
    if (g_xsginit++ == 0)
    {
        xUtilStartup();
        iSGStartup();
        memset(&g_xsgdata, 0, sizeof(st_XSAVEGAME_DATA));
    }
    xSGAutoSave_Startup();
    return g_xsginit;
}

// func_8003CCA0
int32 xSGShutdown()
{
    g_xsginit--;
    if (g_xsginit == 0)
    {
        iSGShutdown();
        xUtilShutdown();
    }
    return g_xsginit;
}

// func_8003CCD8
st_XSAVEGAME_DATA* xSGInit(en_SAVEGAME_MODE mode)
{
    st_XSAVEGAME_DATA* xsgdata = &g_xsgdata;
    if (g_xsgdata.stage != 0)
    {
        return NULL;
    }

    xsgdata->mode = mode;
    xsgdata->chksum = xUtil_crc_init();
    xsgdata->upd_tally = 1;
    xsgdata->file_chksum = 0;
    xsgdata->read_chksum = xUtil_crc_init();
    xsgdata->stage |= 1;
    xsgdata->isgsess = iSGSessionBegin(xsgdata, xSG_cb_ISGChange, 0);

    if (mode == XSG_MODE_LOAD)
    {
        xSGAddLoadClient(xsgdata, 'LEDR', xsgdata, xSG_cb_leader_load);
    }
    else
    {
        xSGAddSaveClient(xsgdata, 'LEDR', xsgdata, xSG_cb_leader_svinfo, xSG_cb_leader_svproc);
    }

    memset(&g_leaders, 0, sizeof(g_leaders));
    return xsgdata;
}

// func_8003CDD4
int32 xSGDone(st_XSAVEGAME_DATA* xsgdata)
{
    int32 result = 1;
    if (!(xsgdata->stage & 1))
    {
        result = 0;
    }

    if (xsgdata->isgsess != NULL)
    {
        iSGSessionEnd(xsgdata->isgsess);
    }
    if (xsgdata->mode == XSG_MODE_SAVE)
    {
        if (xsgdata->membuf != (int8*)0x0)
        {
            xUtil_idtag2string('XSGS', 0);
            xMemPopTemp(xsgdata->membuf);
            xsgdata->membuf = (int8*)0x0;
            xsgdata->memsize = 0;
            xsgdata->buf_curpos = (int8*)0x0;
        }
    }
    else if (xsgdata->mode == XSG_MODE_LOAD)
    {
        if (xsgdata->membuf != NULL)
        {
            xUtil_idtag2string('XSGL', 0);
            xMemPopTemp(xsgdata->loadbuf);
            xsgdata->loadbuf = NULL;
            xsgdata->loadsize = 0;
            xsgdata->walkpos = NULL;
            xsgdata->walkremain = 0;
        }
        if (xsgdata->loadbuf != NULL)
        {
            xMemPopTemp(xsgdata->loadbuf);
            xsgdata->loadbuf = NULL;
            xsgdata->walkpos = NULL;
            xsgdata->walkremain = 0;
        }
    }

    memset(&g_xsgdata, 0, sizeof(st_XSAVEGAME_DATA));
    memset(&g_leaders, 0, sizeof(g_leaders));
    return result;
}

// func_8003CEF8
int32 xSGCheckForCorruptFiles(st_XSAVEGAME_DATA* xsgdata, int8 files[][64])
{
    return iSGCheckForCorruptFiles(xsgdata->isgsess, files);
}

// func_8003CF1C
int32 xSGTgtCount(st_XSAVEGAME_DATA* xsgdata, int32* max)
{
    return iSGTgtCount(xsgdata->isgsess, max);
}

// func_8003CF40
int32 xSGTgtPhysSlotIdx(st_XSAVEGAME_DATA* xsgdata, int32 tidx)
{
    return iSGTgtPhysSlotIdx(xsgdata->isgsess, tidx);
}

// func_8003CF64
int32 xSGTgtIsFormat(st_XSAVEGAME_DATA* xsgdata, int32 tidx, int32* badEncode)
{
    int32 result = 0;
    uint32 state = iSGTgtState(xsgdata->isgsess, tidx, NULL);
    if (state & 0x4000000)
    {
        if (badEncode != NULL)
        {
            *badEncode = 1;
        }
    }
    else if (state & 2)
    {
        result = 1;
    }

    int32 rc = -1;
    if (!(state & 0x1000000))
    {
        rc = result;
    }
    return rc;
}

// func_8003CFDC
int32 xSGTgtFormatTgt(st_XSAVEGAME_DATA* xsgdata, int32 tidx, int32* canRecover)
{
    return iSGTgtFormat(xsgdata->isgsess, tidx, 0, canRecover);
}

// func_8003D008
int32 xSGTgtSelect(st_XSAVEGAME_DATA* xsgdata, int32 tidx)
{
    int32 result = iSGTgtSetActive(xsgdata->isgsess, tidx);
    if (result != 0 && xSG_chdir_gamedir(xsgdata) != 0)
    {
        xSG_grab_leaders(xsgdata);
    }
    return result;
}

// func_8003D064
int32 xSGTgtHasGameDir(st_XSAVEGAME_DATA* xsgdata, int32 tidx)
{
    int32 rc = iSGTgtSetActive(xsgdata->isgsess, tidx);
    if (rc != 0)
    {
        return xSG_chdir_gamedir(xsgdata);
    }
    return rc;
}

// func_8003D0A4
#ifndef NON_MATCHING
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGTgtHaveRoom__FP17st_XSAVEGAME_DATAiiiPiPiPi")
#else
// rodata
int32 xSGTgtHaveRoom(st_XSAVEGAME_DATA* xsgdata, int32 tidx, int32 fsize, int32 slotidx,
                     int32* bytesNeeded, int32* availOnDisk, int32* needFile)
{
    int8 fname[256] = {};

    if (slotidx < 0)
    {
        return iSGTgtHaveRoom(xsgdata->isgsess, tidx, fsize, NULL, NULL, bytesNeeded, availOnDisk,
                              needFile);
    }

    strcpy(fname, iSGMakeName(ISG_NGTYP_GAMEFILE, NULL, slotidx));
    return iSGTgtHaveRoom(xsgdata->isgsess, tidx, fsize, NULL, fname, bytesNeeded, availOnDisk,
                          needFile);
}
#endif

// func_8003D17C
#ifndef NON_MATCHING
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s",                                                       \
                   "xSGTgtHaveRoomStartup__FP17st_XSAVEGAME_DATAiiiPiPiPi")
#else
// rodata
int32 xSGTgtHaveRoomStartup(st_XSAVEGAME_DATA* xsgdata, int32 tidx, int32 fsize, int32 slotidx,
                            int32* bytesNeeded, int32* availOnDisk, int32* needFile)
{
    int8 fname[256] = {};

    if (slotidx < 0)
    {
        return iSGTgtHaveRoomStartup(xsgdata->isgsess, tidx, fsize, NULL, NULL, bytesNeeded,
                                     availOnDisk, needFile);
    }

    strcpy(fname, iSGMakeName(ISG_NGTYP_GAMEFILE, NULL, slotidx));
    return iSGTgtHaveRoomStartup(xsgdata->isgsess, tidx, fsize, NULL, fname, bytesNeeded,
                                 availOnDisk, needFile);
}
#endif

// func_8003D254
uint8 xSGCheckMemoryCard(st_XSAVEGAME_DATA* xsgdata, int32 index)
{
    return iSGCheckMemoryCard(xsgdata->isgsess, index);
}

// func_8003D278
void xSGGameSet(st_XSAVEGAME_DATA* xsgdata, int32 gidx)
{
    xsgdata->gslot = gidx;
}

// func_8003D280
#pragma GLOBAL_ASM("asm/Core/x/xsavegame.s", "xSGGameIsEmpty__FP17st_XSAVEGAME_DATAi")

// func_8003D2B0
int32 xSGGameSize(st_XSAVEGAME_DATA* xsgdata, int32 gidx)
{
    int32 size = 0;
    if (xSG_chdir_gamedir(xsgdata))
    {
        int8* fname = xSG_cm_slotname(xsgdata, gidx);
        size = iSGFileSize(xsgdata->isgsess, fname);
    }
    return size;
}

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
