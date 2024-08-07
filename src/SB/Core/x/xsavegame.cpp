#include "xsavegame.h"

#include <types.h>
#include <string.h>
#include <stdio.h>

#include "xutil.h"
#include "xMemMgr.h"
#include "isavegame.h"

S32 g_xsginit;
st_XSAVEGAME_DATA g_xsgdata = {};
st_XSAVEGAME_LEADER g_leaders[3] = {};
static XSGAutoData g_autodata;

S32 xSGStartup()
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

S32 xSGShutdown()
{
    g_xsginit--;
    if (g_xsginit == 0)
    {
        iSGShutdown();
        xUtilShutdown();
    }
    return g_xsginit;
}

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

S32 xSGDone(st_XSAVEGAME_DATA* xsgdata)
{
    S32 result = 1;
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
        if (xsgdata->membuf != (char*)0x0)
        {
            xUtil_idtag2string('XSGS', 0);
            xMemPopTemp(xsgdata->membuf);
            xsgdata->membuf = (char*)0x0;
            xsgdata->memsize = 0;
            xsgdata->buf_curpos = (char*)0x0;
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

S32 xSGCheckForCorruptFiles(st_XSAVEGAME_DATA* xsgdata, char files[][64])
{
    return iSGCheckForCorruptFiles(xsgdata->isgsess, files);
}

S32 xSGTgtCount(st_XSAVEGAME_DATA* xsgdata, S32* max)
{
    return iSGTgtCount(xsgdata->isgsess, max);
}

S32 xSGTgtPhysSlotIdx(st_XSAVEGAME_DATA* xsgdata, S32 tidx)
{
    return iSGTgtPhysSlotIdx(xsgdata->isgsess, tidx);
}

S32 xSGTgtIsFormat(st_XSAVEGAME_DATA* xsgdata, S32 tidx, S32* badEncode)
{
    S32 result = 0;
    U32 state = iSGTgtState(xsgdata->isgsess, tidx, NULL);
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

    S32 rc = -1;
    if (!(state & 0x1000000))
    {
        rc = result;
    }
    return rc;
}

S32 xSGTgtFormatTgt(st_XSAVEGAME_DATA* xsgdata, S32 tidx, S32* canRecover)
{
    return iSGTgtFormat(xsgdata->isgsess, tidx, 0, canRecover);
}

S32 xSGTgtSelect(st_XSAVEGAME_DATA* xsgdata, S32 tidx)
{
    S32 result = iSGTgtSetActive(xsgdata->isgsess, tidx);
    if (result != 0 && xSG_chdir_gamedir(xsgdata) != 0)
    {
        xSG_grab_leaders(xsgdata);
    }
    return result;
}

S32 xSGTgtHasGameDir(st_XSAVEGAME_DATA* xsgdata, S32 tidx)
{
    S32 rc = iSGTgtSetActive(xsgdata->isgsess, tidx);
    if (rc != 0)
    {
        return xSG_chdir_gamedir(xsgdata);
    }
    return rc;
}

S32 xSGTgtHaveRoom(st_XSAVEGAME_DATA* xsgdata, S32 tidx, S32 fsize, S32 slotidx,
                     S32* bytesNeeded, S32* availOnDisk, S32* needFile)
{
    char fname[256] = {};

    if (slotidx < 0)
    {
        return iSGTgtHaveRoom(xsgdata->isgsess, tidx, fsize, NULL, NULL, bytesNeeded, availOnDisk,
                              needFile);
    }

    strcpy(fname, iSGMakeName(ISG_NGTYP_GAMEFILE, NULL, slotidx));
    return iSGTgtHaveRoom(xsgdata->isgsess, tidx, fsize, NULL, fname, bytesNeeded, availOnDisk,
                          needFile);
}

S32 xSGTgtHaveRoomStartup(st_XSAVEGAME_DATA* xsgdata, S32 tidx, S32 fsize, S32 slotidx,
                            S32* bytesNeeded, S32* availOnDisk, S32* needFile)
{
    char fname[256] = {};

    if (slotidx < 0)
    {
        return iSGTgtHaveRoomStartup(xsgdata->isgsess, tidx, fsize, NULL, NULL, bytesNeeded,
                                     availOnDisk, needFile);
    }

    strcpy(fname, iSGMakeName(ISG_NGTYP_GAMEFILE, NULL, slotidx));
    return iSGTgtHaveRoomStartup(xsgdata->isgsess, tidx, fsize, NULL, fname, bytesNeeded,
                                 availOnDisk, needFile);
}

U8 xSGCheckMemoryCard(st_XSAVEGAME_DATA* xsgdata, S32 index)
{
    return iSGCheckMemoryCard(xsgdata->isgsess, index);
}

void xSGGameSet(st_XSAVEGAME_DATA* xsgdata, S32 gidx)
{
    xsgdata->gslot = gidx;
}

S32 xSGGameIsEmpty(st_XSAVEGAME_DATA* xsgdata, S32 gidx)
{
    return xSGGameSize(xsgdata, gidx) <= 0;
}

S32 xSGGameSize(st_XSAVEGAME_DATA* xsgdata, S32 gidx)
{
    S32 size = 0;
    if (xSG_chdir_gamedir(xsgdata))
    {
        char* fname = xSG_cm_slotname(xsgdata, gidx);
        size = iSGFileSize(xsgdata->isgsess, fname);
    }
    return size;
}

char* xSGGameModDate(st_XSAVEGAME_DATA* xsgdata, S32 gidx)
{
    static char da_date[32] = {};
    da_date[0] = '\0';
    if (xSG_chdir_gamedir(xsgdata))
    {
        char* slotname = xSG_cm_slotname(xsgdata, gidx);
        char* date = iSGFileModDate(xsgdata->isgsess, slotname);
        if (date != NULL)
        {
            strcpy(da_date, date);
        }
        else
        {
            strcpy(da_date,
#if 1 // Need these strings and can't seem get them any other way
                   0x409 + "The Mystery Machine\0"
                           "Mystery Machine\0"
                           "On Edge in the Hedge!\0"
                           "Hedges\0"
                           "It's a Mean Greenhouse, Scooby!\0"
                           "Greenhouse\0"
                           "Chills & Spills on Haunted Hill!\0"
                           "Haunted Hill\0"
                           "Scared Stiff at Skull Cliff!\0"
                           "Skull Cliff\0"
                           "Misbehavin'? Cause a Cave In\0"
                           "Caves\0"
                           "A Tight Spot for a Grave Plot!\0"
                           "Graves\0"
                           "A One Way Trip to the Crypt!\0"
                           "Crypts\0"
                           "Gloom & Doom Down in the Tomb!\0"
                           "Tombs\0"
                           "Shock on the Dock!\0"
                           "Docks\0"
                           "Fishy Clues for Scooby-Doo?\0"
                           "Cannery Row\0"
                           "Fear on the Pier!\0"
                           "Piers\0"
                           "Coast for Some Ghosts!\0"
                           "Shoreline\0"
                           "Going Down Witch Way?\0"
                           "Coastal Point\0"
                           "Lighthouse Fright House!\0"
                           "Lighthouse\0"
                           "Wreck on the Deck!\0"
                           "Danger Rocks\0"
                           "Aghast by the Mast!\0"
                           "Masts\0"
                           "Shiver Your Timbers, Scooby!\0"
                           "Shipwrecks\0"
                           "Clamor in the Manor!\0"
                           "Manor\0"
                           "Mind Your Manors!\0"
                           "Stairway\0"
                           "All Scares Upstairs!\0"
                           "Upstairs\0"
                           "Don't Look Down, Scooby-Doo!\0"
                           "Hallways\0"
                           "Panic in the Attic!\0"
                           "Attic\0"
                           "A Dark and Stormy Knight!\0"
                           "Rooftops\0"
                           "Who's Yella' in the Cellar?\0"
                           "Cellar\0"
                           "Creepy Crawlies in the Hallways\0"
                           "Catacombs\0"
                           "Gusts Abound Underground\0"
                           "Tunnels\0"
                           "Little Lab of Horrors\0"
                           "Secret Lab\0"
                           "Mastermind Unmasked!\0"
                           "Mastermind\0"
                           "Cower in the Tower!\0"
                           "Tower\0"
                           "Monster Gallery\0"
#endif
                           "");
        }
    }
    return da_date;
}

char* xSGGameLabel(st_XSAVEGAME_DATA* xsgdata, S32 gidx)
{
    char* da_name = NULL;
    if (xSG_chdir_gamedir(xsgdata) && g_leaders[gidx].gameLabel != NULL)
    {
        da_name = g_leaders[gidx].gameLabel;
    }
    return da_name;
}

S32 xSGGameThumbIndex(st_XSAVEGAME_DATA* xsgdata, S32 gidx)
{
    S32 idx_thum = -1;
    if (xSG_chdir_gamedir(xsgdata))
    {
        st_XSAVEGAME_LEADER* lead = &g_leaders[gidx];
        idx_thum = lead->thumbIconIdx;
    }
    return idx_thum;
}

S32 xSGGameProgress(st_XSAVEGAME_DATA* xsgdata, S32 gidx)
{
    S32 progress = -1;
    if (xSG_chdir_gamedir(xsgdata))
    {
        st_XSAVEGAME_LEADER* lead = &g_leaders[gidx];
        progress = lead->progress;
    }
    return progress;
}

S32 xSGAddSaveClient(st_XSAVEGAME_DATA* xsgdata, U32 clttag, void* cltdata,
                       S32 (*infofunc)(void*, st_XSAVEGAME_DATA*, S32*, S32*),
                       S32 (*procfunc)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_WRITECONTEXT*))
{
    S32 result = 1;
    if (xsgdata->stage & 0x40000000)
    {
        result = 0;
    }
    else if (!(xsgdata->stage & 1))
    {
        result = 0;
    }

    if (xsgdata->stkcnt + 1 >= 128)
    {
        xUtil_idtag2string(clttag, 0);
        result = 0;
    }

    st_XSAVEGAME_CLIENT* clt = &xsgdata->cltstk[xsgdata->stkcnt++];
    clt->idtag = clttag;
    clt->cltinfo = infofunc;
    clt->cltproc = procfunc;
    clt->cltdata = cltdata;
    clt->needamt = 0;
    clt->realamt = 0;
    clt->buf_sizepos = NULL;

    xsgdata->stage |= 4;
    if (result == 0)
    {
        xsgdata->stage |= 0x40000000;
    }
    return result;
}

S32 xSGAddLoadClient(st_XSAVEGAME_DATA* xsgdata, U32 clttag, void* cltdata,
                       S32 (*loadfunc)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_READCONTEXT*,
                                         U32, S32))
{
    S32 result = 1;
    if (xsgdata->stage & 0x40000000)
    {
        result = 0;
    }
    else if (!(xsgdata->stage & 1))
    {
        result = 0;
    }
    else if (xsgdata->stkcnt + 1 >= 128)
    {
        xUtil_idtag2string(clttag, 0);
        result = 0;
    }

    if (clttag != 0 || xsgdata->dfltloadclt.idtag == 0)
    {
        if (clttag == 0)
        {
            xsgdata->dfltloadclt.idtag = 1;
            xsgdata->dfltloadclt.cltload = loadfunc;
            xsgdata->dfltloadclt.cltdata = cltdata;
            xsgdata->dfltloadclt.blokact = 0;
            xsgdata->dfltloadclt.blokmax = 0;
            xsgdata->dfltloadclt.blokpos = NULL;
            xsgdata->dfltloadclt.readpos = NULL;
            xsgdata->dfltloadclt.readremain = 0;
            xsgdata->dfltloadclt.readamt = 0;
        }
        else
        {
            st_XSAVEGAME_CLIENT* clt = &xsgdata->cltstk[xsgdata->stkcnt++];
            clt->idtag = clttag;
            clt->cltload = loadfunc;
            clt->cltdata = cltdata;
            clt->blokact = 0;
            clt->blokmax = 0;
            clt->blokpos = NULL;
            clt->readpos = NULL;
            clt->readremain = 0;
            clt->readamt = 0;
        }
    }

    xsgdata->stage |= 2;
    if (result == 0)
    {
        xsgdata->stage |= 0x40000000;
    }
    return result;
}

S32 xSGSetup(st_XSAVEGAME_DATA* xsgdata)
{
    return xSGSetup(xsgdata, 0, "nothing", -1, 0, 0);
}

S32 xSGSetup(st_XSAVEGAME_DATA* xsgdata, S32 gidx, char* label, S32 progress, iTime playtime,
               S32 thumbIconIdx)
{
    S32 result = 1;
    if (xsgdata->stage & 0x40000000)
    {
        result = 0;
    }
    else if (!(xsgdata->stage & 1))
    {
        result = 0;
    }

    if (xsgdata->mode == XSG_MODE_SAVE)
    {
        xsgdata->gslot = gidx;
        strncpy(xsgdata->label, label, 63);
        xsgdata->label[63] = '\0';
        xsgdata->playtime = playtime;
        xsgdata->progress = progress;
        xsgdata->thumbIconIdx = thumbIconIdx;
        if (result != 0 && xSG_sv_flipinfo(xsgdata) == 0)
        {
            result = 0;
        }
        if (result != 0 && xSG_sv_prepdest(xsgdata) == 0)
        {
            result = 0;
        }
    }
    else
    {
        if (xSG_ld_prepload(xsgdata) == 0)
        {
            result = 0;
        }
    }

    xsgdata->stage |= 8;
    if (result == 0)
    {
        xsgdata->stage |= 0x40000000;
    }
    return result;
}

S32 xSGProcess(st_XSAVEGAME_DATA* xsgdata)
{
    S32 result = 1;
    if (xsgdata->stage & 0x40000000)
    {
        result = 0;
    }
    else if (!(xsgdata->stage & 1))
    {
        result = 0;
    }
    else if (!(xsgdata->stage & 8))
    {
        result = 0;
    }

    if (result != 0 && xsgdata->mode == XSG_MODE_SAVE)
    {
        if (xSG_smem_blkopen(xsgdata) == 0)
        {
            result = 0;
        }

        if (result != 0 && xSG_sv_flipproc(xsgdata) == 0)
        {
            result = 0;
        }
        if (result != 0 && xSG_sv_bldchksum(xsgdata) == 0)
        {
            result = 0;
        }
        if (result != 0 && xSG_smem_blkclose(xsgdata) == 0)
        {
            result = 0;
        }

        if (result != 0)
        {
            xSG_sv_commit(xsgdata);
        }
    }
    else if (result != 0 && xsgdata->mode == XSG_MODE_LOAD)
    {
        if (xSG_ld_readgame(xsgdata) == 0)
        {
            result = 0;
        }
    }

    xsgdata->stage |= 0x10;
    if (result == 0)
    {
        xsgdata->stage |= 0x40000000;
    }
    return result;
}

S32 xSGWrapup(st_XSAVEGAME_DATA* xsgdata)
{
    S32 result = 1;
    S32 rc = 0;

    if (xsgdata->stage & 0x40000000)
    {
        result = 0;
    }
    else if (!(xsgdata->stage & 1))
    {
        result = 0;
    }
    else if (!(xsgdata->stage & 0x10))
    {
        result = 0;
        xsgdata->stage |= 0x40000000;
    }

    if (xsgdata->mode != XSG_MODE_LOAD)
    {
        return result;
    }
    if (result == 0)
    {
        return result;
    }

    if (result != 0)
    {
        rc = xSG_ld_readhead(xsgdata);
    }
    if (rc < 0)
    {
        xsgdata->stage |= 0x40000000;
        return -1;
    }

    if (rc == 0)
    {
        result = 0;
    }
    if (result != 0)
    {
        rc = xSG_ld_validate(xsgdata);
    }

    if (rc < 0)
    {
        xsgdata->stage |= 0x40000000;
        return -1;
    }

    if (rc == 0)
    {
        result = 0;
    }
    if (result != 0)
    {
        rc = xSG_ld_findcltblk(xsgdata);
    }

    if (rc == 0)
    {
        result = 0;
    }
    if (result != 0)
    {
        rc = xSG_ld_flipload(xsgdata);
    }

    if (rc == 0)
    {
        result = 0;
    }
    if (result == 0)
    {
        xsgdata->stage |= 0x40000000;
    }

    return result;
}

en_XSGASYNC_STATUS xSGAsyncStatus(st_XSAVEGAME_DATA* xsgdata, S32 block, en_XSG_WHYFAIL* whyFail,
                                  char* errmsg)
{
    en_XSGASYNC_STATUS xstat = XSG_ASTAT_NOOP;
    en_ASYNC_OPERR whyerr = ISG_OPERR_NONE;

    if (errmsg != NULL)
    {
        errmsg[0] = '\0';
    }

    en_ASYNC_OPSTAT istat = iSGPollStatus(xsgdata->isgsess, 0, block);
    switch (istat)
    {
    case ISG_OPSTAT_FAILURE:
        xstat = XSG_ASTAT_FAILED;
        whyerr = iSGOpError(xsgdata->isgsess, errmsg);
        break;
    case ISG_OPSTAT_INPROG:
        xstat = XSG_ASTAT_INPROG;
        break;
    case ISG_OPSTAT_SUCCESS:
        xstat = XSG_ASTAT_SUCCESS;
        break;
    }

    if (whyFail != NULL && whyerr != ISG_OPERR_NONE)
    {
        en_XSG_WHYFAIL con = XSG_WHYERR_NONE;

        switch (whyerr)
        {
        case ISG_OPERR_NONE:
            break;
        case ISG_OPERR_NOCARD:
            con = XSG_WHYERR_NOCARD;
            break;
        case ISG_OPERR_NOROOM:
        case ISG_OPERR_SVNOSPACE:
            con = XSG_WHYERR_NOROOM;
            break;
        case ISG_OPERR_DAMAGE:
            con = XSG_WHYERR_DAMAGE;
            break;
        case ISG_OPERR_SVWRITE:
            con = XSG_WHYERR_CARDYANKED;
            break;
        default:
            con = XSG_WHYERR_OTHER;
            break;
        }
        *whyFail = con;
    }
    return xstat;
}

S32 xSG_cb_leader_svinfo(void*, st_XSAVEGAME_DATA*, S32* cur_space, S32* max_fullgame)
{
    *cur_space = 0x100;
    *max_fullgame = 0x100;
    return 1;
}

S32 xSG_cb_leader_svproc(void* cltdata, st_XSAVEGAME_DATA* original_xsgdata,
                           st_XSAVEGAME_WRITECONTEXT* wctxt)
{
    st_XSAVEGAME_DATA* xsg = (st_XSAVEGAME_DATA*)cltdata;
    st_XSAVEGAME_LEADER leader = {};
    char fundata[] = "--TakeMeToYourLeader--";

    strncpy(leader.gameLabel, xsg->label, 0x40);
    leader.gameLabel[63] = 0;
    leader.gametime = xsg->playtime;
    leader.progress = xsg->progress;
    leader.thumbIconIdx = xsg->thumbIconIdx;

    xSGWriteData(original_xsgdata, wctxt, leader.gameLabel, sizeof(st_XSAVEGAME_LEADER));
    xSGWriteData(original_xsgdata, wctxt, fundata, 0x16);
    return 1;
}

S32 xSG_cb_leader_load(void*, st_XSAVEGAME_DATA* original_xsgdata,
                         st_XSAVEGAME_READCONTEXT* rctxt, U32, S32)
{
    char fundata[32] = {};
    st_XSAVEGAME_LEADER discard = {};
    xSGReadData(original_xsgdata, rctxt, discard.gameLabel, sizeof(st_XSAVEGAME_LEADER));
    xSGReadData(original_xsgdata, rctxt, fundata, 0x16);
    return 1;
}

S32 xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, char* data,
                   S32 elesiz, S32 n)
{
    S32 cnt;
    S32 is_ok = 1;

    if (xsgdata->stage & 0x40000000)
    {
        return 0;
    }
    if (elesiz == 0)
    {
        return 0;
    }

    cnt = n * elesiz;
    if (cnt == 0)
    {
        return cnt;
    }

    if (xsgdata->upd_tally != 0 && xsgdata->totamt + cnt > xsgdata->memsize)
    {
        xsgdata->stage |= 0x40000000;
        return 0;
    }

    void* mcprc;
    mcprc = memcpy(xsgdata->buf_curpos, data, cnt);
    if (mcprc == NULL)
    {
        is_ok = 0;
    }
    else
    {
        xsgdata->buf_curpos += cnt;
    }

    // I wonder if this was supposed to be a boolean and
    if (is_ok & xsgdata->upd_tally)
    {
        xsgdata->totamt += cnt;
        if (wctxt != NULL)
        {
            st_XSAVEGAME_CLIENT* clt = (st_XSAVEGAME_CLIENT*)wctxt;
            clt->realamt += cnt;
        }
    }

    if (is_ok == 0)
    {
        xsgdata->stage |= 0x40000000;
        return 0;
    }
    else
    {
        return cnt / elesiz;
    }

    return cnt;
}

S32 xSGWriteStrLen(const char* str)
{
    S32 len = strlen(str);
    len += (len + 1 & 1) + 1;
    return len;
}

S32 xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, char* data,
                   S32 n)
{
    return xSGWriteData(xsgdata, wctxt, data, sizeof(char), n);
}

S32 xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, S32* data,
                   S32 n)
{
    return xSGWriteData(xsgdata, wctxt, (char*)data, sizeof(S32), n);
}

S32 xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, U32* data,
                   S32 n)
{
    return xSGWriteData(xsgdata, wctxt, (char*)data, sizeof(U32), n);
}

S32 xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, F32* data,
                   S32 n)
{
    return xSGWriteData(xsgdata, wctxt, (char*)data, sizeof(F32), n);
}

S32 xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, char* buff,
                  S32 elesiz, S32 n)
{
    S32 cnt;
    if (elesiz == 0)
    {
        return 0;
    }

    cnt = n * elesiz;
    if (cnt == 0)
    {
        return cnt;
    }

    st_XSAVEGAME_CLIENT* clt = (st_XSAVEGAME_CLIENT*)rctxt;
    if (clt != NULL && cnt > clt->readremain)
    {
        xUtil_idtag2string(clt->idtag, 0);
        return 0;
    }

    if (clt != NULL)
    {
        memcpy(buff, clt->readpos, cnt);
    }
    else
    {
        memcpy(buff, xsgdata->walkpos, cnt);
    }

    xsgdata->walkpos += cnt;
    xsgdata->walkremain -= cnt;

    if (clt != NULL)
    {
        clt->readpos += cnt;
        clt->readamt += cnt;
        clt->readremain -= cnt;
    }

    return cnt / elesiz;
}

S32 xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, char* buff, S32 n)
{
    return xSGReadData(xsgdata, rctxt, buff, sizeof(char), n);
}

S32 xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, S32* buff, S32 n)
{
    return xSGReadData(xsgdata, rctxt, (char*)buff, sizeof(S32), n);
}

S32 xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, U32* buff,
                  S32 n)
{
    return xSGReadData(xsgdata, rctxt, (char*)buff, sizeof(U32), n);
}

S32 xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, F32* buff,
                  S32 n)
{
    return xSGReadData(xsgdata, rctxt, (char*)buff, sizeof(F32), n);
}

S32 xSG_grab_leaders(st_XSAVEGAME_DATA* xsgdata)
{
    S32 num_found = 0;
    char readbuf[116] = {};

    memset(&g_leaders, 0, sizeof(g_leaders));

    if (!xSG_chdir_gamedir(xsgdata))
    {
        return 0;
    }

    for (S32 i = 0; i < 3; i++)
    {
        if (!xSGGameIsEmpty(xsgdata, i))
        {
            char* slotname = xSG_cm_slotname(xsgdata, i);
            S32 rc = iSGReadLeader(xsgdata->isgsess, slotname, readbuf, sizeof(readbuf), 0);
            if (rc != 0)
            {
                num_found++;
                memcpy(&g_leaders[i], readbuf + 0x1c, sizeof(st_XSAVEGAME_LEADER));
            }
        }
    }

    return num_found;
}

S32 xSG_chdir_gamedir(st_XSAVEGAME_DATA* xsgdata)
{
    S32 rc = 1;
    char* name = iSGMakeName(ISG_NGTYP_GAMEDIR, NULL, 0);
    if (!iSGSelectGameDir(xsgdata->isgsess, name))
    {
        rc = 0;
    }
    return rc;
}

char* xSG_cm_slotname(st_XSAVEGAME_DATA* xsgdata, S32 gidx)
{
    static char slotname[32] = {};
    slotname[0] = '\0';

    char* tmp;
    if (gidx == 0x9a5)
    {
        tmp = iSGMakeName(ISG_NGTYP_CONFIG, NULL, 0);
    }
    else
    {
        tmp = iSGMakeName(ISG_NGTYP_GAMEFILE, NULL, gidx);
    }
    strcpy(slotname, tmp);
    return slotname;
}

void xSG_areaComposeLabel(char* label, int, char*, int)
{
    char buf[64] = {};
    iSGMakeTimeStamp(buf);
    sprintf(label, "%s", buf);
}

S32 xSG_sv_flipinfo(st_XSAVEGAME_DATA* xsgdata)
{
    S32 result = 1;
    S32 cltamt = 0;
    S32 cltmax = 0;

    for (S32 i = 0; i < xsgdata->stkcnt; i++)
    {
        st_XSAVEGAME_CLIENT* clt = &xsgdata->cltstk[i];
        cltamt = 0;
        cltmax = 0;

        S32 rc = clt->cltinfo(clt->cltdata, xsgdata, &cltamt, &cltmax);
        if (rc == 0)
        {
            xUtil_idtag2string(clt->idtag, 0);
            result = 0;
        }
        else
        {
            clt->needamt = cltamt;
            clt->maxamt = cltmax;
            xsgdata->cltneed += cltamt;
            xsgdata->cltmax += cltmax;
            xsgdata->chdrneed += 0xc;
        }

        if (result == 0)
        {
            xsgdata->stage |= 0x40000000;
            break;
        }
    }
    return result;
}

S32 xSG_sv_prepdest(st_XSAVEGAME_DATA* xsgdata)
{
    S32 result = 1;

    if (xsgdata->cltneed < 1)
    {
        result = 0;
    }
    else
    {
        xsgdata->memsize = xsgdata->cltmax + xsgdata->chdrneed + 0x10;
        xsgdata->membuf = (char*)xMemPushTemp(xsgdata->memsize);

        if (xsgdata->membuf == NULL)
        {
            result = 0;
        }
        else
        {
            xUtil_idtag2string('XSGS', 0);
            memset(xsgdata->membuf, 0, xsgdata->memsize);
            xsgdata->buf_curpos = xsgdata->membuf;
        }
    }
    return result;
}

S32 xSG_sv_flipproc(st_XSAVEGAME_DATA* xsgdata)
{
    S32 result = 1;
    S32 rc;
    char bfill = 0xbf;

    for (S32 i = 0; i < xsgdata->stkcnt; i++)
    {
        st_XSAVEGAME_CLIENT* clt = &xsgdata->cltstk[i];

        rc = xSG_smem_cltopen(xsgdata, clt);
        if (rc != 0)
        {
            rc = clt->cltproc(clt->cltdata, xsgdata, (st_XSAVEGAME_WRITECONTEXT*)clt);
            if (rc == 0)
            {
                xUtil_idtag2string(clt->idtag, 0);
                result = 0;
            }

            S32 needfill = clt->maxamt - clt->realamt;
            xUtil_idtag2string(clt->idtag, 0);
            while (needfill-- > 0)
            {
                xSGWriteData(xsgdata, NULL, &bfill, 1);
            }
        }

        if (rc != 0 && xSG_smem_cltclose(xsgdata, clt) == 0)
        {
            result = 0;
            xUtil_idtag2string(clt->idtag, 0);
        }

        if (result == 0)
        {
            break;
        }
    }
    return result;
}

S32 xSG_sv_bldchksum(st_XSAVEGAME_DATA* xsgdata)
{
    xsgdata->chksum =
        xUtil_crc_update(xsgdata->chksum, xsgdata->membuf + 16, xsgdata->memsize - 16);
    return 1;
}

S32 xSG_smem_blkopen(st_XSAVEGAME_DATA* xsgdata)
{
    S32 i = '3333';
    S32 j = 'GDAT';
    S32 k = 1;

    xSGWriteData(xsgdata, 0, &j, 1);
    xSGWriteData(xsgdata, 0, &k, 1);

    xsgdata->buf_sizespot = xsgdata->buf_curpos;
    xSGWriteData(xsgdata, 0, &i, 1);
    xsgdata->buf_cksmspot = xsgdata->buf_curpos;
    xSGWriteData(xsgdata, 0, &i, 1);
    return 1;
}

S32 xSG_smem_blkclose(st_XSAVEGAME_DATA* xsgdata)
{
    xsgdata->upd_tally = 0;

    char* last_bufpos = xsgdata->buf_curpos;
    xsgdata->buf_curpos = xsgdata->buf_sizespot;
    xSGWriteData(xsgdata, NULL, &xsgdata->totamt, 1);
    xsgdata->buf_curpos = last_bufpos;

    last_bufpos = xsgdata->buf_curpos;
    xsgdata->buf_curpos = xsgdata->buf_cksmspot;
    xSGWriteData(xsgdata, NULL, &xsgdata->chksum, 1);
    xsgdata->buf_curpos = last_bufpos;
    xsgdata->upd_tally = 1;
    return 1;
}

S32 xSG_smem_cltopen(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_CLIENT* clt)
{
    S32 i = '3333';
    S32 j = 0;

    xUtil_idtag2string(clt->idtag, 0);
    j = clt->idtag;
    xSGWriteData(xsgdata, 0, &j, 1);
    clt->buf_maxpos = xsgdata->buf_curpos;
    xSGWriteData(xsgdata, 0, &i, 1);
    clt->buf_sizepos = xsgdata->buf_curpos;
    xSGWriteData(xsgdata, 0, &i, 1);
    xUtil_idtag2string(clt->idtag, 0);
    return 1;
}

S32 xSG_smem_cltclose(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_CLIENT* clt)
{
    xUtil_idtag2string(clt->idtag, 0);
    xsgdata->upd_tally = 0;
    if (clt->needamt < clt->realamt)
    {
        xUtil_idtag2string(clt->idtag, 0);
    }

    char* last_bufpos = xsgdata->buf_curpos;
    xsgdata->buf_curpos = clt->buf_maxpos;
    xSGWriteData(xsgdata, NULL, &clt->maxamt, 1);
    xsgdata->buf_curpos = last_bufpos;

    xsgdata->buf_curpos = clt->buf_sizepos;
    xSGWriteData(xsgdata, NULL, &clt->realamt, 1);
    xsgdata->buf_curpos = last_bufpos;
    xsgdata->upd_tally = 1;

    xUtil_idtag2string(clt->idtag, 0);
    return 1;
}

S32 xSG_sv_commit(st_XSAVEGAME_DATA* xsgdata)
{
    S32 result = 1;
    S32 rc;
    char browselabel[64] = {};

    char* name = iSGMakeName(ISG_NGTYP_GAMEDIR, NULL, 0);
    if (!iSGSetupGameDir(xsgdata->isgsess, name, 1))
    {
        result = 0;
    }
    else
    {
        xSG_areaComposeLabel(browselabel, xsgdata->thumbIconIdx, xsgdata->label,
                             xsgdata->gslot + 1);

        if (!iSGSaveFile(xsgdata->isgsess, iSGMakeName(ISG_NGTYP_GAMEFILE, NULL, xsgdata->gslot),
                         xsgdata->membuf, xsgdata->memsize, 1, browselabel))
        {
            result = 0;
        }
    }

    return result;
}

void xSG_cb_ISGChange(void*, en_CHGCODE what)
{
    XSGAutoData* asg = xSGAutoSave_GetCache();
    switch (what)
    {
    case ISG_CHG_NONE:
        break;
    case ISG_CHG_TARGET:
        asg->MarkInvalid();
        break;
    case ISG_CHG_GAMELIST:
        asg->MarkInvalid();
        break;
    }
}

S32 xSG_ld_prepload(st_XSAVEGAME_DATA* xsgdata)
{
    S32 result = 1;
    char* name = iSGMakeName(ISG_NGTYP_GAMEFILE, NULL, xsgdata->gslot);
    xsgdata->loadsize = iSGFileSize(xsgdata->isgsess, name);

    if (xsgdata->loadsize < 1)
    {
        result = 0;
    }
    else
    {
        xsgdata->loadbuf = (char*)xMemPushTemp(xsgdata->loadsize);
        memset(xsgdata->loadbuf, 0, xsgdata->loadsize);
    }
    return result;
}

S32 xSG_ld_readgame(st_XSAVEGAME_DATA* xsgdata)
{
    S32 result = 1;
    if (xsgdata->stage & 0x40000000)
    {
        result = 0;
    }

    char* name = iSGMakeName(ISG_NGTYP_GAMEFILE, NULL, xsgdata->gslot);
    if (!iSGLoadFile(xsgdata->isgsess, name, xsgdata->loadbuf, 1))
    {
        result = 0;
    }

    if (result == 0)
    {
        xsgdata->stage |= 0x40000000;
    }

    return result;
}

S32 xSG_ld_readhead(st_XSAVEGAME_DATA* xsgdata)
{
    S32 result = 1;
    S32 ival = 0;
    bool not_ok = 0;

    xsgdata->walkpos = xsgdata->loadbuf;
    xsgdata->walkremain = xsgdata->loadsize;
    xSGReadData(xsgdata, NULL, &ival, 1);

    if (ival != 'GDAT')
    {
        result = 0;
        not_ok = 1;
    }

    xSGReadData(xsgdata, NULL, &ival, 1);
    if (ival != 1)
    {
        result = 0;
        not_ok = 1;
    }

    xSGReadData(xsgdata, NULL, &ival, 1);
    xsgdata->readsize = ival;

    xSGReadData(xsgdata, NULL, &ival, 1);
    xsgdata->file_chksum = ival;
    if (not_ok)
    {
        return -1;
    }
    return result;
}

S32 xSG_ld_validate(st_XSAVEGAME_DATA* xsgdata)
{
    S32 result = 1;

    xsgdata->loadsize = xsgdata->readsize;
    xsgdata->walkpos = xsgdata->loadbuf + 0x10;
    xsgdata->walkremain = xsgdata->loadsize - 0x10;
    xsgdata->read_chksum =
        xUtil_crc_update(xsgdata->read_chksum, xsgdata->walkpos, xsgdata->walkremain);

    if (xsgdata->read_chksum != xsgdata->file_chksum)
    {
        result = -1;
    }

    return result;
}

S32 xSG_ld_findcltblk(st_XSAVEGAME_DATA* xsgdata)
{
    S32 ival = 0;
    U32 tag = 0;
    S32 maxamt = 0;
    S32 actamt = 0;
    st_XSAVEGAME_CLIENT* dfltclt = &xsgdata->dfltloadclt;

    xsgdata->walkpos = xsgdata->loadbuf;
    xsgdata->walkremain = xsgdata->loadsize;
    xSGReadData(xsgdata, 0, &ival, 1);
    xSGReadData(xsgdata, 0, &ival, 1);
    xSGReadData(xsgdata, 0, &ival, 1);
    xSGReadData(xsgdata, 0, &ival, 1);

    while (xsgdata->walkremain > 0)
    {
        tag = 0;
        S32 found = 0;
        maxamt = 0;
        actamt = 0;

        xSGReadData(xsgdata, 0, &tag, 1);
        xSGReadData(xsgdata, 0, &maxamt, 1);
        xSGReadData(xsgdata, 0, &actamt, 1);
        xUtil_idtag2string(tag, 0);

        for (S32 i = 0; i < xsgdata->stkcnt; i++)
        {
            st_XSAVEGAME_CLIENT* clt = &xsgdata->cltstk[i];

            if (clt->idtag == tag)
            {
                found = true;
                clt->blokpos = xsgdata->walkpos;
                clt->blokact = actamt;
                clt->blokmax = maxamt;
                clt->readpos = xsgdata->walkpos;
                clt->readamt = 0;
                clt->readremain = actamt;
                break;
            }
        }

        if (!found)
        {
            if (dfltclt->idtag != 0)
            {
                xUtil_idtag2string(tag, 0);
                dfltclt->blokpos = xsgdata->walkpos;
                dfltclt->blokact = actamt;
                dfltclt->blokmax = maxamt;
                dfltclt->readpos = xsgdata->walkpos;
                dfltclt->readamt = 0;
                dfltclt->readremain = actamt;

                S32 rc =
                    dfltclt->cltload(dfltclt->cltdata, xsgdata, (st_XSAVEGAME_READCONTEXT*)dfltclt,
                                     tag, dfltclt->blokact);
                if (rc == 0)
                {
                    xUtil_idtag2string(tag, 0);
                }

                rc = dfltclt->readremain;
                if (rc > 0)
                {
                    xsgdata->walkpos += rc + (maxamt - actamt);
                    xsgdata->walkremain -= dfltclt->readremain + (maxamt - actamt);
                }
            }
            else
            {
                xUtil_idtag2string(tag, 0);
                xsgdata->walkpos += maxamt;
                xsgdata->walkremain -= maxamt;
            }
        }
        else
        {
            xsgdata->walkpos += maxamt;
            xsgdata->walkremain -= maxamt;
        }
    }
    return 1;
}

S32 xSG_ld_flipload(st_XSAVEGAME_DATA* xsgdata)
{
    S32 result = 1;
    S32 rc;

    for (S32 i = 0; i < xsgdata->stkcnt; i++)
    {
        st_XSAVEGAME_CLIENT* clt = &xsgdata->cltstk[i];
        if (clt->cltload != NULL && clt->blokact != 0 && clt->blokpos != NULL)
        {
            xUtil_idtag2string(clt->idtag, 0);

            rc = clt->cltload(clt->cltdata, xsgdata, (st_XSAVEGAME_READCONTEXT*)clt, clt->idtag,
                              clt->blokact);
            if (rc == 0)
            {
                xUtil_idtag2string(clt->idtag, 0);
                result = 0;
            }
        }
        else
        {
            xUtil_idtag2string(clt->idtag, 0);
        }

        if (result == 0)
        {
            break;
        }
    }

    return result;
}

XSGAutoData* xSGAutoSave_GetCache()
{
    return &g_autodata;
}

void xSGAutoSave_Startup()
{
    XSGAutoData* asg = xSGAutoSave_GetCache();
    asg->flg_autodata = 0;
    asg->lastGame = -1;
    asg->lastTarg = -1;
    asg->lastPhysicalSlot = -1;
    iSGAutoSave_Startup();
}

S32 XSGAutoData::IsValid()
{
    if (this->flg_autodata & 1 && !XSGAutoData::HWCheckConnect(this->lastTarg))
    {
        this->flg_autodata &= 0x0fffffffe;
    }
    return this->flg_autodata & 1;
}

void XSGAutoData::MarkInvalid()
{
    this->flg_autodata &= 0xfffffffe;
}

S32 XSGAutoData::SetCache(S32 targ, S32 game, S32 physicalSlot)
{
    this->Discard();
    this->isg_monitor = this->HWConnect(targ);
    if (this->isg_monitor == NULL)
    {
        return 0;
    }

    this->lastTarg = targ;
    this->lastGame = game;
    this->lastPhysicalSlot = physicalSlot;
    this->flg_autodata |= 1;
    return 1;
}

void XSGAutoData::Discard()
{
    this->flg_autodata = 0;
    this->lastTarg = -1;
    this->lastGame = -1;
    this->lastPhysicalSlot = -1;
    if (this->isg_monitor != NULL)
    {
        this->HWDisconnect(this->isg_monitor);
    }
    this->isg_monitor = NULL;
}

st_ISGSESSION* XSGAutoData::HWConnect(S32 targ)
{
    return iSGAutoSave_Connect(targ, xSGAutoSave_GetCache(), ASG_ISG_changed);
}

void XSGAutoData::HWDisconnect(st_ISGSESSION* isgsess)
{
    iSGAutoSave_Disconnect(isgsess);
}

S32 XSGAutoData::HWCheckConnect(S32 targ)
{
    return iSGAutoSave_Monitor(this->isg_monitor, this->lastTarg);
}

void ASG_ISG_changed(void*, en_CHGCODE what)
{
    XSGAutoData* asg = xSGAutoSave_GetCache();
    switch (what)
    {
    case ISG_CHG_NONE:
        break;
    case ISG_CHG_TARGET:
        asg->MarkInvalid();
        break;
    case ISG_CHG_GAMELIST:
        asg->MarkInvalid();
        break;
    }
}
