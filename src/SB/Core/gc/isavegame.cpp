#include "isavegame.h"

#include "xMemMgr.h"

#include "iFile.h"
#include "iSystem.h"
#include "iTRC.h"

#include <dolphin.h>
#include <stdio.h>
#include <string.h>
#include <types.h>

// WIP
struct st_ISG_TPL_TEXPALETTE
{
};

// .sbss
static volatile S32 g_isginit;
static st_ISG_TPL_TEXPALETTE* g_rawicon;
static st_ISG_TPL_TEXPALETTE* g_rawbanr;
static S32 g_iconsize;
static S32 g_banrsize;
static S8 isMounted;

// .data
static st_ISGSESSION g_isgdata_MAIN = { 0 };
static struct
{
    S32 unk_0;
    S32 unk_4;
    S32 unk_8;
} g_legalSectSize = { 0x2000, 0, -1 };

static S32 iSG_start_your_engines();
static S32 iSG_chk_icondata();
static S32 iSG_load_icondata();
static void iSG_discard_icondata();
static S32 iSG_mc_unmount(S32 slot);

S32 iSGStartup()
{
    if (g_isginit++ != 0)
    {
        return g_isginit;
    }

    iSG_start_your_engines();
    iSG_load_icondata();
    return g_isginit;
}

S32 iSGShutdown()
{
    iSG_discard_icondata();
    return 1;
}

char* iSGMakeName(en_NAMEGEN_TYPE type, const char* base, S32 idx)
{
    static volatile S32 rotate = 0; // fakematch??
    static char rotatebuf[8][32] = { 0 };

    const char* fmt_sd = "%s%02d";
    char* use_buf = rotatebuf[rotate++];
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
            sprintf(use_buf, fmt_sd, "SpongeBob", idx);
        }
        break;
    case ISG_NGTYP_GAMEDIR:
    case ISG_NGTYP_CONFIG:
    case ISG_NGTYP_ICONTHUM:
        break;
    }

    return use_buf;
}

st_ISGSESSION* iSGSessionBegin(void* cltdata, void (*chgfunc)(void*, en_CHGCODE), S32 monitor)
{
    iTRCDisk::CheckDVDAndResetState();
    memset(&g_isgdata_MAIN, 0, sizeof(st_ISGSESSION));

    g_isgdata_MAIN.unk_260 = -1;
    g_isgdata_MAIN.chgfunc = chgfunc;
    g_isgdata_MAIN.cltdata = cltdata;

    iSG_chk_icondata();
    return &g_isgdata_MAIN;
}

void iSGSessionEnd(st_ISGSESSION* isgdata)
{
    iTRCDisk::CheckDVDAndResetState();
    for (S32 i = 0; i < ISG_NUM_SLOTS; i++)
    {
        if (isgdata->mcdata[i].unk_0)
        {
            iSG_mc_unmount(i);
            isgdata->mcdata[i].unk_0 = 0;
        }
    }

    memset(isgdata, 0, sizeof(st_ISGSESSION));
}

static S32 iSG_start_your_engines()
{
    CARDInit();
    return 1;
}

// Looks equivalent. Can't get variable initializtions to match.
S32 iSG_mcidx2slot(S32 param1, S32* param2, S32* param3)
{
    s32 cardReady[ISG_NUM_SLOTS] = {};
    S32 ret = 0;
    S32 idk = 0;
    s32 memSize = 0;
    s32 sectorSize = 0;
    *param2 = -1;

    for (S32 i = 0; i < ISG_NUM_SLOTS; i++)
    {
        s32 result;
        do
        {
            result = CARDProbeEx(i, &memSize, &sectorSize);
        } while (result == CARD_RESULT_BUSY);

        if (result == CARD_RESULT_READY)
        {
            cardReady[i] = TRUE;
        }
    }

    for (S32 i = 0; i < ISG_NUM_SLOTS; i++)
    {
        if (cardReady[i])
        {
            if (idk == param1)
            {
                *param2 = i;
                ret = 1;
                break;
            }
            idk++;
        }
    }

    if (param3)
    {
        for (S32 i = 0; i < ISG_NUM_SLOTS; i++)
        {
            param3[i] = cardReady[i];
        }
    }

    return ret;
}

static S32 iSG_mc_exists(S32 slot)
{
    S32 ret = 0;
    s32 memSize = 0;
    s32 sectorSize = 0;

    if (slot < -1)
    {
        return 0;
    }

    S32 result;
    do
    {
        result = CARDProbeEx(slot, &memSize, &sectorSize);
    } while (result == CARD_RESULT_BUSY);

    if (result == CARD_RESULT_READY)
    {
        ret = 1;
    }

    return ret;
}

static S32 iSG_mc_tryRepair(st_ISG_MEMCARD_DATA* mcdata)
{
    S32 result = 0;
    S32 rc = 0;
    s32 xferBytes = 0;

    if (mcdata->unk_0 == 0)
    {
        rc = 0;
    }

    else if (mcdata->unk_12c)
    {
        rc = 0;
    }
    else
    {
        do
        {
            result = CARDCheckEx(mcdata->unk_4, &xferBytes);
        } while (result == CARD_RESULT_BUSY);

        if (result == CARD_RESULT_READY)
        {
            rc = 1;
        }
        else if (result == CARD_RESULT_ENCODING)
        {
            rc = 1;
        }
        else
        {
            if (result != CARD_RESULT_BROKEN)
            {
                mcdata->unk_12c = 1;
            }
            rc = 0;
        }
    }
    return rc;
}

static S32 iSG_mc_isformatted(st_ISG_MEMCARD_DATA* mcdata)
{
    S32 result = 0;
    S32 rc = 0;
    s32 xferBytes = 0;

    if (mcdata->unk_0 == 0)
    {
        rc = 0;
    }
    else if (mcdata->unk_12c)
    {
        rc = 0;
    }
    else
    {
        do
        {
            result = CARDCheckEx(mcdata->unk_4, &xferBytes);
        } while (result == CARD_RESULT_BUSY);

        if (result == CARD_RESULT_READY)
        {
            rc = 1;
        }
        else if (result == CARD_RESULT_BROKEN)
        {
            rc = 0;
        }
        else
        {
            rc = 0;
        }
    }

    return rc;
}

static S32 iSG_mc_isGCcard(st_ISG_MEMCARD_DATA* mcdata, int* param2, int* param3)
{
    S32 result = 0;
    S32 rc = 0;

    s32 xferBytes = 0;
    u16 encoding = 0;
    s32 memSize = 0;
    s32 sectorSize = 0;

    if (param2)
    {
        *param2 = 0;
    }

    if (param3)
    {
        *param3 = 0;
    }

    if (mcdata->unk_0 == 0)
    {
        return 0;
    }
    if (mcdata->unk_12c)
    {
        return 0;
    }

    do
    {
        result = CARDProbeEx(mcdata->unk_4, &memSize, &sectorSize);
    } while (result == CARD_RESULT_BUSY);

    if (result == CARD_RESULT_READY)
    {
        rc = 1;
    }

    if (rc != 0)
    {
        do
        {
            result = CARDCheckEx(mcdata->unk_4, &xferBytes);
        } while (result == CARD_RESULT_BUSY);

        if (result == CARD_RESULT_READY)
        {
            rc = 1;
        }
        else if (result == CARD_RESULT_BROKEN)
        {
            rc = 2;
        }
        else
        {
            if (result == CARD_RESULT_ENCODING)
            {
                rc = 3;
                if (param2)
                {
                    *param2 = 1;
                }
            }
            else
            {
                rc = 0;
                if (result == CARD_RESULT_ENCODING && param2)
                {
                    *param2 = 1;
                }
                if (result == CARD_RESULT_IOERROR && param3)
                {
                    *param3 = 1;
                }
            }
        }
    }

    if (rc == 1)
    {
        do
        {
            result = CARDGetEncoding(mcdata->unk_4, &encoding);
        } while (result == CARD_RESULT_BUSY);

        if (result == CARD_RESULT_READY && encoding && param2)
        {
            *param2 = 1;
        }
    }

    return rc;
}

static S32 iSG_cubeicon_size(S32 param1, S32 param2);
static S32 iSG_get_finfo(st_ISG_MEMCARD_DATA*, const char*);
// PS2 signature:
// static signed int iSG_isSpaceForFile(class st_ISG_MEMCARD_DATA* mcdata, S32 mcidx, S32 fsize,
//                                      char* dpath, char* fname, S32* bytesNeeded, S32* availOnDisk)
static S32 iSG_isSpaceForFile(st_ISG_MEMCARD_DATA* mcdata, S32 param2, const char* param3,
                              S32* param4, S32* param5, S32* param6)
{
    S32 rc = 0;
    S32 result = 0;
    s32 byteNotUsed = 0;
    s32 filesNotUsed = 0;
    S32 len;

    if (mcdata->unk_0 == 0)
    {
        return 0;
    }
    len = iSG_cubeicon_size(mcdata->unk_4, mcdata->sectorSize);
    len = len + param2;
    // FIXME: fakematch: x + (n-1) & -x is the same as Round x up to next n
    len = -mcdata->sectorSize & len + mcdata->sectorSize - 1;

    do
    {
        result = CARDFreeBlocks(mcdata->unk_4, &byteNotUsed, &filesNotUsed);
    } while (result == CARD_RESULT_BUSY);

    if (result == CARD_RESULT_READY)
    {
        if (param5)
        {
            *param5 = byteNotUsed / mcdata->sectorSize;
        }
        if (param4)
        {
            *param4 = len / mcdata->sectorSize;
        }
    }
    else
    {
        return 0;
    }

    if (param6)
    {
        *param6 = 1;
    }

    if (iSG_get_finfo(mcdata, param3))
    {
        if (param6)
        {
            *param6 = *param6 - 1 & ~(*param6 - 1 >> 0x1f); // FIXME: Fakematch
        }
        if (len <= mcdata->unk_b0.length + byteNotUsed)
        {
            rc = 1;
        }
    }
    else
    {
        if (len <= byteNotUsed && filesNotUsed > 0)
        {
            rc = 1;
        }
    }

    return rc;
}

static S32 iSG_mc_mount(S32 slot);
static bool iSG_mc_settgt(st_ISG_MEMCARD_DATA* mcdata, S32 slot)
{
    if (iSG_mc_mount(slot))
    {
        mcdata->unk_0 = 1;
        mcdata->unk_4 = slot;

        iSG_mc_tryRepair(mcdata);
        CARDGetSectorSize(slot, (u32*)&mcdata->sectorSize);
    }
    else
    {
        mcdata->unk_0 = 0;
    }

    return mcdata->unk_0 != 0;
}

static S32 iSG_mc_fopen(st_ISG_MEMCARD_DATA*, const char*, int, en_ISG_IOMODE, en_ASYNC_OPERR*);
static void iSG_mc_fclose(st_ISG_MEMCARD_DATA*);
static S32 iSG_get_finfo(st_ISG_MEMCARD_DATA* mcdata, const char* param2)
{
    S32 rc = 0;
    en_ASYNC_OPERR operr = ISG_OPERR_NONE;

    if (iSG_mc_fopen(mcdata, param2, -1, ISG_IOMODE_READ, &operr))
    {
        rc = 1;
        memcpy(&mcdata->unk_b0, &mcdata->unk_20, sizeof(CARDStat));
        memcpy(&mcdata->unk_9c, &mcdata->unk_c, sizeof(CARDFileInfo));
        iSG_mc_fclose(mcdata);
    }

    return rc;
}

static S32 iSG_curKosher(CARDStat* stat, CARDFileInfo* info)
{
    S32 rc = 1;

    if ((stat->iconAddr < 1 || stat->iconAddr > 0x7fffffff) &&
        (stat->commentAddr < 1 || stat->commentAddr > 0x7fffffff))
    {
        rc = 0;
    }
    else
    {
        char stuff[0x200] = { 0 };
        sprintf(stuff, "SPONGEBOB:WHENROBOTSATTACK::RyanNeilDan");
        void* alloc = xMemPushTemp(0x5e00 + 0x1f);
        // align buf address to 32 bytes
        char* buf = (char*)((U32)alloc + 0x1f & ~0x1f);

        S32 result;
        do
        {
            result = CARDRead(info, buf, 0x5e00, 0);
        } while (result == CARD_RESULT_BUSY);

        if (result == CARD_RESULT_READY)
        {
            if (memcmp(buf + 0x5a40, stuff, strlen(stuff) - 1))
            {
                rc = 0;
            }

            if (memcmp(buf, "Battle for Bikini Bottom", strlen("Battle for Bikini Bottom") - 1))
            {
                rc = 0;
            }
        }

        xMemPopTemp(alloc);
    }

    return rc;
}
static S32 iSG_mc_fdel(st_ISG_MEMCARD_DATA*, const char*);
static S32 iSG_fileKosher(st_ISG_MEMCARD_DATA* mcdata, const char* param2, int param3, int* param4)
{
    S32 rc = 0;
    en_ASYNC_OPERR operr = ISG_OPERR_NONE;

    if (param4)
    {
        *param4 = 0;
    }

    if (iSG_mc_fopen(mcdata, param2, -1, ISG_IOMODE_READ, &operr) == 0)
    {
        return -1;
    }

    S32 ret = iSG_curKosher(&mcdata->unk_20, &mcdata->unk_c);
    iSG_mc_fclose(mcdata);

    if (ret == 0)
    {
        rc = 0;
        if (param3 && iSG_mc_fdel(mcdata, param2) && param4)
        {
            *param4 = 1;
        }
    }
    else
    {
        rc = 1;
    }
    return rc;
}

static S32 iSG_get_fsize(st_ISG_MEMCARD_DATA* mcdata, const char* param2)
{
    S32 rc = -1;

    if (iSG_get_finfo(mcdata, param2))
    {
        rc = mcdata->unk_b0.length;
    }

    if (rc < 0)
    {
        rc = -1;
    }

    return rc;
}

static S32 iSG_get_fmoddate(st_ISG_MEMCARD_DATA* mcdata, const char* fname, int* sec, int* min,
                            int* hr, int* mon, int* day, int* yr)
{
    S32 rc = 1;
    OSCalendarTime time = { 0 };

    if (iSG_get_finfo(mcdata, fname) == 0)
    {
        rc = 0;
    }
    else
    {
        // FIXME: This first param isn't right, can't decipher the 64 bit math
        OSTicksToCalendarTime((u64)mcdata->unk_b0.time * (u64)(GET_BUS_FREQUENCY() / 4), &time);

        if (sec)
        {
            *sec = time.sec;
        }
        if (min)
        {
            *min = time.min;
        }
        if (hr)
        {
            *hr = time.hour;
        }
        if (mon)
        {
            *mon = time.mon + 1;
        }
        if (day)
        {
            *day = time.mday;
        }
        if (mon)
        {
            *mon = time.mon + 1;
        }
        if (day)
        {
            *day = time.mday;
        }
        if (yr)
        {
            *yr = time.year;
        }
    }

    return rc;
}

static void iSG_timestamp(CARDStat*)
{
}

static S32 iSG_cubeicon_size(S32 slot, S32 param2)
{
    if ((U32)slot > 1)
    {
        return -1;
    }

    // FIXME: fakematch: x + (n-1) & -x is the same as Round x up to next n
    S32 t = (param2 + 0x1ffU) & -param2;
    return -t & (t + 0x5c3f);
}

static S32 iSG_chk_icondata()
{
    return 1;
}

void iSG_tpl_unpack(st_ISG_TPL_TEXPALETTE*);
static S32 iSG_load_icondata()
{
    g_rawicon = (st_ISG_TPL_TEXPALETTE*)iFileLoad("/SBGCIcon.tpl", NULL, (U32*)g_iconsize);
    g_rawbanr = (st_ISG_TPL_TEXPALETTE*)iFileLoad("/SBGCBanner.tpl", NULL, (U32*)g_banrsize);
    iSG_tpl_unpack(g_rawicon);
    iSG_tpl_unpack(g_rawbanr);

    return g_rawicon && g_iconsize && g_rawbanr && g_banrsize ? 1 : 0;
}

static void iSG_discard_icondata()
{
    OSFreeToHeap(__OSCurrHeap, g_rawicon);
    OSFreeToHeap(__OSCurrHeap, g_rawbanr);
    g_rawicon = NULL;
    g_iconsize = 0;
    g_rawbanr = NULL;
    g_banrsize = 0;
}

static S32 iSG_mc_unmount(S32 slot)
{
    S32 rc = 0;
    S32 result;

    do
    {
        result = CARDUnmount(slot);
    } while (result == CARD_RESULT_BUSY);

    if (result == CARD_RESULT_READY)
    {
        rc = 1;
    }
    else if (result == CARD_RESULT_NOCARD)
    {
        rc = 1;
    }

    return rc;
}

static void iSG_cb_asyndone(long, long)
{
}

void iSGAutoSave_Startup()
{
}
