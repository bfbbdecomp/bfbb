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

struct XGOFTypeInfo
{
    int32 tid;
    xFactoryInst* (*creator)(int32, RyzMemGrow*, void*);
    void (*destroyer)(xFactoryInst*);
};

struct xFactory : RyzMemData
{
    XGOFTypeInfo* infopool;
    st_XORDEREDARRAY infolist;
    xFactoryInst* products;
    RyzMemGrow growContextData;

    void DestroyItem(xFactoryInst* item);
    void DestroyAll();
    xFactoryInst* CreateItem(int32 typeID, void* userdata, RyzMemGrow* callerzgrow);
    void GrowDataDisable();
    void GrowDataEnable(xBase* user, int32 isResume);
    int32 RegItemType(int32 tid, xFactoryInst* (*create)(int32, RyzMemGrow*, void*),
                      void (*destroy)(xFactoryInst*));
    int32 RegItemType(XGOFTypeInfo* info);
};

#endif