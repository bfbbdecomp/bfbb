#ifndef ZPAREMITTER_H
#define ZPAREMITTER_H

#include <types.h>
#include "zBase.h"
#include "zGlobals.h"
#include "../Core/x/xString.h"
#include "../Core/x/xParEmitter.h"

struct zParEmitter : xParEmitter
{
};

zParEmitter* zParEmitterFind(uint32 asset_id);
zParEmitter* zParEmitterFind(const char* asset_name);

#endif