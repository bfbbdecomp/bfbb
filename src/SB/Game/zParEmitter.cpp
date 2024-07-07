#include "zParEmitter.h"

#include <types.h>
#include "zBase.h"
#include "zGlobals.h"
#include "xString.h"

zParEmitter* zParEmitterFind(U32 asset_id)
{
    zScene* s = globals.sceneCur;

    if (s == NULL)
    {
        return NULL;
    }

    zParEmitter* pe = (zParEmitter*)s->baseList[eBaseTypeParticleEmitter];

    for (S32 i = s->baseCount[eBaseTypeParticleEmitter]; i > 0; i--)
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
    U32 asset_id = xStrHash(asset_name);
    return zParEmitterFind(asset_id);
}
