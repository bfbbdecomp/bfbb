#ifndef ZEGENERATOR_H
#define ZEGENERATOR_H

#include "zEnt.h"
#include "zLightning.h"

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

struct xScene;

void zEGenerator_Init(void* egen, void* asset);
void zEGenerator_Save(zEGenerator* ent, xSerial* s);
void zEGenerator_Load(zEGenerator* ent, xSerial* s);
void zEGenerator_Reset(zEGenerator* egen, xScene*);

#endif