#ifndef ZTAXI_H
#define ZTAXI_H

#include <types.h>
#include "xBase.h"
#include "xDynAsset.h"
#include "zEnt.h"
#include "zTalkBox.h"

struct taxi_asset : xDynAsset
{
    U32 marker;
    U32 cameraID;
    U32 portalID;
    U32 talkBoxID;
    U32 textID;
    U32 taxiID;
    F32 invDelay;
    F32 portalDelay;
};

struct zTaxi : xBase
{
    taxi_asset* basset;
    zEnt* taxi;
    xVec3 pos;
    U32 currState;
    U32 prevState;
    F32 portalTimer;
    F32 invTimer;
    F32 radius;
};

struct taxiCB : ztalkbox::callback
{
    zTaxi* taxi;
    ztalkbox::answer_enum answer;

    virtual void on_signal(U32);
    virtual void on_start();
    virtual void on_stop();
    virtual void on_answer(ztalkbox::answer_enum answer);
};

struct xScene;

void zTaxi_Init(xBase& data, xDynAsset& asset, size_t);
void zTaxi_Init(zTaxi* taxi, taxi_asset* asset);
void zTaxi_Setup(zTaxi* taxi);
void zTaxi_tb_answer(U32 answer);
void zTaxi_Save(zTaxi* taxi, xSerial* s);
void zTaxi_Load(zTaxi* taxi, xSerial* s);
S32 zTaxiEventCB(xBase* from, xBase* to, U32 toEvent, const F32* toParam, xBase* b3);
void zTaxi_Update(xBase* to, xScene*, F32 dt);

#endif
