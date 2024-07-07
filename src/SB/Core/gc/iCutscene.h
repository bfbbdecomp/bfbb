#ifndef ICUTSCENE_H
#define ICUTSCENE_H

#include "xCutscene.h"
#include "xSnd.h"

void iCSSoundSetup(xCutscene* csn);
void* iCSSoundGetData(xSndVoiceInfo* vp, U32* size);
U32 iCSFileOpen(xCutscene* csn);
void iCSFileAsyncRead(xCutscene* csn, void* dest, U32 size);
void iCSFileAsyncSkip(xCutscene* csn, U32 amount);
void iCSFileClose(xCutscene* csn);
S32 iCSLoadStep(xCutscene* csn);

#endif
