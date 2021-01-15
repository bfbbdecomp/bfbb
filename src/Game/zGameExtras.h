#ifndef ZGAMEEXTRAS_H
#define ZGAMEEXTRAS_H

#include "../Core/x/xserializer.h"

void zGameExtras_SceneReset();
int32 zGameExtras_CheatFlags();
void GEC_dfltSound();
void GEC_villSound();
void zGameExtras_NewGameReset();
void zGameExtras_Save(xSerial* xser);
void zGameExtras_Load(xSerial* xser);
void zGame_HackGalleryInit();

#endif