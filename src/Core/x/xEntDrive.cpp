#include "xEntDrive.h"

#include <types.h>

// xEntDriveInit(xEntDrive*,xEnt*)
#pragma GLOBAL_ASM("asm/Core/x/xEntDrive.s", "xEntDriveInit__FP9xEntDriveP4xEnt")

// xEntDriveMount(xEntDrive*,xEnt*,float,const xCollis*)
#pragma GLOBAL_ASM("asm/Core/x/xEntDrive.s", "xEntDriveMount__FP9xEntDriveP4xEntfPC7xCollis")

// xEntDriveDismount(xEntDrive*,float)
#pragma GLOBAL_ASM("asm/Core/x/xEntDrive.s", "xEntDriveDismount__FP9xEntDrivef")

// xEntDriveUpdate(xEntDrive*,xScene*,float,const xCollis*)
#pragma GLOBAL_ASM("asm/Core/x/xEntDrive.s", "xEntDriveUpdate__FP9xEntDriveP6xScenefPC7xCollis")

// xCollis::tri_data::operator =(const xCollis::tri_data&)
#pragma GLOBAL_ASM("asm/Core/x/xEntDrive.s", "__as__Q27xCollis8tri_dataFRCQ27xCollis8tri_data")

// xVec3::operator =(float)
#pragma GLOBAL_ASM("asm/Core/x/xEntDrive.s", "__as__5xVec3Ff")
