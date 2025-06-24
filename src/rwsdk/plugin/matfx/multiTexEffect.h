#ifndef RPMATFX_MULTITEXEFFECT_H
#define RPMATFX_MULTITEXEFFECT_H

#include "rwcore.h"
#include "rpworld.h"

#define rpMTEFFECTNAMELENGTH 32

typedef struct RpMTEffect RpMTEffect;

typedef struct RpMTEffectDict RpMTEffectDict;

typedef RpMTEffect* (*RpMTEffectCallBack)(RpMTEffect* effect, void* data);

typedef RpMTEffectDict* (*RpMTEffectDictCallBack)(RpMTEffectDict* dict, void* data);

struct RpMTEffectDict
{
    RwLinkList effectList;
    RwLLLink dictListLink;
};

typedef struct rpMTEffectGlobals rpMTEffectGlobals;
struct rpMTEffectGlobals
{
    RwLinkList dictList;
    RpMTEffectDict* currentDict;
    RwInt32 pathSize;
    RwChar* path;
    RwChar* scratchMem;
};

#if (!defined(DOXYGEN))

typedef enum RwPlatformID RwPlatformID;

struct RpMTEffect
{
    RwPlatformID platformID;
    RwUInt32 refCount;
    RwChar name[rpMTEFFECTNAMELENGTH];
    RwLLLink dictLink;
};
#endif

typedef void (*rpMTEffectDestroyCallBack)(RpMTEffect* effect);
typedef RwInt32 (*rpMTEffectStreamGetSizeCallBack)(const RpMTEffect* effect);
typedef RpMTEffect* (*rpMTEffectStreamReadCallBack)(RwStream* stream, RwPlatformID platformID,
                                                    RwUInt32 version, RwUInt32 length);
typedef const RpMTEffect* (*rpMTEffectStreamWriteCallBack)(const RpMTEffect* effect,
                                                           RwStream* stream);

#ifdef __cplusplus
extern "C" {
#endif

extern RpMTEffectDict* RpMTEffectDictCreate(void);

extern void RpMTEffectDictDestroy(RpMTEffectDict* dict);

extern RpMTEffectDict* RpMTEffectDictAddEffect(RpMTEffectDict* dict, RpMTEffect* effect);

extern RpMTEffect* RpMTEffectDictRemoveEffect(RpMTEffect* effect);

extern RpMTEffect* RpMTEffectDictFindNamedEffect(const RpMTEffectDict* dict, const RwChar* name);

extern RpMTEffectDict* RpMTEffectDictSetCurrent(RpMTEffectDict* dict);

extern RpMTEffectDict* RpMTEffectDictGetCurrent(void);

extern RwUInt32 RpMTEffectDictStreamGetSize(const RpMTEffectDict* dict);

extern const RpMTEffectDict* RpMTEffectDictStreamWrite(const RpMTEffectDict* dict,
                                                       RwStream* stream);

extern RpMTEffectDict* RpMTEffectDictStreamRead(RwStream* stream);

extern RwBool RpMTEffectDictForAllDictionaries(RpMTEffectDictCallBack callBack, void* data);

extern const RpMTEffectDict* RpMTEffectDictForAllEffects(const RpMTEffectDict* dict,
                                                         RpMTEffectCallBack callBack, void* data);

extern const RwChar* RpMTEffectSetPath(const RwChar* path);

extern RwChar* RpMTEffectGetPath(void);

extern RpMTEffect* RpMTEffectCreateDummy(void);

extern void RpMTEffectDestroy(RpMTEffect* effect);

extern RwUInt32 RpMTEffectStreamGetSize(const RpMTEffect* effect);

extern const RpMTEffect* RpMTEffectStreamWrite(const RpMTEffect* effect, RwStream* stream);

extern RpMTEffect* RpMTEffectStreamRead(RwStream* stream);

extern RpMTEffect* RpMTEffectFind(RwChar* name);

extern const RpMTEffect* RpMTEffectWrite(const RpMTEffect* effect);

extern RpMTEffect* RpMTEffectSetName(RpMTEffect* effect, RwChar* name);

extern RwChar* RpMTEffectGetName(RpMTEffect* effect);

extern RpMTEffect* RpMTEffectAddRef(RpMTEffect* effect);

extern RwBool _rpMTEffectSystemInit(void);

extern RwBool _rpMTEffectRegisterPlatform(RwPlatformID platformID,
                                          rpMTEffectStreamReadCallBack streamRead,
                                          rpMTEffectStreamWriteCallBack streamWrite,
                                          rpMTEffectStreamGetSizeCallBack streamGetSize,
                                          rpMTEffectDestroyCallBack destroy);

extern RwBool _rpMTEffectOpen(void);

extern RwBool _rpMTEffectClose(void);

extern RpMTEffect* _rpMTEffectInit(RpMTEffect* effect, RwPlatformID platformID);

#ifdef __cplusplus
}
#endif

#endif
