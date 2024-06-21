#ifndef ZCOMBO_H
#define ZCOMBO_H

#include <types.h>
#include "xFont.h"
#include "xHud.h"

void zCombo_Setup();
void zCombo_Add(int);
void zCombo_Update(float32);
void zCombo_HideImmediately();
void zComboHideMessage(xhud::widget& w, xhud::motive& motive);

#endif
