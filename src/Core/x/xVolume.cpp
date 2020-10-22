#include "xVolume.h"

#include <types.h>

// xVolume::Init(xVolumeAsset*)
#pragma GLOBAL_ASM("asm/Core/x/xVolume.s", "Init__7xVolumeFP12xVolumeAsset")

// xVolume::Reset()
#pragma GLOBAL_ASM("asm/Core/x/xVolume.s", "Reset__7xVolumeFv")

// xVolume::Save(xSerial*)
#pragma GLOBAL_ASM("asm/Core/x/xVolume.s", "Save__7xVolumeFP7xSerial")

// xVolume::Load(xSerial*)
#pragma GLOBAL_ASM("asm/Core/x/xVolume.s", "Load__7xVolumeFP7xSerial")

// xVolume::GetBound()
#pragma GLOBAL_ASM("asm/Core/x/xVolume.s", "GetBound__7xVolumeFv")
