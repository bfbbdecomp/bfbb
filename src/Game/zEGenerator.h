#ifndef ZEGENERATOR_H
#define ZEGENERATOR_H

#include "zEnt.h"
#include "zLightning.h"

#include <types.h>

struct zEGenAsset : xEntAsset
{
    xVec3 src_dpos;
    uint8 damage_type;
    uint8 flags;
    float32 ontime;
    uint32 onAnimID;
};

struct zEGenerator : zEnt
{
    zEGenAsset* zasset;
    uint16 flags;
    uint16 num_dsts;
    float32 tmr;
    xAnimFile* afile;
    xVec3 src_pos;
    xVec3 dst_pos;
    xVec3 dst_off;
    xBase* dst;
    zLightning* lfx[2];
};

void zEGenerator_Init(void* egen, void* asset);
void zEGenerator_Init(zEGenerator* egen, xEntAsset* asset);
void zEGenerator_Setup(zEGenerator* egen, xScene* sc);
void zEGenerator_Save(zEGenerator* ent, xSerial* s);
void zEGenerator_Load(zEGenerator* ent, xSerial* s);
void zEGenerator_Reset(zEGenerator* egen, xScene* sc);
void zEGenerator_Move(zEGenerator* egen, xScene* sc, float32 dt);
void zEGenerator_Render(zEGenerator* egen);
void zEGenerator_TurnOn(zEGenerator* egen);
void zEGenerator_TurnOff(zEGenerator* egen);
void zEGenerator_ToggleOn(zEGenerator* egen);
int32 zEGeneratorEventCB(xBase* to, xBase* from, uint32 toEvent, const float32* toParam,
                         xBase* toParamWidget);

#endif