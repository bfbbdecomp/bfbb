#ifndef ZPAREMITTER_H
#define ZPAREMITTER_H

#include "xParEmitter.h"

#include <types.h>

struct zParEmitter : xParEmitter
{
};

zParEmitter* zParEmitterFind(U32 asset_id);
zParEmitter* zParEmitterFind(const char* asset_name);

#endif
