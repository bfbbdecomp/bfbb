#ifndef XBASE_H
#define XBASE_H

#include "xLinkAsset.h"
#include "xserializer.h"

// Size: 0x8
struct xBaseAsset
{
    U32 id;
    U8 baseType;
    U8 linkCount;
    U16 baseFlags;
};

struct xBase;

typedef S32 (*xBaseEventCB)(xBase*, xBase*, U32, const F32*, xBase*);

// Size: 0x10
struct xBase
{
    U32 id;
    U8 baseType; // see en_ZBASETYPE in zBase.h
    U8 linkCount;
    U16 baseFlags;
    xLinkAsset* link;
    xBaseEventCB eventFunc; // 0xC
};

void xBaseInit(xBase* xb, xBaseAsset* asset);
void xBaseSetup(xBase* xb);
void xBaseSave(xBase* ent, xSerial* s);
void xBaseLoad(xBase* ent, xSerial* s);
void xBaseReset(xBase* xb, xBaseAsset* asset);
U32 xBaseIsValid(xBase* xb);
void xBaseValidate(xBase* xb);
bool xBaseIsEnabled(const xBase* xb);
void xBaseDisable(xBase* xb);
void xBaseEnable(xBase* xb);

#endif
