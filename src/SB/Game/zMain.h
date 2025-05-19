#ifndef ZMAIN_H
#define ZMAIN_H

#include <types.h>
#include "xIni.h"
#include "xserializer.h"

st_SERIAL_PERCID_SIZE* g_xser_sizeinfo;

enum eStartupErrors
{
    eNoError,
    eNoFormat,
    eDamagedCard,
    eWrongDevice,
    eNoCards,
    eCorruptFile,
    eNoController,
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