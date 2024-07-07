#include "zGust.h"

#include <types.h>

#if 0
// WIP.
void zGustUpdateFX(F32 seconds)
{
    for (S32 i = 0; i < ngusts; i++)
    {
        zGust* curr = gusts[i];
        if (curr->flags & 1)
        {
            UpdateGustFX(curr, seconds);
        }
    }
}

#endif
