#include "zConditional.h"

#include <types.h>

#include "zVar.h"
#include "zScene.h"
#include "xEvent.h"

int32 zConditionalEventCB(xBase*, xBase*, uint32, const float32*, xBase*);

void zConditionalInit(void* b, void* asset)
{
    zConditionalInit((xBase*)b, (zCondAsset*)asset);
    zVarInit(zVarEntryTable);
}

struct UnknownTypeInheritingBase : xBase
{
    int8* unknownPtr;
};

void zConditionalInit(xBase* b, zCondAsset* asset)
{
    xBaseInit(b, asset);
    b->eventFunc = (xBaseEventCB)zConditionalEventCB;

    // ?? I think that they must have cast asset to some other type, and
    // accessed a field of that other type, but I don't know what type it is.
    UnknownTypeInheritingBase* object = (UnknownTypeInheritingBase*)b;
    object->unknownPtr = (int8*)asset;

    if (b->linkCount != 0)
    {
        b->link = (xLinkAsset*)(object->unknownPtr + 24);
    }
    else
    {
        b->link = NULL;
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

bool zConditional_Evaluate(_zConditional* c)
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
                uint32 id = c->asset->value_asset;
                if (id != 0)
                    context = zSceneFindObject(id);
            }
        }
    }

    if (v == NULL)
        return 0;

    uint32 temp = v->varCB(context);

    switch (c->asset->op)
    {
    case CONDITION_EQ:
        return temp == c->asset->constNum;

    case CONDITION_GT:
        return temp > c->asset->constNum;

    case CONDITION_LT:
        return temp < c->asset->constNum;

    case CONDITION_GE:
        return temp >= c->asset->constNum;

    case CONDITION_LE:
        return temp <= c->asset->constNum;

    case CONDITION_NE:
        return temp != c->asset->constNum;

    default:
        return 0;
    }
}

#if 0
// This doesn't work because it's missing a single branch instruction
// The original assembly has a redundant branch instruction:
//   /* 80052814 0004F614  48 00 00 48 */ b lbl_8005285C
//   /* 80052818 0004F618  48 00 00 44 */ b lbl_8005285C
// But this code only generates a single one of those branch instructions,
// otherwise, it is identical.
int32 zConditionalEventCB(xBase* arg1, xBase* arg2, uint32 toEvent, const float32* fp, xBase* other)
{
    switch (toEvent)
    {
    case eEventTrue:
        if (zConditional_Evaluate((_zConditional*)arg2))
        {
            zEntEvent(arg2, arg2, eEventTrue);
        }
        else
        {
            zEntEvent(arg2, arg2, eEventFalse);
        }
        break;

    case eEventReset:
        zConditionalReset((_zConditional*)arg2);
        break;
    }

    return eEventEnable;
}
#endif
