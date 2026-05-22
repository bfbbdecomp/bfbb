#include "zNPCSndTable.h"

#include "iSnd.h"
#include "xString.h"
#include "xutil.h"
#include "zGameExtras.h"
#include "zNPCSndLists.h"

#define SND_COUNT 26

static U32 g_hash_sndgroup[SND_COUNT];
static F32 g_tmrz_sndplay[SND_COUNT] = {};
static char* g_strz_sndgroup[SND_COUNT] = {
    "ListEnd",     "Encounter",   "Clanking", "Exclaim",    "Ouch",       "Cheering", "Respawn",
    "Alert",       "Dizzy",       "Dance",    "Laugh",      "Attack",     "Punch",    "WepLaunch",
    "Lightning",   "WarnBang",    "Death",    "DeathJelly", "Bonked",     "Unbonked", "TikiStack",
    "TikiExplode", "TikiThunder", "XSfxTalk", "OneLiner",   "OneLinerToo"
};

void NPCS_Startup()
{
    for (S32 i = 0; i < (S32)(sizeof(g_strz_sndgroup) / sizeof(char*)); i++)
    {
        g_hash_sndgroup[i] = xStrHash(g_strz_sndgroup[i]);
    }
}

void NPCS_Shutdown()
{
}

void NPCS_SndTimersUpdate(F32 dt)
{
    // non-matching: only producing one lfs instruction for -1.0f
    for (S32 i = 0; i < SND_COUNT; i++)
    {
        g_tmrz_sndplay[i] = MAX(g_tmrz_sndplay[i] - dt, -1.0f);
    }
}

void NPCS_SndTimersReset()
{
    // non-matching: missing lfs for -1.0f
    for (S32 i = 0; i < SND_COUNT; i++)
    {
        g_tmrz_sndplay[i] = -1.0f;
    }
}

void NPCS_SndTypePlayed(en_NPC_SOUND sndtype, F32 delayNext)
{
    F32 tym = 2.0f;

    switch (sndtype)
    {
    case NPC_STYP_TIKISTACK:
        tym = 0.15f;
        break;
    case NPC_STYP_TIKIEXPLODE:
        tym = 2.0f;
        break;
    default:
        tym = -1.0f;
        break;
    }

    if (delayNext > 0.0f)
    {
        tym = delayNext;
    }

    g_tmrz_sndplay[sndtype] = tym;
}

S32 NPCS_SndOkToPlay(en_NPC_SOUND sndtype)
{
    if (sndtype == NPC_STYP_BOGUS)
    {
        return 1;
    }
    if (sndtype == NPC_STYP_LISTEND)
    {
        return 0;
    }
    return g_tmrz_sndplay[sndtype] < 0.0f;
}

void NPCS_SndTablePrepare(NPCSndTrax* trax)
{
    while (trax->typ_sound != NPC_STYP_LISTEND)
    {
        U32 sound_hash = xStrHash(trax->nam_sound);
        if (sound_hash != 0 && iSndLookup(sound_hash) != NULL)
        {
            trax->aid_sound = sound_hash;
        }
        else
        {
            trax->aid_sound = 0;
        }
        trax++;
    }
}

NPCSndProp* NPCS_SndFindProps(en_NPC_SOUND sndtype)
{
    NPCSndProp* sprop = g_sndProps;
    while (sprop->sndtype != NPC_STYP_LISTEND)
    {
        if (sprop->sndtype == sndtype)
        {
            break;
        }
        sprop++;
    }
    return sprop;
}

en_NPC_SOUND NPCS_SndTypeFromHash(U32 aid_snd, NPCSndTrax* cust, NPCSndTrax* share)
{
    en_NPC_SOUND da_type = NPC_STYP_BOGUS;
    NPCSndTrax* trax;

    for (S32 i = 0; i <= 3; i++)
    {
        if (i == 0)
        {
            trax = cust;
        }
        else if (i == 1)
        {
            trax = share;
        }
        else if (i == 2)
        {
            trax = g_sndTrax_General;
        }
        else
        {
            trax = g_sndTrax_Universal;
        }

        if (trax != NULL)
        {
            for (; trax->typ_sound != NPC_STYP_LISTEND; trax = trax + 1)
            {
                if (trax->aid_sound == aid_snd)
                {
                    da_type = trax->typ_sound;

                    break;
                }
            }
        }
    }

    return da_type;
}

U32 NPCS_SndPickSimilar(en_NPC_SOUND sndtype, NPCSndTrax* cust, NPCSndTrax* share)
{
    U32 aid_choice;
    NPCSndTrax* trax;
    S32 i;
    S32 ingroup;
    S32 list[32] = {};
    F32 wts[32] = { 1.0f };
    S32 cnt;
    F32 use_wt;

    aid_choice = 0;
    cnt = 0;

    for (i = 0; i < 3; i++)
    {
        if (i == 0)
        {
            use_wt = 2.0f;
            trax = cust;
        }
        else if (i == 1)
        {
            use_wt = 1.5f;
            trax = share;
        }
        else if (i == 2)
        {
            use_wt = 1.0f;
            trax = NULL;
            if (cnt < 5)
                trax = g_sndTrax_General;
        }
        else
        {
            use_wt = 1.0f;
            trax = NULL;
            if (cnt < 5)
                trax = g_sndTrax_Universal;
        }

        if (trax == NULL)
            continue;

        ingroup = 0;

        while (trax->typ_sound != NPC_STYP_LISTEND)
        {
            if (trax->typ_sound == sndtype)
            {
                ingroup = 1;

                if (trax->aid_sound != 0)
                {
                    wts[cnt] = use_wt;
                    list[cnt] = trax->aid_sound;
                    cnt++;
                }
            }
            else if (ingroup)
            {
                break;
            }

            if (cnt >= 32)
                break;

            trax++;
        }
    }

    if (cnt > 0)
    {
        xUtil_wtadjust(wts, cnt, 1.0f);
        aid_choice = xUtil_choose(list, cnt, wts);
    }

    return aid_choice;
}
