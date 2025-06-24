#include "rwplcore.h"
#include "rwcore.h"
#include "rpmatfx.h"
#include <plugin/matfx/multiTexEffect.h>

#define MAXPLATFORMID (rwID_PCD3D9)
#define DEFAULTPATHSIZE 256
#define rwID_MULTITEXPLUGIN MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x2c)

typedef union RpPtrMTEffect RpPtrMTEffect;
union RpPtrMTEffect
{
    RpMTEffect* ptrMTEffect;
    const RpMTEffect* constptrMTEffect;
};

typedef union RpPtrMTEffectDict RpPtrMTEffectDict;
union RpPtrMTEffectDict
{
    RpMTEffectDict* ptrMTEffectDict;
    const RpMTEffectDict* constptrMTEffectDict;
};

typedef struct EffectRegEntry EffectRegEntry;
struct EffectRegEntry
{
    RwPlatformID platformID;

    rpMTEffectDestroyCallBack destroy;
    rpMTEffectStreamReadCallBack streamRead;
    rpMTEffectStreamWriteCallBack streamWrite;
    rpMTEffectStreamGetSizeCallBack streamGetSize;
};

typedef struct BinaryEffectDict BinaryEffectDict;
struct BinaryEffectDict
{
    RwUInt32 numEffects;
};

typedef struct BinaryEffect BinaryEffect;
struct BinaryEffect
{
    RwUInt32 platformID;
};

typedef struct Iterator Iterator;
struct Iterator
{
    const RwLLLink* cur;
    const RwLLLink* end;
};

static EffectRegEntry EffectRegEntries[MAXPLATFORMID + 1];

static RpMTEffectDict* DummyDict = (RpMTEffectDict*)NULL;

RwBool _rpMTEffectSystemInit()
{
    memset(EffectRegEntries, 0, sizeof(EffectRegEntries));
    return TRUE;
}

RwBool _rpMTEffectRegisterPlatform(RwPlatformID platformID, rpMTEffectStreamReadCallBack streamRead,
                                   rpMTEffectStreamWriteCallBack streamWrite,
                                   rpMTEffectStreamGetSizeCallBack streamGetSize,
                                   rpMTEffectDestroyCallBack destroy)
{
    EffectRegEntry* regEntry;

    regEntry = &EffectRegEntries[platformID];
    regEntry->platformID = platformID;
    regEntry->streamRead = streamRead;
    regEntry->streamWrite = streamWrite;
    regEntry->streamGetSize = streamGetSize;
    regEntry->destroy = destroy;

    return TRUE;
}

RwBool _rpMTEffectOpen()
{
}

RwBool _rpMTEffectClose()
{
}

RpMTEffect* _rpMTEffectInit(RpMTEffect* effect, RwPlatformID platformID)
{
    memset(effect, 0, sizeof(RpMTEffect));

    effect->platformID = platformID;
    effect->refCount = 1;
    rwLLLinkInitialize(&effect->dictLink);

    // if (platformID && RPMULTITEXTUREGLOBAL(effect.currentDict))
    // {
    //     RpMTEffectDictAddEffect(RPMULTITEXTUREGLOBAL(effect.currentDict), effect);
    // }

    return (effect);
}

RpMTEffectDict* RpMTEffectDictCreate(void)
{
    // What?
    RpMTEffectDict* dict;
    RwUInt32 size;

    size = sizeof(RpMTEffectDict);
    dict = (RpMTEffectDict*)RwMalloc(size);
    if (!dict)
    {
        RwErrorSet(NULL);
        return ((RpMTEffectDict*)NULL);
    }

    rwLinkListInitialize(&dict->effectList);

    return dict;
}

RpMTEffectDict* RpMTEffectDictAddEffect(RpMTEffectDict* dict, RpMTEffect* effect)
{
    if (effect->dictLink.next)
    {
        rwLinkListRemoveLLLink(&effect->dictLink);
        RpMTEffectDestroy(effect);
    }
    rwLinkListAddLLLink(&dict->effectList, &effect->dictLink);
    RpMTEffectAddRef(effect);

    return dict;
}

RpMTEffect* RpMTEffectDictRemoveEffect(RpMTEffect* effect)
{
    if (effect->dictLink.next)
    {
        rwLinkListRemoveLLLink(&effect->dictLink);
        RpMTEffectDestroy(effect);
    }

    return effect;
}

RpMTEffect* RpMTEffectCreateDummy(void)
{
}

RpMTEffect* RpMTEffectSetName(RpMTEffect* effect, RwChar* name)
{
    rwstrncpy(effect->name, name, rpMTEFFECTNAMELENGTH - 1);

    return effect;
}

RpMTEffect* RpMTEffectAddRef(RpMTEffect* effect)
{
    effect->refCount++;

    return effect;
}
