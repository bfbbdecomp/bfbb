#ifndef ZPAREMITTER_H
#define ZPAREMITTER_H

#include "../Core/x/xParEmitter.h"

struct zParEmitter : xParEmitter
{
};

zParEmitter* zParEmitterFind(uint32 asset_id);
zParEmitter* zParEmitterFind(const char* asset_name);

#endif