#include "xRMemData.h"

#include <types.h>

// RyzMemData::operator new(unsigned long,int,RyzMemGrow*)
#pragma GLOBAL_ASM("asm/Core/x/xRMemData.s", "__nw__10RyzMemDataFUliP10RyzMemGrow")

// RyzMemData::operator delete(void*)
#pragma GLOBAL_ASM("asm/Core/x/xRMemData.s", "__dl__10RyzMemDataFPv")

// RyzMemGrow::Init(xBase*)
#pragma GLOBAL_ASM("asm/Core/x/xRMemData.s", "Init__10RyzMemGrowFP5xBase")

// RyzMemGrow::Resume(xBase*)
#pragma GLOBAL_ASM("asm/Core/x/xRMemData.s", "Resume__10RyzMemGrowFP5xBase")

// RyzMemGrow::Done()
#pragma GLOBAL_ASM("asm/Core/x/xRMemData.s", "Done__10RyzMemGrowFv")

// RyzMemGrow::IsEnabled()
#pragma GLOBAL_ASM("asm/Core/x/xRMemData.s", "IsEnabled__10RyzMemGrowFv")
