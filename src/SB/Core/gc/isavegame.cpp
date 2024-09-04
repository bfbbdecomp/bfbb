#include "isavegame.h"

#include "iFile.h"
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
    S32 ret = 0;
    s32 chan = slot;
    S32 result;

    do
    {
        result = CARDUnmount(chan);
    } while (result == CARD_RESULT_BUSY);

    if (result == CARD_RESULT_READY)
    {
        ret = 1;
    }
    else if (result == CARD_RESULT_NOCARD)
    {
        ret = 1;
    }

    return ret;
}

static void iSG_cb_asyndone(long, long)
{
}

void iSGAutoSave_Startup()
{
}
