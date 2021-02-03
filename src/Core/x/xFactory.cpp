#include "xFactory.h"
#include "xMemMgr.h"

#include <types.h>
#include <string.h>

xFactory::xFactory(int32 maxTypes)
{
    this->infopool = (XGOFTypeInfo*)xMemAllocSize(maxTypes * sizeof(XGOFTypeInfo));
    memset(this->infopool, 0, maxTypes * sizeof(XGOFTypeInfo));
    XOrdInit(&this->infolist, maxTypes, 0);
}

xFactory::~xFactory()
{
    this->infopool = NULL;
    XOrdDone(&this->infolist, 0);
}

#if 1

// func_8010F3A8
#pragma GLOBAL_ASM("asm/Core/x/xFactory.s", "RegItemType__8xFactoryFP12XGOFTypeInfo")

#else

// WIP.
int32 xFactory::RegItemType(XGOFTypeInfo* info)
{
    int32 worked = 0;
    while (true)
    {
        if (info->tid == 0)
        {
            return worked;
        }
        worked = 1;
        if (info->creator == NULL)
        {
            return 0;
        }
        if (info->destroyer == NULL)
        {
            return 0;
        }
        if ((this->infolist).max <= (this->infolist).cnt)
            break;
        int32 item =
    }
    return -2;
}

#endif

#if 1

// func_8010F498
#pragma GLOBAL_ASM(                                                                                \
    "asm/Core/x/xFactory.s",                                                                       \
    "RegItemType__8xFactoryFiPFiP10RyzMemGrowPv_P12xFactoryInstPFP12xFactoryInst_v")

#else

// WIP. Use globals.
int32 xFactory::RegItemType(int32 tid, xFactoryInst* (*create)(int32, RyzMemGrow*, void*),
                            void (*destroy)(xFactoryInst*))
{
    XGOFTypeInfo tptr;
    XGOFTypeInfo nextrec;
    nextrec.tid = 0;
    nextrec.creator = NULL;
    nextrec.destroyer = NULL;
    tptr.tid = tid;
    tptr.creator = create;
    tptr.destroyer = destroy;
    return RegItemType(&tptr);
}

#endif

void xFactory::GrowDataEnable(xBase* user, int32 isResume)
{
    if (isResume)
    {
        this->growContextData.Resume();
    }
    else
    {
        this->growContextData.Init(user);
    }
}

void xFactory::GrowDataDisable()
{
    this->growContextData.Done();
}

// func_8010F55C
#pragma GLOBAL_ASM("asm/Core/x/xFactory.s", "CreateItem__8xFactoryFiPvP10RyzMemGrow")

// func_8010F6AC
#pragma GLOBAL_ASM("asm/Core/x/xFactory.s", "DestroyAll__8xFactoryFv")

// func_8010F6EC
#pragma GLOBAL_ASM("asm/Core/x/xFactory.s", "DestroyItem__8xFactoryFP12xFactoryInst")

#if 1

// func_8010F7D4
#pragma GLOBAL_ASM("asm/Core/x/xFactory.s", "OrdTest_infotype__FPCvPv")

#else

// This keeps getting duplicated for some reason. Structure is identical to the one below, get this one, you get that one.
int32 OrdTest_infotype(void* vkey, void* vitem)
{
    if (*(int32*)vkey < *(int32*)vitem)
    {
        return -1;
    }
    else if (*(int32*)vkey > *(int32*)vitem)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

#endif

#if 1

// func_8010F800
#pragma GLOBAL_ASM("asm/Core/x/xFactory.s", "OrdComp_infotype__FPvPv")

#else

// This keeps getting duplicated for some reason.
int32 OrdComp_infotype(void* vkey, void* vitem)
{
    if (*(int32*)vkey < *(int32*)vitem)
    {
        return -1;
    }
    else if (*(int32*)vkey > *(int32*)vitem)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

#endif