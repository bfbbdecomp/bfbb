#include "zPickupTable.h"

#include "zGlobals.h"
#include "../Core/x/xString.h"

struct PickupTranslEntry
{
    char* tname;
    uint32 hval;
    uint8 type;
    uint8 subtype;
    uint16 flags;
};

// clang-format off
static PickupTranslEntry ptranstbl[] =
{
    { "PurpleShiny", 0, 0, 0, 0 },
    { "BlueShiny", 0, 0, 1, 0 },
    { "GreenShiny", 0, 0, 2, 0 },
    { "YellowShiny", 0, 0, 3, 0 },
    { "RedShiny", 0, 0, 4, 0 },
    { "GoldenSpatula", 0, 1, 0, 0 },
    { "Underwear", 0, 1, 1, 0 },
    { "GoldenUnderwear", 0, 1, 2, 0 },
    { "PatsSock", 0, 1, 6, 0 },
    { "BusTicket", 0, 1, 3, 0 },
    { "StallKey", 0, 1, 4, 0 },
    { "Sundae", 0, 1, 5, 0 },
    { "SpongeBall", 0, 1, 7, 0 },
    { "JFAntidote", 0, 1, 8, 0 },
    { "BBSteeringWheel", 0, 1, 9, 0 },
    { "GLBalloon", 0, 1, 10, 0 },
    { "RBArtPieces", 0, 1, 11, 0 },
    { "BCSecurity", 0, 1, 12, 0 },
    { "KFCrystal", 0, 1, 13, 0 },
    { "GYCannons", 0, 1, 14, 0 }
};
// clang-format on

static uint32 ptranstbl_size = sizeof(ptranstbl) / sizeof(ptranstbl[0]);

void zPickupTableInit()
{
    zAssetPickup* ptbl = (zAssetPickup*)(globals.pickupTable + 1);
    uint32 i, j;

    for (i = 0; i < ptranstbl_size; i++)
    {
        ptranstbl[i].hval = xStrHash(ptranstbl[i].tname);

        for (j = 0; j < globals.pickupTable->Count; j++)
        {
            if (ptbl[j].pickupHash == ptranstbl[i].hval)
            {
                break;
            }
        }

        if (j != globals.pickupTable->Count)
        {
            ptbl[j].pickupType = ptranstbl[i].type;
            ptbl[j].pickupIndex = ptranstbl[i].subtype;
        }
    }
}
