/*
    Compile unit: C:\SB\Game\zFMV.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static class zFMVFile zFMVFileTable[9]; // size: 0x144, address: 0x407EE0
enum _GameOstrich {
    eGameOstrich_Loading = 0,
    eGameOstrich_PlayingMovie = 1,
    eGameOstrich_InScene = 2,
    eGameOstrich_Total = 3,
};
enum eFMVFile {
    eFMVFile_PromoFOP = 0,
    eFMVFile_PromoTak = 1,
    eFMVFile_PromoJN = 2,
    eFMVFile_PromoSB = 3,
    eFMVFile_LogoHeavyIron = 4,
    eFMVFile_LogoNick = 5,
    eFMVFile_LogoRW = 6,
    eFMVFile_LogoTHQ = 7,
    eFMVFile_Demo1 = 8,
    eFMVFile_Demo2 = 9,
    eFMVFile_Demo3 = 10,
    eFMVFile_LogoPixar = 11,
    eFMVFileCount = 12,
};
class zFMVFile {
    // total size: 0x24
public:
    enum eFMVFile type; // offset 0x0, size 0x4
    char fileName[32]; // offset 0x4, size 0x20
};

/*
    Compile unit: C:\SB\Game\zFMV.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00175720 -> 0x00175780
*/
// Range: 0x175720 -> 0x175780
char * zFMVFileGetName(enum eFMVFile fileEnum /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x175720 -> 0x175780
        signed int i; // r5
    }
}

/*
    Compile unit: C:\SB\Game\zFMV.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00175780 -> 0x00175870
*/
// Range: 0x175780 -> 0x175870
unsigned int zFMVPlay(char * filename /* r4 */, unsigned int buttons /* r18 */, float time /* r20 */, unsigned char skippable /* r17 */, unsigned char lockController /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x175780 -> 0x175870
        char fullname[64]; // r29+0x60
        enum _GameOstrich old; // r19
        unsigned int ret; // r16
    }
}

