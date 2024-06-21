#ifndef ZENTBUTTON_H
#define ZENTBUTTON_H

#include "zEnt.h"

#include "xEntMotion.h"

struct zEntButtonAsset
{
    uint32 modelPressedInfoID;
    uint32 actMethod;
    int32 initButtonState;
    int32 isReset;
    float32 resetDelay;
    uint32 buttonActFlags;
};

struct _zEntButton : zEnt
{
    zEntButtonAsset* basset;
    xEntMotion motion;
    uint32 state;
    float32 speed;
    uint32 oldState;
    int32 oldMotState;
    float32 counter;
    xModelInstance* modelPressed;
    float32 holdTimer;
    uint32 hold;
    float32 topHeight;
};

void zEntButton_Init(void* ent, void* asset);
void zEntButton_Setup(_zEntButton* ent, xScene* sc);
void zEntButton_Save(_zEntButton* ent, xSerial* s);
void zEntButton_Load(_zEntButton* ent, xSerial* s);
void zEntButton_Reset(_zEntButton* ent, xScene* sc);
void zEntButton_Press(_zEntButton* ent, uint32 mask);
void zEntButton_SceneUpdate(float32 dt);

#endif
