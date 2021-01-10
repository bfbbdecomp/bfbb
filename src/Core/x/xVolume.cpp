#include <types.h>

#include "xBound.h"
#include "xVolume.h"

// func_80118934
#pragma GLOBAL_ASM("asm/Core/x/xVolume.s", "Init__7xVolumeFP12xVolumeAsset")

// func_80118994
#pragma GLOBAL_ASM("asm/Core/x/xVolume.s", "Reset__7xVolumeFv")

// func_801189B8
#pragma GLOBAL_ASM("asm/Core/x/xVolume.s", "Save__7xVolumeFP7xSerial")

void xVolume::Load(xSerial* s)
{
    xBaseLoad(this, s);
}

xBound* xVolume::GetBound()
{
    return &this->asset->bound;
}
