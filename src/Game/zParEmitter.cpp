#include "zParEmitter.h"

zParEmitter* zParEmitterFind(unsigned int asset_id)
{
    zScene* s = globals.sceneCur;

    if (s == NULL)
    {
        return NULL;
    }

    // TODO: figure out meaning of hardcoded 38 value
    zParEmitter* pe = (zParEmitter*) s->baseList[38];

    for (int i = s->baseCount[38]; i > 0; i--)
    {
        if (pe->tasset->id == asset_id)
        {
            return pe;
        }
        pe++;
    }

    return NULL;
}

zParEmitter* zParEmitterFind(const char* asset_name)
{
    unsigned int asset_id = xStrHash(asset_name);
    return zParEmitterFind(asset_id);
}