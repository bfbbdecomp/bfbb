#include "iCutscene.h"

#include <types.h>

// iCSSoundSetup(xCutscene*)
#pragma GLOBAL_ASM("asm/Core/p2/iCutscene.s", "iCSSoundSetup__FP9xCutscene")

// iCSSoundGetData(xSndVoiceInfo*,unsigned int*)
#pragma GLOBAL_ASM("asm/Core/p2/iCutscene.s", "iCSSoundGetData__FP13xSndVoiceInfoPUi")

// iCSFileOpen(xCutscene*)
#pragma GLOBAL_ASM("asm/Core/p2/iCutscene.s", "iCSFileOpen__FP9xCutscene")

// iCSFileAsyncRead(xCutscene*,void*,unsigned int)
#pragma GLOBAL_ASM("asm/Core/p2/iCutscene.s", "iCSFileAsyncRead__FP9xCutscenePvUi")

// iCSFileAsyncSkip(xCutscene*,unsigned int)
#pragma GLOBAL_ASM("asm/Core/p2/iCutscene.s", "iCSFileAsyncSkip__FP9xCutsceneUi")

// iCSFileClose(xCutscene*)
#pragma GLOBAL_ASM("asm/Core/p2/iCutscene.s", "iCSFileClose__FP9xCutscene")

// iCSLoadStep(xCutscene*)
#pragma GLOBAL_ASM("asm/Core/p2/iCutscene.s", "iCSLoadStep__FP9xCutscene")
