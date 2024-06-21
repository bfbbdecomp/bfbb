#ifndef XFACTORY_H
#define XFACTORY_H

#include <types.h>

#include "xRMemData.h"
#include "xordarray.h"

struct xFactoryInst : RyzMemData
{
    int32 itemType;
    xFactoryInst* nextprod;
    xFactoryInst* prevprod;

    xFactoryInst();
    ~xFactoryInst();
};

typedef xFactoryInst* (*XGOFTypeInfoCreator)(int32, RyzMemGrow*, void*);
typedef void (*XGOFTypeInfoDestroyer)(xFactoryInst*);

struct XGOFTypeInfo
{
    int32 tid;
    XGOFTypeInfoCreator creator;
    XGOFTypeInfoDestroyer destroyer;
};

struct xFactory : RyzMemData
{
    XGOFTypeInfo* infopool;
    st_XORDEREDARRAY infolist;
    xFactoryInst* products;
    RyzMemGrow growContextData;

    xFactory(int32 maxTypes);
    void DestroyItem(xFactoryInst* item);
    void DestroyAll();
    xFactoryInst* CreateItem(int32 typeID, void* userdata, RyzMemGrow* callerzgrow);
    void GrowDataDisable();
    void GrowDataEnable(xBase* user, int32 isResume);
    int32 RegItemType(int32 tid, XGOFTypeInfoCreator create, XGOFTypeInfoDestroyer destroy);
    int32 RegItemType(XGOFTypeInfo* info);
    ~xFactory();
};

#endif