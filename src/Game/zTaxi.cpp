#include "../Core/x/xBase.h"
#include "../Core/x/xEvent.h"
#include "../Core/x/xstransvc.h"

#include "zTaxi.h"
#include "zScene.h"

#include <types.h>

extern ztalkbox::answer_enum sAnswer;
extern float32 portalTimer;

void zTaxi_Init(xBase& data, xDynAsset& asset)
{
    zTaxi_Init((zTaxi*)&data, (taxi_asset*)&asset);
}

// func_80172054
#pragma GLOBAL_ASM("asm/Game/zTaxi.s", "zTaxi_Init__FP5zTaxiP10taxi_asset")

// func_80172128
#pragma GLOBAL_ASM("asm/Game/zTaxi.s", "__ct__6taxiCBFv")

void zTaxi_Setup(zTaxi* taxi)
{
    // Load assets.
    zSceneFindObject(taxi->basset->cameraID);
    zSceneFindObject(taxi->basset->portalID);
    zSceneFindObject(taxi->basset->talkBoxID);
    xSTFindAsset(taxi->basset->textID, NULL);

    // Taxi setup.
    xBase* taxiObj = zSceneFindObject(taxi->basset->taxiID);
    *(xBase**)&taxi->taxi = taxiObj;
    taxi->portalTimer = portalTimer;
    taxi->baseFlags |= (uint16)2;
}

// func_801721E4
#pragma GLOBAL_ASM("asm/Game/zTaxi.s", "zTaxi_Update__FP5xBaseP6xScenef")

void zTaxi_tb_answer(ztalkbox::answer_enum answer)
{
    sAnswer = answer;
}

void zTaxi_Save(zTaxi* taxi, xSerial* s)
{
    xBaseSave((xBase*)taxi, s);
}

void zTaxi_Load(zTaxi* taxi, xSerial* s)
{
    xBaseLoad((xBase*)taxi, s);
}

int32 zTaxiEventCB(xBase* from, xBase* to, uint32 toEvent, const float32* toParam, xBase* b3)
{
    switch (toEvent)
    {
    case eEventSceneBegin:
        break;

    case eEventEnable:
        xBaseEnable(to);
        break;

    case eEventDisable:
        xBaseDisable(to);
        break;
    }
    return eEventEnable;
}

void taxiCB::on_start()
{
}

void taxiCB::on_signal()
{
}

void taxiCB::on_answer(ztalkbox::answer_enum answer)
{
    zTaxi_tb_answer(answer);
}

void taxiCB::on_stop()
{
}