#include <types.h>
#include <CodeWarrior/stdio.h>
#include "../Core/gc/iFMV.h"
#include "../Core/x/xSnd.h"
#include "zFMV.h"
#include "zGameState.h"

zFMVFile zFMVFileTable[] = {
    { eFMVFile_PromoFOP, "FMV\\FOP" }, // Fairly Odd Parents
    { eFMVFile_PromoTak, "FMV\\Tak" }, // Tak and the Power of Juju
    { eFMVFile_PromoJN, "FMV\\JN" }, // Jimmy Neutron
    { eFMVFile_PromoSB, "FMV\\SB" }, // SpongeBob DVD set
    { eFMVFile_LogoHeavyIron, "FMV\\HILogo" }, // Heavy Iron Logo
    { eFMVFile_LogoTHQ, "FMV\\THQLogo" }, // THQ Logo
    { eFMVFile_LogoNick, "FMV\\NickLogo" }, // Nickelodeon Logo
    { eFMVFile_LogoRW, "FMV\\RWLogo" }, // RenderWare Logo
    { eFMVFile_Demo1, "FMV\\demo1" }, // Gameplay Demo (Idle)
};

uint32 zFMVPlay(int8* filename, uint32 buttons, float32 time, bool skippable, bool lockController)
{
    int8 fullname[64];
    uint32 ret;

    if (filename == NULL)
    {
        return 1;
    }

    while (*filename == '/' || *filename == '\\')
    {
        filename++;
    }

    sprintf(fullname, "%s%s", filename, ".bik");
    xSndSuspend();
    _GameOstrich old = zGameGetOstrich();
    zGameSetOstrich(eGameOstrich_PlayingMovie);
    ret = iFMVPlay(fullname, buttons, time, skippable, lockController);
    zGameSetOstrich(old);
    xSndResume();

    return ret;
}

int8* zFMVFileGetName(eFMVFile fileEnum)
{
    for (int32 i = 0; i < eFMVFileCount; i++)
    {
        if (fileEnum == zFMVFileTable[i].type)
        {
            return zFMVFileTable[i].fileName;
        }
    }

    return NULL;
}
