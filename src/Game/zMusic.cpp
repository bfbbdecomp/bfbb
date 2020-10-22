#include "zMusic.h"

#include <types.h>

// volume_reset()
#pragma GLOBAL_ASM("asm/Game/zMusic.s", "volume_reset__Fv")

// zMusicRefreshVolume()
#pragma GLOBAL_ASM("asm/Game/zMusic.s", "zMusicRefreshVolume__Fv")

// zMusicInit()
#pragma GLOBAL_ASM("asm/Game/zMusic.s", "zMusicInit__Fv")

// getCurrLevelMusicEnum()
#pragma GLOBAL_ASM("asm/Game/zMusic.s", "getCurrLevelMusicEnum__Fv")

// zMusicDo(int)
#pragma GLOBAL_ASM("asm/Game/zMusic.s", "zMusicDo__Fi")

// zMusicNotify(int)
#pragma GLOBAL_ASM("asm/Game/zMusic.s", "zMusicNotify__Fi")

// zMusicNotifyEvent(const float*,xBase*)
#pragma GLOBAL_ASM("asm/Game/zMusic.s", "zMusicNotifyEvent__FPCfP5xBase")

// zMusicUpdate(float)
#pragma GLOBAL_ASM("asm/Game/zMusic.s", "zMusicUpdate__Ff")

// volume_update(float)
#pragma GLOBAL_ASM("asm/Game/zMusic.s", "volume_update__Ff")

// zMusicKill()
#pragma GLOBAL_ASM("asm/Game/zMusic.s", "zMusicKill__Fv")

// zMusicPause()
#pragma GLOBAL_ASM("asm/Game/zMusic.s", "zMusicPause__Fv")

// zMusicUnpause(int)
#pragma GLOBAL_ASM("asm/Game/zMusic.s", "zMusicUnpause__Fi")

// zMusicSetVolume(float,float)
#pragma GLOBAL_ASM("asm/Game/zMusic.s", "zMusicSetVolume__Fff")

// zMusicReset()
#pragma GLOBAL_ASM("asm/Game/zMusic.s", "zMusicReset__Fv")
