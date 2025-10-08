#ifndef ZMAIN_H
#define ZMAIN_H

#include <types.h>
#include "xIni.h"
#include "xserializer.h"

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
static void zMainOutputMgrSetup();
static void zMainInitGlobals();
static void zMainParseINIGlobals(xIniFile* ini);
static void zMainMemLvlChkCB();
void zMainShowProgressBar();
static void zMainLoop();
static void zMainReadINI();
void zMainFirstScreen(int);
static void zMainLoadFontHIP();

#endif