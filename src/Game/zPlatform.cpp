#include "zPlatform.h"

#include <types.h>


void genericPlatRender(xEnt* ent)
{
    if (!ent->model || !xEntIsVisible(ent))
    {
        return;
    }

    xModelRender(ent->model);
}


void zPlatform_Init(void* plat, void* asset)
{
    zPlatform_Init((zPlatform*)plat, (xEntAsset*)asset);
}








void zPlatform_Save(zPlatform* ent, xSerial* s)
{
    zEntSave(ent, s);
}


void zPlatform_Load(zPlatform* ent, xSerial* s)
{
    zEntLoad(ent, s);
}
