#include "zParCmd.h"
#include "zScene.h"
#include "zVolume.h"
#include "../src/Core/x/xParCmd.h"
#include "../src/Core/x/xString.h"

#include <types.h>
#include <string.h>
#include <stdio.h>

extern zVolume* sClipVolume[32];
extern int32 sClipVolumeTotal;

extern char* zParCmd_strings;


void zParCmdInit()
{
    xParCmdInit();
    xParCmdRegister(0x04, 0x2c, xParCmdJet_Update);
    xParCmdRegister(0x0e, 0x10, xParCmdPlayerCollision_Update);
    xParCmdRegister(0x10, 0x1c, xParCmdCustom_Update);
    xParCmdRegister(0x1a, 0x0c, xParCmdClipVolumes_Update);
    xParCmdRegister(0x1b, 0x0c, xParCmdAnimalMagentism_Update);
    xParCmdRegister(0x1c, 0x10, xParCmdDamagePlayer_Update);
    xParCmdRegister(0x16, 0x14, xParCmdApplyCamMat_Update);
    xParCmdRegister(0x11, 0x10, xParCmdKillDistance_Update);
}


#ifdef NON_MATCHING

void zParCmdFindClipVolumes()
{
    char findname[64];

    memset(sClipVolume, 0, sizeof(zVolume*) * 32);
    for (sClipVolumeTotal = 0; sClipVolumeTotal < 32; sClipVolumeTotal++)
    {
        sprintf(findname, "PARTICLE_CLIP_%d", sClipVolumeTotal + 1);
        zVolume* vol = (zVolume*)zSceneFindObject(xStrHash(findname));
        if (vol == NULL)
        {
            return;
        }
        sClipVolume[sClipVolumeTotal] = vol;
    }
}
#endif








void xParCmdPlayerCollision_Update(xParCmd* c, xParGroup* ps, float32 dt)
{
    return;
}
