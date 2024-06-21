#include "xFactory.h"
#include "xMemMgr.h"

#include <types.h>
#include <string.h>

xFactory::xFactory(int32 maxTypes)
{
    uint32 amt = maxTypes * sizeof(XGOFTypeInfo);
    this->infopool = (XGOFTypeInfo*)xMemAllocSize(amt);
    memset(this->infopool, 0, amt);
    XOrdInit(&this->infolist, maxTypes, 0);
}

xFactory::~xFactory()
{
    this->infopool = NULL;
    XOrdDone(&this->infolist, 0);
}

static int32 OrdTest_infotype(const void* vkey, void* vitem);
static int32 OrdComp_infotype(void* vkey, void* vitem);

int32 xFactory::RegItemType(XGOFTypeInfo* info)
{
    int32 rc = 0;
    XGOFTypeInfo* tptr = info;
    XGOFTypeInfo* nextrec;

    while (tptr->tid)
    {
        rc = 1;

        if (!tptr->creator)
        {
            rc = 0;
            break;
        }

        if (!tptr->destroyer)
        {
            rc = 0;
            break;
        }

        if (infolist.cnt >= infolist.max)
        {
            rc = -2;
            break;
        }

        int32 idx = XOrdLookup(&infolist, tptr, OrdTest_infotype);

        if (idx >= 0)
        {
            rc = -1;
            break;
        }

        nextrec = &infopool[infolist.cnt];
        nextrec->tid = tptr->tid;
        nextrec->creator = tptr->creator;
        nextrec->destroyer = tptr->destroyer;

        XOrdInsert(&infolist, nextrec, OrdComp_infotype);

        tptr++;
    }

    return rc;
}

int32 xFactory::RegItemType(int32 tid, XGOFTypeInfoCreator create, XGOFTypeInfoDestroyer destroy)
{
    XGOFTypeInfo typerec[2] = {};

    typerec[0].tid = tid;
    typerec[0].creator = create;
    typerec[0].destroyer = destroy;

    return RegItemType(typerec);
}

void xFactory::GrowDataEnable(xBase* user, int32 isResume)
{
    if (isResume)
    {
        growContextData.Resume(user);
    }
    else
    {
        growContextData.Init(user);
    }
}

void xFactory::GrowDataDisable()
{
    growContextData.Done();
}

xFactoryInst* xFactory::CreateItem(int32 typeID, void* userdata, RyzMemGrow* callerzgrow)
{
    int32 idx;
    xFactoryInst* item;
    XGOFTypeInfo pattern = {};
    XGOFTypeInfo* darec = NULL;
    RyzMemGrow* grow = callerzgrow;

    pattern.tid = typeID;

    idx = XOrdLookup(&infolist, &pattern, OrdTest_infotype);

    if (idx >= 0)
    {
        darec = (XGOFTypeInfo*)infolist.list[idx];
    }

    if (!darec)
    {
        return NULL;
    }

    if (!darec->creator)
    {
        return NULL;
    }

    if (!darec->destroyer)
    {
        return NULL;
    }

    if (!grow && growContextData.IsEnabled())
    {
        grow = &growContextData;
    }

    item = darec->creator(darec->tid, grow, userdata);

    if (!item)
    {
        return item;
    }

    item->itemType = darec->tid;
    item->prevprod = NULL;
    item->nextprod = NULL;

    if (products)
    {
        item->nextprod = products;
        products->prevprod = item;
        products = item;
    }
    else
    {
        products = item;
    }

    return item;
}

void xFactory::DestroyAll()
{
    while (products)
    {
        DestroyItem(products);
    }
}

void xFactory::DestroyItem(xFactoryInst* item)
{
    int32 idx;
    XGOFTypeInfo pattern = {};

    pattern.tid = item->itemType;

    if (item)
    {
        if (products == item)
        {
            products = item->nextprod;

            if (products)
            {
                products->prevprod = NULL;
            }
        }

        if (item->prevprod)
        {
            item->prevprod->nextprod = item->nextprod;
        }

        if (item->nextprod)
        {
            item->nextprod->prevprod = item->prevprod;
        }

        item->prevprod = NULL;
        item->nextprod = NULL;

        idx = XOrdLookup(&infolist, &pattern, OrdTest_infotype);

        ((XGOFTypeInfo*)infolist.list[idx])->destroyer(item);
    }
}

static int32 OrdTest_infotype(const void* vkey, void* vitem)
{
    int32 rc;

    if (((XGOFTypeInfo*)vkey)->tid < ((XGOFTypeInfo*)vitem)->tid)
    {
        rc = -1;
    }
    else if (((XGOFTypeInfo*)vkey)->tid > ((XGOFTypeInfo*)vitem)->tid)
    {
        rc = 1;
    }
    else
    {
        rc = 0;
    }

    return rc;
}

static int32 OrdComp_infotype(void* vkey, void* vitem)
{
    int32 rc;

    if (((XGOFTypeInfo*)vkey)->tid < ((XGOFTypeInfo*)vitem)->tid)
    {
        rc = -1;
    }
    else if (((XGOFTypeInfo*)vkey)->tid > ((XGOFTypeInfo*)vitem)->tid)
    {
        rc = 1;
    }
    else
    {
        rc = 0;
    }

    return rc;
}