#include "zTalkBox.h"

#include <types.h>

namespace
{
    struct SharedTalkboxState
    {
        void* padding[2]; // FIXME: variables not verified
        ztalkbox* active;
    };

    SharedTalkboxState ztalkbox_shared;
}

ztalkbox* ztalkbox::get_active()
{
    return ztalkbox_shared.active;
}
