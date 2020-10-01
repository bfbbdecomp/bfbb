#ifndef XBASE_H
#define XBASE_H

#include "xLinkAsset.h"
#include "xserializer.h"

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct xBase;

typedef int32 (*xBaseEventCB)(xBase*, xBase*, uint32, const float32*, xBase*);

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	xBaseEventCB eventFunc;
};

void xBaseInit(xBase* xb, xBaseAsset* asset);
void xBaseSetup(xBase* xb);
void xBaseSave(xBase* ent, xSerial* s);
void xBaseLoad(xBase* ent, xSerial* s);
void xBaseReset(xBase* xb, xBaseAsset* asset);
void xBaseValidate(xBase* xb);
bool xBaseIsEnabled(const xBase* xb);
void xBaseDisable(xBase* xb);
void xBaseEnable(xBase* xb);

#endif