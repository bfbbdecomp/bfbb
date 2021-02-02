#ifndef ZTAXI_H
#define ZTAXI_H

#include <types.h>
#include "../Core/x/xBase.h"
#include "../Core/x/xDynAsset.h"
#include "zEnt.h"
#include "zTalkBox.h"

struct callback
{
};

struct taxi_asset : xDynAsset
{
    uint32 marker;
    uint32 cameraID;
    uint32 portalID;
    uint32 talkBoxID;
    uint32 textID;
    uint32 taxiID;
    float32 invDelay;
    float32 portalDelay;
};

struct zTaxi : xBase
{
    taxi_asset* basset;
    zEnt* taxi;
    xVec3 pos;
    uint32 currState;
    uint32 prevState;
    float32 portalTimer;
    float32 invTimer;
    float32 radius;
};

struct taxiCB : callback
{
    zTaxi* taxi;
    ztalkbox::answer_enum answer;

    void on_start();
    void on_signal();
    void on_answer(ztalkbox::answer_enum answer);
    void on_stop();
};

struct xScene;

void zTaxi_Init(xBase& data, xDynAsset& asset, ulong32);
void zTaxi_Init(zTaxi* taxi, taxi_asset* asset);
void zTaxi_Setup(zTaxi* taxi);
void zTaxi_tb_answer(ztalkbox::answer_enum answer);
void zTaxi_Save(zTaxi* taxi, xSerial* s);
void zTaxi_Load(zTaxi* taxi, xSerial* s);
int32 zTaxiEventCB(xBase* from, xBase* to, uint32 toEvent, const float32* toParam, xBase* b3);
void zTaxi_Update(xBase* to, xScene*, float32 dt);

#endif