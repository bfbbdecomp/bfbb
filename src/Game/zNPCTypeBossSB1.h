#ifndef ZNPCTYPEBOSSSB1_H
#define ZNPCTYPEBOSSSB1_H

#include "zNPCTypeBoss.h"

#include "../Core/x/xFX.h"

struct zNPCB_SB1 : zNPCBoss
{
    xModelInstance* m_subModels[6];
    xModelTag m_leftArmTags[4];
    xModelTag m_rightArmTags[4];
    xModelTag m_feetTags[4];
    float32 m_tauntTimer;
    zEnt* m_armColl[2];
    zEnt* m_bodyColl;
    zEnt* m_armTgt[2];
    xFXRing* m_stompRing[16];
    uint8 attacking;
    float32 attack_delay;

    zNPCB_SB1(int32 myType);
};

#endif