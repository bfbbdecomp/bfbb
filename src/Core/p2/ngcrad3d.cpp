#include "ngcrad3d.h"

#include <types.h>

// func_800D4A14
#pragma GLOBAL_ASM("asm/Core/p2/ngcrad3d.s", "Setup_surface_array__Fv")

// func_800D4A84
#pragma GLOBAL_ASM("asm/Core/p2/ngcrad3d.s", "Open_RAD_3D_image")

// func_800D4B80
#pragma GLOBAL_ASM("asm/Core/p2/ngcrad3d.s", "Close_RAD_3D_image")

// func_800D4BCC
#pragma GLOBAL_ASM("asm/Core/p2/ngcrad3d.s", "Lock_RAD_3D_image")

// func_800D4C1C
#pragma GLOBAL_ASM("asm/Core/p2/ngcrad3d.s", "Unlock_RAD_3D_image")

// func_800D4C4C
#pragma GLOBAL_ASM("asm/Core/p2/ngcrad3d.s", "Submit_vertices__Fffffllf")

// func_800D4E80
#pragma GLOBAL_ASM("asm/Core/p2/ngcrad3d.s", "GXEnd")

// func_800D4E84
#pragma GLOBAL_ASM("asm/Core/p2/ngcrad3d.s", "GXTexCoord2f32")

// func_800D4E94
#pragma GLOBAL_ASM("asm/Core/p2/ngcrad3d.s", "GXColor4u8")

// func_800D4EAC
#pragma GLOBAL_ASM("asm/Core/p2/ngcrad3d.s", "GXPosition3s16")

// func_800D4EC0
#pragma GLOBAL_ASM("asm/Core/p2/ngcrad3d.s", "Blit_RAD_3D_image")

// func_800D5094
#pragma GLOBAL_ASM("asm/Core/p2/ngcrad3d.s", "GXSetTexCoordGen")
