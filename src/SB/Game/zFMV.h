#ifndef ZFMV_H
#define ZFMV_H

#include <types.h>

// this enum on Gamecube doesn't match the PS2.
// Apparently the PS2 has more videos.
enum eFMVFile
{
    eFMVFile_PromoFOP,
    eFMVFile_PromoTak,
    eFMVFile_PromoJN,
    eFMVFile_PromoSB,
    eFMVFile_LogoHeavyIron,
    eFMVFile_LogoNick,
    eFMVFile_LogoRW,
    eFMVFile_LogoTHQ,
    eFMVFile_Demo1,
    eFMVFileCount
};

struct zFMVFile
{
    eFMVFile type;
    S8 fileName[32];
};

U32 zFMVPlay(S8* filename, U32 buttons, F32 time, bool skippable, bool lockController);
S8* zFMVFileGetName(eFMVFile fileEnum);

#endif
