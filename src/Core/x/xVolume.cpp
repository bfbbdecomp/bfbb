#include <types.h>

#include "xBound.h"
#include "xVolume.h"

// func_80118934
#pragma GLOBAL_ASM("asm/Core/x/xVolume.s", "Init__7xVolumeFP12xVolumeAsset")

void xVolume::Reset()
{
    xBaseReset(this, this->asset);
}

void xVolume::Save(xSerial* s)
{
    xBaseSave(this, s);
}

void xVolume::Load(xSerial* s)
{
    xBaseLoad(this, s);
}

xBound* xVolume::GetBound()
{
    return &this->asset->bound;
}
