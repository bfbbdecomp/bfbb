#ifndef XFACTORY_H
#define XFACTORY_H

#include <types.h>

#include "xRMemData.h"
#include "xordarray.h"

struct xFactoryInst : RyzMemData
{
    S32 itemType;
    xFactoryInst* nextprod;
    xFactoryInst* prevprod;

    xFactoryInst();
    ~xFactoryInst();
};

typedef xFactoryInst* (*XGOFTypeInfoCreator)(S32, RyzMemGrow*, void*);
typedef void (*XGOFTypeInfoDestroyer)(xFactoryInst*);

struct XGOFTypeInfo
{
    S32 tid;
    XGOFTypeInfoCreator creator;
    XGOFTypeInfoDestroyer destroyer;
};

struct xFactory : RyzMemData
{
    XGOFTypeInfo* infopool;
    st_XORDEREDARRAY infolist;
    xFactoryInst* products;
    RyzMemGrow growContextData;

    xFactory(S32 maxTypes);
    void DestroyItem(xFactoryInst* item);
    void DestroyAll();
    xFactoryInst* CreateItem(S32 typeID, void* userdata, RyzMemGrow* callerzgrow);
    void GrowDataDisable();
    void GrowDataEnable(xBase* user, S32 isResume);
    S32 RegItemType(S32 tid, XGOFTypeInfoCreator create, XGOFTypeInfoDestroyer destroy);
    S32 RegItemType(XGOFTypeInfo* info);
    ~xFactory();
};

#endif
