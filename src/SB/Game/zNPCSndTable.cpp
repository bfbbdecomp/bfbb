#include "zNPCSndTable.h"
#include "zNPCGoalVillager.h"

#include "xString.h"

#include <types.h>

static char* g_strz_sndgroup[26];
static unsigned int g_hash_sndgroup[26];
static float g_tmrz_sndplay[26];

NPCSndProp g_sndProps[];

void NPCS_Startup()
{
    for (int i = 0; i < (int)(sizeof(g_strz_sndgroup) / sizeof(char*)); i++)
    {
        g_hash_sndgroup[i] = xStrHash(g_strz_sndgroup[i]);
    }
}

void NPCS_Shutdown()
{
}

int NPCS_SndOkToPlay(en_NPC_SOUND sndtype)
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

void NPCS_SndTypePlayed(en_NPC_SOUND sndtype, float delayNext)
{
    float tym = 2.0f;

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
