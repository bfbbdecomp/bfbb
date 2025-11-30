#ifndef ZEGENERATOR_H
#define ZEGENERATOR_H

#include "zEnt.h"
#include "zLightning.h"

#include <types.h>

struct zEGenAsset : xEntAsset
{
    xVec3 src_dpos;
    U8 damage_type;
    U8 flags;
    F32 ontime;
    U32 onAnimID;
};

struct zEGenerator : zEnt
{
    zEGenAsset* zasset;
    U16 flags;
    U16 num_dsts;
    F32 tmr;
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
void zEGenerator_Move(zEGenerator* egen, xScene* sc, F32 dt);
void zEGenerator_Update(zEGenerator* egen, xScene* sc, F32 dt);
void zEGenerator_Render(zEGenerator* egen);
void zEGenerator_TurnOn(zEGenerator* egen);
void zEGenerator_TurnOff(zEGenerator* egen);
void zEGenerator_ToggleOn(zEGenerator* egen);
S32 zEGeneratorEventCB(xBase* to, xBase* from, U32 toEvent, const F32* toParam,
                         xBase* toParamWidget);

#endif
