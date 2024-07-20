#ifndef ZENTBUTTON_H
#define ZENTBUTTON_H

#include "zEnt.h"

#include "xEntMotion.h"

struct zEntButtonAsset
{
    U32 modelPressedInfoID;
    U32 actMethod;
    S32 initButtonState;
    S32 isReset;
    F32 resetDelay;
    U32 buttonActFlags;
};

struct _zEntButton : zEnt
{
    zEntButtonAsset* basset;
    xEntMotion motion;
    U32 state;
    F32 speed;
    U32 oldState;
    S32 oldMotState;
    F32 counter;
    xModelInstance* modelPressed;
    F32 holdTimer;
    U32 hold;
    F32 topHeight;
};

void zEntButton_Init(void* ent, void* asset);
void zEntButton_Init(_zEntButton* ent, xEntAsset* asset);
void zEntButton_Move(_zEntButton* ent, xScene* sc, F32 dt, xEntFrame* frame);
void zEntButton_Setup(_zEntButton* ent, xScene* sc);
void zEntButton_Save(_zEntButton* ent, xSerial* s);
void zEntButton_Load(_zEntButton* ent, xSerial* s);
void zEntButton_Reset(_zEntButton* ent, xScene* sc);
void zEntButton_Update(_zEntButton* ent, xScene* sc, F32 dt);
void zEntButton_Render(_zEntButton* ent);
void zEntButton_SetReady(_zEntButton* ent);
void zEntButton_Press(_zEntButton* ent);
void zEntButton_Press(_zEntButton* ent, U32 mask);
void zEntButton_Hold(_zEntButton* ent, U32 mask);
void zEntButton_SceneUpdate(F32 dt);

#endif
