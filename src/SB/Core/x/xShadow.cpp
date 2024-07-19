#include <types.h>
#include "rwcore.h"
#include "rwplcore.h"
#include "xShadow.h"

static RwRaster* gc_saveraster;
static RpLight* ShadowLight;
static const RwRGBAReal ShadowLightColor =
{
    0, 0, 0, 1
};
static int shadow_ent_count;

void xShadowInit()
{
    xShadowCameraCreate();
    gc_saveraster = RwRasterCreate(256, 256, 32, 1284);
    shadow_ent_count = 0; // Scheduling
    ShadowLight = RpLightCreate(1);
    RpLightSetColor(ShadowLight, &ShadowLightColor); // Scheduling
    RwFrame* frame = RwFrameCreate();
    _rwObjectHasFrameSetFrame(ShadowLight, frame);
}
