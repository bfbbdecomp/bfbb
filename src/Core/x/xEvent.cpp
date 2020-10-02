#include "xEvent.h"

#include "../../Game/zScene.h"

#include "xString.h"
#include "xstransvc.h"

void zEntEvent(char* to, uint32 toEvent)
{
    uint32 id = xStrHash(to);
    xBase* sendTo = zSceneFindObject(id);

    if (sendTo)
    {
        zEntEvent(sendTo, toEvent);
    }
}

void zEntEvent(uint32 toID, uint32 toEvent)
{
    xBase* sendTo = zSceneFindObject(toID);

    if (sendTo)
    {
        zEntEvent(sendTo, toEvent);
    }
}

void zEntEvent(uint32 toID, uint32 toEvent, float32 toParam0, float32 toParam1, float32 toParam2,
               float32 toParam3)
{
    xBase* sendTo;
    float32 toParam[4];

    toParam[0] = toParam0;
    toParam[1] = toParam1;
    toParam[2] = toParam2;
    toParam[3] = toParam3;

    sendTo = zSceneFindObject(toID);

    if (sendTo)
    {
        zEntEvent(sendTo, toEvent, toParam);
    }
}

void zEntEvent(xBase* to, uint32 toEvent)
{
    zEntEvent(NULL, 0, to, toEvent, NULL, NULL, 0);
}

void zEntEvent(xBase* to, uint32 toEvent, float32 toParam0, float32 toParam1, float32 toParam2,
               float32 toParam3)
{
    float32 toParam[4];

    toParam[0] = toParam0;
    toParam[1] = toParam1;
    toParam[2] = toParam2;
    toParam[3] = toParam3;

    zEntEvent(to, toEvent, toParam, NULL);
}

void zEntEvent(xBase* to, uint32 toEvent, const float32* toParam)
{
    zEntEvent(NULL, 0, to, toEvent, toParam, NULL, 0);
}

void zEntEvent(xBase* to, uint32 toEvent, const float32* toParam, xBase* toParamWidget)
{
    zEntEvent(NULL, 0, to, toEvent, toParam, toParamWidget, 0);
}

void zEntEvent(xBase* from, xBase* to, uint32 toEvent)
{
    zEntEvent(from, 0, to, toEvent, NULL, NULL, 0);
}

void zEntEvent(xBase* from, xBase* to, uint32 toEvent, const float32* toParam)
{
    zEntEvent(from, 0, to, toEvent, toParam, NULL, 0);
}

void zEntEvent(xBase* from, uint32 fromEvent, xBase* to, uint32 toEvent, const float32* toParam,
               xBase* toParamWidget, int32 forceEvent)
{
    if (toEvent == eEventDisable)
    {
        xBaseDisable(to);
    }
    else if (toEvent == eEventEnable)
    {
        xBaseEnable(to);
    }

    if (to->eventFunc && (xBaseIsEnabled(to) || forceEvent))
    {
        to->eventFunc(from, to, toEvent, toParam, toParamWidget);
    }

    if (xBaseIsEnabled(to) && to->linkCount)
    {
        xLinkAsset* idx = to->link;

        for (int32 i = 0; i < to->linkCount; i++, idx++)
        {
            if (toEvent == idx->srcEvent)
            {
                if (!idx->chkAssetID || (from && idx->chkAssetID == from->id))
                {
                    xBase* sendTo = zSceneFindObject(idx->dstAssetID);

                    if (sendTo)
                    {
                        xBase* b = NULL;

                        if (idx->paramWidgetAssetID)
                        {
                            b = zSceneFindObject(idx->paramWidgetAssetID);

                            if (!b)
                            {
                                b = (xBase*)
                                    xSTFindAsset(idx->paramWidgetAssetID, NULL);
                            }
                        }

                        zEntEvent(to, toEvent, sendTo, idx->dstEvent,
                                  idx->param, b, 0);
                    }
                }
            }
        }
    }
}