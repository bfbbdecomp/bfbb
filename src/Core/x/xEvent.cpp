#include "xEvent.h"

#include "../Game/zScene.h"

#include "xString.h"
#include "xstransvc.h"

void zEntEvent(char* to, unsigned int toEvent)
{
    unsigned int id = xStrHash(to);
    xBase* sendTo = zSceneFindObject(id);

    if (sendTo)
    {
        zEntEvent(sendTo, toEvent);
    }
}

void zEntEvent(unsigned int toID, unsigned int toEvent)
{
    xBase* sendTo = zSceneFindObject(toID);

    if (sendTo)
    {
        zEntEvent(sendTo, toEvent);
    }
}

void zEntEvent(unsigned int toID, unsigned int toEvent, float toParam0,
               float toParam1, float toParam2, float toParam3)
{
    xBase* sendTo;
    float toParam[4];

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

void zEntEvent(xBase* to, unsigned int toEvent)
{
    zEntEvent(NULL, 0, to, toEvent, NULL, NULL, 0);
}

void zEntEvent(xBase* to, unsigned int toEvent, float toParam0, float toParam1,
               float toParam2, float toParam3)
{
    float toParam[4];

    toParam[0] = toParam0;
    toParam[1] = toParam1;
    toParam[2] = toParam2;
    toParam[3] = toParam3;

    zEntEvent(to, toEvent, toParam, NULL);
}

void zEntEvent(xBase* to, unsigned int toEvent, const float* toParam)
{
    zEntEvent(NULL, 0, to, toEvent, toParam, NULL, 0);
}

void zEntEvent(xBase* to, unsigned int toEvent, const float* toParam,
               xBase* toParamWidget)
{
    zEntEvent(NULL, 0, to, toEvent, toParam, toParamWidget, 0);
}

void zEntEvent(xBase* from, xBase* to, unsigned int toEvent)
{
    zEntEvent(from, 0, to, toEvent, NULL, NULL, 0);
}

void zEntEvent(xBase* from, xBase* to, unsigned int toEvent,
               const float* toParam)
{
    zEntEvent(from, 0, to, toEvent, toParam, NULL, 0);
}

void zEntEvent(xBase* from, unsigned int fromEvent, xBase* to,
               unsigned int toEvent, const float* toParam, xBase* toParamWidget,
               int forceEvent)
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

        for (int i = 0; i < to->linkCount; i++, idx++)
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