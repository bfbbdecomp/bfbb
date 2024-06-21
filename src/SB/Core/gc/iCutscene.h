#ifndef ICUTSCENE_H
#define ICUTSCENE_H

#include "xCutscene.h"
#include "xSnd.h"

void iCSSoundSetup(xCutscene* csn);
void* iCSSoundGetData(xSndVoiceInfo* vp, uint32* size);
uint32 iCSFileOpen(xCutscene* csn);
void iCSFileAsyncRead(xCutscene* csn, void* dest, uint32 size);
void iCSFileAsyncSkip(xCutscene* csn, uint32 amount);
void iCSFileClose(xCutscene* csn);
int32 iCSLoadStep(xCutscene* csn);

#endif
