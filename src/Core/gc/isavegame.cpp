#include "isavegame.h"

#include <types.h>
#include <stdio.h>
#include <string.h>

#include "iTRC.h"

extern int8 isavegame_strings[];

extern st_ISGSESSION g_isgdata_MAIN;

extern int32 g_isginit;


#if 0
int32 iSGStartup()
{
    int32 i = g_isginit;

    if (g_isginit != 0)
    {
        g_isginit = i;

        return i;
    }
    g_isginit = i;

    iSG_start_your_engines();
    iSG_load_icondata();
    return i;
}
#endif


int32 iSGShutdown()
{
    iSG_discard_icondata();
    return 1;
}


#if 0
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


#if 0
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


#if 0
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
