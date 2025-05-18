#ifndef ZMAIN_H
#define ZMAIN_H

#include <types.h>
#include "xIni.h"
#include "xserializer.h"

st_SERIAL_PERCID_SIZE* g_xser_sizeinfo;


enum eStartupErrors {
    eNoError = 0,
    eNoFormat = 1,
    eDamagedCard = 2,
    eWrongDevice = 3,
    eNoCards = 4,
    eCorruptFile = 5,
    eNoController = 6,
};

void main(S32 argc, char** argv);
void iEnvStartup();
void zMainOutputMgrSetup();
void zMainInitGlobals();
void zMainParseINIGlobals(xIniFile* ini);
void zMainMemLvlChkCB();
void zMainShowProgressBar();
void zMainLoop();
void zMainReadINI();
void zMainFirstScreen(int);
void zMainLoadFontHIP();


#endif