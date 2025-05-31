#include <dolphin.h>
#include <dolphin/ax.h>

#include "ax/__ax.h"

// .sbss
static AXPROFILE* __AXProfile;
static u32 __AXMaxProfiles;
static u32 __AXCurrentProfile;
static u32 __AXProfileInitialized;

AXPROFILE* __AXGetCurrentProfile(void)
{
    AXPROFILE* profile;

    if (__AXProfileInitialized != 0U)
    {
        profile = &__AXProfile[__AXCurrentProfile];
        __AXCurrentProfile += 1;
        __AXCurrentProfile %= __AXMaxProfiles;
        return profile;
    }
    return 0;
}
