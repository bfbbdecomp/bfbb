#ifndef XBASE_H
#define XBASE_H

#include "xLinkAsset.h"
#include "xserializer.h"

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
};

struct xBase;

typedef int(*xBaseEventCB)(xBase*, xBase*, unsigned int, const float*, xBase*);

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
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