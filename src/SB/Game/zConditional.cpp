#include "zConditional.h"

#include <types.h>

#include "zVar.h"
#include "zScene.h"
#include "xEvent.h"

S32 zConditionalEventCB(xBase*, xBase*, U32, const F32*, xBase*);

void zConditionalInit(void* b, void* asset)
{
    zConditionalInit((xBase*)b, (zCondAsset*)asset);
    zVarInit(zVarEntryTable);
}

void zConditionalInit(xBase* b, zCondAsset* asset)
{
    _zConditional* cond = (_zConditional*)b;

    xBaseInit((xBase*)cond, asset);
    cond->eventFunc = (xBaseEventCB)zConditionalEventCB;
    cond->asset = asset;

    if (cond->linkCount != 0)
    {
        cond->link = (xLinkAsset*)(cond->asset + 1);
    }
    else
    {
        cond->link = NULL;
    }
}

void zConditionalReset(_zConditional* ent)
{
    xBaseReset(ent, ent->asset);
}

void zConditionalSave(_zConditional* ent, xSerial* s)
{
    xBaseSave(ent, s);
}

void zConditionalLoad(_zConditional* ent, xSerial* s)
{
    xBaseLoad(ent, s);
}

U32 zConditional_Evaluate(_zConditional* c)
{
    zVarEntry* v = NULL;
    void* context = NULL;

    for (int i = 0; i < 18; ++i)
    {
        if (c->asset->expr1 == zVarEntryTable[i].varNameID)
        {
            v = &zVarEntryTable[i];
            if (i == 15 || i == 16 || i == 17)
            {
                U32 id = c->asset->value_asset;
                if (id != 0)
                    context = zSceneFindObject(id);
            }
        }
    }

    if (v == NULL)
        return 0;

    U32 temp = v->varCB(context);

    switch (c->asset->op)
    {
    case CONDITION_EQ:
        return temp == c->asset->constNum ? 1 : 0;

    case CONDITION_GT:
        return temp > c->asset->constNum ? 1 : 0;

    case CONDITION_LT:
        return temp < c->asset->constNum ? 1 : 0;

    case CONDITION_GE:
        return temp >= c->asset->constNum ? 1 : 0;

    case CONDITION_LE:
        return temp <= c->asset->constNum ? 1 : 0;

    case CONDITION_NE:
        return temp != c->asset->constNum ? 1 : 0;

    default:
        return 0;
    }
}

S32 zConditionalEventCB(xBase* arg1, xBase* arg2, U32 toEvent, const F32* fp, xBase* other)
{
    switch (toEvent)
    {
    case eEventEvaluate:
        if (zConditional_Evaluate((_zConditional*)arg2))
        {
            zEntEvent(arg2, arg2, eEventTrue);
        }
        else
        {
            zEntEvent(arg2, arg2, eEventFalse);
        }
        break;

    case eEventTrue:
        break;

    case eEventReset:
        zConditionalReset((_zConditional*)arg2);
        break;
    }

    return eEventEnable;
}
