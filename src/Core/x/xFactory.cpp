#include "xFactory.h"

#include <types.h>

// xFactory::xFactory(int)
#pragma GLOBAL_ASM("asm/Core/x/xFactory.s", "__ct__8xFactoryFi")

// xFactory::~xFactory()
#pragma GLOBAL_ASM("asm/Core/x/xFactory.s", "__dt__8xFactoryFv")

// xFactory::RegItemType(XGOFTypeInfo*)
#pragma GLOBAL_ASM("asm/Core/x/xFactory.s", "RegItemType__8xFactoryFP12XGOFTypeInfo")

// xFactory::RegItemType(int,xFactoryInst* (*)(int, RyzMemGrow*, void*),void (*)(xFactoryInst*))
#pragma GLOBAL_ASM("asm/Core/x/xFactory.s", "RegItemType__8xFactoryFiPFiP10RyzMemGrowPv_P12xFactoryInstPFP12xFactoryInst_v")

// xFactory::GrowDataEnable(xBase*,int)
#pragma GLOBAL_ASM("asm/Core/x/xFactory.s", "GrowDataEnable__8xFactoryFP5xBasei")

// xFactory::GrowDataDisable()
#pragma GLOBAL_ASM("asm/Core/x/xFactory.s", "GrowDataDisable__8xFactoryFv")

// xFactory::CreateItem(int,void*,RyzMemGrow*)
#pragma GLOBAL_ASM("asm/Core/x/xFactory.s", "CreateItem__8xFactoryFiPvP10RyzMemGrow")

// xFactory::DestroyAll()
#pragma GLOBAL_ASM("asm/Core/x/xFactory.s", "DestroyAll__8xFactoryFv")

// xFactory::DestroyItem(xFactoryInst*)
#pragma GLOBAL_ASM("asm/Core/x/xFactory.s", "DestroyItem__8xFactoryFP12xFactoryInst")
