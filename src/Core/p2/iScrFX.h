#ifndef ISCRFX_H
#define ISCRFX_H

#include <rwcore.h>

void iScrFxCameraCreated(RwCamera* pCamera);
void iScrFxCameraEndScene(RwCamera* pCamera);
void iScrFxPostCameraEnd(RwCamera* pCamera);
int32 iScrFxCameraDestroyed(RwCamera* pCamera);

#endif