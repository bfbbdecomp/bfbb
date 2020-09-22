#include "xBase.h"

void xBaseInit(xBase* xb, xBaseAsset* asset)
{
    xb->id = asset->id;
    xb->baseType = asset->baseType;
    xb->baseFlags = asset->baseFlags;
    xb->linkCount = asset->linkCount;
    xb->link = 0;

    xBaseValidate(xb);
}

void xBaseSetup(xBase* xb)
{
    return;
}

void xBaseSave(xBase* ent, xSerial* s)
{
    if (xBaseIsEnabled(ent))
    {
        s->Write_b1(1);
    }
    else
    {
        s->Write_b1(0);
    }
}

void xBaseLoad(xBase* ent, xSerial* s)
{
    int b = 0;
    s->Read_b1(&b);

    if (b)
    {
        xBaseEnable(ent);
    }
    else
    {
        xBaseDisable(ent);
    }
}

void xBaseReset(xBase* xb, xBaseAsset* asset)
{
    xb->baseFlags = (xb->baseFlags & 0x10) | (asset->baseFlags & ~0x10);

    xBaseValidate(xb);
}

void xBaseValidate(xBase* xb)
{
    xb->baseFlags |= 0x4;
}

bool xBaseIsEnabled(const xBase* xb)
{
    return (xb->baseFlags & 0x1);
}

void xBaseDisable(xBase* xb)
{
    xb->baseFlags &= ~0x1;
}

void xBaseEnable(xBase* xb)
{
    xb->baseFlags |= 0x1;
}