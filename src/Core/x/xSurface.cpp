#include "xSurface.h"

#include <types.h>

// xSurfaceInit(unsigned short)
#pragma GLOBAL_ASM("asm/Core/x/xSurface.s", "xSurfaceInit__FUs")

// xSurface::operator =(const xSurface&)
#pragma GLOBAL_ASM("asm/Core/x/xSurface.s", "__as__8xSurfaceFRC8xSurface")

// xBase::operator =(const xBase&)
#pragma GLOBAL_ASM("asm/Core/x/xSurface.s", "__as__5xBaseFRC5xBase")

// xSurfaceExit()
#pragma GLOBAL_ASM("asm/Core/x/xSurface.s", "xSurfaceExit__Fv")

// xSurfaceSave(xSurface*,xSerial*)
#pragma GLOBAL_ASM("asm/Core/x/xSurface.s", "xSurfaceSave__FP8xSurfaceP7xSerial")

// xSurfaceLoad(xSurface*,xSerial*)
#pragma GLOBAL_ASM("asm/Core/x/xSurface.s", "xSurfaceLoad__FP8xSurfaceP7xSerial")

// xSurfaceReset(xSurface*)
#pragma GLOBAL_ASM("asm/Core/x/xSurface.s", "xSurfaceReset__FP8xSurface")

// xSurfaceGetNumSurfaces()
#pragma GLOBAL_ASM("asm/Core/x/xSurface.s", "xSurfaceGetNumSurfaces__Fv")

// xSurfaceGetByIdx(unsigned short)
#pragma GLOBAL_ASM("asm/Core/x/xSurface.s", "xSurfaceGetByIdx__FUs")
