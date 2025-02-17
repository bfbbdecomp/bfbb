#include "isavegame.h"

#include "zGlobals.h"

#include "xMemMgr.h"
#include "xSnd.h"

#include "iFile.h"
#include "iSystem.h"
#include "iTRC.h"

#include <dolphin.h>
#include <stdio.h>
#include <string.h>
#include <types.h>

// Not 100% on what this does or if it's correctly defined for all cases. Seems to be used for allocation alignment
#define ALIGN_THING(x, n) (n + x - 1 & -x)

// name is a total guess for now
struct st_ISG_TPL_TEX
{
    struct UnkIn
    {
        U32 unk_0;
        U32 unk_4;
        void* unk_8;
        U32 unk_c;
        U32 unk_10[4];
        U8 unk_20;
        U8 unk_21;
        U8 unk_22;
        U8 unk_23;
    };
    struct UnkOut
    {
        U8 unk_0;
        U8 unk_1;
        U8 unk_2;
        U8 unk_3;
        U32 unk_4;
        void* unk_8;
    };

    UnkIn* unk_0;
    UnkOut* unk_4;
};
// WIP. Looks like some sort of header for a file with embedded texture information.
struct st_ISG_TPL_TEXPALETTE
{
    U32 magic;
    U32 count;
    st_ISG_TPL_TEX* unk_8;
};

// .bss
static char cardwork[2][0xa000];

// .sbss
static volatile S32 g_isginit;
static st_ISG_TPL_TEXPALETTE* g_rawicon;
static st_ISG_TPL_TEXPALETTE* g_rawbanr;
static U32 g_iconsize;
static U32 g_banrsize;
static U8 isMounted;

// .data
static st_ISGSESSION g_isgdata_MAIN = { 0 };
static S32 g_legalSectSize[] = { 0x2000, 0, -1 };

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

static const char* __deadstripped()
{
    return "Slot %c\0"
           "Memory Card Slot %c\0"
           "Nintendo GameCube Memory Card in Slot %c\0"
           "Nintendo GameCube%s Memory Card in Slot %c\0"
           "^\0"
           "Nintendo GameCube%s Memory Card\0"
           "is damaged and cannot be used\0"
           "unsupprted sector size\0"
           "is formatted for another market\0"
           "encountered unexpected error (%d)";
}

st_ISGSESSION* iSGSessionBegin(void* cltdata, void (*chgfunc)(void*, en_CHGCODE), S32 monitor)
{
    iTRCDisk::CheckDVDAndResetState();
    memset(&g_isgdata_MAIN, 0, sizeof(st_ISGSESSION));

    g_isgdata_MAIN.slot = -1;
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

S32 iSGTgtCount(st_ISGSESSION* isgdata, S32* max)
{
    s32 memSize = 0;
    s32 sectorSize = 0;
    S32 ret = 0;

    if (max != NULL)
    {
        *max = 2;
    }

    for (S32 i = 0; i < ISG_NUM_SLOTS; ++i)
    {
        iTRCDisk::CheckDVDAndResetState();
        s32 result;
        do
        {
            result = CARDProbeEx(i, &memSize, &sectorSize);
        } while (result == CARD_RESULT_BUSY);
        if (result == CARD_RESULT_READY)
        {
            ret++;
        }
    }

    return ret;
}

S32 iSGTgtPhysSlotIdx(st_ISGSESSION* isgdata, S32 tidx)
{
    S32 idx = -1;
    if (iSG_mcidx2slot(tidx, &idx, NULL))
    {
        return idx;
    }
    return -1;
}

static S32 iSG_mc_exists(S32 slot);
static S32 iSG_mc_isGCcard(st_ISG_MEMCARD_DATA* mcdata, int* param2, int* param3);
static S32 iSG_mc_format(st_ISG_MEMCARD_DATA*, S32, S32* canRecover);
S32 iSGTgtFormat(st_ISGSESSION* isgdata, S32 tgtidx, S32 async, S32* canRecover)
{
    S32 slot = 0;
    S32 rc = 0;
    iTRCDisk::CheckDVDAndResetState();
    if (iSG_mc_exists(isgdata->slot) == 0)
    {
        return 0;
    }

    iSG_mcidx2slot(tgtidx, &slot, NULL);
    // FIXME: r3 and r0 are swapped here for some reason ...
    if (slot != isgdata->slot)
    {
        return 0;
    }

    st_ISG_MEMCARD_DATA* data = &isgdata->mcdata[isgdata->slot];
    if (data->unk_0 == NULL)
    {
        return 0;
    }

    if (iSG_mc_isGCcard(data, NULL, NULL) == 0)
    {
        return 0;
    }

    rc = iSG_mc_format(data, 0, canRecover);
    if (rc == -1)
    {
        return -1;
    }
    return rc == 0 ? 0 : 1;
}

static S32 iSG_mc_isformatted(st_ISG_MEMCARD_DATA* mcdata);
U32 iSGTgtState(st_ISGSESSION* isgdata, S32 tgtidx, const char* dpath)
{
    S32 isSectSizeValid = 0;
    S32 state = 0;

    S32 rc = 0;

    S32 slot = 0;
    S32 x = 0;
    S32 y = 0;
    iTRCDisk::CheckDVDAndResetState();

    iSG_mcidx2slot(tgtidx, &slot, NULL);
    if (slot != isgdata->slot)
    {
        iSGTgtSetActive(isgdata, tgtidx);
    }

    if (isgdata->slot < 0)
    {
        return 0x1000000;
    }

    st_ISG_MEMCARD_DATA* data = &isgdata->mcdata[isgdata->slot];
    if (data->unk_0 == NULL)
    {
        return 0;
    }

    if (iSG_mc_exists(isgdata->slot))
    {
        state |= 1;
    }
    else
    {
        return 0;
    }

    if (data->unk_12c != 0)
    {
        return state | 0x1000000;
    }

    rc = iSG_mc_isGCcard(data, &x, &y);
    if (x != 0)
    {
        state |= 0x4000000;
    }

    if (y != 0)
    {
        state |= 0x2000000;
    }

    if (rc == 0)
    {
        return state;
    }

    if (g_legalSectSize[0] > 0)
    {
        for (S32 i = 0; g_legalSectSize[i] > 0; i++)
        {
            if (data->sectorSize == g_legalSectSize[i])
            {
                isSectSizeValid = 1;
                break;
            }
        }
        if (isSectSizeValid == 0)
        {
            state |= 0x8000004;
            return state & ~4;
        }
    }

    if (iSG_mc_isformatted(data) == 0)
    {
        return state | 4;
    }
    else
    {
        return state | 0xe;
    }

    return state;
}

static S32 iSG_mc_settgt(st_ISG_MEMCARD_DATA* mcdata, S32 slot);
S32 iSGTgtSetActive(st_ISGSESSION* isgdata, S32 tgtidx)
{
    S32 ret = 0;
    S32 slot = 0;
    iSG_mcidx2slot(tgtidx, &slot, NULL);
    st_ISG_MEMCARD_DATA* data = &isgdata->mcdata[slot];
    iTRCDisk::CheckDVDAndResetState();
    if (data->unk_0)
    {
        ret = 1;
    }
    else
    {
        if (iSG_mc_settgt(data, slot) != 0)
        {
            ret = 1;
            isgdata->slot = slot;
        }
    }
    return ret;
}

static S32 iSG_get_finfo(st_ISG_MEMCARD_DATA* mcdata, const char* dpath);
static S32 iSG_isSpaceForFile(st_ISG_MEMCARD_DATA* mcdata, S32 param2, const char* param3,
                              S32* param4, S32* param5, S32* param6);
S32 iSGTgtHaveRoom(st_ISGSESSION* isgdata, S32 tidx, S32 fsize, const char* dpath,
                   const char* fname, S32* bytesNeeded, S32* availOnDisk, S32* needFile)
{
    st_ISG_MEMCARD_DATA* data;
    S32 i;
    S32 count;
    S32 opened;
    S32 is_space;
    if (isgdata->slot < 0)
    {
        return 0;
    }
    data = &isgdata->mcdata[isgdata->slot];
    if (data->unk_0 == NULL)
    {
        return 0;
    }
    count = 0;
    if (fname == NULL)
    {
        for (i = 0; i < ISG_NUM_FILES; ++i)
        {
            iTRCDisk::CheckDVDAndResetState();
            fname = iSGMakeName(ISG_NGTYP_GAMEFILE, NULL, i);
            if (iSG_get_finfo(data, fname) != 0)
            {
                count++;
            }
        }
    }

    is_space = iSG_isSpaceForFile(data, fsize, fname, bytesNeeded, availOnDisk, needFile);
    if (count > 0 && *bytesNeeded > *availOnDisk)
    {
        if (needFile != NULL && *bytesNeeded > *availOnDisk)
        {
            *needFile = 0;
            return 0;
        }
        return 1;
    }

    CARDFileInfo fileInfo;
    opened = 0;
    for (i = 0; i < CARD_MAX_FILE && isgdata->slot >= 0 && isgdata->slot < ISG_NUM_SLOTS; ++i)
    {
        if (CARDFastOpen(isgdata->slot, i, &fileInfo) == 0)
        {
            opened++;
            CARDClose(&fileInfo);
        }
    }

    if (opened >= CARD_MAX_FILE)
    {
        if (count > 0)
        {
            if (needFile != NULL)
            {
                *needFile = 0;
            }
            return 1;
        }
        return 0;
    }

    return (*bytesNeeded > *availOnDisk) ? 0 : is_space;
}

S32 iSGTgtHaveRoomStartup(st_ISGSESSION* isgdata, S32 tidx, S32 fsize, const char* dpath,
                          const char* fname, S32* bytesNeeded, S32* availOnDisk, S32* needFile)
{
    st_ISG_MEMCARD_DATA* data;
    S32 i;
    S32 count;
    S32 opened;
    S32 is_space;
    if (isgdata->slot < 0)
    {
        return 0;
    }
    data = &isgdata->mcdata[isgdata->slot];
    if (data->unk_0 == NULL)
    {
        return 0;
    }
    count = 0;
    if (fname == NULL)
    {
        for (i = 0; i < ISG_NUM_FILES; ++i)
        {
            iTRCDisk::CheckDVDAndResetState();
            fname = iSGMakeName(ISG_NGTYP_GAMEFILE, NULL, i);
            if (iSG_get_finfo(data, fname) != 0)
            {
                count++;
            }
        }
    }

    is_space = iSG_isSpaceForFile(data, fsize, fname, bytesNeeded, availOnDisk, needFile);
    if (count > 0 && *bytesNeeded > *availOnDisk)
    {
        if (needFile != NULL && *bytesNeeded > *availOnDisk)
        {
            *needFile = 0;
            return 0;
        }
        return 1;
    }

    CARDFileInfo fileInfo;
    opened = 0;
    for (i = 0; i < CARD_MAX_FILE && isgdata->slot >= 0 && isgdata->slot < ISG_NUM_SLOTS; ++i)
    {
        if (CARDFastOpen(isgdata->slot, i, &fileInfo) == 0)
        {
            opened++;
            CARDClose(&fileInfo);
        }
    }

    if (opened >= CARD_MAX_FILE)
    {
        if (count > 0)
        {
            if (needFile != NULL)
            {
                *needFile = 0;
            }
            return 0;
        }
        *needFile = -1;
        return 0;
    }

    if (*bytesNeeded > *availOnDisk)
    {
        return 0;
    }
    return (count >= 3) ? 0 : is_space;
}

static S32 iSG_get_fsize(st_ISG_MEMCARD_DATA* mcdata, const char* param2);
static S32 iSG_cubeicon_size(S32 slot, S32 param2);
S32 iSGFileSize(st_ISGSESSION* isgdata, const char* fname)
{
    S32 ret = 0;
    if (isgdata->slot < 0)
    {
        return -1;
    }
    st_ISG_MEMCARD_DATA* data = &isgdata->mcdata[isgdata->slot];
    iTRCDisk::CheckDVDAndResetState();
    ret = iSG_get_fsize(data, fname);
    if (ret >= 0)
    {
        ret -= iSG_cubeicon_size(data->chan, data->sectorSize);
        if (ret < 0)
        {
            ret = -1;
        }
    }
    return ret;
}

char* iSGFileModDate(st_ISGSESSION* isgdata, const char* fname)
{
    return iSGFileModDate(isgdata, fname, NULL, NULL, NULL, NULL, NULL, NULL);
}

static S32 iSG_get_fmoddate(st_ISG_MEMCARD_DATA* mcdata, const char* fname, int* sec, int* min,
                            int* hr, int* mon, int* day, int* yr);
char* iSGFileModDate(st_ISGSESSION* isgdata, const char* fname, S32* sec, S32* min, S32* hr,
                     S32* mon, S32* day, S32* yr)
{
    static char datestr[0x40] = { 0 };
    int sec_str = 0;
    int min_str = 0;
    int hr_str = 0;
    int mon_str = 0;
    int day_str = 0;
    int yr_str = 0;
    if (iSG_get_fmoddate(&isgdata->mcdata[isgdata->slot], fname, &sec_str, &min_str, &hr_str,
                         &mon_str, &day_str, &yr_str) != 0)
    {
        sprintf(datestr, "%02d/%02d/%04d %02d:%02d:%02d", mon_str, day_str, yr_str, hr_str, min_str,
                sec_str);

        if (sec != NULL)
        {
            *sec = sec_str;
        }
        if (min != NULL)
        {
            *min = min_str;
        }
        if (hr != NULL)
        {
            *hr = hr_str;
        }
        if (mon != NULL)
        {
            *mon = mon_str;
        }
        if (day != NULL)
        {
            *day = day_str;
        }
        if (yr != NULL)
        {
            *yr = yr_str;
        }
    }
    else
    {
        sprintf(datestr, "<Unknown Modification>");
    }
    return datestr;
}

void iSGMakeTimeStamp(char* str)
{
    OSCalendarTime calendar_time = { 0 };
    OSTime time = OSGetTime();
    OSTicksToCalendarTime(time, &calendar_time);
    sprintf(str, "%02d/%02d/%04d %02d:%02d:%02d", calendar_time.mon + 1, calendar_time.mday,
            calendar_time.year, calendar_time.hour, calendar_time.min, calendar_time.sec);
}

S32 iSGSelectGameDir(st_ISGSESSION* isgdata, const char* dname)
{
    if (isgdata->slot < 0)
    {
        return 0;
    }
    st_ISG_MEMCARD_DATA* data = &isgdata->mcdata[isgdata->slot];

    if (data->unk_0 == 0)
    {
        return 0;
    }

    if (iSG_mc_isGCcard(data, NULL, NULL) == 0)
    {
        return 0;
    }

    if (iSG_mc_isformatted(data) == 0)
    {
        return 0;
    }

    S32 count = 0;
    for (S32 idx = 0; idx < ISG_NUM_FILES; ++idx)
    {
        const char* n = iSGMakeName(ISG_NGTYP_GAMEFILE, NULL, idx);
        if (iSG_get_finfo(data, n) != 0)
        {
            count++;
        }
    }

    return count != 0;
}

S32 iSGSetupGameDir(st_ISGSESSION* isgdata, const char* dname, S32 force_iconfix)
{
    return 1;
}

static char* iSG_bfr_icondata(char* param1, CARDStat* stat, char* param3, int param4);
static S32 iSG_mc_fopen(st_ISG_MEMCARD_DATA*, const char*, S32, en_ISG_IOMODE, en_ASYNC_OPERR*);
static S32 iSG_mc_fclose(st_ISG_MEMCARD_DATA*);
static S32 iSG_mc_fclose(st_ISG_MEMCARD_DATA*, CARDStat*);
static S32 iSG_mc_fdel(st_ISG_MEMCARD_DATA* mcdata, const char* fname);
static S32 iSG_mc_fwrite(st_ISG_MEMCARD_DATA* mcdata, char* buf, S32 bufsize);
static void iSG_upd_icostat(CARDStat*, CARDStat*);
static void iSG_timestamp(CARDStat*);
S32 iSGSaveFile(st_ISGSESSION* isgdata, const char* fname, char* data, S32 n, S32 async, char* arg5)
{
    void* alloc;
    S32 allocsize;
    char* icondata;
    S32 iconsize;

    S32 writeret = 0;
    en_ASYNC_OPERR operr = ISG_OPERR_NONE;
    CARDStat statA = { 0 };
    CARDStat statB = { 0 };

    ResetButton::DisableReset();
    if (isgdata->slot < 0)
    {
        isgdata->unk_26c = ISG_OPSTAT_FAILURE;
        isgdata->unk_268 = ISG_OPERR_NOCARD;
        return 0;
    }

    st_ISG_MEMCARD_DATA* mcdata = &isgdata->mcdata[isgdata->slot];
    if (mcdata->unk_12c != 0)
    {
        isgdata->unk_26c = ISG_OPSTAT_FAILURE;
        isgdata->unk_268 = ISG_OPERR_DAMAGE;
        return 0;
    }

    iTRCDisk::CheckDVDAndResetState();
    iconsize = iSG_cubeicon_size(isgdata->slot, mcdata->sectorSize);
    S32 sectorsize200 = ALIGN_THING(mcdata->sectorSize, 0x200);
    iconsize += ALIGN_THING(sectorsize200, n);

    allocsize = iconsize + 0x1f;
    alloc = xMemPushTemp(allocsize);
    memset(alloc, 0, allocsize);
    icondata = (char*)((U32)alloc + 0x1f & 0xFFFFFFE0);

    memcpy(iSG_bfr_icondata(icondata, &statA, arg5, mcdata->sectorSize), data, n);
    iTRCDisk::CheckDVDAndResetState();

    if (iSG_mc_fopen(mcdata, fname, iconsize, ISG_IOMODE_WRITE, &operr) != 0)
    {
        if (iSG_mc_fwrite(mcdata, icondata, iconsize) != 0)
        {
            writeret = 1;
        }
        else
        {
            writeret = 0;
            operr = ISG_OPERR_SVWRITE;
        }

        if (writeret != 0)
        {
            iSG_upd_icostat(&statA, &mcdata->fstat);
            iSG_timestamp(&mcdata->fstat);
            s32 result;
            do
            {
                result = CARDSetStatus(mcdata->chan, mcdata->finfo.fileNo, &mcdata->fstat);
            } while (result == CARD_RESULT_BUSY);

            if (result != CARD_RESULT_READY)
            {
                writeret = 0;
            }
        }

        if (writeret != 0)
        {
            s32 result;
            do
            {
                result = CARDSetAttributes(mcdata->chan, mcdata->finfo.fileNo, CARD_ATTR_PUBLIC);
            } while (result == CARD_RESULT_BUSY);
        }

        iSG_mc_fclose(mcdata, &statB);
    }
    xMemPopTemp(alloc);

    if (writeret == 0 && mcdata->unk_12c == 0)
    {
        iSG_mc_fdel(mcdata, fname);
    }

    ResetButton::EnableReset();
    iTRCDisk::CheckDVDAndResetState();

    isgdata->unk_268 = ISG_OPERR_NONE;
    if (writeret != 0)
    {
        isgdata->unk_26c = ISG_OPSTAT_SUCCESS;
    }
    else
    {
        isgdata->unk_26c = ISG_OPSTAT_FAILURE;
        if (operr != ISG_OPERR_NONE)
        {
            isgdata->unk_268 = operr;
        }
        else
        {
            isgdata->unk_268 = ISG_OPERR_UNKNOWN;
        }
    }
    return writeret;
}

S32 iSGLoadFile(st_ISGSESSION* isgdata, const char* fname, char* databuf, S32 async)
{
    S32 numBytes = iSGFileSize(isgdata, fname);
    return iSGReadLeader(isgdata, fname, databuf, numBytes, async);
}

static S32 iSG_mc_fread(st_ISG_MEMCARD_DATA* mcdata, char*, S32, S32);
S32 iSGReadLeader(st_ISGSESSION* isgdata, const char* fname, char* databuf, S32 numbytes, S32 async)
{
    S32 bufsize;
    S32 iconsize;
    S32 allocsize;
    char* readbuf;

    S32 readret = 0;
    st_ISG_MEMCARD_DATA* data;
    void* alloc = NULL;

    en_ASYNC_OPERR operr = ISG_OPERR_NONE;
    if (isgdata->slot < 0)
    {
        isgdata->unk_26c = ISG_OPSTAT_FAILURE;
        isgdata->unk_268 = ISG_OPERR_NOCARD;
        return 0;
    }
    data = &isgdata->mcdata[isgdata->slot];

    if (data->unk_12c != 0)
    {
        isgdata->unk_26c = ISG_OPSTAT_FAILURE;
        isgdata->unk_268 = ISG_OPERR_DAMAGE;
        return 0;
    }

    iTRCDisk::CheckDVDAndResetState();
    iconsize = iSG_cubeicon_size(data->chan, data->sectorSize);
    S32 sectorsize200 = ALIGN_THING(data->sectorSize, 0x200);
    if ((S32)databuf % 32 != 0 || numbytes - (numbytes / sectorsize200) * sectorsize200 != 0)
    {
        S32 tmpsize = (numbytes + 0x1ff & ~0x1ff);
        allocsize = tmpsize + 0x1f;
        alloc = xMemPushTemp(allocsize);
        memset(alloc, 0, allocsize);
        bufsize = tmpsize;
        readbuf = (char*)((U32)alloc + 0x1f & ~0x1f);
    }
    else
    {
        readbuf = databuf;
        bufsize = numbytes;
    }

    iTRCDisk::CheckDVDAndResetState();

    if (iSG_mc_fopen(data, fname, -1, ISG_IOMODE_READ, &operr) != 0)
    {
        readret = (bool)iSG_mc_fread(data, (char*)readbuf, bufsize, iconsize);
        iSG_mc_fclose(data);
    }

    if (readret != 0 && alloc != NULL)
    {
        memcpy(databuf, readbuf, numbytes);
    }
    if (alloc != NULL)
    {
        xMemPopTemp(alloc);
    }

    isgdata->unk_268 = ISG_OPERR_NONE;
    if (readret != 0)
    {
        isgdata->unk_26c = ISG_OPSTAT_SUCCESS;
    }
    else
    {
        isgdata->unk_26c = ISG_OPSTAT_FAILURE;
        if (data->unk_12c != 0)
        {
            isgdata->unk_268 = ISG_OPERR_DAMAGE;
        }
        else
        {
            isgdata->unk_268 = ISG_OPERR_OTHER;
        }
    }
    return readret;
}

en_ASYNC_OPSTAT iSGPollStatus(st_ISGSESSION* isgdata, en_ASYNC_OPCODE* curop, S32 block)
{
    return isgdata->unk_26c;
}

en_ASYNC_OPERR iSGOpError(st_ISGSESSION* isgdata, char* errmsg)
{
    static char* errmsgs[0x16] = {
        "No current error",
        "No operation in async queue",
        "Too many async ops queued simultaneously",
        "Init Failed",
        "Unable to access Save Game Directory",
        "Access Error - no card ?!? (eg yanked out)",
        "Access Error - no room on card (file handles free bytes, etc)",
        "Access Error - card is damaged or something bad",
        "Access Error - file being loaded appears to be corrupt (I-Level)",
        "Access Error - general problem",
        "Save Error - Not enough free space to save file",
        "Save Error - during initalization (async queue)",
        "Save Error - during write",
        "Save Error - opening file",
        "Load Error - during initalization (async queue)",
        "Load Error - during read",
        "Load Error - opening file",
        "Target problem (general error)",
        "Target Error - media removed or changed",
        "Target Error - Not ready for I/O (unformatted?)",
        "Operation encountered unknown error",
        NULL
    };

    en_ASYNC_OPERR err;
    if (errmsg == NULL)
    {
        return isgdata->unk_268;
    }

    if (isgdata->unk_268 < ISG_OPERR_NOMORE)
    {
        strncpy(errmsg, errmsgs[isgdata->unk_268], 0x80);
    }
    else
    {
        strncpy(errmsg, errmsgs[ISG_OPERR_UNKNOWN], 0x80);
    }
    errmsg[0x7f] = NULL;
    return isgdata->unk_268;
}

static S32 iSG_start_your_engines()
{
    CARDInit();
    return 1;
}

// Looks equivalent. Can't get variable initializtions to match.
S32 iSG_mcidx2slot(S32 param1, S32* out_slot, S32* param3)
{
    s32 cardReady[ISG_NUM_SLOTS] = {};
    S32 ret = 0;
    S32 idk = 0;
    s32 memSize = 0;
    s32 sectorSize = 0;
    *out_slot = -1;

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
                *out_slot = i;
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
            result = CARDCheckEx(mcdata->chan, &xferBytes);
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
            result = CARDCheckEx(mcdata->chan, &xferBytes);
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
        result = CARDProbeEx(mcdata->chan, &memSize, &sectorSize);
    } while (result == CARD_RESULT_BUSY);

    if (result == CARD_RESULT_READY)
    {
        rc = 1;
    }

    if (rc != 0)
    {
        do
        {
            result = CARDCheckEx(mcdata->chan, &xferBytes);
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
            result = CARDGetEncoding(mcdata->chan, &encoding);
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
    len = iSG_cubeicon_size(mcdata->chan, mcdata->sectorSize);
    len = len + param2;
    len = ALIGN_THING(mcdata->sectorSize, len);

    do
    {
        result = CARDFreeBlocks(mcdata->chan, &byteNotUsed, &filesNotUsed);
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
static S32 iSG_mc_settgt(st_ISG_MEMCARD_DATA* mcdata, S32 slot)
{
    if (iSG_mc_mount(slot))
    {
        mcdata->unk_0 = 1;
        mcdata->chan = slot;

        iSG_mc_tryRepair(mcdata);
        CARDGetSectorSize(slot, (u32*)&mcdata->sectorSize);
    }
    else
    {
        mcdata->unk_0 = 0;
    }

    return mcdata->unk_0 != 0 ? 1 : 0;
}

static S32 iSG_get_finfo(st_ISG_MEMCARD_DATA* mcdata, const char* dpath)
{
    S32 rc = 0;
    en_ASYNC_OPERR operr = ISG_OPERR_NONE;

    if (iSG_mc_fopen(mcdata, dpath, -1, ISG_IOMODE_READ, &operr))
    {
        rc = 1;
        memcpy(&mcdata->unk_b0, &mcdata->fstat, sizeof(CARDStat));
        memcpy(&mcdata->unk_9c, &mcdata->finfo, sizeof(CARDFileInfo));
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

    S32 ret = iSG_curKosher(&mcdata->fstat, &mcdata->finfo);
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
        OSTime t = mcdata->unk_b0.time;
        t = OSSecondsToTicks(t);
        OSTicksToCalendarTime(t, &time);

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

struct IconData
{
    char game_name[0x20];
    char buf0[0x20];
    char buf1[0x1800];
    char buf2[8][0x800];
    char pad[0x200];
    char footer[0x200];
};
static S32 iSG_cubeicon_size(S32 slot, S32 param2)
{
    if ((U32)slot > 1)
    {
        return -1;
    }

    S32 t = ALIGN_THING(param2, 0x200);

    // FIXME: Macro not quite right
    // return ALIGN_THING(t, sizeof(IconData));
    return -t & sizeof(IconData) + t - 1;
}

static S32 iSG_chk_icondata()
{
    return 1;
}

static S32 iSG_tpl_unpack(st_ISG_TPL_TEXPALETTE*);
static S32 iSG_bnr_unpack(st_ISG_TPL_TEXPALETTE*);
static S32 iSG_load_icondata()
{
    g_rawicon = (st_ISG_TPL_TEXPALETTE*)iFileLoad("/SBGCIcon.tpl", NULL, &g_iconsize);
    g_rawbanr = (st_ISG_TPL_TEXPALETTE*)iFileLoad("/SBGCBanner.tpl", NULL, &g_banrsize);
    iSG_tpl_unpack(g_rawicon);
    iSG_bnr_unpack(g_rawbanr);

    return g_rawicon && (S32)g_iconsize && g_rawbanr && (S32)g_banrsize ? 1 : 0;
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

static st_ISG_TPL_TEX* iSG_tpl_TEXGet(st_ISG_TPL_TEXPALETTE*, unsigned int);
static char* iSG_bfr_icondata(char* param1, CARDStat* stat, char* param3, int param4)
{
    IconData data = { 0 };
    static st_ISG_TPL_TEXPALETTE* ico_pal;
    static st_ISG_TPL_TEX* ico_desc;
    static U32 i = 0;

    sprintf(data.footer, "SPONGEBOB:WHENROBOTSATTACK::RyanNeilDan");
    strncpy(data.game_name, "Battle for Bikini Bottom", sizeof(data.game_name));
    data.game_name[0x1f] = NULL;

    if (param3)
    {
        strncpy(data.buf0, param3, sizeof(data.buf0));
    }
    data.buf0[0x1f] = NULL;

    ico_pal = g_rawbanr;
    ico_desc = iSG_tpl_TEXGet(ico_pal, 0);
    memcpy(data.buf1, ico_desc->unk_0->unk_8, sizeof(data.buf1));

    ico_pal = g_rawicon;
    for (i = 0; i < 8; i++)
    {
        ico_desc = iSG_tpl_TEXGet(ico_pal, i);
        memcpy(data.buf2[i], ico_desc->unk_0->unk_8, sizeof(data.buf2[i]));
    }

    memcpy(param1, &data, sizeof(data));

    S32 t = ALIGN_THING(param4, 0x200);
    return param1 + (t + (sizeof(IconData) - 1) & -t);
}

static void iSG_upd_icostat(CARDStat*, CARDStat* stat)
{
    CARDSetCommentAddress(stat, 0);
    CARDSetBannerFormat(stat, CARD_STAT_BANNER_RGB5A3);
    CARDSetIconAddress(stat, 0x40);
    CARDSetIconAnim(stat, CARD_STAT_ANIM_LOOP);

    for (S32 i = 0; i < CARD_ICON_MAX; ++i)
    {
        CARDSetIconFormat(stat, i, CARD_STAT_BANNER_RGB5A3);
        CARDSetIconSpeed(stat, i, CARD_STAT_SPEED_MIDDLE);
    }
}

static S32 iSG_tpl_unpack(st_ISG_TPL_TEXPALETTE* tpl)
{
    if (tpl->magic != 0x20af30)
    {
        return 0;
    }

    tpl->unk_8 = (st_ISG_TPL_TEX*)((U32)tpl + (U32)tpl->unk_8);
    for (S32 i = 0; i < tpl->count; ++i)
    {
        st_ISG_TPL_TEX* x = &tpl->unk_8[i];
        if (x->unk_0 != NULL)
        {
            x->unk_0 = (st_ISG_TPL_TEX::UnkIn*)((U32)tpl + (U32)x->unk_0);
            if (x->unk_0->unk_23 == 0)
            {
                x->unk_0->unk_8 = (void*)((U32)tpl + (U32)x->unk_0->unk_8);
                x->unk_0->unk_23 = 1;
            }
        }
        if (x->unk_4 != NULL)
        {
            x->unk_4 = (st_ISG_TPL_TEX::UnkOut*)((U32)tpl + (U32)x->unk_4);
            if (x->unk_4->unk_2 == 0)
            {
                x->unk_4->unk_8 = tpl;
                x->unk_4->unk_2 = 1;
            }
        }
    }
    return 1;
}

static S32 iSG_bnr_unpack(st_ISG_TPL_TEXPALETTE* tpl)
{
    return iSG_tpl_unpack(tpl);
}

static st_ISG_TPL_TEX* iSG_tpl_TEXGet(st_ISG_TPL_TEXPALETTE* tpl, U32 n)
{
    return &tpl->unk_8[n];
}

static void iSG_cb_unmount(s32 chan, s32 result);
static S32 iSG_mc_mount(S32 slot)
{
    s32 ret = 0;
    // ?? for some reason this variable is in the stack frame
    volatile s32 result = 0;
    do
    {
        result = CARDMount(slot, cardwork[slot], iSG_cb_unmount);
        isMounted = 1;
    } while (result == CARD_RESULT_BUSY);

    if (result == CARD_RESULT_READY)
    {
        ret = 1;
    }
    else if (result == CARD_RESULT_BROKEN || result == CARD_RESULT_ENCODING)
    {
        ret = 1;
    }
    return ret;
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

static void iSG_cb_unmount(s32 chan, s32 result)
{
    st_ISGSESSION* session = &g_isgdata_MAIN;
    if (chan != session->slot)
    {
        return;
    }
    session->slot = -1;
    if (session->chgfunc != NULL)
    {
        session->chgfunc(session->cltdata, ISG_CHG_TARGET);
    }
    memset(&session->mcdata[chan], 0, sizeof(st_ISG_MEMCARD_DATA));
}

static S32 iSG_mc_format(st_ISG_MEMCARD_DATA* mcdata, S32, S32* canRecover)
{
    if (mcdata->unk_12c != 0)
    {
        if (canRecover != NULL)
        {
            *canRecover = 0;
        }
        return 0;
    }

    if (canRecover != NULL)
    {
        *canRecover = 1;
    }

    s32 result;
    do
    {
        result = CARDFormat(mcdata->chan);
    } while (result == CARD_RESULT_BUSY);

    S32 ret;
    if (result == CARD_RESULT_READY)
    {
        ret = 1;
    }
    else
    {
        ret = 0;

        switch (result)
        {
        case CARD_RESULT_IOERROR:
            mcdata->unk_12c = 1;
            if (canRecover != NULL)
            {
                *canRecover = 0;
            }
            break;
        case CARD_RESULT_NOCARD:
            if (canRecover != NULL)
            {
                *canRecover = -1;
            }
            ret = -1;
            break;
        case CARD_RESULT_FATAL_ERROR:
        case CARD_RESULT_WRONGDEVICE:
        case CARD_RESULT_NOFILE:
            break;
        }
    }
    return ret;
}

static S32 iSG_mc_fopen(st_ISG_MEMCARD_DATA* mcdata, const char* fname, S32 fsize,
                        en_ISG_IOMODE mode, en_ASYNC_OPERR* operr)
{
    S32 ret = 0;
    CARDFileInfo* finfo = &mcdata->finfo;
    CARDStat* stat = &mcdata->fstat;
    if (operr != NULL)
    {
        *operr = ISG_OPERR_NONE;
    }

    if (mode == ISG_IOMODE_READ)
    {
        s32 result;
        do
        {
            result = CARDOpen(mcdata->chan, (char*)fname, finfo);
        } while (result == CARD_RESULT_BUSY);

        if (result == CARD_RESULT_READY)
        {
            ret = 1;
        }
    }
    else
    {
        S32 res = iSG_mc_fdel(mcdata, fname);
        if (mcdata->unk_12c == 0 && res > 0)
        {
            s32 result;
            do
            {
                result = CARDCreate(mcdata->chan, (char*)fname, fsize, finfo);
            } while (result == CARD_RESULT_BUSY);

            if (result == CARD_RESULT_READY)
            {
                ret = 1;
                mcdata->unk_98 = 0;
            }
            else if (operr != NULL)
            {
                switch (result)
                {
                case CARD_RESULT_WRONGDEVICE:
                case CARD_RESULT_NOCARD:
                    *operr = ISG_OPERR_NOCARD;
                    break;
                case CARD_RESULT_IOERROR:
                case CARD_RESULT_BROKEN:
                    mcdata->unk_12c = 1;
                    *operr = ISG_OPERR_DAMAGE;
                    break;
                case CARD_RESULT_NOENT:
                case CARD_RESULT_INSSPACE:
                    *operr = ISG_OPERR_NOROOM;
                    break;
                default:
                    *operr = ISG_OPERR_OTHER;
                    break;
                case CARD_RESULT_READY:
                case CARD_RESULT_BUSY:
                case CARD_RESULT_EXIST:
                case CARD_RESULT_NOPERM:
                    break;
                }
            }
        }
    }

    if (ret != 0)
    {
        s32 result;
        do
        {
            result = CARDGetStatus(mcdata->chan, finfo->fileNo, stat);
        } while (result == CARD_RESULT_BUSY);

        if (result == CARD_RESULT_READY)
        {
            ret = 1;
        }
    }

    if (ret != 0)
    {
        if (memcmp(stat->gameName, "GQPE", 4) != 0 || memcmp(stat->company, "78", 2) != 0)
        {
            iSG_mc_fclose(mcdata);
            ret = 0;
        }
    }

    return ret;
}

static S32 iSG_mc_fclose(st_ISG_MEMCARD_DATA* mcdata)
{
    iSG_mc_fclose(mcdata, NULL);
}

static S32 iSG_mc_fclose(st_ISG_MEMCARD_DATA* mcdata, CARDStat* stat)
{
    S32 ret = 0;
    s32 result;
    do
    {
        result = CARDClose(&mcdata->finfo);
    } while (result == CARD_RESULT_BUSY);

    if (result == CARD_RESULT_READY)
    {
        ret = 1;
    }

    if (stat != NULL)
    {
        memcpy(stat, &mcdata->fstat, sizeof(CARDStat));
    }

    memset(&mcdata->finfo, 0, sizeof(CARDFileInfo));
    memset(&mcdata->fstat, 0, sizeof(CARDStat));

    return ret;
}

static S32 iSG_mc_fdel(st_ISG_MEMCARD_DATA* mcdata, const char* fname)
{
    if (mcdata->chan < 0 || mcdata->chan > 1)
    {
        return 0;
    }

    if (isMounted == 0)
    {
        return 0;
    }

    s32 result;
    do
    {
        result = CARDDelete(mcdata->chan, fname);
    } while (result == CARD_RESULT_BUSY);

    S32 ret;
    if (result == CARD_RESULT_NOFILE)
    {
        ret = 1;
    }
    else if (result == CARD_RESULT_READY)
    {
        ret = 1;
    }
    else
    {
        ret = 0;
        switch (result)
        {
        case CARD_RESULT_IOERROR:
            mcdata->unk_12c = 1;
            break;
        case CARD_RESULT_NOPERM:
        case CARD_RESULT_FATAL_ERROR:
        case CARD_RESULT_WRONGDEVICE:
            break;
        }
    }
    return ret;
}

static void iSG_cb_asyndone(s32, s32)
{
}

static S32 iSG_mcqa_fread(st_ISG_MEMCARD_DATA* mcdata, char* buf, S32 len, S32 offset);
static S32 iSG_mc_fread(st_ISG_MEMCARD_DATA* mcdata, char* buf, S32 len, S32 offset)
{
    return iSG_mcqa_fread(mcdata, buf, len, offset);
}

static void iSG_cb_asyndone(s32, s32);
static S32 iSG_mcqa_fread(st_ISG_MEMCARD_DATA* mcdata, char* buf, S32 len, S32 offset)
{
    S32 x = 1000;
    s32 result = CARDGetResultCode(mcdata->chan);
    do
    {
        result = CARDGetResultCode(mcdata->chan);
    } while (result == CARD_RESULT_BUSY);

    if (result != CARD_RESULT_READY)
    {
        return 0;
    }

    CARDGetXferredBytes(mcdata->chan);
    do
    {
        result = CARDReadAsync(&mcdata->finfo, buf, len, offset, iSG_cb_asyndone);
    } while (result == CARD_RESULT_BUSY);

    if (result != CARD_RESULT_READY)
    {
        return 0;
    }

    result = CARD_RESULT_BUSY;
    do
    {
        if (x++ > 500)
        {
            xSndUpdate();
            CARDGetXferredBytes(mcdata->chan);
            result = CARDGetResultCode(mcdata->chan);
            x = 0;
        }
        iTRCDisk::CheckDVDAndResetState();
    } while (result == CARD_RESULT_BUSY);
    return result != 0 ? 0 : 1;
}

static S32 iSG_mcqa_fwrite(st_ISG_MEMCARD_DATA* mcdata, char* buf, S32 len);
static S32 iSG_mc_fwrite(st_ISG_MEMCARD_DATA* mcdata, char* buf, S32 len)
{
    iSG_mcqa_fwrite(mcdata, buf, len);
}

static S32 iSG_mcqa_fwrite(st_ISG_MEMCARD_DATA* mcdata, char* buf, S32 len)
{
    S32 ret = 0;
    S32 x = 1000;
    CARDStat* fstat = &mcdata->fstat;
    s32 result;
    do
    {
        result = CARDGetResultCode(mcdata->chan);
    } while (result == CARD_RESULT_BUSY);

    if (result != CARD_RESULT_READY)
    {
        return 0;
    }

    CARDGetXferredBytes(mcdata->chan);
    s32 asynresult;
    do
    {
        asynresult = CARDWriteAsync(&mcdata->finfo, buf, len, mcdata->unk_98, iSG_cb_asyndone);
    } while (asynresult == CARD_RESULT_BUSY);

    if (asynresult != CARD_RESULT_READY)
    {
        return 0;
    }

    result = CARD_RESULT_BUSY;
    do
    {
        if (x++ > 500)
        {
            result = CARDGetResultCode(mcdata->chan);
            xSndUpdate();
            CARDGetXferredBytes(mcdata->chan);
            x = 0;
        }
        iTRCDisk::CheckDVDAndResetState();
    } while (result == CARD_RESULT_BUSY);

    if (asynresult == CARD_RESULT_READY)
    {
        mcdata->unk_98 += len;

        do
        {
            result = CARDGetStatus(mcdata->chan, mcdata->finfo.fileNo, fstat);
        } while (result == CARD_RESULT_BUSY);

        if (result == CARD_RESULT_READY)
        {
            ret = 1;
        }
    }
    return ret;
}

S32 iSGCheckForWrongDevice()
{
    char* workarea = (char*)RwMalloc(0x10000 - 0x6000);

    S32 ret = -1;
    for (S32 i = 0; i < ISG_NUM_SLOTS; ++i)
    {
        s32 result = CARDMount(i, workarea, NULL);

        switch (result)
        {
        case CARD_RESULT_READY:
        case CARD_RESULT_BROKEN:
        case CARD_RESULT_ENCODING:
            CARDUnmount(i);
            break;
        case CARD_RESULT_WRONGDEVICE:
            ret = i;
            i = ISG_NUM_SLOTS;
            break;
        }
    }

    RwFree(workarea);

    return ret;
}

S32 iSGCheckForCorruptFiles(st_ISGSESSION* isgdata, char files[][64])
{
    if (isgdata->slot < 0)
    {
        return 0;
    }

    S32 i;
    char* name;
    st_ISG_MEMCARD_DATA* mcdata = &isgdata->mcdata[isgdata->slot];
    S32 ret = 0;
    memset(files, NULL, 0xc0);

    for (i = 0; i < ISG_NUM_FILES; ++i)
    {
        name = iSGMakeName(ISG_NGTYP_GAMEFILE, NULL, i);
        if (iSG_fileKosher(mcdata, name, 0, NULL) == 0)
        {
            strcpy(files[ret], name);
            ret++;
        }
    }
    return ret;
}

U8 iSGCheckMemoryCard(st_ISGSESSION* isgdata, S32 index)
{
    s32 memSize;
    s32 sectorSize;

    switch (CARDProbeEx(index, &memSize, &sectorSize))
    {
    case CARD_RESULT_READY:
        return 1;
    }
    return 0;
}

void iSGAutoSave_Startup()
{
}

st_ISGSESSION* iSGAutoSave_Connect(S32 idx_target, void* cltdata, void (*chg)(void*, en_CHGCODE))
{
    st_ISGSESSION* isgdata = iSGSessionBegin(cltdata, chg, 1);
    if (isgdata == NULL)
    {
        return isgdata;
    }

    if (iSGTgtSetActive(isgdata, idx_target) == 0)
    {
        iSGSessionEnd(isgdata);
        isgdata = NULL;
    }
    return isgdata;
}

void iSGAutoSave_Disconnect(st_ISGSESSION* isg)
{
    iSGSessionEnd(isg);
}

S32 iSGAutoSave_Monitor(st_ISGSESSION* isg, S32 idx_target)
{
    if (isg == NULL)
    {
        return 0;
    }

    U32 ret = iSGTgtState(isg, idx_target, NULL);
    if (ret == 0 || (ret & 1) == 0)
    {
        globals.autoSaveFeature = 0;
        return 0;
    }
    return 1;
}
